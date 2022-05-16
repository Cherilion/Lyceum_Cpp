#include <bits/stdc++.h>
#define watch(x) cout << (#x) << " is " << (x) << '\n'

using namespace std;

const int _inf = 0x3f3f3f3f;

int solve(int, vector<int>);

int main(){

    ifstream fin("input.txt");
    ofstream fout("output.txt");

    vector <int> coins;

    int sum, amount;
    fin >> sum >> amount;

    int temp;
    for(int i = 0; i < amount; i++){
        fin >> temp;
        coins.push_back(temp);
    }

    fout << solve(sum, coins) << endl;

    fin.close();
    fout.close();

    system("pause");
    return 0;
}

int solve(int sum, vector<int> coins){
    static map<int, int> complete_values;

    if(sum < 0) return _inf;
    if(sum == 0) return 0;
    if(complete_values.find(sum) != complete_values.end())
        return complete_values[sum];

    int best = _inf;

    for(auto coin : coins){
        best = min(best, solve(sum - coin, coins) + 1);
    }
    complete_values[sum] = best;

    return best;
}
