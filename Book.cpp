#include "Book.h"

// default constructor
Book::Book(){
    this->title = "";
    this->authorName = "";
}

// parameterized constructor
Book::Book(string title, string authorName){
    this->title = title;
    this->authorName = authorName;
}

// setter for title
void Book::setTitle(string title){
    this->title = title;
}

// getter for title
string Book::getTitle(){
    return this->title;
}

// setter for Author Name
void Book::setAuthorName(string authorName){
    this->authorName = authorName;
}

// getter for Author Name
string Book::getAuthorName(){
    return this->authorName;
}

// print attributes to the screen
void Book::printDescription(){
    cout<<"Title of the book is: "<< this->title <<endl;
    cout<<"Author of the book is: "<< this->authorName <<endl;
}