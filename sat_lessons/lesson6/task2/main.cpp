#include <bits/stdc++.h>
#include <windows.h>

using namespace std;

int main(){
    ifstream fin("input.txt");

    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    string str1, str2;
    getline(fin, str1);
    getline(fin, str2);

    int row = str1.length(),
        column = str2.length();

    vector< vector<int> > match;
    vector<int> temp(column + 1);
    for(int i = 0; i <= row; i++){
        match.push_back(temp);
    }


    for(int i = 1; i <= row; i++){
        for(int j = 1; j <= column; j++){
            if(str1.at(i - 1) == str2.at(j - 1))
                match.at(i).at(j) = match.at(i - 1).at(j - 1) + 1;
            else
                match.at(i).at(j) = max(match.at(i).at(j - 1), match.at(i - 1).at(j));
        }
    }

    cout << '\n' << match.at(row).at(column) << endl;


    fin.close();
    system("pause");
    return 0;
}
