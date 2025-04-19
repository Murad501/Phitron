#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
    cin.tie(nullptr);
  int s, t;
  cin >> s >> t;
  int cnt = 0;
  for (int a=0 ; a<=100 ; a++)
  {
      for (int b=0 ; b<=100 ; b++) 
      {
          for (int c=0 ; c<=100 ; c++)
          {
              if (((a+b+c)<=s) && ((a*b*c)<=t))
              {
                  cnt++;
              }
          }
      }
  }
  cout << cnt <<'\n';

  return 0;
}