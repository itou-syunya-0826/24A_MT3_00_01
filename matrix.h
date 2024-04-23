﻿#pragma once
#include "mystruct.h"
#include "math.h"

class Matrix {
private:

	Vector3 v_,v1_,v2_;
	float scalar_;

public:

	Matrix();
	/// <summary>
    /// 加算
    /// </summary>
    /// <param name="v1"></param>
    /// <param name="v2"></param>
    /// <returns></returns>
	Vector3 Add(const Vector3& v1, const Vector3& v2);
	/// <summary>
	/// 減算
	/// </summary>
	/// <param name="v1"></param>
	/// <param name="v2"></param>
	/// <returns></returns>
	Vector3 Subtract(const Vector3& v1, const Vector3& v2);
	/// <summary>
	/// スカラー倍
	/// </summary>
	/// <param name="scalar"></param>
	/// <param name="v"></param>
	/// <returns></returns>
	Vector3 Multiply(float scalar, const Vector3& v);
	/// <summary>
	/// 内積
	/// </summary>
	/// <param name="v1"></param>
	/// <param name="v2"></param>
	/// <returns></returns>
	float Dot(const Vector3& v1, const Vector3& v2);
	/// <summary>
	/// 長さ（ノルム）
	/// </summary>
	/// <param name="v"></param>
	/// <returns></returns>
	float Length(const Vector3& v);
	/// <summary>
	/// 正規化
	/// </summary>
	/// <param name="v"></param>
	/// <returns></returns>
	Vector3 Normalize(const Vector3& v);

};




