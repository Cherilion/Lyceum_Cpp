#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pr_t;


int main()
{
    int arr_size;
    cin >>  arr_size;

    int **ptrarray = new int * [arr_size];
    for (int count = 0; count < arr_size; count++)
        ptrarray[count] = new int[arr_size];


    pr_t index(0, arr_size / 2);
    ptrarray[index.first][index.second] = 1;

    for (int counter = 2; counter <= pow(arr_size, 2); counter++){
         index.first--; index.second++;

        if((counter - 1) % arr_size == 0){
            index.first += 2; index.second--;
        }

        if(index.first < 0)
            index.first = arr_size - 1;

        if(index.second > arr_size - 1)
            index.second = 0;

        ptrarray[index.first][index.second] = counter;
    }


    cout << '\n';
    for (int count_row = 0; count_row < arr_size; count_row++) {
        for (int count_column = 0; count_column < arr_size; count_column++)
            cout << setw(4) << ptrarray[count_row][count_column] << "  ";
        cout << '\n';
    }


    for (int count = 0; count < arr_size; count++)
        delete []ptrarray[arr_size];

    system("pause");
    return 0;
}

