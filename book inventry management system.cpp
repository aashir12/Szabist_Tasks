#include <iostream>
#include <string> // Include for string type

using namespace std;

int main() {
    // Initial book inventory
    char name[10];
    int book1 = 10;  
    int book2 = 25; 
    int book3 = 20;  

    // Get name
    cout << "Welcome to SZABIST Library" << endl;
    cout << "Please Enter Your name to get started" << endl;
    cout << "Enter Your Name: ";
    cin >> name;
    
    // Display the current book inventory
    cout << "1- Book Inventory:"<<endl;
    cout << "2- Rich Dad Poor Dad: " << book1 << " copies"<<endl;
    cout << "3- The Rise of a Warrior: " << book2 << " copies"<<endl;
    cout << "The Last Knight: " << book3 << " copies"<<endl;
    cout << "-----------------"<<endl;

    int option;
    cout << "Choose an option:"<<endl;
    cout << "1. Check availability"<<endl;
    cout << "2. Update inventory"<<endl;
    cout << "3. Take a book"<<endl;
    cout << "Enter option (1 , 2 or 3): ";
    cin >> option;

    if (option == 1) {
        // Check availability
        int bookToCheck;
        cout << "Enter the book number to check availability (1, 2, or 3): ";
        cin >> bookToCheck;

        // Validate user input
        if (bookToCheck < 1 || bookToCheck > 3) {
            cout << "Invalid book number. Please enter a valid book number."<<endl;
            return 1;
        }

        // Display availability
        if (bookToCheck == 1) {
            cout << "Rich Dad Poor Dad is available. " << book1 << " copies in stock."<<endl;
        } else if (bookToCheck == 2) {
            cout << "The Rise of a Warrior is available. " << book2 << " copies in stock."<<endl;
        } else {
            cout << "The Last Knight is available. " << book3 << " copies in stock."<<endl;
        }
    } else if (option == 2) {
        // Update inventory
        int bookToUpdate;
        int newQuantity;

        cout << "Enter the book number to update inventory (1, 2, or 3): ";
        cin >> bookToUpdate;

        // Validate book number
        if (bookToUpdate < 1 || bookToUpdate > 3) {
            cout << "Invalid book number. Please enter a valid book number."<<endl;
            return 1;
        }

        cout << "Enter the new quantity: ";
        cin >> newQuantity;

        // Validate quantity
        if (newQuantity < 0) {
            cout << "Invalid quantity. Please enter a non-negative number."<<endl;
            return 1;
        }

        // Update inventory
        if (bookToUpdate == 1) {
            book1 = newQuantity;
            cout << "Inventory updated for Rich Dad Poor Dad. New quantity: " << book1 << " copies."<<endl;
        } else if (bookToUpdate == 2) {
            book2 = newQuantity;
            cout << "Inventory updated for The Rise of a Warrior. New quantity: " << book2 << " copies."<<endl;
        } else {
            book3 = newQuantity;
            cout << "Inventory updated for The Last Knight. New quantity: " << book3 << " copies."<<endl;
        }
    } else if (option == 3) {
        // Take a book
        int selectedBook, quantity;
        cout << "Enter the book you want to take (1, 2, or 3): ";
        cin >> selectedBook;

        // Validate book number
        if (selectedBook < 1 || selectedBook > 3) {
            cout << "Invalid book number. Please enter a valid book number."<<endl;
            return 1;
        }

        // Ask for quantity
        cout << "Enter the quantity you want to take: ";
        cin >> quantity;

        // Update inventory and inform user
        if (selectedBook == 1) {
            if (quantity <= book1) {
                book1 -= quantity;
                cout << "You took " << quantity << " copies of Rich Dad Poor Dad."<<endl;
            } else {
                cout << "Not enough copies available."<<endl;
            }
        } else if (selectedBook == 2) {
            if (quantity <= book2) {
                book2 -= quantity;
                cout << "You took " << quantity << " copies of The Rise of a Warrior."<<endl;
            } else {
                cout << "Not enough copies available."<<endl;
            }
        } else {
            if (quantity <= book3) {
                book3 -= quantity;
                cout << "You took " << quantity << " copies of The Last Knight."<<endl;
            } else {
                cout << "Not enough copies available."<<endl;
            }
        }
    } else {
        cout << "Invalid option. Please enter 1, 2, or 3."<<endl;
        return 1;
    }

    return 0;
}
