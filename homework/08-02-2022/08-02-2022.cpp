#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pr_t;

bool belongs_region(pr_t, pr_t, pr_t);
int direction(pr_t, pr_t, pr_t);
pr_t change(pr_t, int, int);

int main()
{
    int arr_size;
    cin >>  arr_size;

    const int big_arr_size = 2 * arr_size - 1;

    int **ptrarray = new int * [big_arr_size];
    for (int count = 0; count < big_arr_size; count++)
        ptrarray[count] = new int[big_arr_size]{};


    pr_t start_index(0, big_arr_size / 2);
    pr_t index = start_index;

    ptrarray[start_index.first][start_index.second] = 1;

    for (int counter = 1; counter <= pow(arr_size, 2); counter++){
        if(counter % arr_size){
            ptrarray[index.first][index.second] = counter;
            index.first++; index.second++;
        }
        else{
            ptrarray[index.first][index.second] = counter;
            start_index.first++; start_index.second--;
            index = start_index;
        }
    }


    pr_t min((arr_size - 1) / 2, (arr_size - 1) / 2);
    pr_t max(big_arr_size - min.first - 1, big_arr_size - min.second - 1);

    for (int cnt_row = 0; cnt_row < big_arr_size; cnt_row++) {
        for (int cnt_column = 0; cnt_column < big_arr_size; cnt_column++){
            bool in_reg(belongs_region(make_pair(cnt_row, cnt_column), min, max));
            if(!in_reg && ptrarray[cnt_row][cnt_column] != 0){
                int direct = direction(make_pair(cnt_row, cnt_column), min, max);
                pr_t new_cords = change(make_pair(cnt_row, cnt_column), direct, arr_size);
                swap(ptrarray[new_cords.first][new_cords.second], ptrarray[cnt_row][cnt_column]);
            }
        }

    }


    cout << '\n';
    for (int count_row = min.first; count_row < arr_size + min.first; count_row++) {
        for (int count_column = min.second; count_column < arr_size + min.second; count_column++)
            cout << setw(4) << ptrarray[count_row][count_column] << "  ";
        cout << "\n\n";
    }


    for (int count = 0; count < big_arr_size; count++)
        delete []ptrarray[big_arr_size];

    return 0;
}

bool belongs_region(pr_t cords, pr_t min, pr_t max){
    bool min_belongs = cords.first >= min.first && cords.second >= min.second;
    bool max_belongs = cords.first <= max.first && cords.second <= max.second;
    if(min_belongs && max_belongs)
        return true;
    else
        return false;

}

int direction(pr_t cords, pr_t min, pr_t max){
    if(cords.first < min.first) return 1;
    if(cords.second > max.second) return 2;
    if(cords.first > max.first) return 3;
    if(cords.second < min.second) return 4;
}

pr_t change(pr_t cords, int direction, int arr_size){
    pr_t cords_change(0, 0);

    switch(direction){
        case 1:
            cords_change.first = arr_size;
            break;
        case 3:
            cords_change.first = -1 * arr_size;
            break;
        case 2:
            cords_change.second = -1 * arr_size;
            break;
        case 4:
            cords_change.second = arr_size;
            break;
    }

    cords_change.first += cords.first;
    cords_change.second += cords.second;
    return cords_change;
}
