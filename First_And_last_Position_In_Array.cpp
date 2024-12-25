// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

pair<int, int> firstAndLastPosition(vector<int> &arr, int n, int k)
{
    pair<int, int> p;
    int left = 0;
    int right = n - 1;
    int mid = (left + right) / 2;
    int temp = -1;
    while (left <= right)
    {
        if (arr[mid] == k)
        {
            temp = mid;
            right = mid - 1;
        }
        else if (k < arr[mid])
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
        mid = (left + right) / 2;
    }
    p.first = temp;
    left = 0;
    right = n - 1;
    mid = (left + right) / 2;
    temp = -1;
    while (left <= right)
    {
        if (arr[mid] == k)
        {
            temp = mid;
            left = mid + 1;
        }
        else if (k < arr[mid])
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
        mid = (left + right) / 2;
    }
    p.second = temp;
    return p;
}

int main()
{
    vector<int> vec = {0, 0, 1, 1, 2, 2, 2, 2};
    pair<int, int> p = firstAndLastPosition(vec, vec.size(), 2);
    cout << p.first << " " << p.second << endl;
    return 0;
}