#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    double x = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
    cout << x;

    return 0;
}
