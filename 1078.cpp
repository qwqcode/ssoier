#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;

  int up = 2;
  int down = 1;
  double sum = (double)up/(double)down;

  for (int i = 0; i < n - 1; i++) {
    int computedNxtUp = up + down;
    down = up;
    up = computedNxtUp;
    // cout << up << "/" << down << endl;
    sum += (double)up/(double)down;
  }

  cout << fixed << setprecision(4) << sum;

  return 0;
}
