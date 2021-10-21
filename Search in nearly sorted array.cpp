#include <iostream>
using namespace std;

int Search(int arr[], int start, int end, int x) {
    int mid;
    while(start<=end) {
        mid = start + (end-start)/2;
        
        if(x == arr[mid])
            return mid;
            
        if(mid-1 >= start && arr[mid-1] == x)
            return mid-1;
            
        if(mid+1 <= end && arr[mid+1] == x)
            return mid+1;
            
        if(arr[mid] > x)
            end = mid-2;
            
        if(arr[mid] < x)
            start = mid+2;
    }
    return -1;
}

int main() {
	// your code goes here
	int arr[] = {3, 2, 10, 4, 40};
	int n = sizeof(arr) / sizeof(arr[0]);
    int x = 4;
    cout<<Search(arr, 0, 5, x);
	return 0;
}
