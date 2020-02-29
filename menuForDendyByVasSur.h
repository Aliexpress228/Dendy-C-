#include <TXlib.h>
class Menu
{
    public:
    void sprite(HDC a);
    void startscreen();

    private:
    HDC text;

};

void Menu::sprite(HDC a)
    {
        text = a;
    }

void Menu::startscreen()
    {
        txSetFillColor(TX_BLACK);
        for(int i=100;i<270;i+=3)
        {
            txClear();
            Win32::TransparentBlt (txDC(), 100, 100, i*1.74,
            i , text, 3, 273, 47, 27, TX_BLACK);
            txSleep(10);
        }
        while (GetAsyncKeyState(VK_UP) == 0)
            Win32::TransparentBlt (txDC(), 100, 100, 470, 270, text, 3, 273, 47, 27, TX_BLACK);
        txSleep(50);

    }
