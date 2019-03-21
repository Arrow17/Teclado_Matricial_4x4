
unsigned char val=0;
void inicio_teclado();
unsigned char Inkey(void);
void registro_teclado();
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


unsigned char Inkey(void){
    
  
    TRISB = 0xF0;
    PORTB = 0xFF;
    lcd_init();
        //lcd_clear_display();
    PORTBbits.RB0=0;
    if(PORTBbits.RB4==0){tecla_1(); val=0;}
    if(PORTBbits.RB5==0){tecla_2(); val=1;}
    if(PORTBbits.RB6==0){tecla_3(); val=2;}
    if(PORTBbits.RB7==0){tecla_A(); val=3;}
    PORTBbits.RB0=1;
    //--------------------------------------
    PORTBbits.RB1=0;
    if(PORTBbits.RB4==0){tecla_4(); val=0;}
    if(PORTBbits.RB5==0){tecla_5(); val=1;}
    if(PORTBbits.RB6==0){tecla_6(); val=2;}
    if(PORTBbits.RB7==0){tecla_B(); val=3;}
    PORTBbits.RB1=1;
    //-------------------------------------
    PORTBbits.RB2=0;
    if(PORTBbits.RB4==0){tecla_7(); val=0;}
    if(PORTBbits.RB5==0){tecla_8(); val=1;}
    if(PORTBbits.RB6==0){tecla_9(); val=2;}
    if(PORTBbits.RB7==0){tecla_C(); val=3;}
    PORTBbits.RB2=1;
    //-------------------------------------
    PORTBbits.RB3=0;
    if(PORTBbits.RB4==0){tecla_aste(); val=0;}
    if(PORTBbits.RB5==0){tecla_0(); val=1;}
    if(PORTBbits.RB6==0){tecla_gato(); val=2;}
    if(PORTBbits.RB7==0){tecla_D(); val=3;}
    PORTBbits.RB3=1;

    return val;
}

 void inicio_teclado(){
    
            
    INTCON2bits.RBPU=0; // resistencias pull-up
    ANSELB=0;
}

 void registro_teclado(){
      TRISB = 0xF0;
      PORTB = 0xFF;
      lcd_init();
      lcd_clear_display();
      lcd_print("¿Desea hacer" ); __delay_ms(250);
      lcd_clear_display();
      lcd_goto(2,6);
      lcd_print("un registro?"); __delay_ms(250);
      lcd_clear_display();
      lcd_goto(2,2);
      lcd_print("*/Si o #/Cont.");__delay_ms(500); __delay_ms(500);
      
      
      PORTBbits.RB0=0;
      if(PORTBbits.RB4==0){lcd_clear_display();lcd_print("iniciando reg.");__delay_ms(10);};
      
      PORTBbits.RB0=1;
     
//    TRISB = 0xF0;
//    PORTB = 0xFF;
//    lcd_init();   
//    PORTBbits.RB0=0;
//    if(PORTBbits.RB4==0){lcd_print("1");};
//    if(PORTBbits.RB5==0){lcd_print("2");};
//    PORTBbits.RB0=1;
//    PORTBbits.RB3=0;
//   if( PORTBbits.RB4==0){lcd_clear_display();};
//    PORTBbits.RB3=1;
     
 }

    
    
 void tecla_1(){
     lcd_clear_display();
     lcd_print("1");
 }
 
  void tecla_2(){
     lcd_clear_display();
     lcd_print("2");
 }
  void tecla_3(){
     lcd_clear_display();
     lcd_print("3");
     
 }
   void tecla_A(){
     lcd_clear_display();
     lcd_print("A");
 }
 void tecla_4(){
     lcd_clear_display();
     lcd_print("4");
 }   
  void tecla_5(){
     lcd_clear_display();
     lcd_print("5");
 }
  
  void tecla_6(){
     lcd_clear_display();
     lcd_print("6");
 } 
  
 void tecla_B(){
     lcd_clear_display();
     lcd_print("B");
 }  
 
 void tecla_7(){
     lcd_clear_display();
     lcd_print("7");
 }
 
 void tecla_8(){
     lcd_clear_display();
     lcd_print("8");
 }
 
 void tecla_9(){
     lcd_clear_display();
     lcd_print("9");
 }
 
  void tecla_C(){
     lcd_clear_display();
     lcd_print("C");
 }
  
  void tecla_aste(){
     lcd_clear_display();
     lcd_print("*");
 }  
  
void tecla_0(){
     lcd_clear_display();
     lcd_print("0");
 } 

 void tecla_gato(){
     lcd_clear_display();
     lcd_print("#");
 }
 
 void tecla_D(){
     lcd_clear_display();
     lcd_print("D");
 }