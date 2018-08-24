#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;

  cin >> n;

  cout << (((n % 3 == 0) && (n % 5 == 0)) ? "YES" : "NO");

  return 0;
}
