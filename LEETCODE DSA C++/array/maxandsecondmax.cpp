vector<int> largestAndSecondLargest(int sizeOfArray, int arr[]){
        int max1 = INT_MIN, max2=-1; vector<int>ans;
        if(sizeOfArray == 0 || sizeOfArray == 1   ) ans.push_back(-1) ;
        for(int i=0 ;i<sizeOfArray ; i++){
            max1=max(arr[i],max1);
        }
        ans.push_back(max1) ;
        for(int i=0 ; i<sizeOfArray  ; i++){
            if(arr[i]!=max1){
                max2 = max(max2,arr[i]) ;
            }
        }
        ans.push_back(max2) ;
        return ans ;
    }

    //SECOND MAX IN ONE LOOP 
    max1=INT_MIN ;  max2=INT_MIN :
    for(int i=0 ; i<n ;i++){
        if(arr[i]>max){
            max2 = max;
            max = arr[i];
        }
        else if(arr[i]>max2 && arr[i]!=max) max2=arr[i];
    }