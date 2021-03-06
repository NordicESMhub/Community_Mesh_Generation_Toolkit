///////////////////////////////////////////////////////////////////////////////
///
///	\file    Tessellate.h
///	\author  Paul Ullrich
///	\version December 5, 2012
///
///	<remarks>
///		Copyright 2000-2010 Paul Ullrich
///
///		This file is distributed as part of the Tempest source code package.
///		Permission is granted to use, copy, modify and distribute this
///		source code and its documentation under the terms of the GNU General
///		Public License.  This software is provided "as is" without express
///		or implied warranty.
///	</remarks>

#ifndef _TESSELLATE_H_
#define _TESSELLATE_H_

#include "GridElements.h"

///////////////////////////////////////////////////////////////////////////////

void Tessellate(
	NodeVector & vecNodes,
	FaceVector & vecFaces
);

///////////////////////////////////////////////////////////////////////////////

void RefineEverything(
	NodeVector & vecNodes,
	FaceVector & vecFaces,
	int nResolution
);

///////////////////////////////////////////////////////////////////////////////

#endif
