#pragma once

#include <vector>
#include "Segment.h"

class LissajousCurve
{
public:
	LissajousCurve();
	
	Point get_pos(double t, bool as_cartesian);

	void set_A(double A) { _A = A; };
	void set_B(double B) { _B = B; };
	void set_C(double C) { _C = C; };
	void set_phi(double phi) { _phi = phi; };
	void set_psi(double psi) { _psi = psi; };
	void set_theta(double theta) { _theta = theta; };
	void set_m(double m) { _m = m; };
	void set_n(double n) { _n = n; };
	void set_k(double k) { _k = k; };


private:
	double _A;
	double _B;
	double _C;
	
	double _phi;
	double _psi;
	double _theta;

	double _m;
	double _n;
	double _k;

};