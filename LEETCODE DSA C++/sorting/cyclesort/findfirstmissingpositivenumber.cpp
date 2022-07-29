//https://leetcode.com/problems/first-missing-positive/
int firstMissingPositive(vector<int>& v) {
                int i=0; int n=v.size();
       
        while(i<n){
           
            if(v[i]>0 && v[i]<=n && v[i]!=v[v[i]-1])
                swap(v[i],v[v[i]-1]);
            else i++;
            
            
        }
        for(int index= 0 ;index<n ; index++){
            if(v[index]!=index +1)
                return index+1;
        }
        return n+1;
    }