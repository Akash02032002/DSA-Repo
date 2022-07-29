//https://practice.geeksforgeeks.org/problems/maximum-index-1587115620/0/?track=DSASP-Arrays&batchId=154#
// N = 9
// A[] = {34, 8, 10, 3, 2, 80, 30, 33, 1}
int maxIndexDiff(int arr[], int n) 
    {   int maxi =0 ;
        for(int i=0 ; i< n ; i++){
            for(int j=i+1; j< n ; j++ ) {
                if(arr[i]<=arr[j]){
                     maxi =max (maxi , j-i) ; 
                }
            }
            
        }
        return maxi ;
    }

//optimal approach 
int maxIndexDiff(int a[], int n) 
   { 
       int low=0,high=n-1,total=0,diff;
       while(high>=low)
       {
           if(a[high]>=a[low])
           {
               diff=high-low;
               total=max(total,diff);
               low++;     //increased low always and make high=n-1 every time ;
               high=n-1;
           }
           else
           high--;
       }
   
           return total ;
       } 
   
