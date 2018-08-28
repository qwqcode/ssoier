#include <bits/stdc++.h>
using namespace std;

int main()
{
  int day;
  cin >> day;

  bool can;
  switch (day) {
    case 1:
      can = false;
      break;
    case 3:
      can = false;
      break;
    case 5:
      can = false;
      break;
    default:
      can = true;
      break;
  }

  cout << (can ? "YES" : "NO");

  return 0;
}
