#include <iostream>
#include <math.h>
#include <cmath>
#include <string>
#include <cstring>

using namespace std;

int main()
{
   string x, y, z;
   x = "a";
   y = "b";
   z = "ba";
   cout << "a" << endl << "b" << endl;
   for(int i = 0; i < 10; i++)
   {
       x = y;
       y = z;
       z = y + x;
       cout << z << endl;
   }
    return 0;
}
