
#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <fstream>
#include <string>
#include "linkedlist.h"

using namespace std;

// Define the Player class
class Player {
private:
    IntList info;
    //NODE 1 health;
    //NODE 2 isTalked_swordsmith;
    //NODE 3 isTalked_jester;
    //NODE 4 isTalked_quirky;
    //NODE 5 sorcerer slayer;
    //NODE 6 coin;
    //NODE 7 hidden smith;
    //NODE 8 greatsword;
    //NODE 9 hidden jester;
    //NODE 10 shield;
    //NODE 11 Bomb;
    //NODE 12 Anti Sorcerer Magic Book;
    //NODE 13 HistoryBook;
    //NODE 14 Hidden;
    //NODE 15 Day;

public:
    Player() {
        // Load the save file when create player object.
        loadProgress();
    };
    // destructor alrady implemented in linkedlist header file.
    ~Player() {}

    //check if the save file is empty
    bool isEmpty() {
        return info.isEmpty();
    }

    // display the save file
    void displaylist() {
        info.displaylist();
    }
    
    //returns player's health
    int getHealth() {return info.getHealth();}
    
    //returns whether if these characters are interacted or not  
    bool isTalked_swordsmith() {
        if(info.isTalked_swordsmith()==0) 
            return 0; 
        else 
            return 1;
    }
    bool isTalked_jester() {
        if(info.isTalked_jester()==0) 
            return 0; 
        else
            return 1;
    }
    bool isTalked_quirky() {
        if(info.isTalked_quirky()==0)
            return 0;
        else
            return 1;
    }

    //check if the player has discovered the item/hidden storyline or not.
    bool isSlayer() {
        if(info.isSlayer()==0)
            return 0;
        else
            return 1;
    }
    bool hiddenSmith(){
        if(info.hiddenSmith()==0)
            return 0;
        else
            return 1;
    }
    bool isGreatSword(){
        if(info.isGreatSword()==0)
            return 0;
        else
            return 1;
    }
    bool hiddenJester(){
        if(info.hiddenJester()==0)
            return 0;
        else
            return 1;
    }
    bool isShield(){
        if(info.isShield()==0)
            return 0;
        else
            return 1;
    }
    int isBomb() {
        if(info.isBomb()) 
            return 1;
        else
            return 0;
    }
    int isBook() {
        if(info.isBook())
            return 1;
        else
            return 0;
    }
    int isHistory() {
        if(info.isHistory())
            return 1;
        else
            return 0;
    }
    
    //returns player's coin
    int isCoin() {return info.isCoin();}

    //returns the number of hidden storylines the player discovered
    int getHidden() {
        return info.getHidden();
    }

    //returns integer value of this attributes (for saving purpose)
    int swordsmith_value(){return info.isTalked_swordsmith();}
    int jester_value(){return info.isTalked_jester();}
    int quirky_value(){return info.isTalked_quirky();}
    int slayer_value(){return info.isSlayer();} 
    int hiddenSmith_value(){return info.hiddenSmith();} 
    int sword_value(){return info.isGreatSword();} 
    int hiddenJester_value(){return info.hiddenJester();} 
    int shield_value(){return info.isShield();} 
    int getDay(){return info.getDay();}


    //set the values, ALL THEY DO IS +1 IN TEXT FILE
    void setswordsmith(){info.set_swordsmith();}
    void set_jester(){info.set_jester();}
    void set_quirky(){info.set_quirky();}
    void set_slayer(){info.set_slayer();}
    void sethiddenSmith(){info.sethiddenSmith();}
    void set_sword(){info.set_sword();}
    void set_hidden_Jester(){info.set_hidden_Jester();}
    void set_shield(){info.set_shield();}
    void set_bomb(){info.set_bomb();}
    void set_book(){info.set_book();}
    void set_history(){info.set_history();}
    void setHidden(){info.setHidden();}
    void setDay(int num){info.setDay(num);}

    //update the value of coins in the linked list.
    void set_coin(int num){info.set_coin(num);}

    //initialize the info stored in linked list.
    void initializeLinkedList() {info.initializeLinkedList();}
    //display necessary information of the save file.
    void displayLoadout();
    //save current progress.
    void saveProgress();
    //read the save file into linked list.
    void loadProgress();

};

//Display inventory
void Player::displayLoadout(){
    cout << "Health: " << getHealth() << endl;
    cout << "Coin: " << isCoin() << endl;
    if(isSlayer()) {
         cout << "Sorcerer Slayer x 1" << endl;
    }
    if(isGreatSword()) {
        cout << "Great Sword x 1" << endl;
    }
    if(isShield()!=0) {
        cout << "Shield x 1" << endl;
    }
    if(isBook()!=0) {
        cout << "Anti Sorcerer Magic Book x 1" << endl;
    }
    if(isHistory()!=0) {
        cout << "History Book x 1" << endl;
    }
    cout << "Day: " << getDay() << endl;
}

// Function to save the player's progress to a text file
void Player::saveProgress() {
    // Open a file in write mode
    ofstream file("save.txt");

    // Check if the file is open
    if (file.is_open()) {
        // Write the player's attributes to the file
        file << getHealth() << endl;
        file << swordsmith_value() << endl;
        file << jester_value() << endl;
        file << quirky_value() << endl;
        file << slayer_value() << endl;
        file << isCoin() << endl;
        file << hiddenSmith_value() << endl;
        file << sword_value() << endl;
        file << hiddenJester_value() << endl;
        file << shield_value() << endl;
        file << isBomb() << endl;
        file << isBook() << endl;
        file << isHistory() << endl;
        file << getHidden() << endl;
        file << getDay() << endl;

        // Close the file
        file.close();

        //info.displaylist();

        cout << "Progress saved successfully." << endl;
    }
    else {
        cout << "Error: Unable to open the file for saving progress!" << endl;
    }
}

// Function to load the player's progress from a text file
void Player::loadProgress() {
    // Open the file in read mode
    ifstream file("save.txt");
    int health = 100;
    int swordsmith = 0;
    int quirky = 0;
    int jester = 0;
    int slayer = 0;
    int coin = 0;
    int hiddenSmith = 0;
    int sword = 0;
    int hiddenJester = 0;
    int shield = 0;
    int Bomb = 0;
    int Book = 0;
    int History = 0;
    int Hidden = 0;
    int day = 1;


    // Check if the file is open
    if (file.is_open()) {
        // Read the player's attributes from the file
        
        file >> health;
        file >> swordsmith;
        file >> quirky;
        file >> jester;
        file >> slayer;
        file >> coin; 
        file >> hiddenSmith; 
        file >> sword; 
        file >> hiddenJester; 
        file >> shield;
        file >> Bomb;
        file >> Book;
        file >> History;
        file >> Hidden;
        file >> day;
        
        //info.clearLinkedList();
        info.appendNode(health);
        info.appendNode(swordsmith);
        info.appendNode(quirky);
        info.appendNode(jester);
        info.appendNode(slayer);
        info.appendNode(coin);
        info.appendNode(hiddenSmith);
        info.appendNode(sword);
        info.appendNode(hiddenJester);
        info.appendNode(shield);
        info.appendNode(Bomb);
        info.appendNode(Book);
        info.appendNode(History);
        info.appendNode(Hidden);
        info.appendNode(day);
        
        // Close the file
        file.close();

        if (health != 100) {
            cout << "Save file destroyed. Please delete save.txt and try to open again." << endl;
            exit(0);
        }
        else {
            cout << "Progress loaded successfully." << endl;
        }
    }
    else {
        ofstream fileOpen("save.txt");
        fileOpen << health << endl;
        fileOpen << swordsmith << endl;
        fileOpen << quirky << endl;
        fileOpen << jester << endl;
        fileOpen << slayer << endl;
        fileOpen << coin << endl;
        fileOpen << hiddenSmith << endl;
        fileOpen << sword << endl;
        fileOpen << hiddenJester << endl;
        fileOpen << shield << endl;
        fileOpen << Bomb << endl;
        fileOpen << Book << endl;
        fileOpen << History << endl;
        fileOpen << Hidden << endl;
        fileOpen << day << endl;
        fileOpen.close();

        ifstream file("save.txt");
        if (file.is_open()) {
            
            //info.clearLinkedList();
            info.appendNode(health);
            info.appendNode(swordsmith);
            info.appendNode(quirky);
            info.appendNode(jester);
            info.appendNode(slayer);
            info.appendNode(coin);
            info.appendNode(hiddenSmith);
            info.appendNode(sword);
            info.appendNode(hiddenJester);
            info.appendNode(shield);
            info.appendNode(Bomb);
            info.appendNode(Book);
            info.appendNode(History);
            info.appendNode(Hidden);
            info.appendNode(day);
            
            // Close the file
            file.close();

            cout << "Progress loaded successfully." << endl;
        }
    }
}


#endif
