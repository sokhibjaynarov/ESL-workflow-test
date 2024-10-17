#include "vector3d.h"

// Add two vectors
Vector3D vector_add(Vector3D a, Vector3D b) {
    Vector3D result = { a.x + b.x, a.y + b.y, a.z + b.z };
    return result;
}

// Subtract vector b from vector a
Vector3D vector_sub(Vector3D a, Vector3D b) {
    Vector3D result = { a.x - b.x, a.y - b.y, a.z - b.z };
    return result;
}

// Dot product of two vectors
float vector_dot(Vector3D a, Vector3D b) {
    return a.x * b.x + a.y * b.y + a.z * b.z;
}

// Cross product of two vectors
Vector3D vector_cross(Vector3D a, Vector3D b) {
    Vector3D result = {
        a.y * b.z - a.z * b.y,
        a.z * b.x - a.x * b.z,
        a.x * b.y - a.y * b.x
    };
    return result;
}
