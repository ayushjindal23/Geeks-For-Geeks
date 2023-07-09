class Solution {
public:
        bool ispossibleSolution(vector<int>stalls,int k ,int mid){
          int count = 1;
          int pos = stalls[0];
          
          for(int i = 1;i<stalls.size();i++){
              if(stalls[i] - pos >= mid){
                  count++;
                  pos = stalls[i];
              }
              if(count == k)return true;
          }
          return false;
      }
      
      
    int solve(int n, int k, vector<int> &stalls)
{
        //binary search
        sort(stalls.begin(),stalls.end()); // sorting
        int start = 0;
        int end = stalls[stalls.size()-1] - stalls[0]; // because we reduced our search space
        int ans = 0;
        
        while(start <= end){
            int mid = (start + end) >>1;
            if(ispossibleSolution(stalls,k,mid)){
                ans = mid;
                start = mid + 1;
            }
            else {
                end = mid -1;
            }
        }
        return ans;
    }
};
