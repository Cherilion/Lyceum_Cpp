#include <bits/stdc++.h>
#include "long_str_nums.h"

using namespace std;

void equal_size(string& str1, string& str2)
{
    if(str1.length() > str2.length())
    {
        string add_zeros(str1.length() - str2.length(), '0');
        str2 = add_zeros + str2;
    }
    else
        equal_size(str2, str1);
}

string big_int_sum(string str1, string str2)
{
    if(str1.length() != str2.length())
        equal_size(str1, str2);

    string result = "";
    int in_mind = 0;

    for(int i = str1.length() - 1; i >= 0; i--)
    {
        int temp = (str1.at(i) - '0') + (str2.at(i) - '0') + in_mind;

        in_mind = temp / 10;
        result = to_string(temp % 10) + result;
    }

    if(in_mind)
        result = to_string(in_mind) + result;

    return result;
}

string big_int_sub(string str1, string str2)
{
    if(str1.length() != str2.length())
        equal_size(str1, str2);

    string result = "";
    int in_mind = 0;

    for(int i = str1.length() - 1; i >= 0; i--)
    {
        int minuend = (str1[i] - '0') - in_mind;
        int subtrahend = str2[i] - '0';

        in_mind = subtrahend > minuend? 1: 0;

        int temp = (minuend + in_mind * 10) - subtrahend;
        result = to_string(temp) + result;
    }

    // delete zeros
    while(result[0] == '0' && result.size() > 1 )
        result.erase(0, 1);

    return result;
}

string long_str_sum(string str1, string str2)
{
    if(str1.at(0) == '-' && str2.at(0) != '-')
        return big_int_sub(str2, str1.erase(0, 1));
    else if(str2.at(0) == '-' && str1.at(0) != '-')
        return big_int_sub(str1, str2.erase(0, 1));
    else if(str1.at(0) == '-' && str2.at(0) == '-')
        return '-' + big_int_sum(str1.erase(0, 1), str2.erase(0, 1));
    else
        return big_int_sum(str1, str2);


}
