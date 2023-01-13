#ifndef STANDART_H
# define STANDART_H

# include "türkçe.h"

tamsayı	adtam(değişmez karakter *dizgi);
tamsayı	basarmı(tamsayı değer);
tamsayı	büyült(tamsayı değer);
boyut_t	dizgiuzunluk(karakter *dizgi);
boşluk	*hafızaset(boşluk *dizgi, tamsayı değer, boyut_t boy);
tamsayı	küçült(tamsayı değer);
boşluk	sıfırdoldur(boşluk *dizgi, boyut_t boy);
tamsayı unicode_bulucu(karakter *dizgi);
boşluk	*yerayır_c(boyut_t sayı, boyut_t boy);

#endif
