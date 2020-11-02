#include <iostream>
#include <cmath>

using namespace std;

class Book {
    public:
        string title;
        string author;
        int pages;
};

int main()
{
    Book book1;

    book1.title = "Harry Potter";
    book1.author = "JK Rowling";
    book1.pages =  3000;

    Book book2;
    book2.title = "Lord of the Rings";
    book2.author = "Tolkein";
    book2.pages = 900;

    cout << book1.title <<endl;
    cout << book2.author <<endl;
    return 0;
}