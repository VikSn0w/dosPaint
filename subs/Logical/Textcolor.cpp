void TextColor
(
 int Colore    // codice numerico del colore
)
{	HANDLE h = GetStdHandle ( STD_OUTPUT_HANDLE );
	SetConsoleTextAttribute ( h, Colore );
}
