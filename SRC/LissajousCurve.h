#pragma once

#include "Point.h"
#include <vector>

//Curve described as x = Asin(alpha t + f), y = Bsin(beta t + g), z = Csin(gamma t + h)
class LissajousCurve
{
public:
	LissajousCurve();
	
	Point get_pos(double t);
	std::vector<Segment> get_curve(double len, double step, bool asCartesian = true);

	void set_A(double A) { _A = A; };
	void set_B(double B) { _B = B; };
	void set_C(double C) { _C = C; };
	void set_alpha(double alpha) { _alpha = alpha; };
	void set_beta(double beta) { _beta = beta; };
	void set_gamma(double gamma) { _gamma = gamma; };
	void set_f(double f) { _f = f; };
	void set_g(double g) { _g = g; };
	void set_h(double h) { _h = h; };


private:
	double _A;
	double _B;
	double _C;
	
	double _alpha;
	double _beta;
	double _gamma;

	double _f;
	double _g;
	double _h;

};