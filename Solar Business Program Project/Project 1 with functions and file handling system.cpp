#include <iostream>
#include <conio.h>
#include <fstream>

using namespace std;

// ============================================================
//  GLOBAL ARRAYS - to store all data
// ============================================================

const int MAX = 1000;

// Customer Data
string customerName[MAX]             = {"Ali Khan", "Usman Tariq", "Hassan Raza"};
string customerEmail[MAX]            = {"ali.khan@gmail.com", "usman.tariq@yahoo.com", "hassan.raza@gmail.com"};
string customerPhone[MAX]            = {"03001234567", "03114567890", "03331234567"};
string customerSolarSystemType[MAX]  = {"Residential", "Commercial", "Industrial"};
string customerInvertercapacity[MAX] = {"5KW", "10KW", "20KW"};
string customersolarplates[MAX]      = {"Longi Solar Panel 550W", "Trina Solar Panel 450W", "Jinko Solar Panel 400W"};
string customerAddress[MAX]          = {"Lahore, Johar Town", "Faisalabad, Madina Town", "Sheikhupura, City Center"};
int customersolarsystemcapacity[MAX] = {5, 10, 20};
int customerprojectprice[MAX]        = {100000, 200000, 400000};
int customerCount = 3;

// Inventory Data
string productName[MAX]        = {"Longi Solar Panel 550W", "Huawei Inverter 5KW", "Lithium Battery 100Ah", "Mounting Structure Kit", "DC Solar Cable 6mm"};
string productDescription[MAX] = {"High efficiency mono-crystalline solar panel", "Hybrid inverter for residential system", "Deep cycle energy storage battery", "Aluminum rooftop mounting system", "UV resistant solar cable"};
int productQuantity[MAX]       = {50, 10, 20, 100, 25};
int productprice[MAX]          = {550, 5000, 10000, 15000, 200};
int productCount = 5;

// Order Data
string orderCustomerName[MAX];
string orderCustomerPhone[MAX];
string orderProduct[MAX];
int orderQuantity[MAX];
int orderTotalPrice[MAX];
string orderStatus[MAX];
int orderCount = 0;

// ============================================================
// HELPER FUNCTION
// ============================================================

int calculatePrice(int capacityKW)
{
    int panelCount    = (capacityKW * 100 + 54) / 55;
    int inverterCount = (capacityKW + 4) / 5;
    int batteryCount  = capacityKW * 10;

    return panelCount * 550 + inverterCount * 5000 + batteryCount * 10000;
}

// ============================================================
// EXPORT CUSTOMER LIST TO TXT FILE
// ============================================================

void exportCustomersToTXT()
{
    system("cls");

    ofstream file("Customer_List.txt", ios::out);

    if (!file)
    {
        cout << "Error creating file!" << endl;
        getch();
        return;
    }

    file << "==========================================================" << endl;
    file << "              SOLAR BUSINESS CUSTOMER LIST                " << endl;
    file << "==========================================================" << endl << endl;

    for (int i = 0; i < customerCount; i++)
    {
        file << "Customer #" << i + 1 << endl;

        file << "Name            : " << customerName[i] << endl;
        file << "Phone           : " << customerPhone[i] << endl;
        file << "Email           : " << customerEmail[i] << endl;
        file << "Address         : " << customerAddress[i] << endl;
        file << "System Type     : " << customerSolarSystemType[i] << endl;
        file << "System Capacity : " << customersolarsystemcapacity[i] << " kW" << endl;
        file << "Inverter        : " << customerInvertercapacity[i] << endl;
        file << "Solar Panels    : " << customersolarplates[i] << endl;
        file << "Project Price   : " << customerprojectprice[i] << " PKR" << endl;

        file << "----------------------------------------------------------" << endl;
    }

    file.close();

    cout << "Customer list exported successfully!" << endl;
    cout << "File Name: Customer_List.txt" << endl;

    cout << endl << "Press any key to continue...";
    getch();
}

// ============================================================
// CUSTOMER MANAGEMENT FUNCTIONS
// ============================================================

void addCustomer()
{
    system("cls");

    int newIndex = customerCount;

    cin.ignore();

    cout << "Enter Customer Name: ";
    getline(cin, customerName[newIndex]);

    cout << "Enter Customer Email: ";
    getline(cin, customerEmail[newIndex]);

    cout << "Enter Customer Phone: ";
    getline(cin, customerPhone[newIndex]);

    cout << "Enter Customer Address: ";
    getline(cin, customerAddress[newIndex]);

    cout << "Enter Customer Solar System Type: ";
    getline(cin, customerSolarSystemType[newIndex]);

    cout << "Enter Customer Inverter Capacity: ";
    getline(cin, customerInvertercapacity[newIndex]);

    cout << "Enter Customer Solar Panels: ";
    getline(cin, customersolarplates[newIndex]);

    cout << "Enter Customer Solar System Capacity (kW): ";
    cin >> customersolarsystemcapacity[newIndex];

    customerprojectprice[newIndex] =
        calculatePrice(customersolarsystemcapacity[newIndex]);

    customerCount++;

    cout << endl;
    cout << "Customer Added Successfully!" << endl;

    cout << endl << "Press any key to continue...";
    getch();
}

void viewCustomers()
{
    system("cls");

    cout << "================ CUSTOMER LIST ================" << endl << endl;

    for (int i = 0; i < customerCount; i++)
    {
        cout << "Customer #" << i + 1 << endl;

        cout << "Name            : " << customerName[i] << endl;
        cout << "Phone           : " << customerPhone[i] << endl;
        cout << "Email           : " << customerEmail[i] << endl;
        cout << "Address         : " << customerAddress[i] << endl;
        cout << "System Type     : " << customerSolarSystemType[i] << endl;
        cout << "System Capacity : "
             << customersolarsystemcapacity[i] << " kW" << endl;
        cout << "Inverter        : "
             << customerInvertercapacity[i] << endl;
        cout << "Solar Panels    : "
             << customersolarplates[i] << endl;
        cout << "Project Price   : "
             << customerprojectprice[i] << " PKR" << endl;

        cout << "--------------------------------------------------" << endl;
    }

    cout << endl << "Press any key to continue...";
    getch();
}

void searchCustomer()
{
    system("cls");

    cin.ignore();

    string phone;

    cout << "Enter customer phone number: ";
    getline(cin, phone);

    bool found = false;

    for (int i = 0; i < customerCount; i++)
    {
        if (customerPhone[i] == phone)
        {
            found = true;

            cout << endl;
            cout << "Customer Found!" << endl << endl;

            cout << "Name            : " << customerName[i] << endl;
            cout << "Phone           : " << customerPhone[i] << endl;
            cout << "Email           : " << customerEmail[i] << endl;
            cout << "Address         : " << customerAddress[i] << endl;
            cout << "System Type     : "
                 << customerSolarSystemType[i] << endl;
            cout << "System Capacity : "
                 << customersolarsystemcapacity[i] << " kW" << endl;
            cout << "Project Price   : "
                 << customerprojectprice[i] << " PKR" << endl;

            break;
        }
    }

    if (!found)
    {
        cout << "Customer not found!" << endl;
    }

    cout << endl << "Press any key to continue...";
    getch();
}

void deleteCustomer()
{
    system("cls");

    cin.ignore();

    string phone;

    cout << "Enter customer phone number to delete: ";
    getline(cin, phone);

    bool found = false;

    for (int i = 0; i < customerCount; i++)
    {
        if (customerPhone[i] == phone)
        {
            found = true;

            for (int j = i; j < customerCount - 1; j++)
            {
                customerName[j] = customerName[j + 1];
                customerEmail[j] = customerEmail[j + 1];
                customerPhone[j] = customerPhone[j + 1];
                customerSolarSystemType[j] =
                    customerSolarSystemType[j + 1];
                customerInvertercapacity[j] =
                    customerInvertercapacity[j + 1];
                customersolarplates[j] =
                    customersolarplates[j + 1];
                customerAddress[j] =
                    customerAddress[j + 1];
                customersolarsystemcapacity[j] =
                    customersolarsystemcapacity[j + 1];
                customerprojectprice[j] =
                    customerprojectprice[j + 1];
            }

            customerCount--;

            cout << "Customer deleted successfully!" << endl;

            break;
        }
    }

    if (!found)
    {
        cout << "Customer not found!" << endl;
    }

    cout << endl << "Press any key to continue...";
    getch();
}

void customerManagement()
{
    while (true)
    {
        system("cls");

        cout << "=============== CUSTOMER MANAGEMENT ===============" << endl;
        cout << "1 - Add Customer" << endl;
        cout << "2 - View Customers" << endl;
        cout << "3 - Search Customer" << endl;
        cout << "4 - Delete Customer" << endl;
        cout << "5 - Export Customers To TXT File" << endl;
        cout << "6 - Back to Admin Menu" << endl;

        cout << endl << "Enter your choice: ";

        int subChoice;
        cin >> subChoice;

        if (subChoice == 1)
        {
            addCustomer();
        }
        else if (subChoice == 2)
        {
            viewCustomers();
        }
        else if (subChoice == 3)
        {
            searchCustomer();
        }
        else if (subChoice == 4)
        {
            deleteCustomer();
        }
        else if (subChoice == 5)
        {
            exportCustomersToTXT();
        }
        else if (subChoice == 6)
        {
            break;
        }
        else
        {
            cout << "Invalid Input!" << endl;
            getch();
        }
    }
}

// ============================================================
// INVENTORY MANAGEMENT FUNCTIONS
// ============================================================

void viewProducts()
{
    system("cls");

    cout << "================ INVENTORY ================" << endl << endl;

    for (int i = 0; i < productCount; i++)
    {
        cout << "Product #" << i + 1 << endl;

        cout << "Name        : " << productName[i] << endl;
        cout << "Description : " << productDescription[i] << endl;
        cout << "Quantity    : " << productQuantity[i] << endl;
        cout << "Price       : " << productprice[i] << " PKR" << endl;

        cout << "--------------------------------------------------" << endl;
    }

    cout << endl << "Press any key to continue...";
    getch();
}

void addProduct()
{
    system("cls");

    int newIndex = productCount;

    cin.ignore();

    cout << "Enter Product Name: ";
    getline(cin, productName[newIndex]);

    cout << "Enter Product Description: ";
    getline(cin, productDescription[newIndex]);

    cout << "Enter Product Quantity: ";
    cin >> productQuantity[newIndex];

    cout << "Enter Product Price: ";
    cin >> productprice[newIndex];

    productCount++;

    cout << endl << "Product Added Successfully!" << endl;

    cout << endl << "Press any key to continue...";
    getch();
}

void inventoryManagement()
{
    while (true)
    {
        system("cls");

        cout << "=============== INVENTORY MANAGEMENT ===============" << endl;
        cout << "1 - Add Product" << endl;
        cout << "2 - View Products" << endl;
        cout << "3 - Back to Admin Menu" << endl;

        cout << endl << "Enter your choice: ";

        int choice;
        cin >> choice;

        if (choice == 1)
        {
            addProduct();
        }
        else if (choice == 2)
        {
            viewProducts();
        }
        else if (choice == 3)
        {
            break;
        }
        else
        {
            cout << "Invalid Input!" << endl;
            getch();
        }
    }
}

// ============================================================
// ORDER MANAGEMENT FUNCTIONS
// ============================================================

void createOrder()
{
    system("cls");

    int newIndex = orderCount;

    cin.ignore();

    cout << "Enter Customer Name: ";
    getline(cin, orderCustomerName[newIndex]);

    cout << "Enter Customer Phone: ";
    getline(cin, orderCustomerPhone[newIndex]);

    cout << "Enter Product Name: ";
    getline(cin, orderProduct[newIndex]);

    cout << "Enter Quantity: ";
    cin >> orderQuantity[newIndex];

    bool found = false;

    for (int i = 0; i < productCount; i++)
    {
        if (productName[i] == orderProduct[newIndex])
        {
            found = true;

            if (productQuantity[i] >= orderQuantity[newIndex])
            {
                productQuantity[i] -= orderQuantity[newIndex];

                orderTotalPrice[newIndex] =
                    orderQuantity[newIndex] * productprice[i];

                orderStatus[newIndex] = "Pending";

                orderCount++;

                cout << endl << "Order Created Successfully!" << endl;
            }
            else
            {
                cout << "Insufficient Stock!" << endl;
            }

            break;
        }
    }

    if (!found)
    {
        cout << "Product not found!" << endl;
    }

    cout << endl << "Press any key to continue...";
    getch();
}

void viewOrders()
{
    system("cls");

    cout << "================ ORDERS ================" << endl << endl;

    for (int i = 0; i < orderCount; i++)
    {
        cout << "Order #" << i + 1 << endl;

        cout << "Customer Name : " << orderCustomerName[i] << endl;
        cout << "Phone         : " << orderCustomerPhone[i] << endl;
        cout << "Product       : " << orderProduct[i] << endl;
        cout << "Quantity      : " << orderQuantity[i] << endl;
        cout << "Total Price   : "
             << orderTotalPrice[i] << " PKR" << endl;
        cout << "Status        : " << orderStatus[i] << endl;

        cout << "--------------------------------------------------" << endl;
    }

    cout << endl << "Press any key to continue...";
    getch();
}

void orderManagement()
{
    while (true)
    {
        system("cls");

        cout << "=============== ORDER MANAGEMENT ===============" << endl;
        cout << "1 - Create Order" << endl;
        cout << "2 - View Orders" << endl;
        cout << "3 - Back to Admin Menu" << endl;

        cout << endl << "Enter your choice: ";

        int choice;
        cin >> choice;

        if (choice == 1)
        {
            createOrder();
        }
        else if (choice == 2)
        {
            viewOrders();
        }
        else if (choice == 3)
        {
            break;
        }
        else
        {
            cout << "Invalid Input!" << endl;
            getch();
        }
    }
}

// ============================================================
// SETUP CALCULATION
// ============================================================

void setupCalculation()
{
    system("cls");

    int capacity;

    cout << "Enter Solar System Capacity (kW): ";
    cin >> capacity;

    int panelCount    = (capacity * 100 + 54) / 55;
    int inverterCount = (capacity + 4) / 5;
    int batteryCount  = capacity * 10;

    cout << endl;
    cout << "Panels Needed    : " << panelCount << endl;
    cout << "Inverters Needed : " << inverterCount << endl;
    cout << "Batteries Needed : " << batteryCount << endl;
    cout << "Estimated Price  : "
         << calculatePrice(capacity) << " PKR" << endl;

    cout << endl << "Press any key to continue...";
    getch();
}

// ============================================================
// REPORTS
// ============================================================

void reportsMenu()
{
    system("cls");

    int totalRevenue = 0;

    for (int i = 0; i < customerCount; i++)
    {
        totalRevenue += customerprojectprice[i];
    }

    cout << "=============== REPORTS ===============" << endl << endl;

    cout << "Total Customers : " << customerCount << endl;
    cout << "Total Products  : " << productCount << endl;
    cout << "Total Orders    : " << orderCount << endl;
    cout << "Total Revenue   : "
         << totalRevenue << " PKR" << endl;

    cout << endl << "Press any key to continue...";
    getch();
}

// ============================================================
// ADMIN MENU
// ============================================================

void adminMenu()
{
    system("cls");

    string username;
    string password;

    cout << "=============== ADMIN LOGIN ===============" << endl << endl;

    cout << "Enter Username: ";
    cin >> username;

    cout << "Enter Password: ";
    cin >> password;

    if (username == "admin" && password == "123")
    {
        while (true)
        {
            system("cls");

            cout << "=============== ADMIN PANEL ===============" << endl;
            cout << "1 - Customer Management" << endl;
            cout << "2 - Inventory Management" << endl;
            cout << "3 - Order Management" << endl;
            cout << "4 - Setup Calculation" << endl;
            cout << "5 - Reports" << endl;
            cout << "6 - Logout" << endl;

            cout << endl << "Enter your choice: ";

            int choice;
            cin >> choice;

            if (choice == 1)
            {
                customerManagement();
            }
            else if (choice == 2)
            {
                inventoryManagement();
            }
            else if (choice == 3)
            {
                orderManagement();
            }
            else if (choice == 4)
            {
                setupCalculation();
            }
            else if (choice == 5)
            {
                reportsMenu();
            }
            else if (choice == 6)
            {
                break;
            }
            else
            {
                cout << "Invalid Input!" << endl;
                getch();
            }
        }
    }
    else
    {
        cout << endl;
        cout << "Invalid Username or Password!" << endl;

        cout << endl << "Press any key to continue...";
        getch();
    }
}

// ============================================================
// CUSTOMER PORTAL
// ============================================================

void customerPortal()
{
    system("cls");

    cin.ignore();

    string name;
    int capacity;

    cout << "Enter Your Name: ";
    getline(cin, name);

    cout << "Enter Required Solar Capacity (kW): ";
    cin >> capacity;

    cout << endl;
    cout << "Estimated Project Price: "
         << calculatePrice(capacity) << " PKR" << endl;

    cout << endl << "Press any key to continue...";
    getch();
}

// ============================================================
// MAIN FUNCTION
// ============================================================

int main()
{
    while (true)
    {
        system("cls");

        cout << "==================================================" << endl;
        cout << "         SOLAR BUSINESS MANAGEMENT SYSTEM         " << endl;
        cout << "==================================================" << endl << endl;

        cout << "1 - Admin" << endl;
        cout << "2 - Customer Portal" << endl;
        cout << "3 - Exit" << endl;

        cout << endl << "Enter your choice: ";

        int choice;
        cin >> choice;

        if (choice == 1)
        {
            adminMenu();
        }
        else if (choice == 2)
        {
            customerPortal();
        }
        else if (choice == 3)
        {
            system("cls");

            cout << "Thank you for using the system!" << endl;
            break;
        }
        else
        {
            cout << "Invalid Input!" << endl;
            getch();
        }
    }

    return 0;
}