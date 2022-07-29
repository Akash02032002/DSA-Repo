//https://leetcode.com/problems/move-zeroes/
//NAIVE SOLUTION 
 void moveZeroes(vector<int>& arr) {
        int n=arr.size() ;
    for (int i = 0 ; i < n ; i++) {
		if (arr[i] == 0) {
			for (int j = i + 1 ; j < n ; j++) {
				if (arr[j] != 0) {
					swap(arr[i], arr[j]);
					break;
				}
			}
		}
	}}

    //OPTIMAL SOLUTION 
    //IN THIS FIRST I AM PUTTING ALL THE ELEMENT NONZERO ELEMETN LEFT AND THEN 0 AFTER THIS 
    void moveZeroes(vector<int>& nums) {
        int j = 0;
        // move all the nonzero elements advance
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[j++] = nums[i];
            }
        }
        for (;j < nums.size(); j++) {
            nums[j] = 0;
        }
    }

    //IN THIS APPROACAH FIRST CHECK IF ELEMENT IS NOT ZEROS THEN CNT++ THEN AFTER WE WILL SWAP THAT CNT INDEX ELEMENT TO NON ZERO ELEMENT
        void moveZeroes(vector<int>& arr) {
        int n=arr.size() ;
	int cnt = 0 ;
	for (int i = 0; i < n ; i++) {
		if (arr[i] != 0) {
			swap(arr[i], arr[cnt]);
			cnt++;
		}
	}
}