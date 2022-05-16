#include"include/MatrixTools.h"


void printArr(vector<int>& arr, size_t _size)
{
    for(int i = 0; i < _size; i++){
        cout << setw(4) << arr.at(i);
    }
    cout << '\n';
}


void printMatrix(vector< vector<int> >& _matrix, pr_t _size){
    for(int i = 0; i < _size.first; i++){
        printArr(_matrix.at(i), _size.second);
    }
}


int getRand(pr_t limits){
    return rand() % (limits.second) + limits.first;
}


void setRandArr(vector<int>& _arr, size_t _size, pr_t limits){
    for(int i = 0; i < _size; i++){
        _arr.push_back(getRand(limits));
    }
}


void setRandMatrix(vector< vector<int> >& _matrix, pr_t _size, pr_t limits){
    for(int i = 0; i < _size.first; i++){
        vector<int> tempArr;
        setRandArr(tempArr, _size.second, limits);
        _matrix.push_back(tempArr);
    }
}


void sortMatrix(vector< vector<int> >& _matrix, pr_t _size){
    for(int i = 0; i < _size.first; i++){
        sort(_matrix.at(i).begin(), _matrix.at(i).end());
    }
}


int minMatrix(vector< vector<int> > _matrix, pr_t _size){
    int minElement = *min_element(_matrix.at(0).begin(), _matrix.at(0).end());
    for(int i = 1; i < _size.first; i++){
        minElement = min(minElement, *min_element(_matrix.at(i).begin(), _matrix.at(i).end()));
    }
    return minElement;
}
