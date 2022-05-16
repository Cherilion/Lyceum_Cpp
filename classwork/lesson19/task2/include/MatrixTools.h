#ifndef TASK2_MATRIXTOOLS_H
#define TASK2_MATRIXTOOLS_H

#include<bits/stdc++.h>
using namespace std;

typedef pair<size_t, size_t> pr_t;


void printArr(vector<int>&, size_t);

void printMatrix(vector< vector<int> >&, pr_t);

int getRand(pr_t);

void setRandArr(vector<int>&, size_t, pr_t);

void setRandMatrix(vector< vector<int> >&, pr_t, pr_t);

void sortMatrix(vector< vector<int> >&, pr_t);


#endif //TASK2_MATRIXTOOLS_H
