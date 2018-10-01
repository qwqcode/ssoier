#include <bits/stdc++.h>
using namespace std;

int main()
{
  double x1, y1, x2, y2, x3, y3;

  cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

  double a = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
  double b = sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
  double c = sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));

  double p = (a+b+c)/2;
  double s = sqrt(p*(p-a)*(p-b)*(p-c));
  cout << fixed << setprecision(2) << s;

  return 0;
}
