#pragma once

#define _USE_MATH_DEFINES
#include <stdio.h>
#include <cmath>

struct Vector4{

	public:
		double data[4];
		Vector4();
		void Set(double d1,double d2,double d3);

		double GetX();
		double GetY();
		double GetZ();
		Vector4 operator-(const Vector4 &);
		
		friend Vector4 operator*(const Vector4 &,double);

};

class Matrix4{

	public:
		double data[4][4];
		Matrix4();
		Matrix4 operator*(const Matrix4);
		friend Vector4 operator*(const Matrix4,const Vector4);

};

Matrix4 RotateX(float x);

Matrix4 RotateY(float y);

Matrix4 RotateZ(float z);

Matrix4 Projection(float w, float h);

Vector4 Normalization(Vector4 v);


