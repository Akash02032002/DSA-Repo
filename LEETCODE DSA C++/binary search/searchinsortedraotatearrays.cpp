 int search(vector<int>& a, int x) {
         int low=0 ,high=a.size()-1 ; 
        // if(a.size()==1) return 0 ;
        while(low<=high){
            int mid=(low+(high-low)/2);
            if(a[mid]==x) return mid;
            
            // the left sorted
            if(a[low]<=a[mid])
            { if (x>=a[low] && x<=a[mid])
                high=mid-1;
            else low=mid+1;}
            else {
                if(x>=a[mid] && x<=a[high]) low =mid+1 ;
                else high=mid-1 ;
            }
        }
        return -1;
    }