#include <bits/stdc++.h>
using namespace std;

int main()
{
  double a, b, c, d, x;
  cin >> x >> a >> b >> c >> d;
  double computed1 = (a * ((x * x) * x)) + (b * (x * x)) + (c * x) + d;
  cout << fixed << setprecision(7) << computed1;

  return 0;
}
