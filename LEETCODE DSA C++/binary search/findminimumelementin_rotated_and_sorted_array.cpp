    int findMin(vector<int>& arr) {
        int low =0 , high = arr.size()-1;int n = arr.size() , ans=arr[0] ; 
        while(low<=high){
            int mid = low + (high-low)/2 ; 
            int prev = (mid-1 + n)  %n , next = (mid+1)%n ;
            if(arr[mid]<=arr[prev] && arr[mid]<=arr[next]) return arr[mid];
            else if (arr[mid]<=arr[high]) high = mid-1 ; 
            else if (arr[mid]>=arr[low])  low=mid+1 ; 
        }
        return arr[0] ;   
    }