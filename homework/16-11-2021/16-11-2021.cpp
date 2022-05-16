#include <iostream>

using namespace std;

int main()
{
    int arr[5];

    for(int i = 0; i < 5; i++)
    {
        arr[i] = rand();
        cout << arr[i] << " ";
    }

    cout << '\n' << (arr[0] + arr[4] > arr[1] + arr[3] ? "true" : "false") << '\n';

   return 0;

}
