#include <stdio.h>
#include <math.h>

struct Rectangle {
    double x1;
    double y1;
    double x2;
    double y2;
    double x3;
    double y3;
    double x4;
    double y4;
};

double countLength(double x1, double y1, double x2, double y2) {
    double x = fabs(x2 - x1), y = fabs(y2 - y1);
    return sqrtf(x*x + y*y);
}

double RectangleP(struct Rectangle Rect) {
    return (countLength(Rect.x1, Rect.y1, Rect.x2, Rect.y2) + countLength(Rect.x2, Rect.y2, Rect.x3, Rect.y3)) * 2;
}

struct MP3 {
    unsigned int Play: 1;
    unsigned int Pause: 1;
    unsigned int Record: 1;
};

union MP3U {
    unsigned u;
    struct MP3 MP3;
};

int main()
{
    enum Prints {
        Monday,
        Tuesday,
        Wednesday,
        Thursday,
        Friday,
        Saturday,
        Sunday
    };

    printf("Day: %d \n", Monday);

    struct Rectangle Rect = {0, 0, 0, 5, 6, 5, 6, 0};
    printf("Perimeter: %f \n", RectangleP(Rect));

    union MP3U MP3State;
    printf("Insert: ");
    scanf("%x", &MP3State.u);
    printf("Play: %d\n", MP3State.MP3.Play);
    printf("Play: %d\n", MP3State.MP3.Pause);
    printf("Play: %d\n", MP3State.MP3.Record);
}
