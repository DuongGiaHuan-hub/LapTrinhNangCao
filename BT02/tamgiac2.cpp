#include <iostream>
#include <math.h>

using namespace std;

int main()
{
   int x;
   cin >> x;
  for(int i = 0; i < x; i++)
  {
      for(int j = x; j >= -x; j--)
      {
          if(abs(j) <= i) cout << "*";
          else cout << " ";
      }
       cout << endl;
  }
   return 0;
}


