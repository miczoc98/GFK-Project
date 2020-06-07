#include "CurveGenerator.h"

CurveGenerator::CurveGenerator(int max_len, double seg_len)
{
	m_curve = LissajousCurve();
	m_max_segment_count = max_len;
	m_max_animation_segment_count = (int)(0.5 * max_len);
	m_segment_length = seg_len;
}

std::deque<Segment> CurveGenerator::get_next()
{
	if (m_animate)
	{
		Segment seg = generate_segment();

		if (m_current_segment_count > m_max_animation_segment_count)
		{
			m_queue.pop_front();
		}
		else
			m_current_segment_count++;

		m_queue.push_back(seg);

		for (int i = 0; i < m_current_segment_count - 0.6 * m_max_animation_segment_count; i++)
			m_queue[i].color += (int)(255.0 / (0.4 * m_max_animation_segment_count) + 1);

		return m_queue;
	}
	else
	{
		while (m_current_segment_count < m_max_segment_count)
		{
			m_current_segment_count++;
			Segment seg = generate_segment();
			m_queue.push_back(seg);
		}
	}
	return m_queue;
}

void CurveGenerator::set_cartesian(bool b)
{
	m_is_cartesian = b;
	reset();
}

void CurveGenerator::set_animate(bool b)
{
	m_animate = b;
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

void CurveGenerator::set_phi(double phi)
{
	m_curve.set_phi(phi);
	reset();
}

void CurveGenerator::set_psi(double psi)
{
	m_curve.set_psi(psi);
	reset();
}

void CurveGenerator::set_theta(double theta)
{
	m_curve.set_theta(theta);
	reset();
}

void CurveGenerator::set_m(double m)
{
	m_curve.set_m(m);
	reset();
}

void CurveGenerator::set_n(double n)
{
	m_curve.set_n(n);
	reset();
}

void CurveGenerator::set_k(double k)
{
	m_curve.set_k(k);
	reset();
}

void CurveGenerator::reset()
{
	m_t = 0;
	m_queue.clear();
	m_current_segment_count = 0;
	color = Color(255, 0, 0);
}

Segment CurveGenerator::generate_segment()
{
	Point start = m_curve.get_pos(m_t, m_is_cartesian);
	double current_segment_length = 0;
	Point pos;
	int i = 0;
	while (current_segment_length < m_segment_length && i < 400)
	{
		i++;
		pos = m_curve.get_pos(m_t += m_segment_generation_step, m_is_cartesian);
		current_segment_length = sqrt(pow(start.x - pos.x, 2) + pow(start.y - pos.y, 2) + pow(start.z - pos.z, 2));
	}
	return Segment(start, pos, color.next());
}