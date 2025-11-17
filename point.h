#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>

template <typename T>
class point
{
private:
    T x;
    T y;
public:
    point(const T x,const T y) : x(x), y(y) {}
    point(const point<T>&p){}
    
    //-------- Méthodes --------

    // Accesseurs
    T getx() const {return x;}
    T gety() const {return y;}

    // Mutateurs
    void setx(T x) {this->x = x;}
    void sety(T y) {this->y = y;}

    //mutateurs direct dans translater
    void translater(T x,T y) {
        this->x += x;
        this->y += y;
    }

    // Surchage operator
    friend std::ostream& operator<< (std::ostream &o, point <T>const& p) {
        o<<"("<< p.getx() << ";" << p.gety() << ")";
        return o;
    }
};

#endif