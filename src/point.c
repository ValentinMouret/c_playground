#include <stdio.h>
#include <math.h>

// This syntax is used to name struct types.
typedef struct
{
    int x;
    int y;
} Point;

Point new_point(int x, int y)
{
    Point p;
    p.x = x;
    p.y = y;
    return p;
}

/**
 * Calculates the distance between two points.
 * @param p1 The first point.
 * @param p2 The second point.
 * @return The distance between the two points.
 */
float distance(Point p1, Point p2)
{
    return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}

void print_point(Point p)
{
    printf("(%d, %d)\n", p.x, p.y);
}

int main(int argc, char *argv[])
{
    Point p = new_point(1, 2);
    print_point(p);
    printf("Distance: %f\n", distance(p, new_point(3, 4)));
    return 0;
}
