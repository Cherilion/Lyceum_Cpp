#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pr_t;

int get_dist(pr_t, pr_t);

int main()
{
    ifstream fin("input.txt");
    ofstream fout("output.txt", ios::out);

    int x_cords[3];
    int y_cords[3];

    fin >> x_cords[0] >> x_cords[1] >> x_cords[2]
        >> y_cords[0] >> y_cords[1] >> y_cords[2];

    int dist = 0;

    dist += get_dist(make_pair(x_cords[0], y_cords[0]), make_pair(x_cords[1], y_cords[1]));
    dist += get_dist(make_pair(x_cords[1], y_cords[1]), make_pair(x_cords[2], y_cords[2]));
    dist += get_dist(make_pair(x_cords[0], y_cords[0]), make_pair(x_cords[2], y_cords[2]));

    fout << dist;

    system("pause");
    return 0;
}


int get_dist(pr_t cord1, pr_t cord2){
    int temp1 = pow(cord1.first - cord2.first, 2);
    int temp2 = pow(cord1.second - cord2.second, 2);

    return sqrt(temp1 + temp2);
}


