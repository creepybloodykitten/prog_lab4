#pragma once
#include "Point.h"
#include "Ball.hpp"
#include "Color.h"
#include "Velocity.h"
#include "Painter.h"
#include <vector>


class Dust
{
public:
    Dust(Point pos);

    Point center;
    std::vector<Ball> dusts;

    void draw(Painter& painter) const;
};