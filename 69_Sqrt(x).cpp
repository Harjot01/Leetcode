#include<bits/stdc++.h>
using namespace std;

int intSqrt(int n)
{
    int s = 0, e = n;
    long long ans = -1;
    while(s <= e)
    {
        long long mid = s + (e - s)/2;
        if(mid * mid == n)
            return mid;
        else if(mid * mid > n)
            e = mid - 1;
        else
        {
            ans = mid;
            s = mid + 1;
        }
    }
    return ans;
}

double morePrecision(int n, int precision, int tempSol)
{
	double factor = 1;
	double ans = tempSol;
	for (int i = 0; i < precision; ++i)
	{
		factor = factor / 10;
		for (double j = ans; j * j < n; j = j + factor)
		{
			ans = j;
		}
	}
	return ans;
}


int main()
{
	int n;
	cin>>n;
	int tempSol = intSqrt(n);
	double ans = morePrecision(n, 9, tempSol);
	cout<<ans<<endl;
	return 0;
}