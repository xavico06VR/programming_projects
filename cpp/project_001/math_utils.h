#ifndef MATH_UTILS_H
#define MATH_UTILS_H

/* Addition functions */
int addition_ftn(int sum_a, int sum_b);
double addition_ftn(double sum_a, double sum_b);

/* Substraction functions */
int substraction_ftn(int sub_a, int sub_b);
double substraction_ftn(double sub_a, double sub_b);

/* Multiplication functions */
int multiplication_ftn(int mul_a, int mul_b);
double multiplication_ftn(double mul_a, double mul_b);
/* */

/* Power functions */
int simple_power_ftn(int base, int exponent); // a simple power function using loops
// power functions that used recursive algorightms rather than loops
int power_ftn(int base, int exponent); // power function for integers
double power_ftn(double base, int exponent); // power function for double


#endif