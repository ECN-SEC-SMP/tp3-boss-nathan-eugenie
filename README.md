# Nathan - Eugénie

**/!\ ATTENTION**
> Nous avons développé chacun de notre coté, il y a donc 2 branches.  
> La branche main ne contient pas de code pour le moment.

## Build / Compilation

```sh
mkdir build
cmake -Bbuild .
```

```sh
cmake --build build/
```

```sh
./build/CPP_TP3_EUGE_NATH
```

## Diagramme de classe

```mermaid
---
title: CPP - TP3
---
classDiagram
    class Point {
        <<template>>

        - _x
        - _y

        + setX(T x)
        + setY(T y)
        + T getX()
        + T getY()

        + translater(T x, T y)

        *friend* ostream &operator<<(ostream &os, const Point<T>& p)
    }

    class Forme {
        <<abstract>>

        - Point<T> centre

        + Point<T> getCenter(void) const

        + <abstract> S perimetre() const
        + <abstract> S surface() const

        *friend* ostream &operator<<(ostream &os, const Forme<T, S>& f)

    }

    class Rectangle {
        <<template>>

        - T hauteur
        - T largeur

        + S perimetre(void) const
        + S surface(void) const

        *friend* ostream &operator<<(ostream &os, const Rectangle<T, S>& f)
    }

    class Carre {
        <<template>>

        - T cote

        + S perimetre(void) const
        + S surface(void) const    

        *friend* ostream &operator<<(ostream &os, const Rectangle<T, S>& f)
    }

    Point *-- Forme
    Forme <|-- Rectangle
    Forme <|-- Carre

```