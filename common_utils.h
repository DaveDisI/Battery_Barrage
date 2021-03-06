#pragma once

typedef char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;
typedef long s64;
typedef unsigned long u64;
typedef float f32;
typedef double f64;

#ifdef DEBUG_COMPILE
    #define DEBUG_PRINT(X...) NSLog(@X) 
    #define ASSERT(X) if(!(X)) { exit(1); }
#else   
    #define DEBUG_PRINT(X...)
    #define ASSERT(X) 
#endif

u32 getStringLength(const s8* str){
    int ctr = 0;
    char c;
    while((c = str[ctr++]) != '\0');
    return ctr;
}
