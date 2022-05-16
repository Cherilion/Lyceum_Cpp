#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int max;
    cin >> max;

    int nums[max];
    for(int i = 2; i <= max; i++)
        nums[i] = i;


    for(int p = 2; p < max; p++)
    {
        if(p != 0)
            for(int i = 2;i*p <= max; i++)
                nums[i*p] = 0;
    }

    for(int i = 2; i <= max; i++)
        if (nums[i] != 0) cout << nums[i] << '\n';

    return 0;
}
