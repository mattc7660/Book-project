#include <iostream>
#include "Book.hpp"
using namespace std;

//default constructor
//default-initializes all priate members, booleansare default-initialized to false
Book::Book()
{
    book_title_ = " ";
    author_name_ = " ";
    num_pages_ = 0;
    digital_ = false;
}

/* takes info of a book including the title, author, number of pages, and returns whether it's available digitally or not
// @param title of book (string)
// @param name of author (string)
// @param number of pages (positive int)
// @param whether the book is available digitally (boolean set to false as default)
*/
Book::Book(string title, string author, int pages, bool dig)
{
    book_title_ = title;
    author_name_ = author;
    num_pages_ = pages;
    digital_ = dig;
}

//@param : title of book
//@post : sets the book's title to value of parameter
void Book::setTitle(const string& title)
{
    book_title_ = title;
}

//@return : the title of the book
string Book::getTitle() const
{
    return book_title_;
}

//@param : the name of the author of the book
//@post : sets the book's author to the value of the parameter
void Book::setAuthor(const string& author)
{
    author_name_ = author;
}

//@return : the author of the book
string Book::getAuthor() const
{
    return author_name_;
}
//@param : a positive integer page count
//@pre : page count > 0 (books cant have negative pages)
//@post : sets the page count to the value of the parameter
void Book::setPageCount(const int& pages)
{
    if (pages > 0)
    {
        num_pages_ = pages;
    }
}

//@return : the page count
int Book::getPageCount() const
{
    return num_pages_;
}

//@post : sets the digital flag to true
void Book::setDigital()
{
    digital_ = true;
}

//@return : true if the book is available in digital form, false if otherwise
bool Book::isDigital() const
{
    if (digital_ == true){
        return true;
    }
    else
    { 
        return false;
    }
}
