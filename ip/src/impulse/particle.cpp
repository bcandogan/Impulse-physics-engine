#include<impulse/particle.h>
#include<assert.h>
#include<math.h>

using namespace impulse;


Particle::Particle(vec3 firstPos, vec3 firstVel, float mass, float dmp):position(firstPos), velocity(firstVel),
                                                             inm(1/mass), drag(dmp){
	accel.clr();
	gravity.setCoordinates(0, -15.0f, 0);
}

void Particle::solver(float timeStamp) {

	if (inm <= 0)
		return;

	assert(timeStamp > 0.0f);

	position = position + velocity*timeStamp;

	velocity = velocity * powf(drag, timeStamp) + netAccel(gravity) * timeStamp;
   
	clrForce();
}

void Particle::addForce(const vec3& force, float time) {

}


vec3 Particle::netAccel(const vec3& affectingAccel){
	accel += affectingAccel;
	return accel;
}

void Particle::clrForce() {
	force.clr();
}

vec3 Particle::getPosition()const { return position; }
vec3 Particle::getVelocity()const { return velocity; }
vec3 Particle::getAccel()const { return accel; }

