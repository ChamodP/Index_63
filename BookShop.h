#include "libraries.h"
#include "Book.h"
#include "AudioBook.h"

// Assumed that every book shops shoud be initiated with zero books.

class BookShop
{
private:
    /* data */
    Book bookCollection[5];
    int noOfBooksAdded;
    
public:
    BookShop();
    void addBook(string title, string authorName);
    void addBook(string title, string authorName, string voiceActor);
    void printBookList();
    // ~BookShop();
};

// BookShop::BookShop(/* args */)
// {
// }

// BookShop::~BookShop()
// {
// }

