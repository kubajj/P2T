/* Header for test.c 

	Suite of common tests for pseudorandom sequence generators.

	test_spectral - n-dimensional spectral tests (need to visualise output)
	test_period   - brute-force test of period of generator
	test_roulette - sequence run length distribution test
*/


//Perform spectral test, with max_points points (in dimensions dimensions of space)
//Calls f max_points*dimensions times
//Writes output to file pointer provided.
void test_spectral(int (*f) (void), unsigned long max_points, unsigned short dimensions, FILE * file);

//Perform brute force period test on f.
//Will call f up to max_period times, or exit when a repeat is found.
//Returns the period found, or -1 if reached max_period without finding one.
long test_period(int (*f) (void), unsigned long max_period);

//Perform "roulette" test on f.
//Will call precisely nsamples times. 
//Generates values in range [0..range], and tabulates the length of runs of consecutive non-zero values.
//Writes binned histogram of data to file pointer provided.
//Format:
//RUNLENGTH FREQUENCY DIFF_TO_PREDICTED_FREQ
void test_roulette(int (*f) (void), unsigned long nsamples, unsigned short range, FILE * file);
