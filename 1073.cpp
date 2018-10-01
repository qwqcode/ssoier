#include <bits/stdc++.h>
using namespace std;

int saveOne(double &totalTime) {
  double perTotalTime = 0;
  double x, y;
  int manNum;
  cin >> x >> y >> manNum;
  double s = sqrt(x*x+y*y);
  perTotalTime += s/50; // 去
  perTotalTime += 1*manNum; // 上车
  perTotalTime += s/50; // 回
  perTotalTime += 0.5*manNum; // 下车

  totalTime += perTotalTime;
}

int main()
{
  int n;
  cin >> n;

  double totalTime = 0;
  for (int i = 0; i < n; i++) {
    saveOne(totalTime);
  }

  cout << (int)ceil(totalTime);

  return 0;
}
