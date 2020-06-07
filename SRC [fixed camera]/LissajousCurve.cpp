#include "LissajousCurve.h"
#include <cmath>

LissajousCurve::LissajousCurve()
{
	_A = 1;
	_B = 1;
	_C = 1;

	_phi = 1;
	_psi = 1;
	_theta = 1;

	_m = 1;
	_n = 1;
	_k = 1;
}

Point LissajousCurve::get_pos(double t, bool as_cartesian)
{
	double x = _A * sin( _n * t + _phi);
	double y = _B * sin( _m * t + _psi);
	double z = _C * sin( _k * t + _theta);

	return as_cartesian ? Point(x, y, z) : Point(x, y, z).as_spherical();
}
