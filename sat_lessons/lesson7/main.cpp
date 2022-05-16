#include <utility>
#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pr_t;
typedef unsigned long long long_int_t;

long_int_t fact(pr_t);

int main(){

    pr_t nums;
    cin >> nums.second >> nums.first;

    cout << fact(nums) << endl;

    system("pause");
    return 0;
}

long_int_t fact(pr_t limits){
    if(limits.second == limits.first)
        return limits.first;
    return limits.second * fact(make_pair(limits.first, limits.second - 1));
}

