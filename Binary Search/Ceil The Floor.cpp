
int floor(int arr[], int n, int x){
        int low = 0,high = n-1;
        int ans = -1;
        while(low<=high){
            int mid = low + (high - low)/2;
            if(arr[mid]<=x){
                ans = arr[mid];
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return ans;
}
int ceil(int arr[], int n, int x){
        int low = 0,high = n-1;
        int ans = -1;
        while(low<=high){
            int mid = low + (high - low)/2;
            if(arr[mid]>=x){
                ans = arr[mid];
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
}

pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    // code here
       sort(arr,arr+n);
    return {floor(arr,n,x),ceil(arr,n,x)};
}
