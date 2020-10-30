
#ifndef IMPULSE_VECTOR3D
#define IMPULSE_VECTOR3D
#include "impulsephysics_export.h"

namespace impulse {

	class vec3 {
	public:
		vec3(float X = 0, float Y = 0, float Z = 0);
		void setCoordinates(float, float, float);
		float operator[] (int);

		//basic arithmetic operations

		vec3 operator+(const vec3&)const;
		void operator+=(const vec3&);

		vec3 operator-(const vec3&)const;
		void operator-=(const vec3&);

		vec3 operator*(float);
		void operator*=(float);
		vec3 componentProduct(const vec3&)const;

		//basic logic operations

		void operator=(const vec3&);
		bool operator==(const vec3&)const;
		bool operator!=(const vec3&)const;

		//magnitude & normalization

		void normalize();
		vec3 normalizatedVec();
		float magnitude();
		float sqreMagnitude();

		//vector multipication

		float dotProduct(const vec3&);
		vec3 crossProduct(const vec3&);

		void outputVec();
		void clr(); 
	private:
		float x, y, z;
	};

}

#endif // !IMPULSE_VECTOR
