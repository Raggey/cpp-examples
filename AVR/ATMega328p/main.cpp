
#define F_CPU 1000000UL

#include <avr/io.h>
#include <util/delay.h>

 //Arduino Uno used PortB pin 5 as its internal LED


// Thanks to https://github.com/tzhenghao/blink-ATmega328p for the reference

// avr-gcc -mmcu=atmega328p -Wall -Os -o blink.elf main.cpp 
// avr-objcopy -j .text -j .data -O ihex blink.elf blink.hex   
// avrdude -c arduino -p m328p -P /dev/COM3 -U flash:w:blink.hex  

int main(){

   DDRB |= (1 << PB5); //Set the data direction register

	while(1) 
	{
		PORTB ^= (1 << PB5); // Toggle Port B pin 5
		_delay_ms(1000);
		_delay_ms(1000);
		_delay_ms(1000);
		_delay_ms(1000);
	}
    

}