#include <bits/stdc++.h>

using namespace std;

ifstream fin("input.txt");
ofstream fout("output.txt", ios::out);

void get_field(vector<string>&, size_t);

int main()
{
    size_t field_size;
    cin >> field_size;

    vector<string> initial_pattern;

    get_field(initial_pattern, field_size);

    for(int i = 0; i < field_size - 1; i++){
        for(int j = 0; j < field_size - 1; j++){

        }
    }

    fin.close();
    fout.close();

    system("pause");
    return 0;
}



void get_field(vector<string> &input_pattern, size_t pattern_size){
    for(int i = 0; i < pattern_size; i++){
        input_pattern.push_back("");
        getline(fin, input_pattern.at(i));
    }
}





