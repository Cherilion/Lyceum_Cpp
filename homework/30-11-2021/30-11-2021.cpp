#include <bits/stdc++.h>

#define FSTD(i,start, stop) for(int i = start; i < stop; i++)

using namespace std;

const int arr_size = 21;
typedef int int_arrsize_t[arr_size];
typedef pair<int, int> pr_t;
const pr_t rand_boundaries(1,15);

void rand_arr(int_arrsize_t&, pr_t);
void arr_out(int_arrsize_t&);
void reverse_arr(int_arrsize_t&, pr_t);

int main()
{
    int_arrsize_t arr;
    rand_arr(arr, rand_boundaries);
    arr_out(arr);

    pr_t swap_length;
    cin >> swap_length.first >> swap_length.second;

    reverse_arr(arr, swap_length);
    arr_out(arr);
    
    return 0;
}


void rand_arr(int_arrsize_t& arr, pr_t boundaries)
{
    srand(time(0));


    for(auto &element: arr)
        element = rand() % (boundaries.second+1) + boundaries.first;
    

}

void arr_out(int_arrsize_t& arr)
{
    for(auto &element: arr)
        cout << setw(4) << element;
    cout << '\n';
}

void reverse_arr(int_arrsize_t& arr, pr_t r_length)
{
    while(r_length.first <= r_length.second)
    {
        swap(arr[r_length.first], arr[r_length.second]);
        r_length.first++;
        r_length.second--;
    }
}