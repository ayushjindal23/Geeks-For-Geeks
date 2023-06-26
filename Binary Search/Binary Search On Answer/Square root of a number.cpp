class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {  
        
        // Base cases
        if (x == 0 || x == 1)
            return x;
      
        int low=0,high = x;
        int ans=-1;
        while(low<=high){
            
            long long mid = (low+high)/2;
          
            if (mid*mid == x) return mid;
          
            if(mid*mid<=x){
                ans =mid;
                low=mid+1;
              
            }else{
                high=mid-1;
            }
            
        }
        return ans;
    }
};
