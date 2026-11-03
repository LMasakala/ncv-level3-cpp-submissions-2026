#include <iostream>
#include <string>
#include <iomanip>

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
    void setProduct(string code, string name,
                    double pr, int quantity);

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
void Product::setProduct(string code, string name,
                         double pr, int quantity)
{
    productCode = code;

    // Validate product name
    if (name != "")
    {
        productName = name;
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
    if (quantity >= 0)
    {
        quantityInStock = quantity;
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

// Function to display product details
void displayProduct(Product p)
{
    cout << "\nProduct Code: " << p.getProductCode() << endl;
    cout << "Product Name: " << p.getProductName() << endl;
    cout << "Price: R" << fixed << setprecision(2)
         << p.getPrice() << endl;
    cout << "Quantity in Stock: "
         << p.getQuantityInStock() << endl;
}

// Main function
int main()
{
    // Create two objects using the default constructor
    Product product1;
    Product product2;

    // Assign information to the first product
    product1.setProduct("P101", "Wireless Mouse", 249.99, 15);

    // Assign information to the second product
    product2.setProduct("P102", "Wireless keyboard", 199.50, 15);

    // Display the two products
    cout << "===== PRODUCT 1 =====" << endl;
    displayProduct(product1);

    cout << "\n===== PRODUCT 2 =====" << endl;
    displayProduct(product2);

    return 0;
}
