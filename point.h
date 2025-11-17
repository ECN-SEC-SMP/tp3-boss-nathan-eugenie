template <typename T>
class point
{
private:
    T x;
    T y;
public:
    point(const T x,const T y) : x(0), y(0) {}
    point(const point<T>&p)
    
    //-------- Méthodes --------

    // Accesseurs
    T getx() {return x;}
    T gety() {return y;}

    // Mutateurs
    void setx(T new x) {x = new x;}
    void sety(T new y) {y = new y;}

    //mutateurs direct dans translater
    void translater(T x,T y) {
        this->x += x;
        this->y += y;
    }

    // Surchage operator
    friend std::ostream& operator<< <T>(std::ostream &o, point const&) {
        o<<"("<< point.x << "," << point.y ")";
        return o;
    }
};

