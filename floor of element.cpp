#include <iostream>
using namespace std;

int Search(int arr[], int start, int end, int x) {
    int mid, result;
    while(start<=end) {
        mid = start + (end-start)/2;
        
        if(x == arr[mid])
            return arr[mid];
            
        if(arr[mid] > x)
            end = mid-1;
            
        if(arr[mid] < x) {
            result = arr[mid];
            start = mid+1;
        }
    }
    return result;
}

int main() {
	// your code goes here
	int arr[] = {1, 2, 4, 10, 14, 16, 40};
	int n = sizeof(arr) / sizeof(arr[0]);
    int x = 35;
    cout<<Search(arr, 0, n, x);
	return 0;
}
