#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pr_t;


int main()
{
    int arr_size;
    cin >>  arr_size;

    int **ptrarray = new int * [arr_size];
    for (int count_row = 0; count_row < arr_size; count_row++){
        ptrarray[count_row] = new int[arr_size];
        for (int num_cnt = 1; int count_column = 0; count_column < arr_size; count_column++; num_cnt++)
            ptrarray[count_row][count_column] = num_cnt;
    }


    for (int count_row = 0; count_row < arr_size; count_row++) {
        for (int count_column = 0; count_column < arr_size; count_column++){
            if(count_row == count_column && count_row < arr_size / 2)
                swap(ptrarray[count_row][count_column], ptrarray[arr_size - count_row - 1][arr_size - count_column - 1])
            if(count_row + count_column = arr_size - 1)
                //swap(ptrarray[count_row][count_column], ptrarray[arr_size - count_row - 1][arr_size - count_column - 1])
        }
    }


    cout << '\n';
    for (int count_row = 0; count_row < arr_size; count_row++) {
        for (int count_column = 0; count_column < arr_size; count_column++)
            cout << setw(4) << ptrarray[count_row][count_column] << "  ";
        cout << '\n';
    }


    for (int count = 0; count < arr_size; count++)
        delete []ptrarray[arr_size];

    return 0;
}


