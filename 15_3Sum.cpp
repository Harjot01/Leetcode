#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        set<vector<int>> s; // yahape bss set hi hmari saari game khrab kr rha hai
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++) // n operations
        {

            // Koi aisa way soch jisse hum duplicate elements ko "set" ke bina identify kr ske
            int left = i + 1;
            int right = nums.size() - 1;
            while (left < right) // n opeartions (for loop ko include krke n^2 operations)
            {

                int sum = nums[i] + nums[left] + nums[right];
                if (sum == 0)
                {
                    vector<int> temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[left]);
                    temp.push_back(nums[right]);
                    s.insert(temp); // yahape set ka insert function baar baar temp ki itni badi array ko insert krra duplicacy remove krke (pehle temp ke ander values pass hoti phir set ke ander). Time complexity to insert values into set is log(n). Toh pichle loops ko include krke (n^2 * log(n))

                    left++;
                    right--;
                }
                else if (sum < 0)
                {
                    left++;
                }
                else
                    right--;
            }
        }
        for (auto var : s) // aur ab yahape phir copy krenge hum set ki values ko vector mai (n operations). Pichle part ko mila ke (n + n^2 * log(n)) -> iski n isliye kyuki ye loops ke bahar hai
        {
            result.push_back(var);
        }
        return result;
    }
};

int main()
{
    vector<int> arr = {0, 0, 0};
    Solution s;
    vector<vector<int>> result = s.threeSum(arr);
    for (vector<int> vec : result)
    {
        for (int var : vec)
        {
            cout << var << " ";
        }
    }
    return 0;
}