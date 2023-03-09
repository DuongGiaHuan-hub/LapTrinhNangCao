#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int x = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = n - 1; j > i; j--)
        {
            if(a[i] == a[j]) x = 1;
        }
    }
    if(x == 1) cout << "yes";
    if(x == 0) cout << "no";
    return 0;
}
