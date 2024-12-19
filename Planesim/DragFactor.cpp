#include "DragFactor.h"
#define _USE_MATH_DEFINES
#include "math.h"

//Using SI units
DragFactor::DragFactor(double osswald, double drag_min, double AR) : osswald(osswald), drag_min(drag_min), AR(AR)
{

}


double DragFactor::calc(double lift_co) {
	
	return (lift_co * lift_co) / (this->AR * this->osswald * M_PI);
}