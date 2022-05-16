#include"include/MatrixTools.h"

template < typename T >
void printArr(vector<T>& arr, size_t _size)
{
    for(int i = 0; i < _size; i++){
        cout << setw(4) << arr.at(i);
    }
    cout << '\n';
}

template < typename T >
void printMatrix(vector< vector<T> >& _matrix, pr_t _size){
    for(int i = 0; i < _size.first; i++){
        printArr(_matrix.at(i), _size.second);
    }
}


int getRand(pr_t limits){
    return rand() % (limits.second) + limits.first;
}

template < typename T >
void setRandArr(vector<T>& _arr, size_t _size, pr_t limits){
    for(int i = 0; i < _size; i++){
        _arr.push_back(static_cast<T>(getRand(limits)));
    }
}

template < typename T >
void setRandMatrix(vector< vector<T> >& _matrix, pr_t _size, pr_t limits){
    for(int i = 0; i < _size.first; i++){
        vector<int> tempArr;
        setRandArr(tempArr, _size.second, limits);
        _matrix.push_back(tempArr);
    }
}
template < typename T >
void sortMatrix(vector< vector<T> >& _matrix, pr_t _size){
    for(int i = 0; i < _size.first; i++){
        sort(_matrix.at(i).begin(), _matrix.at(i).end());
    }
}

template < typename T >
T minMatrix(vector< vector<T> > _matrix, pr_t _size){
    T minElement = *min_element(_matrix[0].begin(), _matrix[0].end());
    for(int i = 1; i < _size.first; i++){
        min(minElement, *min_element(_matrix.at(i).begin(), _matrix.at(i).end()));
    }
    return minElement;
}