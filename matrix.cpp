#include "matrix.h"

Matrix::Matrix(){
	v_ = {};
	v1_ = {};
	v2_ = {};
	scalar_ = 0;
}

Vector3 Matrix::Add(const Vector3& v1, const Vector3& v2)
{
	const Vector3 resultAdd{
		v1.x + v2.x,
		v1.y + v2.y,
		v1.z + v2.z
	};

	return resultAdd;
}

Vector3 Matrix::Subtract(const Vector3& v1, const Vector3& v2)
{
	const Vector3 resultSubtract{
		v1.x - v2.x,
		v1.y - v2.y,
		v1.z - v2.z,
	};

	return  resultSubtract;
}

Vector3 Matrix::Multiply(float scalar, const Vector3& v)
{
	const Vector3 resultMultiply{
		v.x * scalar,
		v.y * scalar,
		v.z * scalar
	};

	return resultMultiply;
}

float Matrix::Dot(const Vector3& v1, const Vector3& v2)
{

	float resultDot = v1.x * v2.x + v1.y * v2.y + v1.z * v2.z;

	return resultDot;
}

float Matrix::Length(const Vector3& v)
{
	float resultLength = sqrtf(v.x * v.x + v.y * v.y + v.z * v.z);

	return resultLength;
}

Vector3 Matrix::Normalize(const Vector3& v)
{
	float length = sqrtf(v.x * v.x + v.y * v.y + v.z * v.z);
	
	Vector3 resultNormalize = { v.x,v.y,v.z };

	if (length != 0) {
		resultNormalize = { v.x / length,v.y / length,v.z / length };
	}


	return resultNormalize;
}


