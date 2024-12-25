// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>> &matrix)
{
    for (int i = 0; i < matrix.size(); ++i)
    {
        for (int j = i + 1; j < matrix.size(); ++j)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    for (int i = 0; i < matrix.size(); ++i)
    {
        int s = 0, e = matrix[i].size() - 1;
        while (s <= e)
        {
            swap(matrix[i][s], matrix[i][e]);
            s++;
            e--;
        }
    }
}

int main()
{
    vector<vector<int>> arr = {{5, 1, 9, 11}, {2, 4, 8, 10}, {13, 3, 6, 7}, {15, 14, 12, 16}};
    rotate(arr);
    for (vector<int> vec : arr)
    {
        for (int i : vec)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}