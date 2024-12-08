#include <stdio.h>
#include <string.h>
#include <math.h>

#define MAX_SHAPES 10
#define MAX_VERTICES 8
#define PI 3.14159265358979323846

typedef struct {
    double x, y, z;
} Point3D;

typedef struct {
    char type[10];
    int num_vertices;
    Point3D vertices[MAX_VERTICES];
} Shape;

void translate(Shape *shape, double A, double B, double C) {
    for (int i = 0; i < shape->num_vertices; i++) {
        shape->vertices[i].x += A;
        shape->vertices[i].y += B;
        shape->vertices[i].z += C;
    }
}

void scale(Shape *shape, double A, double B, double C) {
    for (int i = 0; i < shape->num_vertices; i++) {
        shape->vertices[i].x *= A;
        shape->vertices[i].y *= B;
        shape->vertices[i].z *= C;
    }
}

void reflect(Shape *shape, char axis) {
    for (int i = 0; i < shape->num_vertices; i++) {
        if (axis == 'X') {
            shape->vertices[i].x = -shape->vertices[i].x;
        } else if (axis == 'Y') {
            shape->vertices[i].y = -shape->vertices[i].y;
        } else if (axis == 'Z') {
            shape->vertices[i].z = -shape->vertices[i].z;
        }
    }
}

void rotate(Shape *shape, char axis, double D) {
    double rad = D * PI / 180.0;
    double sin_theta = sin(rad);
    double cos_theta = cos(rad);
    double rm[3][3];

    if (axis == 'X') {
        rm[0][0] = 1;  rm[0][1] = 0;           rm[0][2] = 0;
        rm[1][0] = 0;  rm[1][1] = cos_theta;   rm[1][2] = -sin_theta;
        rm[2][0] = 0;  rm[2][1] = sin_theta;   rm[2][2] = cos_theta;
    } else if (axis == 'Y') {
        rm[0][0] = cos_theta;   rm[0][1] = 0; rm[0][2] = sin_theta;
        rm[1][0] = 0;           rm[1][1] = 1; rm[1][2] = 0;
        rm[2][0] = -sin_theta;  rm[2][1] = 0; rm[2][2] = cos_theta;
    } else if (axis == 'Z') {
        rm[0][0] = cos_theta;   rm[0][1] = -sin_theta; rm[0][2] = 0;
        rm[1][0] = sin_theta;   rm[1][1] = cos_theta;  rm[1][2] = 0;
        rm[2][0] = 0;           rm[2][1] = 0;          rm[2][2] = 1;
    }

    for (int i = 0; i < shape->num_vertices; i++) {
        double x = shape->vertices[i].x;
        double y = shape->vertices[i].y;
        double z = shape->vertices[i].z;

        shape->vertices[i].x = rm[0][0]*x + rm[0][1]*y + rm[0][2]*z;
        shape->vertices[i].y = rm[1][0]*x + rm[1][1]*y + rm[1][2]*z;
        shape->vertices[i].z = rm[2][0]*x + rm[2][1]*y + rm[2][2]*z;
    }
}

int main() {
    Point3D camera[4];
    double ymin, ymax, zmin, zmax;
    for (int i = 0; i < 4; i++) {
        scanf("%lf %lf %lf", &camera[i].x, &camera[i].y, &camera[i].z);
    }
    ymin = ymax = camera[0].y;
    zmin = zmax = camera[0].z;
    for (int i = 1; i < 4; i++) {
        if (camera[i].y < ymin) ymin = camera[i].y;
        if (camera[i].y > ymax) ymax = camera[i].y;
        if (camera[i].z < zmin) zmin = camera[i].z;
        if (camera[i].z > zmax) zmax = camera[i].z;
    }
    int M;
    scanf("%d", &M);
    Shape shapes[MAX_SHAPES];
    for (int i = 0; i < M; i++) {
        scanf("%s", shapes[i].type);
        int num_vertices;
        if (strcmp(shapes[i].type, "CUBE") == 0) num_vertices = 8;
        else if (strcmp(shapes[i].type, "PRISM") == 0) num_vertices = 6;
        else if (strcmp(shapes[i].type, "PYRAMID") == 0) num_vertices = 5;
        else num_vertices = 0;
        shapes[i].num_vertices = num_vertices;
        for (int j = 0; j < num_vertices; j++) scanf("%lf %lf %lf", &shapes[i].vertices[j].x, &shapes[i].vertices[j].y, &shapes[i].vertices[j].z);
    }
    int T;
    scanf("%d", &T);
    char cmd[20];
    for (int t = 0; t < T; t++) {
        scanf("%s", cmd);
        if (strcmp(cmd, "TRANSLATE") == 0) {
            int I;
            double A, B, C;
            scanf("%d %lf %lf %lf", &I, &A, &B, &C);
            translate(&shapes[I - 1], A, B, C);
        } else if (strcmp(cmd, "ROTATE") == 0) {
            int I;
            char S;
            double D;
            scanf("%d %c %lf", &I, &S, &D);
            rotate(&shapes[I - 1], S, D);
        } else if (strcmp(cmd, "REFLECT") == 0) {
            int I;
            char S;
            scanf("%d %c", &I, &S);
            reflect(&shapes[I - 1], S);
        } else if (strcmp(cmd, "SCALE") == 0) {
            int I;
            double A, B, C;
            scanf("%d %lf %lf %lf", &I, &A, &B, &C);
            scale(&shapes[I - 1], A, B, C);
        }
    }
    for (int i = 0; i < M; i++) {
        int count_visible = 0;
        for (int j = 0; j < shapes[i].num_vertices; j++) {
            double x = shapes[i].vertices[j].x;
            double y = shapes[i].vertices[j].y;
            double z = shapes[i].vertices[j].z;
            if (x > 0 && y > ymin && y < ymax && z > zmin && z < zmax) count_visible++;
        }
        printf("Shape %d: %s, ", i + 1, shapes[i].type);
        if (count_visible == shapes[i].num_vertices) printf("can be seen clearly in all its beauty!\n");
        else if (count_visible > 0) printf("is... not looking complete?\n");
        else printf("is in your imagination only!\n");
    }
}