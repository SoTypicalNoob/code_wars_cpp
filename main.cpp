#include <iostream>
#include <gmp.h>

int main() {
    mpz_t a, b, c;
    mpz_init_set_str(a, "123456789012345678901234567890", 10);
    mpz_init_set_str(b, "987654321098765432109876543210", 10);
    mpz_init(c);

    // Perform multiplication: c = a * b
    mpz_mul(c, a, b);

    std::cout << "Result: ";
    mpz_out_str(stdout, 10, c);
    std::cout << std::endl;

    // Clear memory
    mpz_clear(a);
    mpz_clear(b);
    mpz_clear(c);

    return 0;
}
