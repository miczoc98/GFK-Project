#include "CurveGenerator.h"

CurveGenerator::CurveGenerator(int max_len, double seg_len)
{
	m_curve = LissajousCurve();
	m_max_len = max_len;
	m_segment_len = seg_len;
}

std::deque<Segment> CurveGenerator::get_next()
{
	Segment seg = generate_segment();
	
	if (m_len > m_max_len)
	{
		m_queue.pop_front();
		m_queue[0].color = m_queue[0].color - 1;
	}
	else
		m_len++;
	m_queue.push_back(seg);
	return m_queue;
}

void CurveGenerator::set_cartesian(bool b)
{
	m_is_cartesian = b;
	reset();
}

void CurveGenerator::set_A(double A)
{
	m_curve.set_A(A);
	reset();
}

void CurveGenerator::set_B(double B)
{
	m_curve.set_B(B);
	reset();
}

void CurveGenerator::set_C(double C)
{
	m_curve.set_C(C);
	reset();
}

void CurveGenerator::set_alpha(double alpha)
{
	m_curve.set_alpha(alpha);
	reset();
}

void CurveGenerator::set_beta(double beta)
{
	m_curve.set_beta(beta);
	reset();
}

void CurveGenerator::set_gamma(double gamma)
{
	m_curve.set_gamma(gamma);
	reset();
}

void CurveGenerator::set_f(double f)
{
	m_curve.set_f(f);
	reset();
}

void CurveGenerator::set_g(double g)
{
	m_curve.set_g(g);
	reset();
}

void CurveGenerator::set_h(double h)
{
	m_curve.set_h(h);
	reset();
}

void CurveGenerator::reset()
{
	m_t = 0;
	m_queue.clear();
	m_len = 0;
}

Segment CurveGenerator::generate_segment()
{
	Point start = m_curve.get_pos(m_t, m_is_cartesian);
	double current_segment_length = 0;
	Point pos;
	while (current_segment_length < m_segment_len)
	{
		pos = m_curve.get_pos(m_t += step, m_is_cartesian);
		current_segment_length += sqrt(pow(start.x - pos.x, 2) + pow(start.y - pos.y, 2) + pow(start.z - pos.z, 2));
	}
	return Segment(start, pos, Color(0, 0, 0));
}
