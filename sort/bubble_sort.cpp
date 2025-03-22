#include <bits/stdc++.h>

using namespace std;;

void bubble_sort(int arr[102], int n) {
    while(true) {
        bool hasSwapped = false;
        for(int i = 0; i<n-1;i++) {
            if(arr[i] > arr[i+1]) {
                swap(arr[i], arr[i+1]);
                hasSwapped = true;
            }
        }

        if(!hasSwapped) break;
    }
}