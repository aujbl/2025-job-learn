class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int left = 0, right = 0;
        int len = nums.size();
        while (right < len) {
            if (nums[right] == 0) {
                right++;
            } else {
                nums[left] = nums[right];
                if (left != right) {
                    nums[right] = 0;
                }
                left++;
                right++;
            }
        }
    }
};