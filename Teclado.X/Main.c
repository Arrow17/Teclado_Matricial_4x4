/*
 * File:   Main.c
 * Author: francisco
 *
 * Created on 18 de marzo de 2019, 10:46 PM
 */

#include <xc.h>
#include "LCD.h"
#include "configuracion.h"
#include "teclado.h"
#define _XTAL_FREQ 4000000


void main(void) {

  
    inicio_teclado();

    while(1){
    Inkey();
    
    }
    return;
}
