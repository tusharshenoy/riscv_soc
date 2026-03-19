// fibonacci.c — bare-metal Fibonacci
// Results stored in memory array at 0x1000
// Testbench can read MEM[0x1000..0x1027] to verify

#define RESULT_ADDR  ((volatile int *)0x1000)
#define N            10   // compute first 10 Fibonacci numbers

int main(void) {
    volatile int *result = RESULT_ADDR;

    result[0] = 0;   // fib(0) = 0
    result[1] = 1;   // fib(1) = 1

    int i;
    for (i = 2; i < N; i++) {
        result[i] = result[i-1] + result[i-2];
    }

    // Expected:  0 1 1 2 3 5 8 13 21 34
    return 0;
}
