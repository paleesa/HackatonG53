# HackatonG53
hackaton G53

## Game Description.
Title: Survivor: Venture Forest

Description:
Survivor: Venture Forest is an immersive single-player game that takes players on an exciting journey through a dense forest in search of hidden treasures. The game provides an endless and challenging experience where players can test their survival skills and explore the depths of the forest.

As a brave adventurer, players navigate through the forest, aiming to discover valuable treasures, primarily money, which can be used to upgrade their weapons and obtain healing potions. The forest is filled with unknown dangers and surprises, and players must be cautious as they progress deeper into the wilderness.

Throughout the game, players will encounter various enemies lurking within the forest. Engaging in thrilling battles is necessary to proceed to the next level. Players must strategically utilize their weapons and items, including the healing potions, to overcome these adversaries and survive the encounters. Every decision counts, and players must carefully manage their inventory, deciding when to use their equipment and weapons effectively to maximize their chances of success.

This game does not have a definitive endpoint or a winner. The primary objective is to explore the forest as far as possible, continually pushing your limits. The game keeps track of the highest level reached by the player before being ultimately defeated by the enemies. Players can challenge themselves to beat their own records and strive to reach higher levels with each playthrough.

Get ready to embark on a thrilling adventure, facing unpredictable dangers, battling enemies, and making crucial decisions to survive and progress in the never-ending forest. Are you up for the challenge?

This code provides the basic framework for a text-based adventure game where the player can explore a forest, engage in battles, manage inventory, and progress through levels.

## Features of your game. 
The code game provided has the following features:

1. Game Initialization: The code initializes the game by setting up the necessary variables, such as player health, enemy health, level, and the player's inventory.

2. Money System: The code includes a Money class that allows the player to add or subtract money from their current amount. The player's money is used for various purposes, such as upgrading weapons.

3. Weapon Upgrades: The player can upgrade their weapons (sword, bow, and axe) by spending money. Each weapon has a level that determines its attack power. The higher the level, the stronger the weapon.

4. Save and Load Game: The code includes functions to save and load the game progress. The game data, including player health, enemy health, level, money, and weapon levels, is stored in a text file.

5. Rock, Paper, Scissors Game: The player can engage in a Rock, Paper, Scissors game with a stranger they encounter. The player selects their choice, and the game determines the winner based on the rules of the game.

6. Inventory Management: The code includes an Inventory class that allows the player to add and remove items from their inventory. The inventory is used to store items such as weapons and healing potions. The player can also check their inventory and use items from it.

7. Attack Enemy: The player can attack the enemy by choosing a weapon from their inventory. The attack power of the selected weapon is used to damage the enemy. The enemy also counterattacks, and the player's and enemy's health are updated accordingly. The battle continues until either the player or the enemy is defeated.

8. Sorting Inventory: The code includes a function to sort the player's inventory alphabetically based on the item names.

9. User Interface: The code provides a simple text-based user interface where the player can select options from a menu. The menu allows the player to perform various actions in the game, such as exploring the forest, checking inventory, upgrading weapons, attacking enemies, saving the game, loading the game, and quitting the game.

These are the main features of the code game. However, it's worth noting that the code provided is incomplete and lacks the implementation of certain functionalities and game mechanics.

## How to play your game.
To play the code game, you would typically follow these steps:

1. Launch the Game: Compile and run the C++ code in an appropriate development environment or compiler that supports C++. Once the game starts, you will see a text-based user interface.

2. Main Menu: The game will present you with a main menu that lists various options. These options may include exploring the forest, checking inventory, upgrading weapons, attacking enemies, saving the game, loading the game, and quitting the game.

3. Storyline of game: The player can read all the storyline of game . You can read and explore the rich narrative that unfolds as they progress through the game. 

4. Exploring the Forest: If you choose the "Explore the Forest" option, the game may generate a random encounter. This encounter could be with an enemy or a stranger for a game of Rock, Paper, Scissors.The player may also found a Healing Potion that can be use in need.

5. Rock, Paper, Scissors: If you encounter a stranger, you can choose to play a game of Rock, Paper, Scissors. Select your choice (rock, paper, or scissors), and the game will determine the winner based on the rules of the game. But, either lose,tie or win ,the player will earn some reward from the stranger for being willing to play with him.

6. Attack Enemies: If you encounter an enemy, you can choose to attack using one of the weapons in your inventory. Select the weapon you want to use, and the game will calculate the damage dealt to the enemy based on the weapon's attack power. The enemy will also counterattack, and your health will decrease accordingly.

7. Upgrading Weapons: You can choose the "Upgrade Weapons" option from the main menu to improve the attack power of your weapons. This may require spending money that you have earned in the game.

8. Checking Inventory: You can select the "Check Inventory" option to view the items in your inventory. This includes weapons, healing potions, or any other items you have obtained during your exploration.

9. Use Item In The Inventory: You can choose "Use Item In Iventory" option to use the items in inventory. An example ,you can use Healing Potion in the inventory to heal player's health by 50. After used, the number of healing potion will decrease by 1.

10. Saving and Loading the Game: You can choose the "Save Game" option to save your progress. This will store the game data, including your health, enemy health, level, money, and weapon levels, in a text file. Later, you can choose the "Load Game" option to resume your saved game.

11. Quitting the Game: If you decide to exit the game, you can choose the "Quit" option from the main menu.

During the gameplay, the game will provide feedback and information through the console. You will see prompts asking you to make choices, messages indicating the outcome of your actions, updates on your health and enemy health, and notifications about items obtained or money spent.

The user experience of this coding game is primarily text-based, relying on the console for interaction. The gameplay revolves around making choices, battling enemies, managing inventory, and upgrading weapons. It's a simple game that focuses on turn-based encounters and resource management. The lack of graphical elements and sound effects keeps the gameplay minimalistic, allowing you to focus on the decisions and outcomes within the game.

## How object-oriented concepts were used to develop your game. 
We will explain further about developing a game using object-oriented concepts.

1. Structs:
   - The code defines two structs, `Item` and `Node`. These are used to represent items and nodes in the game.
   - `Item` struct holds information about an item, such as its name, description, and attack power.
   - `Node` struct is used to create a linked list of items or data nodes.

2. Classes:
   - The code includes several classes, such as `Money`, `Game`, `LinkedList`, and `Inventory`.
   - `Money` class represents the amount of money in the game and provides methods to add and subtract money.
   - `Game` class represents the game state and provides methods related to the game, such as setting money, setting weapon levels, upgrading weapons, saving and loading the game, etc.
   - `LinkedList` class implements a linked list data structure and provides methods to insert, display, and retrieve items.
   - `Inventory` class represents the player's inventory and provides methods to add, remove, display, and search items in the inventory.

3. Encapsulation:
   - The classes `Money` and `Game` encapsulate their data and behavior by using private member variables and public methods to interact with the data. This ensures data integrity and provides controlled access to the variables.
   - Similarly, other classes like `LinkedList` and `Inventory` also encapsulate their data and provide methods to interact with the data.

4. Object Instantiation:
   - Instances of classes are created using the constructor syntax. For example, objects of the `Money`, `Game`, `LinkedList`, and `Inventory` classes are created by calling their constructors with appropriate arguments.

5. Object Composition:
   - The `Game` class contains instances of other classes, such as `Money` and `Inventory`. This composition allows the `Game` class to have access to the functionality provided by these classes.

6. Member Functions and Methods:
   - Each class defines member functions or methods to perform specific actions or provide functionality.
   - For example, the `Game` class has methods like `setMoney`, `setWeaponLevel`, `upgradeWeapon`, `displayMoney`, `addMoney`, `saveGame`, and `loadGame`, which perform various game-related operations.

7. Access Specifiers:
   - The classes use access specifiers (`private` and `public`) to control the accessibility of members.
   - Private members can only be accessed by other members of the same class, while public members can be accessed from outside the class.

8. Pointers:
   - The code utilizes pointers in the `upgradeWeapon` method of the `Game` class to dynamically change the weapon levels based on user input.

9. File Handling:
   - The `Game` class includes methods `saveGame` and `loadGame` to save and load the game state from a file.
   - File handling operations, such as opening a file, writing data, and reading data, are performed using `fstream` and `ifstream` classes.

Overall, the code demonstrates the use of object-oriented concepts such as structs, classes, encapsulation, composition, and member functions to develop a game in C++. These concepts help organize the code, promote code reuse, and provide a modular and extensible structure to the game implementation.

## How linked lists/stacks/queues play a role in your game. 
In the given C++ code for the game, linked lists are used to implement two key functionalities: inventory management and choices for the Rock, Paper, Scissors game. Here the explanation on how linked lists, stacks, and queues play a role in this game.

Inventory Management:

The LinkedList class is used to manage the player's inventory. Each item in the inventory is stored as a node in the linked list.
The Inventory class utilizes the LinkedList class to add items (addItem), remove items (removeItem), display the inventory (displayInventory), search for items (searchItem), and sort the inventory (sortInventory).
By using a linked list, items can be easily added or removed from the inventory, and the inventory can be displayed and sorted efficiently.

Choices for Rock, Paper, Scissors:

The LinkedList class is used to manage the choices available for the Rock, Paper, Scissors game. Each choice (Rock, Paper, Scissors) is stored as a node in the linked list.
The playRockPaperScissors function retrieves choices from the linked list by index and compares the player's choice with the strangerr's choice.
Using a linked list allows for flexible management of choices, making it easy to add or remove options for the game

## Screenshots of your game. 
![image](https://github.com/paleesa/HackatonG53/assets/121544148/6ad8ffb6-fde7-4b96-90fb-02fdf41ce6b3)
![image](https://github.com/paleesa/HackatonG53/assets/121544148/c7534921-095a-4105-a4df-1da6eab52458)
![image](https://github.com/paleesa/HackatonG53/assets/121544148/ee4086d3-bde7-4ad5-bb87-a4ede0f3e2a4)
![image](https://github.com/paleesa/HackatonG53/assets/121544148/4ffaeebc-ef59-49f6-b886-953e4318b5d3)
![image](https://github.com/paleesa/HackatonG53/assets/121544148/3bf4b80a-ecd5-4e59-b085-a6249ce7c345)
![image](https://github.com/paleesa/HackatonG53/assets/121544148/2a993507-5193-4be4-8308-0f7c45bf87e4)
![image](https://github.com/paleesa/HackatonG53/assets/121544148/28e1ba7b-bfdf-41c6-900c-6351e87e1e60)
![image](https://github.com/paleesa/HackatonG53/assets/121544148/3ed8739d-b34b-40e6-b1f0-293eb5793bc5)
![image](https://github.com/paleesa/HackatonG53/assets/121544148/9e1f8cc1-d1dd-4330-bca0-581689fe4c03)
![image](https://github.com/paleesa/HackatonG53/assets/121544148/627e4ea1-6e76-4568-ae70-a8c93d5a26b7)
![image](https://github.com/paleesa/HackatonG53/assets/121544148/f1e6168a-32f4-4168-b98d-30cb5e187802)
![image](https://github.com/paleesa/HackatonG53/assets/121544148/962ddd54-e499-4d73-b533-4754837f8f31)
![image](https://github.com/paleesa/HackatonG53/assets/121544148/c36cde85-6f88-4636-a0de-2916ed3ba39a)
![image](https://github.com/paleesa/HackatonG53/assets/121544148/bd234c5d-61a0-4bad-ba62-3726f98e0973)

## Incomplete Feature
1. The program does not display the price of upgrade weapons.
2. The probability in Venture Forest is not stable. The probability to found enemy, healing potion and stranger is not balance.
3. The game does not display the level and power of weapons.
4. Even when we die, there is an option to continue the game.
5. The save and load game feature is only available within the same run.

## A link to your game demo video.
Here we provide the link of our game.
https://youtu.be/X3cBAhdzZHU
 
