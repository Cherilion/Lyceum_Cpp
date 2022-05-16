#include <iostream>

using namespace std;

int greatest_common_factor(int num1, int num2)
{
    if(!(num1 % num2))
            return num2;
    if(!(num2 % num1))
            return num1;

    if(num1 > num2)
            greatest_common_factor(num1 % num2, num2);
    else
            greatest_common_factor(num2 % num1, num1);
}

int main()
{
    int in_num1, in_num2;
    cin >> in_num1 >> in_num2;

    if(greatest_common_factor(in_num1, in_num2) == 1)
        cout << "coprime numbers" << endl;
    else
        cout << "not coprime numbers" << endl;

}
