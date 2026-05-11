#include <iostream>
#include <string>
using namespace std;

class TV {
private:
    string brandName;
    string model;
    double retailPrice;
public:
    // Default constructor
    TV() : brandName(""), model(""), retailPrice(0.0) {}

    // Parameterized constructor
    TV(string brand, string model, double price) {
        brandName = brand;
        this->model = model;
        retailPrice = price;
    }

    // Method to display attributes
    void displayAttributes() {
        cout << "Brand Name: " << brandName << endl;
        cout << "Model: " << model << endl;
        cout << "Retail Price: " << retailPrice << endl;
}

    // Method to change attributes
    void changeAttributes(string brand, string model, double price) {
        brandName = brand;
        this->model = model;
        retailPrice = price;
    }
};

int main() {
    // Create object using default constructor
    TV tv1;
    tv1.changeAttributes("Samsung", "QLED", 1500.0);
    cout << "TV 1 Attributes:" << endl;
    tv1.displayAttributes();

    // Create object using parameterized constructor
    TV tv2("LG", "OLED", 2000.0);
    cout << "\nTV 2 Attributes:" << endl;
    tv2.displayAttributes();

    return 0;
}