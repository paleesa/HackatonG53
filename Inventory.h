#ifndef INVENTORY_H
#define INVENTORY_H

#include "Node.h"
#include <iostream>
#include <string>

class Inventory {
private:
    Node* head;

public:
    Inventory() : head(nullptr) {}

    void addItem(Item item) {
    	// Create a new node to hold the item
        Node* newNode = new Node;
        newNode->item = item;
        newNode->next = nullptr;

        if (head == nullptr) {
        	// If the inventory is empty, make the new node the head
            head = newNode;
        } else {
        	 // Traverse to the end of the inventory and add the new node
            Node* current = head;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    void removeItem(Item item) {
    	// Traverse the inventory to find the item
        Node* current = head;
        Node* previous = nullptr;
        while (current != nullptr) {
            if (current->item.name == item.name) {
                if (previous != nullptr) {
                	 // Remove the node from the inventory
                    previous->next = current->next;
                } else {
                	// If the node is the head, update the head
                    head = current->next;
                }
                delete current; // Free the memory
                return;
            }
            previous = current;
            current = current->next;
        }
    }

    void displayInventory() {
    	// Traverse the inventory and display each item
        Node* current = head;
        while (current != nullptr) {
            cout << "Name: " << current->item.name << ", " << current->item.description << endl;
            current = current->next;
        }
    }

    bool searchItem(string itemName) {
    	 // Traverse the inventory to find the item by name
        Node* current = head;
        while (current != nullptr) {
            if (current->item.name == itemName) {
                return true;
            }
            current = current->next;
        }
        return false;
    }

    void sortInventory() {
    	// Sort the inventory based on item names (using bubble sort algorithm)
        Node* current = head;
        int inventorySize = 0;
        while (current != nullptr) {
            inventorySize++;
            current = current->next;
        }

        for (int i = 0; i < inventorySize - 1; i++) {
            current = head;
            for (int j = 0; j < inventorySize - i - 1; j++) {
                if (current->item.name > current->next->item.name) {
                	 // Swap items if they are out of order
                    swap(current->item, current->next->item);
                }
                current = current->next;
            }
        }
        
    }
    Node* getHead() const {
        return head;}
    
};

void attackEnemy(int& playerHealth, int& enemyHealth, int attackPower) {
	// Function to simulate a battle between the player and an enemy
	system("cls"); // Clear the console screen
    while (true) {
    	
    	  // Generate random attack values for player and enemy
        int playerAttack = rand() % attackPower + 1;
        int enemyAttack = rand() % 10 + 1;
	
	    // Update health points based on attacks
        enemyHealth -= playerAttack;
        playerHealth -= enemyAttack;

         // Display attack results
        cout << "You attacked the enemy for " << playerAttack << " damage." << endl;
        cout << "The enemy attacked you for " << enemyAttack << " damage." << endl;

        // Check if the battle has ended
        if (playerHealth <= 0) {
            cout << "\nYou have been defeated. Game over!" << endl;
            
            break;
        } else if (enemyHealth <= 0) {
            cout << "\nYou have slain the enemy!" << endl;
            break;
        }
    }
}
void startGame() {
   // Function to display the game introduction and storyline
    cout << "Welcome to \"Survivor: Venture Forest\"!" << endl << endl;
    cout << "In this thrilling game, you find yourself deep in the heart of the Venture Forest, " << endl;
	cout << "a mysterious and dangerous place filled with treacherous creatures and hidden treasures." << endl;
	cout << "Your ultimate goal is to survive and navigate through the forest, battling formidable enemies " <<endl;
	cout << "along the way.During your forest exploration, there's a chance of finding a valuable Healing Potion" <<endl;
	cout << "that can aid in your survival, but remain vigilant as you may also encounter formidable enemies." << endl ;
	cout << "You also may encounter a stranger that halt you from keep exploring the forest.Just play with him."<< endl;
	cout << "He is kind-hearted person who loved to play Rock-Paper-Scissor.You will earn reward just to make him happy."<<endl<<endl;
    cout << "Armed with only your wits and a trusty inventory of items, you must strategize and make crucial" <<endl;
	cout <<  "decisions to outsmart your adversaries.Your survival skills will be put to the test  as you" << endl;
	cout << "explore the dense foliage,uncovering valuable resources and encountering powerful enemies that" <<endl;
	cout << "stand in your path." << endl << endl;
    cout << "To attack an enemy, you'll need to choose your weapons wisely.Your inventory contains a variety" <<endl;
	cout <<  "of items, each with its own unique properties and attack power. Analyze your enemy's weaknesses "<<endl;
	cout << "and strengths, and select the most effective weapon from your inventory to engage in combat." << endl ;
    cout << "Engage in combat with the enemy to level up and enhance your skills.When the enemy has been slained," << endl;
	cout << "you will earn amount of money that can be use to upgrade your weapons." <<endl <<endl;
    cout << "However, be cautious! The enemies in Venture Forest are cunning and formidable. They will not " <<endl;
	cout << "hesitate to counter-attack and exploit any weaknesses they detect. Your survival depends "<<endl;
	cout << "on your ability to anticipate their moves, plan your attacks, and make split-second decisions." << endl << endl;
    cout << "As you progress through the forest, your skills will improve,and you may uncover hidden" <<endl;
	cout << "treasures that grant you additional powers or enhance your arsenal.Stay vigilant and keep exploring "<<endl;
	cout << "to increase your chances of survival and overcome the ever-growing challenges that lie ahead." << endl << endl;
    cout << "Remember, in the Venture Forest, only the strongest and most cunning will emerge as the ultimate survivor." <<endl;
	cout << "Are you ready to embark on this perilous journey and prove your worth? The forest awaits your arrival. "<<endl;
	cout << "Good luck, adventurer!" << endl;
}
void displayMenu() // Function to display the main game menu options
{
	    cout << "What do you want to do?" << endl;
        cout << "1. Storyline of the game" << endl;
        cout << "2. Explore the forest." << endl;
        cout << "3. Check your inventory." << endl;
        cout << "4. Use an item from your inventory." << endl;
        cout << "5. Upgrade Weapon." << endl;
        cout << "6. Attack the enemy." << endl;
        cout << "7. Save the game." << endl;
        cout << "8. Load Game." << endl;
        cout << "9. Quit the game." << endl;
}


void displaySubMenu()  // Function to display the sub-menu options
{
	cout << "1. Back" << endl;
}



#endif
