#include <bits/stdc++.h>
using namespace std;

int main()
{
  int wight;
  char expedited;
  cin >> wight >> expedited;

  bool isExpedited = (expedited == 'y') ? true : false;

  int money = 0;
  money += 8;

  if (wight > 1000) {
    int overWight = wight-1000;
    int howMany500 = overWight/500;
    if (overWight%500 != 0) {
      howMany500++;
    }
    money += howMany500*4;
  }

  if (isExpedited) {
    money += 5;
  }

  cout << money;

  return 0;
}
