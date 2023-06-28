#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
using namespace std;
class IntList{
    private:
        struct ListNode{
            int value;
            struct ListNode *next;
        };
        struct ListNode *head;

    public:
        IntList();
        ~IntList();
        
        void displaylist();
        void appendNode(int);
        // return the value of health (Node 1)
        int getHealth(){return head->value;}
        
        void clearLinkedList(){
        ListNode *curNode,*nextNode = nullptr;
        curNode = head;
        while(curNode!=nullptr){
            nextNode = curNode->next;
            delete curNode;
            curNode = nextNode;
        }
        }

        void initializeLinkedList(){
        ListNode *curNode = nullptr;
        head->value = 100;
        curNode = head->next;
        while(curNode!=nullptr){
            if (curNode->next != nullptr) {
                curNode->value 
                = 0;
            }
            else {
                curNode->value = 1;
            }
            curNode = curNode->next;
        }
        }
        
        //check if player has talked with sword smith(Node 2)
        int isTalked_swordsmith(){
            ListNode *nodePtr=head;
            for(int i=0;i<1;i++){
                nodePtr = nodePtr->next;
            }
            return nodePtr->value;
        }
        //set value to 1, which indicates player has talked to sword smith(Node 2)
        void set_swordsmith(){
            ListNode *nodePtr=head;
            for(int i=0;i<1;i++){
                nodePtr = nodePtr->next;
            }
            nodePtr->value += 1;
        }
        
        //check if player has talked with jester(Node 3)
        int isTalked_jester(){
            ListNode *nodePtr=head;
            for(int i=0;i<2;i++){
                nodePtr = nodePtr->next;
            }
            return nodePtr->value;
        }
        //set value to 1, which indicates player has talked to jester(Node 3)
        void set_jester(){
            ListNode *nodePtr=head;
            for(int i=0;i<2;i++){
                nodePtr = nodePtr->next;
            }
            nodePtr->value += 1;
        }
        
         //check if player has talked with quill(Node 4)
        int isTalked_quirky(){
            ListNode *nodePtr=head;
            for(int i=0;i<3;i++){
                nodePtr = nodePtr->next;
            }
            return nodePtr->value;
        }
        //set value to 1, which indicates player has talked to quill(Node 4)
        void set_quirky(){
            ListNode *nodePtr=head;
            for(int i=0;i<3;i++){
                nodePtr = nodePtr->next;
            }
            nodePtr->value += 1;
        }
        
        //check if player has get the normal item from smith(Node 5)
        int isSlayer(){
            ListNode *nodePtr=head;
            for(int i=0;i<4;i++){
                nodePtr = nodePtr->next;
            }
            return nodePtr->value;
        }
        //set value to 1, which indicates player has get the normal item from smith(Node 5)
        void set_slayer(){
            ListNode *nodePtr=head;
            for(int i=0;i<4;i++){
                nodePtr = nodePtr->next;
            }
            nodePtr->value += 1;
        }
        
        //return the value of coins the player has.(Node 6)
        int isCoin(){
            ListNode *nodePtr=head;
            for(int i=0;i<5;i++){
                nodePtr = nodePtr->next;
            }
            return nodePtr->value;
        }
        //update the number of coins the player has.(Node 6)
        void set_coin(int num){
            ListNode *nodePtr=head;
            for(int i=0;i<5;i++){
                nodePtr = nodePtr->next;
            }
            nodePtr->value += num;
        }
        
        //check if hidden storyline in smith is discovered(Node 7)
        int hiddenSmith(){
            ListNode *nodePtr=head;
            for(int i=0;i<6;i++){
                nodePtr = nodePtr->next;
            }
            return nodePtr->value;
        }
        //set value to 1, which indicates hidden storyline in smith is discovered(Node 7)
        void sethiddenSmith(){
            ListNode *nodePtr=head;
            for(int i=0;i<6;i++){
                nodePtr = nodePtr->next;
            }
            nodePtr->value += 1;
        }

        //check if the hidden item in smith is taken.(Node 8)
        int isGreatSword(){
            ListNode *nodePtr=head;
            for(int i=0;i<7;i++){
                nodePtr = nodePtr->next;
            }
            return nodePtr->value;
        }
        //set value to 1, which indicates hidden item in smith is taken.(Node 8)
        void set_sword(){
            ListNode *nodePtr=head;
            for(int i=0;i<7;i++){
                nodePtr = nodePtr->next;
            }
            nodePtr->value += 1;
        }   
        
        //check if hidden storyline in jester is discovered(Node 9)
        int hiddenJester(){
            ListNode *nodePtr=head;
            for(int i=0;i<8;i++){
                nodePtr = nodePtr->next;
            }
            return nodePtr->value;
        }
        //set value to 1, which indicates hidden storyline in jester is discovered(Node 9)
        void set_hidden_Jester(){
            ListNode *nodePtr=head;
            for(int i=0;i<8;i++){
                nodePtr = nodePtr->next;
            }
            nodePtr->value += 1;
        }

        //check if the hidden item in jester is taken.(Node 10)
        int isShield(){
            ListNode *nodePtr=head;
            for(int i=0;i<9;i++){
                nodePtr = nodePtr->next;
            }
            return nodePtr->value;
        }
        //set value to 1, which indicates hidden item in jester is taken.(Node 10)
        void set_shield(){
            ListNode *nodePtr=head;
            for(int i=0;i<9;i++){
                nodePtr = nodePtr->next;
            }
            nodePtr->value += 1;
        }
        
        //check if player has get the normal item from jester(Node 11)
        int isBomb(){
            ListNode *nodePtr=head;
            for(int i=0;i<10;i++){
                nodePtr = nodePtr->next;
            }
            return nodePtr->value;
        }
        //set value to 1, which indicates player has get the normal item from jester(Node 11)
        void set_bomb(){
            ListNode *nodePtr=head;
            for(int i=0;i<10;i++){
                nodePtr = nodePtr->next;
            }
            nodePtr->value += 1;
        }

        //check if player has get the normal item from quill(Node 12)
        int isBook(){
            ListNode *nodePtr=head;
            for(int i=0;i<11;i++){
                nodePtr = nodePtr->next;
            }
            return nodePtr->value;
        }
        //set value to 1, which indicates player has get the normal item from quill(Node 12)
        void set_book(){
            ListNode *nodePtr=head;
            for(int i=0;i<11;i++){
                nodePtr = nodePtr->next;
            }
            nodePtr->value += 1;
        }

        //check if hidden storyline in quill is discovered(Node 13)
        int isHistory() {
            ListNode *nodePtr=head;
            for(int i=0;i<12;i++){
                nodePtr = nodePtr->next;
            }
            return nodePtr->value;
        }
         //set value to 1, which indicates hidden storyline in quill is discovered(Node 13)
        void set_history() {
            ListNode *nodePtr=head;
            for(int i=0;i<12;i++){
                nodePtr = nodePtr->next;
            }
            nodePtr->value += 1;
        }

        //plus 1 to the number of hidden storylines that player has discovered. (Node 14)
        void setHidden() {
            ListNode *nodePtr=head;
            for(int i=0;i<13;i++){
                nodePtr = nodePtr->next;
            }
            nodePtr->value += 1;
        }
        //return the number of hidden storylines that player has discovered. (Node 14)
        int getHidden() {
            ListNode *nodePtr=head;
            for(int i=0;i<13;i++){
                nodePtr = nodePtr->next;
            }
            return nodePtr->value;
        }

        //update the number of days in linked list. (Node 15)
        void setDay(int num) {
            ListNode *nodePtr=head;
            for(int i=0;i<14;i++){
                nodePtr = nodePtr->next;
            }
            nodePtr->value = num;
        }
        //return the number of days have passed. (Node 15)
        int getDay() {
            ListNode *nodePtr=head;
            for(int i=0;i<14;i++){
                nodePtr = nodePtr->next;
            }
            return nodePtr->value;
        }

        //Check if the linked list is empty.
        bool isEmpty(){
            if(head->next == NULL){
                return 1;
            }
            else return 0;
        }
};

//Initialize pointer in constructor.
IntList::IntList(){
    head = nullptr;
}

//Delete all dynamically allocated node in destructor.
IntList::~IntList(){
    ListNode *curNode,*nextNode = nullptr;
    curNode = head;
    while(curNode!=nullptr){
        nextNode = curNode->next;
        delete curNode;
        curNode = nextNode;
    }

    head = nullptr;
}

void IntList::displaylist(){
    ListNode *curNode = nullptr;

    curNode = head;
    while(curNode){
        cout<<curNode->value<<endl;
        curNode = curNode->next;
    }

}

void IntList::appendNode(int num){
    ListNode *curNode,*newNode = nullptr;

    newNode = new ListNode;
    newNode->value = num;
    newNode->next = nullptr;

    curNode = head;
    if(!curNode){
        head = newNode;
    }
    else{
        //find last node in list
        while(curNode->next){
            curNode = curNode->next;
        }
        curNode->next = newNode;
    }
}

#endif
