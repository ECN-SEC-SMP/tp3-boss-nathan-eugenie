
#include <iostream>
#include <cstdint>
#include "point.h"
#include "forme.h"

int main(){
    
    point<uint16_t> pts(1,1);

    forme<uint16_t> forme(pts);

    std::cout << "pts x ; y = " << pts;

    std::cout << "centre = " << forme;
}