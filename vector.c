#include <stdio.h>
#include <assert.h>

// Ciao sono Piera

typedef struct vector3 {
    float x;
    float y;
    float z;
} vector3_t;

void vector3_init(vector3_t *v0, float x, float y, float z) {
    v0->x = x;
    v0->y = y;
    v0->z = z;
}

vector3_t vector3_add(vector3_t v0, vector3_t v1) {
    vector3_t new_vec;
    new_vec.x = v0.x + v1.x;
    new_vec.y = v0.y + v1.y;
    new_vec.z = v0.z + v1.z;
    return new_vec;
}

vector3_t vector3_subtract(vector3_t v0, vector3_t v1) {
    vector3_t new_vec;
    new_vec.x = v0.x - v1.x;
    new_vec.y = v0.y - v1.y;
    new_vec.z = v0.z - v1.z;
    return new_vec;
}

/* Start Tests */

void test_vector3_add_green() {
    vector3_t v3a;
    vector3_t v3b;

    v3a.x = 1;
    v3a.y = 1;
    v3a.z = 1;

    v3b.x = 1;
    v3b.y = 1;
    v3b.z = 1;

    vector3_t sum = vector3_add(v3a, v3b);

    assert(sum.x == 2);
    assert(sum.y == 2);
    assert(sum.z == 2);

    printf("test_vector3_add_green passed\n");
}

void test_vector3_subtract_green() {
    vector3_t v3a;
    vector3_t v3b;

    v3a.x = 2;
    v3a.y = 2;
    v3a.z = 2;

    v3b.x = 1;
    v3b.y = 1;
    v3b.z = 1;

    vector3_t sum = vector3_subtract(v3a, v3b);

    assert(sum.x == 1);
    assert(sum.y == 1);
    assert(sum.z == 1);

    printf("test_vector3_subtract_green passed\n");
}

/* End Tests */

int main(int argc, char **argv) {
    test_vector3_add_green();
    test_vector3_subtract_green();
    return 0;
}