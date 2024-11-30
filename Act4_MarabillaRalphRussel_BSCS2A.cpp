#include <iostream>
#include <string>

using namespace std;
/*
ACTIVITY #4
Create a Binary Search program in C++.
Your activity for today is to create a Java or 
C++ Merge Sort algorithm. Merge Sort is a classic and 
efficient divide-and-conquer algorithm used for sorting an
array or list.
*/

#define nl '\n'

const int numstoragesize = 99;
int numberstorage [numstoragesize];

int Nint;


//merge sort
int msmedian, msfarr, mssarr;

void divide(int msmedian);
void carrleft();
void carrright();
void merge();
void msort();

int main (){
    int Iint;
    
    cout << "---- MERGE SORT ----" << nl;

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

    //Sort the values in ascending order 
    //Merge Sort
    divide (msmedian);

    return 0;
}

void divide (int msmedian){

    msmedian = (Nint/2) + 1;
    cout << "Median: " << msmedian;
}

void carrleft (){
    
    
    
}