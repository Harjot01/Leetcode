#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeDuplicates(string s) {
        string result = "";
        stack<char> st;
        for(auto c : s)
        {
            if(!st.empty() && st.top() == c)
            {
                st.pop();
            }
            else
                st.push(c);

        }
        while(!st.empty())
        {
            result+= st.top();
            st.pop();
        }
        reverse(result.begin() , result.end());
        return result;

    }
};