#ifndef VECTOR3D_H
#define VECTOR3D_H

typedef struct {
    float x;
    float y;
    float z;
} Vector3D;

// Function prototypes
Vector3D vector_add(Vector3D a, Vector3D b);
Vector3D vector_sub(Vector3D a, Vector3D b);
float vector_dot(Vector3D a, Vector3D b);
Vector3D vector_cross(Vector3D a, Vector3D b);

#endif // VECTOR3D_H
