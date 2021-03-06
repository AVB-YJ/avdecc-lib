/*
 * Licensed under the MIT License (MIT)
 *
 * Copyright (c) 2014 AudioScience Inc.
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
 * avb_counters_response.h
 *
 * AVB INTERFACE counters response base class
 */

#pragma once

#include <stdint.h>
#include "avdecc-lib_build.h"

namespace avdecc_lib
{
class avb_counters_response
{
public:
    virtual ~avb_counters_response(){};
    ///
    /// \param name avdecc_lib::counter_labels
    ///
    /// \return the avb counter valid after the GET_COUNTERS command.
    ///
    AVDECC_CONTROLLER_LIB32_API virtual uint32_t STDCALL get_counter_valid(int name) = 0;

    ///
    /// \param name avdecc_lib::counter_labels
    ///
    /// \return the avb counter by name after the GET_COUNTERS command.
    ///
    AVDECC_CONTROLLER_LIB32_API virtual uint32_t STDCALL get_counter_by_name(int name) = 0;
};
}
