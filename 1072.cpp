#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  string result = "";

  double before = 0;
  for (int i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;
    if (i == 0) {
      before = (double)b/(double)a;
      continue;
    }

    double after =  (double)b/(double)a;
    if (before - after > 0.05) {
      result += "worse";
    } else if (-before + after > 0.05) {
      result += "better";
    } else {
      result += "same";
    }

    result += "\n";
  }

  cout << result;

  return 0;
}
