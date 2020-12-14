#include <iostream>
#include <tuple>
#include <vector>
#include <cmath>

#include "../src/utilities/geometry.hpp"

bool CreatePoint(){
  Point3D test_point1;
  return true;
}

bool CreatePointCheckData(){
  double x = 3.0, y = 4.01, z = 0.0;
  Point3D test_point1(x, y, z);

  if(test_point1.x == x &&
     test_point1.y == y &&
     test_point1.z == z){
    return true;
  }
  return false;
}

bool CheckDistance (){
  Point3D origin(0.0, 0.0, 0.0);
  Point3D p1(1.0, 1.0, 0.0);
  Point3D p2(1.0, 0.0, 0.0);
  Point3D p3(-10.12143, 500.0, 12345.0);
  Point3D p4 (10.0, -562938.3243523, 83.0);

  if( origin.Distance(p1) == sqrt(2.0) &&
      p1.Distance(origin) == sqrt(2.0) &&
      origin.Distance(p2) == 1.0){
    return true;
  }
  return false;
}  

std::string StrTestResult(bool result){
  if (result)
    return "Pass";
  return "Fail";
}

int main(){
  std::cout << "Geometry Tests: \n";
  std::cout << "Create Point Test: " << StrTestResult(CreatePoint()) <<std::endl;
  std::cout << "Create Point Data Test: " << StrTestResult(CreatePointCheckData()) <<std::endl;
  std::cout << "Distance Test: " << StrTestResult(CheckDistance()) <<std::endl;

}
