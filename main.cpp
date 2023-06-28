#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>
#include "Item.h"
#include "Node.h"
#include "Money.h"
#include "Game.h"
#include "LinkedList.h"
#include "Inventory.h"

using namespace std;
int main(){

    // Game title and player name  
	string gameTitle = "SURVIVOR: VENTURE FOREST";
	string playerName;

    // Front page design
    cout << "\t\t\t======================================" << endl;
    cout << "\t\t\t\033[1m       " << gameTitle << "\033[0m" << endl;
    cout << "\t\t\t======================================" << endl;
    cout << endl;
    cout << "\nWelcome to " << gameTitle << "!" << endl;
    cout << "Enter player's name : ";
    getline (cin,playerName);
    cout << "\nPress Enter to start..." << endl;

    // Wait for user input to start the game
    cin.get();

    // Clear the console screen
    system("cls");
    cout << "Welcome, " <<playerName << ".";


    // Create inventory and game objects
    Inventory inventory;
    Game game;
    
    // Set initial game values
    game.setMoney(500);
	game.setWeaponLevel("sword",1);
	game.setWeaponLevel("bow",1);
	game.setWeaponLevel("axe",1);
	
	// Create choices linked list for Rock, Paper, Scissors game
	LinkedList choices;
    choices.insert("Rock");
    choices.insert("Paper");
    choices.insert("Scissors");

    // Create items for the inventory
    Item sword = { "Sword", "A sharp weapon for melee combat", 10 };
    Item potion = { "Healing Potion", "Restores health when consumed", 0 };
    Item bow = { "Bow", "A ranged weapon for attacking enemies", 8 };
    Item axe = { "Axe", "A heavy weapon for powerful strikes", 12 };

    // Add items to the inventory
    inventory.addItem(sword);
    inventory.addItem(bow);
    inventory.addItem(axe);
    inventory.addItem(potion);
    inventory.addItem(potion);
    inventory.addItem(potion);

     // Set initial player and enemy health, and game level
    int playerHealth = 200;
    int enemyHealth = 50;
    int level = 1;
    
    bool exitMenu = false;


    while (!exitMenu) {
        cout << endl;
        displayMenu();
 
        int choice;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        	case 1: {
            	system("cls");
            	startGame();
				break;
			}
             case 2: {
       			 system("cls");
       			 cout << "You're venturing deeper into the mystic depths of the enchanting forest." << endl;
       			 cout << "The air grows thick with an enigmatic aura, whispering secrets that stir both trepidation and curiosity within you." << endl;


        // Simulating an item pickup event
       			 int pickupChoice;
        		 cout << "\nYou found something mystery. Do you want to interact with it? (1 = Yes, 2 = No): ";
        		 cin >> pickupChoice;

       			 if (pickupChoice == 1) {
          			  int random = rand() % 10; // Randomly generate 0 to 10

           			  if (random >= 0 && random <=1){
           			 	 cout << "OH NOO!!, Its an ENEMY and no place to run." << endl;
           			 	 cout << "You must defeat it!." << endl;
           			 	 int enemyHealth = 50; // Example: Enemy's initial health
    					 int enemyAttackPower = 10; // Example: Enemy's attack power
   						 cout << "\nLevel: " << level << endl;
                		 cout << "Player Health: " << playerHealth << endl;
                		 cout << "Enemy Health: " << enemyHealth << endl;

                		 cout << "\nSelect an item from your inventory to attack the enemy: " << endl;
                		 cout << "You cannot use Healing Potion to attack the enemy\n" << endl;
                		                 
                		 inventory.displayInventory();

                		 string attackItem;
                		 cin.ignore();
                		 getline(cin, attackItem);

                		 if (inventory.searchItem(attackItem)) {
                   		 Item itemToUse;
                  	     Node* current = inventory.getHead();
                   		 while (current != nullptr) {
                      		  if (current->item.name == attackItem) {
                          		  itemToUse = current->item;
                           		  break;
                        		}
                       	 current = current->next;
                   		 }
                   		 
                   		 int highestLevel;

                       // Call the attackEnemy function to simulate the battle
                    	attackEnemy(playerHealth, enemyHealth, itemToUse.attackPower);

                    	if (playerHealth > 0 && enemyHealth <= 0) {
                    	 
                         cout << "\nYou have defeated the enemy!" << endl;
                         cout << "Level: " << level << endl;
                		 cout << "Player Health: " << playerHealth << endl;
                		 cout << "Enemy Health: " << enemyHealth << endl;
                    	}
                		} else {
                    		cout << "Item not found in your inventory." << endl;
                		}
						}
					else if (random >=2 && random <=5) {
						// Simulating finding a healing potion
              		     Item healingPotion;
              		     healingPotion.name = "Healing Potion";
              	 	     healingPotion.description = "Restores health when consumed";
               		     healingPotion.attackPower = 0; // Healing potions have no attack power

                	     inventory.addItem(healingPotion);
               		     cout << "You found a Healing Potion. It has been added to your inventory." << endl;
           			 } 
           			 else if(random >=6 && random <=9){
           			 	// Simulating playing Rock-Paper-Scissors with a stranger
           			 	playRockPaperScissors(choices);
           			 	cout<<"\nYou make the stranger happy by playing with him."<<endl;
           			 	cout<<"He gives you one pouch bag of money, then disappear.."<<endl<<endl;
           			 	cout<<"You earned $50"<<endl;
           			 	game.addMoney();
						}
					 	else {
                	 		cout << "It just an illusion, No luck at all." << endl;
           			 	}	
       			 }
       			 

       			 break;
    		}
            case 3: {
            	system("cls");
                cout << "Inventory:" << endl;
                inventory.displayInventory();
                break;
            }
            case 4: {
    			system("cls");
    			cout << "Enter the name of the item you want to use: ";
    			string itemName;
    			cin.ignore();
   				 getline(cin, itemName);

    			if (inventory.searchItem(itemName)) {
        		// Perform action based on the item used
        			if (itemName == "Sword" ) {
        		        cout << "You sharpen the " << itemName << "." << endl;
       		            cout << "As you sharpen your "<< itemName << ", a sense of determination fills the air, preparing you for the battles that lie ahead." << endl;}
       		            
                	else if (itemName == "Axe" ) {
        		        cout << "You sharpen the " << itemName << "." << endl;
       		            cout << "As you sharpen your "<< itemName << ", a sense of determination fills the air, preparing you for the battles that lie ahead." << endl;}
       		            
	                else if (itemName == "Bow" ) {
        		        cout << "You upgrade the "<<itemName <<" by sharpening the arrows, enhancing their piercing capabilities to increase the chances of a successful attack." << endl;}
       		            
        		// Additional logic here
        		
        			else if (itemName == "Healing Potion") {
            			playerHealth += 50; // Example: Restoring 50 health points
            			cout << "You have been healed for 50 health points." << endl;
            			cout << "Level: " << level << endl;
                		cout << "Player Health: " << playerHealth << endl;
            			inventory.removeItem(Item{ itemName, "", 0 }); // Remove the healing potion from the inventory
        			}
    			} else {
        			cout << "Item not found in your inventory." << endl;
    				}
    			break;
				}
				
			case 5: {
				system("cls");
            	game.displayMoney();
            	cout<<"Choose a weapon you want to upgrade."<<endl;
            	
            	
    			string itemName;
    			cin.ignore();
   				getline(cin, itemName);
   				
   				if (inventory.searchItem(itemName)){
   					game.upgradeWeapon(itemName);
   					
   					 // Increase the attack power of the weapon by 5 (you can adjust the value as per your requirements)
   					Node* current = inventory.getHead();
                         while (current != nullptr) {
                         if (current->item.name == itemName) {
                         current->item.attackPower += 5; // Increase the attack power by 5 (you can adjust the value as per your requirements)
                         break;
                         }
                         current = current->next;
                         }
                         }
                         break;
				   }
				
				
			

            case 6: {
            	system("cls");
                cout << "You encounter an enemy!" << endl;
                cout << "Level: " << level << endl;
                cout << "Player Health: " << playerHealth << endl;
                cout << "Enemy Health: " << enemyHealth << endl;

                cout << "\nSelect an item from your inventory to attack the enemy: " << endl;
                cout << "You cannot use Healing Potion to attack the enemy\n" << endl;
                inventory.displayInventory();

                string attackItem;
                cin.ignore();
                getline(cin, attackItem);

                if (inventory.searchItem(attackItem)) {
                    Item itemToUse;
                    Node* current = inventory.getHead();
                    while (current != nullptr) {
                        if (current->item.name == attackItem) {
                            itemToUse = current->item;
                            break;
                        }
                        current = current->next;
                    }
                    
                    int highestLevel;

                    // Attack the enemy using the selected item's attack power
                    attackEnemy(playerHealth, enemyHealth, itemToUse.attackPower);

                    if (playerHealth > 0 && enemyHealth <= 0) {
                    	 
                         cout << "You have defeated the enemy!" << endl;
                         cout << "\nYou proceed to the next level." << endl;
                         cout << "You earned $50" << endl;
                         level++;
                         cout << "Level: " << level << endl;
                		 cout << "Player Health: " << playerHealth << endl;
                		 cout << "Enemy Health: " << enemyHealth << endl;
                         enemyHealth =level*50; // Increase enemy health for the next level
                         game.addMoney();
                    }
                } else {
                    cout << "Item not found in your inventory." << endl;
                }
                break;
            }
            case 7: {
            	// Clears the console screen, displays a message indicating that the game is being saved,
                // and calls the saveGame function of the game object to save the game's current state.

            		system("cls");
                    cout << "Saving the game..." << endl;
                    game.saveGame();
                    break;
                }
            case 8: {
            		system("cls"); // Clears the console screen,
            		// and calls the loadGame function of the game object to load the saved game state.
                    // After loading the game, it displays the current level, player health, and enemy health.
                    cout << "Loading the game..." << endl;
                    game.loadGame();
                    cout << "\nLevel: " << level << endl;
                	cout << "Player Health: " << playerHealth << endl;
                	cout << "Enemy Health: " << enemyHealth << endl;
                    break;
                }   
            case 9: {
            	system("cls");
            	cout << "The highest level you archieved is Level "<< level << endl;
                cout << "Thank you for playing! Goodbye!" << endl;
                return 0;
            }

            default: {
            	system("cls");
                cout << "Invalid choice. Please try again." << endl;
                break;
            }
        }
        cout << endl;

        if (choice != 8 && !exitMenu) {
            int subChoice;
            bool backToMain = false;

            while (!backToMain) {
                displaySubMenu();
                cin >> subChoice;

                switch (subChoice) {
                    case 1:
                    	system("cls");
                        cout << "Going back to the Main Menu." << endl;
                        backToMain = true;
                        break;

                    default:
                        cout << "Invalid choice. Please try again." << endl;
                        break;
                }

                cout << endl;
            }
        }
    }

    return 0;
}
