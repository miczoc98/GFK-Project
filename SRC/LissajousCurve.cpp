#include "LissajousCurve.h"
#include <cmath>

LissajousCurve::LissajousCurve()
{
	_A = 1;
	_B = 1;
	_C = 1;

	_alpha = 1;
	_beta = 1;
	_gamma = 1;

	_f = 1;
	_g = 1;
	_h = 1;
}

Point LissajousCurve::get_pos(double t)
{
	double x = _A * sin(_alpha * t + _f);
	double y = _B * sin(_beta * t + _g);
	double z = _C * sin(_gamma * t + _h);

	return Point(x, y, z);
}

std::vector<Segment> LissajousCurve::get_curve(double len, double step, bool asCartesian)
{
	std::vector<Segment> curve;

	for (double t = 0; t < len; t += step)
	{
		if (asCartesian)
		{
			Segment seg(get_pos(t), get_pos(t + step), Color(255, 0, 0));
			curve.push_back(seg);
		}
		else
		{
			Segment seg(get_pos(t).as_spherical(), get_pos(t + step).as_spherical(), Color(255, 0, 0));
			curve.push_back(seg);
		}
	}

	return curve;
}


