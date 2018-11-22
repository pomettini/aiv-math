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

typedef struct vector4 {
    float x;
    float y;
    float z;
    float w;
} vector4_t;

void vector4_init(vector4_t *v0 , float x, float y , float z,float w) {
    v0->x = x;
    v0->y = y;
    v0->z = z;
    v0->w = w;
}

vector4_t vector4_add(vector4_t v0, vector4_t v1) {
    vector4_t new_vec;
    new_vec.x = v0.x + v1.x;
    new_vec.y = v0.y + v1.y;
    new_vec.z = v0.z + v1.z;
    new_vec.w = v0.w + v1.w;
    return new_vec;
}
vector4_t vector4_sub(vector4_t v0, vector4_t v1) {
    vector4_t new_vec;
    new_vec.x = v0.x - v1.x;
    new_vec.y = v0.y - v1.y;
    new_vec.z = v0.z - v1.z;
    new_vec.w = v0.w - v1.w;
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

void test_vector4_add_green() {
    vector4_t v4a;
    vector4_t v4b;

    v4a.x = 1;
    v4a.y = 1;
    v4a.z = 1;
    v4a.w = 1;

    v4b.x = 1;
    v4b.y = 1;
    v4b.z = 1;
    v4b.w = 1;

    vector4_t sum = vector4_add(v4a, v4b);

    assert(sum.x == 2);
    assert(sum.y == 2);
    assert(sum.z == 2);
    assert(sum.w == 2);

    printf("test_vector4_add_green passed\n");
}

void test_vector4_subtract_green() {
    vector4_t v4a;
    vector4_t v4b;

    v4a.x = 1;
    v4a.y = 1;
    v4a.z = 1;
    v4a.w = 1;

    v4b.x = 1;
    v4b.y = 1;
    v4b.z = 1;
    v4b.w = 1;

    vector4_t sub = vector4_sub(v4a, v4b);

    assert(sub.x == 0);
    assert(sub.y == 0);
    assert(sub.z == 0);
    assert(sub.w == 0);

    printf("test_vector4_sub_green passed\n");
}

/* End Tests */

int main(int argc, char **argv) {
    test_vector3_add_green();
    test_vector3_subtract_green();
    test_vector4_add_green();
    test_vector4_subtract_green();
    return 0;
}