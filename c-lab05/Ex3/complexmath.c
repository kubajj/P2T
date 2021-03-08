#include "complexmath.h"

// Calculate real part of non-real cube roots 
double re_complexroots(double z) {
  // Cos (2pi/3) = -1/2 then multiplied by unit
  return -1.0*z/2.0 ;
}

// Calculate imaginary part of non-real cube roots
double im_complexroots(double z) {
  // Sin(2pi/3) = sqrt(3)/2 then multiplied by unit
  return sqrt(3.0)*(z/2.0);
}

