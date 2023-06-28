#ifndef GAME_H
#define GAME_H

#include "Money.h"
#include "LinkedList.h"
#include "Inventory.h"
#include "Node.h"
#include "item.h"
#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

class Game  {
private:
    int playerHealth; // Health of the player
    int enemyHealth; // Health of the enemy
    int level; // Current level of the game
    Money money; // Player's money
    int swordLevel; // Level of the sword weapon
    int bowLevel; // Level of the bow weapon
    int axeLevel; // Level of the axe weapon

public:
	
	Game() : money(0), swordLevel(0), bowLevel(0), axeLevel(0) {}

    void setMoney(int newMoney) {
        money = newMoney;
    }

    void setWeaponLevel(const string &itemName,int newWeaponLevel) {
    	// Sets the level of the specified weapon
        if (itemName == "sword") {
            swordLevel = newWeaponLevel;
        } else if (itemName == "bow") {
            bowLevel = newWeaponLevel;
        } else if (itemName == "axe") {
            axeLevel = newWeaponLevel;
        }
    }
	
	void upgradeWeapon(const string& itemName){
		// Upgrades the specified weapon if player has enough money
        int* weaponLevel;
        if (itemName == "Sword") {
            weaponLevel = &swordLevel;
        } else if (itemName == "Bow") {
            weaponLevel = &bowLevel;
        } else if (itemName == "Axe") {
            weaponLevel = &axeLevel;
        } else {
            cout << "Invalid weapon name." << endl;
            return;
        }

        int upgradeCost = *weaponLevel * 100; // Cost increases with each level
        if (money.getAmount() >= upgradeCost) {
            (*weaponLevel)++;
            money.subtractMoney(upgradeCost);
            cout << "Weapon '" << itemName << "' upgraded to level " << *weaponLevel << " successfully." << endl;
            cout << "The " << itemName << "'s attack power increased." <<endl;
            
        } else {
            cout << "Insufficient funds to upgrade weapon." << endl;
        }
	}
	
	void displayMoney() const {
		// Displays the current amount of money the player has
        money.displayMoney();
    }
    
    void addMoney(){
    	// Adds a fixed amount of money to the player's total
    	money.addMoney(50);
	}
	
    void saveGame() {
    	// Saves the current game progress to a file
        fstream file;
        file.open("savegame.txt",ios::in|ios::out|ios::trunc);
        if (!file.is_open()){
        	cout<<"Error while saving the game."<<endl;
		}else{
			file << playerHealth << endl;
            file << enemyHealth << endl;
            file << level << endl;
            file << money.getAmount() << endl;
            file << swordLevel << endl;
            file << bowLevel << endl;
            file << axeLevel << endl;
            file.close();
            cout << "Game saved successfully." << endl;
		}
            
    }

    void loadGame() {
    	  // Loads a saved game from a file
        ifstream file;
        file.open("savegame.txt");
        if(!file.is_open()){
        	cout<<"Fail to load the game.";
		}else{
			string line;
			while(file.good()){
				getline(file,line);
				file >> playerHealth;
            	file >> enemyHealth;
            	file >> level;
            	int moneyAmount;
                file >> moneyAmount;
                money = Money(moneyAmount);
                file >> swordLevel;
                file >> bowLevel;
                file >> axeLevel;
            	file.close();
            	cout << "Game loaded successfully." << endl;
			}
		}
       
    }


};
#endif
