#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pr_t;


int main()
{
    srand(time(0));

    int arr_size;
    cin >>  arr_size;

    int *str, *stb;
    str = new int[arr_size];
    stb = new int[arr_size];

    for(int cnt = 0; cnt < arr_size; cnt++){
        str[cnt] = cnt; stb[cnt] = cnt;
    }

    for(int cnt = 0; cnt < arr_size; cnt++){
        swap(str[cnt], str[rand() % arr_size]);
        swap(stb[cnt], stb[rand() % arr_size]);
    }


    int **ptrarray = new int * [arr_size];
    for (int count = 0; count < arr_size; count++)
        ptrarray[count] = new int[arr_size];


    for (int count_row = 0; count_row < arr_size; count_row++) {
        for (int count_column = 0; count_column < arr_size; count_column++){
            ptrarray[count_row][count_column] = (str[count_row] + stb[count_column]) % arr_size + 1;
        }
    }

    cout << '\n';
    for (int count_row = 0; count_row < arr_size; count_row++) {
        for (int count_column = 0; count_column < arr_size; count_column++)
            cout << setw(4) << char(ptrarray[count_row][count_column] + 'A' - 1) << "  ";
        cout << "\n\n";
    }


    for (int count = 0; count < arr_size; count++)
        delete []ptrarray[arr_size];

    system("pause");
    return 0;
}
