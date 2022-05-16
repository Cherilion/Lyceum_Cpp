#ifndef TASK1_MATRIXTOOLS_H
#define TASK1_MATRIXTOOLS_H

#include<bits/stdc++.h>
using namespace std;


typedef pair<size_t, size_t> pr_t;

template < typename T >
void printArr(vector<T>&, size_t);

template < typename T >
void printMatrix(vector< vector<T> >&, pr_t);

//template < typename T >
int getRand(pr_t);

template < typename T >
void setRandArr(vector<T>&, size_t, pr_t);

template < typename T >
void setRandMatrix(vector< vector<T> >&, pr_t, pr_t);

template < typename T >
void sortMatrix(vector< vector<T> >&, pr_t);


#endif //TASK1_MATRIXTOOLS_H
