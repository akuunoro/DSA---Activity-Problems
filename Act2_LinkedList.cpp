#include <iostream>

//Activity #2 - 10/08/24

using namespace std;

struct snode
{
    string letter;
    snode* next; //acts like an address sa linked list
};

snode* pnext;
snode* llconnector;
snode* llhead;

char hl;

void nextnode (char hl);
void printll (snode* llhead);

int main(){

    pnext = new snode;
    pnext -> letter = 'H';
    llconnector = pnext;
    llhead = pnext;

    nextnode ('e');
    llconnector = llconnector ->next;
    nextnode ('l');
    llconnector = llconnector ->next;
    nextnode ('l');
    llconnector = llconnector ->next;
    nextnode ('o');
    llconnector = llconnector ->next;
    nextnode (',');
    llconnector = llconnector ->next;
    nextnode (' ');
    llconnector = llconnector ->next;
    nextnode ('W');
    llconnector = llconnector ->next;
    nextnode ('o');
    llconnector = llconnector ->next;
    nextnode ('r');
    llconnector = llconnector ->next;
    nextnode ('l');
    llconnector = llconnector ->next;
    nextnode ('d');
    llconnector = llconnector ->next;
    nextnode ('!');
    pnext ->next = NULL;

    printll(llhead);

    return 0;
}

void nextnode (char hl){
    pnext = new snode;
    pnext ->letter = hl;
    llconnector ->next = pnext;
    
}

void printll (snode* llhead){
    llconnector = llhead;
    while (llconnector != NULL){
        cout << llconnector ->letter;
        llconnector = llconnector ->next;
    }
}