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

Point LissajousCurve::get_pos(double t, bool as_cartesian)
{
	double x = _A * sin(_alpha * t + _f);
	double y = _B * sin(_beta * t + _g);
	double z = _C * sin(_gamma * t + _h);

	return as_cartesian ? Point(x, y, z) : Point(x, y, z).as_spherical();
}
