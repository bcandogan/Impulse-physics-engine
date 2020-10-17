#include<iostream>
#include<Math/impulseEss.h>


int main() {

	impulse::vec3 vec = { 2,3,4 };
	impulse::vec3 vec1(1, 2, 3);
	impulse::vec3 vec2;

	vec2 = vec1 + vec;
    
	std::cout<<"Succesful Build"<<std::endl;

}