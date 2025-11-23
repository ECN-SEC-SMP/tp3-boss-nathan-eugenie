
#include "Forme.hpp"

template <typename T, typename S>
class Carre : public Forme<T, S>
{
private:
    T cote;

public:
    Carre(const Point<T>& pts, T cote) : cote(cote) {
        this->center = pts;
    }

    // ----- Methodes Abstraites -----

    S perimetre(void) const;
    S surface(void) const;

    // ----- Surcharges -----

    friend std::ostream &operator<<(std::ostream &os, const Carre<T, S>& r) { 
        return os << "Carre(center=" << r.center << ", cote=" << r.cote << ")";
    }
};

template <typename T, typename S>
S Carre<T, S>::perimetre(void) const {
    return static_cast<S>((this->cote * 4));
}

template <typename T, typename S>
S Carre<T, S>::surface(void) const {
    return static_cast<S>(this->cote * this->cote);
}