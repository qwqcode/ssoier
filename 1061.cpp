#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;

  int sum, nums[10000];

  for (int i =  1; i < n+1; i++) {
    cin >> nums[i-1];

    sum += nums[i-1];
  }

  double avg = 1.0*(double)sum/(double)n;

  printf("%d %.5lf", sum, avg);

  return 0;
}
