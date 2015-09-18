#include <wiringPi.h>
#include <stdio.h>
#include <stdlib.h>

#define GPIO_PIN 29 /* Pin 40 / GPIO 21 */
#define TRUE 1
#define FALSE 0
#define ON TRUE
#define OFF FALSE

void wiringpi_init() {
	if (wiringPiSetup() == -1)
		exit(EXIT_FAILURE);
	
	pinMode(GPIO_PIN, OUTPUT);
}

void wiringpi_led_on() {
	digitalWrite(GPIO_PIN, ON);
}

void wiringpi_led_off() {
	digitalWrite(GPIO_PIN, OFF);
}

void wiringpi_delay(long t) {
	delay(t);
}

int main() {
	wiringpi_init();
	while(1) {
		wiringpi_led_on();		
		wiringpi_delay(500);
		wiringpi_led_off();
		wiringpi_delay(500);
	}
}
