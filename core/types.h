#ifndef TYPES_H
#define TYPES_H

#include <stdlib.h>
#include <string.h>

// aliases for primitives

// str - stack allocated string
typedef char* str;

#define STRING_SIZE_MAX 100

// integers
#ifndef __cplusplus
typedef unsigned char bool;
enum bool { false = 0, true = 1 };
#else
#error These headers are intended for C projects only.
#endif
typedef unsigned char       u8;
typedef unsigned short int  u16;
typedef unsigned int        u32;
typedef unsigned long       u64;
typedef unsigned long long  u128;

typedef char        i8;
typedef short int   i16;
typedef int         i32;
typedef long        i64;
typedef long long   i128;

// floating points
typedef float   f32;
typedef double  f64;


#endif // TYPES_H
