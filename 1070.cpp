#include <bits/stdc++.h>
using namespace std;

int main()
{
  int base, n;
  cin >> base >> n;

  double last = (double)base;
  for (int i = 0; i < n; i++) {
    last = last*(1+0.001);
  }

  cout << fixed << setprecision(4) << last;

  return 0;
}
