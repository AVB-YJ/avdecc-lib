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
 * stream_input_descriptor_response.h
 *
 * Public STREAM INPUT descriptor interface
 * The STREAM INPUT descriptor describes a sourced or sinked stream.
 */

#pragma once

#include <stdint.h>
#include "build.h"

namespace avdecc_lib
{
    class stream_input_descriptor_response
    {
    public:
        virtual ~stream_input_descriptor_response(){};
        /**
         * \return The name of the descriptor object. This may be user set through the use of a SET_NAME command.
         *	   The object name should be left blank (all zeros) by the manufacturer, with the manufacturer
         *	   defined value being provided in a localized form via the localized descripton field. By leaving
         *	   this field blank an AVDECC Controller can determine if the user has overridden the name and can
         *	   use this name rather than the localized name.
         */
        AVDECC_CONTROLLER_LIB32_API virtual uint8_t * STDCALL object_name() = 0;
        
        /**
         * \return The localized string reference pointing to the localized descriptor name.
         */
        AVDECC_CONTROLLER_LIB32_API virtual uint16_t STDCALL localized_description() = 0;

        /**
         * \return The descriptor index of the CLOCK DOMAIN descriptor providing the media clock for the stream.
         */
        AVDECC_CONTROLLER_LIB32_API virtual uint16_t STDCALL clock_domain_index() = 0;
        
        /**
         * \return The flags describing the capabilities or features of the stream.
         */
        AVDECC_CONTROLLER_LIB32_API virtual uint16_t STDCALL stream_flags() = 0;
        
        /**
         * \return True if the stream can be used as a clock synchronization source.
         */
        AVDECC_CONTROLLER_LIB32_API virtual bool STDCALL stream_flags_clock_sync_source() = 0;
        
        /**
         * \return True if the stream supports streaming at Class A.
         */
        AVDECC_CONTROLLER_LIB32_API virtual bool STDCALL stream_flags_class_a() = 0;
        
        /**
         * \return True if the stream supports streaming at Class B.
         */
        AVDECC_CONTROLLER_LIB32_API virtual bool STDCALL stream_flags_class_b() = 0;
        
        /**
         * \return True if the stream supports streaming with encrypted PDUs.
         */
        AVDECC_CONTROLLER_LIB32_API virtual bool STDCALL stream_flags_supports_encrypted() = 0;
        
        /**
         * \return True if the primary backup AVDECC Talker's Entity ID and primary backup AVDECC Talker's Unique ID are supported.
         */
        AVDECC_CONTROLLER_LIB32_API virtual bool STDCALL stream_flags_primary_backup_supported() = 0;
        
        /**
         * \return True if the primary backup AVDECC Talker's Entity ID and primary backup AVDECC Talker's Unique ID are valid.
         */
        AVDECC_CONTROLLER_LIB32_API virtual bool STDCALL stream_flags_primary_backup_valid() = 0;
        
        /**
         * \return True if the secondary backup AVDECC Talker's Entity ID and secondary backup AVDECC Talker's Unique ID are supported.
         */
        AVDECC_CONTROLLER_LIB32_API virtual bool STDCALL stream_flags_secondary_backup_supported() = 0;
        
        /**
         * \return True if the secondary backup AVDECC Talker's Entity ID and secondary backup AVDECC Talker's Unique ID are valid.
         */
        AVDECC_CONTROLLER_LIB32_API virtual bool STDCALL stream_flags_secondary_backup_valid() = 0;
        
        /**
         * \return True if the tertiary backup AVDECC Talker's Entity ID and tertiary backup AVDECC Talker's Unique ID are supported.
         */
        AVDECC_CONTROLLER_LIB32_API virtual bool STDCALL stream_flags_tertiary_backup_supported() = 0;
        
        /**
         * \return True if the tertiary backup AVDECC Talker's Entity ID and tertiary backup AVDECC Talker's Unique ID are valid.
         */
        AVDECC_CONTROLLER_LIB32_API virtual bool STDCALL stream_flags_tertiary_backup_valid() = 0;
        
        /**
         * \return The current format of the stream.
         */
        AVDECC_CONTROLLER_LIB32_API virtual const char * STDCALL current_format() = 0;
        
        /**
         * \return The number of formats supported by this audio stream. The maximum value
         *	       for this field is 47 for this version of AEM.
         */
        AVDECC_CONTROLLER_LIB32_API virtual uint16_t STDCALL number_of_formats() = 0;
        
        /**
         * \return The primary backup AVDECC Talker's Entity ID.
         */
        AVDECC_CONTROLLER_LIB32_API virtual uint64_t STDCALL backup_talker_entity_id_0() = 0;
        
        /**
         * \return The primary backup AVDECC Talker's Unique ID.
         */
        AVDECC_CONTROLLER_LIB32_API virtual uint16_t STDCALL backup_talker_unique_0() = 0;
        
        /**
         * \return The secondary backup AVDECC Talker's Entity ID.
         */
        AVDECC_CONTROLLER_LIB32_API virtual uint64_t STDCALL backup_talker_entity_id_1() = 0;
        
        /**
         * \return The secondary backup AVDECC Talker's Unique ID.
         */
        AVDECC_CONTROLLER_LIB32_API virtual uint16_t STDCALL backup_talker_unique_1() = 0;
        
        /**
         * \return The tertiary backup AVDECC Talker's Entity ID.
         */
        AVDECC_CONTROLLER_LIB32_API virtual uint64_t STDCALL backup_talker_entity_id_2() = 0;
        
        /**
         * \return The tertiary backup AVDECC Talker's Unique ID.
         */
        AVDECC_CONTROLLER_LIB32_API virtual uint16_t STDCALL backup_talker_unique_2() = 0;
        
        /**
         * \return The Entity ID of the AVDECC Talker that this stream is backing up.
         */
        AVDECC_CONTROLLER_LIB32_API virtual uint64_t STDCALL backedup_talker_entity_id() = 0;
        
        /**
         * \return The Unique ID of the AVDECC Talker that this stream is backing up.
         */
        AVDECC_CONTROLLER_LIB32_API virtual uint16_t STDCALL backedup_talker_unique() = 0;
        
        /**
         * \return The descriptor index of the AVB INTERFACE descriptor from which this stream
         *	       is sourced or to which it is sinked.
         */
        AVDECC_CONTROLLER_LIB32_API virtual uint16_t STDCALL avb_interface_index() = 0;
        
        /**
         * \return The length in nanoseconds of the MAC's ingress buffer size.
         */
        AVDECC_CONTROLLER_LIB32_API virtual uint32_t STDCALL buffer_length() = 0;
    };
}
