// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

void Merge(vector<int> &arr, int l, int mid, int r)
{
    vector<int> temp(arr.size());
    int i = l, j = mid + 1, k = l;
    
    while(i <= mid and j <= r)
    {
        if(arr[i] < arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];
        }
    }

    while(i <= mid)
    {
        temp[k++] = arr[i++];
    }
    
    while(j <= r)
    {
        temp[k++] = arr[j++];
    }

    for(int p = l; p <= r; ++p)
    {
        arr[p] = temp[p];
    }
}

void MergeSort(vector<int> &arr, int l, int r)
{
    if(l < r)
    {
        int mid = (l + r)/2;
        MergeSort(arr, l, mid);
        MergeSort(arr, mid + 1, r);
        Merge(arr, l, mid, r);
    }
}

int main()
{
    vector<int> vec = {5, 3, 4, 1, 2, 6};
    MergeSort(vec, 0, vec.size() - 1);
    for(auto v : vec)
    {
        cout<<v<<" ";
    }
    return 0;
}