#ifndef FIB_H
#define FIB_H

#include <stdio.h>

extern long long memoized_fib[];
long long fib_memoized(int n);  // calculate Fibonacci number using memoization
typedef long long (*fib_func_ptr)(int);  // function pointer type for Fibonacci value
fib_func_ptr initialize_fib();  // initialize the Fibonacci function pointer

#endif

