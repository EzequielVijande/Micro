//Modulo que contiene las funciones que alteran el estado de los
//bits del puerto.


#ifndef BITMASK_H
#define BITMASK_H

#include"const.h"
#include <unistd.h>
<<<<<<< HEAD
#include <stdint.h>


void mask_toggle(void* p_port, uint16_t mask, char port);
//Recibe la direccion de un puerto y una mascara de un byte.
//Tambien recibe una letra que indica que puerto se utiliza.
=======


void mask_toggle(void* port, char mask);
//Recibe la direccion de un puerto y una mascara de un byte.
>>>>>>> 74a6a28d857b2a76e315e3f4547818942cfbb77a
//Invierte el estado de los bits del puerto que se encuentran
//prendidos en la mascara.No altera el estado de los demas bits.


<<<<<<< HEAD
void mask_on(void* p_port, uint16_t mask, char port);
//Recibe la direccion de un puerto y una mascara de un byte.
//Tambien recibe una letra que indica que puerto se utiliza.
//Prende todos los bits que estan prendidos en la mascara y
//deja los demas como estaban.

void mask_off(void* p_port, uint16_t mask, char port );
//Recibe la direccion de un puerto y una mascara de un byte.
//Tambien recibe una letra que indica que puerto se utiliza.
=======
void mask_on(void* port, char mask);
//Recibe la direccion de un puerto y una mascara de un byte.
//Prende todos los bits que estan prendidos en la mascara y
//deja los demas como estaban.

void mask_off(void* port, char mask );
//Recibe la direccion de un puerto y una mascara de un byte.
>>>>>>> 74a6a28d857b2a76e315e3f4547818942cfbb77a
//Apaga todos los bits que se encuentran prendidos en la mascara
//sin alterar los demas bits.

void bitset( void* port, int nbit);
//funcion que enciende el bit indicado y deja todos como estaban antes.


<<<<<<< HEAD
void bitclr( void* p_port, int nbit);
=======
void bitclr( void* port, int nbit);
>>>>>>> 74a6a28d857b2a76e315e3f4547818942cfbb77a
//funcion que apaga el bit indicado y deja todos como estaban antes.

void bit_toggle(void* port, int nbit);
//funcion que invierte el estado de un bit, si esta apagado lo prende
//y vice versa.

void parpadear(void*);
//Funcion que hace parpadear a los LED del puerto A.

#endif //BITMASK_H

