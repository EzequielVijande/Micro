
#include "micro.h"


typedef struct  //definicion de un puerto de 16 bits 
{
	char porta;
	char portb;
	
}portd_t;



int main(void)
{
	int valido= VALIDO;
	char tecla;
	portd_t portd;

	imprimir_instrucciones();

	while(valido)
	{
		imprimir_estado_del_puerto((void*) (&(portd.porta)) ); //imprime el estado del puerto A
		imprimir_presionar_tecla();
		tecla= get_input();
		valido= validacion_input(tecla);

		while(!valido) //si la tecla ingresada no es valida avisa en pantalla
						//y da la oportunidad de reingrsar otra tecla
		{
			imprimir_formato_equivocado();
			tecla= get_input();
			valido= validacion_input(tecla);
		}

		switch(tecla)
		{
			case PRENDER:
<<<<<<< HEAD
				mask_on((void*) (&(portd.porta)) , ON, PORTA);
=======
				mask_on((void*) (&(portd.porta)) , ON);
>>>>>>> 74a6a28d857b2a76e315e3f4547818942cfbb77a
				break;
		

			case APAGAR:
<<<<<<< HEAD
				mask_off((void*) (&(portd.porta)) , ON, PORTA );
=======
				mask_off((void*) (&(portd.porta)) , ON );
>>>>>>> 74a6a28d857b2a76e315e3f4547818942cfbb77a
				break;

			case PARPADEAR:
				parpadear( (void*)(&(portd.porta)) );

				break;

			case TERMINAR:
				valido=INVALIDO;

				break;
		
			default: 
				bitset( (void*)(&(portd.porta)), (int)(tecla-'0') ); //Prende el numero de bit ingresado.
		}
	}
	
	return 0;
	
	
}




