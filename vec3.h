#ifndef VEC3_H
#define VEC3_H

#include <ostream>

class vec3
{
private:
	double e[ 3 ];

public:
	vec3();
	vec3( double e0, double e1, double e2 );

	double x() const
	{
		return e[ 0 ];
	}

	double y() const
	{
		return e[ 1 ];
	}

	double z() const
	{
		return e[ 2 ];
	}

	vec3 operator-() const;
	double operator[]( int i ) const;
	double& operator[]( int i );

	vec3& operator+=( const vec3& v );
	vec3& operator*=( double t );
	vec3& operator/=( double t );

	double length() const;
	double length_squared() const;
	// Return true if the vector is close to zero in all dimensions.
	bool near_zero() const;

	static vec3 random();
	static vec3 random( double min, double max );

	friend std::ostream& operator<<( std::ostream& out, const vec3& v );
	friend vec3 operator+( const vec3& u, const vec3& v );
	friend vec3 operator-( const vec3& u, const vec3& v );
	friend vec3 operator*( const vec3& u, const vec3& v );
	friend vec3 operator*( double t, const vec3& v );
	friend vec3 operator*( const vec3& v, double t );
	friend vec3 operator/( const vec3& v, double t );
	friend double dot( const vec3& u, const vec3& v );
	friend vec3 cross( const vec3& u, const vec3& v );
	friend vec3 unit_vector( const vec3& v );
	friend vec3 random_unit_vector();
	friend vec3 random_on_hemisphere( const vec3& normal );
	friend vec3 reflect( const vec3& v, const vec3& n );
};

double dot( const vec3& u, const vec3& v );
vec3 cross( const vec3& u, const vec3& v );
vec3 unit_vector( const vec3& v );
vec3 random_unit_vector();
vec3 random_on_hemisphere( const vec3& normal );
vec3 reflect( const vec3& v, const vec3& n );

using point3 = vec3;

#endif