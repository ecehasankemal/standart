#include "standart.h"

boşluk	*hafızaset(boşluk *dizgi, tamsayı değer, boyut_t boy)
{
	karakter	*işaret;
	boyut_t		konum;

	konum = 0;
	işaret = (karakter *)dizgi;
	döngü (konum < boy)
	{
			işaret[konum] = değer;
			konum++;
	}
	döndür (dizgi);
}
