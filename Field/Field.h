#ifndef FIELD_H
#define FIELD_H

#include <iostream>
#include <string>
#include <exception>

class Field
{
public:
	virtual ~Field() = default;
	virtual void info() = 0;
	//virtual int fieldNumber() = 0;
	//virtual void buy() = 0;
	//virtual void build() = 0;
	//virtual void step() = 0;
	//virtual bool isStepped() = 0;	
protected:
	Field() = default;
};

#endif //FIELD_H

//Field::number = 0;
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