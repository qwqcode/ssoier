#include <bits/stdc++.h>
using namespace std;

int main()
{
  double pi = 3.14;
  int h, r; // cm
  cin >> h >> r;

  double v = pi*pow(r, 2)*h; // cm³
  double needDrink = 20*1000; // 1l=1000cm³

  double tinNum = needDrink/v;

  cout << ceil(tinNum);

  return 0;
}
