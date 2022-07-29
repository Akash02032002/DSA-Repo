vector<int> leaders(int arr[], int n)
{
    vector<int> ans;

    for (int i = 0; i < n - 1; i++)
    {
        bool flag = true;
        for (int j = i + 1; j < n; j++)
        {
            if ((arr[i] < arr[j]))
            {
                flag = false;
                break;
            }
        }
        if (flag == true)
            ans.push_back(arr[i]); 
    }
    ans.push_back(arr[n - 1]);
    return ans;
}

//optimize last element is always leader put leader and compare and update leader everytime 
vector<int> leaders(int arr[], int n){
        vector<int>ans; 
        int leader = arr[n-1] ; ans.push_back(leader);
        for(int i=n-1 ; i>=0 ; i--){
            if(leader<=arr[i-1]){
              leader=arr[i-1] ;
              ans.push_back(leader) ; }
        }
        reverse(ans.begin() , ans.end()); 
        return ans ;
    }

