#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;

  int sum = 0;
  for (int i = 0; i < n; i++) {
    int input;
    cin >> input;
    if (input == m)
      sum++;
  }

  cout << sum;

  return 0;
}
