#include "standart.h"

tamsayı	basarmı(tamsayı değer)
{
	eğer ((değer >= 'a' && değer <= 'z')
		|| (değer >= 'A' && değer <= 'Z')
		|| (değer >= '0' && değer <= '9'))
		döndür (1);
	döndür (0);
}
