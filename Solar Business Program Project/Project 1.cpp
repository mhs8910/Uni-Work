#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    system("cls");

    // --- Customer Data ---
    string customerName[1000]             = {"Ali Khan", "Usman Tariq", "Hassan Raza"};
    string customerEmail[1000]            = {"ali.khan@gmail.com", "usman.tariq@yahoo.com", "hassan.raza@gmail.com"};
    string customerPhone[1000]            = {"03001234567", "03114567890", "03331234567"};
    string customerSolarSystemType[1000]  = {"Residential", "Commercial", "Industrial"};
    string customerInvertercapacity[1000] = {"5KW", "10KW", "20KW"};
    string customersolarplates[1000]      = {"Longi Solar Panel 550W", "Trina Solar Panel 450W", "Jinko Solar Panel 400W"};
    string customerAddress[1000]          = {"Lahore, Johar Town", "Faisalabad, Madina Town", "Sheikhupura, City Center"};
    int    customersolarsystemcapacity[1000] = {5, 10, 20};
    int    customerprojectprice[1000]        = {100000, 200000, 400000};
    int    customerCount = 3;

    // --- Inventory Data ---
    string productName[1000]        = {"Longi Solar Panel 550W", "Huawei Inverter 5KW", "Lithium Battery 100Ah", "Mounting Structure Kit", "DC Solar Cable 6mm"};
    string productDescription[1000] = {"High efficiency mono-crystalline solar panel", "Hybrid inverter for residential system", "Deep cycle energy storage battery", "Aluminum rooftop mounting system", "UV resistant solar cable"};
    int    productQuantity[1000]    = {50, 10, 20, 100, 25};
    int    productprice[1000]       = {550, 5000, 10000, 15000, 200};
    int    productCount = 5;

    // --- Order Data ---
    string orderCustomerName[1000];
    string orderCustomerPhone[1000];
    string orderProduct[1000];
    int    orderQuantity[1000];
    int    orderTotalPrice[1000];
    string orderStatus[1000];
    int    orderCount = 0;

    cout << "-----------------------------------------------------------------------" << endl;
    cout << "|                    Solar Business Management System                 |" << endl;
    cout << "-----------------------------------------------------------------------" << endl;
    cout << "Welcome to the Solar Business Management System!" << endl << endl;

    while (true)
    {
        cout << "1 - Admin" << endl;
        cout << "2 - Customer" << endl;
        cout << "3 - Exit" << endl;
        cout << "Enter your choice: ";
        int choice;
        cin >> choice;

        // ================================================================
        //  ADMIN
        // ================================================================
        if (choice == 1)
        {
            system("cls");
            cout << "Admin Login Selected" << endl;
            cout << "Press any key to continue..." << endl;
            getch();
            system("cls");

            cout << "Enter Admin Username: ";
            string adminUsername;
            cin >> adminUsername;

            cout << "Enter Admin Password: ";
            string adminPassword;
            cin >> adminPassword;

            if (adminUsername == "admin" && adminPassword == "123")
            {
                system("cls");
                cout << "Admin Login Successful!" << endl << endl;
                cout << "Welcome, Admin!" << endl << endl;

                while (true)
                {
                    cout << "Select the operation you want to perform:" << endl;
                    cout << "1 - Customer Management" << endl;
                    cout << "2 - Inventory Management" << endl;
                    cout << "3 - Order Management" << endl;
                    cout << "4 - Setup Calculation" << endl;
                    cout << "5 - Reports" << endl;
                    cout << "6 - Logout" << endl << endl;
                    cout << "Enter your choice: ";
                    cin >> choice;

                    // -----------------------------------------------
                    // 1. CUSTOMER MANAGEMENT
                    // -----------------------------------------------
                    if (choice == 1)
                    {
                        while (true)
                        {
                            system("cls");
                            cout << "Customer Management Selected" << endl;
                            cout << "1 - Add Customer" << endl;
                            cout << "2 - View Customers" << endl;
                            cout << "3 - Update Customer" << endl;
                            cout << "4 - Delete Customer" << endl;
                            cout << "5 - Search Customer" << endl;
                            cout << "6 - Back to Admin Menu" << endl;
                            cout << "Enter your choice: ";
                            int subChoice;
                            cin >> subChoice;

                            if (subChoice == 1)
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
                                cout << "Enter Customer Solar System Type (Residential/Commercial/Industrial): ";
                                getline(cin, customerSolarSystemType[newIndex]);
                                cout << "Enter Customer Inverter Capacity (5KW/10KW/20KW): ";
                                getline(cin, customerInvertercapacity[newIndex]);
                                cout << "Enter Customer Solar Panels (Longi Solar Panel 550W/Trina Solar Panel 450W/Jinko Solar Panel 400W): ";
                                getline(cin, customersolarplates[newIndex]);
                                cout << "Enter Customer Solar System Capacity (in kW): ";
                                cin >> customersolarsystemcapacity[newIndex];
                                cin.ignore();

                                int panelCount   = (customersolarsystemcapacity[newIndex] * 100 + 54) / 55;
                                int inverterCount = (customersolarsystemcapacity[newIndex] + 4) / 5;
                                int batteryCount  = customersolarsystemcapacity[newIndex] * 10;
                                customerprojectprice[newIndex] = panelCount * 550 + inverterCount * 5000 + batteryCount * 10000;
                                customerCount++;

                                cout << "Customer Added Successfully!" << endl << endl;
                                cout << "Customer Name \t Customer Phone \t Customer Email \t Customer Address \t Project Price" << endl;
                                cout << customerName[newIndex] << "\t" << customerPhone[newIndex] << "\t"
                                     << customerEmail[newIndex] << "\t" << customerAddress[newIndex] << "\t"
                                     << customerprojectprice[newIndex] << endl << endl;

                                // Bubble sort by name
                                for (int i = 0; i < customerCount; i++)
                                {
                                    for (int j = i + 1; j < customerCount; j++)
                                    {
                                        if (customerName[i] > customerName[j])
                                        {
                                            string temp;
                                            temp = customerName[i]; customerName[i] = customerName[j]; customerName[j] = temp;
                                            temp = customerEmail[i]; customerEmail[i] = customerEmail[j]; customerEmail[j] = temp;
                                            temp = customerPhone[i]; customerPhone[i] = customerPhone[j]; customerPhone[j] = temp;
                                            temp = customerAddress[i]; customerAddress[i] = customerAddress[j]; customerAddress[j] = temp;
                                            temp = customerSolarSystemType[i]; customerSolarSystemType[i] = customerSolarSystemType[j]; customerSolarSystemType[j] = temp;
                                            temp = customerInvertercapacity[i]; customerInvertercapacity[i] = customerInvertercapacity[j]; customerInvertercapacity[j] = temp;
                                            temp = customersolarplates[i]; customersolarplates[i] = customersolarplates[j]; customersolarplates[j] = temp;
                                            int tempInt = customersolarsystemcapacity[i]; customersolarsystemcapacity[i] = customersolarsystemcapacity[j]; customersolarsystemcapacity[j] = tempInt;
                                            tempInt = customerprojectprice[i]; customerprojectprice[i] = customerprojectprice[j]; customerprojectprice[j] = tempInt;
                                        }
                                    }
                                }
                                getch();
                            }
                            else if (subChoice == 2)
                            {
                                system("cls");
                                cout << "Here are the customers:" << endl << endl;
                                cout << "No. | Name \t\t| Phone \t\t| Email \t\t\t| Address \t\t| Type \t\t| Inverter | Capacity | Price" << endl;
                                for (int i = 0; i < customerCount; i++)
                                {
                                    cout << i + 1 << ". "
                                         << customerName[i] << "\t"
                                         << customerPhone[i] << "\t"
                                         << customerEmail[i] << "\t"
                                         << customerAddress[i] << "\t"
                                         << customerSolarSystemType[i] << "\t"
                                         << customerInvertercapacity[i] << "\t"
                                         << customersolarsystemcapacity[i] << " kW\t"
                                         << customerprojectprice[i] << " PKR" << endl;
                                }
                                cout << endl << "Press any key to continue...";
                                getch();
                            }
                            else if (subChoice == 3)
                            {
                                system("cls");
                                cout << "How do you want to find the customer to update?" << endl;
                                cout << "1 - By Name" << endl;
                                cout << "2 - By Email" << endl;
                                cout << "3 - By Phone" << endl;
                                cout << "Enter your choice: ";
                                int updateChoice;
                                cin >> updateChoice;
                                cin.ignore();

                                cout << "Enter the value to search: ";
                                string searchVal;
                                getline(cin, searchVal);

                                bool found = false;
                                for (int i = 0; i < customerCount; i++)
                                {
                                    bool match = false;
                                    if (updateChoice == 1 && customerName[i]  == searchVal) match = true;
                                    if (updateChoice == 2 && customerEmail[i] == searchVal) match = true;
                                    if (updateChoice == 3 && customerPhone[i] == searchVal) match = true;

                                    if (match)
                                    {
                                        found = true;
                                        cout << "Customer found: " << customerName[i] << endl;
                                        cout << "What do you want to update?" << endl;
                                        cout << "1 - Name" << endl;
                                        cout << "2 - Email" << endl;
                                        cout << "3 - Phone" << endl;
                                        cout << "4 - Address" << endl;
                                        cout << "5 - System Type" << endl;
                                        cout << "6 - Inverter Capacity" << endl;
                                        cout << "7 - Solar Plates" << endl;
                                        cout << "8 - System Capacity" << endl;
                                        cout << "Enter your choice: ";
                                        int fieldChoice;
                                        cin >> fieldChoice;
                                        cin.ignore();

                                        if (fieldChoice == 1)
                                        {
                                            cout << "Enter new name: ";
                                            getline(cin, customerName[i]);
                                            cout << "Name updated successfully!" << endl;
                                        }
                                        else if (fieldChoice == 2)
                                        {
                                            cout << "Enter new email: ";
                                            getline(cin, customerEmail[i]);
                                            cout << "Email updated successfully!" << endl;
                                        }
                                        else if (fieldChoice == 3)
                                        {
                                            cout << "Enter new phone: ";
                                            getline(cin, customerPhone[i]);
                                            cout << "Phone updated successfully!" << endl;
                                        }
                                        else if (fieldChoice == 4)
                                        {
                                            cout << "Enter new address: ";
                                            getline(cin, customerAddress[i]);
                                            cout << "Address updated successfully!" << endl;
                                        }
                                        else if (fieldChoice == 5)
                                        {
                                            cout << "Enter new system type: ";
                                            getline(cin, customerSolarSystemType[i]);
                                            cout << "System type updated successfully!" << endl;
                                        }
                                        else if (fieldChoice == 6)
                                        {
                                            cout << "Enter new inverter capacity: ";
                                            getline(cin, customerInvertercapacity[i]);
                                            cout << "Inverter capacity updated successfully!" << endl;
                                        }
                                        else if (fieldChoice == 7)
                                        {
                                            cout << "Enter new solar plates: ";
                                            getline(cin, customersolarplates[i]);
                                            cout << "Solar plates updated successfully!" << endl;
                                        }
                                        else if (fieldChoice == 8)
                                        {
                                            cout << "Enter new system capacity (kW): ";
                                            cin >> customersolarsystemcapacity[i];
                                            cin.ignore();
                                            int p   = (customersolarsystemcapacity[i] * 100 + 54) / 55;
                                            int inv = (customersolarsystemcapacity[i] + 4) / 5;
                                            int b   = customersolarsystemcapacity[i] * 10;
                                            customerprojectprice[i] = p * 550 + inv * 5000 + b * 10000;
                                            cout << "Capacity updated! New estimated price: " << customerprojectprice[i] << " PKR" << endl;
                                        }
                                        else
                                        {
                                            cout << "Invalid field choice!" << endl;
                                        }
                                        break;
                                    }
                                }
                                if (!found)
                                {
                                    cout << "Customer not found!" << endl;
                                }
                                cout << "Press any key to continue...";
                                getch();
                            }
                            else if (subChoice == 4)
                            {
                                system("cls");
                                cout << "How do you want to delete the customer?" << endl;
                                cout << "1 - By Name" << endl;
                                cout << "2 - By Email" << endl;
                                cout << "3 - By Phone" << endl;
                                cout << "Enter your choice: ";
                                int updateChoice;
                                cin >> updateChoice;

                                {
                                    string valueToDelete;
                                    cin.ignore();
                                    if (updateChoice == 1)
                                    {
                                        system("cls");
                                        cout << "Enter the name of the customer you want to delete: ";
                                        getline(cin, valueToDelete);
                                    }
                                    else if (updateChoice == 2)
                                    {
                                        system("cls");
                                        cout << "Enter the email of the customer you want to delete: ";
                                        getline(cin, valueToDelete);
                                    }
                                    else if (updateChoice == 3)
                                    {
                                        system("cls");
                                        cout << "Enter the phone of the customer you want to delete: ";
                                        getline(cin, valueToDelete);
                                    }
                                    else
                                    {
                                        cout << "Invalid choice!" << endl;
                                        getch();
                                        continue;
                                    }

                                    bool found = false;
                                    for (int i = 0; i < customerCount; i++)
                                    {
                                        bool match = false;
                                        if (updateChoice == 1 && customerName[i]  == valueToDelete) match = true;
                                        if (updateChoice == 2 && customerEmail[i] == valueToDelete) match = true;
                                        if (updateChoice == 3 && customerPhone[i] == valueToDelete) match = true;

                                        if (match)
                                        {
                                            for (int j = i; j < customerCount - 1; j++)
                                            {
                                                customerName[j]                = customerName[j + 1];
                                                customerEmail[j]               = customerEmail[j + 1];
                                                customerPhone[j]               = customerPhone[j + 1];
                                                customerAddress[j]             = customerAddress[j + 1];
                                                customerSolarSystemType[j]     = customerSolarSystemType[j + 1];
                                                customerInvertercapacity[j]    = customerInvertercapacity[j + 1];
                                                customersolarplates[j]         = customersolarplates[j + 1];
                                                customersolarsystemcapacity[j] = customersolarsystemcapacity[j + 1];
                                                customerprojectprice[j]        = customerprojectprice[j + 1];
                                            }
                                            customerCount--;
                                            cout << "Customer Deleted Successfully!" << endl;
                                            found = true;
                                            break;
                                        }
                                    }
                                    if (!found)
                                    {
                                        cout << "Customer not found!" << endl;
                                    }
                                }
                                cout << "Press any key to continue...";
                                getch();
                            }
                            else if (subChoice == 5)
                            {
                                system("cls");
                                cout << "Search customer by:" << endl;
                                cout << "1 - By Name" << endl;
                                cout << "2 - By Phone" << endl;
                                cout << "3 - By Email" << endl;
                                cout << "Enter your choice: ";
                                int searchChoice;
                                cin >> searchChoice;
                                cin.ignore();

                                cout << "Enter search value: ";
                                string searchVal;
                                getline(cin, searchVal);

                                bool found = false;
                                for (int i = 0; i < customerCount; i++)
                                {
                                    bool match = false;
                                    if (searchChoice == 1 && customerName[i]  == searchVal) match = true;
                                    if (searchChoice == 2 && customerPhone[i] == searchVal) match = true;
                                    if (searchChoice == 3 && customerEmail[i] == searchVal) match = true;

                                    if (match)
                                    {
                                        cout << endl << "--- Customer Found ---" << endl;
                                        cout << "Name     : " << customerName[i]             << endl;
                                        cout << "Email    : " << customerEmail[i]            << endl;
                                        cout << "Phone    : " << customerPhone[i]            << endl;
                                        cout << "Address  : " << customerAddress[i]          << endl;
                                        cout << "Type     : " << customerSolarSystemType[i]  << endl;
                                        cout << "Inverter : " << customerInvertercapacity[i] << endl;
                                        cout << "Panels   : " << customersolarplates[i]      << endl;
                                        cout << "Capacity : " << customersolarsystemcapacity[i] << " kW" << endl;
                                        cout << "Price    : " << customerprojectprice[i]     << " PKR" << endl;
                                        found = true;
                                        break;
                                    }
                                }
                                if (!found)
                                {
                                    cout << "Customer not found!" << endl;
                                }
                                cout << "Press any key to continue...";
                                getch();
                            }
                            else if (subChoice == 6)
                            {
                                system("cls");
                                cout << "Returning to Admin Menu..." << endl;
                                getch();
                                system("cls");
                                break;
                            }
                            else
                            {
                                cout << "Enter a valid input. And press any key to try again." << endl;
                                getch();
                            }
                        }
                    }

                    // -----------------------------------------------
                    // 2. INVENTORY MANAGEMENT
                    // -----------------------------------------------
                    else if (choice == 2)
                    {
                        while (true)
                        {
                            system("cls");
                            cout << "Inventory Management Selected" << endl;
                            cout << "1 - Add Product" << endl;
                            cout << "2 - View Products" << endl;
                            cout << "3 - Update Product" << endl;
                            cout << "4 - Delete Product" << endl;
                            cout << "5 - Search Product" << endl;
                            cout << "6 - Back to Admin Menu" << endl;
                            cout << "Enter your choice: ";
                            int subChoice;
                            cin >> subChoice;

                            if (subChoice == 1)
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
                                cin.ignore();
                                productCount++;

                                cout << "Product Added Successfully!" << endl << endl;
                                cout << "Product Name \t Product Description \t Product Quantity \t Product Price" << endl;
                                cout << productName[newIndex] << "\t" << productDescription[newIndex] << "\t"
                                     << productQuantity[newIndex] << "\t" << productprice[newIndex] << endl << endl;
                                cout << "Press any key to go back to Inventory Management Menu....";
                                getch();

                                for (int i = 0; i < productCount; i++)
                                {
                                    for (int j = i + 1; j < productCount; j++)
                                    {
                                        if (productName[i] > productName[j])
                                        {
                                            string tempName = productName[i]; productName[i] = productName[j]; productName[j] = tempName;
                                            string tempDesc = productDescription[i]; productDescription[i] = productDescription[j]; productDescription[j] = tempDesc;
                                            int tempQty = productQuantity[i]; productQuantity[i] = productQuantity[j]; productQuantity[j] = tempQty;
                                            int tempPrice = productprice[i]; productprice[i] = productprice[j]; productprice[j] = tempPrice;
                                        }
                                    }
                                }
                            }
                            else if (subChoice == 2)
                            {
                                system("cls");
                                cout << "Here are the products:" << endl << endl;
                                cout << "Product Name \t Product Description \t Product Quantity \t Product Price" << endl;
                                for (int i = 0; i < productCount; i++)
                                {
                                    cout << productName[i] << "\t" << productDescription[i] << "\t"
                                         << productQuantity[i] << "\t" << productprice[i] << endl;
                                }
                                cout << endl << "Press any key to continue...";
                                getch();
                            }
                            else if (subChoice == 3)
                            {
                                system("cls");
                                cout << "Enter the name of the product: " << endl;
                                cin.ignore();
                                string productToUpdate;
                                getline(cin, productToUpdate);

                                bool found = false;
                                for (int i = 0; i < productCount; i++)
                                {
                                    if (productName[i] == productToUpdate)
                                    {
                                        cout << "Enter new description: ";
                                        getline(cin, productDescription[i]);
                                        cout << "Enter new quantity: ";
                                        cin >> productQuantity[i];
                                        cout << "Enter new price: ";
                                        cin >> productprice[i];
                                        cin.ignore();
                                        cout << "Product Updated Successfully!" << endl;
                                        found = true;
                                        break;
                                    }
                                }
                                if (!found)
                                {
                                    cout << "Product not found!" << endl;
                                }

                                for (int i = 0; i < productCount; i++)
                                {
                                    for (int j = i + 1; j < productCount; j++)
                                    {
                                        if (productName[i] > productName[j])
                                        {
                                            string tempName = productName[i]; productName[i] = productName[j]; productName[j] = tempName;
                                            string tempDesc = productDescription[i]; productDescription[i] = productDescription[j]; productDescription[j] = tempDesc;
                                            int tempQty = productQuantity[i]; productQuantity[i] = productQuantity[j]; productQuantity[j] = tempQty;
                                            int tempPrice = productprice[i]; productprice[i] = productprice[j]; productprice[j] = tempPrice;
                                        }
                                    }
                                }
                                cout << "Press any key to continue...";
                                getch();
                            }
                            else if (subChoice == 4)
                            {
                                system("cls");
                                cout << "Enter the name of the product you want to delete: ";
                                cin.ignore();
                                string productToDelete;
                                getline(cin, productToDelete);

                                bool found = false;
                                for (int i = 0; i < productCount; i++)
                                {
                                    if (productName[i] == productToDelete)
                                    {
                                        for (int j = i; j < productCount - 1; j++)
                                        {
                                            productName[j]        = productName[j + 1];
                                            productDescription[j] = productDescription[j + 1];
                                            productQuantity[j]    = productQuantity[j + 1];
                                            productprice[j]       = productprice[j + 1];
                                        }
                                        productCount--;
                                        cout << "Product Deleted Successfully!" << endl;
                                        found = true;
                                        break;
                                    }
                                }
                                if (!found)
                                {
                                    cout << "Product not found!" << endl;
                                }
                                cout << "Press any key to continue...";
                                getch();
                            }
                            else if (subChoice == 5)
                            {
                                system("cls");
                                cout << "Enter product name to search: ";
                                cin.ignore();
                                string searchVal;
                                getline(cin, searchVal);

                                bool found = false;
                                for (int i = 0; i < productCount; i++)
                                {
                                    if (productName[i] == searchVal)
                                    {
                                        cout << endl << "--- Product Found ---" << endl;
                                        cout << "Name        : " << productName[i]        << endl;
                                        cout << "Description : " << productDescription[i] << endl;
                                        cout << "Quantity    : " << productQuantity[i]    << endl;
                                        cout << "Price       : " << productprice[i]       << " PKR" << endl;
                                        found = true;
                                        break;
                                    }
                                }
                                if (!found)
                                {
                                    cout << "Product not found!" << endl;
                                }
                                cout << "Press any key to continue...";
                                getch();
                            }
                            else if (subChoice == 6)
                            {
                                system("cls");
                                cout << "Returning to Admin Menu..." << endl;
                                getch();
                                system("cls");
                                break;
                            }
                            else
                            {
                                cout << "Enter a valid input. And press any key to try again." << endl;
                                getch();
                            }
                        }
                    }

                    // -----------------------------------------------
                    // 3. ORDER MANAGEMENT
                    // -----------------------------------------------
                    else if (choice == 3)
                    {
                        while (true)
                        {
                            system("cls");
                            cout << "Order Management Selected" << endl;
                            cout << "1 - Create New Order" << endl;
                            cout << "2 - View All Orders" << endl;
                            cout << "3 - Update Order Status" << endl;
                            cout << "4 - Delete Order" << endl;
                            cout << "5 - Back to Admin Menu" << endl;
                            cout << "Enter your choice: ";
                            int subChoice;
                            cin >> subChoice;

                            if (subChoice == 1)
                            {
                                system("cls");
                                int newIndex = orderCount;
                                cin.ignore();

                                cout << "Enter Customer Name: ";
                                getline(cin, orderCustomerName[newIndex]);
                                cout << "Enter Customer Phone: ";
                                getline(cin, orderCustomerPhone[newIndex]);

                                cout << endl << "Available Products:" << endl;
                                for (int i = 0; i < productCount; i++)
                                {
                                    cout << i + 1 << ". " << productName[i]
                                         << " | Qty: " << productQuantity[i]
                                         << " | Price: " << productprice[i] << " PKR" << endl;
                                }

                                cout << endl << "Enter Product Name: ";
                                getline(cin, orderProduct[newIndex]);
                                cout << "Enter Quantity: ";
                                cin >> orderQuantity[newIndex];
                                cin.ignore();

                                bool productFound = false;
                                bool stockOk = false;
                                int unitPrice = 0;
                                int productIdx = -1;

                                for (int i = 0; i < productCount; i++)
                                {
                                    if (productName[i] == orderProduct[newIndex])
                                    {
                                        productFound = true;
                                        productIdx = i;
                                        unitPrice = productprice[i];
                                        if (productQuantity[i] >= orderQuantity[newIndex])
                                        {
                                            stockOk = true;
                                        }
                                        break;
                                    }
                                }

                                if (!productFound)
                                {
                                    cout << "Product not found in inventory!" << endl;
                                }
                                else if (!stockOk)
                                {
                                    cout << "Insufficient stock! Available: " << productQuantity[productIdx] << endl;
                                }
                                else
                                {
                                    productQuantity[productIdx] -= orderQuantity[newIndex];
                                    orderTotalPrice[newIndex] = unitPrice * orderQuantity[newIndex];
                                    orderStatus[newIndex] = "Pending";
                                    orderCount++;

                                    cout << endl << "Order Created Successfully!" << endl;
                                    cout << "Order #    : " << orderCount                      << endl;
                                    cout << "Customer   : " << orderCustomerName[newIndex]     << endl;
                                    cout << "Phone      : " << orderCustomerPhone[newIndex]    << endl;
                                    cout << "Product    : " << orderProduct[newIndex]          << endl;
                                    cout << "Quantity   : " << orderQuantity[newIndex]         << endl;
                                    cout << "Total Price: " << orderTotalPrice[newIndex]       << " PKR" << endl;
                                    cout << "Status     : " << orderStatus[newIndex]           << endl;
                                }
                                cout << "Press any key to continue...";
                                getch();
                            }
                            else if (subChoice == 2)
                            {
                                system("cls");
                                cout << "All Orders (" << orderCount << " records):" << endl << endl;
                                if (orderCount == 0)
                                {
                                    cout << "No orders found." << endl;
                                }
                                else
                                {
                                    cout << "No. | Customer \t| Phone \t\t| Product \t\t| Qty | Total (PKR) | Status" << endl;
                                    for (int i = 0; i < orderCount; i++)
                                    {
                                        cout << i + 1 << ". "
                                             << orderCustomerName[i]  << "\t"
                                             << orderCustomerPhone[i] << "\t"
                                             << orderProduct[i]       << "\t"
                                             << orderQuantity[i]      << "\t"
                                             << orderTotalPrice[i]    << "\t"
                                             << orderStatus[i]        << endl;
                                    }
                                }
                                cout << endl << "Press any key to continue...";
                                getch();
                            }
                            else if (subChoice == 3)
                            {
                                system("cls");
                                cout << "Enter order number to update (1 to " << orderCount << "): ";
                                int orderNum;
                                cin >> orderNum;

                                if (orderNum < 1 || orderNum > orderCount)
                                {
                                    cout << "Invalid order number!" << endl;
                                }
                                else
                                {
                                    int idx = orderNum - 1;
                                    cout << "Customer: " << orderCustomerName[idx]
                                         << " | Product: " << orderProduct[idx]
                                         << " | Current Status: " << orderStatus[idx] << endl;
                                    cout << "Select new status:" << endl;
                                    cout << "1 - Pending" << endl;
                                    cout << "2 - Confirmed" << endl;
                                    cout << "3 - Delivered" << endl;
                                    cout << "4 - Cancelled" << endl;
                                    cout << "Enter your choice: ";
                                    int statusChoice;
                                    cin >> statusChoice;

                                    if (statusChoice == 1)
                                    {
                                        orderStatus[idx] = "Pending";
                                        cout << "Status updated to: Pending" << endl;
                                    }
                                    else if (statusChoice == 2)
                                    {
                                        orderStatus[idx] = "Confirmed";
                                        cout << "Status updated to: Confirmed" << endl;
                                    }
                                    else if (statusChoice == 3)
                                    {
                                        orderStatus[idx] = "Delivered";
                                        cout << "Status updated to: Delivered" << endl;
                                    }
                                    else if (statusChoice == 4)
                                    {
                                        orderStatus[idx] = "Cancelled";
                                        cout << "Status updated to: Cancelled" << endl;
                                    }
                                    else
                                    {
                                        cout << "Invalid choice!" << endl;
                                    }
                                }
                                cout << "Press any key to continue...";
                                getch();
                            }
                            else if (subChoice == 4)
                            {
                                system("cls");
                                cout << "Enter order number to delete (1 to " << orderCount << "): ";
                                int orderNum;
                                cin >> orderNum;

                                if (orderNum < 1 || orderNum > orderCount)
                                {
                                    cout << "Invalid order number!" << endl;
                                }
                                else
                                {
                                    int idx = orderNum - 1;
                                    cout << "Deleting order for: " << orderCustomerName[idx] << " - " << orderProduct[idx] << endl;
                                    for (int j = idx; j < orderCount - 1; j++)
                                    {
                                        orderCustomerName[j]  = orderCustomerName[j + 1];
                                        orderCustomerPhone[j] = orderCustomerPhone[j + 1];
                                        orderProduct[j]       = orderProduct[j + 1];
                                        orderQuantity[j]      = orderQuantity[j + 1];
                                        orderTotalPrice[j]    = orderTotalPrice[j + 1];
                                        orderStatus[j]        = orderStatus[j + 1];
                                    }
                                    orderCount--;
                                    cout << "Order Deleted Successfully!" << endl;
                                }
                                cout << "Press any key to continue...";
                                getch();
                            }
                            else if (subChoice == 5)
                            {
                                system("cls");
                                cout << "Returning to Admin Menu..." << endl;
                                getch();
                                system("cls");
                                break;
                            }
                            else
                            {
                                cout << "Enter a valid input. And press any key to try again." << endl;
                                getch();
                            }
                        }
                    }

                    // -----------------------------------------------
                    // 4. SETUP CALCULATION
                    // -----------------------------------------------
                    else if (choice == 4)
                    {
                        system("cls");
                        cout << "Enter the capacity of solar system you want to install in kW: ";
                        int SolarsystemCapacity;
                        cin >> SolarsystemCapacity;

                        int panelCount   = (SolarsystemCapacity * 100 + 54) / 55;
                        int inverterCount = (SolarsystemCapacity + 4) / 5;
                        int batteryCount  = SolarsystemCapacity * 10;

                        cout << endl << "--- Setup Calculation Results ---" << endl;
                        cout << "System Capacity      : " << SolarsystemCapacity   << " kW"     << endl;
                        cout << "Solar Panels Needed  : " << panelCount            << " panels" << endl;
                        cout << "Inverters Needed     : " << inverterCount         << " x 5KW"  << endl;
                        cout << "Batteries Needed     : " << batteryCount          << " units"  << endl;
                        cout << "---------------------------------"                              << endl;
                        cout << "Panel Cost           : " << panelCount * 550      << " PKR" << endl;
                        cout << "Inverter Cost        : " << inverterCount * 5000  << " PKR" << endl;
                        cout << "Battery Cost         : " << batteryCount * 10000  << " PKR" << endl;
                        cout << "---------------------------------"                              << endl;
                        cout << "Total Estimated Cost : " << (panelCount * 550 + inverterCount * 5000 + batteryCount * 10000) << " PKR" << endl;

                        cout << endl << "Press any key to continue...";
                        getch();
                        system("cls");
                    }

                    // -----------------------------------------------
                    // 5. REPORTS
                    // -----------------------------------------------
                    else if (choice == 5)
                    {
                        while (true)
                        {
                            system("cls");
                            cout << "Reports Selected" << endl;
                            cout << "1 - Customer Summary Report" << endl;
                            cout << "2 - Inventory Report" << endl;
                            cout << "3 - Orders Report" << endl;
                            cout << "4 - Revenue Report" << endl;
                            cout << "5 - Back to Admin Menu" << endl;
                            cout << "Enter your choice: ";
                            int subChoice;
                            cin >> subChoice;

                            if (subChoice == 1)
                            {
                                system("cls");
                                cout << "--- Customer Summary Report ---" << endl << endl;
                                cout << "Total Customers     : " << customerCount << endl;

                                int resCount = 0, comCount = 0, indCount = 0;
                                int totalRevenue = 0;
                                for (int i = 0; i < customerCount; i++)
                                {
                                    if      (customerSolarSystemType[i] == "Residential") resCount++;
                                    else if (customerSolarSystemType[i] == "Commercial")  comCount++;
                                    else if (customerSolarSystemType[i] == "Industrial")  indCount++;
                                    totalRevenue += customerprojectprice[i];
                                }
                                cout << "Residential Clients : " << resCount     << endl;
                                cout << "Commercial Clients  : " << comCount     << endl;
                                cout << "Industrial Clients  : " << indCount     << endl;
                                cout << "Total Project Value : " << totalRevenue << " PKR" << endl;
                                if (customerCount > 0)
                                {
                                    cout << "Average Project Value: " << totalRevenue / customerCount << " PKR" << endl;
                                }
                                cout << endl << "Press any key to continue...";
                                getch();
                            }
                            else if (subChoice == 2)
                            {
                                system("cls");
                                cout << "--- Inventory Report ---" << endl << endl;
                                cout << "Total Products: " << productCount << endl << endl;

                                int totalValue = 0;
                                bool anyLow = false;
                                cout << "Low Stock Alerts (Qty < 10):" << endl;
                                for (int i = 0; i < productCount; i++)
                                {
                                    totalValue += productQuantity[i] * productprice[i];
                                    if (productQuantity[i] < 10)
                                    {
                                        cout << "  ! " << productName[i] << " - Only " << productQuantity[i] << " left!" << endl;
                                        anyLow = true;
                                    }
                                }
                                if (!anyLow)
                                {
                                    cout << "  All products have sufficient stock." << endl;
                                }
                                cout << endl << "Total Inventory Value: " << totalValue << " PKR" << endl;
                                cout << endl << "Press any key to continue...";
                                getch();
                            }
                            else if (subChoice == 3)
                            {
                                system("cls");
                                cout << "--- Orders Report ---" << endl << endl;
                                cout << "Total Orders: " << orderCount << endl;

                                int pendingCount = 0, confirmedCount = 0, deliveredCount = 0, cancelledCount = 0;
                                int totalOrderValue = 0;
                                for (int i = 0; i < orderCount; i++)
                                {
                                    if      (orderStatus[i] == "Pending")   pendingCount++;
                                    else if (orderStatus[i] == "Confirmed") confirmedCount++;
                                    else if (orderStatus[i] == "Delivered") deliveredCount++;
                                    else if (orderStatus[i] == "Cancelled") cancelledCount++;
                                    totalOrderValue += orderTotalPrice[i];
                                }
                                cout << "Pending   : " << pendingCount   << endl;
                                cout << "Confirmed : " << confirmedCount  << endl;
                                cout << "Delivered : " << deliveredCount  << endl;
                                cout << "Cancelled : " << cancelledCount  << endl;
                                cout << "Total Order Value: " << totalOrderValue << " PKR" << endl;
                                cout << endl << "Press any key to continue...";
                                getch();
                            }
                            else if (subChoice == 4)
                            {
                                system("cls");
                                cout << "--- Revenue Report ---" << endl << endl;

                                int customerRevenue = 0;
                                for (int i = 0; i < customerCount; i++)
                                    customerRevenue += customerprojectprice[i];

                                int deliveredRevenue = 0;
                                for (int i = 0; i < orderCount; i++)
                                {
                                    if (orderStatus[i] == "Delivered")
                                        deliveredRevenue += orderTotalPrice[i];
                                }

                                int totalInventoryValue = 0;
                                for (int i = 0; i < productCount; i++)
                                    totalInventoryValue += productQuantity[i] * productprice[i];

                                cout << "Total Quoted Revenue (Customers)   : " << customerRevenue     << " PKR" << endl;
                                cout << "Realized Revenue (Delivered Orders): " << deliveredRevenue   << " PKR" << endl;
                                cout << "Total Inventory Value              : " << totalInventoryValue << " PKR" << endl;
                                cout << "Total Customers                    : " << customerCount       << endl;
                                cout << "Total Orders                       : " << orderCount          << endl;
                                if (customerCount > 0)
                                    cout << "Average Project Value              : " << customerRevenue / customerCount << " PKR" << endl;

                                cout << endl << "Press any key to continue...";
                                getch();
                            }
                            else if (subChoice == 5)
                            {
                                system("cls");
                                cout << "Returning to Admin Menu..." << endl;
                                getch();
                                system("cls");
                                break;
                            }
                            else
                            {
                                cout << "Enter a valid input. And press any key to try again." << endl;
                                getch();
                            }
                        }
                    }

                    // -----------------------------------------------
                    // 6. LOGOUT
                    // -----------------------------------------------
                    else if (choice == 6)
                    {
                        system("cls");
                        cout << "Logging out..." << endl;
                        getch();
                        system("cls");
                        break;
                    }
                    else
                    {
                        cout << "Enter a valid input. And press any key to try again." << endl;
                        getch();
                    }
                }
            }
            else
            {
                system("cls");
                cout << "Invalid Admin Credentials!" << endl;
                cout << "Press any key to try again." << endl;
                getch();
                system("cls");
            }
        }

        // ================================================================
        //  CUSTOMER
        // ================================================================
        else if (choice == 2)
        {
            system("cls");
            cout << "Customer Portal Selected" << endl;
            cout << "1 - New Customer (Get Quotation)" << endl;
            cout << "2 - View My Quotation (Returning Customer)" << endl;
            cout << "3 - Back to Main Menu" << endl;
            cout << "Enter your choice: ";
            int custChoice;
            cin >> custChoice;

            if (custChoice == 1)
            {
                system("cls");
                int newIndex = customerCount;
                cin.ignore();

                cout << "Enter your name: ";
                getline(cin, customerName[newIndex]);
                cout << "Enter your email: ";
                getline(cin, customerEmail[newIndex]);
                cout << "Enter your phone number: ";
                getline(cin, customerPhone[newIndex]);
                cout << "Enter your address: ";
                getline(cin, customerAddress[newIndex]);
                cout << "Enter the capacity of solar system you want to install in kW: ";
                cin >> customersolarsystemcapacity[newIndex];
                cin.ignore();
                cout << "Enter the type of solar system (Residential/Commercial/Industrial): ";
                getline(cin, customerSolarSystemType[newIndex]);
                cout << "Enter the inverter capacity (5KW/10KW/20KW): ";
                getline(cin, customerInvertercapacity[newIndex]);

                int panelCount   = (customersolarsystemcapacity[newIndex] * 100 + 54) / 55;
                int inverterCount = (customersolarsystemcapacity[newIndex] + 4) / 5;
                int batteryCount  = customersolarsystemcapacity[newIndex] * 10;
                customerprojectprice[newIndex] = panelCount * 550 + inverterCount * 5000 + batteryCount * 10000;
                customerCount++;

                cout << "\nYour Solar System Specifications:" << endl;
                cout << "Solar Capacity \t Number of Panels \t Inverter Capacity \t Battery Quantity \t Project Price" << endl;
                cout << customersolarsystemcapacity[newIndex] << "\t\t"
                     << panelCount << "\t\t"
                     << customerInvertercapacity[newIndex] << "\t\t"
                     << batteryCount << "\t\t"
                     << customerprojectprice[newIndex] << " PKR" << endl;

                cout << endl << "Thank you! Our team will contact you soon." << endl;
                cout << "Press any key to continue...";
                getch();
                system("cls");
            }
            else if (custChoice == 2)
            {
                system("cls");
                cout << "Enter your phone number: ";
                cin.ignore();
                string myPhone;
                getline(cin, myPhone);

                bool found = false;
                for (int i = 0; i < customerCount; i++)
                {
                    if (customerPhone[i] == myPhone)
                    {
                        cout << endl << "--- Your Quotation ---" << endl;
                        cout << "Name            : " << customerName[i]                << endl;
                        cout << "Phone           : " << customerPhone[i]               << endl;
                        cout << "Email           : " << customerEmail[i]               << endl;
                        cout << "Address         : " << customerAddress[i]             << endl;
                        cout << "System Type     : " << customerSolarSystemType[i]     << endl;
                        cout << "System Capacity : " << customersolarsystemcapacity[i] << " kW" << endl;
                        cout << "Inverter        : " << customerInvertercapacity[i]    << endl;
                        cout << "Solar Panels    : " << customersolarplates[i]         << endl;
                        cout << "Total Price     : " << customerprojectprice[i]        << " PKR" << endl;
                        found = true;
                        break;
                    }
                }
                if (!found)
                {
                    cout << "No record found for this phone number." << endl;
                }
                cout << endl << "Press any key to continue...";
                getch();
                system("cls");
            }
            else if (custChoice == 3)
            {
                system("cls");
            }
            else
            {
                cout << "Enter a valid input. And press any key to try again." << endl;
                getch();
                system("cls");
            }
        }

        // ================================================================
        //  EXIT
        // ================================================================
        else if (choice == 3)
        {
            system("cls");
            cout << "Thank you for using Solar Business Management System!" << endl;
            cout << "Goodbye!" << endl;
            break;
        }
        else
        {
            cout << "Enter a valid input. And press any key to try again." << endl;
            getch();
            system("cls");
        }
    }

    return 0;
}
