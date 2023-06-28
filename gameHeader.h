#ifndef GAME_H
#define GAME_H
#include "Player.h"
#include <iostream>
using namespace std;

class Game : public Player {
    private:
        // Action Point(AP). Used to control the actions can be made by a user in a round.
        int AP;

    public:
        Game() {
            // Initialize AP to 5.
            AP = 5;
        };
        ~Game() {};

        // Function will be called to start the game.
        void startGame();
        // Function will print out the chapter 1 of the story.
        void chapter1();
        // Funtion that will print out the tutorial of the story.
        void chapter2();
        // Main game features menu. Use to control the whole game flow.
        void day(int);
        // Same as day. But used when load to a saved account. Because need to have different way to count the day.
        void loadDay(int);
        // Dialogue if choosed to talk with Sword Smith. Contain all of the story about Sword Smith.
        void talkSwordsmith();
        // Dialogue if choosed to talk with Jester. Contain all of the story about Jester.
        void talkJester();
        // Dialogue if choosed to talk with Quill. Contain all of the story about Quill.
        void talkQuill();
        // Action will be taken if choosed to start an adventure in day.
        void adventure();
        // Embark to the Witch Tower. Guide to the end phase of the game.
        void embark();
        // Contain the story of one of the ending of the game.
        void badEnd();
        // Contain the story of one of the ending of the game.
        void normalEnd();
        // Contain the story of one of the ending of the game.
        void whatEnd();
        //  Hidden Story line in the game.
        void Hidden();
        // Contain the story of one of the ending of the game.
        void trueEnd();
        // Call after the end. Asking whether the player want to play again or not.
        void repeat();
};

void Game::startGame() {
    // variable to control the switch(menu) of the game.
    int control;

    // Check whether the linked list if empty or not (no save file).
    if(isEmpty()) {
        cout << "++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
        cout << "+     The Misadventures of Sir Noodlebrain     +" << endl;
        cout << "++++++++++++++++++++++++++++++++++++++++++++++++" << endl << endl;
        // No the choice of load game.
        cout << "[1] New Game" << endl;
        cout << "[0] Exit" << endl;

        cin >> control;
        switch(control) {
            case 1:
                // Just make sure to let the linked list (player's info) be initialized.
                initializeLinkedList();
                // Start the game.
                chapter1();
                break;

            case 0:
                break;

            default:
                break;
        }
    }
    // There is save file.
    else {
        do {
            cout << "++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
            cout << "+     The Misadventures of Sir Noodlebrain     +" << endl;
            cout << "++++++++++++++++++++++++++++++++++++++++++++++++" << endl << endl;
            // Extra choice to load the game.
            cout << "[1] New Game" << endl;
            cout << "[2] Load Game" << endl;
            cout << "[0] Exit" << endl;
            
            cin >> control;
            switch(control) {
                case 1:
                    // Just make sure to let the linked list (player's info) be initialized.
                    initializeLinkedList();
                    // Start the game.
                    chapter1();
                    break;

                case 2:
                    // Display necessary player's info.
                    displayLoadout();
                    // Confirm if the player want to load in.
                    cout << "Do you want to load in ?" << endl;
                    cout << "[1] Load" << endl;
                    cout << "[0] Back" << endl;

                    cin >> control;
                    switch(control) {
                        case 1:
                            // Will load to the day the player stopped in previous play.
                            loadDay(6);
                            break;
                        
                        case 0:
                            // Back to the main menu.
                            control = -1;
                            break;
                        
                        default:
                            break;
                    }

                    break;

                case 0:
                    break;

                default:
                    break;
            }
        }while (control != 0);
    }
}

void Game::chapter1() {
    cout << "Middle-age century" << endl;

    // To pause the console.
    cin.get();
    // To clear the '\n' buffer
    cin.ignore();

    cout << "Kingdom Chickidon" << endl << endl;

    cin.get();

    cout << "??: \"Soldier! Soldier! Soldier!\"" << endl;
    cout << "*click-clack* *click-clack* *click-clack*" << endl;
    cout << "Soldiers: \" Yes! My lord!\"" << endl;

    cout << "Lord: \"What are you all doing?! Where is my beloved baby, Princess Featherbottom!!!\"" << endl;

    cout << "Soldiers: \"My majesty, I am sorry but we couldn't find Princess Featherbottom in the kingdom.\"" << endl;

    cout << "Lord: \"Then why are you still here?! GO FIND OUT MY BABY PRINCESS NOW!!!!!!\"" << endl;
    cout << "Lord: \"If you can't find out Princess Featherbottom within today, then all of you have to DIEE!! You understand that, Knight Noodlebrain!\"" << endl;

    cout << "Sir Noodlebrain: \"Yes, my Lord!\"" << endl;

    cout << "??: \"Ha---Ha---Ha---Ha---\"" << endl;

    cout << "All: \"!!!!!\"" << endl;

    cout << "Lord: \"What is this disgusting laughter? Where it come from?\"" << endl;

    cout << "??: Ouhhh my Lord Muffinpants, look at how mess are you now." << endl;

    cout << "Sir Noodlebrain: \"It's him! The evil sorcerer living in the Magic Tower!\"" << endl;

    cout << "Sir Noodlebrain points toward the sky and a man is floating up there." << endl;

    cout << "Evil Sorcerer: \"WHOAH! I'm surprise that you know me, Sir Noodlebrain. Seems like your brain is not really just noodle.\"" << endl;

    cout << "Lord Muffinpants: \"Why are you here, you evil sorcerer! Kindom Chickidon never welcome people like you!\"" << endl;

    cout << "Evil Sorcerer: \"Awhhh, you will regret for not speaking nicer to me after you open your eyes bigger and see who this is!\"" << endl;

    cout << "*Buzz* \n A black hole opened beside Evil Sorcerer and a cage containing Princess Featherbottom is inside the black hole." << endl;

    cout << "Lord Muffinpants: \"No! My baby! If you touch one hair on her head, I will let you know the meaning of PAINFULL, you evil sorcerer!\"" << endl;
    cout << "Lord Muffinpants: \"Knight Noodlebrain! Go and get my baby princess back!\"" << endl;

    cout << "Sir Noodlebrain: \"Yes, my majesty!\"" << endl;

    cout << "Evil Sorcerer: \"Don't be so hasty. I'm just coming to give a greet. If you want to get you bay \"princess\" back, then bring 1 million gold coins to the Magic Tower and find me!\"" << endl;
    cout << "Evil Sorcerer: \"Ha---Ha---Ha---Ha---\"" << endl;

    cout << "*buzz* Another black hole devour the evil sorcerer and he disappeared from the sky" << endl;

    cout << "Lord Muffinpants: \"All of you useless soldiers! Why you let him run away so easy!\"" << endl;
    cout << "Lord Muffinpants: \"Go now! GO! If I can't see my baby princess within one week, you know what will happen Knight Noodlebrain! I don't want to see the noodles inside your head, you get it?\"" << endl;

    cout << "Sir Noodlebrain: \"Yes, my majesty!\"" << endl;

    cout << "And that is the beginning of the story. You'll embark on a comical quest as Sir Noodlebrain, a clumsy and bumbling knight, to rescue the kingdom's beloved pet chicken, Princess Featherbottom." << endl;
    cout << "The evil sorcerer has kidnapped the chicken and demands a ridiculous ransom of 1 million gold coins." << endl;
    cout << "As Sir Noodlebrain, you find yourself at the entrance of a mysterious dungeon, ready to begin your hilarious and unpredictable adventure. Your journey starts in the small village of Quirktown, where you gather your courage and gather your trusty but slightly oversized helmet and rusty sword." << endl << endl;

    cin.get();

    // End of chapter 1, direct player to chapter 2.
    chapter2();
}

void Game::chapter2() {
    // variable to control the switch(menu) of the game.
    int control;

    // Ask if the player want to see the tutorial. Do-while loop is for input validation.
    do {
        cout << "Do you want to see tutorial?" << endl;
        cout << "[1] Yes" << endl;
        cout << "[0] No" << endl;
        cin >> control;

        if (control == 1) {
            cout << "Welcome to Kingdom Chickidon, I guess this is your first time entering this kingdom?" << endl;
            cout << "In this kingdom, you will act as Sir Noodlebrain, a knight that serves Lord Muffinpants." << endl;
            cout << "You need to save Princess Featherbottom from the Magic Tower within 7 days. You can use any way to save her, try to discover the more you can." << endl;
            cout << "Everyday, you will have 5 action points(AP). Each time you do an action will reduce the AP by 1. Please notice that, repeating action (e.g., go in go out the shop several times) in the day will not reduce your AP but everytime you attempt a battle will cost all of your AP and each AP will be exchanged to 100000 coins" << endl;
            cout << "The actions you can take will be listed out as a menu, feel free to do any action and play again the game to experience different choices." << endl;
            cout << "When your AP runs out, you will be forced to go into next day. However you can also choose to skip the day." << endl;
            cout << "When you've reached the 7th day, you will be forced to embark to the Magic Tower, so please be well prepared in Day 6. Well, you can also embark before Day 7, everything is depends on your choice." << endl;
            cout << "That's all you need to know for the game, I hope you can enjoy!" << endl;
        }
        else if (control == 0) {
            cout << "Good luck and enjoy!" << endl;
        }
        else {
            cout << "Please enter valid input." << endl;
        }
    }while(control != 0 && control != 1);

    cin.get();

    cout << "Sir Noodlebrain(OS): What a horrible day...I hope I could run away from all of these..." << endl;
    cout << "Sir Noodlebrain(OS): Well, I think I better move now than complain." << endl;
    
    cin.get();

    day(6);
}

void Game::day(int num) {
    // variable to control the switch(menu) of the game.
    int control;
    // To track if you have entered the shop or not today.
    //int smith=0, jester=0, quirky=0;

    // Recursive function to call the day function until day 1.
    if(num != 1) {
        day(num-1);
    }

    // Telling use day what is this.
    cout << "Day " << num << endl; 
    // Initialize the AP at the start of the day.
    AP = 5;

    // Print out the menu as long as input is not 0 (go to next day) and AP is more than 0.
    do {
        cout << "Sir Noodlebrain" << endl;
        cout << "Health: " << getHealth() << endl;
        cout << "Coin: " << isCoin() << endl;
        cout << "AP: " << AP << endl;
        cout << "Kingdom Chickidon - Town" << endl;
        cout << "[1] The Rusty Swordsmith" << endl;
        cout << "[2] The Jester's Joke Emporium" << endl;
        cout << "[3] The Quirky Quill" << endl;
        cout << "[4] Adventure" << endl;
        cout << "[5] Embark" << endl;
        cout << "[0] Next Day" << endl;

        cin >> control;
        switch(control) {
            case 1:
                // If the player never enter this place today, one AP will be deducted.
                if (!isTalked_swordsmith()) {
                    // Minus one AP.
                    AP--;
                    setswordsmith();
                    // Add one to smith counter (already talked to smith today.)
                    // smith++;
                }
                // Call the function to start a talk with smith.
                talkSwordsmith();
                break;
                
            case 2:
                // Same with above.
                if (!isTalked_jester()) {
                    AP--;
                    set_jester();
                    // jester++;
                }
                // Call the function to start a talk with jester.
                talkJester();
                break;

            case 3:
                // Same with above.
                if (!isTalked_quirky()) {
                    AP--;
                    set_quirky();
                    // quirky++;
                }
                // Call the function to start a talk with quill.
                talkQuill();
                break;

            case 4:
                // Go the the adventure function.
                adventure();
                break;

            case 5:
                // Call embark function.
                embark();
                // Used exit here because no matter which day the player is in, after embark the game will end.
                exit(0);
            
            case 0:
                // simply get out the loop.
                break;

            default:
                cout << "ENTER A VALID INPUT!" << endl;
                break;
        }
    }while(AP > 0 && control != 0);

    if (num != 6) {
        // For input validation.
        do {
                // Ask if player want to save the progress
            cout << "Do you want to save before going to next day?" << endl;
            cout << "[1] Save and continue" << endl;
            cout << "[2] Continue without saving (not suggested)" << endl;
            cin >> control;
            if (control == 1) {
                // Change the value of day in linked list.
                setDay(num+1);
                // Prompt the program to save the data into txt file.
                saveProgress();
            }
            else if (control == 2) {
                // end current function and go back to previous recursive functoin (the next day).
            }
            else {
                cin >> control;
                cout << "NOT A LEGAL INPUT!" << endl;
            }
        }while (control != 1 && control != 2) ;
    }

    // Force the player to embark after day 6. (The game have 7 days limitation.)
    if (num == 6) {
        cout << "You will not be able to save in this day because this is the last day." << endl;
        cout << "Sir Noodlebrain started his trip to the Magic Tower.." << endl;
        cin.ignore();
        cin.get();
        embark();
    }
}

// Everything is same as day() except the recursive function.
void Game::loadDay(int num) {
    int control;
    int smith=0, jester=0, quirky=0;
    
    // if the day is bigger than the day stored in file, will call the function loadDay recursively until reached the day the player stopped. 
    if(num > getDay()) {
        loadDay(num-1);
    }

    // Everything else is same. Please refer to the day function.
    cout << "Day " << num << endl; 
    AP = 5;

    do {
        cout << "Sir Noodlebrain" << endl;
        cout << "Health: " << getHealth() << endl;
        cout << "Coin: " << isCoin() << endl;
        cout << "AP: " << AP << endl;
        cout << "Kingdom Chickidon - Town" << endl;
        cout << "[1] The Rusty Swordsmith" << endl;
        cout << "[2] The Jester's Joke Emporium" << endl;
        cout << "[3] The Quirky Quill" << endl;
        cout << "[4] Adventure" << endl;
        cout << "[5] Embark" << endl;
        cout << "[0] Next Day" << endl;

        cin >> control;
        switch(control) {
            case 1:
                if (smith==0) {
                    AP--;
                    smith++;
                }
                talkSwordsmith();
                break;
                
            case 2:
                if (jester==0) {
                    AP--;
                    jester++;
                }
                talkJester();
                break;

            case 3:
                if (quirky==0) {
                    AP--;
                    quirky++;
                }
                talkQuill();
                break;

            case 4:
                adventure();
                break;

            case 5:
                embark();
                break;
            
            case 0:
                break;

            default:
                cout << "ENTER A VALID INPUT!" << endl;
                break;
        }
    }while(AP != 0 && control != 0);

    if (num != 6) {
        cout << "Do you want to save before going to next day?" << endl;
        cout << "[1] Save and continue" << endl;
        cout << "[2] Continue without saving (not suggested)" << endl;
        // For input validation.
        do {
            cin >> control;
            if (control == 1) {
                // Change the value of day in linked list.
                setDay(num+1);
                // Prompt the program to save the data into txt file.
                saveProgress();
            }
            else if (control == 2) {
                // end current function and go back to previous recursive functoin (the next day).
            }
            else {
                cin >> control;
                cout << "NOT A LEGAL INPUT!" << endl;
            }
        }while (control != 1 && control != 2) ;
    }

    if (getDay() >= 6) {
        cout << "You will not be able to save in this day because this is the last day." << endl;
        cout << "Sir Noodlebrain started his trip to the Magic Tower.." << endl;
        cin.ignore();
        cin.get();
        embark();
    }
}

void Game::talkSwordsmith() {
    // variable to control the game menu and check how many times the player asked the hidden question in single round.
    int hiddenCount=0, control;
    
    cout << "The Rusty Swordsmith: A rundown shop with a sign that reads 'Finest Rusty Swords in Town!" << endl;
    cout << "[1] Enter" << endl;
    cout << "[0] Back" << endl;

    cin >> control;
    switch(control) {
        case 1:
            // If the player haven't get sorcerer slayer (normal item) and haven't done the hidden dialogues.
            if (!hiddenSmith() && !isSlayer()) {
                // Make sure the player still have enough AP, so AP won't be negative value.
                while (AP > 0) {
                    // Repeat the talk if player choosed hidden dialogue.
                    do {
                        cout << "Grumblebeard: \"Well, well, what have we here? Another adventurer seeking a trusty, or should I say, rusty sword? What brings you to my humble abode?\"" << endl;
                        cout << "[1] Give me a rusty sword that can one-shot the evil sorcerer." << endl;
                        cout << "[2] Why are you selling rusty sword?" << endl;
                        cout << "[0] Back to Town" << endl;

                        cin >> control;
                        switch(control) {
                            case 1:
                                AP--;
                                cout << "Grumblebeard: \"Ah, an ambitious one, are we? A rusty sword that can one-shot a sorcerer, you say?\"" << endl;
                                cout << "You get Sorcerer Slayer!" << endl;
                                
                                // Set the counter in linked list to 1, determined the player already get the sorcerer slayer.
                                set_slayer();

                                cout << "Here you go, lad. This is the 'Sorcerer Slayer.' It may not be the shiniest blade, but it has a knack for disrupting magical enchantments'" << endl;
                                cout << "[0] Back to Town." << endl;
                                // no matter what the user enter, will just go back.
                                cin.ignore();
                                cin.get();

                                return;

                            case 2:
                                // cost 1 AP everytime choose the hidden dialogue.
                                AP--;
                                if(hiddenCount == 0) {
                                    cout << "Grumblebeard: \"...\"" << endl;
                                    hiddenCount++;
                                    cout << "[0] Back" << endl;
                                    cin.ignore();
                                    cin.get();

                                    // break should be used instead of return because we are still looping in the same function.
                                    break;
                                }
                                else if (hiddenCount == 1) {
                                    cout << "Grumblebeard: \"...Do you really want to know that?\"" << endl;
                                    hiddenCount++;
                                    cout << "[0] Back" << endl;
                                    cin.ignore();
                                    cin.get();

                                    break;
                                }
                                else if(hiddenCount == 2) {
                                    cout << "Grumblebeard: \"I suggest you don't ask more. Curiousity killed the cat.\"" << endl;
                                    hiddenCount++;
                                    cout << "[0] Back" << endl;
                                    cin.ignore();
                                    cin.get();

                                    break;
                                }
                                else {
                                    // +1 to the hidden count in linked list (counting how many hidden storyline has dicovered).
                                    setHidden();
                                    // +1 to the hidden Smith counter in linked list (determine the player has discovered hidden story in smith).
                                    sethiddenSmith();
                                    cout << "Grumblebeard: \"OKAY OKAY, you win now! How can I provide a good weapon if I have to spend all of my coins to pay market fees!\"" << endl;
                                    cout << "Sir Noodlebrain: \"...\"" << endl;
                                    cout << "Grumblebeard: \"See sir, you can't give any help. He is your Lord and you are just a knight. A knight that has no bravery to stand out for the true justice!\"" << endl;
                                    cout << "Grumblebeard: \"So just stop annoying me with this topic!\"" << endl;
                                    cout << "[0] Back" << endl;
                                    cin.ignore();
                                    cin.get();
                                }
                                return;

                            case 0:
                                return;

                            default:
                                return;
                        }
                    }while(control == 2 && AP > 0);
                }

                return;
            }
            // The menu will be displaye if hidden storyline in smith haven't done but already get the sorcerer slayer (normal item).
            else if (!hiddenSmith() && isSlayer()) {
                while (AP > 0) {
                    do {
                        cout << "Grumblebeard: \"Well, well, what have we here? Another adventurer seeking a trusty, or should I say, rusty sword? What brings you to my humble abode?\"" << endl;
                        cout << "[1] Give me a rusty sword that can one-shot the evil sorcerer." << endl;
                        cout << "[2] Why are you selling rusty sword?" << endl;
                        cout << "[0] Back to Town" << endl;

                        cin >> control;
                        switch(control) {
                            case 1:
                                cout << "You already get it!" << endl;
                                cout << "[0] Back to Town." << endl;
                                cin.ignore();
                                cin.get();

                                return;

                            case 2:
                                AP--;
                                if(hiddenCount == 0) {
                                    cout << "Grumblebeard: \"...\"" << endl;
                                    hiddenCount++;
                                    cout << "[0] Back" << endl;
                                    cin.ignore();
                                    cin.get();

                                    break;
                                }
                                else if (hiddenCount == 1) {
                                    cout << "Grumblebeard: \"...Do you really want to know that?\"" << endl;
                                    hiddenCount++;
                                    cout << "[0] Back" << endl;
                                    cin.ignore();
                                    cin.get();

                                    break;
                                }
                                else if(hiddenCount == 2) {
                                    cout << "Grumblebeard: \"I suggest you don't ask more. Curiousity killed the cat.\"" << endl;
                                    hiddenCount++;
                                    cout << "[0] Back" << endl;
                                    cin.ignore();
                                    cin.get();

                                    break;
                                }
                                else {
                                    cout << "Grumblebeard: \"OKAY OKAY, you win now! How can I provide a good weapon if I have to spend all of my coins to pay market fees!\"" << endl;
                                    cout << "Sir Noodlebrain: \"...\"" << endl;
                                    cout << "Grumblebeard: \"See sir, you can't give any help. He is your Lord and you are just a knight. A knight that has no bravery to stand out for the true justice!\"" << endl;
                                    cout << "Grumblebeard: \"So just stop annoying me with this topic!\"" << endl;
                                    cout << "[0] Back" << endl;
                                    cin.ignore();
                                    cin.get();

                                    setHidden();
                                    sethiddenSmith();
                                }
                                return; 

                            case 0:
                                return;

                            default:
                                return;
                        }
                    }while(control == 2 && AP > 0);
                }
            }
            // If the hidden path has been discovered but haven't get the hidden item,
            else if (hiddenSmith() && !isGreatSword()) {
                // The menu will be displaye if all hidden storyline discovered but haven't get the sorcerer slayer (normal item).
                if (getHidden() == 3 && !isSlayer()) {
                    cout << "Grumblebeard: \"Well, well, what have we here? Another adventurer seeking a trusty, or should I say, rusty sword? What brings you to my humble abode?\"" << endl;
                    cout << "[1] Give me a rusty sword that can one-shot the evil sorcerer." << endl;
                    cout << "[2] Get me a sword. A sword that is worthy to my resolution!" << endl;
                    cout << "[0] Back to Town" << endl;

                    cin >> control;
                    switch(control) {
                        case 1:
                            AP--;
                            cout << "Grumblebeard: \"Ah, an ambitious one, are we? A rusty sword that can one-shot a sorcerer, you say?\"" << endl;
                            cout << "You get Sorcerer Slayer!" << endl;
                            
                            set_slayer();

                            cout << "Here you go, lad. This is the 'Sorcerer Slayer.' It may not be the shiniest blade, but it has a knack for disrupting magical enchantments'" << endl;
                            cout << "[0] Back to Town." << endl;
                            cin.ignore();
                            cin.get();

                            return;

                        case 2:
                            AP--;
                            cout << "Grumblebeard: \"Hmm, you looks so different, Sir Noodlebrain. I don't know what make you changed but I like you better now. HA! HA! HA!\"" << endl;
                            cout << "Grumblebeard: \"Here you go, the best sword in the smith. This blade was whetted on the bones of tyrants. Pay me with your victory and I await for your triumphant return!\"" << endl;
                            cout << "Sir Noodlebrain: \"Thank you Mr. Grumblebeard. I will do my duty, as a knight, for our home soil!\"" << endl;
                            cout << "[0] Back to Town." << endl;
                            cin.ignore();
                            cin.get();

                            set_sword();

                            return;

                        case 0:
                            return;
                        default:
                            return;
                    }
                }
                // The menu will be displaye if all hidden storyline discovered and already get the sorcerer slayer (normal item).
                else if (getHidden() == 3 && isSlayer()) {
                    cout << "Grumblebeard: \"Well, well, what have we here? Another adventurer seeking a trusty, or should I say, rusty sword? What brings you to my humble abode?\"" << endl;
                    cout << "[1] Give me a rusty sword that can one-shot the evil sorcerer." << endl;
                    cout << "[2] Get me a sword. A sword that is worthy to my resolution!" << endl;
                    cout << "[0] Back to Town" << endl;
                    
                    cin >> control;
                    switch(control) {
                        case 1:
                            cout << "You already get it!" << endl;
                            cout << "[0] Back to Town." << endl;
                            cin.ignore();
                            cin.get();

                            return;

                        case 2:
                            AP--;
                            cout << "Grumblebeard: \"Hmm, you looks so different, Sir Noodlebrain. I don't know what make you changed but I like you better now. HA! HA! HA!\"" << endl;
                            cout << "Grumblebeard: \"Here you go, the best sword in the smith. This blade was whetted on the bones of tyrants. Pay me with your victory and I await for your triumphant return!\"" << endl;
                            cout << "Sir Noodlebrain: \"Thank you Mr. Grumblebeard. I will do my duty, as a knight, for our home soil!\"" << endl;
                            set_sword();
                            cout << "[0] Back to Town." << endl;
                            cin.ignore();
                            cin.get();

                            return;

                        case 0:
                            return;

                        default:
                            return;
                    }
                }
                // The menu will be displaye if not all hidden storyline discovered and haven't get the sorcerer slayer (normal item).
                else if (getHidden() != 3 && !isSlayer()){
                    cout << "Grumblebeard: \"Well, well, what have we here? Another adventurer seeking a trusty, or should I say, rusty sword? What brings you to y humble abode?\"" << endl;
                    cout << "[1] Give me a rusty sword that can one-shot the evil sorcerer." << endl;
                    cout << "[0] Back to Town" << endl;

                    cin >> control;
                    switch(control) {
                        case 1:
                            AP--;
                            cout << "Grumblebeard: \"Ah, an ambitious one, are we? A rusty sword that can one-shot a sorcerer, you say?\"" << endl;
                            cout << "You get Sorcerer Slayer!" << endl;

                            set_slayer();

                            cout << "Grumblebeard: \"Here you go, lad. This is the 'Sorcerer Slayer.' It may not be the shiniest blade, but it has a knack for disrupting magical enchantments\"" << endl;
                            cout << "[0] Back to Town." << endl;
                            cin.ignore();
                            cin.get();

                            return;

                        case 0:
                            return;

                        default:
                            return;
                    }
                }
                // The menu will be displaye if not all hidden storyline discovered but already get the sorcerer slayer (normal item).
                else if (getHidden() != 3 && isSlayer()){
                    cout << "Grumblebeard: \"Well, well, what have we here? Another adventurer seeking a trusty, or should I say, rusty sword? What brings you to my humble abode?\"" << endl;
                    cout << "[1] Give me a rusty sword that can one-shot the evil sorcerer." << endl;
                    cout << "[0] Back to Town" << endl;

                    cin >> control;
                    switch(control) {
                        case 1:
                            cout << "You already get it!" << endl;
                            cout << "[0] Back to Town." << endl;
                            cin.ignore();
                            cin.get();

                            return;

                        case 0:
                            return;

                        default:
                            return;
                    }
                }
            }
            // The menu will be displaye if all hidden storyline discovered, get the hidden item but haven't get the sorcerer slayer (normal item).
            else if (isGreatSword() && hiddenSmith() && !isSlayer()) {
                cout << "Grumblebeard: \"Well, well, what have we here? Another adventurer seeking a trusty, or should I say, rusty sword? What brings you to my humble abode?\"" << endl;
                    cout << "[1] Give me a rusty sword tha can one-shot the evil sorcerer." << endl;
                    cout << "[0] Back to Town" << endl;

                    cin >> control;
                    switch(control) {
                        case 1:
                            AP--;
                            cout << "Grumblebeard: \"Ah, an ambitious one, are we? A rusty sword that can one-shot a sorcerer, you say?\"" << endl;
                            cout << "You get Sorcerer Slayer!" << endl;
                            
                            set_slayer();

                            cout << "Grumblebeard: \"Here you go, lad. This is the 'Sorcerer Slayer.' It may not be the shiniest blade, but it has a knack for disrupting magical enchantments\"" << endl;
                            cout << "[0] Back to Town." << endl;
                            cin.ignore();
                            cin.get();
                            return;

                        case 0:
                            return;

                        default:
                            return;
                    }
            }
            // The menu will be displaye if get the hidden item and already get the sorcerer slayer (normal item).
            else if (isGreatSword() && isSlayer()) {
                cout << "Grumblebeard: \"Sir Noodlebrain, there is nothing I can give you anymore. You are well prepared for any challenges. Set your heart on victory!\"" << endl;
                cout << "[0] Back to Town" << endl;
                cin >> control;

                return;
            }
            
            break;
        
        case 0:
            return;
        
        default:
            break;
    }

    return;
}

// Totally same process in talkSwordsmith, just changes the name of varaibles.
void Game::talkJester() {
    int control, hiddenCount = 0;

    cout << "The Jester's Joke Emporium: A colorful shop with a jester's hat hanging above the entrance" << endl;
    cout << "[1] Enter" << endl;
    cout << "[0] Back" << endl;

    cin >> control;
    switch(control) {
        case 1:
            cout << "As you step through the door of the Jester's Joke Emporium, a bell tinkles merrily above your head. The shop is filled with bright colors and the sound of laughter. Behind the counter stands Jocelyn the Jester, grinning from ear to ear." << endl;
            if (!hiddenJester() && !isBomb()) {
                while (AP > 0) {
                    do {
                        cout << "Jocelyn the Jester: \"Welcome, welcome! Step right up and prepare to be amazed! Here at the Jester's Joke Emporium, we have everything you need to tickle your funny bone. What can I help you find today?\"" << endl;
                        cout << "[1] Give me something that can one-shot the evil sorcerer." << endl;
                        cout << "[2] Why you never make a show in the kingdom?" << endl;
                        cout << "[0] Back to Town." << endl;

                        cin >> control;
                        switch(control) {
                            case 1:
                                AP--;
                                cout << "Jocelyn the Jester: \"Ahah! An interesting request, maybe the most interesting joke I have heard these centuries." << endl;
                                cout << "Jocelyn the Jester: \"Guess what, I have the thing that suit your request perfectly!\"" << endl;
                                cout << "You get Witch-hunt Bomb!" << endl;

                                set_bomb();
                                
                                cout << "Jocelyn the Jester: \"Here you go, you daydreaming boy! This is the ancient bomb that used for witch-hunt in a long time ago. It might be old but I can guarantee the power it has.\"" << endl;
                                cout << "[0] Back to Town." << endl;
                                cin.ignore();
                                cin.get();

                                return;

                            case 2:
                                AP--;
                                if(hiddenCount == 0) {
                                        cout << "Jocelyn the Jester: \"...\"" << endl;
                                        hiddenCount++;
                                        cout << "[0] Back" << endl;
                                        cin.ignore();
                                        cin.get();

                                        break;
                                    }
                                    else if (hiddenCount == 1) {
                                        cout << "Jocelyn the Jester: \"...You looks different from others.\"" << endl;
                                        hiddenCount++;
                                        cout << "[0] Back" << endl;
                                        cin.ignore();
                                        cin.get();

                                        break;
                                    }
                                    else if(hiddenCount == 2) {
                                        cout << "Jocelyn the Jester: \"I do make shows in the past time, frequently. But now everything is no more the same.\"" << endl;
                                        hiddenCount++;
                                        cout << "[0] Back" << endl;
                                        cin.ignore();
                                        cin.get();

                                        break;
                                    }
                                    else if(hiddenCount == 3){
                                        cout << "Jocelyn the Jester: \"Let me tell you a story, Sir Noodlebrain. There was a kingdom, a glory kingdom. All of the residents in the kingdom was happy, a lot of travellers and adventurers come to the kingdom and held party there.\"" << endl;
                                        cout << "Jocelyn the Jester: \"But eveerything changed since that day. No more laughters. No more travellers. The kingdom became spiritless.\"" << endl;
                                        cout << "Jocelyn the Jester: \"That's all I can tell you, Sir Noodlebrain. I'm not supposed to disturb human's life too much as I am an elf.\"" << endl;
                                        cout << "Jocelyn the Jester: \"Go find out yourself, find out the truth, find out the thing you should protect.\"" << endl;
                                        hiddenCount++;
                                        cout << "[0] Back" << endl;
                                        cin.ignore();
                                        cin.get();

                                        set_hidden_Jester();
                                        setHidden();
                                    }
                                    return;

                                case 0:
                                    return;
                                
                                default:
                                    return;
                        }
                    }while (control == 2 && AP > 0);
                }
            }
            else if (!hiddenJester() && isBomb()) {
                while (AP > 0) {
                    do {
                        cout << "Jocelyn the Jester: \"Welcome, welcome! Step right up and prepare to be amazed! Here at the Jester's Joke Emporium, we have everything you need to tickle your funny bone. What can I help you find today?\"" << endl;
                        cout << "[1] Give me something that can one-shot the evil sorcerer." << endl;
                        cout << "[2] Why you never make a show in the kingdom?" << endl;
                        cout << "[0] Back to Town." << endl;

                        cin >> control;
                        switch(control) {
                            case 1:
                                cout << "You already get it!" << endl;
                                cout << "[0] Back to Town." << endl;
                                cin.ignore();
                                cin.get();

                                return;

                            case 2:
                                AP--;
                                if(hiddenCount == 0) {
                                        cout << "Jocelyn the Jester: \"...\"" << endl;
                                        hiddenCount++;
                                        cout << "[0] Back" << endl;
                                        cin.ignore();
                                        cin.get();

                                        break;
                                    }
                                    else if (hiddenCount == 1) {
                                        cout << "Jocelyn the Jester: \"...You looks different from others.\"" << endl;
                                        hiddenCount++;
                                        cout << "[0] Back" << endl;
                                        cin.ignore();
                                        cin.get();

                                        break;
                                    }
                                    else if(hiddenCount == 2) {
                                        cout << "Jocelyn the Jester: \"I do make shows in the past time, frequently. But now everything is no more the same.\"" << endl;
                                        hiddenCount++;
                                        cout << "[0] Back" << endl;
                                        cin.ignore();
                                        cin.get();

                                        break;
                                    }
                                    else if(hiddenCount == 3){
                                        cout << "Jocelyn the Jester: \"Let me tell you a story, Sir Noodlebrain. There was a kingdom, a glory kingdom. All of the residents in the kingdom was happy, a lot of travellers and adventurers come to the kingdom and held party there.\"" << endl;
                                        cout << "Jocelyn the Jester: \"But eveerything changed since that day. No more laughters. No more travellers. The kingdom became spiritless.\"" << endl;
                                        cout << "Jocelyn the Jester: \"That's all I can tell you, Sir Noodlebrain. I'm not supposed to disturb human's life too much as I am an elf.\"" << endl;
                                        cout << "Jocelyn the Jester: \"Go find out yourself, find out the truth, find out the thing you should protect.\"" << endl;
                                        hiddenCount++;
                                        cout << "[0] Back" << endl;
                                        cin.ignore();
                                        cin.get();

                                        set_hidden_Jester();
                                        setHidden();
                                    }
                                    return;

                                case 0:
                                    return;
                                
                                default:
                                    return;
                        }
                    }while (control == 2 && AP > 0);
                }
            }
            else if (hiddenJester() && !isShield()) {
                if (getHidden() == 3 && !isBomb()) {
                    cout << "Jocelyn the Jester: \"Welcome, welcome! Step right up and prepare to be amazed! Here at the Jester's Joke Emporium, we have everything you need to tickle your funny bone. What can I help you find today?\"" << endl;
                    cout << "[1] Give me something that can one-shot the evil sorcerer." << endl;
                    cout << "[2] I don't know if what I believe is true. But I won't be confused anymore." << endl;
                    cout << "[0] Back to Town." << endl;

                    cin >> control;
                    switch(control) {
                        case 1:
                            AP--;
                            cout << "Jocelyn the Jester: \"Ahah! An interesting request, maybe the most interesting joke I have heard these centuries." << endl;
                            cout << "Jocelyn the Jester: \"Guess what, I have the thing that suit your request perfectly!\"" << endl;
                            cout << "You get Witch-hunt Bomb!" << endl;
                            
                            set_bomb();
                            
                            cout << "Jocelyn the Jester: \"Here you go, you daydreaming boy! This is the ancient bomb that used for witch-hunt in a long time ago. It might be old but I can guarantee the power it has.\"" << endl;
                            cout << "[0] Back to Town." << endl;
                            cin.ignore();
                            cin.get();

                            return;

                        case 2:
                            AP--;
                            cout << "Jocelyn the Jester: \"I am glad to see your eyes utterly unclouded! Ho--Ho--Ho--\"" << endl;
                            cout << "Jocelyn the Jester: \"Take this with you! This is the strongest shield in Elf's village.\"" << endl;
                            cout << "You get Elf Shield" << endl;
                            cout << "Jocelyn the Jester: \"I'm waiting for the par--ty!\"" << endl;
                            cout << "[0] Back to Town." << endl;
                            set_shield();
                            cin.ignore();
                            cin.get();

                            return;

                            case 0:
                                return;
                            
                            default:
                                return;
                    }
                }
                else if (getHidden() == 3 && isBomb()) {
                    cout << "Jocelyn the Jester: \"Welcome, welcome! Step right up and prepare to be amazed! Here at the Jester's Joke Emporium, we have everything you need to tickle your funny bone. What can I help you find today?\"" << endl;
                    cout << "[1] Give me something that can one-shot the evil sorcerer." << endl;
                    cout << "[2] I don't know if what I believe is true. But I won't be confused anymore." << endl;
                    cout << "[0] Back to Town." << endl;
                    
                    cin >> control;
                    switch(control) {
                        case 1:
                            cout << "You already get it!" << endl;
                            cout << "[0] Back to Town." << endl;
                            cin.ignore();
                            cin.get();

                            return;

                        case 2:
                            AP--;
                            cout << "Jocelyn the Jester: \"I am glad to see your eyes utterly unclouded! Ho--Ho--Ho--\"" << endl;
                            cout << "Jocelyn the Jester: \"Take this with you! This is the strongest shield in Elf's village.\"" << endl;
                            cout << "You get Elf Shield" << endl;
                            cout << "Jocelyn the Jester: \"I'm waiting for the par--ty!\"" << endl;
                            cout << "[0] Back to Town." << endl;
                            set_shield();
                            cin.ignore();
                            cin.get();

                            return;

                            case 0:
                                return;
                            
                            default:
                                return;
                    }
                }
                else if (getHidden() != 3 && !isBomb()) {
                    cout << "Jocelyn the Jester: \"Welcome, welcome! Step right up and prepare to be amazed! Here at the Jester's Joke Emporium, we have everything you need to tickle your funny bone. What can I help you find today?\"" << endl;
                    cout << "[1] Give me something that can one-shot the evil sorcerer." << endl;
                    cout << "[0] Back to Town." << endl;

                    cin >> control;
                    switch(control) {
                        case 1:
                            AP--;
                            cout << "Jocelyn the Jester: \"Ahah! An interesting request, maybe the most interesting joke I have heard these centuries." << endl;
                            cout << "Jocelyn the Jester: \"Guess what, I have the thing that suit your request perfectly!\"" << endl;
                            cout << "You get Witch-hunt Bomb!" << endl;
                            
                            set_bomb();
                            
                            cout << "Jocelyn the Jester: \"Here you go, you daydreaming boy! This is the ancient bomb that used for witch-hunt in a long time ago. It might be old but I can guarantee the power it has.\"" << endl;
                            cout << "[0] Back to Town." << endl;
                            cin.ignore();
                            cin.get();

                            return;

                        case 0:
                                return;

                            default:
                                return;
                    }
                }
                else if (getHidden() != 3 && isBomb()) {
                    cout << "Jocelyn the Jester: \"Welcome, welcome! Step right up and prepare to be amazed! Here at the Jester's Joke Emporium, we have everything you need to tickle your funny bone. What can I help you find today?\"" << endl;
                    cout << "[1] Give me something that can one-shot the evil sorcerer." << endl;
                    cout << "[0] Back to Town." << endl;
                    
                    cin >> control;
                    switch(control) {
                        case 1:
                            cout << "You already get it!" << endl;
                            cout << "[0] Back to Town." << endl;
                            cin.ignore();
                            cin.get();

                            return;

                        case 0:
                                return;

                        default:
                            return;
                }
            }
            }
            else if (isShield() && hiddenJester() && !isBomb()) {
                cout << "Jocelyn the Jester: \"Welcome, welcome! Step right up and prepare to be amazed! Here at the Jester's Joke Emporium, we have everything you need to tickle your funny bone. What can I help you find today?\"" << endl;
                cout << "[1] Give me something that can one-shot the evil sorcerer." << endl;
                cout << "[0] Back to Town." << endl;

                cin >> control;
                switch(control) {
                    case 1:
                        AP--;
                        cout << "Jocelyn the Jester: \"Ahah! An interesting request, maybe the most interesting joke I have heard these centuries." << endl;
                        cout << "Jocelyn the Jester: \"Guess what, I have the thing that suit your request perfectly!\"" << endl;
                        cout << "You get Witch-hunt Bomb!" << endl;
                        
                        set_bomb();
                        
                        cout << "Jocelyn the Jester: \"Here you go, you daydreaming boy! This is the ancient bomb that used for witch-hunt in a long time ago. It might be old but I can guarantee the power it has.\"" << endl;
                        cout << "[0] Back to Town." << endl;
                        cin.ignore();
                        cin.get();

                        return;

                    case 0:
                            return;

                        default:
                            return;
                }
            }
            else if (isShield() && isBomb()) {
                cout << "Jocelyn the Jester: \"I'm waiting for the par--ty!\"" << endl;
                cout << "Jocelyn the Jester: \"Ho--Ho--Ho--!\"" << endl;
                cout << "[0] Back to Town" << endl;
                cin >> control;

                return;
            }
        
        case 0:
            return;
        
        default:
            return;
    }
}

// A little bit different in the condition checking part, do not have hidden item in this shop.
void Game::talkQuill() {
    int control, hiddenCount = 0;

    cout << "The Quirky Quill: A homely wooden cabin with bookselves lining every surface of the wall." << endl;
    cout << "The Signboard reads: A Magical Quirky Place~" << endl;
    cout << "[1] Enter" << endl;
    cout << "[0] Back" << endl;

    cin >> control;
    switch(control) {
        case 1:
            // If hidden storyline haven't discover and haven't get normal item.
            if (!isHistory() && !isBook()) {
                while (AP > 0) {
                    do {
                        cout << "Wobblewand: \"Welcome to Quirky Quill, bringing the solution to all your magical dilemmas. How can I be of assistance to you?\"" << endl;
                        cout << "I have a sorcerer problem. Anything to fix it?"<< endl;
                        cout << "Wobblewand: \"Good news, we have several anti-sorcerer magic books that just came in. Any preferences? \"" << endl;
                        cout << "[1] Hand me one that can obilerate a 1000 sorcerers!"<<endl;
                        cout << "[2] Uhh sorry, random question. Why do you look like you were caught in a glitter explosion? " << endl;
                        cout << "[0] Back to Town" << endl;

                        cin >> control;
                        switch(control) {
                            case 1:
                                AP--;
                                cout << "Wobblewand: \"Oohh, someone had a bad day. I think I have just the right thing for you!\"" <<endl;

                                set_book();
                                
                                cout << "Wobblewand: \"Here you go!\" [Slam down a tome that probably weigh a ton]"<< endl;
                                cout << "Wobblewand: \"No worries, the books reads itself automatically.\"" << endl;
                                cout << "I wasn't worried about that but thanks...(sigh) " << endl;
                                cout << "[0] Back to Town." << endl;
                                cin.ignore();
                                cin.get();

                                return;

                            case 2:
                                AP--;
                                if(hiddenCount == 0) {
                                        cout << "Wobblewand: \"Well you young man should get use to seeing our kind covered in glittery soot all the time.\"";
                                        cout << "Its one of the many perks being a wizard " << endl;
                                        hiddenCount++;
                                        cout << "[0] Back" << endl;
                                        cin.ignore();
                                        cin.get();

                                        break;
                                    }
                                    else if (hiddenCount == 1) {
                                        cout << "Wobbleward: \"If you don't stop with the interviewing I'm going to turn you into a worm, you noisy little creature\"" << endl;
                                        hiddenCount++;
                                        cout << "[0] Back" << endl;
                                        cin.ignore();
                                        cin.get();

                                        break;
                                    }
                                    else if(hiddenCount == 2) {
                                        cout << "Wobblewand: \"Huh, stubborn one aren't you? Fine, you get to know my greatest secret.... I love glitter, happy?\"" << endl;
                                        hiddenCount++;
                                        cout << "[0] Back" << endl;
                                        cin.ignore();
                                        cin.get();

                                        break;
                                    }
                                    else if(hiddenCount == 3){
                                        cout << "Wobbleward: \"grumbles... kids these days don't know when to quit...\"" << endl;
                                        cout << "Wobbleward: \"I used to be a great magician, but everything changed fifty years ago.\"" << endl;
                                        cout << "Wobbleward: \"Nowadays, fairies in the air is no more active. That's why I can't use magic well anymore.\"" << endl;
                                        cout << "[1] Why the fairies become no more actice?" << endl;

                                        cin.ignore();
                                        cin.get();

                                        cout << "Wobbleward: \"That will be a longggggggg story, go and read it yourself\"" << endl;
                                        cout << "Wobbleward throw you a book [HISTORY OF KINGDOM CHICKIDON]" << endl;

                                        cout << "Chickidion flourished to its golden era under the ruling king,"; 
                                        cout << "King Hendrick Forgetmenot the IV." << endl;
                                        cout << "During his reign, magic became more accessible to all citizens of Chickidon.";
                                        cout << "He opened country for the trade for magical items and manuscripts"; 
                                        cout << "He also established various magic based systems to govern the country"; 
                                        cout <<  "and thus improving the lives of the citizens.";
                                        cout << "The country was at its peak in the advancement of magic." << endl;
                                            
                                        cout << "But this era came to an end after mysterious disappearance of the King.";
                                        cout << "News spread like wildfire throughout the countryside, leaving people distraught";
                                        cout << "Chickidon Kingdom was thrown into chaos. The citizen of Chickidon Kingdom feared for";
                                        cout << "the worst - that their beloved King was dead and their kingdom left without a ruler";
                                        cout << "Admist the panic, one man step up and announced his rights to the throne"; 
                                        cout << "as he claimed to be the illegimate son of the late King.";
                                        cout << "This man is the current ruling King of Chickidon: Lord Muffinpants the XVI " << endl;
                                        
                                        set_history();
                                        setHidden();

                                        cout << "[0] Back" << endl;
                                        cin.get();
                                    }
                                    return;

                                case 0:
                                    return;
                                
                                default:
                                    return;
                        }
                    }while (control == 2 && AP > 0);
                }
            }
            // If hidden storyline haven't discover but already get normal item.
            else if (!isHistory() && isBook()) {
                while (AP > 0) {
                    do {
                        cout << "Wobblewand: \"Welcome to Quirky Quill, bringing the solution to all your magical dilemmas. How can I be of assistance to you?\"" << endl;
                        cout << "I have a sorcerer problem. Anything to fix it?"<< endl;
                        cout << "Wobblewand: \"Good news, we have several anti-sorcerer magic books that just came in. Any preferences? \"" << endl;
                        cout << "[1] Hand me one that can obilerate a 1000 sorcerers!"<<endl;
                        cout << "[2] Uhh sorry, random question. Why do you look like you were caught in a glitter explosion? " << endl;
                        cout << "[0] Back to Town" << endl;

                        cin >> control;
                        switch(control) {
                            case 1:
                                cout << "You already got it!" <<endl;
                                cout << "[0] Back to Town." << endl;
                                cin.ignore();
                                cin.get();

                                return;

                            case 2:
                                AP--;
                                if(hiddenCount == 0) {
                                        cout << "Wobblewand: \"Well you young man should get use to seeing our kind covered in glittery soot all the time.\"";
                                        cout << "Its one of the many perks being a wizard " << endl;
                                        hiddenCount++;
                                        cout << "[0] Back" << endl;
                                        cin.ignore();
                                        cin.get();

                                        break;
                                    }
                                    else if (hiddenCount == 1) {
                                        cout << "Wobbleward: \"If you don't stop with the interviewing I'm going to turn you into a worm, you noisy little creature\"" << endl;
                                        hiddenCount++;
                                        cout << "[0] Back" << endl;
                                        cin.ignore();
                                        cin.get();

                                        break;
                                    }
                                    else if(hiddenCount == 2) {
                                        cout << "Wobblewand: \"Huh, stubborn one aren't you? Fine, you get to know my greatest secret.... I love glitter, happy?\"" << endl;
                                        hiddenCount++;
                                        cout << "[0] Back" << endl;
                                        cin.ignore();
                                        cin.get();

                                        break;
                                    }
                                    else if(hiddenCount == 3){
                                        cout << "Wobbleward: \"grumbles... kids these days don't know when to quit...\"" << endl;
                                        cout << "Wobbleward: \"I used to be a great magician, but everything changed fifty years ago.\"" << endl;
                                        cout << "Wobbleward: \"Nowadays, fairies in the air is no more active. That's why I can't use magic well anymore.\"" << endl;
                                        cout << "[1] Why the fairies become no more actice?" << endl;

                                        cin.ignore();
                                        cin.get();

                                        cout << "Wobbleward: \"That will be a longggggggg story, go and read it yourself\"" << endl;
                                        cout << "Wobbleward throw you a book [HISTORY OF KINGDOM CHICKIDON]" << endl;

                                        cout << "Chickidion flourished to its golden era under the ruling king, "; 
                                        cout << "King Hendrick Forgetmenot the IV." << endl;
                                        cout << "During his reign, magic became more accessible to all citizens of Chickidon." << endl;
                                        cout << "He opened country for the trade for magical items and manuscripts." << endl; 
                                        cout << "He also established various magic based systems to govern the country." << endl; 
                                        cout <<  "And thus improving the lives of the citizens." << endl;
                                        cout << "The country was at its peak in the advancement of magic." << endl;
                                            
                                        cout << "But this era came to an end after mysterious disappearance of the King." << endl;
                                        cout << "News spread like wildfire throughout the countryside, leaving people distraught." << endl;
                                        cout << "Chickidon Kingdom was thrown into chaos. The citizen of Chickidon Kingdom feared for ";
                                        cout << "the worst - that their beloved King was dead and their kingdom left without a ruler." << endl;
                                        cout << "Admist the panic, one man step up and announced his rights to the throne, "; 
                                        cout << "as he claimed to be the illegimate son of the late King." << endl;
                                        cout << "This man is the current ruling King of Chickidon: Lord Muffinpants the XVI." << endl;
                                        
                                        set_history();
                                        setHidden();

                                        cout << "[0] Back" << endl;
                                        cin.get();
                                    }
                                    return;

                                case 0:
                                    return;
                                
                                default:
                                    return;
                        }
                    }while (control == 2 && AP > 0);
                }
            }
            // If hidden storyline is discovered but haven't get normal item.
            else if (isHistory() && !isBook()) {
                cout << "Wobblewand: \"Welcome to Quirky Quill, bringing the solution to all your magical dilemmas. How can I be of assistance to you?\"" << endl;
                cout << "I have a sorcerer problem. Anything to fix it?"<< endl;
                cout << "Wobblewand: \"Good news, we have several anti-sorcerer magic books that just came in. Any preferences? \"" << endl;
                cout << "[1] Hand me one that can obilerate a 1000 sorcerers!"<<endl;
                cout << "[0] Back to Town" << endl;

                cin >> control;
                switch(control) {
                    case 1:
                        AP--;
                        cout << "Wobblewand: \"Oohh, someone had a bad day. I think I have just the right thing for you!\"" <<endl;

                        set_book();
                        
                        cout << "Wobblewand: \"Here you go!\" [Slam down a tome that probably weigh a ton]"<< endl;
                        cout << "Wobblewand: \"No worries, the books reads itself automatically.\"" << endl;
                        cout << "I wasn't worried about that but thanks...(sigh) " << endl;
                        cout << "[0] Back to Town." << endl;
                        cin.ignore();
                        cin.get();

                        return;

                    case 0:
                        return;
                    
                    default:
                        return;
                }
            }
            // If hidden storyline discovered and get normal item.
            else if (isHistory() && isBook()) {
                cout << "Wobblewand: \"Welcome to Quirky Quill, but there is nothing you can get from me.\"" << endl;
                cout << "[0] Back to Town" << endl;

                cin >> control;

                return;
            }

        case 0:
            return;
        
        default:
            return;
    }
}

// When choose to go adventure in the day.
void Game::adventure() {
    // Display some message.
    cout << "You go to the guild and get some missions to do." << endl;
    // Show how many coins get. 90000 per AP.
    cout << "Coin: +" << AP*100000 << endl;
    // updater the info in linked list.
    set_coin(AP*100000);
    // Cost all reamining AP.
    AP -= AP;

    return;
}

// End Phase of the game.
void Game::embark() {
    int control, count = 0;

    cout << "As you venture taller into the Magic Tower, the darkness becomes more oppressive, and the air grows colder." << endl;
    cout << "You navigate through narrow corridors, stepping cautiously to avoid triggering any hidden traps. The flickering torchlight casts eerie shadows on the damp stone walls, heightening the sense of foreboding." << endl << endl;

    cin.ignore();

    cout << "The corridor opens up into a vast chamber. The room is adorned with mystical artifacts and shelves filled with spellbooks. At the far end of the chamber, seated on a grand throne, it's him, the wicked sorcerer." << endl;

    cin.ignore();

    cout << "Evil Sorcerer: \"Oh, Sir Noodlebrain. Finally you're here. I am about to cook your Princess Featherbottom for my dinner.\"" << endl;
    cout << "Evil Sorcerer: \"So... Do you bring along the coins? Or you are here to surrender? Ha---Ha---Ha---Ha---\"" << endl;
    
    // continuosly printing out the menu unless reached an ending. 
    do {
        // Check if the player fulfilled the requirement.
        if (isSlayer()) {// get normal item from smith
            cout << "[1] Use Sorcerer Slayer" << endl;
        }
        else {
            cout << "[1] ?????" << endl;
        }
        if (isBomb()) {// get normal item from jester
            cout << "[2] Use Witch-hunt Bomb" << endl;
        }
        else {
            cout << "[2] ?????" << endl;
        }
        if (isBook()) {// get normal item from quill
            cout << "[3] Use Anti-sorcerer Magic Book" << endl;
        }
        else {
            cout << "[3] ?????" << endl;
        }
        if (isCoin() >= 1000000) {// get enough money
            cout << "[4] Pay him the money" << endl;
        }
        else {
            cout << "[4] ?????" << endl;
        }
        if (isGreatSword() && isShield()) {// get all hidden items.
            cout << "[5] Battle!" << endl;
        }
        else {
            cout << "[5] ?????" << endl;
        }
        cout << "[0] Eat Princess Featherbottom together" << endl;

        cin >> control;
        switch(control) {
            case 1:
                if (!isSlayer()) { // can't get into the choice if no fulfill the requirement.
                    cout << "You are not ready for this choice!" << endl;
                    // won't get out of the loop accidentaly.
                    control = -1;
                    break;
                }
                else {
                    if (count < 3) {
                        cout << "Evil Sorcerer: \"Ah, Sir Noodlebrain, did you really think defeating me would be that easy?\"" << endl;
                        count++;
                        break;
                    }
                    else if (count >= 3 && count < 6) {
                        cout << "Evil Sorcerer: \"*YAWN* You are making me sleepy.\"" << endl;
                        count++;
                        break;
                    }
                    else if (count >= 6) {
                        cout << "Evil Sorcerer: \"Just press 0 and give up! You can never beat me with that!\"" << endl;
                        count++;
                        break;
                    }
                }
            case 2:
                if (!isBomb()) {
                    cout << "You are not ready for this choice!" << endl;
                    control = -1;
                    break;
                }
                else {
                    if (count < 3) {
                        cout << "Evil Sorcerer: \"Ah, Sir Noodlebrain, did you really think defeating me would be that easy?\"" << endl;
                        count++;
                        break;
                    }
                    else if (count >= 3 && count < 6) {
                        cout << "Evil Sorcerer: \"*YAWN* You are making me sleepy.\"" << endl;
                        count++;
                        break;
                    }
                    else if (count >= 6) {
                        cout << "Evil Sorcerer: \"Just press 0 and give up! You can never beat me with that!\"" << endl;
                        count++;
                        break;
                    }
                }
            case 3:
                if (!isBook()) {
                    cout << "You are not ready for this choice!" << endl;
                    control = -1;
                    break;
                }
                else {
                    if (count < 3) {
                        cout << "Evil Sorcerer: \"Ah, Sir Noodlebrain, did you really think defeating me would be that easy?\"" << endl;
                        count++;
                        break;
                    }
                    else if (count >= 3 && count < 6) {
                        cout << "Evil Sorcerer: \"*YAWN* You are making me sleepy.\"" << endl;
                        count++;
                        break;
                    }
                    else if (count >= 6) {
                        cout << "Evil Sorcerer: \"Just press 0 and give up! You can never beat me with that!\"" << endl;
                        count++;
                        break;
                    }
                }
                break;

            case 4:
                if (!isCoin() > 1000000) {
                    cout << "You are not ready for this choice!" << endl;
                    control = -1;
                    break;
                }
                whatEnd();
                return;

            case 5:
                if (!isGreatSword() && !isShield()) {
                    cout << "You are not ready for this choice!" << endl;
                    control = -1;
                    break;
                }
                Hidden();
                return;
            
            case 0:
                badEnd();
                return;
            
            default:
                break;
        }
    }while (control != 0 || control != 4 || control != 5);
}

void Game::badEnd() {
    cout << "Evil Sorcerer: \"Huh, so you choosed this? Okay, I shouldn't have any expectation on you.\"" << endl;

    cin.get();
    cin.ignore();

    cout << "With a wave of his hand, The evil sorcerer conjures a lavish banquet table, adorned with all sorts of delectable dishes." << endl;
    cout << "The aroma of roasted chicken fills the chamber as a platter of Princess Featherbottom's favorite dish materializes before them." << endl;
    cout << "Sir Noodlebrain and evil sorcerer share a laugh as they indulge in a meal together, setting aside their differences, if only for a moment. " << endl;
    cout << "They regale each other with tales of their peculiar adventures and discover a surprising camaraderie through their shared love for unconventional pursuits." << endl;
    cout << "But what will happen to Sir Noodlebrain when he went back to the kingdom?" << endl;
    cout << "Well, that is a story for another time. What we can confirmed is, this most likely will be the last dinner of Sir Noodlebrain." << endl;
    
    cin.get();

    cout << "....................................................................." << endl;
    cout << "BAD END" << endl;
    cout << "Dereliction of a Knight" << endl;

    cin.get();

    // Ask if player wish to repeat the game.
    repeat();
}

void Game::Hidden() {
    // Hidden storyline.
    int control;
    cout << "Sir Noodlebrain: \"Harghhh!\"" << endl;
    
    cin.get();
    cin.ignore();

    cout << "With your slash, evil sorcerer's hat has been knocked off." << endl;

    cin.get();

    cout << "Sir Noodlebrain: \"!!!\"" << endl;
    
    cin.get();
    
    cout << "Evil sorcerer had hide his face by magic as fast as lightning but you still saw it." << endl;
    
    cin.get();
    
    cout << "Accidentally revealing his original appearance made him shake." << endl;
    cout << "As a well-trained knight, you will never miss out this great opportunity, but you feel a bit weird with his looks" << endl;
    cout << "[1] This is the last!" << endl;
    if (isHistory()) {// If all hidden storyline in shops are discovered
        cout << "[2] ...I remember that face!" << endl;
    }
    else {
        cout << "[2] ?????" << endl;
    }

    cin >> control;
    switch(control) {
        case 1:
            normalEnd();
            break;
        
        case 2:
            trueEnd();
            break;
        
        default:
            break;
    }
}

void Game::normalEnd() {
    cout << "You landed the final blow and killed the evil sorcerer." << endl;
    cout << "A black hole suddenly opened in the air, and Princess Featherbottom fell out from it." << endl;
    cout << "You picked up the princess and get ready to return." << endl;
    cout << "But when you reach the gate, you stop involuntarily and turn to look behind." << endl;
    cout << "A sense of sadness sets in, and you feel like you've lost something important." << endl;
    cout << "Tears pour out from your eyes uncontrollably" << endl;
    cout << "However, you couldn't find the source of your sadness, so you set off on your way back, one person and one chicken." << endl;


    cin.get();
    cin.ignore();

    cout << "....................................................................." << endl;
    cout << "NORMAL END" << endl;
    cout << "Princess is back but the kingdom remains lifeless." << endl;
    cout << "Sir Noodlebrain wonder if he was doing the right thing and quits the knight." << endl;
    
    cin.get();
    
    // Ask if player wish to repeat the game.
    repeat();
}

void Game::trueEnd() {
    cout << "Sir Noodlebrain: \"I remember your name... I should remember your name! But why I can't find it in my memory?!\"" << endl;
    cout << "You started to search his face in your deepest memories, but you can't find it anywhere. And the deeper you went, you felt your head is going to split." << endl;
    cout << "Sir Noodlebrain: \"Please, let me look at your face one more time! Fast!\"" << endl;
    cout << "Evil Sorcerer: \"Huh... I didn't expect that there is still knight that could recognize my face...\"" << endl;
    cout << "Evil Sorcerer: \"...Maybe I should trust you, Sir Noodlebrain.\"" << endl;
    cout << "So saying, he took off his magic mask" << endl;
    cout << "Sir Noodlebrain: \"!!!!\"" << endl;
    cout << "Sir Noodlebrain: \"I remembered it! It's you! King Hendrick Forgetmenot! The previous king of Kingdom Chickidon!\"" << endl;
    cout << "Sir Noodlebrain: \"But you should've disappeared in 50 years ago. And why I couldn't remember you face at first sight? What is happening!\"" << endl;
    cout << "King Forgetmenot: \"Calm down, my people. After 50 years, you are the first person that could recognise me.\"" << endl;
    cout << "King Forgetmenot: \"Muffinpants had manipulated everyone's memory and chased me out of the kingdom by my soldiers.\"" << endl;
    cout << "King Forgetmenot: \"I can't bear to hurt my people, so I can only wait for the opportunity.\"" << endl;
    cout << "King Forgetmenot: \"And I think its the time now. The curse of memory has been weakened.\"" << endl;
    cout << "King Forgetmenot: \"My knight, do you have the courage to take back the kingdom with me?\"" << endl;
    cout << "[1] Yes, my majesty! I have but one life to give for kingdom. I must make it count." << endl;

    cin.get();
    cin.ignore();

    cout << "....................................................................." << endl;
    cout << "TRUE END" << endl;
    cout << "With the help of the bravest knight in kingdom, Sir Noodlebrain, King Cluckius had managed to get back to the Kingdom Chichkidon." << endl;
    cout << "Everyone started to recall back their memory about King Cluckius." << endl;
    cout << "United people chased out Muffinpants from the kingdom and King Cluckius has make the kingdom glory again" << endl;

    cin.get();

    // Ask if player wish to repeat the game.
    repeat();
}

void Game::whatEnd() {
    cout << "Sir Noodlebrain: \"WAIT!!! I have get enough 1 million gold coins, please release Princess Featherbottom!\"" << endl;
    cout << "Evil Sorcerer: \"Ha! Finally you want to have a fight......\"" << endl;
    cout << "Evil Sorcerer: \"WAIT, WHAT YOU JUST SAID?????\"" << endl;
    cout << "Sir Noodlebrain: \"I say, I bring 1 million gold coins. So you shall release Princess Featherbottom now!\"" << endl;
    cout << "Evil Sorcerer: \"You shame of knight! You just let me succeed so easy?\"" << endl;

    cin.get();
    cin.ignore();
    
    cout << "....................................................................." << endl;
    cout << "??? END" << endl;
    cout << "After scolding Sir Noodlebrain for a few hours, the evil sorcerer finally felt tired and released Princess Featherbottom" << endl;
    cout << "Thus, Sir Noodlebrain saved Princess Featherbottom and live happily ever after. (?)" << endl;

    cin.get();

    // Ask if player wish to repeat the game.
    repeat();
}

void Game::repeat() {
    int control;

    // Ask if player wish to repeat the game.
    cout << "Do you want to play the second round?" << endl;
    cout << "[1] Go next round" << endl;
    cout << "[0] Quit" << endl;

    cin >> control;
    switch(control) {
        case 1:
            // Restart the game.
            initializeLinkedList();
            chapter1();
            break;
        
        case 0:
            // Exit the game.
            return;
        
        default:
            break;
    }
}

#endif