#include "BookShop.h"

BookShop::BookShop(){
    this->noOfBooksAdded = 0;
    // 20 books per bookshop
    for (int i = 0; i < 5; i++)
    {
        // initializing books
        this->bookCollection[i] = Book();
    }
    
}

// adding normal book to the system
void BookShop::addBook(string title, string authorName){
    Book b(title, authorName);
    // adding normal book to the array
    this->bookCollection[noOfBooksAdded] = b;
    this->noOfBooksAdded++;
}

void BookShop::addBook(string title, string authorName, string voiceActor){
    AudioBook a(title, authorName, voiceActor);
    // adding audiobook to the array
    this->bookCollection[noOfBooksAdded] = a;
    this->noOfBooksAdded++;
}

// to print all the details of the book list
void BookShop::printBookList(){
    for (int i = 0; i < 20; i++)
    {
        bookCollection[i].printDescription();
    }
    
}


// ~BookShop{
//     cout<<"Desctructer is called"<<endl;
// }

