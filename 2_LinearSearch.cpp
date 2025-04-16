#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int key) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == key) return i;
    }
    return -1;
}

int main() {
    int arr[] = {5, 3, 9, 2, 7};
    int key = 2;
    int result = linearSearch(arr, 5, key);
    cout << "Element found at index: " << result << endl;
    return 0;
}
