#include <iostream>
#include <string>

using namespace std;
/*
ACTIVITY #3
Create a Binary Search program in C++.
Make sure to implement the following:
- Accept an array of integers.
- Perform a binary search to find a specified value.
- Output the result clearly.
*/

#define nl '\n'

const int numstoragesize = 99;
int numberstorage [numstoragesize];

int Nint, Svalue;

void sorting();
void search();

int main (){
    int Iint;

    cout << "---- BINARY SEARCH ----" << nl;

    cout << "How many integers do you want to input?: ";
    cin >> Nint;

    for (int i = 0; i < Nint; i++){
        Iint = 0;
        cout << "Integer " << i + 1 << ": ";
        cin >> Iint;

        numberstorage [i] = Iint;
    }

    cout << nl << nl;

    cout << "Inputted Integers" << nl;
    for (int i = 0; i < Nint; i++){
        cout << nl << "Integer " << i + 1 << ": " << numberstorage [i] << nl;
    }

    //Sort the values in ascending order and do binary search
    //Bubble Sort
    sorting();

    //Binary Search
    cout << nl << nl;
    cout << "What VALUE you want to search?: ";
    cin >> Svalue;

    search ();




    return 0;
}

void sorting (){

    int stemp = 0;

    for (int fs = 0; fs < Nint - 1; fs++){
        for (int ss = 0; ss < (Nint - 1) - fs; ss++){
            if (numberstorage[ss] > numberstorage[ss + 1]){
                stemp = numberstorage[ss];
                numberstorage[ss] = numberstorage[ss + 1];
                numberstorage[ss + 1] = stemp; 
            }
        }
        
    }
}

void search() {
    int lh = 0, rh = Nint - 1; 
    while (lh <= rh) {
        int p = lh + (rh - lh) / 2; 

        if (numberstorage[p] == Svalue) {
            cout << "Value: " << numberstorage[p] << nl;
            cout << "Index: " << p << nl;
            return; 
        } else if (numberstorage[p] < Svalue) {
            lh = p + 1; 
        } else {
            rh = p - 1; 
        }
    }
    
    cout << "Value doesn't exist in the array" << nl;
}
