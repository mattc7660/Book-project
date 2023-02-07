#ifndef BOOK_hpp_
#define BOOK_hpp_
#include <iostream>
using namespace std;

class Book
{
    //private functions within class Book
private: 
    string book_title_;
    string author_name_;
    int num_pages_;
    bool digital_;

    //public functions within class Book
public:
    //default constructor
    Book();
    Book(string title, string author, int pages, bool dig = false); //function prototype

    //parameterized constructors
    string getTitle() const;
    string getAuthor() const;
    int getPageCount() const;
    bool isDigital() const;
    void setTitle(const string& title);
    void setAuthor(const string& author);
    void setPageCount(const int& pages); //num_pages > 0 since books cant have negative pages
    void setDigital();
};
#endif