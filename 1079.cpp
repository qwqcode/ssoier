#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;

  double sum = 0;
  for (int i = 1; i < n + 1; i++) {
    if (i % 2 == 1) {
      // i 偶数
      sum += 1/(double)i;
    } else {
      // i 奇数
      sum -= 1/(double)i;
    }
  }

  cout << fixed << setprecision(4) << sum;

  return 0;
}
