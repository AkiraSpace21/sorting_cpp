#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void bucket_sort(float numbers[], int size) {
    vector<float> buckets[size];

    for (int i = 0; i < size; i++) {
        int bucketIndex = size * numbers[i];
        buckets[bucketIndex].push_back(numbers[i]);
    }


    for (int i = 0; i < size; i++) {
        sort(buckets[i].begin(), buckets[i].end());
    }

   
    int idx = 0;
    for (int i = 0; i < size; i++) {
        for (float val : buckets[i]) {
            numbers[idx++] = val;
        }
    }
}

int main() {
    float arr[] = {0.897, 0.565, 0.656, 0.1234, 0.665, 0.3434};
    int len = sizeof(arr) / sizeof(arr[0]);

    bucket_sort(arr, len);

    cout << "Sorted array: ";
    for (int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
