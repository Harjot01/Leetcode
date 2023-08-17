#include<bits/stdc++.h>
using namespace std;



bool isPossible(vector<int> &boards, int k, int mid) {
  int PersonCount = 1;
  int BoardsCount = 0;
  for (int i = 0; i < boards.size(); i++) 
  {
    if (BoardsCount + boards[i] <= mid) 
    {
      BoardsCount += boards[i];
    } 
    else 
    {
    PersonCount++;
    if (PersonCount > k || boards[i] > mid) 
    {
      return false;
    }
    BoardsCount = boards[i];
    }
  }
    return true;

}

int findLargestMinDistance(vector<int> &boards, int k) {
  int s = 0;
  int size = boards.size();
  int sum = 0;
  for (int i = 0; i < size; i++) {
    sum += boards[i];
  }
  int e = sum;
  int mid = (s + e) / 2;
  int ans = -1;
  while (s <= e) {
    if (k <= size) {
      if (isPossible(boards, k, mid)) {
        ans = mid;
        e = mid - 1;
      } else {
        s = mid + 1;
      }
    } else {
      return -1;
    }
    mid = (s + e) / 2;
  }
  return ans;
}