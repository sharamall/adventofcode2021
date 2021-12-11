#include <stdlib.h>
#include "day3.h"
#include <string.h>

int *alloc_input(void) {
    int *input = malloc(sizeof(int) * 1000);
    int i = 0;
    input[i++] = 0b111100101100;
    input[i++] = 0b101100110001;
    input[i++] = 0b100110100101;
    input[i++] = 0b001101100010;
    input[i++] = 0b010111011110;
    input[i++] = 0b000111001100;
    input[i++] = 0b001000011010;
    input[i++] = 0b110111000100;
    input[i++] = 0b101011101011;
    input[i++] = 0b111100111010;
    input[i++] = 0b111101011001;
    input[i++] = 0b011000010010;
    input[i++] = 0b101011001000;
    input[i++] = 0b010011001001;
    input[i++] = 0b110001001100;
    input[i++] = 0b001010010010;
    input[i++] = 0b010111001010;
    input[i++] = 0b000000001001;
    input[i++] = 0b001001010001;
    input[i++] = 0b011100010111;
    input[i++] = 0b001110111100;
    input[i++] = 0b001110010010;
    input[i++] = 0b000101100100;
    input[i++] = 0b010101110001;
    input[i++] = 0b110100100011;
    input[i++] = 0b100001001001;
    input[i++] = 0b001011101011;
    input[i++] = 0b010010001100;
    input[i++] = 0b011001011011;
    input[i++] = 0b001111000011;
    input[i++] = 0b000000110110;
    input[i++] = 0b110011101010;
    input[i++] = 0b100110110010;
    input[i++] = 0b100000111101;
    input[i++] = 0b100000001110;
    input[i++] = 0b010101001110;
    input[i++] = 0b010111101101;
    input[i++] = 0b110001001110;
    input[i++] = 0b100100111100;
    input[i++] = 0b000001110001;
    input[i++] = 0b101100011101;
    input[i++] = 0b100010000001;
    input[i++] = 0b110010110100;
    input[i++] = 0b000010110011;
    input[i++] = 0b101010111011;
    input[i++] = 0b011000000110;
    input[i++] = 0b010000100111;
    input[i++] = 0b111011011101;
    input[i++] = 0b111100000010;
    input[i++] = 0b011010111011;
    input[i++] = 0b010101011100;
    input[i++] = 0b100011110001;
    input[i++] = 0b110011010100;
    input[i++] = 0b010101100000;
    input[i++] = 0b101101110011;
    input[i++] = 0b000011000100;
    input[i++] = 0b111000000110;
    input[i++] = 0b101110111001;
    input[i++] = 0b100111111011;
    input[i++] = 0b110011100101;
    input[i++] = 0b101010000111;
    input[i++] = 0b000011111010;
    input[i++] = 0b000001100100;
    input[i++] = 0b111000101110;
    input[i++] = 0b101001011110;
    input[i++] = 0b100101101001;
    input[i++] = 0b110100001100;
    input[i++] = 0b001010001000;
    input[i++] = 0b110110101000;
    input[i++] = 0b100101110100;
    input[i++] = 0b101000001011;
    input[i++] = 0b011111101100;
    input[i++] = 0b000110011100;
    input[i++] = 0b001001010101;
    input[i++] = 0b101000110010;
    input[i++] = 0b111101011101;
    input[i++] = 0b110010010000;
    input[i++] = 0b001100110110;
    input[i++] = 0b001111011111;
    input[i++] = 0b010001111110;
    input[i++] = 0b001110010111;
    input[i++] = 0b100101000101;
    input[i++] = 0b010100111010;
    input[i++] = 0b100011001000;
    input[i++] = 0b010110011001;
    input[i++] = 0b001001111010;
    input[i++] = 0b101101001001;
    input[i++] = 0b111010101101;
    input[i++] = 0b101001110001;
    input[i++] = 0b001001001110;
    input[i++] = 0b100100101110;
    input[i++] = 0b110111110100;
    input[i++] = 0b110100011000;
    input[i++] = 0b011001010010;
    input[i++] = 0b010111001100;
    input[i++] = 0b000100110000;
    input[i++] = 0b110001000100;
    input[i++] = 0b111010011011;
    input[i++] = 0b011111011101;
    input[i++] = 0b011110111100;
    input[i++] = 0b001101111010;
    input[i++] = 0b100010011101;
    input[i++] = 0b111000110111;
    input[i++] = 0b110110001010;
    input[i++] = 0b110000101010;
    input[i++] = 0b001101000011;
    input[i++] = 0b011010011101;
    input[i++] = 0b111100100010;
    input[i++] = 0b001001110110;
    input[i++] = 0b001001001011;
    input[i++] = 0b010010110100;
    input[i++] = 0b010101010110;
    input[i++] = 0b101000001110;
    input[i++] = 0b011011010100;
    input[i++] = 0b010000011010;
    input[i++] = 0b010001011110;
    input[i++] = 0b111100110011;
    input[i++] = 0b111000100111;
    input[i++] = 0b100001010000;
    input[i++] = 0b010101001111;
    input[i++] = 0b101110010110;
    input[i++] = 0b110100001000;
    input[i++] = 0b000001110110;
    input[i++] = 0b000100001110;
    input[i++] = 0b000010100111;
    input[i++] = 0b010010101001;
    input[i++] = 0b110110011000;
    input[i++] = 0b111001110100;
    input[i++] = 0b001100011001;
    input[i++] = 0b110100001010;
    input[i++] = 0b110101001010;
    input[i++] = 0b111011000001;
    input[i++] = 0b100110111000;
    input[i++] = 0b011110111110;
    input[i++] = 0b101010111010;
    input[i++] = 0b100001010111;
    input[i++] = 0b010101010101;
    input[i++] = 0b010001110001;
    input[i++] = 0b110010000010;
    input[i++] = 0b000101001111;
    input[i++] = 0b111010100010;
    input[i++] = 0b100111011110;
    input[i++] = 0b000010111110;
    input[i++] = 0b011011010011;
    input[i++] = 0b101010110100;
    input[i++] = 0b100000010111;
    input[i++] = 0b100110111110;
    input[i++] = 0b010011010001;
    input[i++] = 0b000011101011;
    input[i++] = 0b111011010011;
    input[i++] = 0b100001110111;
    input[i++] = 0b000100001000;
    input[i++] = 0b010110100000;
    input[i++] = 0b001110100000;
    input[i++] = 0b010010100110;
    input[i++] = 0b000110111110;
    input[i++] = 0b110111100100;
    input[i++] = 0b001111011010;
    input[i++] = 0b101011010010;
    input[i++] = 0b010111010100;
    input[i++] = 0b011011000110;
    input[i++] = 0b101011111110;
    input[i++] = 0b001111100011;
    input[i++] = 0b101101100001;
    input[i++] = 0b010111100110;
    input[i++] = 0b010110000001;
    input[i++] = 0b110011011110;
    input[i++] = 0b110111001011;
    input[i++] = 0b110100101001;
    input[i++] = 0b010011011101;
    input[i++] = 0b110011010010;
    input[i++] = 0b100111001100;
    input[i++] = 0b010010101010;
    input[i++] = 0b010111110000;
    input[i++] = 0b010111000010;
    input[i++] = 0b001101111101;
    input[i++] = 0b011010110011;
    input[i++] = 0b001001100000;
    input[i++] = 0b100001101100;
    input[i++] = 0b011111000111;
    input[i++] = 0b111011110100;
    input[i++] = 0b100101010001;
    input[i++] = 0b101001111001;
    input[i++] = 0b001000101110;
    input[i++] = 0b010011100100;
    input[i++] = 0b111100011001;
    input[i++] = 0b111010111110;
    input[i++] = 0b111001010001;
    input[i++] = 0b110000001001;
    input[i++] = 0b110110000010;
    input[i++] = 0b000100100011;
    input[i++] = 0b010101111111;
    input[i++] = 0b100101001110;
    input[i++] = 0b100111111010;
    input[i++] = 0b000111111010;
    input[i++] = 0b010101111101;
    input[i++] = 0b010010100010;
    input[i++] = 0b101110100101;
    input[i++] = 0b100001000001;
    input[i++] = 0b000010001000;
    input[i++] = 0b110100110001;
    input[i++] = 0b110111100010;
    input[i++] = 0b100110010011;
    input[i++] = 0b101110011111;
    input[i++] = 0b111101110010;
    input[i++] = 0b001000001001;
    input[i++] = 0b010100101100;
    input[i++] = 0b100101110111;
    input[i++] = 0b010001100111;
    input[i++] = 0b010001010010;
    input[i++] = 0b100010100100;
    input[i++] = 0b001000000001;
    input[i++] = 0b011011110000;
    input[i++] = 0b010100011000;
    input[i++] = 0b110010101000;
    input[i++] = 0b100010001110;
    input[i++] = 0b000110001000;
    input[i++] = 0b101101010001;
    input[i++] = 0b001111010000;
    input[i++] = 0b111110111111;
    input[i++] = 0b100100110000;
    input[i++] = 0b000110010011;
    input[i++] = 0b001010101000;
    input[i++] = 0b011010011010;
    input[i++] = 0b111011110010;
    input[i++] = 0b001010011100;
    input[i++] = 0b111010100101;
    input[i++] = 0b011101111100;
    input[i++] = 0b010011000001;
    input[i++] = 0b001111101000;
    input[i++] = 0b111110010010;
    input[i++] = 0b100011100100;
    input[i++] = 0b010011010000;
    input[i++] = 0b011111000000;
    input[i++] = 0b110001010011;
    input[i++] = 0b101011001110;
    input[i++] = 0b101001111101;
    input[i++] = 0b000110001101;
    input[i++] = 0b010001000010;
    input[i++] = 0b011000000010;
    input[i++] = 0b011000100001;
    input[i++] = 0b011111011000;
    input[i++] = 0b111000001101;
    input[i++] = 0b011010001101;
    input[i++] = 0b000001000100;
    input[i++] = 0b101010010010;
    input[i++] = 0b111111100111;
    input[i++] = 0b010111111111;
    input[i++] = 0b001011110011;
    input[i++] = 0b100110000100;
    input[i++] = 0b000100010100;
    input[i++] = 0b010110000000;
    input[i++] = 0b110011100000;
    input[i++] = 0b010011101111;
    input[i++] = 0b110101111100;
    input[i++] = 0b000010001010;
    input[i++] = 0b101001010011;
    input[i++] = 0b010101101111;
    input[i++] = 0b111010011010;
    input[i++] = 0b001101101010;
    input[i++] = 0b001100101010;
    input[i++] = 0b100100001001;
    input[i++] = 0b101100110111;
    input[i++] = 0b000001001100;
    input[i++] = 0b011111011001;
    input[i++] = 0b110100101100;
    input[i++] = 0b110110110010;
    input[i++] = 0b011110001001;
    input[i++] = 0b100110100011;
    input[i++] = 0b010111111100;
    input[i++] = 0b110111111101;
    input[i++] = 0b010111000011;
    input[i++] = 0b101001101011;
    input[i++] = 0b010101101100;
    input[i++] = 0b011100000001;
    input[i++] = 0b001000101100;
    input[i++] = 0b110111011011;
    input[i++] = 0b001101001100;
    input[i++] = 0b111001111001;
    input[i++] = 0b010000111100;
    input[i++] = 0b010101111100;
    input[i++] = 0b000100010010;
    input[i++] = 0b100010001101;
    input[i++] = 0b110000111100;
    input[i++] = 0b110011010101;
    input[i++] = 0b111101100000;
    input[i++] = 0b001101011001;
    input[i++] = 0b010111110111;
    input[i++] = 0b010001100000;
    input[i++] = 0b101111000100;
    input[i++] = 0b101101111101;
    input[i++] = 0b001000001111;
    input[i++] = 0b101011110000;
    input[i++] = 0b111000000101;
    input[i++] = 0b101000000101;
    input[i++] = 0b111101111011;
    input[i++] = 0b101010111101;
    input[i++] = 0b101111000000;
    input[i++] = 0b010111011001;
    input[i++] = 0b011100101101;
    input[i++] = 0b100100001000;
    input[i++] = 0b101111110010;
    input[i++] = 0b000001000001;
    input[i++] = 0b000100100000;
    input[i++] = 0b100100011010;
    input[i++] = 0b011001100101;
    input[i++] = 0b011010001011;
    input[i++] = 0b010001111000;
    input[i++] = 0b001110101001;
    input[i++] = 0b100111001001;
    input[i++] = 0b000111001011;
    input[i++] = 0b100101110011;
    input[i++] = 0b111010000001;
    input[i++] = 0b010000011001;
    input[i++] = 0b101110001110;
    input[i++] = 0b111011110111;
    input[i++] = 0b110010011101;
    input[i++] = 0b100011001010;
    input[i++] = 0b001001100101;
    input[i++] = 0b011101001000;
    input[i++] = 0b100100001100;
    input[i++] = 0b000111111000;
    input[i++] = 0b101100011011;
    input[i++] = 0b111101010011;
    input[i++] = 0b111100010101;
    input[i++] = 0b101111100111;
    input[i++] = 0b011011100110;
    input[i++] = 0b101010110110;
    input[i++] = 0b111001000100;
    input[i++] = 0b011101000010;
    input[i++] = 0b101100101110;
    input[i++] = 0b100011001110;
    input[i++] = 0b001100000001;
    input[i++] = 0b101001001101;
    input[i++] = 0b001100101110;
    input[i++] = 0b111111010000;
    input[i++] = 0b001110001110;
    input[i++] = 0b000011110111;
    input[i++] = 0b100001000101;
    input[i++] = 0b011110001011;
    input[i++] = 0b001100101111;
    input[i++] = 0b100100110111;
    input[i++] = 0b110100010101;
    input[i++] = 0b011100110001;
    input[i++] = 0b101101111010;
    input[i++] = 0b111010011000;
    input[i++] = 0b101000100110;
    input[i++] = 0b100100001110;
    input[i++] = 0b111000011011;
    input[i++] = 0b100001001110;
    input[i++] = 0b111001000010;
    input[i++] = 0b100110100111;
    input[i++] = 0b011111101011;
    input[i++] = 0b101001110011;
    input[i++] = 0b010000000100;
    input[i++] = 0b111011111000;
    input[i++] = 0b011101110000;
    input[i++] = 0b110111110110;
    input[i++] = 0b000000100110;
    input[i++] = 0b001100110010;
    input[i++] = 0b101010110101;
    input[i++] = 0b000010101110;
    input[i++] = 0b000011011011;
    input[i++] = 0b101111011101;
    input[i++] = 0b000101011110;
    input[i++] = 0b101010000110;
    input[i++] = 0b010010111011;
    input[i++] = 0b000111010001;
    input[i++] = 0b011001011000;
    input[i++] = 0b111111010010;
    input[i++] = 0b110000101110;
    input[i++] = 0b001111101100;
    input[i++] = 0b001001001111;
    input[i++] = 0b001011010001;
    input[i++] = 0b010110110010;
    input[i++] = 0b101101100010;
    input[i++] = 0b111100110101;
    input[i++] = 0b101101001000;
    input[i++] = 0b110110000111;
    input[i++] = 0b101010011001;
    input[i++] = 0b011000100100;
    input[i++] = 0b010010011010;
    input[i++] = 0b100000100010;
    input[i++] = 0b111000110100;
    input[i++] = 0b011100000101;
    input[i++] = 0b010010110011;
    input[i++] = 0b000011001000;
    input[i++] = 0b101001100101;
    input[i++] = 0b010100111000;
    input[i++] = 0b101111111101;
    input[i++] = 0b011110101001;
    input[i++] = 0b100011110110;
    input[i++] = 0b101111001100;
    input[i++] = 0b100110111011;
    input[i++] = 0b110000000011;
    input[i++] = 0b100011010101;
    input[i++] = 0b101010001110;
    input[i++] = 0b010011000010;
    input[i++] = 0b000011000110;
    input[i++] = 0b010101110110;
    input[i++] = 0b001111101001;
    input[i++] = 0b101000001001;
    input[i++] = 0b110011110000;
    input[i++] = 0b000001001101;
    input[i++] = 0b000010110100;
    input[i++] = 0b001111101101;
    input[i++] = 0b010110000100;
    input[i++] = 0b010010001001;
    input[i++] = 0b111010110010;
    input[i++] = 0b110011111111;
    input[i++] = 0b111000000000;
    input[i++] = 0b101010110000;
    input[i++] = 0b010110100010;
    input[i++] = 0b100000000000;
    input[i++] = 0b010110010000;
    input[i++] = 0b110111001001;
    input[i++] = 0b010101011011;
    input[i++] = 0b001110011001;
    input[i++] = 0b011101111000;
    input[i++] = 0b110011011101;
    input[i++] = 0b100000110110;
    input[i++] = 0b100110011001;
    input[i++] = 0b001111100100;
    input[i++] = 0b010100110110;
    input[i++] = 0b000110111101;
    input[i++] = 0b111010101011;
    input[i++] = 0b101001100010;
    input[i++] = 0b011011010010;
    input[i++] = 0b000010010011;
    input[i++] = 0b101000011101;
    input[i++] = 0b101110010101;
    input[i++] = 0b000000110011;
    input[i++] = 0b100111111001;
    input[i++] = 0b011000011001;
    input[i++] = 0b000000000001;
    input[i++] = 0b101011110110;
    input[i++] = 0b111111011110;
    input[i++] = 0b010010111000;
    input[i++] = 0b010110100100;
    input[i++] = 0b101100100000;
    input[i++] = 0b000010111000;
    input[i++] = 0b111110010011;
    input[i++] = 0b010110110011;
    input[i++] = 0b111111110001;
    input[i++] = 0b011011100101;
    input[i++] = 0b110110101101;
    input[i++] = 0b001011110100;
    input[i++] = 0b110001111111;
    input[i++] = 0b101010010111;
    input[i++] = 0b000110011011;
    input[i++] = 0b001000011110;
    input[i++] = 0b101101101000;
    input[i++] = 0b111111010111;
    input[i++] = 0b101010111001;
    input[i++] = 0b010100000001;
    input[i++] = 0b101100101001;
    input[i++] = 0b000111110101;
    input[i++] = 0b101011111000;
    input[i++] = 0b100110011011;
    input[i++] = 0b010000000111;
    input[i++] = 0b100111011001;
    input[i++] = 0b110111010101;
    input[i++] = 0b011110011010;
    input[i++] = 0b001011011010;
    input[i++] = 0b111101100100;
    input[i++] = 0b011001101101;
    input[i++] = 0b100001111100;
    input[i++] = 0b000011011000;
    input[i++] = 0b100011011001;
    input[i++] = 0b101100011110;
    input[i++] = 0b011111011111;
    input[i++] = 0b001001010010;
    input[i++] = 0b110101110110;
    input[i++] = 0b000111000010;
    input[i++] = 0b000110001001;
    input[i++] = 0b111010110000;
    input[i++] = 0b001100101001;
    input[i++] = 0b110011101000;
    input[i++] = 0b101011110100;
    input[i++] = 0b110000001010;
    input[i++] = 0b011110111010;
    input[i++] = 0b101101101010;
    input[i++] = 0b110011101011;
    input[i++] = 0b011011010000;
    input[i++] = 0b110111101100;
    input[i++] = 0b100000001011;
    input[i++] = 0b001110110111;
    input[i++] = 0b000000100100;
    input[i++] = 0b111110011001;
    input[i++] = 0b001110011010;
    input[i++] = 0b011101101110;
    input[i++] = 0b100011110011;
    input[i++] = 0b101110101011;
    input[i++] = 0b001010101011;
    input[i++] = 0b010111011011;
    input[i++] = 0b100110110111;
    input[i++] = 0b100000101110;
    input[i++] = 0b010011100111;
    input[i++] = 0b000010011100;
    input[i++] = 0b011111011100;
    input[i++] = 0b011000111001;
    input[i++] = 0b111011101001;
    input[i++] = 0b000110110110;
    input[i++] = 0b100011100110;
    input[i++] = 0b101101110100;
    input[i++] = 0b101111000111;
    input[i++] = 0b111110110010;
    input[i++] = 0b000010010101;
    input[i++] = 0b111110100111;
    input[i++] = 0b110001011110;
    input[i++] = 0b110101110000;
    input[i++] = 0b100110101000;
    input[i++] = 0b011000111010;
    input[i++] = 0b011111110011;
    input[i++] = 0b010010010000;
    input[i++] = 0b001000110100;
    input[i++] = 0b100010100111;
    input[i++] = 0b100101100010;
    input[i++] = 0b011000100101;
    input[i++] = 0b000101111001;
    input[i++] = 0b101100001111;
    input[i++] = 0b110111000010;
    input[i++] = 0b010100011110;
    input[i++] = 0b000101100000;
    input[i++] = 0b101111011000;
    input[i++] = 0b000010100011;
    input[i++] = 0b000010000100;
    input[i++] = 0b010011001011;
    input[i++] = 0b100010110100;
    input[i++] = 0b000000101001;
    input[i++] = 0b000010110111;
    input[i++] = 0b110000100111;
    input[i++] = 0b010001101111;
    input[i++] = 0b010111000110;
    input[i++] = 0b110011011111;
    input[i++] = 0b010100010011;
    input[i++] = 0b011110001000;
    input[i++] = 0b001001101000;
    input[i++] = 0b111000110000;
    input[i++] = 0b011001111110;
    input[i++] = 0b101001011100;
    input[i++] = 0b101110000111;
    input[i++] = 0b111110010100;
    input[i++] = 0b001101011110;
    input[i++] = 0b010010111111;
    input[i++] = 0b011110000011;
    input[i++] = 0b011001110010;
    input[i++] = 0b001011110111;
    input[i++] = 0b000000001110;
    input[i++] = 0b111000011101;
    input[i++] = 0b110111101001;
    input[i++] = 0b111111001100;
    input[i++] = 0b100111010011;
    input[i++] = 0b111111101010;
    input[i++] = 0b110111111000;
    input[i++] = 0b001101100111;
    input[i++] = 0b111011011111;
    input[i++] = 0b000010111101;
    input[i++] = 0b100010011001;
    input[i++] = 0b010110100101;
    input[i++] = 0b011011001010;
    input[i++] = 0b000001101000;
    input[i++] = 0b001011110110;
    input[i++] = 0b000001111000;
    input[i++] = 0b100011001111;
    input[i++] = 0b110000100011;
    input[i++] = 0b100001010010;
    input[i++] = 0b110110000100;
    input[i++] = 0b110110010010;
    input[i++] = 0b101001101111;
    input[i++] = 0b111100000011;
    input[i++] = 0b110000111001;
    input[i++] = 0b100001011010;
    input[i++] = 0b110110011101;
    input[i++] = 0b101010001011;
    input[i++] = 0b010110011100;
    input[i++] = 0b111000101010;
    input[i++] = 0b001111111011;
    input[i++] = 0b010101101001;
    input[i++] = 0b100010111011;
    input[i++] = 0b100101010111;
    input[i++] = 0b011111100001;
    input[i++] = 0b001100100000;
    input[i++] = 0b111101101000;
    input[i++] = 0b000110000010;
    input[i++] = 0b010111100000;
    input[i++] = 0b001000110110;
    input[i++] = 0b100011101110;
    input[i++] = 0b010101011000;
    input[i++] = 0b110000000111;
    input[i++] = 0b100011100001;
    input[i++] = 0b100001100000;
    input[i++] = 0b000111010100;
    input[i++] = 0b110101011001;
    input[i++] = 0b101111100110;
    input[i++] = 0b011111101111;
    input[i++] = 0b000110000011;
    input[i++] = 0b000000100001;
    input[i++] = 0b001010000101;
    input[i++] = 0b111100100001;
    input[i++] = 0b111000010101;
    input[i++] = 0b011011011110;
    input[i++] = 0b101001001100;
    input[i++] = 0b100010110110;
    input[i++] = 0b100001101001;
    input[i++] = 0b101100001100;
    input[i++] = 0b100111000010;
    input[i++] = 0b011001000110;
    input[i++] = 0b011110110101;
    input[i++] = 0b000000100011;
    input[i++] = 0b011100000111;
    input[i++] = 0b101110111100;
    input[i++] = 0b010000010010;
    input[i++] = 0b110111110010;
    input[i++] = 0b100101001001;
    input[i++] = 0b010001010011;
    input[i++] = 0b000011100100;
    input[i++] = 0b000100100101;
    input[i++] = 0b010100010001;
    input[i++] = 0b100111101101;
    input[i++] = 0b101110000101;
    input[i++] = 0b110100101111;
    input[i++] = 0b001111101011;
    input[i++] = 0b010011101010;
    input[i++] = 0b110000110001;
    input[i++] = 0b000101101011;
    input[i++] = 0b111010001001;
    input[i++] = 0b011111010110;
    input[i++] = 0b001001111000;
    input[i++] = 0b111110110011;
    input[i++] = 0b111010011100;
    input[i++] = 0b010011011110;
    input[i++] = 0b100001010100;
    input[i++] = 0b010111010011;
    input[i++] = 0b011110001110;
    input[i++] = 0b111010100011;
    input[i++] = 0b110001000010;
    input[i++] = 0b100000100100;
    input[i++] = 0b001001101011;
    input[i++] = 0b001011111011;
    input[i++] = 0b110000010010;
    input[i++] = 0b000011001101;
    input[i++] = 0b001101001011;
    input[i++] = 0b011110010011;
    input[i++] = 0b100001110011;
    input[i++] = 0b011101100000;
    input[i++] = 0b110101001110;
    input[i++] = 0b001000111101;
    input[i++] = 0b001101110011;
    input[i++] = 0b001100101101;
    input[i++] = 0b011110001010;
    input[i++] = 0b111111011000;
    input[i++] = 0b101001101101;
    input[i++] = 0b110011010111;
    input[i++] = 0b101110001101;
    input[i++] = 0b111001101110;
    input[i++] = 0b011010011000;
    input[i++] = 0b101010101000;
    input[i++] = 0b010110000010;
    input[i++] = 0b100000110001;
    input[i++] = 0b011001000011;
    input[i++] = 0b011100010010;
    input[i++] = 0b010001001111;
    input[i++] = 0b001011000100;
    input[i++] = 0b101000101011;
    input[i++] = 0b111101010000;
    input[i++] = 0b100111100101;
    input[i++] = 0b001011101110;
    input[i++] = 0b010001000011;
    input[i++] = 0b111101000111;
    input[i++] = 0b110010011111;
    input[i++] = 0b011011001101;
    input[i++] = 0b010110101110;
    input[i++] = 0b100011100111;
    input[i++] = 0b101111111111;
    input[i++] = 0b111011011010;
    input[i++] = 0b000100111100;
    input[i++] = 0b000111011011;
    input[i++] = 0b101010001010;
    input[i++] = 0b111110000011;
    input[i++] = 0b101110011010;
    input[i++] = 0b011100001001;
    input[i++] = 0b100000011110;
    input[i++] = 0b011000100000;
    input[i++] = 0b011001010101;
    input[i++] = 0b001110110010;
    input[i++] = 0b101110101010;
    input[i++] = 0b010111110101;
    input[i++] = 0b101110101110;
    input[i++] = 0b101111010001;
    input[i++] = 0b101101001101;
    input[i++] = 0b001010101100;
    input[i++] = 0b011011001011;
    input[i++] = 0b011001110111;
    input[i++] = 0b111101100101;
    input[i++] = 0b101011100100;
    input[i++] = 0b011111111101;
    input[i++] = 0b110000111010;
    input[i++] = 0b010010011000;
    input[i++] = 0b011010110010;
    input[i++] = 0b010001000001;
    input[i++] = 0b100111101100;
    input[i++] = 0b011001111000;
    input[i++] = 0b101011010111;
    input[i++] = 0b001111100110;
    input[i++] = 0b111100001111;
    input[i++] = 0b001101010000;
    input[i++] = 0b000011001110;
    input[i++] = 0b110010011110;
    input[i++] = 0b111010100111;
    input[i++] = 0b110101001000;
    input[i++] = 0b001000100110;
    input[i++] = 0b101001011000;
    input[i++] = 0b010010101111;
    input[i++] = 0b011000001011;
    input[i++] = 0b000110001011;
    input[i++] = 0b000010000011;
    input[i++] = 0b001001111001;
    input[i++] = 0b011000111111;
    input[i++] = 0b101000010011;
    input[i++] = 0b111010011101;
    input[i++] = 0b101111101000;
    input[i++] = 0b111100010001;
    input[i++] = 0b111011000100;
    input[i++] = 0b100111100010;
    input[i++] = 0b111000011010;
    input[i++] = 0b010010000010;
    input[i++] = 0b111110110100;
    input[i++] = 0b010010111010;
    input[i++] = 0b110001010001;
    input[i++] = 0b101110111101;
    input[i++] = 0b010000001000;
    input[i++] = 0b000011111100;
    input[i++] = 0b111001001000;
    input[i++] = 0b101011001001;
    input[i++] = 0b111011011001;
    input[i++] = 0b010100001101;
    input[i++] = 0b010001001100;
    input[i++] = 0b010011001010;
    input[i++] = 0b000101010100;
    input[i++] = 0b010100001100;
    input[i++] = 0b001000011001;
    input[i++] = 0b100110101110;
    input[i++] = 0b011001111011;
    input[i++] = 0b010101100011;
    input[i++] = 0b111100000100;
    input[i++] = 0b100100101000;
    input[i++] = 0b110010001010;
    input[i++] = 0b000100101001;
    input[i++] = 0b000101100001;
    input[i++] = 0b000010011000;
    input[i++] = 0b101001111000;
    input[i++] = 0b001001000100;
    input[i++] = 0b011001001000;
    input[i++] = 0b010110010011;
    input[i++] = 0b100001010110;
    input[i++] = 0b010010010010;
    input[i++] = 0b010001011010;
    input[i++] = 0b101100111110;
    input[i++] = 0b101001010000;
    input[i++] = 0b110101110001;
    input[i++] = 0b100111001111;
    input[i++] = 0b010110110101;
    input[i++] = 0b101011010100;
    input[i++] = 0b011110011111;
    input[i++] = 0b010000010100;
    input[i++] = 0b111011000110;
    input[i++] = 0b011111001110;
    input[i++] = 0b010110111001;
    input[i++] = 0b000100010101;
    input[i++] = 0b100110001101;
    input[i++] = 0b001001001010;
    input[i++] = 0b000010010000;
    input[i++] = 0b010001111001;
    input[i++] = 0b001011011000;
    input[i++] = 0b010101011110;
    input[i++] = 0b110101101001;
    input[i++] = 0b111101011100;
    input[i++] = 0b010011110001;
    input[i++] = 0b101000110001;
    input[i++] = 0b111110110111;
    input[i++] = 0b001110001010;
    input[i++] = 0b101110111111;
    input[i++] = 0b000111011101;
    input[i++] = 0b010001110010;
    input[i++] = 0b101010010101;
    input[i++] = 0b001000011111;
    input[i++] = 0b010000010001;
    input[i++] = 0b101100010000;
    input[i++] = 0b110111101011;
    input[i++] = 0b001001011110;
    input[i++] = 0b100011011101;
    input[i++] = 0b110010100110;
    input[i++] = 0b111101111100;
    input[i++] = 0b111100011100;
    input[i++] = 0b000111110000;
    input[i++] = 0b000101010101;
    input[i++] = 0b011001011101;
    input[i++] = 0b000101110111;
    input[i++] = 0b001100011111;
    input[i++] = 0b110010011000;
    input[i++] = 0b010110111111;
    input[i++] = 0b111101000010;
    input[i++] = 0b111011010000;
    input[i++] = 0b111001110010;
    input[i++] = 0b010111000100;
    input[i++] = 0b111111100001;
    input[i++] = 0b000000010000;
    input[i++] = 0b001100001111;
    input[i++] = 0b101101111111;
    input[i++] = 0b101100000001;
    input[i++] = 0b011001100000;
    input[i++] = 0b100010110010;
    input[i++] = 0b111111111110;
    input[i++] = 0b000110010001;
    input[i++] = 0b001001111110;
    input[i++] = 0b111110111011;
    input[i++] = 0b110101001111;
    input[i++] = 0b010000000010;
    input[i++] = 0b000001101110;
    input[i++] = 0b100001011110;
    input[i++] = 0b111111100101;
    input[i++] = 0b101100100011;
    input[i++] = 0b100000010110;
    input[i++] = 0b100011000110;
    input[i++] = 0b000010010001;
    input[i++] = 0b100010111010;
    input[i++] = 0b111010111000;
    input[i++] = 0b011110110010;
    input[i++] = 0b000011000010;
    input[i++] = 0b010010011001;
    input[i++] = 0b010010000100;
    input[i++] = 0b110101111000;
    input[i++] = 0b010000001010;
    input[i++] = 0b100000011010;
    input[i++] = 0b001010001110;
    input[i++] = 0b000011010001;
    input[i++] = 0b100100111101;
    input[i++] = 0b111011111001;
    input[i++] = 0b010001010111;
    input[i++] = 0b010000100000;
    input[i++] = 0b000100101000;
    input[i++] = 0b101011011011;
    input[i++] = 0b111111010110;
    input[i++] = 0b111110000100;
    input[i++] = 0b100011101010;
    input[i++] = 0b100111011010;
    input[i++] = 0b010101001100;
    input[i++] = 0b011010000000;
    input[i++] = 0b111100100000;
    input[i++] = 0b011010111110;
    input[i++] = 0b011111001010;
    input[i++] = 0b111011011000;
    input[i++] = 0b001011001010;
    input[i++] = 0b111101101111;
    input[i++] = 0b100111100110;
    input[i++] = 0b011000000000;
    input[i++] = 0b000001011000;
    input[i++] = 0b100111011000;
    input[i++] = 0b001111100000;
    input[i++] = 0b000010101100;
    input[i++] = 0b110111001010;
    input[i++] = 0b011010100101;
    input[i++] = 0b001010010000;
    input[i++] = 0b110110011100;
    input[i++] = 0b010101110111;
    input[i++] = 0b111111110110;
    input[i++] = 0b011100110101;
    input[i++] = 0b101000010110;
    input[i++] = 0b100110110110;
    input[i++] = 0b101001101100;
    input[i++] = 0b111001011001;
    input[i++] = 0b000001010011;
    input[i++] = 0b000110100000;
    input[i++] = 0b111101101011;
    input[i++] = 0b101111101101;
    input[i++] = 0b100010111110;
    input[i++] = 0b010110011111;
    input[i++] = 0b000010000111;
    input[i++] = 0b000101101010;
    input[i++] = 0b011100000000;
    input[i++] = 0b001110011101;
    input[i++] = 0b011011110110;
    input[i++] = 0b111111101001;
    input[i++] = 0b111111010011;
    input[i++] = 0b110000110100;
    input[i++] = 0b100000010101;
    input[i++] = 0b001010000010;
    input[i++] = 0b111010101110;
    input[i++] = 0b001110010000;
    input[i++] = 0b100100010101;
    input[i++] = 0b100110001000;
    input[i++] = 0b111100011000;
    input[i++] = 0b001011100111;
    input[i++] = 0b100100110011;
    input[i++] = 0b001000001100;
    input[i++] = 0b000111001000;
    input[i++] = 0b100111111101;
    input[i++] = 0b100110010101;
    input[i++] = 0b101000001101;
    input[i++] = 0b111110001110;
    input[i++] = 0b001011100000;
    input[i++] = 0b000011111101;
    input[i++] = 0b010010001101;
    input[i++] = 0b000010011101;
    input[i++] = 0b001100111110;
    input[i++] = 0b000001100110;
    input[i++] = 0b110001101010;
    input[i++] = 0b001101010010;
    input[i++] = 0b110000110000;
    input[i++] = 0b100011001100;
    input[i++] = 0b001110011011;
    input[i++] = 0b110001110000;
    input[i++] = 0b010000011110;
    input[i++] = 0b100011111110;
    input[i++] = 0b101001101000;
    input[i++] = 0b001111011011;
    input[i++] = 0b010001011011;
    input[i++] = 0b111111010100;
    input[i++] = 0b001011001111;
    input[i++] = 0b001100010110;
    input[i++] = 0b001010111001;
    input[i++] = 0b110101010001;
    input[i++] = 0b001001111011;
    input[i++] = 0b010110001000;
    input[i++] = 0b110100101110;
    input[i++] = 0b100100100010;
    input[i++] = 0b010001101101;
    input[i++] = 0b100100000110;
    input[i++] = 0b110010110010;
    input[i++] = 0b011111000010;
    input[i++] = 0b000110010010;
    input[i++] = 0b001111110001;
    input[i++] = 0b110111101110;
    input[i++] = 0b111111000111;
    input[i++] = 0b011011011111;
    input[i++] = 0b011010101001;
    input[i++] = 0b011001011110;
    input[i++] = 0b010100110000;
    input[i++] = 0b010000101110;
    input[i++] = 0b101110100111;
    input[i++] = 0b100001010101;
    input[i++] = 0b101101010100;
    input[i++] = 0b000111101010;
    input[i++] = 0b111010000100;
    input[i++] = 0b100000110111;
    input[i++] = 0b001101110110;
    input[i++] = 0b011011100010;
    input[i++] = 0b010100111001;
    input[i++] = 0b000110100010;
    input[i++] = 0b110111101111;
    input[i++] = 0b100111000110;
    input[i++] = 0b101100110011;
    input[i++] = 0b010001000111;
    input[i++] = 0b110000101001;
    input[i++] = 0b100101011100;
    input[i++] = 0b001011111000;
    input[i++] = 0b100001110001;
    input[i++] = 0b010000011011;
    input[i++] = 0b001010111100;
    input[i++] = 0b000101101111;
    input[i++] = 0b011011111001;
    input[i++] = 0b110110101111;
    input[i++] = 0b100101011000;
    input[i++] = 0b011000110110;
    input[i++] = 0b100000011111;
    input[i++] = 0b110011100011;
    input[i++] = 0b010111001001;
    input[i++] = 0b000101010111;
    input[i++] = 0b000010100110;
    input[i++] = 0b101010110010;
    input[i++] = 0b000000001100;
    input[i++] = 0b111110001001;
    input[i++] = 0b011111011010;
    input[i++] = 0b011000111101;
    input[i++] = 0b110110001000;
    input[i++] = 0b110011001010;
    input[i++] = 0b100101101111;
    input[i++] = 0b100111101111;
    input[i++] = 0b100101100111;
    input[i++] = 0b110001001010;
    input[i++] = 0b010110110001;
    input[i++] = 0b001101101000;
    input[i++] = 0b101110001111;
    input[i++] = 0b000001001110;
    input[i++] = 0b010101110100;
    input[i++] = 0b001101011111;
    input[i++] = 0b100010100000;
    input[i++] = 0b101000011000;
    input[i++] = 0b010100100111;
    input[i++] = 0b110011100100;
    input[i++] = 0b110111110101;
    input[i++] = 0b000110001111;
    input[i++] = 0b000001011101;
    input[i++] = 0b001011101100;
    input[i++] = 0b111110000110;
    input[i++] = 0b100001010011;
    input[i++] = 0b000100000100;
    input[i++] = 0b001010011011;
    input[i++] = 0b110000110111;
    return input;
}

void dealloc_input(int *input) {
    if (input) {
        free(input);
    }
}