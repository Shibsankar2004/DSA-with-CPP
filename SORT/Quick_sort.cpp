
#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int>& arr, int st, int end) {

    int pivot = arr[end];

    int i = st - 1;

    for (int j = st; j < end; j++) {

        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[end]);

    return i + 1;
}

void quickSort(vector<int>& arr, int st, int end) {

    if (st >= end) {
        return;
    }

    int pivotIndex = partition(arr, st, end);

    quickSort(arr, st, pivotIndex - 1);

    quickSort(arr, pivotIndex + 1, end);
}

int main() {

    vector<int> arr = {38, 27, 43, 10, 9, 82, 5};

    quickSort(arr, 0, arr.size() - 1);

    cout << "Sorted Array: ";

    for (int x : arr) {
        cout << x << " ";
    }

    return 0;
}
