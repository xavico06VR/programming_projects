#include <iostream>
using namespace std;


/* ADDITION FUNCTIONS */
int addition_ftn(int sum_a, int sum_b){
    return sum_a + sum_b;
}
double addition_ftn(double sum_a, double sum_b){
    return sum_a + sum_b;
}

/* SUBSTRACTION FUNCTIONS*/
int substraction_ftn(int sub_a, int sub_b){
    return sub_a - sub_b;
}

double substraction_ftn(double sub_a, double sub_b){
    return sub_a - sub_b;
}

/* MULTIPLICATION FUNCTIONS */
int multiplication_ftn(int mul_a, int mul_b){
    return mul_a * mul_b;
}

double multiplication_ftn(double mul_a, double mul_b){
    return mul_a * mul_b;
}

/* POWER FUNCTIONS */
// basic power function using loops
int simple_power_ftn(int base, int exponet){

    int tmp_val = 1;

    for (int i=0; i<exponet; i++){
        tmp_val = tmp_val * base;
    }

    return tmp_val;
}

// recursive power function
int power_ftn(int base, int exponent){
    if (exponent == 0){
        return 1;
    }

    int half = power_ftn(base, exponent / 2);

    if (exponent % 2 ==0){
        return half * half;
    }
    
    else {
        return base*half*half;
    }

}

// recursive power function
double power_ftn(double base, int exponent){
    if (exponent == 0){
        return 1;
    }

    int half = power_ftn(base, exponent / 2);

    if (exponent % 2 ==0){
        return half * half;
    }
    
    else {
        return base*half*half;
    }
}
