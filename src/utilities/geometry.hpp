
class Point3D {
  
public:

  double x, y, z;

  Point3D() : x(0.0), y(0.0), z(0.0) {
  }

  Point3D(double  xi, double yi, double zi): x(xi), y(yi), z(zi) {  
  }

  double Distance(Point3D b);

};
