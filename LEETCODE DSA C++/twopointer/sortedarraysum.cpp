//https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
vector<int> twoSum(vector<int>&arr, int target) {
        int i=0 , j =arr.size()-1 ; vector<int>ans; 
       while(i<j){
         if(arr[i]+arr[j]==target)  return {i+1 , j+1 } ;
         else if(arr[i]+arr[j]<target) i++ ; 
         else j-- ; 
       }
        return {} ;
    }