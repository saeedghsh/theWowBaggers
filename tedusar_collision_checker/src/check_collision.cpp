#include <tedusar/check_collision.hpp>
#include <tedusar/CollisionChecker.hpp>


namespace tedusar{

/// \brief checks for a collision
/// \parameter x: world-frame x coordinate of the robot base
/// \parameter y: world-frame y coordinate of the robot base
/// \parameter theta: yaw angle of the robot base w.r.t. world frame
bool check_collision(double x, double y, double theta){
	if(x*x+y*y<9) 
		return true;
	return false;
}

}
