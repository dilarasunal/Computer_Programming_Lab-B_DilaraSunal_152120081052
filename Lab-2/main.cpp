#include <iostream>
#include <string>

using namespace std;

int choice;

struct Node {
    string songTitle;
    Node* next;
    Node* head=nullptr;
};


int main()
{
 cout<<"Please choose what to do:"<<endl;
 cout<<"1.Add"<<endl;
 cout<<"2.Search"<<endl;
 cout<<"3.List"<<endl;
 cout<<"4.Exit"<<endl;
 cin>>choice;
 cout<<"Your choice is:"<<choice<<endl;

 switch(choice) {
case 1:
    Node* createNode(int i) {
        Node* newNode=new Node();
        newNode->songTitle=i;
        newNode->next=head;
        return newNode;
    }
    void insertAtBeginning(Node*& head,int value) {
    Node* newNode=createNode(i);
    newNode->next=head;
    head=newNode;
    }
    break;

case 2:
    bool search(Node* head,string target) {
    Node* current=head;
    while(current!=nullptr) {
        if current->songTitle==target {
            cout<<"Song is found."<<endl;
        }
        current=current->next;
        else cout<<"Song title could not found."<<endl;
    }

}
     break;

case 3:

     break;

case 4:
    cout<<"Goodbye!!"<<endl;
    return 0;


 }
}
