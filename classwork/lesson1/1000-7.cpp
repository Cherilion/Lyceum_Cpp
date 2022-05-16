#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main()
{
    for(int i = 1000; i > 0; i -= 7)
    {
        Sleep(100);
        cout << " " << i << '\n';
    }

    cout << "DEADINSIDE" << endl;

    return 0;
}
