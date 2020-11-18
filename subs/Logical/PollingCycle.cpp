void PollingCycle(int &Px, int &Py, int &tasto)
{
    do                  //initialization of the movement keys (ARROSW SCHEME)
    {
        tasto = _getch();

        if(tasto == 224)
        {
            tasto = _getch();
            switch (tasto)
            {
                case 72: //UP
                    Gotoxy(Px, Py);
                    cout << ' ';
                    if(Py > 9)Py--;
                    Gotoxy(Px, Py);
                    cout << char(Pf);
                break;

                case 80: //DOWN
                    Gotoxy(Px, Py);
                    cout << ' ';
                    if(Py < 49)Py++;
                    Gotoxy(Px, Py);
                    cout << char(Pf);
                break;

                case 75: //LEFT
                    Gotoxy(Px, Py);
                    cout << ' ';
                    if(Px > 21)Px--;
                    Gotoxy(Px, Py);
                    cout << char(Pf);
                break;

                case 77: //RIGHT
                    Gotoxy(Px, Py);
                    cout << ' ';
                    if(Px < 98)Px++;
                     Gotoxy(Px, Py);
                    cout << char(Pf);
                break;
            }
        }

        //The comands for the colors

        switch (tasto)
        {
            case RET:
                TextColor(preV);
            break;

            case CANC:
                TextColor(0xF0);
            break;

            case 'Q':
                case 'q':
                    TextColor(0x0F);
                    preV = 0x0F;
                break;

            case 'W':
                case 'w':
                    TextColor(0x1F);
                    preV = 0x1F;
                break;

            case 'E':
                case 'e':
                    TextColor(0x2F);
                    preV = 0x2F;
                break;

            case 'R':
                case 'r':
                    TextColor(0x3F);
                    preV = 0x3F;
                break;

            case 'T':
                case 't':
                    TextColor(0x4F);
                    preV = 0x4F;
                break;

            case 'Y':
                case 'y':
                    TextColor(0x5F);
                    preV = 0x5F;
                break;

            case 'U':
                case 'u':
                    TextColor(0x6F);
                    preV = 0x6F;
                break;

            case 'I':
                case 'i':
                    TextColor(0x70);
                    preV = 0x70;
                break;

            case 'A':
                case 'a':
                    TextColor(0x80);
                    preV = 0x80;
                break;

            case 'S':
                case 's':
                    TextColor(0x9F);
                    preV = 0x90;
                break;

            case 'D':
                case 'd':
                    TextColor(0xA0);
                    preV = 0xA0;
                break;

            case 'F':
                case 'f':
                    TextColor(0xB0);
                    preV = 0xB0;
                break;

            case 'G':
                case 'g':
                    TextColor(0xC0);
                    preV = 0xC0;
                break;

            case 'Z':
                case 'z':
                    TextColor(0xD0);
                    preV = 0xD0;
                break;

            case 'J':
                case 'j':
                    TextColor(0xE0);
                    preV = 0xE0;
                break;

            case 'X':
                case 'x':
                    TextColor(0xF0);
                    preV = 0xF0;
                break;
        }

    }while(tasto!=ESC);
}
