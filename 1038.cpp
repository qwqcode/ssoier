#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, x, y;

  cin >> n >> x >> y;

  int result = ((y%x == 0) ? n-y/x : (n-y/x)-1);
  int lastResult = result >= 0 ? result : 0; // 苹果不会有负数

  cout << lastResult;

  return 0;
}
