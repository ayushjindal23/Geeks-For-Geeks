class Solution {
  public:
    int findMax(vector<int>&piles){
            int n=piles.size();
            int maxi=INT_MIN;
            for(int i=0;i<n;i++){
                maxi=max(maxi,piles[i]);
            }
            return maxi;
        }
        int calculateTotalHours(vector<int>&piles,int hourly){
            int n=piles.size();
            int totalH=0;
            for(int i=0;i<n;i++){
                totalH+=ceil((double)piles[i]/(double)hourly);
            }
            return totalH;
        }
        int Solve(int N, vector<int>& piles, int H) {
            // Code here
            int low=1,high=findMax(piles);
            while(low<=high){
                int mid=(low+high)/2;
                int totalH=calculateTotalHours(piles,mid);
                if(totalH<=H){
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
            }
            return low;
        }
};
