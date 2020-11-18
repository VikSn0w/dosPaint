void Gotoxy
(
    int x,    // indice di colonna
	int y     // indice di riga
)
{
    COORD Cur = {SHORT(x), SHORT(y)};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
}
