#include <iostream>

using namespace std;

int main()
{
    int p=5;
    cout << p<< endl;
    int *q=&p;
    cout << q<< endl;
    cout <<*q<< endl;
    int **s=&q;
    cout << s<< endl;
    cout << **s<< endl;
    return 0;
}
