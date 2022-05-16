#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pr_t;


int main()
{
    srand(time(0));

    int arr_size;
    cin >>  arr_size;

    queue <int> nums;

    int **ptrarray = new int * [arr_size];
    for (int count = 0; count < arr_size; count++){
        ptrarray[count] = new int[arr_size];
        nums.push(count + 1);
    }


    for (int count_row = 0; count_row < arr_size; count_row++) {
        for (int count_column = 0; count_column < arr_size; count_column++){
            ptrarray[count_row][count_column] = nums.front();
            nums.push(nums.front()); nums.pop();
        }
        nums.push(nums.front());
        nums.pop();
    }

    cout << '\n';
    for (int count_row = 0; count_row < arr_size; count_row++) {
        for (int count_column = 0; count_column < arr_size; count_column++)
            cout << setw(4) << ptrarray[count_row][count_column] << "  ";
        cout << "\n\n";
    }


    for (int count = 0; count < arr_size; count++)
        delete []ptrarray[arr_size];

    system("pause");
    return 0;
}

