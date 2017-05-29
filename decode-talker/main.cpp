#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    int a[] = {1,2,3,4,5,6};
    for (auto x : a)
    {
        cout << x << endl;
    }
    return 0;
}