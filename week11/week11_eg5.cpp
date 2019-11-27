#include <iostream>

class vec3 {
public:
	vec3(float a, float b, float c):x(a), y(b), z(c){}
	float x, y, z;
};

const vec3 operator -(const vec3& v1){ 
	return vec3(-v1.x, -v1.y, -v1.z); }

int main() {
	vec3 pos(1.0f, 2.0f, 3.0f);
	vec3 npos = -pos;
	std::cout<< npos.x<<", "<< npos.y<<", "<< npos.z<<std::endl;
	return 0;
}
