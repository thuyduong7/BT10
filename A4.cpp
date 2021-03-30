#include <iostream>

using namespace std;

struct Point
{
    double x, y;

    Point(){}
    Point (double _x, double _y):x(_x),y(_y){}
};

void print(Point& p)
{
    cout << &p << ' ' << &p.x << ' ' << &p.y << ' ' << endl;
}

int main()
{
    Point a;
    cin >> a.x >> a.y;
    print(a);
    return 0;
}
