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

const int intstoragesize = 99;
int intstorage [intstoragesize];

int main (){
    int Nint, Iint;

    cout << "---- BINARY SEARCH ----" << nl;

    cout << "How many integers do you want to input?: ";
    cin >> Nint;

    for (int i = 0; i < Nint; i++){
        Iint = 0;
        cout << "Integer " << i + 1 << ": ";
        cin >> Iint;

        intstorage [i] = Iint;
        cout << nl << nl;
    }

    for (int i = 0; i < Nint; i++){
        cout << nl << "Integer " << i + 1 << ": " << intstorage [i] << nl;
    }

    
    

    
    





    return 0;
}