#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pr_t;

void print_row(pr_t);

int main()
{
    pr_t initial_limits;
    cin >> initial_limits.first >> initial_limits.second;

    print_row(initial_limits);
    return 0;
}

void print_row(pr_t limits)
{
    if(limits.first <= limits.second){
        cout << limits.second << ' ';
        print_row(make_pair(limits.first, limits.second - 1));
    }
}
