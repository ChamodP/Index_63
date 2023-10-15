#include "libraries.h"
#include "BookShop.h"

int main(){
    int choice = 0 ;
    string title, authorName, voiceActor;

    BookShop *sarasavi = new BookShop();

    cout<< "what you are gonna enter? either normal book or a Audio book? Press 1 for nomal book or 2 for Audio book"<<endl;
    cin>> choice;

    switch (choice){
        case 1: // adding a normal book
            cout<<"Enter the book title : "<<endl;
            cin>>title;
            cout<<"Enter the auther name : "<<endl;
            cin>>authorName;
            sarasavi->addBook(title, authorName);
            break;

        case 2: // adding a audio book
            cout<<"Enter the book title : "<<endl;
            cin>>title;
            cout<<"Enter the auther name : "<<endl;
            cin>>authorName;
            cout<<"Enter the voice actor name : "<<endl;
            cin>>voiceActor;
            break;

        default:
            cout<<"You entered wrong input value"<<endl;
    }
    


    // sarasavi->addBook("pyhton", "JJ Malan");
    // sarasavi->addBook("truth of life", "Thompson", "depp");



    // to print all the books bookshop has
    // this is implemented in bookshop class using print Description methods of books and audionooks class
    sarasavi->printBookList();
    
    delete sarasavi;
    return 0;
}