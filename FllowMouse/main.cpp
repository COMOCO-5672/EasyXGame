#include <graphics.h>
#include <iostream>

int main()
{
    //printf("%ws", GetEasyXVer());

    initgraph(1280, 720);

    int x = 0;
    int y = 0;

    BeginBatchDraw();

    while (true) {
        ExMessage msg;
        while (peekmessage(&msg)) {
            if (msg.message == WM_MOUSEMOVE) {
                x = msg.x;
                y = msg.y;
            }
        }
        cleardevice();
        solidcircle(x, y, 20);
        FlushBatchDraw();
    }
    EndBatchDraw();

    return 0;
}
