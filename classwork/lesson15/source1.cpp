#include <bits/stdc++.h>

using namespace std;

ifstream fin("input.txt");
ofstream fout("output.txt", ios::out);

typedef pair<int, int> pr_t;
typedef vector<int> arr_t;

bool positive(int);
void print_arr(arr_t& arr);

int main()
{
    int amount;
    fin >> amount;


    arr_t positive_nums;
    arr_t negative_nums;


    int temp;
    for(int i = 0; i < amount; i++){
        fin >> temp;
        if(positive(temp))
            positive_nums.push_back(temp);
        else
            negative_nums.push_back(temp);
    }

    sort(positive_nums.begin(), positive_nums.end());
    sort(negative_nums.begin(), negative_nums.end());
    print_arr(positive_nums); print_arr(negative_nums);

    fin.close();
    fout.close();

    system("pause");
    return 0;
}


bool positive(int num){
    return num >= 0;
}

void print_arr(arr_t& arr)
{
    for(auto &element: arr)
        fout << setw(4) << element;
    fout << '\n';
}

