#include "../src/main.h"
#include <assert.h>

void testGetTriangleType() {
    assert(getTriangleType(3, 4, 5) == 0);
}

int main() {
    assert(addNumber(5, 2) == 7);
    testGetTriangleType();
    assert(add(2,3,6) == 11);
    return 0;
}


