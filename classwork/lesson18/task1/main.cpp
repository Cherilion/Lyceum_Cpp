#include <bits/stdc++.h>
#define watch(x) cout << (#x) << " is " << (x) << '\n'

using namespace std;

typedef pair<int, int> pr_t;


double pow(double, int);

int main()
{
    double num;
    int power;
    cin >> num >> power;

    cout << pow(num, power) << endl;

    return 0;
}

double pow(double num, int power)
{
    if(power == 0)
        return 1;
    else if(power > 0)
        return num * pow(num, power - 1);
    else
        return 1;
}
