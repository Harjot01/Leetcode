// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

void InsertionSort(vector<int> &arr, int n)
{
    if(n <= 1)
        return;
    
    InsertionSort(arr, n - 1);

    int last = arr[n - 1];
    int j = n - 2;
    
    while(j >= 0 and arr[j] > last)
    {
        arr[j + 1] = arr[j];
        j--;
    }
    arr[j + 1] = last;
}   

int main()
{
    vector<int> vec = {5, 3, 4, 1, 2, 6};
    InsertionSort(vec, vec.size());
    for (auto v : vec)
    {
        cout << v << " ";
    }
    return 0;
}