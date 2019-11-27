#include <iostream>

class vec3 {
public:
	vec3(float a, float b, float c):x(a), y(b), z(c){}
	float x, y, z;
};

const bool operator ==(const vec3& v1, const vec3& v2) { 
	return (v1.x==v2.x&&v1.y==v2.y&&v1.z==v2.z); }

int main() {
	vec3 pos(10.0f, 20.0f, 30.0f), pos2(10.0f, 20.0f, 30.0f);
	if(pos==pos2)std::cout<<"pos==pos2"<<std::endl;
	else std::cout<<"pos!=pos2"<<std::endl;
	return 0;
}
