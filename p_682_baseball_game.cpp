#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> result;
        int size = 0;
        for(auto i : operations)
        {
            if(i == "+")
            {
                result.push_back(result[size-1] + result[size-2]);
                size++;
            }
            else if(i == "D")
            {
                result.push_back(2*result[size-1]);
                size++;
            }
            else if(i == "C")
            {
                result.pop_back();
                size--;
            }
            else
            {
                size++;
                result.push_back(stoi(i));
            }
        }
        int sum = 0;
        for(int i = 0; i<size; i++)
        {
            sum += result[i];
        }
        return sum ;
    }
};

int main()
{
    vector<string> vec = {"5","2","C","D","+"};
    Solution obj;
    obj.calPoints(vec);
    int result ;
    result = obj.calPoints(vec);
    cout<<result<<endl;
}