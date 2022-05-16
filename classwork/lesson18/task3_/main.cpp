#include <bits/stdc++.h>
#define watch(x) cout << (#x) << " is " << (x) << '\n'

using namespace std;

string str_symbs = "0123456789ABCDEF";

string convert_s(int, int);

int main()
{
    int num, base;
    cin >> num >> base;

    cout << convert_s(num, base) << endl;

    return 0;
}


string convert_s(int num, int base)
{
    if(num >= base)
        return convert_s(num / base, base) + str_symbs.at(num % base);
    else
        return str_symbs.at(num);
}
