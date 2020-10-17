#include "Math/impulseEss.h"

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


	vec3 vec3::operator+(const vec3& a) { return vec3(x + a.x, y + a.y, z + a.z); }

	vec3 vec3::operator-(const vec3& a) { return vec3(x - a.x, y - a.y, z - a.z); }

	void vec3::operator=(const vec3& a) {
		x = a.x;
		y = a.y;
		z = a.z;
	}

	void vec3::operator*(int i) {
		x *= i;
		y *= i;
		z *= i;

	}

	vec3 vec3::operator*(const vec3& a) {
		return vec3(x * a.x, y * a.y, z * a.z);
	}

	bool vec3::operator==(const vec3& a) {
		return (x == a.x && y == a.y && z == a.z);
	}

	bool vec3::operator!=(const vec3& a) {
		return (x != a.x && y != a.y && z != a.z);
	}
}