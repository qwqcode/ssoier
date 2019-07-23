#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;

  int total = 0;

  for (int i = 0; i < n; i++) {
    int num;
    cin >> num;

    int one = num / 1 % 10;
    int ten = num / 10 % 10;
    int hundred = num / 100 % 10;
    int thousand = num / 1000 % 10;

    if ((one - thousand - hundred - ten) > 0) {
      total++;
    }
  }

  cout << total;

  return 0;
}
