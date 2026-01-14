cmake_minimum_required(VERSION 3.30)

project(rtiow 
		VERSION 0.0.1
		DESCRIPTION "Ray tracing in one week"
		LANGUAGES CXX)

add_executable(
	main 
	main.cpp 
	vec3.cpp 
	camera.cpp
	color.cpp 
	hittable_list.cpp
	hittable.cpp
	interval.cpp
	ray.cpp
	sphere.cpp
	material.cpp
)
target_include_directories(main PRIVATE "./")
target_compile_features(main PRIVATE cxx_std_17)