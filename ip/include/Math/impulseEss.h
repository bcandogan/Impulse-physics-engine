
#ifndef IMPULSE_VECTOR3D
#define IMPULSE_VECTOR3D
#include "impulsephysics_export.h"

namespace impulse {

	class vec3 {
	public:
		vec3 IMPULSEPHYSICS_EXPORT (float X = 0, float Y = 0, float Z = 0);
		void IMPULSEPHYSICS_EXPORT setCoordinates(float, float, float);
		float IMPULSEPHYSICS_EXPORT operator[] (int);
		vec3 IMPULSEPHYSICS_EXPORT operator+(const vec3&);
		vec3 IMPULSEPHYSICS_EXPORT operator-(const vec3&);
		void IMPULSEPHYSICS_EXPORT operator=(const vec3&);
		void IMPULSEPHYSICS_EXPORT operator*(int);
		vec3 IMPULSEPHYSICS_EXPORT operator*(const vec3&);
		bool IMPULSEPHYSICS_EXPORT operator==(const vec3&);
		bool IMPULSEPHYSICS_EXPORT operator!=(const vec3&);

	private:
		float x, y, z;
	};

}

#endif // !IMPULSE_VECTOR
