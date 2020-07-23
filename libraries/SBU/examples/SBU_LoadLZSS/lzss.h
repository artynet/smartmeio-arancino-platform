#ifndef SBU_LZSS_H_
#define SBU_LZSS_H_

/**************************************************************************************
   INCLUDE
 **************************************************************************************/

#include <stdint.h>

/**************************************************************************************
   FUNCTION DEFINITION
 **************************************************************************************/

void lzss_init(uint32_t const sketch_start, bool LZSStoBIN);
void lzss_flush();
int lzss_encode(const char buf_in[], uint32_t size);

#endif /* SBU_LZSS_H_ */