#include <stdio.h>

int main (void) {

// - integar are tow type: 
//    1) singed
//    2) unsigned

// singed Integar data:
//      1) short -> idendifire: %hi
//      2) int  -> idendifire: %d
//      3) long  -> idendifire: %ld
//      4) long long -> idendifire: %lld

// singed short. idendifire: %hi
short a = 2;
printf("i am short - %hi\n", a);

// singed int. idendifire: %d
int b = 23;
printf("i am int - %d\n", b);

// singed long. idendifire: %ld
long c = 5647l;
printf("i am long - %ld\n", c);

// singed long long. idendifire: %lld
long long d = 65843974ll;
printf("i am long long - %lld\n", d);


// ----------Unsigned integar-------------
// Unsigned Integar data:
//      1) unsigned short -> idendifire: %hu
//      2) unsigned int  -> idendifire: %u
//      3) unsigned long  -> idendifire: %lu
//      4) unsigned long long -> 

// 1) unsigned short -> idendifire: %hu
unsigned short us = 267;
printf("i am unsinged short. - %hu\n", us);

// 2) unsigned int  -> idendifire: %u
unsigned int ui = 3432;
printf("Iam unsigner int. - %u\n", ui);

// 3) unsigned long  -> idendifire: %lu
unsigned long ul = 357646;
printf("Iam unsigner int. - %lu\n", ul);

// 4) unsigned long long  -> idendifire: %llu
unsigned long long ull = 357646;
printf("Iam unsigner int. - %llu\n", ull);
printf("i am unsinged short. - %hu", us)

// 2) unsigned int  -> idendifire: %u
unsigned int ui = 3432;
printf("Iam unsigner int. - %u", ui);

// 3) unsigned long  -> idendifire: %lu
unsigned long ul = 357646;
printf("Iam unsigner int. - %lu", ul);

// 3) unsigned long long  -> idendifire: %llu
unsigned long long ull = 357646;
printf("Iam unsigner int. - %llu", ull);



// how to use octal and hexadecimal number in C.
// OCTAL. idendifire: %o
int octa = 0456;
printf("I am octal - %o\n", octa);
// convert octal to decimal :
printf("I am decimal of octal - %d\n", octa);

// Hexadecimal. idendifire: %X
int hex = 0Xfff;
printf("I am hexadecimal - %X\n", hex);
// convert hexadeximal to decimal :
printf("I am decimal of hexa - %d\n", hex);

return 0;
}




// ---------------Signed vs Unsigned Data Types----------------

// Signed Data Types:
//        1) Signed data types can represent both positive and negative values.
//        2) They use one bit to represent the sign of the number (positive or negative) and
//           the remaining bits to represent the magnitude of the number.

// Unsigned Data Types:
//        1) Unsigned data types can represent only non-negative (positive) values.
//        2) They do not use any bits to represent the sign; instead, all bits are used to
//           represent the magnitude of the number.