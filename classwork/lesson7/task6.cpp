#include <bits/stdc++.h>

#define FSTD(i,start, stop) for(int i = start; i < stop; i++)

using namespace std;

typedef vector<int> arr_t;
typedef pair<int, int> pr_t;

const pr_t rand_boundaries(-20,20);
const int arr_size = 20;

void rand_arr(arr_t&, pr_t);
void print_arr(arr_t&);
pr_t min_max_indx(arr_t& arr);


int main()
{
    arr_t arr(arr_size);
    rand_arr(arr, rand_boundaries);
    print_arr(arr);

    arr_t more_arr;
    arr_t less_arr;
    arr_t zero;




    return 0;
}


void rand_arr(arr_t& arr, pr_t boundaries)
{
    srand(time(0));

    for(auto &element: arr)
        element = rand() % (boundaries.second - boundaries.first + 1) + boundaries.first;




}

void print_arr(arr_t& arr)
{
    for(auto &element: arr)
        cout << setw(4) << element;
    cout << '\n';
}

pr_t min_max_indx(arr_t& arr)
{
    int min_indx = 0;
    int max_indx = 0;

    FSTD(i, 1, arr_size)
    {
        if(arr[i] < arr[min_indx])
            min_indx = i;
        if(arr[i] > arr[max_indx])
            min_indx = i;
    }

    pr_t min_max(min_indx, max_indx);
    return min_max;

}
