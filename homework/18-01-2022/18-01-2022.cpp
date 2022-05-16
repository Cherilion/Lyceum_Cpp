#include <bits/stdc++.h>

using namespace std;

string bi_multiplication(string, int);


int main()
{
    cout << "Input first number(bigger one): ";
    string str_num;
    cin >> str_num;

    cout << "Input second number: ";
    int num;
    cin >> num;

    cout << "Multiplication = " << bi_multiplication(str_num, num) << endl;

    return 0;
}


string bi_multiplication(string str, int num)
{
    string result = "";
    int in_mind = 0;

    string sign;

    if(num < 0)
        sign = "-";
    else
        sign = "";

    num = abs(num);

    for(int i = str.length() - 1; i >= 0; i--)
    {
        int temp =((str[i] - '0') * num) + in_mind;
        in_mind = temp / 10;

        result.insert(0, to_string(temp % 10));
    }

    if(in_mind != 0)
        result.insert(0, to_string(in_mind));

    result.insert(0, sign);

    return result;
}
