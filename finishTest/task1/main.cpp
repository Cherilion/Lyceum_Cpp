#include"matrixTools.h"

using namespace std;

int main()
{
    srand(time(0));

    const pr_t matrixSize(7, 5);
    const pr_t randRange(-10, 10);

    vector< vector<int> > matrix;
    setRandMatrix(matrix, matrixSize, randRange);
    printMatrix(matrix, matrixSize);

    cout << '\n';

    for(int i = 0; i < matrixSize.second; i++){
        cout << getColomnSum(matrix, matrixSize, i) << '\n';
    }

    system("pause");
    return 0;
}
