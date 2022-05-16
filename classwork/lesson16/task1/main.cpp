#include <bits/stdc++.h>
#define watch(x) cout << (#x) << " is " << (x) << '\n'

using namespace std;

typedef pair<int, int> pr_t;

bool compare(char, char);
void get_img(vector<string>&, pr_t);

ifstream fin("input.txt");
ofstream fout("output.txt", ios::out);

int main()
{
    pr_t img_size;
    fin >> img_size.first >> img_size.second;
    fin.ignore(1);

    watch(img_size.first);
    watch(img_size.second);

    vector<string> positive_img, negative_img;

    get_img(positive_img, img_size);
    fin.ignore(1);
    get_img(positive_img, img_size);

    int counter = 0;
    for(int i = 0; i < img_size.first; i++){
        for(int j = 0; j < img_size.second; j++){
            if(!compare(positive_img.at(i)[j], negative_img.at(i)[j])){
                counter++;
            }
        }
    }

    fout << counter;

    fin.close();
    fout.close();

    system("pause");
    return 0;
}

bool compare(char symb1, char symb2){
    if(symb1 == symb2)
        return false;
    else
        return true;
}

void get_img(vector<string> &input_img, pr_t img_size){
    for(int i = 0; i < img_size.first; i++){
        input_img.push_back("");
        getline(fin, input_img.at(i));
        watch(input_img.at(i));
    }
}



