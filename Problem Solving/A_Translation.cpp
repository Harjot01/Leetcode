// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    cin>>s>>t;
    int low = 0, high = s.size() - 1;
    while(low < high)
        swap(s[low++], s[high--]);
    
    if(s == t)  
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}