vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        stack<long long > st ; vector<long long> ans; 
        for(int i=n-1 ; i>=0 ; i--){
            if(st.size()==0) ans.push_back(-1);         
            else if (st.size()>0 && arr[i]<st.top())
            ans.push_back(st.top());
            else if (st.size()>0 && arr[i]>=st.top()){
                while(st.size()>0 && arr[i]>=st.top()) st.pop();  //jbtk hatayenge tbtk ki mere st.top() jayda n aa jye ;
                if(st.size()==0) ans.push_back(-1) ; else ans.push_back(st.top());
            }
            st.push(arr[i]);
        }
        reverse(ans.begin() , ans.end()) ;
        return ans ;
    }