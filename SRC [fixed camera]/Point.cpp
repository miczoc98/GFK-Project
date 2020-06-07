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

Color Color::next()
{
	switch (current_cycle)
	{
	case Gu:
		G += m_step;
		if (G > 255)
		{
			G = 255;
			current_cycle = Rd;
		}
		break;
	case Rd:
		R -= m_step;
		if (R < 0)
		{
			R = 0;
			current_cycle = Bu;
		}
		break;
	case Bu:
		B += m_step;
		if (B > 255)
		{
			B = 255;
			current_cycle = Gd;
		}
		break;
	case Gd:
		G -= m_step;
		if (G < 0)
		{
			G = 0;
			current_cycle = Ru;
		}
		break;
	case Ru:
		R += m_step;
		if (R > 255)
		{
			R = 255;
			current_cycle = Bd;
		}
		break;
	case Bd:
		B -= m_step;
		if (B < 0)
		{
			B = 0;
			current_cycle = Gu;
		}
	}
	return *this;
}
