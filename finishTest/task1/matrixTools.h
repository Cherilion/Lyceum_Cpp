#ifndef MATRIXTOOLS_H_INCLUDED
#define MATRIXTOOLS_H_INCLUDED


#include<bits/stdc++.h>
#define watch(x) cout << (#x) << " is " << (x) << '\n'

using namespace std;


typedef pair<int, int> pr_t;
typedef vector< vector<int> > vecMatrix;

void printArr(vector<int>&, size_t);
void printMatrix(vecMatrix&, pr_t);
int getRand(pr_t);
void setRandArr(vector<int>&, size_t, pr_t);
void setRandMatrix(vecMatrix&, pr_t, pr_t);
int getColomnSum(vecMatrix&, pr_t, int);


#endif // MATRIXTOOLS_H_INCLUDED
