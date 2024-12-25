#include<iostream>
#include<stack>
using namespace std;


class Solution {
public:
    bool isValid(string s) {
        stack<char> s1;
        for(auto var : s)
        {
            if(s1.empty())
            {
                s1.push(var);
            }
            else if(s1.top() == '(' && var ==')'||
                    s1.top() == '[' && var ==']'||
                    s1.top() == '{' && var =='}')
            {
                s1.pop();
            }
            else
            {
                s1.push(var);
            }
        }
        if(s1.empty())
        {
            return true;
        }
        else
        return false;
        
    }
};