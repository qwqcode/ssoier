#include <bits/stdc++.h>
using namespace std;

int tmpStore(int &tmpTime, int &maxTime)
{
  if (tmpTime > maxTime) {
    maxTime = tmpTime;
  }
  tmpTime = 0;
}

int main()
{
  int n;
  cin >> n;
  int maxTime = 0;
  int tmpTime = 0;
  for (int i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;
    if ((a >= 90 && a <= 140) && (b >= 60 && b <= 90)) {
      tmpTime++;
    } else {
      tmpStore(tmpTime, maxTime);
    }
  }

  tmpStore(tmpTime, maxTime);

  cout << maxTime;

  return 0;
}
