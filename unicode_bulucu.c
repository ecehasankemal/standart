#include "standart.h"

tamsayı unicode_bulucu(karakter *dizgi)
{
	tamsayı konum;
	tamsayı sonuç;

	konum = 0;
	sonuç = 0;
	döngü (dizgi[konum] != '\0')
	{
			eğer ((dizgi[konum] == '\xC3' && dizgi[konum + 1] == '\xBC')
				|| (dizgi[konum] == '\xC3' && dizgi[konum + 1] == '\x9C')
				|| (dizgi[konum] == '\xC3' && dizgi[konum + 1] == '\xA7')
				|| (dizgi[konum] == '\xC3' && dizgi[konum + 1] == '\x87')
				|| (dizgi[konum] == '\xC3' && dizgi[konum + 1] == '\xB6')
				|| (dizgi[konum] == '\xC3' && dizgi[konum + 1] == '\x96')
				|| (dizgi[konum] == '\xC4' && dizgi[konum + 1] == '\xB1')
				|| (dizgi[konum] == '\xC4' && dizgi[konum + 1] == '\xB0')
				|| (dizgi[konum] == '\xC4' && dizgi[konum + 1] == '\x9F')
				|| (dizgi[konum] == '\xC4' && dizgi[konum + 1] == '\x9E')
				|| (dizgi[konum] == '\xC5' && dizgi[konum + 1] == '\x9F')
				|| (dizgi[konum] == '\xC5' && dizgi[konum + 1] == '\x9E'))
			{
					sonuç++;
					konum += 2;
			}
			değilse
					konum++;
	}
	döndür (sonuç);
}
