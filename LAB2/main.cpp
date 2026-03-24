#include <iostream>
#include <string>

using namespace std;

struct Node {
    string song;
    Node* next;
};

Node* head = nullptr;

void addSong(string songTitle) {
   Node* newNode = new Node;
   newNode -> song = songTitle;
   newNode -> next = head;
   head = newNode;

   cout << "Song added:" << songTitle << endl;
}

void listSongs() {
    if(head == nullptr) {
        cout << "Playlist is empty!" << endl;
        return;
    }

    Node* temp = head;
    int i = 1;

    cout<<"\n--- Playlist ---\n\n";
    while(temp!=nullptr) {
        cout << i << ". " << temp->song << endl;
        temp=temp->next;
        i++;
    }
}

void searchSong(string songTitle) {
    Node* temp=head;

    while(temp!=nullptr) {
        if(temp->song==songTitle) {
            cout<<"Song is in the list."<<endl;
            return;
        }

        temp=temp->next;
    }

        cout<<"Song not found!"<<endl;
}

int main() {
    int choice;
    string songTitle;

    do{
        cout<<"\n--- MENU ---\n\n";
        cout<<"1.Add\n";
        cout<<"2.Search\n";
        cout<<"3.List\n";
        cout<<"4.Exit\n";
        cout<<"Your choice is:";
        cin>>choice;

        if(cin.fail()) {
            cin.clear();
            cin.ignore(1000,'\n');
            cout << "Please enter a number.\n";
            continue;
        }

        cin.ignore();

        switch(choice) {
            case 1:
                cout<<"Enter a song title: ";
                getline(cin, songTitle);
                addSong(songTitle);
                break;

            case 2:
                cout<<"Enter a song title: ";
                getline(cin, songTitle);
                searchSong(songTitle);
                break;

            case 3:
                listSongs();
                break;

            case 4:
                cout<<"Goodbye!"<<endl;
                break;

            default:
                cout<<"Invalid choice."<<endl;
        }
    } while(choice!=4);

    return 0;
}




