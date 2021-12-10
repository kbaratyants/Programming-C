#include <stdio.h>

struct Rectangle {
    int w;
    int h;
};

int RectangleP(struct Rectangle Rect) {
    return (Rect.w + Rect.h) * 2;
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

    struct Rectangle Rect = {50, 40};
    printf("Perimeter: %d \n", RectangleP(Rect));

    union MP3U MP3State;
    printf("Insert: ");
    scanf("%x", &MP3State.u);
    printf("Play: %d\n", MP3State.MP3.Play);
    printf("Play: %d\n", MP3State.MP3.Pause);
    printf("Play: %d\n", MP3State.MP3.Record);
}
