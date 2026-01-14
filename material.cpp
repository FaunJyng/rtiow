#include "material.h"
#include "hittable.h"

// lambertian

lambertian::lambertian( const color& albedo ) : albedo{ albedo } {}

bool lambertian::scatter(
	const ray& r_in,
	const hit_record& rec,
	color& attenuation,
	ray& scattered ) const
{
	vec3 scatter_direction = rec.normal + random_unit_vector();

	if ( scatter_direction.near_zero() )
		scatter_direction = rec.normal;

	scattered = ray{ rec.p, scatter_direction };
	attenuation = albedo;
	return true;
}

// metal
metal::metal( const color& albedo ) : albedo{ albedo } {}

bool metal::scatter(
	const ray& r_in,
	const hit_record& rec,
	color& attenuation,
	ray& scattered ) const
{
	vec3 reflected = reflect( r_in.direction(), rec.normal );
	scattered = ray{ rec.p, reflected };
	attenuation = albedo;
	return true;
}