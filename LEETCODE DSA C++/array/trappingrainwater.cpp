long long trappingWater(int arr[], int n){
        // code here
     int maxl[n] , maxr[n] ; maxl[0]=arr[0] ; maxr[n-1]=arr[n-1]; long long  sum=0 ;
     for(int i=1 ; i< n ;i++) maxl[i]=max(maxl[i-1] , arr[i]) ;  //create array for maximum left height for each element
     for(int i=n-2 ; i>=0 ;i--) maxr[i]=max(maxr[i+1] , arr[i]) ; //create array for minimum right height for each elment 
     for(int i=0 ; i< n ;i++) {
         sum+=min(maxl[i],maxr[i])-arr[i];    //alwats take min height for 
     }
     return sum ;
     
     
    }