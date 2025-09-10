#include <iostream>
using namespace std;

// Bubble Sort function
void bubbleSort(int arr[], int n) {
    
        for (int j = 0; j < n - i - 1; ++j)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
}

// Binary Search function
int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    
    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key)
            return mid; // found
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1; // not found
}

int main() {
    int n;

    // Input array size
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    // Input elements
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    // Sort array
    bubbleSort(arr, n);

    // Display sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << endl;

    // Input key to search
    int key;
    cout << "Enter element to search: ";
    cin >> key;

    // Perform binary search
    int result = binarySearch(arr, n, key);

    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found in the array.\n";

    return 0;
}

