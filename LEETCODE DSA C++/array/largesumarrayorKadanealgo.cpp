    //MAXM SUBARRAYS SUM 
    long long maxSubarraySum(int arr[], int n){
        int maxi=INT_MIN; 
        for(int i=0 ; i< n ; i++ ) {
            int sum=0 ;
            for(int j=i ; j < n ; j++){
                sum+=arr[j]  ; 
                maxi= max(maxi , sum) ;
            }
        }
        return maxi ;
    }


    //kadane's algorithm 
    long long maxSubarraySum(int arr[], int n){
      int sum=0 , maxi =arr[0] ; 
      for(int i=0 ;i< n ; i++) {
          if(sum<0) sum =0 ;
          sum+=arr[i]  ;
          maxi = max(sum, maxi ) ;
      }
      return maxi ;
    }