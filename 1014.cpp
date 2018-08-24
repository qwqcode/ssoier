#include <bits/stdc++.h>
using namespace std;

int main()
{
  double pi = 3.14159;
  double r;
  cin >> r;

  cout << fixed << setprecision(4) << 2 * r << " ";      // 直径
  cout << fixed << setprecision(4) << 2 * pi * r << " "; // 周长
  cout << fixed << setprecision(4) << pi * r * r;        // 面积

  return 0;
}
