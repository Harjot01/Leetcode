// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

void BubbleSort(vector<int> &arr, int n)
{
    if(n == 1)
        return;

    for(int j = 0; j <= n - 2; ++j)
    {
        if(arr[j] > arr[j + 1])
            swap(arr[j], arr[j + 1]);
    }

    BubbleSort(arr, n - 1);
}

int main()
{
    vector<int> vec = {5, 3, 4, 1, 2, 6};
    BubbleSort(vec, vec.size());
    for(auto v : vec)
    {
        cout<<v<<" ";
    }
    return 0;
}