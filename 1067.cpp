#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;

  int a = 0, b = 0, c = 0;
  for (int i = 0; i < n; i++) {
    int input;
    cin >> input;

    if (input == 1)
      a++;
    if (input == 5)
      b++;
    if (input == 10)
      c++;
  }

  cout << a << endl << b << endl << c;

  return 0;
}
