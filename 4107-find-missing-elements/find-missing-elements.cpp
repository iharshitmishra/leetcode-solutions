class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;
        sort(nums.begin(), nums.end());
        for (int i = 1; i < nums.size(); i++) {
            for (int val = nums[i-1] + 1; val < nums[i]; val++) {
                ans.push_back(val);
            }
        }
        return ans;
    }
};