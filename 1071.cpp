#include <bits/stdc++.h>
using namespace std;

int main()
{
  int k;
  cin >> k;

  int a = 0;
  int b = 0;

  for (int i = 0; i < k; i++)
  {
    if (i == 0 || i == 1)
    {
      a = 1;
      b = 1;
      continue;
    }

    int beforeA = a;
    int beforeB = b;
    a = beforeB;
    b = beforeA + beforeB;
  }

  cout << b;

  return 0;
}
