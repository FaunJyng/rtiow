#include "ray.h"
#include "vec3.h"

ray::ray() : orig{}, dir{} {}

ray::ray( const point3& origin, const vec3& direction )
	: orig{ origin }, dir{ direction } {}

point3 ray::at( double t ) const
{
	return orig + t * dir;
}