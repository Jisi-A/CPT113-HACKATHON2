# CPT113-HACKATHON2
### Group 32

Documentation Requirements
# 1.	Game Description 

Get ready to dive into a world full of excitement and exhilarating adventure! Introducing our group’s game project: “The Misadventures of Sir Noodlebrain” It’s a fun and hilarious game set in the medieval period of the year 600 AD in the Kingdom of Chickidon. 

As the player, you be assuming the role of our beloved protagonist, Sir Noodlebrain. He is a clumsy and bumbling knight from the Holy Order of the Clucking Crusaders. When one day, he had been tasked with a most unusual quest of high importance – rescuing the kingdom’s most cherished pet chicken, Princess Featherbottom. The villain of the story, a mischievous sorcerer has abducted Princess Featherbottom and demanded an outlandish ransom of 1 million gold coins! 

So, be prepared to embark on the adventure of your lifetime! As you will begin your journey in the quaint village of Quirktown. Armed with only a rusty sword and an oversized helmet, Sir Noodlebrain bravely set off on his dangerous quest filled with mishaps and slapstick humor! 

Please note our game is a multiple-choice game with many interesting endings! You need to choose your choices carefully to unlock the TRUE ENDING. Good luck on your journey and enjoy our game!


# 2.	Features of your game
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

1st Node stores the player’s health.

2nd Node will record if the player has talked to the swordsmith before.

3rd Node will record if the player has talked to the Jester before.

4th Node will record if the player has talked to the Wizard before.

5th Node is to record if the player has received the sword, sorcerer slayer.

6th Node is to take note of the amount the coins the player has earned.

7th Node will record if the player has unlocked the hidden storyline for Swordsmith

8th Node will record if the player has received the great sword

9th Node will record if the player has unlocked the hidden storyline for Jester

10th Node will record if the player has received the shield

11th Node will record if the player has received the Witch Hunt Bomb

12th Node will record if the player has received the Anti-Sorcerer Magic Book

13th Node will record if the player has received the History Book

14th Node will record if the player has 

15th Node will record the day the player is on.

