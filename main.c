#include "fib.h"

int main(){
    fib_func_ptr fib = initialize_fib();  

    int target_values[] = {10, 25, 40, 50, 91, 50};  
    int length = sizeof(target_values) / sizeof(target_values[0]);

    for (int i = 0; i < length; i++) {
        int n = target_values[i];
        if (memoized_fib[n] != 0) {
            printf("cache status: fib(%d) = %lld\n", n, memoized_fib[n]);
        } else {
            printf("fib(%d) = %lld\n", n, fib(n));
        }
    }

    return 0;
}