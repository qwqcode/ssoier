#include <bits/stdc++.h>
using namespace std;

int main()
{
  string a;

  cin >> a;

  int startTurnLine = 3;

  int i = 0;
  bool isStageOne = true;
  while (true) {
    if (i == startTurnLine) {
      isStageOne = false;
    }

    if (isStageOne) {
      i++;
    } else {
      i--;
    }

    if (i == 0)
      break;

    // 空格
    for (int o = 0; o < (startTurnLine-i); o++) {
      cout << " ";
    }

    // 字符
    for (int o = 0; o < (i*2-1); o++) {
      cout << a;
    }
    cout << endl;
  }

  return 0;
}
