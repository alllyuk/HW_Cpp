//
// Created by 1 on 29.11.2022.
//
#include <iostream>
#include <cmath>
#include "Vector2.h"

Vector2::Vector2(): x(0.0), y (0.0) {};
Vector2::Vector2(double _x, double _y): x(_x), y (_y) {};

void Vector2::setX(double _x){
    x = _x;
}
void Vector2::setY(double _y){
    y = _y;
}

double Vector2::getX(){
    return x;
}
double Vector2::getY(){
    return y;
}

double Vector2::getR(){
    return std::sqrt(x*x + y*y);
}

double Vector2::getPhi(){
    return std::atan2(y, x);
}
double Vector2::getA() {
    return std::atan2(y, x)*180/3.1415;  // угол в градусах
}

Vector2 Vector2::operator+(const Vector2& vector) const{
    return Vector2(x + vector.x, y + vector.y);
}
Vector2 Vector2::operator-(const Vector2& vector) const{  // вычетание векторов
    return Vector2(x - vector.x, y - vector.y);
}
Vector2 Vector2::operator*(const double & b) const{   //умножение на число
    return Vector2(x * b, y * b);
}
Vector2 Vector2::operator/(const double& l) const {   //деление на число
    return Vector2(x / l, y / l);
}
double Vector2::operator*(const Vector2& vector) const{ //скалярное умножение
    return (x * vector.x + y * vector.y);
}
//double Vector2::operator*(const Vector2& vector) const{ // псевдоскалярное умножение
//return (x * vector.x - y * vector.y);
//}
double Vector2::operator&(const Vector2& vector) const{ //
    return (sqrt(x*x + y*y))*sqrt(vector.x*vector.x + vector.y+vector.y)*((y+vector.y)/(x+vector.x)); //угловое расстояние между векторами
}
bool Vector2::operator==(const Vector2& vector) const{
    return ( x == vector.x && y == vector.y);
}
bool Vector2::operator!=(const Vector2& vector) const{
    return ( x != vector.x || y != vector.y);
}

Vector2 Vector2::getPSK(){
    auto Phi = getA();
    auto R = getR();
    return Vector2(x = R,y = Phi );
}
Vector2 Vector2::getNorm(){
    auto R = getR();
    return Vector2(x = x/R, y = y/R);
}
Vector2 Vector2::changePhi(float a){
    auto Phi = getA();
    auto R = getR();
    return Vector2(x = R,y = Phi*a );
}
Vector2 Vector2::changeR(float a){
    auto Phi = getA();
    auto R = getR();
    return Vector2(x = R*a,y = Phi );
}


