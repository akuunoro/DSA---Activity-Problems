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
    cin.ignore();

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

    int s1, s2, s3, s4, s5;
    int stemp = 0;

    s1 = numberstorage[0]; 
    s2 = numberstorage[1];
    s3 = numberstorage[2];
    s4 = numberstorage[3];
    s5 = numberstorage[4];
    

    for (int fs = 0; fs < 5; fs++){

        if (s2 < s1){
            stemp = s1;
            s1 = s2; 
            s2 = stemp; 
        }

        stemp = 0;

        if (s3 < s2){
                stemp = s2;
                s2 = s3; 
                s3 = stemp;
        }

        stemp = 0;

        if (s4 < s3){
                stemp = s3;
                s3 = s4; 
                s4 = stemp;
        }

        stemp = 0;

        if (s5 < s4){
                stemp = s4;
                s4 = s5; 
                s5 = stemp;
        }

        stemp = 0;
    }

    cout << "Sorted Numbers" << nl << nl;
    cout << "First Number: " << s1 << nl;
    cout << "Second Number: " << s2 << nl;
    cout << "Third Number: " << s3 << nl;
    cout << "Fourth Number: " << s4 << nl;
    cout << "Fifth Number: " << s5 << nl;

}