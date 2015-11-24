#ifndef FIELD_H
#define FIELD_H

#include <iostream>
#include <string>

class Field
{
public:
	Field() = delete;
	virtual ~Field() = default;
	//virtual void buy() = 0;
	//virtual void build() = 0;
	virtual bool isStepped() = 0;	
};

#endif //FIELD_H

/*
....különféle mezők sorakoznak 
egymás után.....
A mezők három 
félék lehetnek: ingatlanok, szolgáltatások és szerencse mezők. Az ingatlant meg 
lehet vásárolni 1000 Petákért, majd újra rálépve házat is lehet rá építeni 4000 
Petákért. Ha ezután más játékos erre a mezőre lép, akkor a
mező tulajdonosának fizet: ha még nincs rajta ház, akkor 500 Petákot, ha
 van rajta ház, akkor 2000 Petákot. A szolgáltatás mezőre lépve a banknak kell 
 befizetni a mező
paramétereként megadott összeget. A szerencse mezőre lépve a mező paramétereként
megadott összegű pénzt kap a játékos. 
*/