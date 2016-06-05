/*
 * Copyright (C) Volition, Inc. 1999.  All rights reserved.
 *
 * All source code herein is the property of Volition, Inc. You may not sell 
 * or otherwise commercially exploit the source or things you created based on the 
 * source.
 *
*/ 

/*
 * $Logfile: /Freespace2/code/GlobalIncs/crypt.h $
 * $Revision: 3 $
 * $Date: 8/05/99 2:05a $
 * $Author: Dave $
 *
 * Header for crypt stuff
 *
 * $Log: /Freespace2/code/GlobalIncs/crypt.h $
 * 
 * 3     8/05/99 2:05a Dave
 * Fixes. Optimized detail level stuff.
 * 
 * 2     10/07/98 10:52a Dave
 * Initial checkin.
 * 
 * 1     10/07/98 10:48a Dave
 * 
 * 3     5/19/98 12:19p Mike
 * Cheat codes!
 * 
 * 2     3/30/98 9:33p Allender
 * string encryption stuff for cheat codes
 * 
 * 1     3/30/98 3:20p Allender
 *
 * $NoKeywords: $
 */

#ifndef _CRYPT_H
#define _CRYPT_H

// define for the length of a crypted string
#define CRYPT_STRING_LENGTH		17

char *jcrypt (char *plainstring);

#endif
