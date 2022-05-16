#include <bits/stdc++.h>

using namespace std;

ifstream fin("input.txt");
ofstream fout("output.txt", ios::out);

typedef pair<int, int> pr_t;
typedef vector<string> arr_t;


bool space(char);
bool compare(string, string);


int main()
{
    int amount;
    fin >> amount;
    arr_t words;

   for(int i = 0; i < amount; i++){
       words.push_back("");
       getline(fin, words.at(i), ' ');
    }

    sort(words.begin(), words.end(), compare);

    fout << words.back() << endl;

    fin.close();
    fout.close();

    system("pause");
    return 0;
}


bool space(char symbol){
    return symbol == ' ';
}

bool compare(string str1, string str2){
    return str1.length() < str2.length();
}



