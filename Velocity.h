#pragma once
#include "Point.h"
#include <cmath>
#include <fstream>

class Velocity {
  public:
    inline Velocity() = default;

    inline Velocity(double abs, double angle) {
        const double x = std::cos(angle);
        const double y = std::sin(angle);
        vec = Point{x, y} * abs;
    }

    inline Velocity(const Point& vector) {
        setVector(vector);
    }

    inline void setVector(const Point& vector) {
        vec = vector;
    }

    inline Point vector() const {
        return vec;
    }

    friend std::istream& operator>>(std::istream& stream,Velocity& velocity)
    {
        stream>>velocity.vec;
        return stream;
    }

    friend std::ostream& operator<<(std::ostream& stream,Velocity& velocity)
    {
        stream<<velocity.vec.x<<" "<<velocity.vec.y;
        return stream;
    }

  private:
    Point vec;
};
