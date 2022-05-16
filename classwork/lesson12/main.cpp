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


    for (int count_row = 0; count_row < arr_size; count_row++)
        for (int count_column = 0; count_column <= arr_size; count_column++)
                ptrarray[count_row][count_column] = (count_row * count_column) % arr_size;


    cout << '\n';
    for (int count_row = 1; count_row < arr_size; count_row++) {
        for (int count_column = 1; count_column < arr_size; count_column++){
            cout << setw(4) << ptrarray[count_row][count_column] << "  ";
        }
        cout << "\n\n";
    }

    system("pause");
    return 0;
}
