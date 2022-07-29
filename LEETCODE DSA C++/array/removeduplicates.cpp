void remove_duplicate(int arr[], int n)
{
    int j = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[j])
        { arr[j++] = arr[i];  }  
    }
    for (int i = 0; i < j + 1; i++)
        cout << arr[i] << " ";   
}

//HASHING 
int removeDuplicates(vector<int>& nums) {
        int j=0;
        if (nums.size()==0) return 0;
        set<int>s(nums.begin(),nums.end());
        for(auto i :s)
          nums[j++]=i; 
        return s.size();
        
    }