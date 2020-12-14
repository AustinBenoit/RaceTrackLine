#include "racetrack.hpp"

RaceTrack::RaceTrack(std::string track_name, std::vector<Point3D> perimeter_a,
		     std::vector<Point3D> perimeter_b, Line start_finish){
  track_name_ = track_name;
  start_finish_ = start_finish;
  perimeter_a_ = perimeter_a;
  perimeter_b_ = perimeter_b;
  
}
