#ifndef FORME_HPP
#define FORME_HPP

#include "point.h"

template <typename T>
class forme
{
private:
    point<T> centre;
public:
    // Constructeurs
    forme(const point<T>& pts) {
        this-> centre = pts;
    }

    // Accesseurs
    point<T> getcentre(void) const {return this->centre;}

    // Surchage operator
    friend std::ostream& operator<< (std::ostream &o, forme <T>const& C) {
        o<<"("<< C.getcentre() << ")";
        return o;
    }
};

#endif