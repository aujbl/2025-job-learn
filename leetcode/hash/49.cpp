#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string, vector<string>> m;
        for (auto s : strs) {
            auto ss = s;
            sort(ss.begin(), ss.end());
            m[ss].emplace_back(s);
        }
        for (auto pair : m) {
            res.emplace_back(pair.second);
        }
        return res;
    }
};

int main()
{
    // cout << "hello world" << endl;
    Solution s;


    return 0;
}