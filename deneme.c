#include "standart.h"
#include <string.h>

tamsayı başla(boşluk)
{
	karakter	dizgi[] = "ırmak çok güzelsin";
	karakter	dizgi2[] = "ahmet";
	karakter	sonuç[50];
	tamsayı		uzunluk;
	tamsayı		konum;

	karakter	taban[] = "     -31236abcajısdandjfs";

	konum = 0;
	uzunluk = dizgiuzunluk(dizgi);

	bastır ("dizgimin uzunluğu %d dir \n", uzunluk);
	döngü (dizgi2[konum])
	{
		sonuç[konum] = büyült(dizgi2[konum]);
		konum++;
	}
	sonuç[konum] = '\0';

	bastır ("dizgimin ilk hali %s dir ve dizgimin son durumu %s dir\n", dizgi2, sonuç);
	bastır ("tamsayı değer %d dir\n", adtam(taban));
	bastır ("\n");

	yinele (tamsayı sayı = 0; sayı < 5; sayı++)
	{
		eğer (sayı == 3)
			bastır ("31\n");
		değilse eğer (sayı == 4)
			bastır ("69\n");
	}
	döndür (0);
}
