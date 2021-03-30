#include <iostream>

using namespace std;

struct Point
{
    double x, y;

    Point(){}
    Point (double _x, double _y):x(_x),y(_y){}
};

Point mid_point(const Point a, const Point b)
{
    Point c((a.x + b.x)/2, (a.y + b.y)/2);
    return c;
}

void print(Point& p)
{
    cout << "(" << p.x << "," << p.y << ")" << endl;
}

int main()
{
    Point a, b;
    cin >> a.x >> a.y >> b.x >> b.y;
    Point c = mid_point(a,b);
    print(c);
    return 0;
}
