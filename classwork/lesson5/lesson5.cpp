#include<bits/stdc++.h>
#include<windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    cout.setf(ios::boolalpha);
    cout << "1 > 12 " << (1 > 12) << '\n'
         << "-3 >= -3 " << (-3 >= -3) << '\n'
         << "2 + 2 * 2 == 8 " << (2 + 2 * 2 == 8) << '\n'
         << "|8| != |-8| " << (abs(8) != abs(-8)) << '\n' << '\n';

    int num  = -7;
    bool logic = num < 0;
    cout << logic << '\n';

    cout << (-8 < num < 0) << '\n';


    return 0;
}
