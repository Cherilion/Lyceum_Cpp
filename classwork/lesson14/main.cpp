#include <bits/stdc++.h>

using namespace std;

bool get_discr(int, int, int);

int main()
{

    ifstream fin("input.txt");
    ofstream fout("output.txt", ios::out);

    int coeffs[3];

    fin >> coeffs[0] >> coeffs[1] >> coeffs[2];

    fout << get_discr(coeffs[2], coeffs[1], coeffs[0]) << '\n'
         << get_discr(coeffs[1], coeffs[0], coeffs[2]) << '\n'
         << get_discr(coeffs[0], coeffs[2], coeffs[1]) << endl;



    fin.close();
    fout.close();

    system("pause");
    return 0;
}


bool get_discr(int arg1, int arg2, int arg3){
    int discr = pow(arg2, 2) - (4 * arg1 * arg3);

    return discr >= 0;
}


