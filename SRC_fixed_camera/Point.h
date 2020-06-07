#pragma once

#include <cmath>


struct Point
{
	Point() = default;
	Point(double x, double y, double z);
	Point as_spherical();

	double x = 0;
	double y = 0;
	double z = 0;
};


struct Color
{
	enum cycle
	{
		Ru,
		Gu,
		Rd,
		Bu,
		Gd,
		Bd,
	};

	int R;
	int G;
	int B;
	
	int m_step = 1;
	cycle current_cycle = Ru;
	Color(int _R, int _G, int _B) : R(_R), G(_G), B(_B) {}
	Color& operator+=(int i);
	Color next();
};

struct Segment
{
	Point begin;
	Point end;
	Color color;

	Segment(Point _begin, Point _end, Color _color) : begin(_begin), end(_end), color(_color) {}
};