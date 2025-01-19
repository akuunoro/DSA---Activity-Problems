#include <iostream>

using namespace std;

// Design and implement a program that demonstrates a clear trade-off between space and time efficiency. 
// Choose any algorithm or data structure that highlights the trade-off 
// (e.g., hash tables, Comparison Counting sort, Distribution Counting sort)

// I choose to prioritize the space of the program. Meaning that I'm sacrificing its time-complexity or its speed.
// I leaned towards the space-efficiency trade-off by creating only 1 array that will only handle the input, and in that 
// said array, I'm going to directly change and store my new values. In turn, its time-complexity will suffer especially 
// when the array elements is larger. By not creating array to store new values or outputs, I can save space.


// CONCLUSION: After several runs. The program takes around 1 to 2 seconds to run. Which is faster, when the elements are still
// manageable. As I increase the elements the starting range of time-complexity are becoming thinner and thinner with a
// significant range increase by 0.1 seconds every 10 - 15 elements added. In addition the range sometimes spikes up to 3 seconds.
// On one hand, the space required stays the same in almost the different instances.
// This just shows my chosen trade-off: Space-Efficiency by disregarding Time-Efficiency.

int idfMaxElement(int arr[], int n);
void countingSort(int arr[], int n) ;

int main() {
    int arr[] = {18, 69, 43, 6, 4654, 423, 76, 3, 76, 876, 3, 54, 56, 45, 23, 56, 55, 33, 235 , 5425, 5422, 7, 54, 425, 542, 5425,
    2454, 3543, 87564, 5435, 43, 65, 24, 19, 45, 75, 54523, 6656, 643, 5435, 54354, 543, 545, 5454, 54, 65, 43, 54, 6, 4534, 32, 32, 25, 12};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Before Sorting: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    
    countingSort(arr, n);

    cout << "After Sorting: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

int idfMaxElement(int arr[], int n) {
    int maxElement = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }
    return maxElement;
}


void countingSort(int arr[], int n) {
    
    int maxElement = idfMaxElement(arr, n);

    
    int countArray[maxElement + 1] = {0};

   
    for (int i = 0; i < n; ++i) {
        countArray[arr[i]]++;
    }

    
    int index = 0;
    for (int i = 0; i <= maxElement; ++i) {
        while (countArray[i] > 0) {
            arr[index++] = i; 
            countArray[i]--;
        }
    }
}
