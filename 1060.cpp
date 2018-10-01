#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  double sum = 0;

  for (int i = 0; i < n; i++)
  {
    double x;
    cin >> x;
    sum += x;
  }

  double svg = (double)sum / (double)n;

  cout << fixed << setprecision(4) << svg;

  return 0;
}
