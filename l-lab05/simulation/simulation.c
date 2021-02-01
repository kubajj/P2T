#include "simulation.h"
/**
 * Returns the relitivistic mass of an object given its rest mass and velocity
 */
double rel_mass(double rest_mass, double velocity)
{
	return rest_mass / ( sqrt( 1 - ( (velocity * velocity) / (C * C) ) ) );
}


/**
 * Returns the kintetic energy of an object given its mass and velocity
 */
double kinetic_energy(double mass, double velocity) 
{
	double E_k = mass*pow(velocity, 2.0)/2;
	return E_k;
}

