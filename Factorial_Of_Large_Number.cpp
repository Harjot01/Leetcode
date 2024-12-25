// Don't Overthink, Just Code
#include <bits/stdc++.h>
#define MAX 1000
using namespace std;

int Multiply(int x, int res[], int res_size);

void Factorial(int n)
{
    int res[MAX];
    res[0] = 1;
    int res_size = 1;

    for (int i = 2; i <= n; ++i)
    {
        res_size = Multiply(i, res, res_size);
    }

    for (int i = res_size - 1; i >= 0; i--)
    {
        cout << res[i];
    }
}

int Multiply(int x, int res[], int res_size)
{
    int carry = 0;

    for (int i = 0; i < res_size; ++i)
    {
        int product = res[i] * x + carry;
        res[i] = product % 10;
        carry = product / 10;
    }

    while (carry)
    {
        res[res_size] = carry % 10;
        carry = carry / 10;
        res_size++;
    }
    return res_size;
}

int main()
{
    Factorial(100);
    return 0;
}