#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pr_t;


int main()
{
    ifstream fin("input.txt");
    ofstream fout("output.txt");

    int arr_size;
    fin >>  arr_size;

    if(!(arr_size % 2)){
        fout << "Impossible";
        return 0;
    }


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



    int count_column;
    for (int count_row = 0; count_row < arr_size; count_row++) {
        for (count_column = 0; count_column < arr_size; count_column++)
            fout << ptrarray[count_row][count_column] << " ";

        if(count_row != arr_size - 1 && count_column != arr_size - 1)
            fout << '\n';
    }

    for (int count = 0; count < arr_size; count++)
        delete []ptrarray[arr_size];

    fin.close();
    fout.close();

    system("pause");
    return 0;
}
