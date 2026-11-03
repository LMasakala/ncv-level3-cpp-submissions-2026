#include <iostream>
#include <string>
#include <iomanip>
#include <limits>

using namespace std;

// Class declaration
class Product
{
private:
    // Private data members
    string productCode;
    string productName;
    double price;
    int quantityInStock;

public:
    // Default constructor
    Product();

    // Setter method
    void setProduct(string pc, string pn,
                    double pr, int qty);

    // Getter methods
    string getProductCode();
    string getProductName();
    double getPrice();
    int getQuantityInStock();
};

// Default constructor
Product::Product()
{
    productCode = "";
    productName = "";
    price = 0.0;
    quantityInStock = 0;
}

// Setter method with validation
void Product::setProduct(string pc, string pn,
                         double pr, int qty)
{
    productCode = pc;

    // Validate product name
    if (pn != "")
    {
        productName = pn;
    }
    else
    {
        productName = "Unknown";
        cout << "Invalid product name!" << endl;
    }

    // Validate price
    if (pr >= 0)
    {
        price = pr;
    }
    else
    {
        price = 0.0;
        cout << "Invalid price! Price set to 0." << endl;
    }

    // Validate quantity
    if (qty >= 0)
    {
        quantityInStock = qty;
    }
    else
    {
        quantityInStock = 0;
        cout << "Invalid quantity! Quantity set to 0." << endl;
    }
}

// Getter for product code
string Product::getProductCode()
{
    return productCode;
}

// Getter for product name
string Product::getProductName()
{
    return productName;
}

// Getter for price
double Product::getPrice()
{
    return price;
}

// Getter for quantity in stock
int Product::getQuantityInStock()
{
    return quantityInStock;
}

// NON-MEMBER FUNCTION 1: Get product data
void GetProductData(Product &p)
{
    string code, name;
    double price;
    int quantity;

    cout << "\nEnter product code: ";
    cin >> code;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "Enter product name: ";
    getline(cin, name);

    cout << "Enter product price: R";
    cin >> price;

    cout << "Enter quantity in stock: ";
    cin >> quantity;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // Call setter method
    p.setProduct(code, name, price, quantity);
}

// NON-MEMBER FUNCTION 2: Display product data
void DisplayProduct(Product &p)
{
    cout << "\nProduct Code:      " << p.getProductCode() << endl;
    cout << "Product Name:      " << p.getProductName() << endl;

    cout << "Price:             R"
         << fixed << setprecision(2)
         << p.getPrice() << endl;

    cout << "Quantity in Stock: "
         << p.getQuantityInStock() << endl;
}

// NON-MEMBER FUNCTION 3: Compare product names
void prodCompare(Product &p1, Product &p2)
{
    string name1 = p1.getProductName();
    string name2 = p2.getProductName();

    // Compare the first characters
    if (name1[0] == name2[0])
    {
        cout << "\nBoth product names start with the same character."
             << endl;
    }
    else
    {
        cout << "\nThe product names start with different characters."
             << endl;
    }
}

// Main function
int main()
{
    // Create two Product objects
    Product product1;
    Product product2;

    // Get information for product 1
    cout << "===== ENTER PRODUCT 1 =====" << endl;
    GetProductData(product1);

    // Get information for product 2
    cout << "\n===== ENTER PRODUCT 2 =====" << endl;
    GetProductData(product2);

    // Display product 1
    cout << "\n===== PRODUCT 1 DETAILS =====" << endl;
    DisplayProduct(product1);

    // Display product 2
    cout << "\n===== PRODUCT 2 DETAILS =====" << endl;
    DisplayProduct(product2);

    // Compare product names
    cout << "\n===== PRODUCT COMPARISON =====" << endl;
    prodCompare(product1, product2);

    return 0;
}
