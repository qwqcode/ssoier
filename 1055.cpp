#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long year;
  cin >> year;

  // 能被4整除但不能被100整除的年份为普通闰年
  cout << ((year%4==0) && ((year%100!=0) || (year%400==0)) ? "Y" : "N");

  return 0;
}
