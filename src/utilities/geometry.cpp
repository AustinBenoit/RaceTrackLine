#include "geometry.hpp"

#include <cmath>

double Point3D::Distance(Point3D b){

  return sqrt((x - b.x) * (x - b.x) +
	      (y - b.y) * (y - b.y) +
	      (z - b.z) * (z - b.z));
}
