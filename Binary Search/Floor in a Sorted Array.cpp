class Solution{
  public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    int findFloor(vector<long long> v, long long n, long long x){
        
        // Your code here
        long long s=0;
        long long e=n-1;
        int ans=-1;
        while(s<=e){
            long long mid=s;
            mid+=(e-s)/2;
            if(v[mid]<=x){
                ans=mid;
                s=mid+1;
            }else{
                e=mid-1;
            }
        }
        return ans;
        
    }
};
