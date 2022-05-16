#include <bits/stdc++.h>

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
    if(num >= base) {
        string converted_num_str = convert_s(num / base, base);
        converted_num_str.push_back(str_symbs.at(num % base));
        return converted_num_str;
    }
    else {
        return string(1, str_symbs.at(num));
    }
}

