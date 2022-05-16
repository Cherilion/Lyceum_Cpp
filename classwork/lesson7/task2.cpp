#include <bits/stdc++.h>



using namespace std;

typedef vector<int> arr_t;
typedef pair<int, int> pr_t;
const pr_t rand_boundaries(0,9);

void rand_arr(arr_t&, pr_t);
void print_arr(arr_t&);


int main()
{
    arr_t arr(10);
    rand_arr(arr, rand_boundaries);
    print_arr(arr);

    string num_str =  "";

    for_each(arr.begin(), arr.end(), [num_str](int& num){if(!(num % 2)) cout << num;});
    cout << '\n';


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

