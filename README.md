# HackatonG53
hackaton G53

## Description of your game.
This code appears to be a text-based game in which the player explores a forest, battles enemies, manages their inventory, and makes decisions to survive and progress in the game. Here is a breakdown of the code:

- The code includes various header files for input/output, string manipulation, file handling, and linked lists.

- The code defines two structs: "Item" and "Node." The "Item" struct represents an item in the game, such as a weapon or a potion, and contains attributes like name, description, and attack power. The "Node" struct is used to create a linked list and contains an "Item" object, a pointer to the next node, and a string data attribute.

- The code defines a class "Money" that represents the player's money in the game. It includes methods to add money, subtract money, get the current amount of money, and display the money amount.

- The code defines a class "Game" that represents the game itself. It includes attributes such as player health, enemy health, level, money, and weapon levels. It also includes methods for setting the money, setting weapon levels, upgrading weapons, displaying money, adding money, saving the game to a file, and loading the game from a file.

- The code defines a class "LinkedList" that represents a linked list data structure. It includes methods for inserting nodes, displaying the list, getting the size of the list, and retrieving an item at a specific index.

- The code defines functions to play a rock-paper-scissors game, attack an enemy, and start the game. These functions make use of the classes and data structures defined above.

- The code creates instances of the "Inventory" and "Game" classes and initializes them with items, player health, enemy health, etc.

- The main function contains a game loop that displays a menu of options for the player to choose from. The player can choose to view the storyline of the game, explore the forest, check the inventory, use an item from the inventory, upgrade weapons, attack enemies, save the game, load the game, or quit the game.

- Depending on the player's choice, different functions and methods are called to perform the corresponding actions in the game.

Overall, this code provides the basic framework for a text-based adventure game where the player can explore a forest, engage in battles, manage inventory, and progress through levels.

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

3. Exploring the Forest: If you choose the "Explore the Forest" option, the game may generate a random encounter. This encounter could be with an enemy or a stranger for a game of Rock, Paper, Scissors.

4. Rock, Paper, Scissors: If you encounter a stranger, you can choose to play a game of Rock, Paper, Scissors. Select your choice (rock, paper, or scissors), and the game will determine the winner based on the rules of the game. The outcome may result in a reward or a loss.

5. Attack Enemies: If you encounter an enemy, you can choose to attack using one of the weapons in your inventory. Select the weapon you want to use, and the game will calculate the damage dealt to the enemy based on the weapon's attack power. The enemy will also counterattack, and your health will decrease accordingly.

6. Upgrading Weapons: You can choose the "Upgrade Weapons" option from the main menu to improve the attack power of your weapons. This may require spending money that you have earned in the game.

7. Checking Inventory: You can select the "Check Inventory" option to view the items in your inventory. This includes weapons, healing potions, or any other items you have obtained during your exploration.

8. Saving and Loading the Game: You can choose the "Save Game" option to save your progress. This will store the game data, including your health, enemy health, level, money, and weapon levels, in a text file. Later, you can choose the "Load Game" option to resume your saved game.

9. Quitting the Game: If you decide to exit the game, you can choose the "Quit" option from the main menu.

During the gameplay, the game will provide feedback and information through the console. You will see prompts asking you to make choices, messages indicating the outcome of your actions, updates on your health and enemy health, and notifications about items obtained or money spent.

The user experience of this code game is primarily text-based, relying on the console for interaction. The gameplay revolves around making choices, battling enemies, managing inventory, and upgrading weapons. It's a simple game that focuses on turn-based encounters and resource management. The lack of graphical elements and sound effects keeps the gameplay minimalistic, allowing you to focus on the decisions and outcomes within the game.

## How object-oriented concepts were used to develop your game. 
The given C++ code demonstrates the development of a game using object-oriented concepts. Let's analyze how these concepts were used in the code:

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
In the given C++ code for the game, linked lists are used to implement two key functionalities: inventory management and choices for the Rock, Paper, Scissors game. Let's explore how linked lists, stacks, and queues play a role in this game.

Inventory Management:

The LinkedList class is used to manage the player's inventory. Each item in the inventory is stored as a node in the linked list.
The Inventory class utilizes the LinkedList class to add items (addItem), remove items (removeItem), display the inventory (displayInventory), search for items (searchItem), and sort the inventory (sortInventory).
By using a linked list, items can be easily added or removed from the inventory, and the inventory can be displayed and sorted efficiently.

Choices for Rock, Paper, Scissors:

The LinkedList class is used to manage the choices available for the Rock, Paper, Scissors game. Each choice (Rock, Paper, Scissors) is stored as a node in the linked list.
The playRockPaperScissors function retrieves choices from the linked list by index and compares the player's choice with the computer's choice.
Using a linked list allows for flexible management of choices, making it easy to add or remove options for the game

## Screenshots of your game. 
## A link to your game demo video. 
## Your codes (only.hand.cppfiles).Do NOT upload project files from yourIDE.Anyone should be able to compile your code using otherIDEs,GCCorG++.  
