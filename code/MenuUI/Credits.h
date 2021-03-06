/*
 * Copyright (C) Volition, Inc. 1999.  All rights reserved.
 *
 * All source code herein is the property of Volition, Inc. You may not sell 
 * or otherwise commercially exploit the source or things you created based on the 
 * source.
 *
*/ 

/*
 * $Logfile: /Freespace2/code/MenuUI/Credits.h $
 * $Revision: 2 $
 * $Date: 10/07/98 10:53a $
 * $Author: Dave $
 *
 * C header file for displaying game credits
 *
 * $Log: /Freespace2/code/MenuUI/Credits.h $
 * 
 * 2     10/07/98 10:53a Dave
 * Initial checkin.
 * 
 * 1     10/07/98 10:49a Dave
 * 
 * 3     8/31/97 6:38p Lawrance
 * pass in frametime to do_frame loop
 * 
 * 2     4/22/97 11:06a Lawrance
 * credits music playing, credits screen is a separate state
 *
 * $NoKeywords: $
 */

#ifndef __CREDITS_H__
#define __CREDITS_H__

void credits_init();
void credits_do_frame(float frametime);
void credits_close();

#endif /* __CREDITS_H__ */
