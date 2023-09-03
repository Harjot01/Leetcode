// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

int Partition(vector<int> &arr, int s, int e)
{
    int pivot = arr[e];
    int pIndex = s;

    for(int i = s; i < e; ++i)
    {
        if(arr[i] < pivot)
        {
            swap(arr[i], arr[pIndex]);
            pIndex++;
        }
    }
    swap(arr[e], arr[pIndex]);
    return pIndex;
}

void QuickSort(vector<int> &arr, int s, int e)
{
    if(s < e)
    {
        int p = Partition(arr, s, e);
        QuickSort(arr, s, p - 1);
        QuickSort(arr, p + 1, e);
    }
}

int main()
{
    vector<int> vec = {5, 3, 4, 1, 2, 6};
    QuickSort(vec, 0, vec.size() - 1);
    for (auto v : vec)
    {
        cout << v << " ";
    }
    return 0;
}