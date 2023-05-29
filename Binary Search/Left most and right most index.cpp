int left(vector<long long> v, long long x){
    
    // This function finds the leftmost index of `x` in `v`.
    // If `x` is not found, it returns -1.
    
    int s=0;
    int e= v.size()-1;
    int res = -1;
    while(s<=e){
        int mid = s+ (e-s)/2;
        
        // If `x` is equal to the element at `mid`, return `mid`.
        if(x==v[mid]){
            res=mid;
            e=mid-1;
        }
        // If `x` is less than the element at `mid`, set `e` to `mid-1`.
        else if(x<v[mid]){
            e=mid-1;
        }
        // If `x` is greater than the element at `mid`, set `s` to `mid+1`.
        else{
            s=mid+1;
        }
    }
    return res;
};

int right(vector<long long> v, long long x ){
    
    // This function finds the rightmost index of `x` in `v`.
    // If `x` is not found, it returns -1.
    
    int s=0;
    int e=v.size()-1;
    int res = -1;
    while(s<=e){
        int mid = s+ (e-s)/2;
        
        // If `x` is equal to the element at `mid`, return `mid`.
        if(x==v[mid]){
            res=mid;
            s=mid+1;
        }
        // If `x` is less than the element at `mid`, set `e` to `mid-1`.
        else if(x<v[mid]){
            e=mid-1;
        }
        // If `x` is greater than the element at `mid`, set `s` to `mid+1`.
        else{
            s=mid+1;
        }
    }
    return res;
};

pair<long,long> indexes(vector<long long> v, long long x)
{
    // This function returns a pair of integers, where the first integer is the leftmost index of `x` in `v` and the second integer is the rightmost index of `x` in `v`.
    // If `x` is not found in `v`, the pair will be (-1, -1).

    // Find the leftmost index of `x`.
    long long a  = left(v, x);

    // Find the rightmost index of `x`.
    long long b = right(v, x);

    // Create a pair of integers and return it.
    pair<long,long> result ;
    result.first = a ;
    result.second = b ;

    return result ;

}
