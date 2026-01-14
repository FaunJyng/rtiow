#ifndef MATERIAL_H
#define MATERIAL_H

#include "hittable.h"
#include "color.h"

class material
{
public:
	virtual ~material() = default;
	virtual bool scatter( const ray& r_in, const hit_record& rec, color& attenuation, ray& scattered ) const = 0;
};

class lambertian : public material
{
private:
	color albedo;

public:
	lambertian( const color& albedo );
	bool scatter( const ray& r_in, const hit_record& rec, color& attenuation, ray& scattered ) const override;
};

class metal : public material
{
private:
	color albedo;

public:
	metal( const color& albedo );
	bool scatter( const ray& r_in, const hit_record& rec, color& attenuation, ray& scattered ) const override;
};

#endif