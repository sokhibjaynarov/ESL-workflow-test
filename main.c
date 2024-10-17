#include <stdio.h>
#include "vector3d.h"

int main() {
    Vector3D v1 = {1.0f, 2.0f, 3.0f};
    Vector3D v2 = {4.0f, 5.0f, 6.0f};

    // Add vectors
    Vector3D v_add = vector_add(v1, v2);
    printf("Add: (%f, %f, %f)\n", v_add.x, v_add.y, v_add.z);

    // Subtract vectors
    Vector3D v_sub = vector_sub(v1, v2);
    printf("Sub: (%f, %f, %f)\n", v_sub.x, v_sub.y, v_sub.z);

    // Dot product
    float dot = vector_dot(v1, v2);
    printf("Dot: %f\n", dot);

    // Cross product
    Vector3D v_cross = vector_cross(v1, v2);
    printf("Cross: (%f, %f, %f)\n", v_cross.x, v_cross.y, v_cross.z);

    return 0;
}
