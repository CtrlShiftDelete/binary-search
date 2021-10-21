#include <iostream>
using namespace std;

int BSdesc(int arr[], int start, int end, int x) {
    int mid;
    while(start<=end) {
        mid = start + (end-start)/2;
        //  cout<<"mid= "<<mid<<endl;
       if(x == arr[mid])
            return mid;
        else {
            if(x < arr[mid])
                start = mid+1;
            else
                end = mid-1;
        }
    }
    return -1;
}

int BSasc(int arr[], int start, int end, int x) {
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
	int arr[1001], num=10;
	for(int i=0; i<10; i++) {
	    arr[i]=num--;
	    cout<<arr[i]<<" ";
	}
	cout<<endl;
	if(arr[0]<arr[1])
	    cout<<BSasc(arr, 0, 10, 7);
	 else
	  cout<<BSdesc(arr, 0, 10, 8);
	return 0;
}
