#include <bits/stdc++.h>



using namespace std;

const int arr_size = 11;

int main()
{
    int arr[arr_size][arr_size] = {};

    for( int i = 0; i < arr_size; i++)
    {
        for(int j = 0; j < arr_size; j++)
        {
            if((i+j) == arr_size-1)
                arr[i][j] = 1;
            else if(i == j)
                arr[i][j] = 2;
            else
                arr[i][j] = 0;
            cout << setw(3) << arr[i][j];
        }
        cout << '\n' ;
    }



}


