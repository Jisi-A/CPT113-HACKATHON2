# CPT113-HACKATHON2
### Group 32

Documentation Requirements
# 1.	Game Description 

Get ready to dive into a world full of excitement and exhilarating adventure! Introducing our group’s game project: “The Misadventures of Sir Noodlebrain” It’s a fun and hilarious game set in the medieval period of the year 600 AD in the Kingdom of Chickidon. 

As the player, you be assuming the role of our beloved protagonist, Sir Noodlebrain. He is a clumsy and bumbling knight from the Holy Order of the Clucking Crusaders. When one day, he had been tasked with a most unusual quest of high importance – rescuing the kingdom’s most cherished pet chicken, Princess Featherbottom. The villain of the story, a mischievous sorcerer has abducted Princess Featherbottom and demanded an outlandish ransom of 1 million gold coins! 

So, be prepared to embark on the adventure of your lifetime! As you will begin your journey in the quaint village of Quirktown. Armed with only a rusty sword and an oversized helmet, Sir Noodlebrain bravely set off on his dangerous quest filled with mishaps and slapstick humor! 

Please note our game is a multiple-choice game with many interesting endings! You need to choose your choices carefully to unlock the TRUE ENDING. Good luck on your journey and enjoy our game!


# 2.	Features the game
There are numerous functionalities our game provides.

## (a)	Gameplay Mechanics
 ### 1.	Load game
   
The player can load their previously saved game and continue their progress from the day they have stopped. The concept of how the player’s progress is loaded back into the game is by using a linked list. The program will first read back the previously saved information in a save.txt file. Then, the information from the save.txt file will be passed back to the 15-node linked list to be stored. The linked list now contains all the previous information, and the player is all set to continue the game.

 ### 2.	Saving game
   
The player can save their progress each time a day ends. The user will be given the option to save their progress for the day or they can choose not to save it. The concept of how the player’s progress is saved is by using the linked list. There are a total of 15 nodes in our linked list. The list below shows the variables that each of the nodes in the linked list holds.

   •	NODE 1: Player’s Health                 

   •	NODE 2: isTalked_swordsmith;

   •	NODE 3: isTalked_jester;

   •	NODE 4: isTalked_quirky

   •	NODE 5: sorcerer slayer

   •	NODE 6: coins

   •	NODE 7: hidden smith

   •	NODE 8: greatsword

   •	NODE 9: Hidden Jester

   •	NODE 10: shield

   •	NODE 11: Bomb

   •	NODE 12: Anti-Sorcerer Magic Book

   •	NODE 13: HistoryBook

   •	NODE 14: Hidden

   •	NODE 15: Day


Below is the explanation for each of the nodes in the linked list.



o	NODE 1: stores the player’s health.

o	NODE 2: Record if the player has talked to the swordsmith before.

o	NODE 3: Record if the player has talked to the Jester before.

o	NODE 4: Record if the player has talked to the Wizard before.

o	NODE 5: Record if the player has received the sword, sorcerer slayer.

o	NODE 6: Records of the amount the coins the player has earned.

o	NODE 7: Record if the player has unlocked the hidden storyline for Swordsmith

o	NODE 8: Record if the player has received the great sword

o	NODE 9: Record if the player has unlocked the hidden storyline for Jester

o	NODE 10: Record if the player has received the shield

o	NODE 11: Record if the player has received the Witch Hunt Bomb

o	NODE 12: Record if the player has received the Anti-Sorcerer Magic Book

o	NODE 13: Record if the player has received the History Book

o	NODE 14: Record the number of hidden storylines the player has found

o	NODE 15: Record the day the player is on.


So, all this information will be recorded by the linked list when each day has come to an end. The information for each of the nodes in the linked list will be written into a save.txt file. Thus, the player’s progress is saved. 

However, our game has a limitation where the game can only save the newest progress for the day only. The game will not be able to access the previous day's progress as it will be overwritten by the latest progress.  


## (b)	Multiple Menu Pages 

Our game used multiple menu pages to create an interactive and fun gameplay session where the players can make their own choice to find the ending they deserved. The follorwing are a few examples of menus pages in our game

### 1.	Opening Menu page

This is the opening page the player will see upon starting our game. The function of this page is to give multiple options to the user on what they wish to do. There are 3 options the player can take.

•	1st option: Create new game

•	2nd option: Load game

•	3rd option: Quit game


![Opening Menu Page](https://github.com/Jisi-A/CPT113-HACKATHON2/assets/117000781/e429af83-f8e8-4cc9-a47b-76719b8f8f5c)

### 2. Tutorial page

This page will give a brief guideline of the quest in the game. And will introduce to you about the important elements of our game like action points and the time frame within which the player must complete the quest. This page also informs that you will be playing as the main character of our story, Sir Noodlebrain, a knight in the Kingdom of Chickidon. 

The game will prompt if the user wants to see the tutorial menu. If they do not wish to, they can skip if part. The diagram below shows the option to skip the tutorial menu.


![Tutorial page](https://github.com/Jisi-A/CPT113-HACKATHON2/assets/117000781/b7265e52-d7f0-4616-aacb-2127122d7338)


### 3.	Game's Main Menu Page

This page will first display the details of the character like day, character’s name, health, number of coins, and AP the player has for the day. Then, the page will show all the possible choices our players can perform throughout the entire game. This is the main menu page the players will be seeing quite frequently throughout the game. The player has a total of 6 options in the game. 


![Main Menu page](https://github.com/Jisi-A/CPT113-HACKATHON2/assets/117000781/61c9b4e7-ed42-4aaa-9127-75c195f36762)


The first 3 options are to allow the player to explore the different shops and cabins in the game. 
The 4th option is to allow the player to earn goal coins in the game. 
The 5th option is to let the player fight the final villain of the game. 
The last option is to allow the player to skip a day if they prefer not to perform any action.


### 4. The Rusty Swordsmith Menu Page

This page will allow the player to interact with the shopkeeper of the Rusty Swordsmith, Sir Grumblebeard. There are 3 options the player can choose.

•	[1] Give me a rusty sword that can one-shot the evil sorcerer.

•	[2] Why are you selling rusty swords?

•	[3] Back to town

The 1st option allows the player to receive the sword which can slay the evil sorcerer. The 2nd option allows the player to be curious and enquire about the mechanise sold by the swordsmith. 
The 3rd option allows the player to return to town or the main menu page. 


### 5. The Jester’s Joke Emporium Menu Page
This page allows the player to explore the options available at this venue. There are 3 options the user can choose from.

•	[1] Give me something that can one-shot the evil sorcerer.

•	[2] Why you never make a show in the kingdom?

•	[3] Back to town.

The 1st option allows the player to receive a weapon that can defeat the evil sorcerer. The 2nd option allows the player to be curious and enquire about the reason why the Jester doesn’t perform. 
The 3rd option allows the player to return to town or the main menu page.  

### 6.	The Quirky Quill Menu Page
This page will output the possible actions the player can perform on this location. The shop owner of Quirky Quill is Sir Wobblewand, a magician. There are 3 actions in this section.

•	[1] Hand me one that can obliterate a 1000 sorcerer.

•	[2] Uhhh sorry, random question. Why do you look like you were caught in a glitter explosion?

•	[3] Back to town.

In 1st option, the player will receive an item called the anti-sorcerer magic book .
The 2nd option the player can be curious and enquire about the peculiar reason why the Sir Wobblewand is covered in glitter. For the 3rd option, the player can return to the main menu page.

### 7.	Boss Fighting Menu Page 
In this section, the player will have an exciting one-to-one showdown with the great evil sorcerer. The player will be given multiple options to defeat the evil sorcerer. However, there is a catch. Depending on the conditions, and whether the player has fulfilled them, the players will be limited to only a selected number of choices. There are a total of 6 choices if the player succeeds in unlocking all of them.

•	[1] Use Sorcerer Slayer

•	[2] Use Witch -hunt Bomb

•	[3] Use Anti-Sorcerer Magic Book

•	[4] Pay 100000 gold coins

•	[5] Battle!

•	[6] Eat Princess Featherbottom together

The first 3 options are to allow the player to use the weapons to defeat the evil sorcerer. The 4th option is to pay the ransom money of 100000 gold to free Princess Featherbottom, the chicken. The 5th option is to go to battle with the evil sorcerer and defeat him. The 6th option is the default option, where if the player is not able to unlock any of the options, they can only choose this as their last option. 

# 3. How to play the game

# 4. How object-oriented concepts were used to develop your game.

There a number of object-oriented concepts we have implemented in our programming. There are a total of 3 object-oriented concepts we have utilized.

## (a)	Abstraction

Abstraction is an essential object-oriented concept that has been applied in our program. The way that abstraction works is it allows the programmer to focus on simplifying the complex coding by breaking them down into smaller and more manageable components. 

We have succeeded in using abstraction in our program by implementing the usage of classes and objects. A class can be viewed as a template or a rough guideline that defines the behavior of each object. It will basically encapsulate the attribute and the functionality that each object should have. 

Examples of abstraction can be seen in the Class IntList and Class Game we have created in our program. In Class IntList, we defined all the characteristics of our linked list, each individual node, and the functions our linked list can perform. Functions of the linked list like appending a node, displaying a list and deleting a linked list. In Class Game, we define the attributes of the AP variable and other necessary functions of the game like startGame(), loadDay(), talkedJester(), adventure(), and embark(). These are a few examples of the functions define in this class. 

![Abstraction concept](https://github.com/Jisi-A/CPT113-HACKATHON2/assets/117000781/c6166fdf-5e3f-47ec-9313-f1270c71aa0a)

## (b)	Encapsulation

Encapsulation is one of the fundamental concepts of object-oriented programming. This concept allows for data privacy within a specific part of the program and provides a way for the programmer to easily modify the internal state of specific objects.

The main idea of how the concept works is by ensuring when a lot of functions or methods are operating on that same piece of data, the functions are unable to directly manipulate the value. Meaning there is a certain boundary around the data that prevents external functions from directly accessing the data. This is achieved by coding well-defined getter and setter functions, which will allow indirect manipulation of the private variable.

So, we have also implemented the usage of encapsulation within our program. An example of it can be seen in Class IntList. In this class, there are two private members defined, they are struct ListNode and pointer head. Since struct ListNode is a private member, it details are hidden from external functions. This function can only be manipulated and accessed through the member functions of the IntList class. 

![Encapsulation concept](https://github.com/Jisi-A/CPT113-HACKATHON2/assets/117000781/298dc5b8-031f-4a0c-8bb3-16b6fa15f1bf)

## (c)	Inheritance
Another object-oriented concept we have implemented is the inheritance concept. The brief definition of this concept is the derived class will inherit the characteristic and functionality of the parent class. This establishes a hierarchical relationship between the two parent-child classes. 
The derived or child class will inherit all the non-private attributes of the parent class. The inheritance concept is useful as it promotes code usability and reduces the need to type out the same code for another class. 

We have utilized this concept within our program. This can be seen in the class game, where this class has inherited its properties from the parent class, class player. This means that Class game can utilized all the functions that has been defined in the class player. For example, the isEmpty(), displayList(), getHealth(), and the isTalked_swordsmith function.

![Inheritance concept](https://github.com/Jisi-A/CPT113-HACKATHON2/assets/117000781/a03e999f-8fc3-48f3-bb68-c69ec9d3dce4)

# 5. How linked lists/stacks/queues play a role in your game.

