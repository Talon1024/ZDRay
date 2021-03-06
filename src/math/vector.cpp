//-----------------------------------------------------------------------------
// Note: this is a modified version of dlight. It is not the original software.
//-----------------------------------------------------------------------------
//
// Copyright (c) 2013-2014 Samuel Villarreal
// svkaiser@gmail.com
//
// This software is provided 'as-is', without any express or implied
// warranty. In no event will the authors be held liable for any damages
// arising from the use of this software.
//
// Permission is granted to anyone to use this software for any purpose,
// including commercial applications, and to alter it and redistribute it
// freely, subject to the following restrictions:
//
//    1. The origin of this software must not be misrepresented; you must not
//    claim that you wrote the original software. If you use this software
//    in a product, an acknowledgment in the product documentation would be
//    appreciated but is not required.
//
//   2. Altered source versions must be plainly marked as such, and must not be
//   misrepresented as being the original software.
//
//    3. This notice may not be removed or altered from any source
//    distribution.
//
//-----------------------------------------------------------------------------
//
// DESCRIPTION: Vector operations
//
//-----------------------------------------------------------------------------

#include <math.h>
#include "mathlib.h"
#include <assert.h>

const kexVec3 kexVec3::vecRight(1, 0, 0);
const kexVec3 kexVec3::vecUp(0, 0, 1);
const kexVec3 kexVec3::vecForward(0, 1, 0);

const kexVec2 kexVec2::vecRight(1, 0);
const kexVec2 kexVec2::vecUp(0, 1);
kexVec2 kexVec2::vecZero(0, 0);
