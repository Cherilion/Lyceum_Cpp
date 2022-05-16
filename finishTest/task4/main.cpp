#include <bits/stdc++.h>
#define watch(x) cout << (#x) << " is " << (x) << '\n'

using namespace std;

void getEchoNums(string);

int main()
{
    string numStr;
    cin >> numStr;

    getEchoNums(numStr);

    system("pause");
    return 0;
}

void getEchoNums(string _str){
    if(_str.size() > 1){
        getEchoNums(_str.substr(0, _str.size() - 1));
        cout << _str << '\n';
    }

    if(_str.size() == 1){
        cout << _str << '\n';
    }

    if(_str.empty()){
        return;
    }
}
