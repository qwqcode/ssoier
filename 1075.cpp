#include <bits/stdc++.h>
using namespace std;

int main()
{
  int total, n;
  cin >> total;
  cin >> n;
  int unpersonNum = 0;
  for (int i = 0; i < n; i++) {
    int input;
    cin >> input;
    if (input <= total) {
      total -= input;
    } else {
      unpersonNum++;
    }
  }

  cout << unpersonNum;

  return 0;
}
