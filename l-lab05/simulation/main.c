#include "main.h"

int main(int argc, char* argv[])
{
	
	double inc = 100000;       // How much to incriment the velocity each time
	double v = 0.0;            // The starting velocity
	double mass, energy;
	
	// Keep going till we exceed the speed of light
	while(v < C){
	
	    // Calcumate the relitivistic mass and kinetic energy
	    mass = rel_mass(1.0, v);
	    energy = kinetic_energy(mass, v);
	    
	    printf("%.4lf \t %.4lf \t %.2lf \n", v, mass, energy);
	    v += inc;
	}

    return 0;

}

