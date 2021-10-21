#include <iostream>
using namespace std;


int BSfirst(int arr[], int start, int end, int x) {
    int mid, result;
    while(start<=end) {
        mid = (start+(end-start)/2);
      
        if(x == arr[mid]) {
            result = mid;
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

int BSlast(int arr[], int start, int end, int x) {
    int mid, result;
    while(start<=end) {
        mid = (start+(end-start)/2);
      
        if(x == arr[mid]) {
            result = mid;
            start = mid+1;
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
	int arr[] = {1, 2, 4, 5, 5, 5, 5, 5, 8, 9};
	cout<<BSfirst(arr, 0, 10, 5)<<endl;
	cout<<BSlast(arr, 0, 10, 5)<<endl;
	return 0;
}
