#include <iostream>
#include <conio.h>
using namespace std;

// ===== FUNCTION DECLARATIONS =====
bool adminLogin();
void mainMenu();

void customerMenu(string[], string[], string[], int &);
void addCustomer(string[], string[], string[], int &);
void viewCustomers(string[], string[], string[], int);

void inventoryMenu(string[], int[], int[], int);
void viewInventory(string[], int[], int[], int);

void orderMenu(string[], string[], int[], int[], int,
               string[], string[], int[], int[], int &);
void placeOrder(string[], string[], int[], int[], int,
                string[], string[], int[], int[], int &);
void viewOrders(string[], string[], int[], int[], int);

// ===== MAIN =====
int main()
{
    mainMenu();
    return 0;
}

// ===== FUNCTION DEFINITIONS =====

bool adminLogin()
{
    string u, p;
    cout << "Username: ";
    cin >> u;
    cout << "Password: ";
    cin >> p;

    return (u == "admin" && p == "123");
}

// ================= MAIN MENU =================
void mainMenu()
{
    string cname[1000], cemail[1000], cphone[1000];
    int cCount = 0;

    string pname[1000] = {"Panel", "Battery", "Inverter"};
    int pqty[1000] = {50, 30, 20};
    int pprice[1000] = {500, 300, 1500};
    int pCount = 3;

    string ocust[1000], oprod[1000];
    int oqty[1000], oprice[1000];
    int oCount = 0;

    int choice;

    while (true)
    {
        system("cls");
        cout << "1. Admin\n2. Exit\nChoice: ";
        cin >> choice;

        if (choice == 1)
        {
            if (adminLogin())
            {
                int opt;
                while (true)
                {
                    system("cls");
                    cout << "1. Customers\n2. Inventory\n3. Orders\n4. Logout\nChoice: ";
                    cin >> opt;

                    if (opt == 1)
                        customerMenu(cname, cemail, cphone, cCount);

                    else if (opt == 2)
                        inventoryMenu(pname, pqty, pprice, pCount);

                    else if (opt == 3)
                        orderMenu(cname, pname, pprice, pqty, pCount,
                                  ocust, oprod, oqty, oprice, oCount);

                    else
                        break;
                }
            }
            else
            {
                cout << "Invalid Login!";
                getch();
            }
        }
        else
            break;
    }
}

// ================= CUSTOMER MENU =================
void customerMenu(string name[], string email[], string phone[], int &count)
{
    int ch;
    cout << "1. Add\n2. View\nChoice: ";
    cin >> ch;

    if (ch == 1)
        addCustomer(name, email, phone, count);
    else
        viewCustomers(name, email, phone, count);
}

void addCustomer(string name[], string email[], string phone[], int &count)
{
    system("cls");
    cout << "Name: ";
    cin >> name[count];
    cout << "Email: ";
    cin >> email[count];
    cout << "Phone: ";
    cin >> phone[count];

    count++;
    cout << "Added!\n";
    getch();
}

void viewCustomers(string name[], string email[], string phone[], int count)
{
    system("cls");

    for (int i = 0; i < count; i++)
    {
        cout << name[i] << " | " << email[i] << " | " << phone[i] << endl;
    }

    getch();
}

// ================= INVENTORY =================
void inventoryMenu(string name[], int qty[], int price[], int count)
{
    viewInventory(name, qty, price, count);
}

void viewInventory(string name[], int qty[], int price[], int count)
{
    system("cls");

    for (int i = 0; i < count; i++)
    {
        cout << name[i] << " | Qty: " << qty[i] << " | Price: " << price[i] << endl;
    }

    getch();
}

// ================= ORDERS =================
void orderMenu(string cname[], string pname[], int price[], int qty[], int pCount,
               string ocust[], string oprod[], int oqty[], int oprice[], int &oCount)
{
    int ch;
    cout << "1. Place Order\n2. View Orders\nChoice: ";
    cin >> ch;

    if (ch == 1)
        placeOrder(cname, pname, price, qty, pCount,
                   ocust, oprod, oqty, oprice, oCount);
    else
        viewOrders(ocust, oprod, oqty, oprice, oCount);
}

void placeOrder(string cname[], string pname[], int price[], int qty[], int pCount,
                string ocust[], string oprod[], int oqty[], int oprice[], int &oCount)
{
    system("cls");

    cout << "Customer Name: ";
    cin >> ocust[oCount];

    for (int i = 0; i < pCount; i++)
    {
        cout << i << ". " << pname[i] << endl;
    }

    int choice;
    cout << "Select product: ";
    cin >> choice;

    cout << "Quantity: ";
    cin >> oqty[oCount];

    oprod[oCount] = pname[choice];
    oprice[oCount] = oqty[oCount] * price[choice];

    qty[choice] -= oqty[oCount];

    oCount++;

    cout << "Order Placed!\n";
    getch();
}

void viewOrders(string ocust[], string oprod[], int oqty[], int oprice[], int count)
{
    system("cls");

    for (int i = 0; i < count; i++)
    {
        cout << ocust[i] << " | " << oprod[i]
             << " | Qty: " << oqty[i]
             << " | Total: " << oprice[i] << endl;
    }

    getch();
}