#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        set<vector<int>> s;
        vector<vector<int>> result;
        sort(nums.begin() , nums.end());
        int size = nums.size();
        for(int i = 0 ;i<size;i++)
        {
            for(int j = i+1; j <size ;j++)
            {
                int left = j+1;
                int right = size - 1;

                while(left<right)
                {
                    long long sum=nums[left];
                    sum+=nums[i];
                    sum+=nums[j];
                    sum+=nums[right];
                    if(sum == target)
                    {
                        s.insert({nums[left] , nums[i] , nums[j] , nums[right]});
                        left++;  
                        right--;

                    }
                    else if(sum < target)
                    {
                        left++;                 
                    }
                    else
                    {
                        right--;
                    }
                
                }
            }
        }
        for(auto var : s)
        {
            result.push_back(var);
        }
        return result;
    }
};