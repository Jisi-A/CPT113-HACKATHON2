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

o	NODE 14: Record if the player has 

o	NODE 15: Record the day the player is on.


So, all this information will be recorded by the linked list when each day has come to an end. The information for each of the nodes in the linked list will be written into a save.txt file. Thus, the player’s progress is saved. 

However, our game has a limitation where the game can only save the newest progress for the day only. The game will not be able to access the previous day's progress as it will be overwritten by the latest progress.  


## (b)	Multiple Menu Pages 

Our game used multiple menu pages to create an interactive and fun gameplay session where the players can make their own choice to find the ending they deserved. The follorwing are a few examples of menus pages in our game

## 1.	Opening Menu page

This is the opening page the player will see upon starting our game. The function of this page is to give multiple options to the user on what they wish to do. There are 3 options the player can take.

•	1st option: Create new game

•	2nd option: Load game

•	3rd option: Quit game


![Opening Menu Page](https://github.com/Jisi-A/CPT113-HACKATHON2/assets/117000781/e429af83-f8e8-4cc9-a47b-76719b8f8f5c)

## 2. Tutorial page

This page will give a brief guideline of the quest in the game. And will introduce to you about the important elements of our game like action points and the time frame within which the player must complete the quest. This page also informs that you will be playing as the main character of our story, Sir Noodlebrain, a knight in the Kingdom of Chickidon. 

The game will prompt if the user wants to see the tutorial menu. If they do not wish to, they can skip if part. The diagram below shows the option to skip the tutorial menu.


![Tutorial page](https://github.com/Jisi-A/CPT113-HACKATHON2/assets/117000781/b7265e52-d7f0-4616-aacb-2127122d7338)


## 3.	Game's Main Menu Page

This page will first display the details of the character like day, character’s name, health, number of coins, and AP the player has for the day. Then, the page will show all the possible choices our players can perform throughout the entire game. This is the main menu page the players will be seeing quite frequently throughout the game. The player has a total of 6 options in the game. 


![Main Menu page](https://github.com/Jisi-A/CPT113-HACKATHON2/assets/117000781/61c9b4e7-ed42-4aaa-9127-75c195f36762)


The first 3 options are to allow the player to explore the different shops and cabins in the game. 
The 4th option is to allow the player to earn goal coins in the game. 
The 5th option is to let the player fight the final villain of the game. 
The last option is to allow the player to skip a day if they prefer not to perform any action.


## 4. The Rusty Swordsmith Menu Page

This page will allow the player to interact with the shopkeeper of the Rusty Swordsmith, Sir Grumblebeard. There are 3 options the player can choose.

•	[1] Give me a rusty sword that can one-shot the evil sorcerer.

•	[2] Why are you selling rusty swords?

•	[3] Back to town

The 1st option allows the player to receive the sword which can slay the evil sorcerer. The 2nd option allows the player to be curious and enquire about the mechanise sold by the swordsmith. 
The 3rd option allows the player to return to town or the main menu page. 


## 5. The Jester’s Joke Emporium Menu Page
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


