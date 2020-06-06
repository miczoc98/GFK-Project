#pragma once

#define _USE_MATH_DEFINES
#include <stdio.h>
#include <cmath>

struct Vector4
{
    friend Vector4 operator*(const Vector4&, double);

    Vector4();
    Vector4 operator-(const Vector4&);

    void set(double d1, double d2, double d3);
    double get_x();
    double get_y();
    double get_z();

    double data[4];
};

struct Matrix4
{
    friend Vector4 operator*(const Matrix4, const Vector4);

    Matrix4();
    Matrix4 operator*(const Matrix4);

    double data[4][4];
};

Matrix4 RotateX(double x);

Matrix4 RotateY(double y);

Matrix4 RotateZ(double z);

Matrix4 Projection(double w, double h);

Vector4 Normalization(Vector4 v);
