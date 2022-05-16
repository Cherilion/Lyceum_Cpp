#include <bits/stdc++.h>

#define FSTD(i,start, stop) for(int i = start; i < stop; i++)

using namespace std;

const int arr_size = 18;
typedef char int_arrsize_t[arr_size];
typedef pair<int, int> pr_t;
const pr_t rand_boundaries(97,122);

void rand_arr(int_arrsize_t&, pr_t);
void arr_out(int_arrsize_t&);

int min_arr_indx(int_arrsize_t& arr, pr_t boundaries);
int max_arr_indx(int_arrsize_t& arr, pr_t boundaries);

void selection_sort(int_arrsize_t& arr, pr_t sort_boundaries, bool reverse_arr);
bool is_sorted(int_arrsize_t&);

int main()
{
    int_arrsize_t arr;
    rand_arr(arr, rand_boundaries);
    arr_out(arr);


    pr_t part1(0, arr_size/2 - 1);
    selection_sort(arr, part1, 0);

    pr_t part2(part1.second + 1, arr_size);
    selection_sort(arr, part2, 1);

    arr_out(arr);


    return 0;
}


void rand_arr(int_arrsize_t& arr, pr_t boundaries)
{
    srand(time(0));


    for(auto &element: arr)
        element = rand() % (boundaries.second - boundaries.first + 1) + boundaries.first;


}

void arr_out(int_arrsize_t& arr)
{
    for(auto &element: arr)
        cout << setw(4) << element;
    cout << '\n';
}

bool is_sorted(int_arrsize_t& arr)
{
    FSTD(i, 1, arr_size - 1)
        if(arr[i - 1] > arr[i] && i != arr_size - 1)
            return false;

    return true;
}

int min_arr_indx(int_arrsize_t& arr, pr_t boundaries)
{
    int min_indx = boundaries.first;
    FSTD(i, boundaries.first + 1, boundaries.second)
        if(arr[i] < arr[min_indx])
            min_indx = i;
    return min_indx;

}

int max_arr_indx(int_arrsize_t& arr, pr_t boundaries)
{
    int min_indx = boundaries.first;
    FSTD(i, boundaries.first + 1, boundaries.second)
        if(arr[i] > arr[min_indx])
            min_indx = i;
    return min_indx;

}


void selection_sort(int_arrsize_t& arr, pr_t sort_boundaries, bool reverse_arr)
{
    pr_t boundaries(0, arr_size);
    FSTD(i, sort_boundaries.first, sort_boundaries.second)
    {
        boundaries.first = i;
        if(reverse_arr)
            swap(arr[i], arr[max_arr_indx(arr, boundaries)]);
        else
            swap(arr[i], arr[min_arr_indx(arr, boundaries)]);
    }
}

