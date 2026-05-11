
#include <iostream>
using namespace std;

class Book {
private:
    int Book_ID;
    int Page;
    double Price;
public:
    void Get() {
        cout << "Enter Book ID: ";
        cin >> Book_ID;
        cout << "Enter Number of Pages: ";
        cin >> Page;
        cout << "Enter Price: ";
        cin >> Price;
    }

    void Show() {
        cout << "Book ID: " << Book_ID << endl;
        cout << "Number of Pages: " << Page << endl;
        cout << "Price: " << Price << endl;
 }

    Book(int id, int page, double price) {
        Book_ID = id;
        Page = page;
        Price = price;
    }

    double GetPrice() {
        return Price;
    }
};

int main() {
    Book book1(1, 200, 500.0);
    Book book2(2, 300, 700.0);

    cout << "Book 1 Details:" << endl;
    book1.Show();
    cout << "Book 2 Details:" << endl;
    book2.Show();

    if (book1.GetPrice() > book2.GetPrice()) {
        cout << "Book 1 is costly. Price: " << book1.GetPrice() << endl;
    } else if (book2.GetPrice() > book1.GetPrice()) {
        cout << "Book 2 is costly. Price: " << book2.GetPrice() << endl;
    } else {
        cout << "Both books have the same price." << endl;
    }

    return 0;
}
