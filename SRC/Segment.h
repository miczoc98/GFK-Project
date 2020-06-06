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
    Color(int _R, int _G, int _B) : R(_R), G(_G), B(_B) {}
    Color next();
    Color &operator+=(int i);
    int R;
    int G;
    int B;

private:
    enum class cycle
    {
        Ru,
        Gu,
        Rd,
        Bu,
        Gd,
        Bd,
    };
    cycle m_current_cycle = cycle::Ru;
    int m_step = 1;
};

struct Segment
{
    Segment(Point _begin, Point _end, Color _color) : begin(_begin), end(_end), color(_color) {}

    Point begin;
    Point end;
    Color color;
};