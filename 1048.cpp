#include <bits/stdc++.h>
using namespace std;

int main()
{
  double chinese, math;
  cin >> chinese >> math;

  //cout << ((chinese < 60 || math < 60) ? 1 : 0); // “恰好有一门课”，这样写包括两科不及格的情况。。。

  cout << ((chinese < 60 && math >= 60) || (chinese >= 60 && math < 60)) ? 1 : 0;

  return 0;
}
