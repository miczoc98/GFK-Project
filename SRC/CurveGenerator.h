#pragma once

#include <deque>

#include "LissajousCurve.h"
#include "Segment.h"

class CurveGenerator
{
public:
	CurveGenerator() = default;
	CurveGenerator(int max_len, double seg_len);
	std::deque<Segment> get_next();
	void set_cartesian(bool b);
	void set_animate(bool b);
	void set_A(double A);
	void set_B(double B);
	void set_C(double C);
	void set_phi(double phi);
	void set_psi(double psi);
	void set_theta(double theta);
	void set_m(double m);
	void set_n(double n);
	void set_k(double k);
	void reset();

private:
	double m_t = 0;
	int m_current_segment_count = 0;
	int m_max_segment_count = 200;
	int m_max_animation_segment_count = 100;

	double m_segment_length = 0.01;
	double m_segment_generation_step = 0.001;
	
	bool m_is_cartesian = true;
	bool m_animate = false;
	
	Color color = Color(255, 0, 0);
	LissajousCurve m_curve;
	std::deque<Segment> m_queue;

	Segment generate_segment();
};