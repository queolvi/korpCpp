#ifndef SEGMENT_H
#define SEGMENT_H

#include "point.h"
#include "utilites.h"
#include <iostream>

class Segment {
private: 
Point p1_, p2_;
public: 
Segment(Point p1, Point p2);
Segment(int x1, int y1, int x2, int y2);
Segment();

Point middlePoint() const;
bool ifContains(Point p) const;

std::ostream& dump(std::ostream& os) const;
std::ostream& operator<<(std::ostream& os, const Segment& s);
};

#endif