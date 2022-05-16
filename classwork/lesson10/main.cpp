#include <bits/stdc++.h>

using namespace std;


typedef const pair<int, int> pr_t;
pr_t rand_boundaries(10, 90);

pr_t arr_size(6, 4);

//void rand_arr(int (*)[rand_boundaries.second], pr_t);
void print_arr(int [rand_boundaries.first][rand_boundaries.second]);


int main()
{
    int arr[arr_size.first][arr_size.second] = { {1, 2, 3, 4},
                                                   {1, 2, 3, 4},
                                                   {1, 2, 3, 4},
                                                   {1, 2, 3, 4},
                                                   {1, 2, 3, 4},
                                                   {1, 2, 3, 4},};

    print_arr(arr);

    return 0;
}

/*
void rand_arr(int &arr[rand_boundaries.first][rand_boundaries.second], pr_t boundaries)
{
    srand(time(0));

    for(auto &sub_arr: arr)
        for(auto &element: sub_arr)
            element = rand() % (boundaries.second - boundaries.first + 1) + boundaries.first;
}
*/


void print_arr(int arr[rand_boundaries.first][rand_boundaries.second])
{
    for(int i = 0; i < arr_size.first; i++)
        for(int j = 0; j < arr_size.second; j++)
        cout << setw(4) << arr[i][j];
    cout << '\n';
}
