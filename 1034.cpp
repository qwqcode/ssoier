#include <bits/stdc++.h>
using namespace std;

int main()
{
  float x1, y1, x2, y2, x3, y3;

  cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

  float s = (x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2))/2;

  cout << fixed << setprecision(2) << s;

  return 0;
}
