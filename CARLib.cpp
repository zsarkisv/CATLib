//! @file CaRLib.cpp
//!
//! @note    Áèáëèîòåêà CaRLib.cpp ñîñòîèò èç åäèíñòâåííîãî ôàéëà è íå òðåáóåò íèêàêèõ íàñòðîåê â ñðåäå
//!          ïðîãðàììèðîâàíèÿ, ÷òîáû îáëåã÷èòü åå óñòàíîâêó è ðàáîòó äëÿ íà÷èíàþùèõ.
///  Ôóíêöèÿ ðèñóþùàÿ ôîí
///

//!


//{---------------------------------------------------------------------------------------
/// @param width  ðàçìåð ôîíà ïî øèðèíå
/// @param height ðàçìåð ôîíà ïî âûñîòå
/// @param red    êîëè÷åñòâî êðàñíîãî öâåòà îò 0-255
/// @param green  êîëè÷åñòâî çåëåííîãî öâåòà îò 0-255
/// @param blue   êîëè÷åñòâî ñèíåãî öâåòà îò 0-255
//}---------------------------------------------------------------------------------------
 void drawFon (int width, int height, int red, int green, int blue);

//{---------------------------------------------------------------------------------------
/// @param  x    êîîðòèíàòû x íà÷àëà ðèñîâàíèÿ ìàøèíû
/// @param  y    êîîðäèíàòû y íà÷àëà ðèñîâàíèÿ ìàøèíû
/// @param  width ðàçìåð øèðèíû êàáèíû ìàøèíû
/// @param  height ðàçìåð äëèíû êàáèíû ìàøèíû
/// @param  radius ðàçìåð ðàäèóñà êîëåñà
/// @param  ymove  ñìåùåíèå êîëåñà ïî âåðòèêàëè
//}---------------------------------------------------------------------------------------

void drawCar (double x, double y, double width, double height, double radius, int ymove);
//{---------------------------------------------------------------------------------------
/// ïðèâèäåíèå çàéöà
//}---------------------------------------------------------------------------------------
void drawRabish ();
//{---------------------------------------------------------------------------------------
///
/// @param x ïåðåìåùåíèå äîìèêà ïî îñè õ
///
/// @param y ïåðåìåùåíèå äîìèêà ïî îñè y
//}---------------------------------------------------------------------------------------
void drawHouse (double x, double y);


//{---------------------------------------------------------------------------------------
//!
//! @param x ïåðåìåùåíèå äîìèêà ïî îñè õ
//!
//! @param y ïåðåìåùåíèå äîìèêà ïî îñè y
//!
//}---------------------------------------------------------------------------------------
void dimVhlopa (int x, int y, int radius);

/// @param x âûõëîï àâòîìîáèëÿ êîîðòèíàòà x

/// @param y âûõëîï àâòîìîáèëÿ êîîðòèíàòà y

/// ====================================================================================

void driveCar(int t, int speed);

/// ====================================================================================
///
void drawCar(double x, double y, double width, double height, double radius, int ymove)
    {
        width = x + 250;
        height = y;
        txSetColor (TX_WHITE, 4);
        txSetFillColor (RGB(255, 0, 0));
        txRectangle (x - 50, y - 40, width, height);
        POINT star[5] = {{x + 30, y - 40},
                        {x + 60, y - 80},
                        {x + 230, y - 80},
                        {x + 250, y - 40},
                        {x + 30, y - 40}};
        txPolygon (star, 5);

        txSetFillColor (TX_WHITE);
        txSetColor (TX_BLACK, 4);
        txCircle (x, y - ymove, radius);
        txCircle (x + 200, y - ymove, radius);

        txSetFillColor (TX_BLACK);
        txCircle (x, y - ymove, radius/2.5);
        txCircle (x + 200, y - ymove, radius/2.5);

        txLine (x + 60,  y - 80, width - 190, height - 40);
        txLine (x + 140, y - 80, width - 110, height - 40);
        txLine (x + 230, y - 80, width - 20,  height - 40);
        txLine (x + 250, y,      x + 280,     y);

        }
   void drawFon(int width, int height, int red, int green, int blue)
      {
        txClear();
        txSetColor (RGB (red, green, blue), 4);
        txSetFillColor (TX_BLUE);
        txRectangle (0, 0, width, height);

      }
   void dimVhlopa(int x, int y, int radius)
        {
        txSetFillColor (TX_WHITE);
        txSetColor (TX_BLACK, 4);
        txCircle (x + 240, y - 1, radius);
        }

    void drawRabish()
    {
        txSetColor (TX_WHITE, 4);
        txArc (100, 100, 300, 200, 180, 180);
        txArc (100, 120, 200, 170, 20, 160);
        txArc (200, 120, 300, 170, 0, 160);
        txArc (150, 120, 250, 170, 0, 180);
        txArc (120, 50, 270, 200, 0, 180);
        txArc (120, 50, 270, 180, 230, 80);
        txPie (140, 80, 170, 160, 0, 180);
        txPie (220, 80, 250, 160, 0, 180);
        txSetFillColor (TX_BLACK);
        txEllipse (180, 110, 210, 140);
    }
    void drawHouse (double x, double y)
    {
        txSetFillColor (TX_RED);
        txRectangle (x, y - 80, x + 30, y - 20);
        txRectangle (x - 150, y, x + 50, y + 100);
        POINT krisha[3] = {{x - 150, y}, {x - 50, y - 100}, {x + 50, y}};
        txPolygon (krisha, 3);

        txSetColor (TX_WHITE, 4);
        txSetFillColor (TX_BLACK);
        txRectangle (x - 140, y + 10, x - 90, y + 60);
        txRectangle (x - 10, y + 10,  x + 40, y + 60);
        txRectangle (x - 70, y + 20,  x - 30, y + 100);
        txLine      (x - 115, y + 10, x - 115, y + 60);
        txLine      (x + 15, y + 10,  x + 15, y + 60);
        txCircle    (x - 50, y - 50, 20);
    }

    void driveCar(int t, int speed)
    {
    double zoom = 1;
    while(t <= 250)
        {
        drawFon (800, 600, 255, 255, 0);
        drawHouse (450, 200);
        drawCar (800 - 5*t, 570, 200, 450, 25, t%3 - 2);

        if (t >= 120)
            {
            drawRabish ();
            speed=5;
            }

        for(int i=0; i<=2; i++)
            {
            dimVhlopa (850 - 5*t + 5*i, 570, t%6 - i);
            }

        txSleep(speed);
        t++;
        }
     }
