/*
  nixiedriver.cpp
  Class to handle a BCD to Digital nixie driver IC.
  
  Compatible with K155ID1, SN74141 & MH74141 chips.
  
  Please see https://idyl.io for complete tutorial on how this works.
  
  This example code is licensed under CC BY 4.0.
  Please see https://creativecommons.org/licenses/by/4.0/

  modified 5th February 2017
  by Tony Pottier
  
*/

#include <stdint.h>
#include <arduino.h>
#include "nixiedriver.h"



void NixieDriver::NixieDriver(uint8_t a, uint8_t b, uint8_t c, uint8_t d){
	this->_a = a;
	this->_b = b;
	this->_c = c;
	this->_d = d;
}

void NixieDriver::setup(){
	pinMode(_a, OUTPUT);
	pinMode(_b, OUTPUT);
	pinMode(_c, OUTPUT);
	pinMode(_d, OUTPUT);
}

void NixieDriver::write(uint8_t value){
	
	//D is HIGH bit
	//A is LOW bit
	if(value <= 9){
		digitalWrite(_d, (value & 0x08) >> 3);
		digitalWrite(_c, (value & 0x04) >> 2);
		digitalWrite(_b, (value & 0x02) >> 1);
		digitalWrite(_a, (value & 0x01));
	}
	
	
}