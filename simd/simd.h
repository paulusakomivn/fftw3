/*
 * Copyright (c) 2002 Matteo Frigo
 * Copyright (c) 2002 Steven G. Johnson
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 */

#ifdef HAVE_SSE
#include "simd-sse.h"
#endif

#ifdef HAVE_SSE2
#include "simd-sse2.h"
#endif

#ifdef HAVE_ALTIVEC
#include "simd-altivec.h"
#endif

#define ALIGNED(p) (!(((long)p) % ALIGNMENT))
#define ALIGNEDA(p) (!(((long)p) % ALIGNMENTA))
#define SIMD_STRIDE_OK(x) (!(((x) * sizeof(R)) % ALIGNMENT))
#define SIMD_STRIDE_OKA(x) (!(((x) * sizeof(R)) % ALIGNMENTA))
#define SIMD_VSTRIDE_OK SIMD_STRIDE_OK

#define SIMD_ALIGNMENT ALIGNMENTA
