#include <iostream>
#include <vector>

using namespace std;

int interpolationSearch(vector<int>& arr, int key) {
    int left = 0, right = arr.size() - 1;
    while (left <= right && key >= arr[left] && key <= arr[right]) {
        if (left == right) return (arr[left] == key) ? left : -1;
        int pos = left + ((double)(right - left) / (arr[right] - arr[left])) * (key - arr[left]);
        if (arr[pos] == key) return pos;
        if (arr[pos] < key) left = pos + 1;
        else right = pos - 1;
    }
    return -1;
}