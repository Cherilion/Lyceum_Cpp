#include <bits/stdc++.h>
#define watch(x) cout << (#x) << " is " << (x) << '\n'

using namespace std;

typedef pair<int, int> pr_t;

pr_t defense(pr_t);
size_t get_sum(pr_t);

int main()
{
    pr_t initial_limits;
    cin >> initial_limits.first >> initial_limits.second;

    cout << get_sum(defense(initial_limits)) << endl;
    return 0;
}

pr_t defense(pr_t nums){
    if(nums.first > nums.second)
        return make_pair(nums.second, nums.first);
    else
        return nums;
}

size_t get_sum(pr_t limits)
{
    if(limits.first <= limits.second)
        return limits.first + get_sum(make_pair(limits.first + 1, limits.second));
    else
        return 0;

}
