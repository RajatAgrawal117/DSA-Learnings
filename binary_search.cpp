#include <iostream>
using namespace std;

int binarysearch(int arr[], int left, int right, int x) {
    if (right >= left) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == x) {
            return mid;
        }
        if (arr[mid] > x) {
            return binarysearch(arr, left, mid - 1, x);
        }
        return binarysearch(arr, mid + 1, right, x);
    }
    return -1;
}

void sort(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

bool issorted(int arr[], int n) {
    if (n <= 1) {
        return true;
    }
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int num;
    cout << "Enter the size of the array (<100): ";
    cin >> num;

    int arr[100] = {};
    for (int i = 0; i < num; i++) {
        cin >> arr[i];
    }

    cout << "Please enter an element to search: ";
    int element;
    cin >> element;

    if (!issorted(arr, num)) {
        sort(arr, num);
    }

    int index = binarysearch(arr, 0, num - 1, element);
    if (index != -1) {
        cout << "Element found at index " << index << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
