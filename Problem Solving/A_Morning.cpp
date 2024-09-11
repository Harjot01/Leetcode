#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  int nums[] = {1,2,3,4,5,6,7,8,9,0};

  while (t--) {
    string pin;
    cin >> pin;

    int ans = 0;
    int cursor = 0;

    for(int i = 0; i < 4; i++) {
      int curr = pin[i] - '0';

      if(nums[cursor] == curr) {
        ans += 1;
      }

      else {
        int dest;

        if(curr == 0) dest = 9;
        else dest = curr - 1;

        ans += abs(cursor - dest) + 1;
        cursor = dest;
      }
    }

    cout << ans << endl;
  }

  return 0;
}