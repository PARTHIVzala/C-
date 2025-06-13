#include <iostream>
using namespace std;

class Bank {
private:
    string FirstName, MiddleName, LastName;
    int AccountNumber;
	string IFSC_code ;
    float balance;
public:
    void createAccount() {
        cout << "Enter First Name: ";
        cin >> FirstName;
        cout << "Enter Middle Name: ";
        cin >> MiddleName;
        cout << "Enter Last Name: ";
        cin >> LastName;
        cout << "Enter Account Number: ";
        cin >> AccountNumber;
        cout << " Enter IFSC code : " ;
        cin >> IFSC_code ;
        cout << "Enter Deposit Amount (Rs): ";
        cin >> balance;
        cout << " Enter withdraw Amount (Rs):";
        cin >> balance;
        cout << "Account created successfully!" << endl;
    }

    void deposit() {
        float amount;
        cout << "Enter amount to deposit (Rs): ";
        cin >> amount;
        if (amount > 0) {
            balance += amount;
            cout << "Rs. " << amount << " deposited successfully!" << endl;
        } else {
            cout << "Invalid amount." << endl;
        }
    }

    void withdraw() {
        float amount;
        cout << "Enter amount to withdraw (Rs): ";
        cin >> amount;

        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Rs. " << amount << " withdrawn successfully!" << endl;
        } else {
            cout << "Insufficient balance or invalid amount." << endl;
        }
    }

    void showDetails() {
        cout << "----------------------------------------" << endl;
        cout << "Account Holder: " << FirstName << " " << MiddleName << " " << LastName << endl;
        cout << "Account Number: " << AccountNumber << endl;
        cout << " IFSC code :" << IFSC_code << endl ;
		cout << "Balance       : Rs. " << balance << endl;
        cout << "----------------------------------------" << endl;
    }
};

int main() {
    Bank account;
    int choice;

    account.createAccount();

    do {
        cout << "------ Menu ------" << endl;
        cout << "1. Deposit Money" << endl;
        cout << "2. Withdraw Money" << endl;
        cout << "3. Show Account Details" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
        case 1:
            account.deposit();
            break;
        case 2:
            account.withdraw();
            break;
        case 3:
            account.showDetails();
            break;
        case 4:
            cout << "Thank you for using the banking system!" << endl;
            break;
        default:
            cout << "Invalid choice. Try again." << endl;
            break;
        }
    } while (choice != 4);
    return 0;
}
