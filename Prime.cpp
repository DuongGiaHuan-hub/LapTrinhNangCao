#include <iostream>

using namespace std;

int main()
{
   int x;
   cin >> x;
   int a = 1;

   for(int i = 2; i < x; i++)
   {
       if(x % i == 0) a = 0;
   }
   if(a == 1) cout << "yes";
   if(a == 0) cout << "no";
   return 0;
}

