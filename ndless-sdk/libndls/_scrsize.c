/****************************************************************************
 * The contents of this file are subject to the Mozilla Public
 * License Version 1.1 (the "License"); you may not use this file
 * except in compliance with the License. You may obtain a copy of
 * the License at http://www.mozilla.org/MPL/
 *
 * Software distributed under the License is distributed on an "AS
 * IS" basis, WITHOUT WARRANTY OF ANY KIND, either express or
 * implied. See the License for the specific language governing
 * rights and limitations under the License.
 *
 * The Original Code is Ndless code.
 *
 * The Initial Developer of the Original Code is Olivier ARMAND
 * <olivier.calc@gmail.com>.
 * Portions created by the Initial Developer are Copyright (C) 2011
 * the Initial Developer. All Rights Reserved.
 *
 * Contributor(s): 
 ****************************************************************************/

/* This is part of the old screen API and uses other parts. */
#define OLD_SCREEN_API

#include <os.h>

unsigned _scrsize(void) {
	if (lcd_isincolor())
		return SCREEN_WIDTH * SCREEN_HEIGHT * 2; // 16bpp
	return SCREEN_WIDTH * SCREEN_HEIGHT / 2; // 4bpp
}
