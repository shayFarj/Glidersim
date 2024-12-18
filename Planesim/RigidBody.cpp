#include "RigidBody.h"
#include "vector"
// using SI units


std::vector<Frame> RigidBody::createFrames(const Frame& initFrame,const int cFrames, const int fps)
{
	 std::vector<Frame> track(cFrames);
	 memcpy(track.data(), &initFrame, sizeof(Frame)); // setting first frame
	 const double delta = 1.0 / fps;

	 return track;
}