#include <bits/stdc++.h>
using namespace std;


int indexOfFirstOne(int arr[], int low, int high)
{
	int mid;
	int res=-1;
	while (low <= high) {
		mid = (low + high) / 2;
		
		if(arr[mid]==1){
		    res=mid;
		    high=mid-1;
		}
		else{
		    low = mid+1;
		}
	}
	return res;
}


int posOfFirstOne(int arr[])
{
    int l=0;
    int h=1;
    
    while(arr[h]==0){
        
        l=h;
        h=h*2;
    }

	return indexOfFirstOne(arr, l, h);
}

int main()
{
	int arr[] = { 0, 0 };
	cout << "Index = "
		<< posOfFirstOne(arr);
	return 0;
}
