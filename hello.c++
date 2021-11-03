#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
using std::string;

int main()
{
    // int x, y;
    // cout << "please enter two numbers:";
    // cin >> x >> y;
    // int sum = x + y;
    // cout << "Their sum is " << sum << endl;
    // return EXIT_SUCCESS;

    //pointers
    /* char ch = 'P';
    char *ptr = &ch;
    cout << *ptr;
    ch = 'Z';
    cout << *ptr;
    *ptr = 'X';
    cout << ch; */

    //arrays
    // double f[5];
    int m[10];
    m[2] = 23;
    cout << m[2] << '\n';
    char c[] = {'c', 'a', 'd'};
    char *p = c;
    cout << c[2] << p[0];
    string x = "ex";
    string s = "yes bruh" + x;
    cout << s;

    //casting
    // int i = 3;
    double d = 4.8;
    int i2 = static_cast<int>(d);
    cout << i2 << '\n';
    int i3 = d;
    cout << i3;

    // loops
    // int a[100];
    // int i = 0;
    // int sum = 0;
    // while (i < 100 && a[i] >= 0)
    // {
    //     // sum = a[i++];
    //     cout << i++ << '\n';
    //     i++;
    //     // cout << "sum is " << sum << '\n';
    // }
    // for (int i = 0; i < 100; i++)
    // {
    //     /* code */
    //     cout << i << "\n";
    // }
}