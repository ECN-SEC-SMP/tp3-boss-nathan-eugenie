
#include "Forme.hpp"

template <typename T, typename S>
class Rectangle : public Forme<T, S>
{
private:
    T hauteur;
    T largeur;

public:
    Rectangle(const Point<T>& pts, T hauteur, T largeur) : hauteur(hauteur), largeur(largeur) {
        this->center = pts;
    }

    // ----- Methodes Abstraites -----

    S perimetre(void) const;
    S surface(void) const;

    // ----- Surcharges -----

    friend std::ostream &operator<<(std::ostream &os, const Rectangle<T, S>& r) { 
        return os << "Rectangle(center=" << r.center << ", hauteur=" << r.hauteur << ", largeur=" << r.largeur << ")";
    }
};

template <typename T, typename S>
S Rectangle<T, S>::perimetre(void) const {
    return static_cast<S>((this->hauteur * 2) + (this->largeur * 2));
}

template <typename T, typename S>
S Rectangle<T, S>::surface(void) const {
    return static_cast<S>(this->hauteur * this->largeur);
}