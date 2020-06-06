#include "Segment.h"

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
	switch (m_current_cycle)
	{
	case cycle::Gu:
		G += m_step;
		if (G > 255)
		{
			G = 255;
			m_current_cycle = cycle::Rd;
		}
		break;
	case cycle::Rd:
		R -= m_step;
		if (R < 0)
		{
			R = 0;
			m_current_cycle = cycle::Bu;
		}
		break;
	case cycle::Bu:
		B += m_step;
		if (B > 255)
		{
			B = 255;
			m_current_cycle = cycle::Gd;
		}
		break;
	case cycle::Gd:
		G -= m_step;
		if (G < 0)
		{
			G = 0;
			m_current_cycle = cycle::Ru;
		}
		break;
	case cycle::Ru:
		R += m_step;
		if (R > 255)
		{
			R = 255;
			m_current_cycle = cycle::Bd;
		}
		break;
	case cycle::Bd:
		B -= m_step;
		if (B < 0)
		{
			B = 0;
			m_current_cycle = cycle::Gu;
		}
	}
	return *this;
}
