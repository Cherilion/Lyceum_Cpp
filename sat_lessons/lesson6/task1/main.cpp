#include <bits/stdc++.h>

using namespace std;

int sum;
vector<int> coins;
vector<int> checked;
vector<bool> ch_best;


int solve(int num){
    if(num < 0) return INT_MAX - 1;
    if(!num) return 0;
    if(ch_best.at(num)) return checked.at(num);
    int best = INT_MAX - 1;
    for(auto &nominal: coins){
        best = min(best, solve(num - nominal) + 1);
    }
    checked.at(num) = best;
    ch_best.at(num) = true;
    return best;
}




int main()
{
    cin >> sum;

    for(int i = 0; i < sum; i++){
        checked.push_back(0);
        ch_best.push_back(0);
    }

    int amount_coins;
    cin >> amount_coins;

    for(int i = 0; i <= amount_coins; i++){
        int temp;
        cin >> temp;
        coins.push_back(temp);
    }

    cout << '\n' << solve(sum)
         << checked.at(sum) <<endl;

    system("pause");
    return 0;
}
