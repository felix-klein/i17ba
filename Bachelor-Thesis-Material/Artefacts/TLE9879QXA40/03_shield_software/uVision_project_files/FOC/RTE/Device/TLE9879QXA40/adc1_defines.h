/*sha256=3391EDE7C3C4F0B223C9F1A6DB00CD7EB40AEC67931A06CEE4EF8D08C2BC6DE6*/
/**
 * @cond
 ***********************************************************************************************************************
 *
 * Copyright (c) 2015, Infineon Technologies AG
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification,are permitted provided that the
 * following conditions are met:
 *
 *   Redistributions of source code must retain the above copyright notice, this list of conditions and the  following
 *   disclaimer.
 *
 *   Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the
 *   following disclaimer in the documentation and/or other materials provided with the distribution.
 *
 *   Neither the name of the copyright holders nor the names of its contributors may be used to endorse or promote
 *   products derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES,
 * INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE  FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY,OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT  OF THE
 * USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 **********************************************************************************************************************/

/*------------------------------------------------------------------------------
IFXConfigWizard output file
created on:Di Jul 3 10:52:28 2018
------------------------------------------------------------------------------*/

#ifndef _ADC1_DEFINES_H
#define _ADC1_DEFINES_H

#ifndef IFXConfigWizard_Version
  #define IFXConfigWizard_Version 1.8.6
#endif

/* XML Version 1.3.1 */
#ifndef ADC1_XML_VERSION
  #define ADC1_XML_VERSION 10301
#endif

/*ADC1_CHX_EIM: (0<<16)|0|(0<<4)*/
#ifndef ADC1_CHX_EIM
  #define ADC1_CHX_EIM (0x0u)
#endif

#ifndef ADC1_CLK
  #define ADC1_CLK 40
#endif

/*ADC1_DWSEL: 0|(0<<1)|(0<<2)|(0<<3)|(0<<4)|(0<<5)|(0<<6)*/
#ifndef ADC1_DWSEL
  #define ADC1_DWSEL (0x0u)
#endif

/*ADC1_ESM: (1<<16)|0|(1<<1)|(0<<2)|(0<<3)|(0<<4)|(0<<5)|(0<<6)*/
#ifndef ADC1_ESM
  #define ADC1_ESM (0x10002u)
#endif

/*ADC1_GLOBCTR: (3<<8)|0*/
#ifndef ADC1_GLOBCTR
  #define ADC1_GLOBCTR (0x300u)
#endif

/*ADC1_IE: 0|(0<<1)|(0<<2)|(0<<3)|(0<<4)|(0<<5)|(0<<6)|(0<<8)|(1<<9)*/
#ifndef ADC1_IE
  #define ADC1_IE (0x200u)
#endif

/*ADC1_RES0: (0<<16)*/
#ifndef ADC1_RES0
  #define ADC1_RES0 (0x0u)
#endif

/*ADC1_RES1: (0<<16)*/
#ifndef ADC1_RES1
  #define ADC1_RES1 (0x0u)
#endif

/*ADC1_RES2: (0<<16)*/
#ifndef ADC1_RES2
  #define ADC1_RES2 (0x0u)
#endif

/*ADC1_RES3: (0<<16)*/
#ifndef ADC1_RES3
  #define ADC1_RES3 (0x0u)
#endif

/*ADC1_RES4: (0<<16)*/
#ifndef ADC1_RES4
  #define ADC1_RES4 (0x0u)
#endif

/*ADC1_RES5: (0<<16)*/
#ifndef ADC1_RES5
  #define ADC1_RES5 (0x0u)
#endif

/*ADC1_RES6: (0<<16)*/
#ifndef ADC1_RES6
  #define ADC1_RES6 (0x0u)
#endif

/*ADC1_RES_EIM: (0<<16)*/
#ifndef ADC1_RES_EIM
  #define ADC1_RES_EIM (0x0u)
#endif

/*ADC1_SQ1_4: 0|(0<<1)|(0<<2)|(0<<3)|(0<<4)|(0<<5)|(1<<6)|(0<<8)|(0<<9)|(0<<10)\
|(0<<11)|(0<<12)|(0<<13)|(1<<14)|(0<<16)|(0<<17)|(0<<18)|(0<<19)|(0<<20)|(0<<21\
)|(1<<22)|(0<<24)|(0<<25)|(0<<26)|(0<<27)|(0<<28)|(0<<29)|(1<<30)*/
#ifndef ADC1_SQ1_4
  #define ADC1_SQ1_4 (0x40404040u)
#endif

/*ADC1_SQ5_8: 0|(0<<1)|(0<<2)|(0<<3)|(0<<4)|(0<<5)|(1<<6)|(0<<8)|(0<<9)|(0<<10)\
|(0<<11)|(0<<12)|(0<<13)|(1<<14)|(0<<16)|(0<<17)|(0<<18)|(0<<19)|(0<<20)|(0<<21\
)|(1<<22)|(0<<24)|(0<<25)|(0<<26)|(0<<27)|(0<<28)|(0<<29)|(1<<30)*/
#ifndef ADC1_SQ5_8
  #define ADC1_SQ5_8 (0x40404040u)
#endif

/*ADC1_SQ_FB: (1<<8)*/
#ifndef ADC1_SQ_FB
  #define ADC1_SQ_FB (0x100u)
#endif

/*ADC1_STC_0_3: 0|(10<<8)|(0<<16)|(0<<24)*/
#ifndef ADC1_STC_0_3
  #define ADC1_STC_0_3 (0xA00u)
#endif

/*ADC1_STC_4_7: 20|(0<<8)|(10<<16)*/
#ifndef ADC1_STC_4_7
  #define ADC1_STC_4_7 (0xA0014u)
#endif

/*MF_REF2_CTRL: 1*/
#ifndef MF_REF2_CTRL
  #define MF_REF2_CTRL (0x1u)
#endif

/*MF_VMON_SEN_CTRL: 1|(0<<4)|(1<<5)*/
#ifndef MF_VMON_SEN_CTRL
  #define MF_VMON_SEN_CTRL (0x21u)
#endif


#endif
