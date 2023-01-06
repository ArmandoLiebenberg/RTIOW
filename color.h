#ifndef COLOR_H
#define COLOR_H

#include "vec3.h"
#include <iostream>

// color here is an alias for a vec3
void write_color(std::ostream &out, color pixelcolor) {
    out << static_cast<int>(255.999 * pixelcolor.x()) << ' '
        << static_cast<int>(255.999 * pixelcolor.y()) << ' '
        << static_cast<int>(255.999 * pixelcolor.z()) << '\n';
}

#endif