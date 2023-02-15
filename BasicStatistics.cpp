#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    double x, y;
    int mmax = a[0], mmin = a[0];
    for(int i = 0; i < n; i++)
    {

        y += a[i];
        mmax = max(mmax, a[i]);
        mmin = min(mmin,a[i]);
    }
    x = y / n;
    cout << "Mean : " << x << endl << "Max : " << mmax << endl << "Min : " << mmin;
    return 0;
}


