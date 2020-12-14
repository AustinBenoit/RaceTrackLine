#ifndef GEOMETRY_HPP
#define GEOMETRY_HPP

class Point3D {
  
public:

  double x, y, z;

  Point3D() : x(0.0), y(0.0), z(0.0) {
  }

  Point3D(double  xi, double yi, double zi): x(xi), y(yi), z(zi) {  
  }

  double Distance(Point3D b);

};

class Line {

public:
  //TODO make sure they are actually a line and just a point
  Line(Point3D a, Point3D b) : a_(a), b_(b)
  {}

  Line() : a_(0.0, 0.0, 0.0), b_(0.0, 0.0, 0.0)
  {}

  Point3D a() { return a_;}
  Point3D b() { return b_;}

private:
  Point3D a_, b_;
  
};

#endif /* GEOMETRY_HPP */
