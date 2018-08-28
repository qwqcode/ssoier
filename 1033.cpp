#include <bits/stdc++.h>
using namespace std;

int main()
{
  double Xa, Ya, Xb, Yb;

  cin >> Xa >> Ya;
  cin >> Xb >> Yb;

  double howLong = sqrt(pow(Xb-Xa, 2) + pow(Yb-Ya, 2));

  cout << fixed << setprecision(3) << howLong;

  return 0;
}
