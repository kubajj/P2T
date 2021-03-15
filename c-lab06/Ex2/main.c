#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include "randu.h"
#include "MT.h"
#include "test.h"

//For setting the max loops we do in the period test
#define LOOPS 1000000000UL

//Test our three generators with period, spectral tests.
int main(void) {

	FILE * file;

	long seed = time(NULL);

	//seed PRNGs here
	srandu(seed);
        init_genrand(seed);
	//period tests here
	printf("The Period of function randu(), with seed %ld is %ld\n", seed, test_period(randu, LOOPS));
	printf("The Period of function genrand_int32(), with seed %ld is %ld\n", seed, test_period(genrand_int32, LOOPS));
	printf("The Period of function rand(), with seed %ld is %ld\n", seed, test_period(rand, LOOPS));
	
	// Result of the period test:
	// The period of function randu(), with seed 1615375590 is 268435455
	// The Period of function genrand_int32(), with seed 1615375590 is -1
	// The Period of function rand(), with seed 1615375590 is -1
	//
	// We can see that randu resulted with a number, while the other PRNGs did not,
	// therefore they do not repeat in the given number of repetitions

	//spectral tests here
	file = fopen("randuspectral.dat", "w");
	test_spectral(randu, 100000, 3, file);
	fclose(file);
	file = fopen("mtspectral.dat", "w");
	test_spectral(genrand_int32, 100000, 3, file);
	fclose(file);
	file = fopen("stdspectral.dat", "w");
	test_spectral(rand, 100000, 3, file);
	fclose(file);

	// From the 3dplots we can see that there is pattern of stripes in the randu data,
	// but neither of the other two have any pattern at all

	//roulette test here
	file = fopen("randuroulette.dat", "w");
	test_roulette(randu, 10000000, 36, file);
	fclose(file);
	file = fopen("mtroulette.dat", "w");
	test_roulette(genrand_int32, 10000000, 36, file);
	fclose(file);
	file = fopen("stdroulette.dat", "w");
	test_roulette(rand, 10000000, 36, file);
	fclose(file);

	// Roulette test showed us that both randu and rand have peaks, and as mt does not, it is the superior PRNG
	// We can also see that randu performed slightly better than the standard library PRNG, which is interesting
	// We discovered this from that the peak is deeper in stdrand than the one of randu.

	return 0; 
}

