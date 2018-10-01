#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a, b;
  char type;
  cin >> a >> b >> type;

  switch (type) {
    case '+':
      cout << a+b;
      break;

    case '-':
      cout << a-b;
      break;

    case '*':
      cout << a*b;
      break;

    case '/':
      if (b == 0) {
        cout << "Divided by zero!";
        break;
      }
      cout << a/b;
      break;

    default:
      cout << "Invalid operator!";
      break;
  }

  return 0;
}
