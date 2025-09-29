#include <iostream>
using namespace std;

void insertion_sort(int numbers[], int size) {
    for (int i = 1; i < size; i++) {
        int current = numbers[i];
        int j = i - 1;

        while (j >= 0 && numbers[j] > current) {
            numbers[j + 1] = numbers[j];
            j--;
        }
        numbers[j + 1] = current;
    }
}

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int length = sizeof(arr) / sizeof(arr[0]);

    insertion_sort(arr, length);

    cout << "Sorted array: ";
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
