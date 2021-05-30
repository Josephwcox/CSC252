#include <iostream>
using namespace std;

//This program prompts user to enter circle raduis
//Then the circle area is displayed
class Circle
{
private:
	double radius;
public:
	Circle();
	Circle(double r);
	double getRadius();
	void setRadius(double r);
	double area();
	double perimeter();
	double circumference();
	void printCircle();
};
Circle::Circle()
{
	radius = 1;
}

Circle::Circle(double r)
{
	radius = r;
}
double Circle::getRadius()
{
	return radius;
}
void Circle::setRadius(double r)
{
	if (r >= 0)
		radius = r;
}
double Circle::area()
{
	return 3.14 * pow(radius, 2);
}
double Circle::perimeter()
{
	return 2 * 3.14 * radius;
}
double Circle::circumference()
{
	return 2 * 31.14 * radius;
}
void Circle::printCircle()
{
	cout << " Radius: " << getRadius() << " , Area: " << area() << " Perimeter: " << perimeter() << "Circumference: "<< circumference() << endl;
}

int main()
{
	double radius;
	cout << "Enter radius\n";
	//Add code to read user input and store in variable radius
	cin >> radius;
	Circle c1(radius);
	cout << "The area of a circle with radius \n";
	//Calculate the area of the circle
	cout << "The area of a circle with radius " << radius << " is "<< c1.area() << endl;
	// Calculate the circumference of the circle
	cout << "The circumference of a circle with radius " << radius << " is " << c1.circumference() << endl;
	// Calculate the perimeter
	cout << cout << "The perimeter of a circle with radius " << radius << " is " << c1.perimeter() << endl;


	return 0;
}