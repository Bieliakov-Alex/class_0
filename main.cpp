#include <iostream>

/*struct Point{
    double x;
    double y;
};

double distance(Point first, Point second);*/

class Point{
public:
    Point();    
    Point(double x, double y);
    double distance(const Point& point);
    void print();
//protected:
private:
    double x;
    double y;
};

Point::Point():
    x{0},
    y{0}
    {

}

Point::Point(double x, double y):
    x{x},
    y{y}
    {
    std::cout<<"Point::Point"<<std::endl;
}

double Point::distance(const Point& point){
    std::cout<<"Point::distance"<<std::endl;
    double result = 0;

    //finding the distance between the object and point object

    return result;
}

void Point::print(){
    std::cout<<"X: "<<x<<" Y: "<<y<<std::endl;
}

int main() 
{
    std::cout << "Hello, World!"<<std::endl;

    Point p1(3,4);
    Point *p2 = new Point(1,2);
    Point& p3 = p1;
    Point p4;

    p1.distance(p3);
    //p1->distance(p3);
    p2->distance(p3);
    //p2.distance(p3);

    //p1.x = 2;
    //p2->x = 2;

    p1.print();
    p2->print();
    return 0;
}
