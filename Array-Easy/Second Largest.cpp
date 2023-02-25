class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {

	    int secLargest=-1;
	    int largest= -1;
	    
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]>largest)
	        {
	            largest = arr[i];
	        }
	    }
	    
	    for(int i=0;i<n;i++)
	    {
	        // secondLargest < arr[i] < largest
	        if(arr[i]<largest && secLargest<arr[i])
	        {
	            secLargest = arr[i];
	        }
	    }
	    
	    return secLargest;
	}
};
