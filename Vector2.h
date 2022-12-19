//
// Created by 1 on 29.11.2022.
//

#ifndef HELLO_WORLD_VECTOR2_H
#define HELLO_WORLD_VECTOR2_H


class Vector2 {
public:
    double x, y;

    Vector2();
    Vector2(double _x, double _y);


    void setX(double _x);
    double getX();
    void setY(double _y);
    double getY();

    double getR();
    double getPhi();
    double getA();
    Vector2 getPSK();
    Vector2 getNorm();
    Vector2 changePhi(float a);
    Vector2 changeR(float a);

    Vector2 operator+(const Vector2& vector) const;
    Vector2 operator-(const Vector2& vector) const;
    Vector2 operator*(const double & b) const;
    Vector2 operator/(const double& l) const;
    double operator*(const Vector2& vector) const;
    double operator&(const Vector2& vector) const;
    bool operator==(const Vector2& vector) const;
    bool operator!=(const Vector2& vector) const;


    //double operator|(const Vector2& vector) const;
    //double operator<<(const Vector2& vector) const;

    //Vector2 operator*(const double & a) const;
    //Vector2 operator/(const double & l);

    //Vector2 operator2(const Vector2& vector) const;


    Vector2 Norm();
};


#endif //HELLO_WORLD_VECTOR2_H