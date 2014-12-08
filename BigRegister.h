//
//  BigRegister.h
//  MyCTest
//
//  Created by ios13 on 28/11/2014.
//  Copyright (c) 2014 ios13. All rights reserved.
//

#ifndef __MyCTest__BigRegister__
#define __MyCTest__BigRegister__

#include <stdio.h>
#include "BitSizeDef.H"

_64bits byteSizeFor( _64bits bits);
void init(void* bregister, _64bits bits);


void shfitLtoH(void* bregister,_64bits sh);
void shfitHtoL(void* bregister,_64bits sh);
int getBit(void* bregister,_64bits index);
int setBit(void* bregister,_64bits index);
void a(void* dst,void* src);
void o(void* dst,void* src);
void x(void* dst,void* src);
void c(void* dst,void* src);
void n(void* dst);
unsigned int testZero(void *src);


unsigned long byteSize(void *src);
unsigned char byteAt(void *src,_64bits index);




#endif /* defined(__MyCTest__BigRegister__) */
