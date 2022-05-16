#include <bits/stdc++.h>
#include "long_str_nums.h"

using namespace std;

int main()
{
    string num1, num2;
    cout << "Input first number: ";
    cin >> num1;

    cout << "Input second number: ";
    cin >> num2;

    cout << "Sum = " << long_str_sum(num1, num2) << endl;

    system ("pause");
    return 0;
}
