#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int BS(int arr[], int start, int end, int x) {
    int mid, result;
    while(start<=end) {
        mid = (start+(end-start)/2);
        if(x == arr[mid]) {
            result =  mid;
            end = mid-1;
        }
        else {
            if(x < arr[mid])
                end = mid-1;
            else
                start = mid+1;
        }
    }
    return result;
}

int main() {
	// your code goes here
    int arr[] = {0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int start = 0, end=1;
    int x = 1;
    while(arr[end] < x) {
        start = end;
        end = 2*end;
    }
    cout<<BS(arr, start, end, x);
	return 0;
}
