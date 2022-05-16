#include <bits/stdc++.h>

using namespace std;

ifstream fin("input.txt");
ofstream fout("output.txt", ios::out);

typedef pair<size_t , size_t> pr_t;

bool cute(vector<string>, pr_t);
void get_pattern(vector<string>&, pr_t);

int main()
{
    const pr_t pattern_size(4, 4);

    vector<string> initial_pattern;

    get_pattern(initial_pattern, pattern_size);

    bool is_cute = true;

    for(int i = 0; i < pattern_size.first - 1; i++){
        for(int j = 0; j < pattern_size.second - 1; j++){
            if(!cute(initial_pattern, make_pair(i, j))) is_cute = false;
        }
    }

    if(is_cute) fout << "Yes" << endl;
    else fout << "No" << endl;

    fin.close();
    fout.close();

    system("pause");
    return 0;
}

bool cute(vector<string> pattern, pr_t pos){
    if(pattern.at(pos.first).at(pos.second) == pattern.at(pos.first).at(pos.second + 1)
       && pattern.at(pos.first).at(pos.second) == pattern.at(pos.first + 1).at(pos.second)
       && pattern.at(pos.first).at(pos.second) == pattern.at(pos.first + 1).at(pos.second + 1))
        return false;
    else
        return true;
}

void get_pattern(vector<string> &input_pattern, pr_t pattern_size){
    for(int i = 0; i < pattern_size.first; i++){
        input_pattern.push_back("");
        getline(fin, input_pattern.at(i));
    }
}





