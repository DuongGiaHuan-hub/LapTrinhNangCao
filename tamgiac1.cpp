#include <iostream>

using namespace std;

int main()
{
   int x;
   cin >> x;
  for(int i = 0; i < x; i++)
  {
      for(int j = x; j > 0; j--)
      {
          if(j <= x - i) cout << "*";
          else cout << " ";
      }
       cout << endl;
  }
   return 0;
}


