#include <bits/stdc++.h>
using namespace std;

int main()
{
  int x, y;
  cin >> x >> y;

  bool in = true;

  if ((x > 1 || y > 1) || (x < -1 || y < -1))
    in = false;

  cout << (in ? "yes" : "no");

  return 0;
}
