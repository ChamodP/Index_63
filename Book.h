#include "libraries.h"
class Book
{
protected:
    /* data */
    string title;
    string authorName; 
    
public:
    Book();
    Book(string title, string authorName);
    void setTitle(string title);
    string getTitle();
    void setAuthorName(string authorName);
    string getAuthorName();
    void printDescription();

};

// Book::Book(/* args */)
// {
// }
