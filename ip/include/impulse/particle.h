#include<impulse/impulseEss.h>

#ifndef PARTICLE_H
#define PARTICLE_H
namespace impulse {
	
	class Particle {
	public:
		Particle(vec3, vec3, float, float);
		vec3 getPosition()const;
		vec3 getVelocity()const;
		vec3 getAccel()const;
		void addForce(const vec3&, float);
		void solver(float);
	protected:
	    
		vec3 netAccel(const vec3&);
		void clrForce();
	
	private:
		vec3 position;
		vec3 velocity;
		vec3 accel;
		vec3 force;
		vec3 gravity;
		float drag;
		float inm;
	};

}

#endif // !PARTICLE_H

