//
//  BigRegister.c
//  MyCTest
//
//  Created by ios13 on 28/11/2014.
//  Copyright (c) 2014 ios13. All rights reserved.
//

#include "BigRegister.h"

_64bits byteSizeFor( _64bits bits){
    
    _64bits res;
    bits=bits >> 6;
    return res+2;
}
void init(void* bregister, _64bits bits){
    _64bits *t=(_64bits *)bregister;
    t[0]=byteSizeFor(bits);
    t[1]=bits&0x3F;
    
}
void shfitLtoH(void* bregister,_64bits sh);
void shfitHtoL(void* bregister,_64bits sh);

int getBit(void* bregister,_64bits index){
    _64bits *dinf=(_64bits *)bregister;
    _64bits *d=&dinf[2];
    
    _64bits ind=index>>6;
    _64bits rest=index&0x3F;
    
    return (int) ((d[ind]>>rest)&1);
    
    
}
int setBit(void* bregister,_64bits index);


void a(void* dst,void* src)
{
    _64bits *dinf=(_64bits *)dst;
    _64bits *d=&dinf[2];
    _64bits *sinf=(_64bits *)src;
    _64bits *s=&sinf[2];
    
    for(int i=0;i<dinf[0];i++){
        d[i]&=s[i];
    }
    
}
void o(void* dst,void* src)
{
    _64bits *dinf=(_64bits *)dst;
    _64bits *d=&dinf[2];
    _64bits *sinf=(_64bits *)src;
    _64bits *s=&sinf[2];
    
    for(int i=0;i<dinf[0];i++){
        d[i]|=s[i];
    }
    
}
void x(void* dst,void* src)
{
    _64bits *dinf=(_64bits *)dst;
    _64bits *d=&dinf[2];
    _64bits *sinf=(_64bits *)src;
    _64bits *s=&sinf[2];
    
    for(int i=0;i<dinf[0];i++){
        d[i]^=s[i];
    }
    
}
void c(void* dst,void* src)
{
    _64bits *dinf=(_64bits *)dst;
    _64bits *d=&dinf[2];
    _64bits *sinf=(_64bits *)src;
    _64bits *s=&sinf[2];
    
    for(int i=0;i<dinf[0];i++){
        d[i]=s[i];
    }
    
}
void n(void* dst)
{
    _64bits *dinf=(_64bits *)dst;
    _64bits *d=&dinf[2];
    
    for(int i=0;i<dinf[0];i++){
        d[i]=~d[i];
    }
    
}
unsigned int testZero(void *src)
{
    _64bits *dinf=(_64bits *)src;
    _64bits *d=&dinf[2];
    
    _64bits acc=0;
    for(int i=0;i<dinf[0];i++){
        acc|=d[i];
    }
    return (acc==0);
}

unsigned long byteSize(void *src)
{
    _64bits *dinf=(_64bits *)src;
    return dinf[0];
}
unsigned char byteAt(void *src,_64bits index);