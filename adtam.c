#include "standart.h"

tamsayı	adtam(değişmez karakter *dizgi)
{
	tamsayı	konum;
	tamsayı	çarp;
	tamsayı	sonuç;

	konum = 0;
	çarp = 1;
	sonuç = 0;
	döngü ((dizgi[konum] >= '\t' && dizgi[konum] <= '\r') || dizgi[konum] == ' ')
			konum++;
	eğer (dizgi[konum] == '+' || dizgi[konum] == '-')
	{
			eğer (dizgi[konum] == '-')
					çarp *= -1;
			konum++;
	}
	döngü (dizgi[konum] >= '0' && dizgi[konum] <= '9' && dizgi[konum] != '\0')
	{
			sonuç = ((dizgi[konum] - '0') + (sonuç * 10));
			konum++;
	}
	döndür (sonuç * çarp);
}
