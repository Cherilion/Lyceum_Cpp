#include <bits/stdc++.h>



using namespace std;

const int arr_size = 20;

typedef vector<int> arr_t;
typedef pair<int, int> pr_t;
const pr_t rand_boundaries(0,100);

void rand_arr(arr_t&, pr_t);
void print_arr(arr_t&);
int bin_srch(arr_t &, int);


int main()
{
    arr_t arr(arr_size);
    rand_arr(arr, rand_boundaries);
    sort(arr.begin(), arr.end());
    print_arr(arr);

    int sought_number;
    cin >> sought_number;

    cout << bin_srch(arr, sought_number);




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

int bin_srch(arr_t &arr, int num)
{
    pr_t srch_bounds(0, arr_size);
    int middle;

    while(srch_bounds.first != srch_bounds.second)
    {
        middle = (srch_bounds.first + srch_bounds.second) / 2;

        if(num >= arr[middle]) srch_bounds.first = middle;
        if(num <= arr[middle]) srch_bounds.second = middle;
        cout << srch_bounds.first << ' ' << srch_bounds.second << '\n';
    }
    if(arr[middle] == num) return middle;
    else return -1;
}
