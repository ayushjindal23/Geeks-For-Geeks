class Solution {
  public:
  
    bool canGetBouq(vector<int>& bloomDay, int days, int m, int k){
        int count=0,result=0;
        for(int i=0;i<bloomDay.size();i++)
        {
            if(bloomDay[i]<=days){
                count++; //count represents consective flowers
            }
            else{
                count=0;
            }
            if(count==k){
                count=0; //reset the window
                result++;
            }
        }
        return result>=m;
    }
  
    int solve(int M, int K, vector<int> &bloomDay){
      // Code here
        long long val = M*1LL*K*1LL;
       if(bloomDay.size()<val) return -1 ; 
        
      int low=INT_MAX,high=INT_MIN;
      
      for(int i=0;i<bloomDay.size();i++){
          low=min(low,bloomDay[i]);
          high=max(high,bloomDay[i]);
      }
        while(low<=high){
            int mid=low+(high-low)/2;
            if(canGetBouq(bloomDay,mid,M,K)){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return canGetBouq(bloomDay,low,M,K) ? low : -1; //Final check if the result day can have atleast `m` bouquets.
    }
};
