class Solution {
  public:
    bool Search(int N, vector<int>& A, int Key) {
        // Code here
        int n=A.size();
        int lo=0, hi=n-1;
        
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(A[mid]==Key){
                return 1;
            }
            
            if(A[lo]==A[mid] && A[mid]==A[hi]){
                lo++;
                hi--;
                continue;
            }
            
            if(A[lo]<=A[mid]){
                if(A[lo]<=Key && Key<=A[mid]){
                    hi=mid-1;
                }else{
                    lo=mid+1;
                }
            }else{
                if(A[mid]<=Key && Key<=A[hi]){
                    lo=mid+1;
                }else{
                    hi=mid-1;
                }
            }
        }
        return 0;
    
    }
};
