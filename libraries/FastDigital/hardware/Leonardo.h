/*
-------------------------------------------------------------------------------
	Fast Digital I/O functions
	Supported controllers:
		ATmega32U4
-------------------------------------------------------------------------------
	File created by: webmaster442
	https://github.com/webmaster442/ArduinoExtensions
-------------------------------------------------------------------------------
*/

#ifndef Leonardo_h
#define Leonardo_h

__inline__ void WriteD0(int value)
{
	if (value) PORTD |= 1 << 2;
	else PORTD &= ~(1 << 2);
}

__inline__ int ReadD0()
{
	return PIND & (1 << 2);
}

__inline__ void WriteD1(int value)
{
	if (value) PORTD |= 1 << 3;
	else PORTD &= ~(1 << 3);
}

__inline__ int ReadD1()
{
	return PIND & (1 << 3);
}

__inline__ void WriteD2(int value)
{
	if (value) PORTD |= 1 << 1;
	else PORTD &= ~(1 << 1);
}

__inline__ int ReadD2()
{
	return PIND & (1 << 1);
}

__inline__ void WriteD3(int value)
{
	PWMOff(3);
	if (value) PORTD |= 1 << 0;
	else PORTD &= ~(1 << 0);
}

__inline__ int ReadD3()
{
	PWMOff(3);
	return PIND & (1 << 0);
}

__inline__ void WriteD4(int value)
{
	if (value) PORTD |= 1 << 4;
	else PORTD &= ~(1 << 4);
}

__inline__ int ReadD4()
{
	return PIND & (1 << 4);
}

__inline__ void WriteD5(int value)
{
	PWMOff(5);
	if (value) PORTC |= 1 << 6;
	else PORTC &= ~(1 << 6);
}

__inline__ int ReadD5()
{
	PWMOff(5);
	return PINC & (1 << 6);
}

__inline__ void WriteD6(int value)
{
	PWMOff(6);
	if (value) PORTD |= 1 << 7;
	else PORTD &= ~(1 << 7);
}

__inline__ int ReadD6()
{
	PWMOff(6);
	return PIND & (1 << 7);
}

__inline__ void WriteD7(int value)
{
	if (value) PORTE |= 1 << 6;
	else PORTE &= ~(1 << 6);
}

__inline__ int ReadD7()
{
	return PINE & (1 << 6);
}

__inline__ void WriteD8(int value)
{
	if (value) PORTB |= 1 << 4;
	else PORTB &= ~(1 << 4);
}

__inline__ int ReadD8()
{
	return PINB & (1 << 4);
}

__inline__ void WriteD9(int value)
{
	PWMOff(9);
	if (value) PORTB |= 1 << 5;
	else PORTB &= ~(1 << 5);
}

__inline__ int ReadD9()
{
	PWMOff(9);
	return PINB & (1 << 5);
}

__inline__ void WriteD10(int value)
{
	PWMOff(10);
	if (value) PORTB |= 1 << 6;
	else PORTB &= ~(1 << 6);
}

__inline__ int ReadD10()
{
	PWMOff(10);
	return PINB & (1 << 6);
}

__inline__ void WriteD11(int value)
{
	PWMOff(11);
	if (value) PORTB |= 1 << 7;
	else PORTB &= ~(1 << 7);
}

__inline__ int ReadD11()
{
	PWMOff(11);
	return PINB & (1 << 7);
}

__inline__ void WriteD12(int value)
{
	if (value) PORTD |= 1 << 6;
	else PORTD &= ~(1 << 6);
}

__inline__ int ReadD12()
{
	return PIND & (1 << 6);
}

__inline__ void WriteD13(int value)
{
	if (value) PORTC |= 1 << 7;
	else PORTC &= ~(1 << 7);
}

__inline__ int ReadD13()
{
	return PINC & (1 << 7);
}

__inline__ void WriteA0(int value)
{
	if (value) PORTF |= 1 << 7;
	else PORTF &= ~(1 << 7);
}

__inline__ int ReadA0()
{
	return PINF & (1 << 7);
}

__inline__ void WriteA1(int value)
{
	if (value) PORTF |= 1 << 6;
	else PORTF &= ~(1 << 6);
}

__inline__ int ReadA1()
{
	return PINF & (1 << 6);
}

__inline__ void WriteA2(int value)
{
	if (value) PORTF |= 1 << 5;
	else PORTF &= ~(1 << 5);
}

__inline__ int ReadA2()
{
	return PINF & (1 << 5);
}

__inline__ void WriteA3(int value)
{
	if (value) PORTF |= 1 << 4;
	else PORTF &= ~(1 << 4);
}

__inline__ int ReadA3()
{
	return PINF & (1 << 4);
}

__inline__ void WriteA4(int value)
{
	if (value) PORTF |= 1 << 1;
	else PORTF &= ~(1 << 1);
}

__inline__ int ReadA4()
{
	return PINF & (1 << 1);
}

__inline__ void WriteA5(int value)
{
	if (value) PORTF |= 1 << 0;
	else PORTF &= ~(1 << 0);
}

__inline__ int ReadA5()
{
	return PINF & (1 << 0);
}

__inline__ void WriteA6(int value)
{
	if (value) PORTD |= 1 << 4;
	else PORTD &= ~(1 << 4);
}

__inline__ int ReadA6()
{
	return PIND & (1 << 4);
}

__inline__ void WriteA7(int value)
{
	if (value) PORTD |= 1 << 7;
	else PORTD &= ~(1 << 7);
}

__inline__ int ReadA7()
{
	return PIND & (1 << 7);
}

__inline__ void WriteA8(int value)
{
	if (value) PORTB |= 1 << 4;
	else PORTB &= ~(1 << 4);
}

__inline__ int ReadA8()
{
	return PINB & (1 << 4);
}

__inline__ void WriteA9(int value)
{
	if (value) PORTB |= 1 << 5;
	else PORTB &= ~(1 << 5);
}

__inline__ int ReadA9()
{
	return PINB & (1 << 5);
}

__inline__ void WriteA10(int value)
{
	if (value) PORTB |= 1 << 6;
	else PORTB &= ~(1 << 6);
}

__inline__ int ReadA10()
{
	return PINB & (1 << 6);
}

__inline__ void WriteA11(int value)
{
	if (value) PORTD |= 1 << 6;
	else PORTD &= ~(1 << 6);
}

__inline__ int ReadA11()
{
	return PIND & (1 << 6);
}

void FastWrite(int pin, int value)
{
	switch (pin)
	{
		case 0: WriteD0(value); break;
		case 1: WriteD1(value); break;
		case 2: WriteD2(value); break;
		case 3: WriteD3(value); break;
		case 4: WriteD4(value); break;
		case 5: WriteD5(value); break;
		case 6: WriteD6(value); break;
		case 7: WriteD7(value); break;
		case 8: WriteD8(value); break;
		case 9: WriteD9(value); break;
		case 10: WriteD10(value); break;
		case 11: WriteD11(value); break;
		case 12: WriteD12(value); break;
		case 13: WriteD13(value); break;
		case A0: WriteA0(value); break;
		case A1: WriteA1(value); break;
		case A2: WriteA2(value); break;
		case A3: WriteA3(value); break;
		case A4: WriteA4(value); break;
		case A5: WriteA5(value); break;
		case A6: WriteA6(value); break;
		case A7: WriteA7(value); break;
		case A8: WriteA8(value); break;
		case A9: WriteA9(value); break;
		case A10: WriteA10(value); break;
		case A11: WriteA11(value); break;
	}
}

int FastRead(int pin)
{
	switch (pin)
	{
		case 0: return ReadD0();
		case 1: return ReadD1();
		case 2: return ReadD2();
		case 3: return ReadD3();
		case 4: return ReadD4();
		case 5: return ReadD5();
		case 6: return ReadD6();
		case 7: return ReadD7();
		case 8: return ReadD8();
		case 9: return ReadD9();
		case 10: return ReadD10();
		case 11: return ReadD11();
		case 12: return ReadD12();
		case 13: return ReadD13();
		case A0: return ReadA0();
		case A1: return ReadA1();
		case A2: return ReadA2();
		case A3: return ReadA3();
		case A4: return ReadA4();
		case A5: return ReadA5();
		case A6: return ReadA6();
		case A7: return ReadA7();
		case A8: return ReadA8();
		case A9: return ReadA9();
		case A10: return ReadA10();
		case A11: return ReadA11();
	}
}

#endif