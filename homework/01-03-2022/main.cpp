#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pr_t;

bool is_prime(int);

int main() {

    pr_t limits;
    cin >> limits.first >> limits.second;

    for(int i = limits.first; i < limits.second; i++){
        if(is_prime(i))
            cout << setw(4) << i;
    }
    cout << endl;

    system("pause");
    return 0;
}

bool is_prime(int num) {
    if(num == 1)
        return false;

    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}