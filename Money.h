#ifndef MONEY_H
#define MONEY_H

#include <iostream>
using namespace std;

class Money {
 
private:
    int amount;

public:
	// Constructor that initializes the amount of money with the given initialAmount
    Money(int initialAmount) : amount(initialAmount) {}

 // Function to add the specified amount of money to the current amount
    void addMoney(int money) {
        amount += money;
    }
    
    // Function to subtract the specified amount of money from the current amount
    // If the current amount is less than the specified amount, it displays an error message
    void subtractMoney(int money) {
        if (amount >= money) {
            amount -= money;
        } else {
            cout << "Insufficient funds." <<endl;
        }
    }
    // Function to retrieve the current amount of money
    int getAmount() const {
        return amount;
    }
    // Function to display the current amount of money
    void displayMoney() const {
        cout << "Current amount of money: $" << amount <<endl;
    }
    

};

#endif // MONEY_H
