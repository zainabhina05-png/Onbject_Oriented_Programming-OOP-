
#include <iostream>
using namespace std;
class book
{
    string book_id;
    int book_pages;
    int book_price;

    void set(string id, int pages, int price)
    {
        book_id = id;
        book_pages = pages;
        book_price = price;
    }

public:

    void get()
    {
        cout << "Enter the book id " << endl;
        cin >> book_id;
        cout << "Enter the book pages " << endl;
        cin >> book_pages;
        cout << "Enter the book price " << endl;
        cin >> book_price;
    }

    void show()
    {
        cout << "The book id " << book_id << endl;
        cout << "has " << book_pages << "pages" << endl;
        cout << "which has price $ " << book_price << endl;
    }
    int getPrice()
    {
        return book_price;
    }
};
int main()
{
    book b1, b2, b3;
    b1.get();
    b1.show();
    b2.get();
    b2.show();
    b3.get();
    b3.show();
book getPrice();

    return 0;
}
