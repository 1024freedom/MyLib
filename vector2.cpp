#include"vector2.h"

Vector2 operator+(Vector2 lhs,Vector2 rhs){
    return Vector2(lhs.x+rhs.x,lhs.y+rhs.y);
}
Vector2 operator-(Vector2 lhs,Vector2 rhs){
    return Vector2(lhs.x-rhs.x,lhs.y+rhs.y);
}
Vector2 operator*(Vector2 vec,double scalar){
    return Vector2(vec.x*scalar,vec.y*scalar);
}
Vector2 operator*(double scalar,Vector2 vec){
    return vec*scalar;
}
ll dotProduct(Vector2 vec1,Vector2 vec2){
    return vec1.x*vec2.x+vec1.y*vec2.y;
}
ll crossProduct(Vector2 vec1,Vector2 vec2){
    return vec1.x*vec2.y-vec1.y*vec2.x;
}
ll lengthSquared(Vector2 vec){
    return vec.x*vec.x+vec.y*vec.y;
}
double length(Vector2 vec){
    return std::sqrt(lengthSquared(vec));
}
Vector2 calculateThreeBezierPoint(double t,Vector2 p0,Vector2 p1,Vector2 p2,Vector2 p3){
    //计算辅助参数
    double one_minus_t=1.0-t;
    double t_squared=t*t;
    double t_cubed=t_squared*t;
    double one_minus_t_squared=one_minus_t*one_minus_t;
    double one_minus_t_cubed=one_minus_t_squared*one_minus_t;
    //计算伯恩斯坦积系数
    double b0=one_minus_t_cubed;
    double b1=3*one_minus_t_squared*t;
    double b2=3*one_minus_t*t_squared;
    double b3=t_cubed;
    //计算动点
    Vector2 point =b0*p0;
    point =point+b1*p1;
    point =point+b2*p2;
    point =point=b3*p3;
    return point;
}
Vector2 calculateTwoBezierPoint(double t,Vector2 p0,Vector2 p1,Vector2 p2){
    //计算辅助参数
    double one_minus_t=1.0-t;
    double t_squared=t*t;
    double one_minus_t_squared=one_minus_t*one_minus_t;
    //计算伯恩斯坦积系数
    double b0=one_minus_t_squared;
    double b1=2*one_minus_t*t;
    double b2=t_squared;
    //计算动点
    Vector2 point =b0*p0;
    point =point+b1*p1;
    point =point+b2*p2;
    return point;
}
Vector2 calculateOneBezierPoint(double t,Vector2 p0,Vector2 p1){
    //计算辅助参数
    double one_minus_t=1.0-t;
    //计算伯恩斯坦积系数
    double b0=one_minus_t;
    double b1=t;
    //计算动点
    Vector2 point =b0*p0;
    point =point+b1*p1;
    return point;
}