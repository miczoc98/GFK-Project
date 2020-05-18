#pragma once

#include <cmath>


struct Point
{
	Point(double x, double y, double z);
	Point as_spherical();

	double x;
	double y;
	double z;
};


struct Color
{
	int R;
	int G;
	int B;
	Color(int _R, int _G, int _B) : R(_R), G(_G), B(_B) {}
};

struct Segment
{
	Point begin;
	Point end;
	Color color;

	Segment(Point _begin, Point _end, Color _color) : begin(_begin), end(_end), color(_color) {}
};