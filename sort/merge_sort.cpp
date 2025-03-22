#include <bits/stdc++.h>

using namespace std;;

void merge_part(int arr[102], int left, int mid, int right) {
    int temp[right-left+1];
    int i = left, j = mid+1, k = 0;
    while(i<= mid && j <=right) {
        if(arr[i] >= arr[j]) {
            temp[k] = arr[j];
            j++;
        } else {
            temp[k] = arr[i];
            i++;
        }
        k++;
    }

    while (i <= mid) temp[k++] = arr[i++];
    while (j <= right) temp[k++] = arr[j++];

    for(i = 0; i<k;i++) arr[left+i] = temp[i];

}

void merge_sort(int arr[102], int left, int right) {
    if(right - left <= 1) return;

    int mid = (left + right) / 2;
    merge_sort(arr,left, mid);
    merge_sort(arr, mid+1, right);

    merge_part(arr, left, mid, right);
}