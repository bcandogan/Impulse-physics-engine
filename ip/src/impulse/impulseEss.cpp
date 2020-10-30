#include "impulse/impulseEss.h"
#include<math.h>
#include<iostream>

namespace impulse {

	vec3::vec3(float X, float Y, float Z) : x(X), y(Y), z(Z) {

		//std::cout << "Created x: " << x << " y: " << y << " z: " << z;
	}

	void vec3::setCoordinates(float X, float Y, float Z) {
		x = X;
		y = Y;
		z = Z;
	}

	float vec3::operator[](int i) {

		switch (i)
		{
		case 0:
			return x;
			break;
		case 1:
			return y;
			break;
		case 2:
			return z;
			break;
		}

	}


	vec3 vec3::operator+(const vec3& a)const { return vec3(x + a.x, y + a.y, z + a.z); }
	void vec3::operator+=(const vec3& a) { x += a.x; y += a.y; z += a.z; }

	vec3 vec3::operator-(const vec3& a)const { return vec3(x - a.x, y - a.y, z - a.z); }
	void vec3::operator-=(const vec3& a) { x -= a.x; y -= a.y; z -= a.z; }

	vec3 vec3::operator*(float i) {
		return vec3(x * i, y * i, z * i);
	}

	void vec3::operator*=(float i) {
		x *=i;
		y *=i;
		z *=i;
	}

	vec3 vec3::componentProduct(const vec3& a)const {
		return vec3(x * a.x, y * a.y, z * a.z);
	}

	void vec3::operator=(const vec3& a) {
		x = a.x;
		y = a.y;
		z = a.z;
	}

	bool vec3::operator==(const vec3& a)const {
		return (x == a.x && y == a.y && z == a.z);
	}

	bool vec3::operator!=(const vec3& a)const {
		return (x != a.x && y != a.y && z != a.z);
	}

	void vec3::normalize() { (*this) *= (1.0f / magnitude()); }
	vec3 vec3::normalizatedVec() { return vec3(x / magnitude(), y / magnitude(), z / magnitude()); }
	float vec3::magnitude() {  return sqrtf(x * x + y * y + z * z); }
	float vec3::sqreMagnitude() { return (x * x + y * y + z * z); }

	
	float vec3::dotProduct(const vec3& a) {
		if (a == *(this))
			return sqreMagnitude();
		else
	        return (x * a.x + y * a.y + z * a.z);
	}

	vec3 vec3::crossProduct(const vec3& a) {
		return vec3(y * a.z - z * a.y,
			        z * a.x - x * a.z,
			        x * a.y - y * a.x);
	}
	

	void vec3::outputVec() {
		std::cout << "X: " << x << " Y: " << y << " Z: " << z;
	}

	void vec3::clr() { x = 0; y = 0; z = 0; }


}