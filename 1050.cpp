#include <bits/stdc++.h>
using namespace std;

int main()
{
  int s;
  cin >> s;

  double walkLong = s/1.2;
  double bikeLong = 27+23+(s/3.0);

  if (walkLong > bikeLong)
    cout << "Bike";
  else if (walkLong < bikeLong)
    cout << "Walk";
  else if (walkLong == bikeLong)
    cout << "All";

  return 0;
}
