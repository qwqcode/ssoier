#include <bits/stdc++.h>
using namespace std;

int main()
{
  double pi = 3.14;

  double r;
  cin >> r;

  double v = (4*pi*pow(r, 3))/3;

  cout << fixed << setprecision(2) << v;

  return 0;
}
