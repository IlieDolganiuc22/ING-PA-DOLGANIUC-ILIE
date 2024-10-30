#include <iostream>
using namespace std;


int partition(int arr[], int a, int b) {
    int pivot = arr[b]; 
    int i = a - 1; 

    for (int j = a; j < b; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]); 
        }
    }
    swap(arr[i + 1], arr[b]); 
    return i + 1; 
}

// Funcția QuickSort
void quickSort(int arr[], int a, int b) {
    if (a < b) {
        int pivotIndex = partition(arr, a, b); 
        quickSort(arr, a, pivotIndex - 1); 
        quickSort(arr, pivotIndex + 1, b); 
    }
}

// Funcția principală
int main() {
    int arr[] = { 9 , 1 , 8 , -8 , 5 , 0 , 4 , -5}; 
    int n = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, n - 1); 

    cout << "Tabloul sortat este: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "; 
    }
    cout << endl;
    return 0;
}