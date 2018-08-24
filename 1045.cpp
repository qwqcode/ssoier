#include <bits/stdc++.h>
using namespace std;

int main()
{
  int x, g;
  cin >> x >> g;

  bool can = (x >= 10) || (g >= 20);

  cout << (can ? 1 : 0);

  return 0;
}
