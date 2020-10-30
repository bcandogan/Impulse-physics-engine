#include<iostream>
#include<impulse/impulseEss.h>
#include<impulse/particle.h>

int main() {

	float mass = 5.0f;
	float drag = 0.999f;
	float time = 25.0f, timeStamp = 0.33f;
	impulse::vec3 ilkHiz = { 0,0,0 };
	impulse::vec3 ilkPoz = { 2,5,6 };
    
	impulse::Particle parcacik(ilkPoz, ilkHiz, mass, drag);
	
	while (time > 0.0f) {
		parcacik.solver(timeStamp);
		time -= timeStamp;
	}

	parcacik.getPosition().outputVec();
	std::cout << std::endl;
	parcacik.getVelocity().outputVec();
}