#pragma once

#include<cmath>
using ll=long long;
struct Vector2{
    ll x,y;
    Vector2(ll x,ll y):x(x),y(y){};
    Vector2():x(0),y(0){};
};
// =============== 基本向量运算 ===============
// 向量加法：分量相加
Vector2 operator+(Vector2 lhs, Vector2 rhs);

// 向量减法：分量相减
Vector2 operator-(Vector2 lhs, Vector2 rhs);

// 向量数乘：向量乘以标量
Vector2 operator*(Vector2 vec, double scalar);

// 向量数乘：标量乘以向量（交换律）
Vector2 operator*(double scalar, Vector2 vec);

// =============== 向量点积和叉积 ===============
// 点积（数量积）：结果表示两个向量的相似程度
ll dotProduct(Vector2 a, Vector2 b);

// 叉积（二维伪标量）：结果表示两个向量形成的平行四边形面积
ll crossProduct(Vector2 a, Vector2 b);

// =============== 向量长度相关 ===============
// 向量长度的平方（避免开方计算）
ll lengthSquared(Vector2 vec);

// 向量实际长度（欧几里得距离）
double length(Vector2 vec);

// =============== 曲线计算 ===============
// 三次贝塞尔曲线
Vector2 calculateThreeBezierPoint(double t, Vector2 p0, Vector2 p1, Vector2 p2, Vector2 p3);
//二次贝塞尔
Vector2 calculateTwoBezierPoint(double t,Vector2 p0,Vector2 p1,Vector2 p2);
//线性贝塞尔   
Vector2 calculateOneBezierPoint(double t,Vector2 p0,Vector2 p1);


