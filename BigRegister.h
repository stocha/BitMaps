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
void init(void* bregister);
void shfitLtoH(void* bregister,unsigned int sh);
void shfitHtoL(void* bregister,unsigned int sh);
int getBit(void* bregister,unsigned int index);
int setBit(void* bregister,unsigned int index);
void a(void* dst,void* src);
void o(void* dst,void* src);
void x(void* dst,void* src);
void c(void* dst,void* src);
void n(void* dst);
unsigned int testZero(void *src);
unsigned long byteSize(void *src);
unsigned char byteAt(void *src,unsigned int index);



#endif /* defined(__MyCTest__BigRegister__) */
