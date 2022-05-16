#include"include/MatrixTools.h"

using namespace std;

const pr_t randLimits(1, 8);

int main()
{
    // use current time as seed for random generator
    srand(time(0));

    // set matrix size
    pr_t matrixSize;
    cin >> matrixSize.first >> matrixSize.second;

    // declare matrix and fill it randomly
    vector< vector<int> > matrix;
    setRandMatrix(matrix, matrixSize, randLimits);

    //sort every line in matrix
    sortMatrix(matrix, matrixSize);

    //print matrix
    printMatrix(matrix, matrixSize);

    system("pause");
    return 0;
}



