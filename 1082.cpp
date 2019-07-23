#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a, b, n;
  cin >> a >> b >> n;

  int tmp;
  for (int i = 0; i < n; i++) {
    a = a * 10;
		tmp = a / b;
		a = a % b;
  }

  cout << tmp;

  return 0;
}
