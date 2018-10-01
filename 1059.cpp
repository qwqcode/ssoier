#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int sum = 0;

  for (int i = 0; i < n; i++) {
    int age;
    cin >> age;
    sum += age;
  }

  double svg = (double)sum/(double)n;

  cout << fixed << setprecision(2) << svg;

  return 0;
}
