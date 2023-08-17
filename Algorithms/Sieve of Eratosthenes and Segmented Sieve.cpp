// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

void simpleSeive(int n, vector<int> &primes)
{
    vector<bool> isPrime(n + 1, true);
    for (int i = 2; i <= n; ++i)
    {
        if (isPrime[i])
        {
            primes.push_back(i);
            for (int j = i * i; j <= n; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
}

void segmentedSeive(int L, int R)
{
    int limit = sqrt(R) + 1;
    vector<int> primes;
    simpleSeive(limit, primes);

    vector<bool> isPrimeRange(R - L + 1, true);
    isPrimeRange[0] = isPrimeRange[1] = false;
    for (int prime : primes)
    {
        int firstMultiple = (L / prime) * prime;
        if (firstMultiple < L)
        {
            firstMultiple += prime;
        }
        for (int j = max(firstMultiple, prime * prime); j <= R; j += prime)
        {
            isPrimeRange[j - L] = 0;
        }
    }

    for (int i = L; i <= R; ++i)
    {
        if (isPrimeRange[i - L])
            cout << i << " ";
    }
}

int main()
{
    segmentedSeive(110, 130);
    return 0;
}