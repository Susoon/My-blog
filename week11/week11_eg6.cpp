#include <iostream>
using namespace std;

class vec3 {
public:
	vec3(float a, float b, float c) {x=a;y=b;z=c;}
	float GetX() const {return x;}
	float GetY() const {return y;}
	float GetZ() const {return z;}
	
	//friend ostream& operator <<(ostream& os, const vec3& c);
	
private:
	float x, y, z;
};

ostream& operator <<(ostream& os, const vec3& c){
	return os<<c.GetX()<<", "<<c.GetY()<<", "<<c.GetZ();
	//return os<<c.x<<", "<<c.y<<", "<<c.z;
}

int main() {
	vec3 v(10.0f, 20.0f, 30.0f);
	cout<<v<<endl;
	return 0;
}