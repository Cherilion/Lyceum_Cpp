#include <bits/stdc++.h>
#define watch(x) cout << (#x) << " is " << (x) << '\n'

using namespace std;

typedef pair<int, int> pr_t;

string bin(int);

int main()
{
    int num;
    cin >> num;

    cout << bin(num) << endl;

    return 0;
}

string bin(int num)
{
    if(num >= 2)
        return bin(num / 2).append(to_string(num % 2));
    else
        return to_string(num);
}
