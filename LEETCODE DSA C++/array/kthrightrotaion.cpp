
https://leetcode.com/problems/rotate-array/
void reverse(vector<int>& arr, int low, int high)
{
	while(low < high)
	{
		swap(arr[high], arr[low]);
		low++;
		high--;
	}
} 
    void rotate(vector<int>& v1, int k) {
    
      if (k == 0) return  ;
	k = k % v1.size(); // if d is greater than vector size then
	reverse(v1, 0, v1.size() - 1);
	reverse(v1, 0, k - 1);
	reverse(v1, k, v1.size() - 1); 
//dsadf 
    }