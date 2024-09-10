// pointers_assignment.c
// This program implements three functions using pointers: swap, findMax, and reverseArray.

#include <stdio.h>
#include <stdbool.h>

// Function prototypes
void swap(int *a, int *b);
int findMax(int *arr, int length);
void reverseArray(int *arr, int length);

// Test functions
bool testSwap();
bool testFindMax();
bool testReverseArray();

int main() {
    // Run tests
    if (testSwap()) {
        printf("testSwap PASSED\n");
    } else {
        printf("testSwap FAILED\n");
    }

    if (testFindMax()) {
        printf("testFindMax PASSED\n");
    } else {
        printf("testFindMax FAILED\n");
    }

    if (testReverseArray()) {
        printf("testReverseArray PASSED\n");
    } else {
        printf("testReverseArray FAILED\n");
    }

    return 0;
}

//---------------------------------
// COMPLETE THE FUNCTION DEFINITIONS BELOW 
//---------------------------------


// Function to swap two integers using pointers
void swap(int *a, int *b) {
    //Write the function description







}

// Function to find the maximum value in an array using pointers
int findMax(int *arr, int length) {
    //Write the fucntion description 







  
}

// Function to reverse an array using pointers
void reverseArray(int *arr, int length) {
    //Write the function description 







}

//---------------------------------
// TEST CASES - Don't change the code below this.
//---------------------------------

// Test case for swap function
bool testSwap() {
    int x = 5, y = 10;
    swap(&x, &y);

    if (x == 10 && y == 5) {
        return true;
    } else {
        return false;
    }
}

// Test case for findMax function
bool testFindMax() {
    int arr[] = {3, 1, 4, 1, 5, 9, 2, 6, 5};
    int length = sizeof(arr) / sizeof(arr[0]);
    int maxValue = findMax(arr, length);

    if (maxValue == 9) {
        return true;
    } else {
        return false;
    }
}

// Test case for reverseArray function
bool testReverseArray() {
    int arr[] = {1, 2, 3, 4, 5};
    int expected[] = {5, 4, 3, 2, 1};
    int length = sizeof(arr) / sizeof(arr[0]);

    reverseArray(arr, length);

    // Check if the array matches the expected reversed array
    for (int i = 0; i < length; i++) {
        if (arr[i] != expected[i]) {
            return false;
        }
    }
    return true;
}