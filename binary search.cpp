#include <iostream>
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
	int arr[1001];
	for(int i=0; i<10; i++)
	    arr[i]=i+1;
	cout<<BS(arr, 0, 10, 11);
	return 0;
}
