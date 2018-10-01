#include <bits/stdc++.h>
using namespace std;

int main()
{
  int yuan = 0;
  int perMonthGive = 300;
  int store = 0;
  int month = 0;
  int notEngouhMonth = 0;

  for (int month = 1; month < (12)+1; month++) {
    int need;
    cin >> need;

    int afterTake = yuan + perMonthGive - need;
    if (afterTake > 100) {
      int howMany100 = (int)((double)afterTake/100);
      afterTake -= howMany100*100;
      store += howMany100*100;
    }
    if (afterTake < 0) {
      if (notEngouhMonth == 0) {
        notEngouhMonth = month;
        //break;
      }
    }

    yuan = afterTake;
  }


  /*cout << "Yuan: " << yuan << endl;
  cout << "Store: " << store << endl;
  cout << "NotEngouhMonth: " << notEngouhMonth << endl;
  cout << "Store*:" << store*(1+0.2) << endl;*/

  cout << ((notEngouhMonth != 0) ? -notEngouhMonth : yuan+store*(1+0.2));

  return 0;
}
