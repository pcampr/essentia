
#ifndef BESSEL_H
#define BESSEL_H

//! \cond

#include <cmath>
#include <cstddef>

#define MAXITER        500

#define EDOM		33
#define ERANGE	34
#define MAXNUM 1.79769313486231570815E308    /* 2**1024*(1-MACHEP) */
#define EULER 0.577215664901532860606512090082402431 /* Euler constant */

#define MACHEP 1.11022302462515654042E-16

// double chbevl(double x, double array[], int n);
// double hyperg(double a, double b, double x);
// int airy(double x, double *ai, double *aip, double *bi, double *bip);
double polevl(double x, double coef[], int N);
double p1evl(double x, double coef[], int N);

// double i0(double x);
// double i0e(double x);
// double i1(double x);
// double i1e(double x);

// double k0(double x);
// double k0e(double x);
// double k1(double x);
// double k1e(double x);

double cephes_iv(double nu, double x);
// double jv(double nu, double x);
// double yv(double nu, double x);
// double kn(int n, double x);

// double gam(double x);
double lgam(double x);
extern int sgngam;


//! \endcond

#endif // #ifndef BESSEL_H
