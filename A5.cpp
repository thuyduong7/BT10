#include <iostream>

using namespace std;

struct Point
{
    int* a = new int[10];
    double x, y;

    Point(){}
    Point (double _x, double _y):x(_x),y(_y){}
};

int main()
{
    Point m(3,4);
    Point n = m;
    cout << m.a << ' ' << n.a;
    return 0;
}
