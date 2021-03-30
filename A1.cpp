#include <iostream>

using namespace std;

struct Point
{
    int x, y;

    Point(){}
    Point (int _x, int _y):x(_x),y(_y)
    {

    }
    void print()
    {
        cout << "(" << x << "," << y << ")" << endl;
    }
};



int main()
{
    Point a;
    cin >> a.x >> a.y;
    a.print();
    return 0;
}
