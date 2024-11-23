#pragma once
#include "Painter.h"
#include "Point.h"
#include "Velocity.h"
#include <fstream>

class Ball 
{
public:
    Ball(double rad,Color c,Velocity vec,Point cen,bool coll):radius(rad),mass(M_PI*pow(radius,3)*4/3),color(c),velocity(vec),center(cen),isCollidable(coll){}

    void setVelocity(const Velocity& velocity);
    Velocity getVelocity() const;
    void draw(Painter& painter) const;
    void setCenter(const Point& center);
    void setradius(double ra);
    Point getCenter() const;
    double getRadius() const;
    double getMass() const;
    bool getCollidable();
    void setCollidable(bool c);



private:
    double radius;
    double mass;
    Color color;
    Velocity velocity;
    Point center;
    bool isCollidable;
};
