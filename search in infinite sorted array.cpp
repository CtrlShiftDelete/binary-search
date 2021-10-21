#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int BS(int arr[], int start, int end, int x) {
    int mid;
    while(start<=end) {
        mid = (start+(end-start)/2);
        if(x == arr[mid])
            return mid;
        else {
            if(x < arr[mid])
                end = mid-1;
            else
                start = mid+1;
        }
    }
    return -1;
}

int main() {
	// your code goes here
    int arr[] = {1, 2, 4, 5, 7, 18, 19, 25, 34, 41, 53};
    int start = 0, end=1;
    int x = 18;
    while(arr[end] < x) {
        start = end;
        end = 2*end;
    }
    cout<<BS(arr, start, end, x);
	return 0;
}
