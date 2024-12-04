#include <iostream>
#include <string>

using namespace std;
/*
ACTIVITY #4..
Your activity for today is to create a
C++ Merge Sort algorithm. Merge Sort is a classic and 
efficient divide-and-conquer algorithm used for sorting an
array or list.
*/

#define nl '\n'

const int numstoragesize = 99;
int numberstorage [numstoragesize];

int Nint;


//merge sort
void divandsort(int arr[], int lblock, int rblock);
void merge(int arr[], int lblock, int median, int rblock);
void showArr(int arr[]);

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

    cout << nl << "Inputted Integers" << nl;
    showArr(numberstorage);

    //Sort the values in ascending order 
    //Merge Sort
    divandsort(numberstorage, 0, Nint - 1);

    cout << nl << "Sorted Integers" << nl;
    showArr(numberstorage);

    return 0;
}

void showArr(int arr[])
{
    for (int i = 0; i < Nint; i++)
    {
        cout << "Integer " << i + 1 << ": " << arr[i] << nl;
    }
}

//divide then sort the array
void divandsort(int arr[], int lblock, int rblock)
{
    if (lblock < rblock)
    {
        int median = lblock + (rblock - lblock) / 2;

        divandsort(arr, lblock, median);
        divandsort(arr, median + 1, rblock);

        merge(arr, lblock, median, rblock);
    }
}

void merge(int arr[], int lblock, int median, int rblock)
{
    int subarr1 = median - lblock + 1;
    int subarr2 = rblock - median;

    int temparr1[subarr1], temparr2[subarr2];

  
    for (int i = 0; i < subarr1; i++)
        temparr1[i] = arr[lblock + i];
    for (int j = 0; j < subarr2; j++)
        temparr2[j] = arr[median + 1 + j];

    int i = 0;    
    int j = 0;    
    int k = lblock; 

    while (i < subarr1 && j < subarr2)
    {
        if (temparr1[i] <= temparr2[j])
        {
            arr[k] = temparr1[i];
            i++;
        }
        else
        {
            arr[k] = temparr2[j];
            j++;
        }
        k++;
    }


    while (i < subarr1)
    {
        arr[k] = temparr1[i];
        i++;
        k++;
    }

    
    while (j < subarr2)
    {
        arr[k] = temparr2[j];
        j++;
        k++;
    }
}