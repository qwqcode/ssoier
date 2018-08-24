#include <bits/stdc++.h>
using namespace std;

int main()
{
  double a, b, computed1;
  cin >> a >> b;
  computed1 = (b / a) * 100;
  cout << fixed << setprecision(3) << computed1 << "%";

  return 0;
}
