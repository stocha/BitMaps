//
//  BitMap.h
//  MyCTest
//
//  Created by ios13 on 26/11/2014.
//  Copyright (c) 2014 ios13. All rights reserved.
//

#ifndef MyCTest_BitMap_h
#define MyCTest_BitMap_h

typedef struct BMsz{
    _64bits width;
    _64bits height;
} BMsz;

#define BMSIZE(W,H) ((((W)*(H))/64)+3)

void bshiftL (void* bm1, unsigned int dec);
void bshiftR (void* bm1, unsigned int dec);
void band (void* bm1,void* bm2);
void bor (void* bm1,void* bm2);
void bxor (void* bm1,void* bm2);
void bnot(void* bm1);
void bcp (void* bm1,void* bm2);
void clip(void* bm1);


#endif
