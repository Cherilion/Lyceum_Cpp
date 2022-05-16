#include <bits/stdc++.h>

using namespace std;


size_t split(const string&, vector<string>&, char);

int main()
{
    ifstream fin("phrase.txt");
    ofstream fout("replace.txt", ios::out);


    string in_str;
    getline(fin, in_str, '\n');

    vector<string> strings;
    split(in_str, strings, ' ');

    for(size_t i = 0; i < strings.size(); i += 2){
        swap(strings.at(i), strings.at(i + 1));
    }

    for(auto word: strings)
        fout << word << ' ';

    fin.close();
    fout.close();

    system("pause");
    return 0;
}


size_t split(const string &txt, vector<string> &strs, char divider)
{
    size_t pos = txt.find(divider);
    size_t initial_pos = 0;
    strs.clear();

    while(pos != string::npos) {
        if(txt.substr(initial_pos, pos - initial_pos ).size() )
            strs.push_back(txt.substr(initial_pos, pos - initial_pos ) );
        initial_pos = pos + 1;

        pos = txt.find(divider, initial_pos );
    }

    if(txt.substr(initial_pos, min(pos, txt.size() ) - initial_pos).size() )
        strs.push_back(txt.substr(initial_pos, min(pos, txt.size() ) - initial_pos) );

    return strs.size();
}




