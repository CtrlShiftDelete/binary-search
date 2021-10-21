#include <iostream>
#include <bits/stdc++.h>
using namespace std;

char NGA(vector<char>& a, char x) {
    int n = a.size();
    if( x >= a[n-1]) return x;
    
    int mid, result;
    int start=0, end = n-1;
    while(start <= end) {
        mid = start + (end-start)/2;
        
        if(a[mid] > x) {
            end = mid-1;
            result = mid;
        }
        if(a[mid] < x)
            start = mid+1;
    }
    return a[result];
}

int main() {
	// your code goes here
	vector<char> a{ 'A', 'K', 'S', 'U', 'W', 'Z'};
    char x = 'T';
    cout<<NGA(a, x);
	return 0;
}
