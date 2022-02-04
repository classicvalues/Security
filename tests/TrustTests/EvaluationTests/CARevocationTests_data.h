/*
 * Copyright (c) 2020 Apple Inc. All Rights Reserved.
 *
 * @APPLE_LICENSE_HEADER_START@
 *
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this
 * file.
 *
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 *
 * @APPLE_LICENSE_HEADER_END@
 *
 */
#ifndef _TRUSTTESTS_CA_REVOCATION_TESTS_H_
#define _TRUSTTESTS_CA_REVOCATION_TESTS_H_

uint8_t _acleaf[] = {
    0x30,0x82,0x06,0x18,0x30,0x82,0x05,0x00,0xA0,0x03,
    0x02,0x01,0x02,0x02,0x10,0x5A,0xB9,0xC3,0x64,0xE1,
    0xC2,0x69,0xF3,0x2C,0x5A,0x20,0x36,0x31,0x3B,0x73,
    0x74,0x30,0x0D,0x06,0x09,0x2A,0x86,0x48,0x86,0xF7,
    0x0D,0x01,0x01,0x0B,0x05,0x00,0x30,0x6A,0x31,0x24,
    0x30,0x22,0x06,0x03,0x55,0x04,0x03,0x0C,0x1B,0x41,
    0x70,0x70,0x6C,0x65,0x20,0x43,0x6F,0x72,0x70,0x6F,
    0x72,0x61,0x74,0x65,0x20,0x53,0x65,0x72,0x76,0x65,
    0x72,0x20,0x43,0x41,0x20,0x31,0x31,0x20,0x30,0x1E,
    0x06,0x03,0x55,0x04,0x0B,0x0C,0x17,0x43,0x65,0x72,
    0x74,0x69,0x66,0x69,0x63,0x61,0x74,0x69,0x6F,0x6E,
    0x20,0x41,0x75,0x74,0x68,0x6F,0x72,0x69,0x74,0x79,
    0x31,0x13,0x30,0x11,0x06,0x03,0x55,0x04,0x0A,0x0C,
    0x0A,0x41,0x70,0x70,0x6C,0x65,0x20,0x49,0x6E,0x63,
    0x2E,0x31,0x0B,0x30,0x09,0x06,0x03,0x55,0x04,0x06,
    0x13,0x02,0x55,0x53,0x30,0x1E,0x17,0x0D,0x32,0x30,
    0x30,0x36,0x31,0x35,0x32,0x32,0x35,0x32,0x31,0x34,
    0x5A,0x17,0x0D,0x32,0x32,0x30,0x37,0x31,0x35,0x32,
    0x32,0x35,0x32,0x31,0x34,0x5A,0x30,0x79,0x31,0x18,
    0x30,0x16,0x06,0x03,0x55,0x04,0x03,0x0C,0x0F,0x72,
    0x61,0x64,0x61,0x72,0x2E,0x61,0x70,0x70,0x6C,0x65,
    0x2E,0x63,0x6F,0x6D,0x31,0x26,0x30,0x24,0x06,0x03,
    0x55,0x04,0x0B,0x0C,0x1D,0x6D,0x61,0x6E,0x61,0x67,
    0x65,0x6D,0x65,0x6E,0x74,0x3A,0x69,0x64,0x6D,0x73,
    0x2E,0x67,0x72,0x6F,0x75,0x70,0x2E,0x31,0x30,0x34,
    0x32,0x39,0x33,0x36,0x31,0x13,0x30,0x11,0x06,0x03,
    0x55,0x04,0x0A,0x0C,0x0A,0x41,0x70,0x70,0x6C,0x65,
    0x20,0x49,0x6E,0x63,0x2E,0x31,0x13,0x30,0x11,0x06,
    0x03,0x55,0x04,0x08,0x0C,0x0A,0x43,0x61,0x6C,0x69,
    0x66,0x6F,0x72,0x6E,0x69,0x61,0x31,0x0B,0x30,0x09,
    0x06,0x03,0x55,0x04,0x06,0x13,0x02,0x55,0x53,0x30,
    0x82,0x01,0x22,0x30,0x0D,0x06,0x09,0x2A,0x86,0x48,
    0x86,0xF7,0x0D,0x01,0x01,0x01,0x05,0x00,0x03,0x82,
    0x01,0x0F,0x00,0x30,0x82,0x01,0x0A,0x02,0x82,0x01,
    0x01,0x00,0xE4,0xFD,0xE1,0xE3,0x80,0x9A,0xC6,0xC4,
    0x77,0xA9,0x7F,0xC5,0xBA,0xA4,0xA9,0x46,0x46,0x89,
    0x3E,0x74,0x6E,0x50,0x06,0xA5,0x36,0x02,0x24,0xED,
    0xAF,0x4A,0xAC,0xBD,0x7C,0x1F,0x01,0x3B,0xF5,0xD5,
    0xCF,0xC2,0xDB,0xC3,0x13,0xF0,0xB3,0x71,0x0B,0xC1,
    0x99,0xB3,0xF8,0xAE,0x29,0xD0,0x8D,0xCD,0x4C,0x09,
    0x4E,0x04,0x9A,0x43,0x0D,0x96,0x06,0x3F,0xF2,0xC3,
    0xD8,0xC8,0xAB,0x54,0xC1,0x82,0x64,0xEF,0xB2,0x14,
    0x77,0xB9,0xA8,0xE6,0x29,0xE9,0x0A,0xF2,0xB1,0x44,
    0x1A,0x93,0xA3,0x3E,0xAB,0xF2,0xC0,0x78,0x0A,0xF9,
    0x9C,0x1D,0xB5,0xB6,0x86,0x33,0x0C,0xB3,0x62,0xD1,
    0x6B,0x18,0xB1,0xD1,0x3C,0x84,0x9A,0x2D,0xB3,0x6C,
    0x91,0x09,0x19,0x60,0xCF,0xEA,0x63,0x8B,0xAC,0xF4,
    0xCB,0x79,0xB4,0x10,0x42,0xD4,0x7B,0xCB,0x8D,0x86,
    0xD2,0x13,0xB9,0xE5,0x21,0x8B,0xDE,0x0D,0x20,0x5F,
    0x99,0x1A,0xD1,0x57,0xF9,0xBF,0xF6,0x90,0x25,0x97,
    0x84,0xCF,0x64,0xC1,0x3A,0x6D,0x50,0x2C,0xFD,0x02,
    0x51,0x47,0x0F,0xE6,0xE5,0x4D,0x19,0x10,0xB9,0xA5,
    0xDA,0x53,0x69,0x09,0xE2,0x51,0x31,0xAF,0x41,0x23,
    0x80,0x3B,0x65,0xDE,0x9C,0x9B,0xBD,0x9B,0xF2,0x69,
    0xDC,0xB9,0x73,0x88,0x16,0x30,0xB2,0x7A,0x0B,0xC2,
    0xDA,0xE6,0x3F,0x9B,0x65,0x9B,0x53,0xE7,0x17,0xCF,
    0x09,0x98,0xA8,0x72,0x49,0xAB,0x59,0x13,0x6E,0x41,
    0x94,0xF1,0xA4,0x4A,0xC8,0x05,0xEA,0x13,0xE5,0x78,
    0x47,0x0D,0xC1,0xD7,0x6D,0xAD,0x39,0x96,0x35,0x82,
    0x76,0xB2,0x8A,0x90,0xFF,0xF3,0xF3,0x4D,0x02,0x03,
    0x01,0x00,0x01,0xA3,0x82,0x02,0xA9,0x30,0x82,0x02,
    0xA5,0x30,0x0C,0x06,0x03,0x55,0x1D,0x13,0x01,0x01,
    0xFF,0x04,0x02,0x30,0x00,0x30,0x1F,0x06,0x03,0x55,
    0x1D,0x23,0x04,0x18,0x30,0x16,0x80,0x14,0xB6,0x23,
    0xB5,0x5A,0xEB,0x7E,0xEB,0xB6,0xF3,0x28,0x1E,0x04,
    0xD0,0xAD,0x5C,0x93,0xA9,0xA4,0x9A,0x6D,0x30,0x81,
    0x83,0x06,0x08,0x2B,0x06,0x01,0x05,0x05,0x07,0x01,
    0x01,0x04,0x77,0x30,0x75,0x30,0x39,0x06,0x08,0x2B,
    0x06,0x01,0x05,0x05,0x07,0x30,0x02,0x86,0x2D,0x68,
    0x74,0x74,0x70,0x3A,0x2F,0x2F,0x63,0x65,0x72,0x74,
    0x73,0x2E,0x61,0x70,0x70,0x6C,0x65,0x2E,0x63,0x6F,
    0x6D,0x2F,0x61,0x70,0x70,0x6C,0x65,0x63,0x6F,0x72,
    0x70,0x73,0x65,0x72,0x76,0x65,0x72,0x63,0x61,0x31,
    0x2E,0x64,0x65,0x72,0x30,0x38,0x06,0x08,0x2B,0x06,
    0x01,0x05,0x05,0x07,0x30,0x01,0x86,0x2C,0x68,0x74,
    0x74,0x70,0x3A,0x2F,0x2F,0x6F,0x63,0x73,0x70,0x2E,
    0x61,0x70,0x70,0x6C,0x65,0x2E,0x63,0x6F,0x6D,0x2F,
    0x6F,0x63,0x73,0x70,0x30,0x33,0x2D,0x63,0x6F,0x72,
    0x70,0x73,0x65,0x72,0x76,0x65,0x72,0x63,0x61,0x31,
    0x30,0x34,0x30,0x4C,0x06,0x03,0x55,0x1D,0x11,0x04,
    0x45,0x30,0x43,0x82,0x0F,0x72,0x61,0x64,0x61,0x72,
    0x2E,0x61,0x70,0x70,0x6C,0x65,0x2E,0x63,0x6F,0x6D,
    0x82,0x17,0x72,0x61,0x64,0x61,0x72,0x2D,0x69,0x6E,
    0x74,0x2D,0x72,0x6E,0x6F,0x2E,0x61,0x70,0x70,0x6C,
    0x65,0x2E,0x63,0x6F,0x6D,0x82,0x17,0x72,0x61,0x64,
    0x61,0x72,0x2D,0x69,0x6E,0x74,0x2D,0x6D,0x64,0x6E,
    0x2E,0x61,0x70,0x70,0x6C,0x65,0x2E,0x63,0x6F,0x6D,
    0x30,0x82,0x01,0x12,0x06,0x03,0x55,0x1D,0x20,0x04,
    0x82,0x01,0x09,0x30,0x82,0x01,0x05,0x30,0x82,0x01,
    0x01,0x06,0x0A,0x2A,0x86,0x48,0x86,0xF7,0x63,0x64,
    0x05,0x0F,0x02,0x30,0x81,0xF2,0x30,0x81,0xA4,0x06,
    0x08,0x2B,0x06,0x01,0x05,0x05,0x07,0x02,0x02,0x30,
    0x81,0x97,0x0C,0x81,0x94,0x52,0x65,0x6C,0x69,0x61,
    0x6E,0x63,0x65,0x20,0x6F,0x6E,0x20,0x74,0x68,0x69,
    0x73,0x20,0x63,0x65,0x72,0x74,0x69,0x66,0x69,0x63,
    0x61,0x74,0x65,0x20,0x62,0x79,0x20,0x61,0x6E,0x79,
    0x20,0x70,0x61,0x72,0x74,0x79,0x20,0x61,0x73,0x73,
    0x75,0x6D,0x65,0x73,0x20,0x61,0x63,0x63,0x65,0x70,
    0x74,0x61,0x6E,0x63,0x65,0x20,0x6F,0x66,0x20,0x61,
    0x6E,0x79,0x20,0x61,0x70,0x70,0x6C,0x69,0x63,0x61,
    0x62,0x6C,0x65,0x20,0x74,0x65,0x72,0x6D,0x73,0x20,
    0x61,0x6E,0x64,0x20,0x63,0x6F,0x6E,0x64,0x69,0x74,
    0x69,0x6F,0x6E,0x73,0x20,0x6F,0x66,0x20,0x75,0x73,
    0x65,0x20,0x61,0x6E,0x64,0x2F,0x6F,0x72,0x20,0x63,
    0x65,0x72,0x74,0x69,0x66,0x69,0x63,0x61,0x74,0x69,
    0x6F,0x6E,0x20,0x70,0x72,0x61,0x63,0x74,0x69,0x63,
    0x65,0x20,0x73,0x74,0x61,0x74,0x65,0x6D,0x65,0x6E,
    0x74,0x73,0x2E,0x30,0x49,0x06,0x08,0x2B,0x06,0x01,
    0x05,0x05,0x07,0x02,0x01,0x16,0x3D,0x68,0x74,0x74,
    0x70,0x73,0x3A,0x2F,0x2F,0x63,0x65,0x72,0x74,0x69,
    0x66,0x69,0x63,0x61,0x74,0x65,0x6D,0x61,0x6E,0x61,
    0x67,0x65,0x72,0x2E,0x61,0x70,0x70,0x6C,0x65,0x2E,
    0x63,0x6F,0x6D,0x2F,0x23,0x68,0x65,0x6C,0x70,0x2F,
    0x70,0x6F,0x6C,0x69,0x63,0x69,0x65,0x73,0x2F,0x63,
    0x6F,0x72,0x70,0x6F,0x72,0x61,0x74,0x65,0x30,0x1D,
    0x06,0x03,0x55,0x1D,0x25,0x04,0x16,0x30,0x14,0x06,
    0x08,0x2B,0x06,0x01,0x05,0x05,0x07,0x03,0x01,0x06,
    0x08,0x2B,0x06,0x01,0x05,0x05,0x07,0x03,0x02,0x30,
    0x3C,0x06,0x03,0x55,0x1D,0x1F,0x04,0x35,0x30,0x33,
    0x30,0x31,0xA0,0x2F,0xA0,0x2D,0x86,0x2B,0x68,0x74,
    0x74,0x70,0x3A,0x2F,0x2F,0x63,0x72,0x6C,0x2E,0x61,
    0x70,0x70,0x6C,0x65,0x2E,0x63,0x6F,0x6D,0x2F,0x61,
    0x70,0x70,0x6C,0x65,0x63,0x6F,0x72,0x70,0x73,0x65,
    0x72,0x76,0x65,0x72,0x63,0x61,0x31,0x2E,0x63,0x72,
    0x6C,0x30,0x1D,0x06,0x03,0x55,0x1D,0x0E,0x04,0x16,
    0x04,0x14,0x9E,0xD4,0xB9,0x32,0xC7,0x63,0xBA,0xEF,
    0x4B,0x99,0xE4,0x2F,0xDD,0x35,0x8A,0xD1,0x2B,0xF8,
    0xB8,0xF4,0x30,0x0E,0x06,0x03,0x55,0x1D,0x0F,0x01,
    0x01,0xFF,0x04,0x04,0x03,0x02,0x05,0xA0,0x30,0x0D,
    0x06,0x09,0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x01,
    0x0B,0x05,0x00,0x03,0x82,0x01,0x01,0x00,0x39,0x1C,
    0x08,0xE9,0x55,0x6E,0x60,0xB5,0xC9,0x41,0x5B,0xE9,
    0xC3,0x5E,0xA3,0xE9,0x4C,0xF2,0xCA,0xAB,0x4A,0xB9,
    0xE1,0x83,0xE8,0xFE,0x1B,0xCA,0x9C,0xE0,0xBE,0xE7,
    0xDE,0x37,0xA0,0xE1,0x0B,0xDB,0xAC,0x29,0x13,0x9F,
    0x9B,0x0E,0x3F,0xCA,0x60,0xC4,0x7E,0x95,0x6C,0x41,
    0xA8,0xF5,0x7A,0x7B,0x92,0xB6,0xC9,0xB8,0xAA,0x7D,
    0x7E,0xD5,0xF4,0x6E,0x33,0xFC,0x8F,0xDA,0x2A,0x2B,
    0xEF,0x31,0x9C,0x43,0x5D,0x45,0x25,0x65,0xE3,0x65,
    0x4D,0x14,0x04,0x85,0x72,0x51,0x9B,0x40,0x69,0x41,
    0xCC,0x93,0xE7,0x73,0xC6,0xF3,0x63,0x77,0x91,0x27,
    0x1F,0x2B,0xB2,0x3E,0x15,0x51,0x23,0x49,0x34,0x11,
    0x1D,0xB3,0x7F,0x8B,0x75,0xB2,0xC4,0xA0,0x7A,0x3B,
    0xF7,0x62,0x1C,0x64,0xFA,0x11,0x03,0xE7,0x84,0xAE,
    0xF4,0x8B,0x35,0xA7,0x5D,0x8D,0x11,0x0E,0x0B,0xD7,
    0x36,0x14,0xC4,0xD4,0x3C,0x99,0x5D,0xF2,0x96,0x97,
    0x31,0x32,0xBD,0xF3,0x87,0x56,0xE5,0x9B,0x25,0xCA,
    0x48,0xE9,0x2F,0xF1,0x93,0x98,0x8F,0xDF,0xD3,0x6E,
    0x1A,0x99,0x51,0xF9,0x55,0x52,0xE6,0xBF,0x61,0x8D,
    0xAB,0x26,0xDD,0x5F,0x2A,0x6F,0x61,0x02,0x28,0x0F,
    0x92,0x41,0x76,0xD2,0xFA,0x05,0x79,0xB6,0xBE,0x7B,
    0xB1,0xAE,0xCC,0x89,0xF1,0x5F,0x1F,0x27,0x79,0x30,
    0xAB,0x0F,0x31,0xE0,0x1C,0x40,0x05,0x16,0xAF,0x41,
    0x8C,0x7A,0x4D,0x26,0x5A,0x8C,0x98,0xEC,0x57,0xCF,
    0x94,0xFB,0x3D,0x56,0xB2,0xF5,0x10,0x76,0x4B,0x2D,
    0x77,0x9C,0x4B,0x34,0xC0,0x04,0xAE,0xD0,0xC1,0xAB,
    0x0E,0x61,0xF8,0x74
};

uint8_t _acserverca1[] = {
    0x30,0x82,0x04,0x40,0x30,0x82,0x03,0x28,0xA0,0x03,
    0x02,0x01,0x02,0x02,0x08,0x0D,0x5D,0xDF,0x69,0x27,
    0x9B,0x23,0x11,0x30,0x0D,0x06,0x09,0x2A,0x86,0x48,
    0x86,0xF7,0x0D,0x01,0x01,0x0B,0x05,0x00,0x30,0x66,
    0x31,0x20,0x30,0x1E,0x06,0x03,0x55,0x04,0x03,0x0C,
    0x17,0x41,0x70,0x70,0x6C,0x65,0x20,0x43,0x6F,0x72,
    0x70,0x6F,0x72,0x61,0x74,0x65,0x20,0x52,0x6F,0x6F,
    0x74,0x20,0x43,0x41,0x31,0x20,0x30,0x1E,0x06,0x03,
    0x55,0x04,0x0B,0x0C,0x17,0x43,0x65,0x72,0x74,0x69,
    0x66,0x69,0x63,0x61,0x74,0x69,0x6F,0x6E,0x20,0x41,
    0x75,0x74,0x68,0x6F,0x72,0x69,0x74,0x79,0x31,0x13,
    0x30,0x11,0x06,0x03,0x55,0x04,0x0A,0x0C,0x0A,0x41,
    0x70,0x70,0x6C,0x65,0x20,0x49,0x6E,0x63,0x2E,0x31,
    0x0B,0x30,0x09,0x06,0x03,0x55,0x04,0x06,0x13,0x02,
    0x55,0x53,0x30,0x1E,0x17,0x0D,0x31,0x34,0x30,0x33,
    0x32,0x36,0x31,0x36,0x35,0x33,0x33,0x37,0x5A,0x17,
    0x0D,0x32,0x39,0x30,0x33,0x32,0x36,0x31,0x36,0x35,
    0x33,0x33,0x37,0x5A,0x30,0x6A,0x31,0x24,0x30,0x22,
    0x06,0x03,0x55,0x04,0x03,0x0C,0x1B,0x41,0x70,0x70,
    0x6C,0x65,0x20,0x43,0x6F,0x72,0x70,0x6F,0x72,0x61,
    0x74,0x65,0x20,0x53,0x65,0x72,0x76,0x65,0x72,0x20,
    0x43,0x41,0x20,0x31,0x31,0x20,0x30,0x1E,0x06,0x03,
    0x55,0x04,0x0B,0x0C,0x17,0x43,0x65,0x72,0x74,0x69,
    0x66,0x69,0x63,0x61,0x74,0x69,0x6F,0x6E,0x20,0x41,
    0x75,0x74,0x68,0x6F,0x72,0x69,0x74,0x79,0x31,0x13,
    0x30,0x11,0x06,0x03,0x55,0x04,0x0A,0x0C,0x0A,0x41,
    0x70,0x70,0x6C,0x65,0x20,0x49,0x6E,0x63,0x2E,0x31,
    0x0B,0x30,0x09,0x06,0x03,0x55,0x04,0x06,0x13,0x02,
    0x55,0x53,0x30,0x82,0x01,0x22,0x30,0x0D,0x06,0x09,
    0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x01,0x01,0x05,
    0x00,0x03,0x82,0x01,0x0F,0x00,0x30,0x82,0x01,0x0A,
    0x02,0x82,0x01,0x01,0x00,0xE3,0xE9,0x68,0xA1,0xE7,
    0x9B,0xBC,0xF7,0x87,0x48,0x22,0x9B,0x09,0x5F,0xC8,
    0xC9,0xA6,0x9A,0xCC,0xCD,0x40,0x16,0xF8,0xA1,0xD0,
    0xF6,0x27,0x15,0x4C,0xE7,0xD3,0xC1,0x6E,0xDF,0x11,
    0x06,0x9A,0x63,0xC5,0x87,0x55,0xDA,0xDF,0xAF,0x15,
    0x31,0x98,0x45,0xF4,0x8C,0xC2,0x3C,0x93,0xA2,0x1C,
    0xC0,0xF0,0x2A,0x77,0xF4,0x19,0x94,0x96,0xF4,0x7B,
    0x52,0x74,0x84,0x86,0x5A,0x66,0x7D,0x68,0x92,0xA1,
    0x5E,0xE1,0xA9,0x21,0xE0,0x14,0x38,0x84,0x21,0x32,
    0x8B,0x21,0x95,0x47,0x27,0x17,0xA0,0xBA,0x7B,0xD7,
    0xD8,0xD7,0x25,0x20,0x77,0xCB,0x62,0x8B,0xC6,0x0F,
    0xC1,0x49,0xC6,0x2B,0x42,0xE9,0x02,0x70,0x9E,0x99,
    0x44,0x77,0x51,0x05,0x62,0x78,0xBC,0xB0,0xD2,0xA7,
    0xA6,0x91,0x71,0x25,0x58,0x13,0x8D,0x8A,0xC8,0x46,
    0x41,0xDB,0x89,0x41,0xC5,0x23,0x7D,0x84,0xE9,0x02,
    0xB0,0x1A,0xF8,0x5D,0x66,0xD0,0xE1,0xE1,0x72,0xF4,
    0xA4,0x65,0x79,0x97,0x0A,0x7B,0xC0,0xE3,0x24,0x74,
    0x83,0x4A,0x81,0x5E,0xC3,0xA2,0xBF,0x51,0x32,0x96,
    0x8F,0x28,0x32,0x08,0x49,0xFB,0x02,0x43,0x62,0x42,
    0xB3,0x84,0x84,0x30,0x1B,0x28,0xE4,0x05,0xB9,0xBB,
    0xD6,0xB5,0xC4,0xA2,0xAB,0x8E,0x57,0x53,0x29,0xBC,
    0x0B,0x4F,0xD6,0x1E,0xA4,0x52,0xDC,0x16,0x1C,0x95,
    0xC2,0x8D,0x97,0x6B,0xBB,0x3E,0xC8,0x93,0xC7,0x01,
    0x97,0x1E,0x18,0x09,0x59,0x39,0x0F,0x5D,0x73,0x4E,
    0xA9,0x8F,0x49,0xFD,0x49,0x16,0xBD,0x25,0xEC,0xD9,
    0x05,0xEA,0xE3,0xB0,0x04,0x0E,0xD9,0x09,0x9E,0xC0,
    0xB7,0x02,0x03,0x01,0x00,0x01,0xA3,0x81,0xED,0x30,
    0x81,0xEA,0x30,0x41,0x06,0x08,0x2B,0x06,0x01,0x05,
    0x05,0x07,0x01,0x01,0x04,0x35,0x30,0x33,0x30,0x31,
    0x06,0x08,0x2B,0x06,0x01,0x05,0x05,0x07,0x30,0x01,
    0x86,0x25,0x68,0x74,0x74,0x70,0x3A,0x2F,0x2F,0x6F,
    0x63,0x73,0x70,0x2E,0x61,0x70,0x70,0x6C,0x65,0x2E,
    0x63,0x6F,0x6D,0x2F,0x6F,0x63,0x73,0x70,0x30,0x34,
    0x2D,0x63,0x6F,0x72,0x70,0x72,0x6F,0x6F,0x74,0x30,
    0x1D,0x06,0x03,0x55,0x1D,0x0E,0x04,0x16,0x04,0x14,
    0xB6,0x23,0xB5,0x5A,0xEB,0x7E,0xEB,0xB6,0xF3,0x28,
    0x1E,0x04,0xD0,0xAD,0x5C,0x93,0xA9,0xA4,0x9A,0x6D,
    0x30,0x0F,0x06,0x03,0x55,0x1D,0x13,0x01,0x01,0xFF,
    0x04,0x05,0x30,0x03,0x01,0x01,0xFF,0x30,0x1F,0x06,
    0x03,0x55,0x1D,0x23,0x04,0x18,0x30,0x16,0x80,0x14,
    0x35,0x20,0x26,0xCE,0x85,0xBE,0x49,0x26,0x20,0x01,
    0xDD,0xC8,0xEE,0xFF,0x3D,0x68,0xC8,0xD0,0xDF,0xF5,
    0x30,0x32,0x06,0x03,0x55,0x1D,0x1F,0x04,0x2B,0x30,
    0x29,0x30,0x27,0xA0,0x25,0xA0,0x23,0x86,0x21,0x68,
    0x74,0x74,0x70,0x3A,0x2F,0x2F,0x63,0x72,0x6C,0x2E,
    0x61,0x70,0x70,0x6C,0x65,0x2E,0x63,0x6F,0x6D,0x2F,
    0x63,0x6F,0x72,0x70,0x72,0x6F,0x6F,0x74,0x2E,0x63,
    0x72,0x6C,0x30,0x0E,0x06,0x03,0x55,0x1D,0x0F,0x01,
    0x01,0xFF,0x04,0x04,0x03,0x02,0x01,0x06,0x30,0x10,
    0x06,0x0A,0x2A,0x86,0x48,0x86,0xF7,0x63,0x64,0x06,
    0x18,0x04,0x04,0x02,0x05,0x00,0x30,0x0D,0x06,0x09,
    0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x01,0x0B,0x05,
    0x00,0x03,0x82,0x01,0x01,0x00,0x0D,0x34,0x2F,0xB2,
    0xC2,0xF1,0xF0,0xDC,0xA2,0x9F,0x8F,0x41,0x9C,0x84,
    0xCA,0x66,0xDC,0x90,0x9C,0xC4,0x90,0xC9,0xDA,0xD9,
    0x37,0x4F,0xAE,0xC9,0xD9,0xCF,0xE2,0x4B,0x8E,0x59,
    0x47,0x9A,0x83,0x32,0xDF,0xA7,0x97,0x45,0x9D,0x1E,
    0x46,0x58,0x5D,0xD7,0x1C,0x17,0xC5,0x1C,0x9E,0xA2,
    0x74,0xF6,0x73,0x77,0xF9,0x35,0xAD,0x67,0xC3,0x3C,
    0xD5,0x87,0x1E,0x96,0x16,0x3D,0x8B,0x40,0x51,0xA8,
    0x16,0xA0,0x53,0x1C,0xF5,0xCB,0x32,0xC4,0xA8,0xC5,
    0x2A,0x3A,0x21,0xD9,0xFD,0x51,0x81,0x59,0x6F,0x1B,
    0xF9,0x40,0x86,0x96,0xCF,0xA0,0x73,0xA3,0x5B,0x60,
    0x02,0xB6,0x21,0xAD,0x39,0xF5,0xFA,0xFC,0xA8,0x6E,
    0x34,0x01,0x7C,0x59,0xF3,0x73,0xFC,0xBA,0xBE,0xF4,
    0x4E,0x16,0x36,0x9E,0x51,0x77,0x80,0xF5,0xA1,0xC7,
    0xAE,0xFF,0x04,0x71,0x6B,0xB3,0xBE,0x3E,0xA7,0xD1,
    0x74,0x2B,0x4D,0x58,0x58,0x3B,0x94,0x74,0xA3,0x65,
    0x27,0xC1,0x74,0xA9,0xD2,0xF9,0x8A,0x81,0xB3,0x47,
    0xB3,0x06,0x8E,0x9C,0xE6,0x42,0x86,0x77,0xF8,0x96,
    0x99,0x1F,0xED,0x30,0x8F,0x4B,0xD5,0x0F,0x5E,0x71,
    0x6C,0xAC,0xDB,0x48,0xE3,0x3C,0x58,0x2B,0xE8,0x9B,
    0x9E,0x24,0x8A,0x5D,0xCD,0x56,0x5F,0xA9,0x07,0xEA,
    0xCD,0x2C,0x94,0x3D,0xA7,0x7F,0x1B,0xE8,0x10,0xB8,
    0xD2,0x1E,0x43,0x5A,0x0D,0x13,0xDA,0xF5,0x3F,0x10,
    0x9D,0x2D,0x1F,0xE6,0x94,0x11,0x2F,0x40,0xFF,0x5F,
    0x21,0x96,0x02,0xF0,0x5F,0x54,0x56,0x32,0x90,0xD5,
    0x67,0xAE,0x29,0x0E,0x22,0x70,0xE3,0x2B,0x7A,0x95,
    0xC0,0xC7
};

uint8_t _acrootca[] = {
    0x30,0x82,0x03,0xB1,0x30,0x82,0x02,0x99,0xA0,0x03,
    0x02,0x01,0x02,0x02,0x08,0x14,0x99,0x6B,0x4A,0x6A,
    0xE4,0x40,0xA0,0x30,0x0D,0x06,0x09,0x2A,0x86,0x48,
    0x86,0xF7,0x0D,0x01,0x01,0x0B,0x05,0x00,0x30,0x66,
    0x31,0x20,0x30,0x1E,0x06,0x03,0x55,0x04,0x03,0x0C,
    0x17,0x41,0x70,0x70,0x6C,0x65,0x20,0x43,0x6F,0x72,
    0x70,0x6F,0x72,0x61,0x74,0x65,0x20,0x52,0x6F,0x6F,
    0x74,0x20,0x43,0x41,0x31,0x20,0x30,0x1E,0x06,0x03,
    0x55,0x04,0x0B,0x0C,0x17,0x43,0x65,0x72,0x74,0x69,
    0x66,0x69,0x63,0x61,0x74,0x69,0x6F,0x6E,0x20,0x41,
    0x75,0x74,0x68,0x6F,0x72,0x69,0x74,0x79,0x31,0x13,
    0x30,0x11,0x06,0x03,0x55,0x04,0x0A,0x0C,0x0A,0x41,
    0x70,0x70,0x6C,0x65,0x20,0x49,0x6E,0x63,0x2E,0x31,
    0x0B,0x30,0x09,0x06,0x03,0x55,0x04,0x06,0x13,0x02,
    0x55,0x53,0x30,0x1E,0x17,0x0D,0x31,0x33,0x30,0x37,
    0x31,0x36,0x31,0x39,0x32,0x30,0x34,0x35,0x5A,0x17,
    0x0D,0x32,0x39,0x30,0x37,0x31,0x37,0x31,0x39,0x32,
    0x30,0x34,0x35,0x5A,0x30,0x66,0x31,0x20,0x30,0x1E,
    0x06,0x03,0x55,0x04,0x03,0x0C,0x17,0x41,0x70,0x70,
    0x6C,0x65,0x20,0x43,0x6F,0x72,0x70,0x6F,0x72,0x61,
    0x74,0x65,0x20,0x52,0x6F,0x6F,0x74,0x20,0x43,0x41,
    0x31,0x20,0x30,0x1E,0x06,0x03,0x55,0x04,0x0B,0x0C,
    0x17,0x43,0x65,0x72,0x74,0x69,0x66,0x69,0x63,0x61,
    0x74,0x69,0x6F,0x6E,0x20,0x41,0x75,0x74,0x68,0x6F,
    0x72,0x69,0x74,0x79,0x31,0x13,0x30,0x11,0x06,0x03,
    0x55,0x04,0x0A,0x0C,0x0A,0x41,0x70,0x70,0x6C,0x65,
    0x20,0x49,0x6E,0x63,0x2E,0x31,0x0B,0x30,0x09,0x06,
    0x03,0x55,0x04,0x06,0x13,0x02,0x55,0x53,0x30,0x82,
    0x01,0x22,0x30,0x0D,0x06,0x09,0x2A,0x86,0x48,0x86,
    0xF7,0x0D,0x01,0x01,0x01,0x05,0x00,0x03,0x82,0x01,
    0x0F,0x00,0x30,0x82,0x01,0x0A,0x02,0x82,0x01,0x01,
    0x00,0xB5,0x3B,0xE3,0x9F,0x6A,0x1D,0x0E,0x46,0x51,
    0x1E,0xD0,0xB5,0x17,0x6B,0x06,0x4B,0x92,0xAF,0x38,
    0x10,0x25,0xA1,0xEE,0x1E,0x4E,0xEF,0x19,0xE0,0x73,
    0xB5,0x37,0x33,0x72,0x21,0x21,0xCB,0x62,0x4A,0x3D,
    0xA9,0x68,0xD8,0x07,0xB4,0xEB,0x8D,0x0A,0xDB,0x30,
    0x33,0x21,0x2F,0x6F,0xD3,0xF7,0x5D,0xCE,0x20,0x0A,
    0x04,0xDB,0xFF,0xBF,0x75,0x08,0x42,0x3F,0x3E,0xD8,
    0xC8,0xEF,0xA4,0xF8,0x56,0x7B,0x13,0x64,0x6B,0xF3,
    0xA2,0x38,0x10,0xFA,0xEE,0x9D,0x83,0x93,0x1D,0xFB,
    0xEF,0x13,0x6C,0x38,0x49,0xDD,0xEB,0x71,0xA6,0x92,
    0x58,0x04,0xDE,0x01,0x41,0x2B,0x99,0x5E,0xBD,0x24,
    0x3F,0x69,0xA8,0x44,0xF2,0xAA,0x01,0x78,0xB9,0x38,
    0x06,0x10,0x77,0x36,0xF8,0xF2,0xA3,0x3E,0xD9,0x5F,
    0xEA,0xF5,0x8B,0x6A,0xA6,0x5F,0xE6,0x51,0xD0,0x9B,
    0x50,0xA0,0x1E,0xF5,0x85,0x9E,0x49,0x50,0x4A,0x61,
    0x78,0xDA,0x29,0xA7,0x33,0x72,0x8B,0x83,0xEE,0x7B,
    0xA7,0x79,0x4E,0x8E,0x02,0x6F,0x9D,0x25,0x97,0x26,
    0x86,0x0C,0x82,0xC5,0x8C,0x16,0x7E,0x49,0x61,0xFD,
    0xFF,0x1A,0xA0,0x0D,0x28,0xE1,0x68,0xF5,0xAE,0x85,
    0x72,0xF3,0xAB,0xE0,0x74,0x75,0xCC,0x57,0x64,0x3C,
    0x2C,0x55,0x05,0xC9,0x8D,0xAA,0xB3,0xEC,0xC8,0x62,
    0x88,0x15,0x2A,0xC4,0x59,0x60,0x37,0xC1,0xED,0x6B,
    0xCE,0xE9,0xCA,0xAF,0xB0,0xA5,0x45,0xBA,0xFF,0x16,
    0x32,0xAA,0x92,0x86,0xD9,0xB9,0xA1,0x13,0x75,0x95,
    0x9B,0x97,0x5C,0x2D,0xB5,0x12,0xCA,0x6B,0x6B,0x39,
    0xD6,0x9B,0x4B,0x34,0x47,0xAB,0x35,0x02,0x03,0x01,
    0x00,0x01,0xA3,0x63,0x30,0x61,0x30,0x1D,0x06,0x03,
    0x55,0x1D,0x0E,0x04,0x16,0x04,0x14,0x35,0x20,0x26,
    0xCE,0x85,0xBE,0x49,0x26,0x20,0x01,0xDD,0xC8,0xEE,
    0xFF,0x3D,0x68,0xC8,0xD0,0xDF,0xF5,0x30,0x0F,0x06,
    0x03,0x55,0x1D,0x13,0x01,0x01,0xFF,0x04,0x05,0x30,
    0x03,0x01,0x01,0xFF,0x30,0x1F,0x06,0x03,0x55,0x1D,
    0x23,0x04,0x18,0x30,0x16,0x80,0x14,0x35,0x20,0x26,
    0xCE,0x85,0xBE,0x49,0x26,0x20,0x01,0xDD,0xC8,0xEE,
    0xFF,0x3D,0x68,0xC8,0xD0,0xDF,0xF5,0x30,0x0E,0x06,
    0x03,0x55,0x1D,0x0F,0x01,0x01,0xFF,0x04,0x04,0x03,
    0x02,0x01,0x06,0x30,0x0D,0x06,0x09,0x2A,0x86,0x48,
    0x86,0xF7,0x0D,0x01,0x01,0x0B,0x05,0x00,0x03,0x82,
    0x01,0x01,0x00,0x73,0x02,0x4A,0xA6,0x77,0x02,0xA7,
    0xE1,0xCB,0x52,0x97,0x9D,0x89,0x11,0xA0,0x8F,0xBC,
    0xF3,0x8F,0x14,0x01,0x29,0xF3,0xA5,0x45,0x17,0x06,
    0xF8,0x04,0xF2,0x6D,0xD5,0xC3,0x77,0xB8,0x00,0xC2,
    0x0A,0x1A,0x09,0x32,0x36,0x36,0x69,0xC1,0x2A,0xF0,
    0x44,0x37,0xBC,0x7E,0x5F,0x15,0xF7,0x08,0x9C,0x19,
    0x27,0x1D,0x70,0x4F,0xDC,0x17,0x94,0x3C,0xBB,0x24,
    0xB4,0xE6,0xFC,0x71,0x9A,0xD4,0xCF,0x2C,0x12,0xBA,
    0xF0,0xB6,0x8F,0x78,0x99,0xAA,0x8C,0x17,0x7E,0x94,
    0x0C,0x6A,0x37,0x5B,0x35,0x91,0x52,0xFA,0x64,0xA3,
    0x33,0x34,0x99,0x37,0x00,0x3C,0xB4,0x4E,0x6E,0x63,
    0xED,0xC3,0x1D,0x37,0x5B,0x45,0xB4,0xDF,0x82,0xCD,
    0xFE,0xAA,0x92,0x64,0xC8,0x2F,0xD6,0x2D,0x2E,0xB1,
    0xED,0x6A,0x04,0xF1,0xC2,0x48,0x8D,0x4B,0xB4,0x84,
    0x39,0xA3,0x31,0x4D,0xF6,0x63,0xB4,0xC3,0x6E,0xA1,
    0xA5,0x2F,0xD2,0x1E,0xB0,0xC6,0x0C,0xD1,0x04,0x3A,
    0x31,0xBC,0x87,0x49,0xF8,0x26,0x0B,0xD3,0x0C,0x08,
    0x29,0xBB,0x9F,0x4D,0x08,0xF0,0x9C,0x11,0xD3,0xA5,
    0x2C,0x8D,0x98,0xB1,0x1B,0xB1,0x57,0xD3,0x69,0xAE,
    0x9E,0x2D,0xD5,0x64,0x38,0x58,0xC9,0xB2,0x84,0x04,
    0xAB,0x10,0x1D,0xCA,0x6B,0x29,0xA5,0xAB,0xCC,0xFE,
    0xBB,0x74,0xF4,0x35,0x03,0x8F,0x65,0x2A,0x0B,0xBB,
    0xC7,0x17,0x6A,0x49,0x34,0x83,0x30,0x92,0x8D,0xD7,
    0xAE,0x95,0xD0,0xD7,0x23,0xA7,0xE3,0x29,0x09,0xA1,
    0xB1,0x34,0xC3,0x95,0x49,0xC3,0xA4,0xF1,0x36,0x00,
    0x09,0xD3,0xA4,0x09,0xAD,0xF2,0x5C,0x97,0xB2
};

uint8_t _acserverca1_spki[] = {
  0x30,0x82,0x01,0x22,0x30,0x0d,0x06,0x09,0x2a,0x86,0x48,0x86,
  0xf7,0x0d,0x01,0x01,0x01,0x05,0x00,0x03,0x82,0x01,0x0f,0x00,
  0x30,0x82,0x01,0x0a,0x02,0x82,0x01,0x01,0x00,0xe3,0xe9,0x68,
  0xa1,0xe7,0x9b,0xbc,0xf7,0x87,0x48,0x22,0x9b,0x09,0x5f,0xc8,
  0xc9,0xa6,0x9a,0xcc,0xcd,0x40,0x16,0xf8,0xa1,0xd0,0xf6,0x27,
  0x15,0x4c,0xe7,0xd3,0xc1,0x6e,0xdf,0x11,0x06,0x9a,0x63,0xc5,
  0x87,0x55,0xda,0xdf,0xaf,0x15,0x31,0x98,0x45,0xf4,0x8c,0xc2,
  0x3c,0x93,0xa2,0x1c,0xc0,0xf0,0x2a,0x77,0xf4,0x19,0x94,0x96,
  0xf4,0x7b,0x52,0x74,0x84,0x86,0x5a,0x66,0x7d,0x68,0x92,0xa1,
  0x5e,0xe1,0xa9,0x21,0xe0,0x14,0x38,0x84,0x21,0x32,0x8b,0x21,
  0x95,0x47,0x27,0x17,0xa0,0xba,0x7b,0xd7,0xd8,0xd7,0x25,0x20,
  0x77,0xcb,0x62,0x8b,0xc6,0x0f,0xc1,0x49,0xc6,0x2b,0x42,0xe9,
  0x02,0x70,0x9e,0x99,0x44,0x77,0x51,0x05,0x62,0x78,0xbc,0xb0,
  0xd2,0xa7,0xa6,0x91,0x71,0x25,0x58,0x13,0x8d,0x8a,0xc8,0x46,
  0x41,0xdb,0x89,0x41,0xc5,0x23,0x7d,0x84,0xe9,0x02,0xb0,0x1a,
  0xf8,0x5d,0x66,0xd0,0xe1,0xe1,0x72,0xf4,0xa4,0x65,0x79,0x97,
  0x0a,0x7b,0xc0,0xe3,0x24,0x74,0x83,0x4a,0x81,0x5e,0xc3,0xa2,
  0xbf,0x51,0x32,0x96,0x8f,0x28,0x32,0x08,0x49,0xfb,0x02,0x43,
  0x62,0x42,0xb3,0x84,0x84,0x30,0x1b,0x28,0xe4,0x05,0xb9,0xbb,
  0xd6,0xb5,0xc4,0xa2,0xab,0x8e,0x57,0x53,0x29,0xbc,0x0b,0x4f,
  0xd6,0x1e,0xa4,0x52,0xdc,0x16,0x1c,0x95,0xc2,0x8d,0x97,0x6b,
  0xbb,0x3e,0xc8,0x93,0xc7,0x01,0x97,0x1e,0x18,0x09,0x59,0x39,
  0x0f,0x5d,0x73,0x4e,0xa9,0x8f,0x49,0xfd,0x49,0x16,0xbd,0x25,
  0xec,0xd9,0x05,0xea,0xe3,0xb0,0x04,0x0e,0xd9,0x09,0x9e,0xc0,
  0xb7,0x02,0x03,0x01,0x00,0x01
};

uint8_t _acrootca_spki[] = {
  0x30,0x82,0x01,0x22,0x30,0x0d,0x06,0x09,0x2a,0x86,0x48,0x86,
  0xf7,0x0d,0x01,0x01,0x01,0x05,0x00,0x03,0x82,0x01,0x0f,0x00,
  0x30,0x82,0x01,0x0a,0x02,0x82,0x01,0x01,0x00,0xb5,0x3b,0xe3,
  0x9f,0x6a,0x1d,0x0e,0x46,0x51,0x1e,0xd0,0xb5,0x17,0x6b,0x06,
  0x4b,0x92,0xaf,0x38,0x10,0x25,0xa1,0xee,0x1e,0x4e,0xef,0x19,
  0xe0,0x73,0xb5,0x37,0x33,0x72,0x21,0x21,0xcb,0x62,0x4a,0x3d,
  0xa9,0x68,0xd8,0x07,0xb4,0xeb,0x8d,0x0a,0xdb,0x30,0x33,0x21,
  0x2f,0x6f,0xd3,0xf7,0x5d,0xce,0x20,0x0a,0x04,0xdb,0xff,0xbf,
  0x75,0x08,0x42,0x3f,0x3e,0xd8,0xc8,0xef,0xa4,0xf8,0x56,0x7b,
  0x13,0x64,0x6b,0xf3,0xa2,0x38,0x10,0xfa,0xee,0x9d,0x83,0x93,
  0x1d,0xfb,0xef,0x13,0x6c,0x38,0x49,0xdd,0xeb,0x71,0xa6,0x92,
  0x58,0x04,0xde,0x01,0x41,0x2b,0x99,0x5e,0xbd,0x24,0x3f,0x69,
  0xa8,0x44,0xf2,0xaa,0x01,0x78,0xb9,0x38,0x06,0x10,0x77,0x36,
  0xf8,0xf2,0xa3,0x3e,0xd9,0x5f,0xea,0xf5,0x8b,0x6a,0xa6,0x5f,
  0xe6,0x51,0xd0,0x9b,0x50,0xa0,0x1e,0xf5,0x85,0x9e,0x49,0x50,
  0x4a,0x61,0x78,0xda,0x29,0xa7,0x33,0x72,0x8b,0x83,0xee,0x7b,
  0xa7,0x79,0x4e,0x8e,0x02,0x6f,0x9d,0x25,0x97,0x26,0x86,0x0c,
  0x82,0xc5,0x8c,0x16,0x7e,0x49,0x61,0xfd,0xff,0x1a,0xa0,0x0d,
  0x28,0xe1,0x68,0xf5,0xae,0x85,0x72,0xf3,0xab,0xe0,0x74,0x75,
  0xcc,0x57,0x64,0x3c,0x2c,0x55,0x05,0xc9,0x8d,0xaa,0xb3,0xec,
  0xc8,0x62,0x88,0x15,0x2a,0xc4,0x59,0x60,0x37,0xc1,0xed,0x6b,
  0xce,0xe9,0xca,0xaf,0xb0,0xa5,0x45,0xba,0xff,0x16,0x32,0xaa,
  0x92,0x86,0xd9,0xb9,0xa1,0x13,0x75,0x95,0x9b,0x97,0x5c,0x2d,
  0xb5,0x12,0xca,0x6b,0x6b,0x39,0xd6,0x9b,0x4b,0x34,0x47,0xab,
  0x35,0x02,0x03,0x01,0x00,0x01
};

uint8_t _acrootca_hash[] = {
  0x50,0x41,0x69,0xc1,0x76,0xa2,0xc3,0x0d,0xa2,0xe9,0x0e,0xa9,
  0x8a,0x53,0x5d,0x78,0xef,0x42,0xf3,0x1a,0x90,0xfa,0x48,0xb6,
  0xce,0xc2,0x45,0xa4,0x72,0x12,0x7a,0xd3
};


#endif /* _TRUSTTESTS_EVALUATION_CT_TESTS_H_ */