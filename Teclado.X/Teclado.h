

void tecla_1();
void tecla_2();
void tecla_3();
void tecla_4();
void tecla_5();
void tecla_6();
void tecla_7();
void tecla_8();
void tecla_9();
void tecla_0();
void tecla_A();
void tecla_B();
void tecla_C();
void tecla_D();
void tecla_aste();
void tecla_gato();

unsigned char val=20,x=0;
void int_teclado();
unsigned char Inkey(void);
void case_teclado();
void registro_teclado();
void menu_teclado();
void inicio_teclado();
void registro_teclado();
void agregar_teclado();
void alarma_teclado();

unsigned char Inkey(void){
    
  
    TRISB = 0xF0;
    PORTB = 0xFF;
    lcd_init();
    PORTBbits.RB0=0;
    if(PORTBbits.RB4==0){tecla_1(); val=0;}
    if(PORTBbits.RB5==0){tecla_2(); val=1;}
    if(PORTBbits.RB6==0){tecla_3(); val=2;}
    if(PORTBbits.RB7==0){tecla_A(); val=3;}
    PORTBbits.RB0=1;
    //--------------------------------------
    PORTBbits.RB1=0;
    if(PORTBbits.RB4==0){tecla_4(); val=4;}
    if(PORTBbits.RB5==0){tecla_5(); val=5;}
    if(PORTBbits.RB6==0){tecla_6(); val=6;}
    if(PORTBbits.RB7==0){tecla_B(); val=7;}
    PORTBbits.RB1=1;
    //-------------------------------------
    PORTBbits.RB2=0;
    if(PORTBbits.RB4==0){tecla_7(); val=8;}
    if(PORTBbits.RB5==0){tecla_8(); val=9;}
    if(PORTBbits.RB6==0){tecla_9(); val=10;}
    if(PORTBbits.RB7==0){tecla_C(); val=11;}
    PORTBbits.RB2=1;
    //-------------------------------------
    PORTBbits.RB3=0;
    if(PORTBbits.RB4==0){tecla_aste(); val=12;}
    if(PORTBbits.RB5==0){tecla_0(); val=13;}
    if(PORTBbits.RB6==0){tecla_gato(); val=14;}
    if(PORTBbits.RB7==0){tecla_D(); val=15;}
    PORTBbits.RB3=1;

    return val;
}

 void int_teclado()
{            
    INTCON2bits.RBPU=0; // resistencias pull-up
    ANSELB=0;
}
 
 
 void menu_teclado(){
     Inkey();
     while(val!=20){
     Inkey();    
     lcd_init();
     lcd_clear_display();
     lcd_print("Escoge opcion");
   
     switch(val){
     
         case 3 : inicio_teclado();
         break;
         
         case 7 : registro_teclado();
         break;
         
         case 11 : agregar_teclado();
         break;
         
         case 15 : alarma_teclado();
         break;
         
     }
         
     
     };

    
     
 }
 
 
 
 
 void inicio_teclado()
 {    
  
     
     while(val!=14){
     lcd_init();
     lcd_clear_display();
     lcd_print("Inicio");
     Inkey();
     };val=20;

 }
 
  void registro_teclado()
 {    

     while(val!=14){
     lcd_init();
     lcd_clear_display();
     lcd_print("Registro");
     Inkey();
     };val=20;
 }

 
 
 
 
void agregar_teclado(){
     while(val!=14){
     lcd_init();
     lcd_clear_display();
     lcd_print("Agregar");
     Inkey();
     };val=20;
}





void alarma_teclado(){
     while(val!=14){
     lcd_init();
     lcd_clear_display();
     lcd_print("Alarma");
     Inkey();
     };val=20;
}