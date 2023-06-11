class Solution{
    public:
    int search(int A[], int l, int h, int key){
        // l: The starting index
        // h: The ending index, you have to search the key in this range
        
         while(l<=h)
       {
           int m = l+(h-l)/2;
           if(A[m]==key)//if key is found at mid
           {
               return m;
           }
           if(A[l]<=A[m])//checking left part of array is sorted
           {
               if(A[l]<=key && A[m]>=key)//if key is between mid and low
               {
                    h = m-1;   
               }
               else
               {
                   l = m+1;
               }
           }
           else//checking right part of array is sorted
           {
               if(A[m]<=key && A[h]>=key)//if key is between mid and high
               {
                   l = m+1;
               }
               else
               {
                   h = m-1;
               }
           }
       }
       return -1;

    }
};
