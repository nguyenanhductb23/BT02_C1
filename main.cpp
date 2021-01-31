#include <iostream>
#include <cmath>

using namespace std;

bool SNT (int x)
{
    if (x <= 1) return false;
    else
    {
        for (int i = 2; i <= sqrt(x); i++)
            if (x % i == 0) return false;
        return true;
    }
}

int main()
{
    int num;
    cin >> num;
    if (SNT(num) == true) cout << "yes";
    else cout << "no";
    return 0;
}
