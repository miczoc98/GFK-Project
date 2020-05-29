#pragma once

#include <deque>
#include "LissajousCurve.h"
#include "Point.h"

class CurveGenerator
{
public:
	CurveGenerator(int max_len, double seg_len);
	std::deque<Segment> get_next();
	void set_cartesian(bool b);
	void set_animate(bool b);
	void set_A(double A);
	void set_B(double B);
	void set_C(double C);
	void set_alpha(double alpha);
	void set_beta(double beta);
	void set_gamma(double gamma);
	void set_f(double f);
	void set_g(double g);
	void set_h(double h);
	void reset();

private:
	double m_t = 0;
	int m_len = 0;
	int m_max_len = 200;
	double m_segment_len = 0.01;
	double step = 0.001;
	bool m_is_cartesian = true;
	bool m_animate = false;

	LissajousCurve m_curve;
	std::deque<Segment> m_queue;
	Segment generate_segment();
};