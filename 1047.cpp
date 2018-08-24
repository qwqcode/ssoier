#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;

  bool can3 = n%3==0;
  bool can5 = n%5==0;
  bool can7 = n%7==0;

  if (can3 && can5 && can7) {
    cout << "3 5 7";
  } else {
    if (can3 && can5) {
      cout << "3 5";
    } else if (can3 && can7) {
      cout << "3 7";
    } else if (can5 && can7) {
      cout << "5 7";
    } else if (can3) {
      cout << "3";
    } else if (can5) {
      cout << "5";
    } else if (can7) {
      cout << "7";
    } else {
      cout << "n";
    }
  }

  return 0;
}
