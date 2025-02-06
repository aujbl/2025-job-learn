class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> num_set;
        for (auto n : nums) {
            num_set.insert(n);
        }

        int longest = 0;
        for (auto n : num_set) {
            if (num_set.count(n - 1) == 0) {    // n前面没有连续的数字
                int start = n;                  // 从n开始统计最长可以达到多少
                int len = 1;
                while (num_set.count(start + 1)) {
                    start += 1;
                    len += 1;
                }

                longest = max(longest, len);
            }
        }
        return longest;
    }
};