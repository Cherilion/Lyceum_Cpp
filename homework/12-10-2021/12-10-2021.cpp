#include <iostream>
#include <string>

using namespace std;

bool palindrome(int num)
{
    string str = to_string(num);
    if(str[0] == str[4] && str[1] == str[3])
        return true;
    else
        return false;
}

int main()
{
    int in_num;
    cin >> in_num;

    if(palindrome(in_num) == true)
        cout << "is palindrome" << endl;
    else
        cout << "isn't palindrome" << endl;

    return 0;
}
