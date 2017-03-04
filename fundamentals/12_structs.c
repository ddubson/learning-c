#include <stdio.h>

// Typedef adds a shorthand name for a struct
typedef struct point3D {
    int x;
    int y;
    int z;
} point_3D;

typedef struct fullName {
    char *first_name;
    char *middle_name;
    char *last_name;
} fullName;

typedef struct telephone {
    char *phone;
} telephone;

typedef struct personalInfo {
    fullName name;
    telephone tel;
} personalInfo;

int main() {
    // 3 ways of initializing a struct.
    struct point3D point = {0, 0, 0};
    point_3D point2 = {.x=0, .y=0, .z=0};
    point_3D point3 = point2; // point2 contents is copied to point3

    point.x = 4;
    point.y = 3;
    point.z = 5;
    printf("%d, %d, %d\n", point.x, point.y, point.z);

    return 0;
}