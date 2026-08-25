#include<bits/stdc++.h>
using namespace std;

// Function to check if the array is sorted
bool isSorted(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1])  // If any element is smaller than the previous one, return false
            return false;
    }

    return true;  // Return true if the array is sorted
}

int main() {
    int arr[] = {1, 2, 3, 4, 5}, n = 5;
    printf("%s", isSorted(arr, n) ? "True" : "False");  // Output result
}
