#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a, b, c;
  cin >> a >> b >> c;

  int arr[3] = {a, b, c};

  int theBigest;
  for (int i = 0; i < 3; i++) {
    if (i == 0) {
      theBigest = arr[0];
      continue;
    }

    if (arr[i] > theBigest) {
      theBigest = arr[i];
    }
  }

  cout << theBigest;

  return 0;
}
