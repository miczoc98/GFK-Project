#include "Point.h"

Point::Point(double _x, double _y, double _z)
{
	x = _x;
	y = _y;
	z = _z;
}

Point Point::as_spherical()
{
	double r = x;
	double phi = y;
	double theta = z;

	double x = r * sin(theta)* cos(phi);
	double y = r * sin(theta) * sin(phi);
	double z = r * cos(theta);

	return Point(x, y, z);
}

Color& Color::operator+=(int i)
{
	R += i;
	G += i;
	B += i;

	R = R < 256 ? R : 255;
	G = G < 256 ? G : 255;
	B = B < 256 ? B : 255;


	return *this;
}
