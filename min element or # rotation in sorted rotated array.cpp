#include <iostream>
using namespace std;

int BS(int arr[], int N) {
    int mid, next, prev, start = 0, end = N-1;
    while(start<=end) {
        if(arr[start] < arr[end])
            return start;
            
        mid = start + (end-start)/2;
        next = (mid+1)%N;
        prev = (mid-1+N)%N;
        
        //cout<<mid;
        if((arr[mid] < arr[next]) && (arr[mid]<arr[prev]))
            return mid;
        
        if(arr[start] < arr[mid])
            start = mid+1;
        else if(arr[mid] < arr[end])
            end = mid-1;
    }
    return -1;
}

int main() {
	// your code goes here
	int arr[] = {14, 15, 18, 19, 1, 2, 3, 6, 12 , 13};
	int idx = BS(arr,  10);
	cout<<(10-idx);
	//cout<<idx;
	return 0;
}
