#include "Matrix.h"

Vector4::Vector4()
{

	data[0] = 0.0;
	data[1] = 0.0;
	data[2] = 0.0;
	data[3] = 1.0;

}


void Vector4::set(double d1, double d2, double d3)
{

	data[0] = d1; data[1] = d2; data[2] = d3;

}

double Vector4::get_x()
{

	return data[0];

}

double Vector4::get_y()
{

	return data[1];

}

double Vector4::get_z() {

	return data[2];

}

Vector4 Vector4::operator- (const Vector4& gVector) 
{

	unsigned int i;
	Vector4 Result;
	for (i = 0; i < 4; i++) Result.data[i] = data[i] - gVector.data[i];
	return Result;

}

Vector4 operator* (const Vector4& gVector, double val) 
{

	unsigned int i;
	Vector4 Result;
	for (i = 0; i < 4; i++) Result.data[i] = gVector.data[i] * val;
	return Result;

}

Matrix4::Matrix4() 
{

	data[0][0] = 0.0;
	data[0][1] = 0.0;
	data[0][2] = 0.0;
	data[0][3] = 0.0;

	data[1][0] = 0.0;
	data[1][1] = 0.0;
	data[1][2] = 0.0;
	data[1][3] = 0.0;

	data[2][0] = 0.0;
	data[2][1] = 0.0;
	data[2][2] = 0.0;
	data[2][3] = 0.0;

	data[3][0] = 0.0;
	data[3][1] = 0.0;
	data[3][2] = 0.0;
	data[3][3] = 1.0;

}

Matrix4 Matrix4::operator* (const Matrix4 gMatrix) 
{

	int i, j, k;
	Matrix4 tmp;

	for (i = 0; i < 4; i++)
		for (j = 0; j < 4; j++)
		{
			tmp.data[i][j] = 0.0;
			for (k = 0; k < 4; k++)
				tmp.data[i][j] = tmp.data[i][j] + (data[i][k] * gMatrix.data[k][j]);
		}

	return tmp;

}

Vector4 operator* (const Matrix4 gMatrix, const Vector4 gVector) 
{

	unsigned int i, j;
	Vector4 tmp;

	for (i = 0; i < 4; i++) 
	{
		tmp.data[i] = 0.0;
		for (j = 0; j < 4; j++) tmp.data[i] = tmp.data[i] + (gMatrix.data[i][j] * gVector.data[j]);
	}

	return tmp;

}

Matrix4 RotateX(double x) {

	Matrix4 temp;
	double a = x * M_PI / 180.;
	temp.data[1][1] = cos(a);
	temp.data[2][2] = cos(a);
	temp.data[1][2] = sin(a);
	temp.data[2][1] = -sin(a);
	temp.data[0][0] = 1.;

	return temp;

}

Matrix4 RotateY(double y) {

	Matrix4 temp;
	double a = y * M_PI / 180.;
	temp.data[0][0] = cos(a);
	temp.data[2][2] = cos(a);
	temp.data[2][0] = sin(a);
	temp.data[0][2] = -sin(a);
	temp.data[1][1] = 1.;

	return temp;

}

Matrix4 RotateZ(double z) {

	Matrix4 temp;
	double a = z * M_PI / 180.;
	temp.data[0][0] = cos(a);
	temp.data[1][1] = cos(a);
	temp.data[0][1] = sin(a);
	temp.data[1][0] = -sin(a);
	temp.data[2][2] = 1.;

	return temp;

}

Matrix4 Projection(double w, double h) {

	Matrix4 temp1;
	Matrix4 temp2;

	temp1.data[0][0] = 1.;
	temp1.data[1][1] = 1.;

	temp1.data[3][2] = 1. / 3.;

	temp2.data[0][0] = w / 3.;
	temp2.data[1][1] = -h / 3.;

	temp2.data[0][3] = w / 2.;
	temp2.data[1][3] = h / 2.;

	return temp2 * temp1;

}

Vector4 Normalization(Vector4 v) {

	Vector4 temp = v;
	temp.data[0] /= v.data[3];
	temp.data[1] /= v.data[3];
	temp.data[2] /= v.data[3];

	return temp;

}
