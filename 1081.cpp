#include <bits/stdc++.h>
using namespace std;

int perPerson[2] = {};

int main()
{
  int n;
  cin >> n;

  int total = 0;

  int appleNum = 1;
  for (int i = 0; i < n; i++) {
    total += appleNum;

    // 每个人都多分一个苹果
    appleNum++;
  }

  cout << total;

  return 0;
}
