#include"MatrixTools.h"

void printArr(vector<int>& arr, int _size)
{
    for(int i = 0; i < _size; i++){
        cout << setw(4) << arr.at(i);
    }
    cout << '\n';
}

void printMatrix(vecMatrix& _matrix, pr_t _size){
     for(int i = 0; i < _size.first; i++){
        printArr(_matrix.at(i), _size.second);
    }
}

int getRand(pr_t limits){
    if(limits.second < limits.first){
        return 0;
    }

    if(limits.first == limits.second){
        return limits.second;
    }

    return rand() % (limits.second + abs(limits.first) + 1) + limits.first;
}

void setRandArr(vector<int>& _arr, int _size, pr_t limits){
    for(int i = 0; i < _size; i++){
        _arr.push_back(getRand(limits));
    }
}

void setRandMatrix(vecMatrix& _matrix, pr_t _size, pr_t limits){
    for(int i = 0; i < _size.first; i++){
        vector<int> tempArr;
        setRandArr(tempArr, _size.second, limits);
        _matrix.push_back(tempArr);
    }
}

int getColomnSum(vecMatrix& _matrix, pr_t _size, int _colomnIndex){
    if(_colomnIndex > _size.first){
        return 0;
    }

    int sum = 0;
    for(int j = 0; j < _size.first; j++){
        sum += _matrix.at(j).at(_colomnIndex);
    }
    return sum;
}
