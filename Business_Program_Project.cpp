#include <iostream>
#include <conio.h>
using namespace std;
main()
{
    system("cls");
    // first page
    // data structures for storing customer data
    string CustomerNames[1000];
    string CustomerInverters[1000];
    string CustomerSolarType[1000];
    string CustomerLocations[1000];
    int UserChoice;
    int CustomerSolarPanelsQuantities[1000];
    int CustomerBatteryQuantities[1000];
    int CustomerSolarkw[1000];
    int CustomerIDs[1000];
    int totalCustomers = 0;

    cout << "----------------------------------------------------------------" << endl;
    cout << "----Welcome to Solar Installation Business Management System----" << endl;
    cout << "----------------------------------------------------------------" << endl
         << endl;

    cout << "1-Admin" << endl;
    cout << "2-Customer" << endl;
    cout << "3-Exit" << endl
         << endl;

    cout << "select Mode : ";
    int mode;
    cin >> mode;

    if (mode == 1)
    {
        cout << "Enter username : ";
        string username;
        cin >> username;

        cout << "Enter password : ";
        string password;
        cin >> password;

        while (true)
        {
            if (username == "admin" && password == "123")
            {
                while (true)
                {
                    system("cls");
                    cout << "Welcome Admin!" << endl;
                    cout << "Press any key to continue..." << endl;
                    getch();

                    system("cls");

                    cout << "================================================================" << endl;
                    cout << "====================:Welcome to Admin Module:===================" << endl;
                    cout << "================================================================" << endl
                         << endl;

                    cout << "1-Customer Management" << endl;
                    cout << "2-Solar System Calculation" << endl;
                    cout << "3-Quotation System" << endl;
                    cout << "4-Inventory Management" << endl;
                    cout << "5-Project Management" << endl;
                    cout << "6-Billing System" << endl;
                    cout << "7-Employee Management" << endl;
                    cout << "8-Maintenance System" << endl;
                    cout << "9-Reports and Analytics" << endl;
                    cout << "10-Exit" << endl
                         << endl;

                    cout << "Please Enter your choice : ";
                    int UserChoice;
                    cin >> UserChoice;
                }
            }
            else
            {
                cout << "Invalid username or password. Please try again." << endl;
                break;
            }
        }

        if (UserChoice == 1)
        {
            system("cls");
            // code for Admin Panel

            while (true)
            {
                system("cls");
                cout << "1-Add Customer" << endl;
                cout << "2-View all Customers" << endl;
                cout << "3-Search Customer" << endl;
                cout << "4-Update Customer Record" << endl;
                cout << "5-Delete Customer Record" << endl;
                cout << "6-Exit Customer Management" << endl
                     << endl;

                int customerChoice;
                cout << "Please Enter your choice : ";
                cin >> customerChoice;

                if (customerChoice == 1)
                {
                    system("cls");
                    // code for adding customer

                    cout << "Enter Customer Name: ";
                    getline(cin, CustomerNames[totalCustomers]);
                    cin >> CustomerNames[totalCustomers];
                    cout << "Enter Inverter Type: ";
                    getline(cin, CustomerInverters[totalCustomers]);
                    cin >> CustomerInverters[totalCustomers];
                    cout << "Enter Solar Type: ";
                    getline(cin, CustomerSolarType[totalCustomers]);
                    cin >> CustomerSolarType[totalCustomers];
                    cout << "Enter Location: ";
                    getline(cin, CustomerLocations[totalCustomers]);
                    cin >> CustomerLocations[totalCustomers];
                }
                else if (customerChoice == 2)
                {
                    system("cls");
                    // code for searching customer
                }
                else if (customerChoice == 3)
                {
                    system("cls");
                    // code for updating customer record
                }
                else if (customerChoice == 4)
                {
                    system("cls");
                    // code for deleting customer record
                }
                else if (customerChoice == 5)
                {
                    system("cls");
                    break; // Exit Customer Management
                }
                else
                {
                    cout << "Invalid choice. Please try again." << endl;
                }
            }
        }
        else if (UserChoice == 2)
        {
            system("cls");
            // code for Lead Management
        }
        else if (UserChoice == 3)
        {
            system("cls");
            // code for Solar System Calculation
        }
        else if (UserChoice == 4)
        {
            system("cls");
            // code for Quotation System
        }
        else if (UserChoice == 5)
        {
            system("cls");
            // code for Inventory Management
        }
        else if (UserChoice == 6)
        {
            system("cls");
            // code for Project Management
        }
        else if (UserChoice == 7)
        {
            system("cls");
            // code for Billing System
        }
        else if (UserChoice == 8)
        {
            system("cls");
            // code for Employee Management
        }
        else if (UserChoice == 9)
        {
            system("cls");
            // code for Maintenance System
        }
        else if (UserChoice == 10)
        {
            system("cls");
            // code for Reports and Analytics
        }
        else if (UserChoice == 11)
        {
            cout << "Thank you for using Solar Management System!" << endl;
            break;
        }
        else
        {
            cout << "Invalid choice. Please try again." << endl;
        }
    }
    }
else if (mode == 2)
{
    system("cls");
    // code for User Panel
}
else if (mode == 3)
{
    cout << "Thank you for using Solar Management System!" << endl;
}
else
{
    cout << "Invalid choice. Please try again." << endl;
}
}