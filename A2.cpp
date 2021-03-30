#include <iostream>

using namespace std;

struct Point
{
    int x, y;

    Point(){}
    Point (int _x, int _y):x(_x),y(_y){}
};

void print(Point p)
{
    cout << "(" << p.x << "," << p.y << ")" << endl;
    cout << &p << endl;
}

void print_(Point& p)
{
    cout << "(" << p.x << "," << p.y << ")" << endl;
    cout << &p << endl;
}

int main()
{
    Point a;
    cin >> a.x >> a.y;
    print(a);
    print_(a);
    cout << &a << endl;
    return 0;
}
