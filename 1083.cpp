#include <bits/stdc++.h>
using namespace std;

string days[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

int main()
{
  int a, b;
  cin >> a >> b;

  long long past = pow(a, b);
  cout << days[(past % 7) + 2];


  return 0;
}
