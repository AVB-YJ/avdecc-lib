/*
 * Licensed under the MIT License (MIT)
 *
 * Copyright (c) 2013 AudioScience Inc.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of
 * this software and associated documentation files (the "Software"), to deal in
 * the Software without restriction, including without limitation the rights to
 * use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
 * the Software, and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

/**
 * avdecc-lib_build.h
 *
 * Build file, which defines the API to be used.
 */

#pragma once

#if defined __linux__ || defined __MACH__

#define AVDECC_CONTROLLER_LIB32_API
#define STDCALL

#elif defined _WIN32 || defined _WIN64

#ifdef AVDECC_CONTROLLER_LIB32_EXPORTS
#define AVDECC_CONTROLLER_LIB32_API __declspec(dllexport)
#define STDCALL __stdcall

#elif AVDECC_LIB_STATIC

#define AVDECC_CONTROLLER_LIB32_API
#define STDCALL

#else

#define AVDECC_CONTROLLER_LIB32_API __declspec(dllimport)
#define STDCALL __stdcall

#endif

#endif
