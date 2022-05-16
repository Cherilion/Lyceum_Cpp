#include <bits/stdc++.h>
#include "Stack.h"

using namespace std;

int main() {
    Stack<char> s(6);

    cout << "Enter elements: ";
    for (int i=0; i<6; i++) {
        char tmp;
        cin >> tmp;
        s.push(tmp);
    }

    s.print();

    s.pop();


    s.print();

    return 0;
}
