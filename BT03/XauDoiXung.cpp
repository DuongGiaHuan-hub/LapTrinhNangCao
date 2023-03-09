#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    int x = 1;
    for(int i = 0; i < n ; i++)
    {
            if(s[i] != s[n - i - 1]) x = 0;
    }
    if(x == 0) cout << "No";
    if(x == 1) cout << "Yes";
    return 0;
}
