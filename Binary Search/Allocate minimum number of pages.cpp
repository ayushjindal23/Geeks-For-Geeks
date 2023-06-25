//User function template in C++

class Solution 
{
    public:
    //Function to find minimum number of pages.
 bool allocationIsPossible(int A[], int N, int M, int b){
        int allocatedStu = 1, pages = 0;
        for(int i=0; i<N; i++){
            if(A[i]>b)return false;
            if(pages + A[i] > b){
                allocatedStu++;
                pages = 0;
                pages+=A[i];
            }
            else{
                pages+=A[i];
            }
        }
        if(allocatedStu > M)return false;
        return true;
    }
    //Function to find minimum number of pages.
    int findPages(int A[], int N, int M) 
    {
        //code here
        int sum = 0;
        if(N<M)return -1;
        for(int i=0; i<N; i++)sum+=A[i];
        int l = A[0], h = sum, res = -1;
        while(l <= h){
            int m = (l+h)/2;
            if(allocationIsPossible(A, N, M, m)){
                res = m;
                h = m-1;
            }else{
                l = m+1;
            }
        }return res;
    }
};
