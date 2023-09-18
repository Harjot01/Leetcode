#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> &pages, int n, int b, int mid) {
  int StudentCount = 1;
  int SumCount = 0;
  for (int i = 0; i < n; i++) {
    if (SumCount + pages[i] <= mid) {
      SumCount += pages[i];
    } else {
      StudentCount++;
      if (StudentCount > b || pages[i] > mid) {
        return false;
      }
      SumCount = pages[i];
    }
  }
  return true;
}

int allocateBooks(vector<int> &pages, int n, int b) {
  int s = 0;
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += pages[i];
  }
  int e = sum;
  int mid = (s + e) / 2;
  int ans = -1;
  while (s <= e) {
    if (b <= n) {

      if (isPossible(pages, n, b, mid)) {
        ans = mid;
        e = mid - 1;
      } else {

        s = mid + 1;
      }
    }
	else
	{
		return -1;
	}
    mid = (s + e) / 2;
  }
  return ans;
}