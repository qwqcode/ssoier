#include <bits/stdc++.h>
using namespace std;

int main()
{
  int line = 1;
  int i = 0;

  int j = 0;
  int y = 0;
  int t = 0;

  do {
    if (i == 0) {
      int input;
      cin >> input;
      line += input;
    }

    for (int o = 0; o < 3; o++) {
      int input;
      cin >> input;
      switch (o) {
        case 0:
          j += input;
          break;
        case 1:
          y += input;
          break;
        case 2:
          t += input;
          break;
      }
    }

    i++;
  } while (i < line-1);

  cout << j << " " << y << " " << t << " " << (j+y+t);

  return 0;
}
