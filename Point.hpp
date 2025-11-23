
#ifndef POINT_HPP_
#define POINT_HPP_

template <typename T>
class Point {

    protected:
        T _x;
        T _y;

    public:

        Point(void) : _x(0), _y(0) {};
        Point(const T x, const T y) : _x(x), _y(y) {};
        Point(const Point<T>& p) {
            this->_x = p._x;
            this->_y = p._y;
        };
        ~Point() {};

        // ----- Methods -----

        void translater(const T& x, const T& y){
            this->_x += x;
            this->_y += y;

            return;
        };

        // ----- Getter & Setter -----

        void setX(const T x) { this->_x = x; };
        void setY(const T y) { this->_y = y; };
        T getX(void) const { return this->_x; };
        T getY(void) const { return this->_y; };

        // ----- Surcharges -----

        friend std::ostream &operator<<(std::ostream &os, const Point<T>& p) { 
            return os << "Point(" << p.getX() << ", " << p.getY() << ")";
        }

};

#endif  /* POINT_HPP_ */
