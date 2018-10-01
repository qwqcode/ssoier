#include <bits/stdc++.h>
using namespace std;

int my_pow(int a, int n)
{
  int last = 1;
  for (int i = 0; i < n; i++) {
    last = a*last;
  }

  return last;
}

int main()
{
  int a, n;
  cin >> a >> n;
  cout << my_pow(a, n);

  return 0;
}
