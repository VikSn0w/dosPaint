void DrawCanvas(int x, int y)
{
    for(x = BORDOSINISTRO; x <= BORDODESTRO; x++)
    {
        TextColor(0x00);
        Gotoxy(x, BORDOSOPRA); cout << " ";
        Gotoxy(x, BORDOSOTTO); cout << " ";
    }

    for(y = BORDOSOPRA; y <= BORDOSOTTO; y++)
    {
        TextColor(0x00);
        Gotoxy(BORDODESTRO, y); cout << " ";
        Gotoxy(BORDOSINISTRO, y); cout << " ";
    }
}
