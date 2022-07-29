 //Duplicates are not allowed 
//  I/p -[1,2,2]
// Output: [[],[1],[1,2],[1,2,2],[2],[2,2]]
 void help(int ind, vector<int>&ds,vector<int>&arr, vector<vector<int>>&ans,int n){
            ans.push_back(ds) ;
        for(int i=ind ; i<n ;i++) {
            if(i!=ind && arr[i]==arr[i-1]) continue ;
            ds.push_back(arr[i]) ;
            help(i+1 ,ds ,arr, ans ,n ) ;
            ds.pop_back() ;
            
        }
        
    }