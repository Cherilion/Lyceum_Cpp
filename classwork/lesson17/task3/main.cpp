#include <bits/stdc++.h>
#define watch(x) cout << (#x) << " is " << (x) << '\n'

using namespace std;

size_t sum_digits(string);

int main()
{
    string str_num;
    getline(cin, str_num);

    cout << sum_digits(str_num) << endl;
    return 0;
}

size_t sum_digits(string num)
{
    if(num.empty()){
            return 0;
    }
    else{
        return int(num.at(0) - '0') + sum_digits(num.erase(0,1));
    }

}
