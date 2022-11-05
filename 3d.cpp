#include <graphics.h>
#include <conio.h>
#include <stdio.h>
using namespace std;
int main()
{
    initwindow(600, 600);
    struct arccoordstype a;

    int alfa = 360;
    while (alfa >= 0)
    {
        arc(300, 300, alfa, alfa + 1, 180);
        getarccoords(&a);
        cleardevice();
        line(300, 300, a.xstart, a.ystart);
        alfa -= 3;
        if (alfa <= 0)
        {
            alfa = 360;
        }
        arc(300,300,0,360,200);
        delay(1000);
    }
    getch();
    closegraph();
    return 0;
}
