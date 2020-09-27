#ifndef RACETRACK_HPP
#define RACETRACK_HPP

#include <vector>
#include <string>

#include "utilities/geometry.hpp"

class RaceTrack{

public:
  // To define a race track you must the name of the track and two
  // lines. If the given lines are not close they will connect the
  // point to the first point.
  // TODO: sanitize the inputs if the lines do not make sense.
  // - check if the lines cross in the same plane? (track may loop over it's self
  // as in suzuka)
  // - connect the end points if not connected.
  
  RaceTrack(std::string track_name, std::vector<Point3D> perimeter_a,
	    std::vector<Point3D> perimeter_b, Line start_finish);
  

private:
  std::string track_name_;
  
  // The perimeters represent the serises of points for both
  // the insided about outside of a track. Pit lanes or other
  // such deviations are not currently accounted for. 
  std::vector<Point3D> perimeter_a_;
  std::vector<Point3D> perimeter_b_;
  Line start_finish_;
};

#endif /* RACETRACK_HPP */
