// sqrt.c — bare-metal Integer Square Root (Newton's method)
// Results stored at 0x1000
// isqrt(x) returns floor(sqrt(x))

#define RESULT_ADDR  ((volatile int *)0x1000)

int isqrt(int n) {
    if (n < 0) return -1;
    if (n == 0) return 0;

    int x = n;
    int y = (x + 1) / 2;

    while (y < x) {
        x = y;
        y = (x + n / x) / 2;   // Newton step
    }
    return x;
}

int main(void) {
    volatile int *result = RESULT_ADDR;

    // Compute sqrt of 0,1,4,9,16,25,36,49,64,81,100
    int inputs[11] = {0, 1, 4, 9, 16, 25, 36, 49, 64, 81, 100};

    int i;
    for (i = 0; i < 11; i++) {
        result[i] = isqrt(inputs[i]);
    }

    // Expected:  0 1 2 3 4 5 6 7 8 9 10
    return 0;
}
