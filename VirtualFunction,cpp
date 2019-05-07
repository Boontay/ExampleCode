#include <iostream>

using namespace std;


class Shape
{
public:
    virtual void draw()
    {
        cout << "shape" << endl;
    }
};

class Rectangle : public Shape
{
public:
    void draw()
    {
        cout << "rectangle" << endl;
    }
};

class Circle : public Shape
{
public:
    void draw()
    {
        cout << "circle" << endl;
    }
};

class Square : public Shape
{
public:
    void draw()
    {
        cout << "square" << endl;
    }
};

int main()
{
    Shape *bptr;

    Rectangle r;
    bptr = &r;
    bptr->draw();

    Circle c;
    bptr = &c;
    bptr->draw();

    Square s;
    bptr = &s;
    bptr->draw();

    return 0;
}
