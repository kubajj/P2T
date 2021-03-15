#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define LOOPS 10000000000UL

void test_spectral(int (*f) (void), unsigned long max_points, unsigned short dimensions, FILE * file) {
	//n-d spectral test
	//needs something to plot to...
	//******** takes max_points * dimensions invocations of f
	for(unsigned long i=0; i<max_points; i++){
		for(unsigned short d=0; d<dimensions;d++){
			fprintf(file,"%d ", f());
		}
		fprintf(file, "\n");
	}
}

long test_period(int (*f) (void), unsigned long max_period) {
	//test period of the function f
	//as the internal state of a generator may be > unsigned int, we appropriately test
	//the first three values for the repeat
	int start_window[3] = {0};
	int test_window[3] = {0};
	for (int i=0; i<3; i++) {
		start_window[i] = f();
		test_window[i] = start_window[i];
	}

	for(unsigned long i=0; i<max_period; i++) {
		test_window[0] = test_window[1];
		test_window[1] = test_window[2];
		test_window[2] = f();
		if (test_window[0] == start_window[0]){
			if(test_window[1] == start_window[1]){
				if(test_window[2] == start_window[2]){
					return i;
				}
			}
		}
	}
	return -1L; 
}

void test_roulette(int (*f) (void), unsigned long nsamples, unsigned short range, FILE * file) {
	//test distribution of frequencies of runs of consecutive non-zero values (modulo range)
    	//we compare this to the theoretical distribution (small deviations are, of course expected)
    	//nsamples is total number of samples, range is range of values to generate [0..range)
    	int bins[101] = {0};

    	// sample
    	for(int i=0;i<nsamples;i++) {
    		int count = 1;
    		do {
    			if((int)(f()/(2147483647+1.0)*range)==0) // break if 0 is chosen
    				break;
			count++;
		} while(count<100);
	                                                                                                                         
		bins[count]++; //increment the bin for this run length
	}
    
   	//compare generated statistics to theoretical distribution
                                                                                                                                     
   	for(int i=1;i<100;i++) {
		double freq, delta;
		freq=bins[i]/(double)nsamples; // normalise
		delta=freq-pow(1-1./range,i-1)*1./range; // difference to theoretical value
		fprintf(file,"%d %.12g %.12g\n",i,freq,delta);
   	}    
}
