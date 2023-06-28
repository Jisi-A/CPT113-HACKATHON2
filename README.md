# CPT113-HACKATHON2
### Group 32

# Group Members

**LAI YICHENG 163729** <br>
**LEE YING SHEN 163792** <br>
**BERNADETTE LEE PEI CHEN 163517**

# Youtube Demo Video

https://youtu.be/znhad49yS7w

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

### 3. Quit/Exit Game

Players can exit the game at the start of the game and the ending of boss fight. The game will prompt the user whether do they want to exit the game or continue another round.

### 4. Checking input validation

The game has an input validation code that will check whether the player has inputted the right integer into the input section. If the input is invalid, the program will issue an error message displaying that is not a valid input. And then the program will keep on repeating the question until the player keys in the right input.

![Input Validation](https://github.com/Jisi-A/CPT113-HACKATHON2/assets/117000781/e1dc189d-f5aa-4827-b404-c928516983e2)



## (b)	Multiple Menu Pages 

Our game used multiple menu pages to create an interactive and fun gameplay session where the players can make their own choice to find the ending they deserved. The following are a few examples of menus pages in our game

### 1.	Opening Menu page

This is the opening page the player will see upon starting our game. The function of this page is to give multiple options to the user on what they wish to do. There are 3 options the player can take.

•	1st option: Create new game

•	2nd option: Load game

•	3rd option: Quit game

![Opening Menu Page](https://github.com/Jisi-A/CPT113-HACKATHON2/assets/117000781/13ca0257-e8ba-4b11-86b6-df5a938e3c55)

### 2. Tutorial page

This page will give a brief guideline of the quest in the game. And will introduce to you about the important elements of our game like action points and the time frame within which the player must complete the quest. This page also informs that you will be playing as the main character of our story, Sir Noodlebrain, a knight in the Kingdom of Chickidon. 

The game will prompt if the user wants to see the tutorial menu. If they do not wish to, they can skip if part. The diagram below shows the option to skip the tutorial menu.


![Tutorial page](https://github.com/Jisi-A/CPT113-HACKATHON2/assets/117000781/fc085a1d-2e7d-4835-aa7d-21333884e37a)


### 3.	Game's Main Menu Page

This page will first display the details of the character like day, character’s name, health, number of coins, and AP the player has for the day. Then, the page will show all the possible choices our players can perform throughout the entire game. This is the main menu page the players will be seeing quite frequently throughout the game. The player has a total of 6 options in the game. 


![Main Menu page](https://github.com/Jisi-A/CPT113-HACKATHON2/assets/117000781/ad938fb1-9942-4235-be0d-679fd6928f7f)



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

The Misadventures of Sir Noodlebrain is a menu-based program-driven text-based game. In this game, the player is allowed to follow the actions listed in the menu to push the progress of the game. As Sir Noodlebrain, the player needs to talk with different people in the town of Kingdom Chickidon and try to find out the way to save Princess Featherbottom. The player could also go on an adventure and try to collect one million coins to pay the evil sorcerer. Every action is listed in the menu.\\

![Main Menu page](https://github.com/Jisi-A/CPT113-HACKATHON2/assets/117000781/fb7b613d-658b-4925-95e2-92ce1b096e01)

But actions need to cost action point(AP)! Manage the use of AP wisely to avoid the bad end.

![AP](https://github.com/Jisi-A/CPT113-HACKATHON2/assets/116088800/c83dbc9c-6f02-4aba-a2e8-31a66f690929)

Talking to many people will lead the player to a mystery storyline hidden under the kingdom. As the story progresses, a conspiracy buried in the long river of history will slowly emerge. 

![hidden](https://github.com/Jisi-A/CPT113-HACKATHON2/assets/116088800/a7920f44-d4ea-44c7-8e0e-1d91184ebf7a)

The flow of the story is in your hand. Do not scare to make mistakes in the game, the player is allowed and encouraged to play the game several times. Try to explore as many endings as you could!

![repeat](https://github.com/Jisi-A/CPT113-HACKATHON2/assets/116088800/d7013134-95f0-45d3-b4c0-ed672d459d54)

### Game Guide

The game guide is provided in the last part of this file to prevent spoiler.

# 4. How object-oriented concepts were used to develop your game.

There are a number of object-oriented concepts we have implemented in our programming. There are a total of 3 object-oriented concepts we have utilized.

## (a)	Abstraction

Abstraction is an essential object-oriented concept that has been applied in our program. The way that abstraction works is it allows the programmer to focus on simplifying the complex coding by breaking them down into smaller and more manageable components. 

We have succeeded in using abstraction in our program by implementing the usage of classes and objects. A class can be viewed as a template or a rough guideline that defines the behavior of each object. It will basically encapsulate the attribute and the functionality that each object should have. 

Examples of abstraction can be seen in the Class IntList and Class Game we have created in our program. In Class IntList, we defined all the characteristics of our linked list, each individual node, and the functions our linked list can perform. Functions of the linked list like appending a node, displaying a list and deleting a linked list. In Class Game, we define the attributes of the AP variable and other necessary functions of the game like startGame(), loadDay(), talkedJester(), adventure(), and embark(). These are a few examples of the functions define in this class. 

![Abstraction concept](https://github.com/Jisi-A/CPT113-HACKATHON2/assets/117000781/00fc01aa-cb6f-4db2-86f7-9c2e4068bd6f)

## (b)	Encapsulation

Encapsulation is one of the fundamental concepts of object-oriented programming. This concept allows for data privacy within a specific part of the program and provides a way for the programmer to easily modify the internal state of specific objects.

The main idea of how the concept works is by ensuring when a lot of functions or methods are operating on that same piece of data, the functions are unable to directly manipulate the value. Meaning there is a certain boundary around the data that prevents external functions from directly accessing the data. This is achieved by coding well-defined getter and setter functions, which will allow indirect manipulation of the private variable.

So, we have also implemented the usage of encapsulation within our program. An example of it can be seen in Class IntList. In this class, there are two private members defined, they are struct ListNode and pointer head. Since struct ListNode is a private member, it details are hidden from external functions. This function can only be manipulated and accessed through the member functions of the IntList class. 

![Encapsulation concept](https://github.com/Jisi-A/CPT113-HACKATHON2/assets/117000781/f4dede9a-47e6-4c73-883b-9e52bc7c11ca)

## (c)	Inheritance
Another object-oriented concept we have implemented is the inheritance concept. The brief definition of this concept is the derived class will inherit the characteristic and functionality of the parent class. This establishes a hierarchical relationship between the two parent-child classes. 
The derived or child class will inherit all the non-private attributes of the parent class. The inheritance concept is useful as it promotes code usability and reduces the need to type out the same code for another class. 

We have utilized this concept within our program. This can be seen in the class game, where this class has inherited its properties from the parent class, class player. This means that Class game can utilized all the functions that has been defined in the class player. For example, the isEmpty(), displayList(), getHealth(), and the isTalked_swordsmith function.

![Inheritance concept](https://github.com/Jisi-A/CPT113-HACKATHON2/assets/117000781/807276e9-afb0-4e3c-86dd-f3da980b2e6f)

# 5.	How linked lists play a role in our game

We have implemented the usage of a dynamic linked list in our game. Our game utilizes the functionalities of a linked list in our program.

## (a) Saved Game Progress
The first functionality of the linked lists is it allows the player to be able to save their game’s progress. When the player has finished one full day, the game will give the player the option to save their game progress. The role of the linked list is it will write all the information gathered during the game into a save.txt file. There are a total of 15 nodes which will store all the information of the player like the health, coins, day, sorcerer slayer item status, shield item status, bomb item status, anti-sorcerer magic book status, isTalked_quirky status, isTalked jester status, isTalked_swordsmith status, hidden smith status, shield status, number unlocked hidden story, return status if the player has talked to swordsmith and return status if the player has ever talked to jester before.

## (b) Load Prevous Game
The second functionality of the linked list is it enables the players to load their progress on the day where they had previously stopped. The program will read the save.txt file, and all the information will be appended back inside the linked list. The linked list now contains the player’s previous progress information, and the player is all set to continue playing the game. 

## (c) Update information in nodes
The third functionality of the linked list is the linked list will update all the information gather during the game into the respective nodes. For example, if the player has gone on an adventure and has an AP value of 5. The gold coins the player earns would have been 500 000. This information will be updated by the linked list at the end of the day when the game is saved. 

## (d) Display relevant information
The fourth functionality of the linked list is the linked list will display all the relevant details about the player at the start of a new day or after an action is completed. For example, we can observe the amount of gold coins the player has earned, the day number, the name of the player, the Action Point (AP) left, and the current health the player has. 

# Conclusion
In conclusion, the role of a linked list is essential to the progress of our game as it stores the information needed to run the game properly. There are a total of 4 uses of linked lists in our game, namely saving the player’s progress, loading previous game progress, updating players information in the linked list, and lastly is displaying all the relevant details of the player at starting of the game.


# 6. Screenshots of your game

### 1.	Opening Menu Page
![Opening Menu Page](https://github.com/Jisi-A/CPT113-HACKATHON2/assets/117000781/dc50e3ff-d2dc-4c6b-a8ce-c1fee253ccb7)

### 2.	Beginning narrative of Game
![Beginning Narrative](https://github.com/Jisi-A/CPT113-HACKATHON2/assets/117000781/a04bf10c-aba0-4739-b70b-77e98250e3d9)

### 3. Tutorial page
![Tutorial pg](https://github.com/Jisi-A/CPT113-HACKATHON2/assets/117000781/422e77c5-a597-47c4-b474-e59dd1ff54c6)

### 4.	Game’s Main Menu Page
![Main Menu page](https://github.com/Jisi-A/CPT113-HACKATHON2/assets/117000781/d8b1c56a-9d3b-435c-ae27-443bc3aa10e2)

### 5.	The Rusty Swordsmith (Main Dialogue)
![Rusty (Main Dialogue)](https://github.com/Jisi-A/CPT113-HACKATHON2/assets/117000781/59bafc90-faaa-4e55-b5ff-22270363edde)

### 5.	(a) The Rusty Swordsmith (1 option) 
![Rusty (1 option)](https://github.com/Jisi-A/CPT113-HACKATHON2/assets/117000781/1dda76fc-2c38-4a4f-884c-218bdd10390c)

### 5.	(b) The Rusty Swordsmith (2 option)
![Rusty (2 option)](https://github.com/Jisi-A/CPT113-HACKATHON2/assets/117000781/8e369e74-b16d-49f4-a8b4-e94328542e94)

### 6.	Saving Game Progress
![Saving game progress](https://github.com/Jisi-A/CPT113-HACKATHON2/assets/117000781/2aa51f7a-0f99-41c3-9f1f-17409d3a6f4b)

### 7.	The Jester's Joke Emporium (Main Dialogue)
![Jester (Main Dialogue)](https://github.com/Jisi-A/CPT113-HACKATHON2/assets/117000781/36e954b6-4ef8-457b-90b5-5a4171ee2dc9)

### 7.	(a) Jester's Joke Emporium (1 option)
![Jester (1 option)](https://github.com/Jisi-A/CPT113-HACKATHON2/assets/117000781/a05d4f89-3620-4190-a54a-e9af0f5ebbed)

### 7. (b) Jester's Joke Emporium (2 option)
![Jester (2 option)](https://github.com/Jisi-A/CPT113-HACKATHON2/assets/117000781/32251073-adf7-44b1-ba55-a3f9e904ff03)

### 8. Quirky Quills (Main Dialogue)
![Quills (Main Dialogue)](https://github.com/Jisi-A/CPT113-HACKATHON2/assets/117000781/bea3d849-357a-4c52-8b04-2f7290d23fac)

### 8. (a) Quirky Quills (1 option)
![Quills (1 option)](https://github.com/Jisi-A/CPT113-HACKATHON2/assets/117000781/bc53cc56-e438-48d5-a616-890abe40dacf)

### 8. (b) Quirky Quills (2 option)
![Quills (2 option)](https://github.com/Jisi-A/CPT113-HACKATHON2/assets/117000781/9a40759f-34c8-4a18-9760-81b4e09d95f2)

### 9. Adventure 
![Adventure](https://github.com/Jisi-A/CPT113-HACKATHON2/assets/117000781/36d67cd2-61d4-4c82-9f8d-efd303b7879a)

### 10. Embark
![Embark](https://github.com/Jisi-A/CPT113-HACKATHON2/assets/117000781/8e06d042-047d-4456-ad3a-90d3149b61b5)

# SPOILER ALERT!! (GAME ENDINGS)

### 11. (a) True Ending
![True end](https://github.com/Jisi-A/CPT113-HACKATHON2/assets/117000781/ed8a7ad9-957a-4cc3-a014-81d8bb2a75b0)

### 11. (b) Normal Ending
![Normal End](https://github.com/Jisi-A/CPT113-HACKATHON2/assets/117000781/ec51b1e5-d955-46fc-9778-b429eb3d317f)

### 11. (c) Money Ending
![Money Ending](https://github.com/Jisi-A/CPT113-HACKATHON2/assets/117000781/6b6918b1-309d-455f-9d0a-84124deed1a8)

### 11. (d) Bad Ending
![Bad Ending](https://github.com/Jisi-A/CPT113-HACKATHON2/assets/117000781/0547f9a2-26ce-4e45-be37-8d8891fe4172)


# Game Guidance Tree

![Tree](https://github.com/Jisi-A/CPT113-HACKATHON2/assets/116088800/31eb1dea-be75-4406-b7a2-d9a79f056ab3)
