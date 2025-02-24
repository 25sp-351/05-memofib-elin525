#include "fib.h"

#define MAX_fib 92

long long memoized_fib[MAX_fib] = {0};


// calculate Fibonacci number using memoization
long long fib_memoized(int n){
    // base case
    if (n <= 1){
        return n;
    }

    // check if the value is already calculated, if not, calculate it
    if (memoized_fib[n] == 0){
        memoized_fib[n] = fib_memoized(n-1) + fib_memoized(n-2);
    }

    // return the calculated value
    return memoized_fib[n];
}

// initialize the Fibonacci function pointer
fib_func_ptr initialize_fib() {
    return fib_memoized;
}