#include <bits/stdc++.h>
#define watch(x) cout << (#x) << " is " << (x) << '\n'

using namespace std;

typedef pair<int, int> pr_t;

int main()
{
    ifstream fin("input.txt");
    ofstream fout("output.txt");

    int matrixSize;
    fin >> matrixSize;

    int temp;
    int sumMainD = 0;
    int sumNotMainD = 0;
    for(int i = 0; i < matrixSize; i++){
        for(int j = 0; j < matrixSize; j++){
            fin >> temp;
            if(i == j){
                sumMainD += temp;
            }
            if(i + j == matrixSize - 1){
                sumNotMainD += temp;
            }
        }
    }

    if(sumMainD > sumNotMainD){
        fout << '>';
    }
    else if(sumMainD < sumNotMainD){
        fout << '<';
    }
    else{
        fout << '=';
    }

    fin.close();
    fout.close();

    system("pause");
    return 0;
}
