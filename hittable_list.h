#ifndef HITTABLE_LIST_H
#define HITTABLE_LIST_H

#include "hittable.h"
#include "interval.h"
#include <memory>
#include <vector>

using std::shared_ptr;

struct hittable_list : public hittable
{
	std::vector<shared_ptr<hittable>> objects;
	hittable_list() = default;
	explicit hittable_list( shared_ptr<hittable> object );

	void clear();
	void add( shared_ptr<hittable> object );
	bool hit( const ray& r, interval ray_t, hit_record& rec ) const override;
};

#endif