#include <iostream>
using namespace std;

void restaurantMenu()
{
    int choice;

    cout << "\n===== RESTAURANT MENU =====\n";
    cout << "1. Pizza\n";
    cout << "2. Burger\n";
    cout << "3. Pasta\n";
    cout << "4. Sandwich\n";
    cout << "5. Exit\n";
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 5)
    {
        cout << "Thank you! Exiting...\n";
        return;
    }

    switch (choice)
    {
        case 1:
            cout << "You selected Pizza.\n";
            break;

        case 2:
            cout << "You selected Burger.\n";
            break;

        case 3:
            cout << "You selected Pasta.\n";
            break;

        case 4:
            cout << "You selected Sandwich.\n";
            break;

        default:
            cout << "Invalid choice.\n";
    }

    // Call the function again
    restaurantMenu();
}

int main()
{
    restaurantMenu();
    return 0;
}
