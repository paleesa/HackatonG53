#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"
#include <iostream>
#include <string>
class LinkedList {
private:
    Node* head; // Pointer to the head node of the linked list

public:
    LinkedList() : head(nullptr) {}

    void insert(string item) {
    	 // Inserts a new node with the given item at the end of the linked list
        Node* newNode = new Node;
        newNode->data = item;
        newNode->next = nullptr;

        if (head == nullptr) {
            head = newNode;
        } else {
            Node* current = head;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    void display() {
    	// Displays the items in the linked list
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << endl;
            current = current->next;
        }
    }

    int getSize() {
    	// Returns the size (number of nodes) in the linked list
        int size = 0;
        Node* current = head;
        while (current != nullptr) {
            size++;
            current = current->next;
        }
        return size;
    }

    string getItemAt(int index) {
    	// Returns the item at the specified index in the linked list
        int size = getSize();
        if (index < 0 || index >= size) {
            return "";
        }

        Node* current = head;
        for (int i = 0; i < index; i++) {
            current = current->next;
        }
        return current->data;
    }
};

void playRockPaperScissors(LinkedList& choices) {
	// Plays the Rock, Paper, Scissors game using the provided choices linked list
	cout<<"You encountered a stranger, He invited you to play game.";
    cout << "Rock, Paper, Scissors Game" << endl;
    cout << "You MUST play the game to continue venture the forest." <<endl;
    cout << "-------------------------------------------------------" << endl;
    
    int playerChoiceIndex;
    while (true) {
    	// Prompt the player for their choice
        cout << "Enter your choice (0: Rock, 1: Paper, 2: Scissors): ";
        cin >> playerChoiceIndex;

        // Get the player's choice and the stranger's choice
        string playerChoice = choices.getItemAt(playerChoiceIndex);
        string computerChoice = choices.getItemAt(rand() % choices.getSize());

        if (playerChoice != "") {
            cout << "Player's choice: " << playerChoice << endl;
            cout << "Stranger's choice: " << computerChoice << endl;

            if (playerChoice == computerChoice) {
                cout << "It's a tie!" << endl;
            } else if (
                (playerChoice == "Rock" && computerChoice == "Scissors") ||
                (playerChoice == "Paper" && computerChoice == "Rock") ||
                (playerChoice == "Scissors" && computerChoice == "Paper")
            ) {
                cout << "Player wins!" << endl;
            } else {
                cout << "Stranger wins!" << endl;
            }
            break; // Exit the loop
        } else {
            cout << "Invalid choice. Please try again." << endl;
        }
    }
}
#endif
