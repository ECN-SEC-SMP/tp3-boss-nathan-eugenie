
#ifndef FORME_HPP_
#define FORME_HPP_

#include "Point.hpp"

template<typename T, typename S>
class Forme
{
protected:
    
    Point<T> center;

public:
    Forme(void) : center(Point<T>()) {}
    Forme(const Point<T>& pts) : center(pts) {}
    ~Forme() {}

    Point<T> getCenter(void) const { return this->center; }

    virtual S perimetre(void) const = 0;
    virtual S surface(void) const = 0;

    friend std::ostream &operator<<(std::ostream &os, const Forme<T, S>& f) { 
        return os << "Forme(center=" << f.center << ")";
    }
};

#endif  /* FORME_HPP_ */
