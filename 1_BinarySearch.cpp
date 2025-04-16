#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {
    int start = 0, end = size - 1;
    while(start <= end) {
        int mid = start + (end - start) / 2;
        if(arr[mid] == key) return mid;
        else if(arr[mid] < key) start = mid + 1;
        else end = mid - 1;
    }
    return -1;
}

int main() {
    int arr[] = {2, 4, 6, 10, 14, 18};
    int key = 10;
    int index = binarySearch(arr, 6, key);
    cout << "Element found at index: " << index << endl;
    return 0;
}
