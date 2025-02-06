#include <iostream>
#include <stdio.h>
#include <vector>
#include <unordered_map>

using namespace std;


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        int len = nums.size();
        vector<int> res(2);
        for (int i = 0; i < len; i++) {
            if (m.count(target - nums[i]) > 0) {
                res[0] = m[target - nums[i]];
                res[1] = i;
                break;
            } else {
                m[nums[i]] = i;
            }
        }
        return res;
    }
};

int main()
{
    // cout << "hello world" << endl;
    Solution s;
    // vector<int> nums = {3, 3};
    // int target = 6;

    // vector<int> nums = {3, 2, 4};
    // int target = 6;

    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    auto res = s.twoSum(nums, target);
    for (auto n : res) {
        cout << n << " ";
    }
    cout << endl;

    return 0;
}