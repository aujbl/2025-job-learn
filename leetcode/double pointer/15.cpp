class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        int i = 0;
        int j = 1;
        int k = 2;
        int len = nums.size();
        sort(nums.begin(), nums.end());
        for (int i = 0; i < len - 2; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }
            for (int j = i + 1; j < len - 1; j++) {
                if (j > i + 1 && nums[j] == nums[j - 1]) {
                    continue;
                }
                int target = 0 - nums[i] - nums[j];
                int left = j + 1;
                int right = len - 1;
                while (left <= right) {
                    int mid = (left + right) >> 1;
                    if (nums[mid] > target) {
                        right = mid - 1;
                    } else if (nums[mid] < target) {
                        left = mid + 1;
                    } else {
                        res.push_back({nums[i], nums[j], nums[mid]});
                        break;
                    }
                }
            }
        }
        return res;
    }
};