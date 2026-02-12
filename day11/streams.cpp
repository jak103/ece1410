#include <iostream>
#include <iomanip>
#include <numbers>
#include <cmath>

using namespace std;

enum ShapeType {
    CIRCLE,
    SQUARE,
    TRIANGLE,
    RECTANGLE,
    PENTAGON
};

class TwoDimShape
{
    private:

    protected:
        float area;
        float perimeter;
        string color;
        int sideCount;

    public:
        TwoDimShape()
            : area(0.0f), perimeter(0.0f), sideCount(0), color("white")
        {
            // empty
        }

        virtual float getArea() = 0; // pure virtual
        // {
        //     return 0.0;
        // }

        friend ostream& operator<< (ostream& out, const TwoDimShape& shape);
};

class Circle : protected TwoDimShape
{
    protected:
        float radius;

    public:
        Circle(float radius) : TwoDimShape(), radius(radius)
        {
            // empty
        }

        float getArea()
        {
            return 3.14f * radius * radius;
        }
};

class Triangle : public TwoDimShape
{
    protected:
        float base;
        float height;

    public:
        Triangle(float base, float height) : TwoDimShape(), base(base), height(height)
        {
            // empty
        }

        float getArea()
        {
            return 0.5f * base * height;
        }
};

class Square : public TwoDimShape
{
    private:
        float side;

    public:
        Square(float side) : TwoDimShape(), side(side)
        {
            // empty
        }

        float getArea()
        {
            return side * side;
        }
};


ostream& operator<< (ostream& out, const TwoDimShape& shape)
{
    out << "Shape -- sides: " << setw(7) << shape.sideCount;
    return out;
}


int main()
{
    // TwoDimShape myShape(TRIANGLE);

    // cout << myShape << endl;

    Circle c(5);

    cout << "Circle area: " << c.getArea() << endl;
    
    Triangle t(12, 5);
    
    cout << "Triangle area: " << t.getArea() << endl;
    
    Square s(10);
    
    cout << "Square area: " << s.getArea() << endl;


    return 0;
}