#include <cstdint>
#include <iostream>

#include "Point.hpp"
#include "Forme.hpp"
#include "Rectangle.hpp"
#include "Carre.hpp"

void testPoint(void);
void testRectangle(void);
void testCarre(void);

/**
 * @brief Entry point for this program.
 * 
 * @param argc 
 * @param argv 
 * @return int 
 */
int main(int argc, char const *argv[])
{
    testPoint();

    std::cout << "\n";

    testRectangle();

    std::cout << "\n";

    testCarre();
    
    return 0;
}

// ================================================================================
// Tests
// ================================================================================

/**
 * @brief Test Point Template Class
 * 
 */
void testPoint(void) {

    std::cout << "// ==============================\n";
    std::cout << "// Test Points\n";
    std::cout << "// ==============================\n";
    
    std::cout << "// uint16_t\n";
    
    Point<uint16_t> us_pts(10, 15); // (us_ for unsigned short = uint16_t)
    std::cout << us_pts << std::endl;
    
    // Changes Values
    us_pts.setX(-10);
    us_pts.setY(65000);
    std::cout << us_pts << std::endl;
    
    // Custom Print
    std::cout << "Point : x = " << us_pts.getX() << ", y = " << us_pts.getY() << "\n";
    
    
    
    std::cout << "// float\n";
    
    Point<float> f_pts(0.0, 0.1235564);
    std::cout << f_pts << std::endl;
}

/**
 * @brief Test Rectangle Class
 * 
 */
void testRectangle(void) {
    std::cout << "// ==============================\n";
    std::cout << "// Test Rectangle\n";
    std::cout << "// ==============================\n";
    
    std::cout << "// uint16_t\n";
    Point<uint16_t> us_pts(10, 15);
    Rectangle<uint16_t, float> rect(us_pts, 120, 40);
    
    std::cout << rect << "\n";
    std::cout << "Perimètre = " << rect.perimetre() << ", Aire = " << rect.surface() << "\n";
    
    std::cout << "// float\n";
    Point<float> f_pts(530.2158, 798.2315);
    Rectangle<float, float> f_rect(f_pts, 120.354898, 40.124);

    std::cout << f_rect << "\n";
    std::cout << "Perimètre = " << f_rect.perimetre() << ", Aire = " << f_rect.surface() << "\n";
}

/**
 * @brief Test Carre Class
 * 
 */
void testCarre(void) {
    std::cout << "// ==============================\n";
    std::cout << "// Test Carre\n";
    std::cout << "// ==============================\n";
    
    std::cout << "// uint16_t\n";
    Point<uint16_t> us_pts(10, 15);
    Carre<uint16_t, float> rect(us_pts, 120);
    
    std::cout << rect << "\n";
    std::cout << "Perimètre = " << rect.perimetre() << ", Aire = " << rect.surface() << "\n";
    
    std::cout << "// float\n";
    Point<float> f_pts(530.2158, 798.2315);
    Carre<float, float> f_rect(f_pts, 120.354898);

    std::cout << f_rect << "\n";
    std::cout << "Perimètre = " << f_rect.perimetre() << ", Aire = " << f_rect.surface() << "\n";
}