#include <iostream>
#include <cstring>

using namespace std;

struct String
{
    int n;
    char* str;
    String(const char* _str)
    {
        n = strlen(_str);
        str = new char[n];
        strcpy(str,_str);
    }
    ~String()
    {
        delete []str;
    }
    void print() const
    {
        cout << str;
    }
    void append(const char* s)
    {
        char* tmp = new char[n+strlen(s)];
        strcpy(tmp,str);
        delete []str;
        strcat(tmp,s);
        str = tmp;
    }
};

int main()
{
    String s("Hello");
    s.append(" World");
    s.print();
    return 0;
}
