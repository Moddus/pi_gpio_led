INCLUDE_DIRECTORIES(../libs/wiringPi/wiringPi)

ADD_EXECUTABLE (pi_led
	main.c)

TARGET_LINK_LIBRARIES (pi_led 
	wiringPi) 

