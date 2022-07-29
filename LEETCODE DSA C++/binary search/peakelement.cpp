 //https://leetcode.com/problems/find-peak-element/
 int findPeakElement(vector<int>&v) {
           int low=0 ,high=v.size()-1;
        while(low<high){
            int mid=low+(high-low)/2;
            if(v[mid]>v[mid+1])
                high=mid;
            else 
                low=mid+1;
        }
        return low;  
    }

    //SAME APPROACH 
     int peakElement(int arr[], int n)
    {  
        int low=0 , high=n-1 ;
        while(low<=high){
            int mid=(low+(high-low)/2) ;
            if((mid==0 || arr[mid-1]<=arr[mid]) && (mid==n-1 || arr[mid]>arr[mid+1])) return mid; 
            else if (arr[mid]<arr[mid+1] ) low=mid+1 ; 
            else high=mid-1 ;
        }
    }