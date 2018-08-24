#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  printf("%.2lf", (double)((c * d - a * b) / (d - b)));

  return 0;
}
