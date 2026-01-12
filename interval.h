#ifndef INTERVAL_H
#define INTERVAL_H

#include "constants.h"

struct interval
{
	static const interval empty, universe;
	double min{ +infinity }, max{ -infinity };
	interval() = default;
	interval( double min, double max );
	double size() const;
	bool contains( double x ) const;
	bool surrounds( double x ) const;
	double clamp( double x ) const;
};

// main: () -> void = {}
// x: i32 = 12
// human: class = {}
// vec3: struct = {}
// ptr: pointer -> pointer -> human = {}
//

#endif