#include <iostream>
#include <string>
using namespace std;

class Hotel {
    string roomNumber;
    string customerName;
    int numOfDays;
    double roomRate;
    double totalBill;
    
public:
    void checkIn() {
        cout << "Enter Customer Name: ";
        cin.ignore();
        getline(cin, customerName);
        
        cout << "Enter Room Number: ";
        cin >> roomNumber;
        
        cout << "Enter Number of Days: ";
        cin >> numOfDays;
        
        cout << "Enter Room Rate: ";
        cin >> roomRate;
        
        totalBill = numOfDays * roomRate;
        cout << "Checked-in successfully!" << endl;
    }
    
    void checkOut() {
        cout << "Customer Name: " << customerName << endl;
        cout << "Room Number: " << roomNumber << endl;
        cout << "Number of Days: " << numOfDays << endl;
        cout << "Room Rate: $" << roomRate << endl;
        cout << "Total Bill: $" << totalBill << endl;
        
        cout << "Checked-out successfully!" << endl;
        customerName = "";
        roomNumber = "";
        numOfDays = 0;
        roomRate = 0.0;
        totalBill = 0.0;
    }
    
    void viewBill() {
        cout << "Customer Name: " << customerName << endl;
        cout << "Room Number: " << roomNumber << endl;
        cout << "Number of Days: " << numOfDays << endl;
        cout << "Room Rate: $" << roomRate << endl;
        cout << "Total Bill: $" << totalBill << endl;
    }
};

int main() {
    Hotel hotel;
    int choice;
    
    do {
        cout << "Hotel Management System" << endl;
        cout << "1. Check-in" << endl;
        cout << "2. Check-out" << endl;
        cout << "3. View Bill" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch(choice) {
            case 1:
                hotel.checkIn();
                break;
            case 2:
                hotel.checkOut();
                break;
            case 3:
                hotel.viewBill();
                break;
            case 4:
                cout << "Exiting the program..." << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
        
        cout << endl;
    } while(choice != 4);
    
    return 0;
}

