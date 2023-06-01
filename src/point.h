/**
Header files contain the declarations of functions and variables.

They are useful when you want to separate the interface of a program from its implementation.
*/

typedef struct
{
    int x;
    int y;
} Point;

Point new_point(int x, int y);

/**
 * Calculates the distance between two points.
 * @param p1 The first point.
 * @param p2 The second point.
 * @return The distance between the two points.
 */
float distance(Point p1, Point p2);

void print_point(Point p);
