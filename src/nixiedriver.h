/*
  nixiedriver.h
  Class to handle a BCD to Digital nixie driver IC.
  
  Compatible with K155ID1, SN74141 & MH74141 chips.
  
  Please see https://idyl.io for complete tutorial on how this works.
  
  This example code is licensed under CC BY 4.0.
  Please see https://creativecommons.org/licenses/by/4.0/

  modified 5th February 2017
  by Tony Pottier
  
*/



class NixieDriver{
	private:
		uint8_t _a;
		uint8_t _b;
		uint8_t _c;
		uint8_t _d;
	public:
		NixieDriver(uint8_t a, uint8_t b, uint8_t c, uint8_t d);
		void setup();
		void write(uint8_t value);
	
};