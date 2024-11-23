#include "Dust.hpp"


Dust::Dust(Point pos):center(pos)
{
    double radius=15;
    Color color(0,0,0);
    for(int i=0;i<7;i++)
    {
        double angle = static_cast<double>(std::rand()) / RAND_MAX * 2 * M_PI;
        double speed = 2500.0 + static_cast<double>(std::rand()) / RAND_MAX * 50.0;
        Velocity velocity(Point(std::cos(angle) * speed, std::sin(angle) * speed));
        Ball d(radius,color,velocity,center,false);
        dusts.push_back(d);
    }
}



void Dust::draw(Painter& painter) const 
{
    Color color(0,0,0);
    for(Ball dust: dusts)
    {
        painter.draw(dust.getCenter(),dust.getRadius(),color);
    }
    
}