/*****************************************************************************
** $Source: /cvsroot/bluemsx/blueMSX/Src/Arch/ArchPrinter.h,v $
**
** $Revision: 1.4 $
**
** $Date: 2005/05/13 19:57:16 $
**
** More info: http://www.bluemsx.com
**
** Copyright (C) 2003-2004 Daniel Vikl, Tomas Karlsson
**
**  This software is provided 'as-is', without any express or implied
**  warranty.  In no event will the authors be held liable for any damages
**  arising from the use of this software.
**
**  Permission is granted to anyone to use this software for any purpose,
**  including commercial applications, and to alter it and redistribute it
**  freely, subject to the following restrictions:
**
**  1. The origin of this software must not be misrepresented; you must not
**     claim that you wrote the original software. If you use this software
**     in a product, an acknowledgment in the product documentation would be
**     appreciated but is not required.
**  2. Altered source versions must be plainly marked as such, and must not be
**     misrepresented as being the original software.
**  3. This notice may not be removed or altered from any source distribution.
**
******************************************************************************
*/
#ifndef ARCH_PRINTER_H
#define ARCH_PRINTER_H

#include "MsxTypes.h"

void archPrinterWrite(UInt8 value);
int archPrinterCreate(void);
void archPrinterDestroy(void);

void archForceFormFeed(void);

void archPrinterSetMsxFont(void* romData, UInt32 size);

#endif