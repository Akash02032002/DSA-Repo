//https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
class Solution {
public:
    vector<int> searchRange(vector<int>& v, int target) {
        int low = 0 ; int high = v.size() - 1 ;
        vector<int>ans;
        int res = -1, res1 = -1;
        while (low <= high) {
            int mid = (low + (high - low) / 2);
            if (v[mid] == target) {
                res = mid;
                high = mid - 1;
            }
            else if (v[mid] > target) {high = mid - 1;}
            else low = mid + 1;
        }
        ans.push_back(res);
        low = 0 , high = v.size() - 1 ;
        while (low <= high) {
            int mid = (low + (high - low) / 2);
            if (v[mid] == target) {
                res1 = mid;
                low = mid + 1;
            }
            else if (v[mid] > target) {high = mid - 1;}
            else low = mid + 1;
        }
        ans.push_back(res1);
        return ans;
    }
};