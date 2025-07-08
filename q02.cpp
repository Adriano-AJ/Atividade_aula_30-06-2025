#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int a[8] = {49, 38, 58, 87, 34, 93, 26, 13};

    cout << "Array original: ";
    printArray(a, 8);

    insertionSort(a, 8);

    cout << "Array ordenado: ";
    printArray(a, 8);

    return 0;
}
