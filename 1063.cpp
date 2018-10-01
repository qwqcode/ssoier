#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;

  int max = 0;
  int min = 0;

  for (int i = 0; i < n; i++) {
    int num;
    cin >> num;

    if (i == 1) {
      min = n;
    }

    if (num > max)
      max = num;
    if (num < min)
      min = num;
  }

  cout << (max-min);

  return 0;
}
