#include "standart.h"

boşluk	*yerayır_c(boyut_t sayı, boyut_t boy)
{
	boşluk	*işaretci;

	işaretci = yerayır(sayı * boy);
	eğer (!işaretci)
		döndür (işaretci);
	sıfırdoldur(işaretci , (sayı * boy));
	döndür (işaretci);
}
