#include <iostream>

using namespace std;

void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Swap only if minIndex has changed
        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

void swapArrays(int arr1[], int arr2[], int size) {
    for (int i = 0; i < size; i++) {
        int temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }
}

int main() {
    int n;

    cout << "Introduceti dimensiunea vectorului: ";
    cin >> n;

    // Use dynamic memory allocation for arrays
    int* v1 = new int[n];
    int* v2 = new int[n];

    cout << "Introduceti elementele primului vector: ";
    for (int i = 0; i < n; i++) {
        cin >> v1[i];
    }

    cout << "Introduceti elementele celui de-al doilea vector: ";
    for (int i = 0; i < n; i++) {
        cin >> v2[i];
    }

    selectionSort(v1, n);
    selectionSort(v2, n);

    cout << "\nPrimul vector sortat este: ";
    for (int i = 0; i < n; i++) {
        cout << v1[i] << " ";
    }

    cout << "\nAl doilea vector sortat este: ";
    for (int i = 0; i < n; i++) {
        cout << v2[i] << " ";
    }

    swapArrays(v1, v2, n);

    cout << "\nPrimul vector dupa swap: ";
    for (int i = 0; i < n; i++) {
        cout << v1[i] << " ";
    }

    cout << "\nAl doilea vector dupa swap: ";
    for (int i = 0; i < n; i++) {
        cout << v2[i] << " ";
    }

    // Free dynamically allocated memory
    delete[] v1;
    delete[] v2;

    return 0;
}
