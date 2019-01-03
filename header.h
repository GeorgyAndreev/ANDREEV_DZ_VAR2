//
// Created by georgy on 03.01.19.
//

#ifndef ANDREEV_DZ_VAR2_HEADER_H
#define ANDREEV_DZ_VAR2_HEADER_H

#include <string>
#include <iostream>
#include <fstream>

// global constants

const unsigned long long int K = 0xffffffff - 0xfffffff;

const size_t R = 15;

const size_t N = 24;

const unsigned long long int M = 0xffffffff;

// main sources

void encryption(const std::string&, const std::string&);

void decryption(const std::string&, const std::string&);

// other sources

void itemCounter(const std::string&);

unsigned long int strToBits(const unsigned char[]);

void bitsToStr(unsigned char[], unsigned long int);

void leftShift(unsigned long int bits);

void rightShift(unsigned long int bits);

#endif //ANDREEV_DZ_VAR2_HEADER_H
