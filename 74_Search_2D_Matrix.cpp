// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int s = 0, e = matrix.size() * matrix[0].size() - 1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        int i = mid / matrix[0].size();
        int j = mid % matrix[0].size();
        if (matrix[i][j] == target)
            return true;
        else if (matrix[i][j] > target)
            e = mid - 1;
        else
            s = mid + 1;
    }
    return false;
}

int main()
{
    vector<vector<int>> arr = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    bool result = searchMatrix(arr, 23);
    if (result)
        cout << "True";
    else
        cout << "False";

    return 0;
}