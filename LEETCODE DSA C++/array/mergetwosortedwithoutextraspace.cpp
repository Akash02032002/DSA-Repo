void merge(vector<int>v1 , vector<int>v2){
    for(int i=0 ;i<n ;i++) {
        if(v1[i]>v2[0]){
            swap(v1[i], v2[0]);
            int first = v2[0] ;
        for(int k=1 ; k< n2 && v2[k]<first ; k++){
            v2[k-1] =v2[ k ] ;
        }
        v2[k-1] = first ;
        }
    }
}