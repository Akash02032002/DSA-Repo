vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int N, long long int k) {
              int i=0 , j=0 ; list<long long int >q; vector<long long int > ans; 
              while(j<N){
                  if(arr[j]<0)
                  q.push_back(arr[j]) ; 
                  if(j-i+1<k ) j++ ; 
                  else if(j-i+1==k){
                      if(q.size()==0) ans.push_back(0) ;
                      else 
                      {ans.push_back(q.front()) ; 
                      if(arr[i]==q.front()) q.pop_front() ; 
                      }
                      i++  ; j++ ;  
                    
                  }
              }
              return ans ;
 }