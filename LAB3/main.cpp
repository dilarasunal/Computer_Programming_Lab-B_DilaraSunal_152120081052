#include <iostream>
#include <string>

using namespace std;

struct Page {
    string url;
    string title;
    int accessTime[3]={0, 1, 2};

    Page* next;
    Page* prev;
};

Page* head=nullptr;

void visit(string urlW, string titleW) {
    Page* newPage= new Page;
    newPage->url=urlW;
    newPage->title=titleW;
    newPage->accessTime[0] = hour;
    newPage->accessTime[1] = minute;
    newPage->accessTime[2] = second;

    newPage->next=head;
    newPage->prev=nullptr;

    if(head != nullptr) {
        head->prev=newPage;
    }
    head=newPage;
}

void moveBack(Page*& current) {
    if(current == nullptr) {
        cout<<"History is empty!"<endl;
        return;
    }
    current=current->prev;
    cout<<"Web adress: "<<current->url<<endl;
    cout<<"Title of website: "<<current->title;
}

void moveForward(Page*& current) {
    if(current == nullptr) {
        cout<<"History is empty!"<endl;
        return;
    }
    current=current->next;
    cout<<"Web adress: "<<current->url<<endl;
    cout<<"Title of website: "<<current->title;
}

void deletePage(Page*& current) {
    if(current==nullptr) {
        cout<<"History is empty!"<endl;
        return;
    }

    Page* temp=current;

    if(current->prev!=nullptr)
        current->prev->next = current->next;

    if(curren->next!=nullptr)
        current->next->prev = current->prev;

    if (current == head)
        head = current->next;

    current = current->next;


        cout<<"Page deleted: "<<temp->url<<endl;
        delete temp;
}

void printPages(Page* current) {
    if(head == nullptr) {
        cout << "History is empty!"<<endl;
        return;
    }

    int count = 0;
    Page* temp = head;

    while(temp != nullptr) {
        count++;
        temp = temp->next;
    }

    temp = head;

    cout << "Visited Pages: ";

    for(int i = 0; i < count; i++) {

        if(temp == current) {
            cout << ">> CURRENT PAGE << ";
        }

        cout<<temp->url<<","<<temp->title<<","<<temp->accessTime[0]<<"."<<temp->accessTime[1]<<"."<<temp->accessTime[2]<<endl;

        temp = temp->next;
    }
}

