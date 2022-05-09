#include "Spielstein.hpp"

void Spielstein::init() {
switch (typ)
	{
	case SPIELSTEIN_Z2:
	{
		name = "Z2";
		farbe = HINTERGRUND_BLAU;
		felder[0][0].push_back(Position(2, 0));//_#
		felder[0][0].push_back(Position(1, 1));//##
		felder[0][0].push_back(Position(2, 1));//#_
		felder[0][0].push_back(Position(1, 2));//__

		felder[0][1].push_back(Position(1, 1));//__
		felder[0][1].push_back(Position(2, 1));//##
		felder[0][1].push_back(Position(2, 2));//__##
		felder[0][1].push_back(Position(3, 2));//__

		felder[0][2].push_back(Position(2, 0));//_#
		felder[0][2].push_back(Position(1, 1));//##
		felder[0][2].push_back(Position(2, 1));//#_
		felder[0][2].push_back(Position(1, 2));//__

		felder[0][3].push_back(Position(1, 1));//__
		felder[0][3].push_back(Position(2, 1));//##
		felder[0][3].push_back(Position(2, 2));//__##
		felder[0][3].push_back(Position(3, 2));//__

		felder[1][0].push_back(Position(1, 0));//#_
		felder[1][0].push_back(Position(1, 1));//##
		felder[1][0].push_back(Position(2, 1));//_#
		felder[1][0].push_back(Position(2, 2));//__

		felder[1][1].push_back(Position(2, 1));//__
		felder[1][1].push_back(Position(3, 1));//__##
		felder[1][1].push_back(Position(1, 2));//##
		felder[1][1].push_back(Position(2, 2));//__

		felder[1][2].push_back(Position(1, 0));//#_
		felder[1][2].push_back(Position(1, 1));//##
		felder[1][2].push_back(Position(2, 1));//_#
		felder[1][2].push_back(Position(2, 2));//__

		felder[1][3].push_back(Position(2, 1));//__
		felder[1][3].push_back(Position(3, 1));//__##
		felder[1][3].push_back(Position(1, 2));//##
		felder[1][3].push_back(Position(2, 2));//__
		break;
	}
	case SPIELSTEIN_Z3:
	{
		name = "Z3";
		farbe = HINTERGRUND_GELB;
		felder[0][0].push_back(Position(1, 0));
		felder[0][0].push_back(Position(2, 0));//##
		felder[0][0].push_back(Position(1, 1));//#_
		felder[0][0].push_back(Position(0, 2));//##__
		felder[0][0].push_back(Position(1, 2));//__


		felder[0][1].push_back(Position(1, 0));
		felder[0][1].push_back(Position(0, 1));//#_
		felder[0][1].push_back(Position(1, 1));//###_
		felder[0][1].push_back(Position(2, 1));//_#
		felder[0][1].push_back(Position(2, 2));//__

		felder[0][2].push_back(Position(1, 0));
		felder[0][2].push_back(Position(2, 0));//##
		felder[0][2].push_back(Position(1, 1));//#_
		felder[0][2].push_back(Position(0, 2));//##__
		felder[0][2].push_back(Position(1, 2));//__


		felder[0][3].push_back(Position(1, 0));
		felder[0][3].push_back(Position(0, 1));//#_
		felder[0][3].push_back(Position(1, 1));//###_
		felder[0][3].push_back(Position(2, 1));//_#
		felder[0][3].push_back(Position(2, 2));//__




		felder[1][0].push_back(Position(0, 0));
		felder[1][0].push_back(Position(1, 0));//##__
		felder[1][0].push_back(Position(1, 1));//#
		felder[1][0].push_back(Position(1, 2));//##
		felder[1][0].push_back(Position(2, 2));//__

		felder[1][1].push_back(Position(3, 0));
		felder[1][1].push_back(Position(1, 1));//_#
		felder[1][1].push_back(Position(2, 1));//_###
		felder[1][1].push_back(Position(3, 1));//#_
		felder[1][1].push_back(Position(1, 2));//__

		felder[1][2].push_back(Position(3, 0));
		felder[1][2].push_back(Position(1, 1));//##__
		felder[1][2].push_back(Position(2, 1));//#_
		felder[1][2].push_back(Position(3, 1));//##
		felder[1][2].push_back(Position(1, 2));//__

		felder[1][3].push_back(Position(3, 0));
		felder[1][3].push_back(Position(1, 1));//_#
		felder[1][3].push_back(Position(2, 1));//_###
		felder[1][3].push_back(Position(3, 1));//#_
		felder[1][3].push_back(Position(1, 2));//__






		break;
	}
	case SPIELSTEIN_L2:
	{
		name = "L2";
		farbe = HINTERGRUND_CYAN;
		felder[0][0].push_back(Position(1, 0));
		felder[0][0].push_back(Position(0, 1));//#_
		felder[0][0].push_back(Position(1, 1));//##__

		felder[0][1].push_back(Position(0, 0));
		felder[0][1].push_back(Position(0, 1));//#_
		felder[0][1].push_back(Position(1, 1));//##__

		felder[0][2].push_back(Position(0, 0));
		felder[0][2].push_back(Position(1, 0));//##__
		felder[0][2].push_back(Position(0, 1));//#_

		felder[0][3].push_back(Position(0, 0));
		felder[0][3].push_back(Position(1, 0));//##__
		felder[0][3].push_back(Position(0, 1));//#_



		
		felder[1][0].push_back(Position(0, 0));
		felder[1][0].push_back(Position(0, 1));//#_
		felder[1][0].push_back(Position(1, 1));//##__

		felder[1][1].push_back(Position(0, 0));
		felder[1][1].push_back(Position(1, 0));//##__
		felder[1][1].push_back(Position(0, 1));//#_

		felder[1][2].push_back(Position(0, 0));
		felder[1][2].push_back(Position(1, 0));//##__
		felder[1][2].push_back(Position(0, 1));//#_
		
		felder[1][3].push_back(Position(1, 0));
		felder[1][3].push_back(Position(0, 1));//#_
		felder[1][3].push_back(Position(1, 1));//##__

		break;

	}
	case SPIELSTEIN_L3:
	{
		name = "L3";
		farbe = HINTERGRUND_HELL_GRUEN;
		felder[0][0].push_back(Position(1, 0));
		felder[0][0].push_back(Position(1, 1));//#_
		felder[0][0].push_back(Position(0, 2));//#_
		felder[0][0].push_back(Position(1, 2));//##__

		felder[0][1].push_back(Position(0, 0));
		felder[0][1].push_back(Position(1, 0));//#_
		felder[0][1].push_back(Position(1, 1));//###_
		felder[0][1].push_back(Position(1, 2));//__

		felder[0][2].push_back(Position(0, 0));
		felder[0][2].push_back(Position(1, 0));//##__
		felder[0][2].push_back(Position(0, 1));//#_
		felder[0][2].push_back(Position(0, 2));//#_

		felder[0][3].push_back(Position(0, 0));
		felder[0][3].push_back(Position(1, 0));//###
		felder[0][3].push_back(Position(2, 0));//_#
		felder[0][3].push_back(Position(2, 1));



		felder[1][0].push_back(Position(0, 0));
		felder[1][0].push_back(Position(0, 1));//#_
		felder[1][0].push_back(Position(0, 2));//#_
		felder[1][0].push_back(Position(1, 2));//##__
		
		felder[1][1].push_back(Position(0, 0));
		felder[1][1].push_back(Position(0, 1));//###_
		felder[1][1].push_back(Position(0, 2));//#_
		felder[1][1].push_back(Position(2, 0));//__

		felder[1][2].push_back(Position(0, 0));
		felder[1][2].push_back(Position(1, 0));//##__
		felder[1][2].push_back(Position(1, 1));//#_
		felder[1][2].push_back(Position(1, 2));//#_

		felder[1][3].push_back(Position(2, 0));
		felder[1][3].push_back(Position(0, 1));//_#
		felder[1][3].push_back(Position(1, 1));//###_
		felder[1][3].push_back(Position(2, 1));





		
		
		break;
	}
	case SPIELSTEIN_L4:
	{
		name = "L4";
		farbe = HINTERGRUND_HELL_LILA;
		felder[0][0].push_back(Position(1, 0));
		felder[0][0].push_back(Position(1, 1));//#_
		felder[0][0].push_back(Position(1, 2));//#_
		felder[0][0].push_back(Position(0, 3));//#_
		felder[0][0].push_back(Position(1, 3));//##__

		felder[0][1].push_back(Position(0, 0));
		felder[0][1].push_back(Position(1, 0));//#_
		felder[0][1].push_back(Position(1, 1));//####
		felder[0][1].push_back(Position(1, 2));//__
		felder[0][1].push_back(Position(1, 3));

		felder[0][2].push_back(Position(0, 0));
		felder[0][2].push_back(Position(1, 0));//##__
		felder[0][2].push_back(Position(0, 1));//#_
		felder[0][2].push_back(Position(0, 2));//#_
		felder[0][2].push_back(Position(0, 3));//#_

		felder[0][3].push_back(Position(0, 0));
		felder[0][3].push_back(Position(1, 0));//####
		felder[0][3].push_back(Position(2, 0));//_#
		felder[0][3].push_back(Position(3, 0));
		felder[0][3].push_back(Position(2, 1));



		felder[1][0].push_back(Position(0, 0));//#
		felder[1][0].push_back(Position(0, 1));
		felder[1][0].push_back(Position(0, 2));//#_
		felder[1][0].push_back(Position(0, 3));//#_
		felder[1][0].push_back(Position(1, 3));//##__
	
		felder[1][1].push_back(Position(0, 0));
		felder[1][1].push_back(Position(0, 1));//####
		felder[1][1].push_back(Position(0, 2));//#_
		felder[1][1].push_back(Position(0, 3));
		felder[1][1].push_back(Position(2, 0));//__

		felder[1][2].push_back(Position(0, 0));
		felder[1][2].push_back(Position(1, 0));//##__
		felder[1][2].push_back(Position(1, 1));//#_
		felder[1][2].push_back(Position(1, 2));//#_
		felder[1][2].push_back(Position(1, 3));//#_

		felder[1][3].push_back(Position(3, 0));
		felder[1][3].push_back(Position(0, 1));//_#
		felder[1][3].push_back(Position(1, 1));//####
		felder[1][3].push_back(Position(2, 1));
		felder[1][3].push_back(Position(3, 1));

		break;
	}
	case SPIELSTEIN_I2:
	{
		name = "I2";
		farbe = HINTERGRUND_LILA;
		felder[0][0].push_back(Position(0, 0));//#_
		felder[0][0].push_back(Position(0, 1));//#_

		felder[0][1].push_back(Position(0, 0));//##__
		felder[0][1].push_back(Position(1, 0));//__

		felder[0][2].push_back(Position(0, 0));//#_
		felder[0][2].push_back(Position(0, 1));//#_

		felder[0][3].push_back(Position(0, 0));//##__
		felder[0][3].push_back(Position(1, 0));//__



		felder[1][0].push_back(Position(0, 0));//#_
		felder[1][0].push_back(Position(0, 1));//#_

		felder[1][1].push_back(Position(0, 0));//##__
		felder[1][1].push_back(Position(1, 0));//__

		felder[1][2].push_back(Position(0, 0));//#_
		felder[1][2].push_back(Position(0, 1));//#_

		felder[1][3].push_back(Position(0, 0));//##__
		felder[1][3].push_back(Position(1, 0));//__




		break;
	}
	case SPIELSTEIN_I3:
	{
		name = "I2";
		farbe = HINTERGRUND_HELL_BLAU;
		felder[0][0].push_back(Position(0, 0));//#_
		felder[0][0].push_back(Position(0, 1));//#_
		felder[0][0].push_back(Position(0, 2));//#_

		felder[0][1].push_back(Position(0, 0));//###_
		felder[0][1].push_back(Position(1, 0));//__
		felder[0][1].push_back(Position(2, 0));

		felder[0][2].push_back(Position(0, 0));//#_
		felder[0][2].push_back(Position(0, 1));//#_
		felder[0][2].push_back(Position(0, 2));//#_

		felder[0][3].push_back(Position(0, 0));//###_
		felder[0][3].push_back(Position(1, 0));//__
		felder[0][3].push_back(Position(2, 0));


		felder[1][0].push_back(Position(0, 0));//#_
		felder[1][0].push_back(Position(0, 1));//#_
		felder[1][0].push_back(Position(0, 2));//#_


		felder[1][1].push_back(Position(0, 0));//###_
		felder[1][1].push_back(Position(1, 0));//__
		felder[1][1].push_back(Position(2, 0));


		felder[1][2].push_back(Position(0, 0));//#_
		felder[1][2].push_back(Position(0, 1));//#_
		felder[1][2].push_back(Position(0, 2));//#_


		felder[1][3].push_back(Position(0, 0));//###_
		felder[1][3].push_back(Position(1, 0));//__
		felder[1][3].push_back(Position(2, 0));
		
		break;
	}
	case SPIELSTEIN_I4:
	{

		name = "I4";
		farbe = HINTERGRUND_HELL_GRAU;
		felder[0][0].push_back(Position(0, 0));//#_
		felder[0][0].push_back(Position(0, 1));//#_
		felder[0][0].push_back(Position(0, 2));//#_
		felder[0][0].push_back(Position(0, 3));//#_


		felder[0][1].push_back(Position(0, 0));//####
		felder[0][1].push_back(Position(1, 0));//__
		felder[0][1].push_back(Position(2, 0));
		felder[0][1].push_back(Position(3, 0));


		felder[0][2].push_back(Position(0, 0));//#_
		felder[0][2].push_back(Position(0, 1));//#_
		felder[0][2].push_back(Position(0, 2));//#_
		felder[0][2].push_back(Position(0, 3));//#_


		felder[0][3].push_back(Position(0, 0));//####
		felder[0][3].push_back(Position(1, 0));//__
		felder[0][3].push_back(Position(2, 0));
		felder[0][3].push_back(Position(3, 0));



		felder[1][0].push_back(Position(0, 0));//#_
		felder[1][0].push_back(Position(0, 1));//#_
		felder[1][0].push_back(Position(0, 2));//#_
		felder[1][0].push_back(Position(0, 3));//#_



		felder[1][1].push_back(Position(0, 0));//####
		felder[1][1].push_back(Position(1, 0));//__
		felder[1][1].push_back(Position(2, 0));
		felder[1][1].push_back(Position(3, 0));



		felder[1][2].push_back(Position(0, 0));//#_
		felder[1][2].push_back(Position(0, 1));//#_
		felder[1][2].push_back(Position(0, 2));//#_
		felder[1][2].push_back(Position(0, 3));//#_



		felder[1][3].push_back(Position(0, 0));//####
		felder[1][3].push_back(Position(1, 0));//__
		felder[1][3].push_back(Position(2, 0));
		felder[1][3].push_back(Position(3, 0));

		
		break;
	}
	case SPIELSTEIN_Q:  //quader 
	{

		name = "Q";
		farbe = HINTERGRUND_ROT;
		felder[0][0].push_back(Position(0, 0));//##__
		felder[0][0].push_back(Position(1, 0));//##__
		felder[0][0].push_back(Position(0, 1));
		felder[0][0].push_back(Position(1, 0));

		felder[0][1].push_back(Position(0, 0));//##__
		felder[0][1].push_back(Position(1, 0));//##__
		felder[0][1].push_back(Position(0, 1));
		felder[0][1].push_back(Position(1, 0));

		felder[0][2].push_back(Position(0, 0));//##__
		felder[0][2].push_back(Position(1, 0));//##__
		felder[0][2].push_back(Position(0, 1));
		felder[0][2].push_back(Position(1, 1));

		felder[0][3].push_back(Position(0, 0));//##__
		felder[0][3].push_back(Position(1, 0));//##__
		felder[0][3].push_back(Position(0, 1));
		felder[0][3].push_back(Position(1, 1));

		felder[0][3].push_back(Position(0, 0));//##__
		felder[0][3].push_back(Position(1, 0));//##__
		felder[0][3].push_back(Position(0, 1));
		felder[0][3].push_back(Position(1, 1));



		felder[1][1].push_back(Position(0, 0));//##__
		felder[1][1].push_back(Position(1, 0));//##__
		felder[1][1].push_back(Position(0, 1));
		felder[1][1].push_back(Position(1, 1));

		felder[1][2].push_back(Position(0, 0));//##__
		felder[1][2].push_back(Position(1, 0));//##__
		felder[1][2].push_back(Position(0, 1));
		felder[1][2].push_back(Position(1, 1));

		felder[1][3].push_back(Position(0, 0));//##__
		felder[1][3].push_back(Position(1, 0));//##__
		felder[1][3].push_back(Position(0, 1));
		felder[1][3].push_back(Position(1, 1));

		felder[1][4].push_back(Position(0, 0));//##__
		felder[1][4].push_back(Position(1, 0));//##__
		felder[1][4].push_back(Position(0, 1));
		felder[1][4].push_back(Position(1, 1));

		break;
	}
	case SPIELSTEIN_QPLUS: //GECHECKT   Quader mit extra stein
	{
		name = "QPLUS";
		farbe = HINTERGRUND_GRUEN;
		felder[0][0].push_back(Position(0, 0));//#_
		felder[0][0].push_back(Position(0, 1));//##__
		felder[0][0].push_back(Position(1, 1));//##__
		felder[0][0].push_back(Position(0, 2));
		felder[0][0].push_back(Position(1, 2));


		felder[0][1].push_back(Position(0, 0));//###_
		felder[0][1].push_back(Position(1, 0));//##__
		felder[0][1].push_back(Position(2, 0));
		felder[0][1].push_back(Position(0, 1));
		felder[0][1].push_back(Position(1, 1));

		felder[0][2].push_back(Position(0, 0));//##__
		felder[0][2].push_back(Position(1, 0));//##__
		felder[0][2].push_back(Position(0, 1));//#_
		felder[0][2].push_back(Position(1, 1));
		felder[0][2].push_back(Position(1, 2));


		felder[0][3].push_back(Position(1, 0));//##_
		felder[0][3].push_back(Position(2, 0));//###__
		felder[0][3].push_back(Position(0, 1));
		felder[0][3].push_back(Position(1, 1));
		felder[0][3].push_back(Position(2, 1));


		


		felder[1][1].push_back(Position(1, 0));//#_
		felder[1][1].push_back(Position(0, 1));//##__
		felder[1][1].push_back(Position(1, 1));//##__
		felder[1][1].push_back(Position(0, 2));
		felder[1][1].push_back(Position(1, 2));

		felder[1][2].push_back(Position(0, 0));//##__
		felder[1][2].push_back(Position(1, 0));//###_
		felder[1][2].push_back(Position(0, 1));
		felder[1][2].push_back(Position(1, 1));
		felder[1][2].push_back(Position(2, 1));


		felder[1][3].push_back(Position(0, 0));//##__
		felder[1][3].push_back(Position(1, 0));//##__
		felder[1][3].push_back(Position(0, 1));//#_
		felder[1][3].push_back(Position(1, 1));
		felder[1][3].push_back(Position(1, 2));


		felder[1][4].push_back(Position(0, 0));//###__
		felder[1][4].push_back(Position(1, 0));//##_
		felder[1][4].push_back(Position(2, 0));
		felder[1][4].push_back(Position(1, 1));
		felder[1][4].push_back(Position(2, 1));

		break;
	}
	case SPIELSTEIN_T:
	{
		name = "T";
		farbe = HINTERGRUND_HELL_GELB;
		felder[0][0].push_back(Position(1, 0));//#_
		felder[0][0].push_back(Position(0, 1));//###_
		felder[0][0].push_back(Position(1, 1));
		felder[0][0].push_back(Position(2, 1));
		
		felder[0][1].push_back(Position(0, 0));//#_
		felder[0][1].push_back(Position(0, 1));//##__
		felder[0][1].push_back(Position(1, 1));//#
		felder[0][1].push_back(Position(2, 0));

		felder[0][2].push_back(Position(1, 0));//###_
		felder[0][2].push_back(Position(0, 0));//#_
		felder[0][2].push_back(Position(1, 1));
		felder[0][2].push_back(Position(2, 0));

		felder[0][3].push_back(Position(1, 0));//#_
		felder[0][3].push_back(Position(0, 1));//##__
		felder[0][3].push_back(Position(1, 1));//#_
		felder[0][3].push_back(Position(1, 2));




		felder[1][0].push_back(Position(1, 0));//#_
		felder[1][0].push_back(Position(0, 1));//###_
		felder[1][0].push_back(Position(1, 1));
		felder[1][0].push_back(Position(2, 1));

		felder[1][1].push_back(Position(0, 0));//#_
		felder[1][1].push_back(Position(0, 1));//##__
		felder[1][1].push_back(Position(1, 1));//#
		felder[1][1].push_back(Position(2, 0));

		felder[1][2].push_back(Position(1, 0));//###_
		felder[1][2].push_back(Position(0, 0));//#_
		felder[1][2].push_back(Position(1, 1));
		felder[1][2].push_back(Position(2, 0));

		felder[1][2].push_back(Position(1, 0));//#_
		felder[1][2].push_back(Position(0, 1));//##__
		felder[1][2].push_back(Position(1, 1));//#_
		felder[1][2].push_back(Position(1, 2));
		break;
	}
	case SPIELSTEIN_TPLUS:  //T stein mit eins extra
	{
		name = "TPLUS";
		farbe = HINTERGRUND_HELL_ROT;
		felder[0][0].push_back(Position(1, 0));//#_
		felder[0][0].push_back(Position(0, 1));//####
		felder[0][0].push_back(Position(1, 1));
		felder[0][0].push_back(Position(2, 1));
		felder[0][0].push_back(Position(3, 1));

		felder[0][1].push_back(Position(0, 0));//#_
		felder[0][1].push_back(Position(0, 1));//##__
		felder[0][1].push_back(Position(1, 1));//#
		felder[0][1].push_back(Position(0, 2));//#
		felder[0][1].push_back(Position(0, 3));

		felder[0][0].push_back(Position(0, 0));//####_
		felder[0][0].push_back(Position(1, 0));//_#_
		felder[0][0].push_back(Position(2, 0));
		felder[0][0].push_back(Position(3, 0));
		felder[0][0].push_back(Position(2, 1));

		felder[0][1].push_back(Position(1, 0));//#_
		felder[0][1].push_back(Position(1, 1));//#_
		felder[0][1].push_back(Position(0, 2));//##__
		felder[0][1].push_back(Position(1, 2));//#_
		felder[0][1].push_back(Position(1, 3));



		felder[0][0].push_back(Position(2, 0));//_#
		felder[0][0].push_back(Position(0, 1));//####
		felder[0][0].push_back(Position(1, 1));
		felder[0][0].push_back(Position(2, 1));
		felder[0][0].push_back(Position(3, 1));

		felder[0][1].push_back(Position(0, 0));//#_
		felder[0][1].push_back(Position(0, 1));//#_
		felder[0][1].push_back(Position(0, 2));//##
		felder[0][1].push_back(Position(1, 2));//#
		felder[0][1].push_back(Position(0, 3));

		felder[0][0].push_back(Position(0, 0));//####_
		felder[0][0].push_back(Position(1, 0));//#__
		felder[0][0].push_back(Position(2, 0));
		felder[0][0].push_back(Position(3, 0));
		felder[0][0].push_back(Position(1, 1));

		felder[0][1].push_back(Position(1, 0));//#_
		felder[0][1].push_back(Position(0, 1));//##__
		felder[0][1].push_back(Position(1, 1));//#_
		felder[0][1].push_back(Position(1, 2));//#_
		felder[0][1].push_back(Position(1, 3));
		
		break;
	}
	case SPIELSTEIN_FREI:
	{
		name = "FREI";
		farbe = HINTERGRUND_HELL_GRAU;
		break;
	}
	case SPIELSTEIN_LOESUNG:
	{
		name = "LOESUNG";
		farbe = HINTERGRUND_HELL_WEISS;
		break;
	}
	default:
		break;
	}
}

void Spielstein::zeichne()
{
	Cursor::setze_Farbe(farbe);
	for (auto i = 0; i < felder[seite][orientierung].size(); i++)
	{
			Console::zeichne_punkt(felder[seite][orientierung].at(i).getX(),felder[seite][orientierung].at(i).getY(), CONFIGURATION::SPIELFELD_HINTERGRUND_SYMBOL);
	}
	Cursor::setze_Farbe(CURSOR_SCHWARZ);
			
	
}
void Spielstein::loesche()
{
	Cursor::setze_Farbe(CURSOR_SCHWARZ);
	for (auto i = 0; i < felder[seite][orientierung].size(); i++)
	{
			Console::zeichne_punkt(felder[seite][orientierung].at(i).getX() + position.getX(),felder[seite][orientierung].at(i).getY() + position.getY(), CONFIGURATION::SPIELFELD_HINTERGRUND_SYMBOL);
	}
	
}


void Spielstein::bewegen(int richtung)
{
	switch (richtung)
	{
	case CONFIGURATION::SPIELSTEIN_BEWEGEN_HOCH:
		position.setY(position.getY() - 1);
		break;
	case CONFIGURATION::SPIELSTEIN_BEWEGEN_RUNTER:
		position.setY(position.getY() + 1);
		break;
	case CONFIGURATION::SPIELSTEIN_BEWEGEN_RECHTS:
		position.setX(position.getX() - 1);
		break;
	case CONFIGURATION::SPIELSTEIN_BEWEGEN_LINKS:
		position.setY(position.getY() + 1);
		break;
	default:
		break;
	}
}

//Inkrementiert das Attribut orientierung um 1, wobei stets Werte zwischen 0 und 3 angenommen werden.
void Spielstein::rotation_rechts()
{
	
}

//Dekrementiert das Attribut orientierung um 1, wobei stets Werte zwischen 0 und 3 angenommen werden.
void Spielstein::rotation_links()
{
	//IHR CODE
}
//Inkrementiert das Attribut seite um 1, wobei stets Werte zwischen 0 und 1 angenommen werden.
void Spielstein::flip()
{
	
	switch (orientierung)
	{
	case 1:
		orientierung = 0;
		break;
	case 0:
		orientierung = 1;
		break;
	default:
		orientierung = 0;
		break;
	}

	
}

//Gibt den felder Vektor der aktuellen Lage des Spielsteins zur�ck.
std::vector<Position>* Spielstein::getPositionen()
{
	return &felder[seite][orientierung];
}

//Durchl�uft den felder Vektor des Spielsteins in aktueller Lage.
//Gibt true zur�ck, falls die �bergebene Position innerhalb des Spielsteines liegt.
//Ansonsten wird false zur�ckgegeben.
bool Spielstein::innerhalb(Position pos) const
{
	//IHR CODE
	return true;
}

//Gibt war zur�ck, falls sich der aufrufende und der �bergebene Spielstein sich in mindestens einer Position �berlappen.
bool Spielstein::ueberlapp(Spielstein& sp) 
{
	//IHR CODE
	return true;
}

//Addiert zwei Spielsteine in ihrer aktuellen Lage und gibt die Summe als neuen Spielstein zur�ck.
Spielstein Spielstein::operator+ (const Spielstein& rhs) const
{
	Spielstein summe(SPIELSTEIN_FREI);
	//IHR CODE
	return summe;
}