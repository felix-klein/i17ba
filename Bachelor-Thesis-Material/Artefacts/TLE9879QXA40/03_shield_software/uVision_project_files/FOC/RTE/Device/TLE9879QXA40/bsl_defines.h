/*sha256=B13126CA1D443F16E64AE57809B571E86C7FAF439A2C1CF8FD9BA6E1EC630B22*/
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
created on:Mi Jul 11 14:45:35 2018
------------------------------------------------------------------------------*/

#ifndef _BSL_DEFINES_H
#define _BSL_DEFINES_H

#ifndef IFXConfigWizard_Version
  #define IFXConfigWizard_Version 1.8.6
#endif

/* XML Version 1.3.1 */
#ifndef BSL_XML_VERSION
  #define BSL_XML_VERSION 10301
#endif

#ifndef NAC_NAD_EN
  #define NAC_NAD_EN 0
#endif

/*NAD_NAC: 4261526085*/
#ifndef NAD_NAC
  #define NAD_NAC (0xFE01BA45u)
#endif

/*_NAC_: (1<<6)|5*/
#ifndef _NAC_
  #define _NAC_ (0x45u)
#endif

/*_NAD_: 1*/
#ifndef _NAD_
  #define _NAD_ (0x1u)
#endif


#endif
