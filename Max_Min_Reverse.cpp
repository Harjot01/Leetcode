// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

void reverse(vector<int> &v)
{
    int i = 0;
    int j = v.size()-1;

    while (i<j)
    {
        swap(v[i] , v[j]);
        i++;
        j--;
    }
    
}

int Max(vector<int> &v)
{
    int max = v[0];
    for (int i = 1; i < v.size(); i++)
    {
          if(v[i] > max)
            {
                max = v[i];
            }
        
    }
    return max;
}

int Min(vector<int> &v)
{
    int min = v[0];
    for (int i = 1; i < v.size(); i++)
    {
          if(v[i] < min)
            {
                min = v[i];
            }
        
    }
    return min;
}



int main()
{
    int size ;
    cin >> size;
    vector<int> vec;
    for (int i = 0; i < size; i++)
    {
        int x ;
        cin >>x;
        vec.push_back(x);
    }
    // reverse(vec);
    // for (int i = 0; i < size; i++)
    // {
    //     cout<<vec[i];
    // }
    cout<<Max(vec);
    cout<<Min(vec);

    
    return 0;
} 