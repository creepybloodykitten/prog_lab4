#include "Ball.hpp"
#include <cmath>



void Ball::setVelocity(const Velocity& v) 
{
    velocity=v;
}


Velocity Ball::getVelocity() const 
{
    return velocity;
}

/**
 * @brief Выполняет отрисовку объекта
 * @details объект Ball абстрагирован от конкретного
 * способа отображения пикселей на экране. Он "знаком"
 * лишь с интерфейсом, который предоставляет Painter
 * Рисование выполняется путем вызова painter.draw(...)
 * @param painter контекст отрисовки
 */

void Ball::draw(Painter& painter) const 
{
    painter.draw(center,radius,color);
}


void Ball::setCenter(const Point& c) 
{
    center=c;
}


Point Ball::getCenter() const 
{    
    return center;
}


double Ball::getRadius() const 
{
    return radius;
}


double Ball::getMass() const 
{
    return mass;
}

void Ball::setCollidable(bool c)
{
    isCollidable=c;
}
bool Ball::getCollidable()
{
    return isCollidable;
}

void Ball::setradius(double rad)
{
    radius=rad;
}