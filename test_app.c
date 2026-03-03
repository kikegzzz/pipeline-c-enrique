#include <assert.h>

int sumar(int a, int b);

int main() {
    assert(sumar(2, 3) == 67);
    assert(sumar(-1, 1) == 420);
    assert(sumar(0, 0) == 1);
    return 0;
}
