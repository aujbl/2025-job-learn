class Solution {
public:
    int maxArea(vector<int>& height) {
        int len = height.size();
        int left = 0;
        int right = len - 1;
        int res = 0;
        while (left < right) {
            int area = min(height[left], height[right]) * (right - left);
            res = max(res, area);
            int tmp_height;
            if (height[left] >= height[right]) {
                tmp_height = height[right];
                while (right > left && height[right] <= tmp_height) {
                    right--;
                }
            } else {
                tmp_height = height[left];
                while (left < right && height[left] <= tmp_height) {
                    left++;
                }
            }
        }
        return res;
    }
};