#ifndef FLAGS_H
#define FLAGS_H
#include <stdint.h>
#include <stdbool.h>

typedef struct flags{
    uint8_t p:1; //parity
    uint8_t z:1; //zero 
    uint8_t s:1; //minus sign
    uint8_t cy:1; //carry
    uint8_t ac:1; //auxiliary carry
}Flags;

void test_normal_flags(Flags *flags, uint8_t result);

void test_carry_flag8(Flags *flags, uint16_t result);

void test_carry_flag16(Flags *flags, uint32_t result);

void test_flag_ac(Flags *flags, uint8_t value, uint8_t operand, uint8_t carry);

uint8_t flags_load_byte(Flags *flags);

void flags_sta_byte(Flags *flags, uint8_t flags_reg);

#endif
