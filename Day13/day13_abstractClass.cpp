#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
class Book{
    protected:
        string title;
        string author;
    public:
        Book(string t,string a){
            title=t;
            author=a;
        }
        virtual void display()=0;

};

// Write your MyBook class here
class MyBook : public Book
{
    int price;
    public:
        MyBook(string b_title, string b_author, int b_price):Book(b_title, b_author), price(b_price)
        {}
        void display()
        {
            cout << "Title: " << title;
            cout << "\nAuthor: " << author;
            cout << "\nPrice: " << price;
        }

};

int main() {
    string title,author;
    int price;
    getline(cin,title);
    getline(cin,author);
    cin>>price;
    MyBook novel(title,author,price);
    novel.display();
    return 0;
}
