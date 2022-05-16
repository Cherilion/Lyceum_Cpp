#include <iostream>

using namespace std;

int main()
{
    int max;
    cin >> max;

    for(int num = 2; num <= max; num++)
    {
        int dividers = 0;
        for (int i = 2; i <= num/2; i++)
            if(num % i == 0)
                dividers++;

        if(!dividers)
            cout << num << endl;
    }

    return 0;
}
