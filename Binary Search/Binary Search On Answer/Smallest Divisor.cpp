class Solution {
  public:
  
  int sumbyD(vector<int> & arr,int div){

        int sum=0;
        int n = arr.size();
        
        for(int x=0;x<n;x++){   
            sum+= ceil((double)(arr[x])/(double)(div));
        }
    return sum;
    }
    
    
    int smallestDivisor(vector<int>& nums, int K) {
        
        int n = nums.size();
        int low = 1, high = *max_element(nums.begin(),nums.end()) ;
        
        if(n>K) return -1;
        
        while(low<=high){
            
            int mid = low + (high-low)/2;
            
            if(sumbyD(nums,mid)<=K){
                high = mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};
