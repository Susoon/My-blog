#include <iostream>

class vec3 {
public:
	vec3(float _x, float _y, float _z):x(_x), y(_y), z(_z){}
	float x, y, z;
};

const vec3 operator +(const vec3& v1, const vec3& v2){ 
	return vec3(v1.x+v2.x, v1.y+v2.y, v1.z+v2.z); }

int main() {
	vec3 pos(10.0f, 20.0f, 30.0f), pos2(1.0f, 2.0f, 3.0f);
	vec3 spos = pos+pos2;
	std::cout<< spos.x<<", "<< spos.y<<", "<< spos.z<<std::endl;
	return 0;
}
