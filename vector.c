#include <stdio.h>
#include <assert.h>
#include <math.h>

typedef struct vector2 {
    float x;
    float y;
} vector2_t;

typedef struct vector3 {
    float x;
    float y;
    float z;
} vector3_t;

typedef struct vector4 {
    float x;
    float y;
    float z;
    float w;
} vector4_t;

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


float vector3_magnitude(vector3_t v){
    return sqrt(v.x * v.x + v.y * v.y + v.z * v.z);
}

vector3_t vector3_normalize(vector3_t v){
    vector3_t norm;
    float mag = vector3_magnitude(v);
    norm.x = v.x / mag;
    norm.y = v.y / mag;
    norm.z = v.z / mag;
    return norm;
}

typedef struct vector2 {
    float x;
    float y;
} vector2_t;
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

void vector2_init(vector2_t *v0, float x, float y) {
    v0->x = x;
    v0->y = y;
}

vector2_t vector2_add(vector2_t v0, vector2_t v1) {
    vector2_t new_vec;
    new_vec.x = v0.x + v1.x;
    new_vec.y = v0.y + v1.y;
    return new_vec;
}

vector2_t vector2_sub(vector2_t v0, vector2_t v1) {
    vector2_t new_vec;
    new_vec.x = v0.x - v1.x;
    new_vec.y = v0.x - v1.x;
    return new_vec;
}


float vector2_magnitude(vector2_t v){
    return sqrt(v.x * v.x + v.y * v.y);
}

vector2_t vector2_normalize(vector2_t v){
    vector2_t norm;
    float mag = vector2_magnitude(v);
    norm.x = v.x / mag;
    norm.y = v.y / mag;
    return norm;
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

void test_vector2_add_green() {
    vector2_t v2a;
    vector2_t v2b;

    v2a.x = 1;
    v2a.y = 1;

    v2b.x = 1;
    v2b.y = 1;

    vector2_t sum = vector2_add(v2a, v2b);

    assert(sum.x == 2);
    assert(sum.y == 2);

    printf("test_vector2_add_green passed \n");
}

void test_vector2_subtract_green() {
    vector2_t v2a;
    vector2_t v2b;

    v2a.x = 2;
    v2a.y = 2;

    v2b.x = 1;
    v2b.y = 1;

    vector2_t sub = vector2_sub(v2a, v2b);

    assert(sub.x == 1);
    assert(sub.y == 1);

    printf("test_vector2_subtract_green passed\n");
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

    vector3_t sub = vector3_subtract(v3a, v3b);

    assert(sub.x == 1);
    assert(sub.y == 1);
    assert(sub.z == 1);

    printf("test_vector3_subtract_green passed\n");
}

void test_vector2_magnitude(){
    vector2_t v;

    v.x = 4;
    v.y = 3;

    float mag = vector2_magnitude(v);
    assert(mag == 5);

    printf("test_vector2_magnitude passed\n");
}

void test_vector2_normalize()
{
    vector2_t v;
    v.x = 4;
    v.y = 0;

    vector2_t norm = vector2_normalize(v);

    assert(norm.x == 1);
    assert(norm.y == 0);

    v.x = 0;
    v.y = 4;

    norm = vector2_normalize(v);

    assert(norm.y == 1);
    assert(norm.x == 0);

    printf("test_vector2_normalize passed\n");
}

void test_vector3_magnitude(){
    vector3_t v;

    v.x = 4;
    v.y = 3;
    v.z = 0;

    float mag = vector3_magnitude(v);
    assert(mag == 5);

    printf("test_vector3_magnitude passed\n");
}

void test_vector3_normalize()
{
    vector3_t v;
    v.x = 0;
    v.y = 4;
    v.z = 0;

    vector3_t norm = vector3_normalize(v);

    assert(norm.x == 0);
    assert(norm.y == 1);
    assert(norm.z == 0);

    printf("test_vector3_normalize passed\n");
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
    test_vector2_add_green();
    test_vector2_subtract_green();
    test_vector2_magnitude();
    test_vector2_normalize();
    test_vector3_magnitude();
    test_vector3_normalize();
    test_vector3_add_green();
    test_vector3_subtract_green();
    test_vector4_add_green();
    test_vector4_subtract_green();
    return 0;
}