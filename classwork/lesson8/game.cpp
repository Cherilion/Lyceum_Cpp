#include <bits/stdc++.h>
using namespace std;


int main()
{
    srand(time(0));
    int secret_num = rand() % 101;

    int counter = 0;
    int num;

    do
    {
        cout << "Input secret number: \n";
        cin >> num;
        if(num < secret_num)
            cout << "Secret number is bigger!\n";

        if(num > secret_num)
            cout << "Secret number is smaller!\n";

        counter++;
    }while(secret_num != num);

    cout << "You win by " << counter << " attempts.";

    return 0;
}


