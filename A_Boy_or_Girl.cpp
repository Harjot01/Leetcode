// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    unordered_map<char, int> mp;
    int cnt(0);
    for (int i = 0; i < s.size(); ++i)
    {
        if (mp.find(s[i]) == mp.end())
            cnt++;
        mp[s[i]] = 1;
    }
    
    if(cnt & 1)
        cout<<"IGNORE HIM!";
    else
        cout<<"CHAT WITH HER!";
    return 0;
}