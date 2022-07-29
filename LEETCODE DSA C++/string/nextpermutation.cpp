    //https://leetcode.com/problems/next-permutation/
    void nextPermutation(vector<int>& v) {
        // next_permutation(v.begin(),v.end());  1241 1421 1412
        int n=v.size(),l,k;
        for( k=n-2 ; k>=0 ;k--){
            if(v[k]<v[k+1] )
                break;
        }
        if(k<0){reverse(v.begin(),v.end());}
        else {
            for( l=n-1 ; l>k ;l--){
                if(v[l]>v[k]){
                    break;}
              }
         swap(v[k],v[l]);
         reverse(v.begin()+k+1, v.end());
    }
}