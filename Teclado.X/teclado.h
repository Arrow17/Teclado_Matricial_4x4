


unsigned char val=0;


unsigned char Inkey(void){
    
  
    TRISB = 0xF0;
    PORTB = 0xFF;
    lcd_init();
        //lcd_clear_display();
    PORTBbits.RB0=0;
    if(PORTBbits.RB4==0)
    {
    
        lcd_clear_display();
        lcd_print("1");
        
        val=0;
    }
        if(PORTBbits.RB5==0)
    {
     
        lcd_clear_display();
        lcd_print("2");
        
        val=1;
    }
     if(PORTBbits.RB6==0)
    {
      
        lcd_clear_display();
        lcd_print("3");
        
        val=2;
    }
    if(PORTBbits.RB7==0)
    {
   
        lcd_clear_display();
        lcd_print("A");
        
        val=3;
    }
    PORTBbits.RB0=1;
     
    PORTBbits.RB1=0;
    if(PORTBbits.RB4==0)
    {
       
        lcd_clear_display();
        lcd_print("4");
        
        val=4;
    }
        if(PORTBbits.RB5==0)
    {
       
        lcd_clear_display();
        lcd_print("5");
        
        val=5;
    }
     if(PORTBbits.RB6==0)
    {
       
        lcd_clear_display();
        lcd_print("6");
        
        val=6;
    }
    if(PORTBbits.RB7==0)
    {
      
        lcd_clear_display();
        lcd_print("B");
        
        val=7;
    }
    PORTBbits.RB1=1;
    
   
     
    PORTBbits.RB2=0;
    if(PORTBbits.RB4==0)
    {
       
        lcd_clear_display();
        lcd_print("7");
        
        val=7;
    }
        if(PORTBbits.RB5==0)
    {
        
        lcd_clear_display();
        lcd_print("8");
        
        val=8;
    }
     if(PORTBbits.RB6==0)
    {
       
        lcd_clear_display();
        lcd_print("9");
        
        val=9;
    }
    if(PORTBbits.RB7==0)
    {
        
        lcd_clear_display();
        lcd_print("C");
        
        val=10;
    }
    PORTBbits.RB2=1;
    
    
     
    PORTBbits.RB3=0;
    if(PORTBbits.RB4==0)
    {
        
        lcd_clear_display();
        lcd_print("*");
        
        val=11;
    }
        if(PORTBbits.RB5==0)
    {
        
        lcd_clear_display();
        lcd_print("0");
        
        val=12;
    }
     if(PORTBbits.RB6==0)
    {
     
        lcd_clear_display();
        lcd_print("#");
        
        val=13;
    }
    if(PORTBbits.RB7==0)
    {
      
        lcd_clear_display();
        lcd_print("D");
        
        val=14;
    }
    PORTBbits.RB3=1;

    return val;
}

void inicio_teclado(){
    
            
    INTCON2bits.RBPU=0; // resistencias pull-up
    ANSELB=0;
}



    
    
