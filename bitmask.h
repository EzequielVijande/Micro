//Modulo que contiene las funciones que alteran el estado de los
//bits del puerto.


#ifndef BITMASK_H
#define BITMASK_H

#include"const.h"
#include <unistd.h>


void mask_toggle(void* port, char mask);
//Recibe la direccion de un puerto y una mascara de un byte.
//Invierte el estado de los bits del puerto que se encuentran
//prendidos en la mascara.No altera el estado de los demas bits.


void mask_on(void* port, char mask);
//Recibe la direccion de un puerto y una mascara de un byte.
//Prende todos los bits que estan prendidos en la mascara y
//deja los demas como estaban.

void mask_off(void* port, char mask );
//Recibe la direccion de un puerto y una mascara de un byte.
//Apaga todos los bits que se encuentran prendidos en la mascara
//sin alterar los demas bits.

void bitset( void* port, int nbit);
//funcion que enciende el bit indicado y deja todos como estaban antes.


void bitclr( void* port, int nbit);
//funcion que apaga el bit indicado y deja todos como estaban antes.

void bit_toggle(void* port, int nbit);
//funcion que invierte el estado de un bit, si esta apagado lo prende
//y vice versa.

void parpadear(void*);
//Funcion que hace parpadear a los LED del puerto A.

#endif //BITMASK_H

