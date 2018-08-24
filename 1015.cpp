#include <bits/stdc++.h>
using namespace std;

int main()
{
  float r1, r2;
  cin >> r1 >> r2;

  double R = 1 / ((1 / r1) + (1 / r2));

  cout << fixed << setprecision(2) << R;

  return 0;
}
