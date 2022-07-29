//Finding an element in a sorted array
//C++
#include<bits/stdc++.h>
using namespace std;
int bin_search(int arr[],int n,int target)
{
    int low=0,high=n-1;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(!(arr[mid]^target))
            return mid;
        else if(arr[mid]<target)
            low=mid+1;
        else
            high=mid-1;
    }
    return -1;
}
int main() {
	int n,target;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	    cin>>arr[i];
	cin>>target;
	cout<<bin_search(arr,n,target);
	return 0;
}
