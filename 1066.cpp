#include <bits/stdc++.h>
using namespace std;

int main()
{
  int m, n;
  cin >> m >> n;
  int sum;

  for (; m <= n; m++) {
    if (m % 17 == 0) {
      sum += m;
    }
  }

  cout << sum;

  return 0;
}
