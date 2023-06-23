class Solution{
    public:
    int searchInsertK(vector<int>Arr, int N, int k)
    {
        // code here
        int low = 0, high = N - 1;
        int ans = -1;
        
        while (low <= high) {
            
            int mid = low + (high - low)/2;
                     
           if(Arr[mid] == k){
               return mid;
           }
            else if(Arr[mid]<=k){
                ans = mid;
                low=mid+1;
            }else{
            
                high = mid-1;
            }
            
        }
        return ans+1;
    }
};
