#include <bits/stdc++.h>
#define watch(x) cout << (#x) << " is " << (x) << '\n'

using namespace std;

typedef pair<int, int> pr_t;

bool isPrime(int);

int main()
{
    ifstream fin("input.txt");
    ofstream fout("output.txt");

    pr_t matrixSize;
    fin >> matrixSize.first >> matrixSize.second;

    int temp;
    for(int i = 0; i < matrixSize.first; i++){
        for(int j = 0; j < matrixSize.second; j++){
            fin >> temp;
            if(isPrime(temp)){
                fout << i + 1 << ' ' << j + 1 << endl;
            }
        }
    }


    fin.close();
    fout.close();

    system("pause");
    return 0;
}

bool isPrime(int _num){
    for(int i = 2; i < _num / 2; i++){
        if(!(_num % i))
            return false;
    }
    return true;
}
