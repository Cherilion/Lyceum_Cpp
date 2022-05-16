#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

int cm_to_m(int cm_length)
{
    int m_length = cm_length / 100;
    return m_length;
}

double to_kilo(double gramms)
{
    return (gramms / 1000);
}

char middle_unit(string str)
{
    return str[(str.length() / 2) - 1];
}

int* to_units(int num)
{
    string str = to_string(num);
    int units[str.length()];

    for(int i = 0; i < str.length(); i++)
    {
        units[i] = int(str[i]);
    }

    return units;
}



int main()
{
    cout << "Input number: ";
    int num;
    cin >> num;

    string str = to_string(num);

    /*
    str.erase(str.length()-1,1);
    */

    /*
    int tmp;
    tmp = str[1];
    str[1] = str[2];
    str[2] = tmp;
    */

    string tmp;
    tmp = str.substr(0, 2);
    str.substr(0, 2) = str.substr(2, 4);
    str.substr(2, 4) = tmp;

    cout << str << endl;

    system("pause");
    return 0;
}

