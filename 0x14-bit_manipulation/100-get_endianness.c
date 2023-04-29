#include <stdio.h>
#include <stdint.h>
/**
 * get_endianness - checks the endianness of the machine
 *
 * This function checks the endianness of the machine by creating a
 * union with a 32-bit integer and an array of 4 bytes. It sets the
 * value of the integer to 1 and checks the value of the first byte
 * in the array. If the value is 1, the machine is little-endian.
 * If the value is 0, the machine is big-endian.
 *
 * Return: 0 if big-endian, 1 if little-endian
 */
int get_endianness(void)
{
union
{
uint32_t i;
char c[4];
}
u;

u.i = 1;

return u.c[0] == 1;
}

