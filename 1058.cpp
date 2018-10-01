#include <bits/stdc++.h>
using namespace std;

int main()
{
  double a, b, c;
  cin >> a >> b >> c;

  double delta = b*b-4*a*c;
  if (delta < 0) {
    cout << "No answer!";
    return 0;
  }

  double x1 = (0-b+sqrt(delta))/(2*a);
  if (delta == 0) {
    printf("x1=x2=%.5lf", x1);
    return 0;
  }

  double x2 = (0-b-sqrt(delta))/(2*a);
  printf("x1=%.5lf;x2=%.5lf", x1, x2);

  return 0;
}
