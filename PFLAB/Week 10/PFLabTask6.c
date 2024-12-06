#include <stdio.h>
#include <math.h>
typedef struct {
    float x, y;
} Point;
float calculateDistance(Point p1, Point p2) {
    return sqrt((p2.x - p1.x) * (p2.x - p1.x) + (p2.y - p1.y) * (p2.y - p1.y));
}
int isPointInRectangle(Point p, Point bottomLeft, Point topRight) {
    return p.x >= bottomLeft.x && p.x <= topRight.x && p.y >= bottomLeft.y && p.y <= topRight.y;
}
int main() {
    Point p1, p2, bottomLeft, topRight, testPoint;
    printf("Enter coordinates of Point 1 (x y): ");
    scanf("%f %f", &p1.x, &p1.y);
    printf("Enter coordinates of Point 2 (x y): ");
    scanf("%f %f", &p2.x, &p2.y);
    printf("Distance between points: %.2f\n", calculateDistance(p1, p2));
    printf("Enter bottom-left coordinates of rectangle (x y): ");
    scanf("%f %f", &bottomLeft.x, &bottomLeft.y);
    printf("Enter top-right coordinates of rectangle (x y): ");
    scanf("%f %f", &topRight.x, &topRight.y);
    printf("Enter test point coordinates (x y): ");
    scanf("%f %f", &testPoint.x, &testPoint.y);
    if (isPointInRectangle(testPoint, bottomLeft, topRight))
        printf("The point lies within the rectangle.\n");
    else
        printf("The point is outside the rectangle.\n");
    return 0;
}
