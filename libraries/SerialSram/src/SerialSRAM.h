/*
-------------------------------------------------------------------------------
	SerialSRam Lib
-------------------------------------------------------------------------------
	File created by: webmaster442
	https://github.com/webmaster442/ArduinoExtensions
-------------------------------------------------------------------------------
*/
#ifndef SERIAL_SRAM_H
#define SERIAL_SRAM_H

#include <arduino.h>
#include "pins_arduino.h"

#define SRAM_CMD_READ	0x03
#define SRAM_CMD_WRITE	0x02

class SerialRam
{
	private:
		uint32_t _addr;
		uint8_t _cspin;
	public:
		SerialRam(int CS);
		uint8_t Read();
		uint32_t Read(uint8_t array[], uint32_t startindex, uint32_t count);
		int16_t ReadInt();
		void Write(uint8_t data);
		void Write(uint8_t array[], uint32_t startindex, uint32_t count);
		void WriteInt(int16_t data);
		uint32_t Address();
		void Address(uint32_t addr);
		uint32_t Readln(char *array, uint32_t max_length);
		void Println(char *text);
};

#endif