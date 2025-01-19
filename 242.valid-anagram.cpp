/*
 * @lc app=leetcode id=242 lang=cpp
 *
 * [242] Valid Anagram
 */

#include <iostream>
#include <map>

using namespace std;

// @lc code=start
class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        if (s.size() != t.size())
        {
            return false;
        }
        map<char, int> mp;
        for (char c : s)
        {
            mp[c]++;
        }
        for (char c : t)
        {
            if (--mp[c] < 0)
            {
                return false;
            }
        }
        return true;
    }
};
// @lc code=end
int main()
{
    Solution solution;
    vector<pair<string, string>> input = {{"anagram", "nagaram"}, {"rat", "car"}, {"cat", "cat"}};
    for (auto &item : input)
    {
        cout << solution.isAnagram(item.first, item.second) << endl;
    }
    return 0;
}
