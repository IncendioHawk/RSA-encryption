#include <stdio.h>

unsigned int getPrimes();
unsigned int getPhi(unsigned int p, unsigned int q, unsigned int n);
char * getPrivateKey(unsigned int e, unsigned int n);
unsigned int getModularInverse(unsigned int x, unsigned int m);

int main() {
    unsigned int e = 65537;
    return 0;
}

unsigned int getPrimes() {
    unsigned int primes = {853, 857};
    return primes;
}

unsigned int getPhi(unsigned int p, unsigned int q, unsigned int n) {
    return n - p - q + 1;
}

unsigned int getModularInverse(unsigned int x, unsigned int m) {
    return 0;
}

char * getPrivateKey(unsigned int e, unsigned int n) {
    unsigned int *primes = getPrimes();
    unsigned int p = primes[0];
    unsigned int q = primes[1];
    unsigned int phi = getPhi(p, q, n);
    unsigned int d = getModularInverse(e, phi);
}