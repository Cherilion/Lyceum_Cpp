#include <bits/stdc++.h>
#define watch(x) cout << (#x) << " is " << (x) << '\n'

using namespace std;

typedef pair<int, int> pr_t;

size_t gcd(pr_t);

int main()
{
    pr_t initial_nums;
    cin >> initial_nums.first >> initial_nums.second;

    cout << gcd(initial_nums) << endl;
    return 0;
}

size_t gcd(pr_t nums)
{
    if(nums.first == 0 || nums.second == 0)
        return nums.first + nums.second;
    else if(nums.first > nums.second)
        gcd(make_pair(nums.first % nums.second, nums.second));
    else
        gcd(make_pair(nums.first, nums.second % nums.first));
}
