#include <iostream>
#include <string>

//Activity #1 - 10/08/24
/*Write a C++ program that:  
-Accepts 5 digits from the user  
-Sorts the array using any sorting algorithm 
of your choice (e.g., bubble sort, selection sort, etc.).*/

using namespace std;

const int nums = 5;

int numberstorage [nums];

//macros
#define nl '\n'

//functions

void sorting ();


int main (){

    int n1, n2, n3, n4, n5;

    
    cout << "Enter 5 digits to sort" << nl << nl;

    
    cout << "First Number: ";
    cin >> n1;
    
    cout << "Second Number: ";
    cin >> n2;
    
    cout << "Third Number: ";
    cin >> n3;
   
    cout << "Fourth Number: ";
    cin >> n4;
   
    cout << "Fifth Number: ";
    cin >> n5;
    
    

    cout << nl;
    cout << nl;

    numberstorage[0] = n1;
    numberstorage[1] = n2;
    numberstorage[2] = n3;
    numberstorage[3] = n4;
    numberstorage[4] = n5;

    //Sorting Algorithm: Bubble Sort
    sorting ();
    
    return 0;
}

void sorting (){

    int stemp = 0;

    for (int fs = 0; fs < nums - 1; fs++){
        for (int ss = 0; ss < nums - 1 - fs; ss++){
            if (numberstorage[ss] > numberstorage[ss + 1]){
                stemp = numberstorage[ss];
                numberstorage[ss] = numberstorage[ss + 1];
                numberstorage[ss + 1] = stemp; 
            }
        }
        
    }

    cout << nl << "Sorted Numbers: " << nl << nl;
        for(int ds = 0; ds < nums; ds++){
            cout << ds + 1 << ": " << numberstorage[ds] << nl;
        }
}

