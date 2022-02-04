/*
 * Copyright (c) 2019 Apple Inc. All Rights Reserved.
 */

#ifndef _TRUSTTESTS_EVALUATION_PATH_PARSE_TESTS_H_
#define _TRUSTTESTS_EVALUATION_PATH_PARSE_TESTS_H_

const uint8_t _bad_extension_root[] = {
    0x30,0x82,0x02,0x55,0x30,0x82,0x01,0xFD,0xA0,0x03,0x02,0x01,0x02,0x02,0x09,0x00,
    0xA7,0x97,0x3B,0x17,0xE9,0x68,0x62,0x01,0x30,0x09,0x06,0x07,0x2A,0x86,0x48,0xCE,
    0x3D,0x04,0x01,0x30,0x81,0x8D,0x31,0x0B,0x30,0x09,0x06,0x03,0x55,0x04,0x06,0x13,
    0x02,0x55,0x53,0x31,0x13,0x30,0x11,0x06,0x03,0x55,0x04,0x08,0x0C,0x0A,0x43,0x61,
    0x6C,0x69,0x66,0x6F,0x72,0x6E,0x69,0x61,0x31,0x12,0x30,0x10,0x06,0x03,0x55,0x04,
    0x07,0x0C,0x09,0x43,0x75,0x70,0x65,0x72,0x74,0x69,0x6E,0x6F,0x31,0x13,0x30,0x11,
    0x06,0x03,0x55,0x04,0x0A,0x0C,0x0A,0x41,0x70,0x70,0x6C,0x65,0x20,0x49,0x6E,0x63,
    0x2E,0x31,0x1D,0x30,0x1B,0x06,0x03,0x55,0x04,0x0B,0x0C,0x14,0x53,0x65,0x63,0x75,
    0x72,0x69,0x74,0x79,0x20,0x45,0x6E,0x67,0x69,0x6E,0x65,0x65,0x72,0x69,0x6E,0x67,
    0x31,0x21,0x30,0x1F,0x06,0x03,0x55,0x04,0x03,0x0C,0x18,0x4F,0x43,0x53,0x50,0x20,
    0x52,0x65,0x73,0x70,0x6F,0x6E,0x64,0x65,0x72,0x20,0x54,0x65,0x73,0x74,0x20,0x52,
    0x6F,0x6F,0x74,0x30,0x1E,0x17,0x0D,0x32,0x30,0x30,0x37,0x31,0x33,0x32,0x30,0x31,
    0x30,0x31,0x37,0x5A,0x17,0x0D,0x33,0x30,0x30,0x37,0x31,0x31,0x32,0x30,0x31,0x30,
    0x31,0x37,0x5A,0x30,0x81,0x8D,0x31,0x0B,0x30,0x09,0x06,0x03,0x55,0x04,0x06,0x13,
    0x02,0x55,0x53,0x31,0x13,0x30,0x11,0x06,0x03,0x55,0x04,0x08,0x0C,0x0A,0x43,0x61,
    0x6C,0x69,0x66,0x6F,0x72,0x6E,0x69,0x61,0x31,0x12,0x30,0x10,0x06,0x03,0x55,0x04,
    0x07,0x0C,0x09,0x43,0x75,0x70,0x65,0x72,0x74,0x69,0x6E,0x6F,0x31,0x13,0x30,0x11,
    0x06,0x03,0x55,0x04,0x0A,0x0C,0x0A,0x41,0x70,0x70,0x6C,0x65,0x20,0x49,0x6E,0x63,
    0x2E,0x31,0x1D,0x30,0x1B,0x06,0x03,0x55,0x04,0x0B,0x0C,0x14,0x53,0x65,0x63,0x75,
    0x72,0x69,0x74,0x79,0x20,0x45,0x6E,0x67,0x69,0x6E,0x65,0x65,0x72,0x69,0x6E,0x67,
    0x31,0x21,0x30,0x1F,0x06,0x03,0x55,0x04,0x03,0x0C,0x18,0x4F,0x43,0x53,0x50,0x20,
    0x52,0x65,0x73,0x70,0x6F,0x6E,0x64,0x65,0x72,0x20,0x54,0x65,0x73,0x74,0x20,0x52,
    0x6F,0x6F,0x74,0x30,0x59,0x30,0x13,0x06,0x07,0x2A,0x86,0x48,0xCE,0x3D,0x02,0x01,
    0x06,0x08,0x2A,0x86,0x48,0xCE,0x3D,0x03,0x01,0x07,0x03,0x42,0x00,0x04,0x45,0xA3,
    0x6E,0x77,0x59,0x2B,0x7D,0xD4,0x9D,0x44,0xD7,0xDA,0x3E,0x5C,0xE1,0xB3,0xF8,0x34,
    0xE8,0xE8,0xEC,0x53,0x5A,0x5B,0x88,0x79,0x62,0x20,0x00,0xE1,0x82,0x42,0x3F,0x9D,
    0x78,0xCD,0x6D,0x1C,0xF2,0xF6,0x7A,0x66,0xCA,0x1B,0xEA,0x40,0xFD,0x9B,0x9D,0x8B,
    0x31,0x63,0xE7,0x95,0x10,0xB8,0x91,0x24,0xAE,0xF3,0x30,0xE4,0x1F,0x35,0xA3,0x45,
    0x30,0x43,0x30,0x12,0x06,0x03,0x55,0x1D,0x13,0x01,0x01,0xFF,0x04,0x08,0x30,0x06,
    0x01,0x01,0xFF,0x02,0x01,0x00,0x30,0x0E,0x06,0x03,0x55,0x1D,0x0F,0x01,0x01,0xFF,
    0x04,0x04,0x03,0x02,0x01,0x06,0x30,0x1D,0x06,0x03,0x55,0x1D,0x0E,0x04,0x16,0x04,
    0x14,0x59,0xB5,0xB1,0x6E,0x89,0x9B,0xAC,0x7E,0x19,0x13,0x2C,0x75,0x68,0x3D,0x9F,
    0x05,0x15,0x54,0x05,0x16,0x30,0x09,0x06,0x07,0x2A,0x86,0x48,0xCE,0x3D,0x04,0x01,
    0x03,0x47,0x00,0x30,0x44,0x02,0x20,0x48,0x3A,0xED,0x1D,0x9A,0xA1,0x82,0x4B,0x49,
    0x7D,0x92,0xF0,0xAD,0x8E,0x04,0x8E,0x0C,0x95,0x02,0x7A,0x7D,0x93,0xFD,0xDD,0x4D,
    0xDA,0x00,0xDA,0xBA,0x85,0x8A,0x6F,0x02,0x20,0x38,0xB0,0x4B,0x32,0xD0,0x61,0x6A,
    0x3A,0xBB,0x4C,0x24,0x6B,0x73,0x7A,0x97,0x44,0x63,0xEA,0x77,0xAB,0xB9,0x55,0xBF,
    0x40,0x96,0xEC,0xD5,0x2C,0x30,0x47,0x4E,0x2C,
};

const uint8_t _bad_extension_leaf[] = {
    0x30,0x82,0x02,0x94,0x30,0x82,0x02,0x3A,0xA0,0x03,0x02,0x01,0x02,0x02,0x13,0x25,
    0xF3,0xFF,0xBB,0x76,0x44,0x44,0x8A,0xC2,0xC2,0xF6,0xC6,0x0D,0xEF,0x53,0x19,0xBE,
    0x01,0x1F,0x30,0x0A,0x06,0x08,0x2A,0x86,0x48,0xCE,0x3D,0x04,0x03,0x02,0x30,0x81,
    0x8D,0x31,0x0B,0x30,0x09,0x06,0x03,0x55,0x04,0x06,0x13,0x02,0x55,0x53,0x31,0x13,
    0x30,0x11,0x06,0x03,0x55,0x04,0x08,0x0C,0x0A,0x43,0x61,0x6C,0x69,0x66,0x6F,0x72,
    0x6E,0x69,0x61,0x31,0x12,0x30,0x10,0x06,0x03,0x55,0x04,0x07,0x0C,0x09,0x43,0x75,
    0x70,0x65,0x72,0x74,0x69,0x6E,0x6F,0x31,0x13,0x30,0x11,0x06,0x03,0x55,0x04,0x0A,
    0x0C,0x0A,0x41,0x70,0x70,0x6C,0x65,0x20,0x49,0x6E,0x63,0x2E,0x31,0x1D,0x30,0x1B,
    0x06,0x03,0x55,0x04,0x0B,0x0C,0x14,0x53,0x65,0x63,0x75,0x72,0x69,0x74,0x79,0x20,
    0x45,0x6E,0x67,0x69,0x6E,0x65,0x65,0x72,0x69,0x6E,0x67,0x31,0x21,0x30,0x1F,0x06,
    0x03,0x55,0x04,0x03,0x0C,0x18,0x4F,0x43,0x53,0x50,0x20,0x52,0x65,0x73,0x70,0x6F,
    0x6E,0x64,0x65,0x72,0x20,0x54,0x65,0x73,0x74,0x20,0x52,0x6F,0x6F,0x74,0x30,0x1E,
    0x17,0x0D,0x32,0x30,0x30,0x37,0x31,0x34,0x30,0x30,0x30,0x34,0x30,0x37,0x5A,0x17,
    0x0D,0x32,0x31,0x30,0x37,0x31,0x34,0x30,0x30,0x30,0x34,0x30,0x37,0x5A,0x30,0x81,
    0x8F,0x31,0x0B,0x30,0x09,0x06,0x03,0x55,0x04,0x06,0x13,0x02,0x55,0x53,0x31,0x13,
    0x30,0x11,0x06,0x03,0x55,0x04,0x08,0x0C,0x0A,0x43,0x61,0x6C,0x69,0x66,0x6F,0x72,
    0x6E,0x69,0x61,0x31,0x12,0x30,0x10,0x06,0x03,0x55,0x04,0x07,0x0C,0x09,0x43,0x75,
    0x70,0x65,0x72,0x74,0x69,0x6E,0x6F,0x31,0x13,0x30,0x11,0x06,0x03,0x55,0x04,0x0A,
    0x0C,0x0A,0x41,0x70,0x70,0x6C,0x65,0x20,0x49,0x6E,0x63,0x2E,0x31,0x1D,0x30,0x1B,
    0x06,0x03,0x55,0x04,0x0B,0x0C,0x14,0x53,0x65,0x63,0x75,0x72,0x69,0x74,0x79,0x20,
    0x45,0x6E,0x67,0x69,0x6E,0x65,0x65,0x72,0x69,0x6E,0x67,0x31,0x23,0x30,0x21,0x06,
    0x03,0x55,0x04,0x03,0x0C,0x1A,0x4F,0x43,0x53,0x50,0x20,0x52,0x65,0x73,0x70,0x6F,
    0x6E,0x64,0x65,0x72,0x20,0x54,0x65,0x73,0x74,0x3A,0x20,0x56,0x61,0x6C,0x69,0x64,
    0x30,0x59,0x30,0x13,0x06,0x07,0x2A,0x86,0x48,0xCE,0x3D,0x02,0x01,0x06,0x08,0x2A,
    0x86,0x48,0xCE,0x3D,0x03,0x01,0x07,0x03,0x42,0x00,0x04,0x4D,0xFC,0xED,0x57,0xD8,
    0xEA,0x29,0xC6,0xE5,0x25,0x87,0x51,0xAA,0x73,0x6A,0x5F,0x00,0x4C,0x64,0x42,0xE0,
    0x53,0xAE,0xEE,0x9E,0x3F,0x4B,0xBC,0x2B,0x7B,0xFB,0x24,0x33,0x53,0x9F,0x42,0x33,
    0x99,0xC4,0x1A,0x33,0xC8,0x09,0xCC,0x8E,0x50,0x74,0xC1,0x3E,0x9A,0x42,0x9E,0x6F,
    0x46,0x4E,0x73,0x34,0xE4,0xF1,0x7A,0x7E,0xE1,0x40,0x61,0xA3,0x75,0x30,0x73,0x30,
    0x0C,0x06,0x03,0x55,0x1D,0x13,0x01,0x01,0xFF,0x04,0x02,0x30,0x00,0x30,0x0E,0x06,
    0x03,0x55,0x1D,0x0F,0x01,0x01,0xFF,0x04,0x04,0x03,0x02,0x01,0x82,0x30,0x13,0x06,
    0x03,0x55,0x1D,0x25,0x04,0x0C,0x31,0x0A,0x06,0x08,0x2B,0x06,0x01,0x05,0x05,0x07,
    0x03,0x09,0x30,0x1D,0x06,0x03,0x55,0x1D,0x0E,0x04,0x16,0x04,0x14,0x09,0x35,0xC3,
    0xB1,0x7D,0x12,0x8D,0xBC,0xB0,0x3C,0xF7,0xC4,0xA9,0x7D,0xA1,0x2A,0x84,0x9C,0xEE,
    0x67,0x30,0x1F,0x06,0x03,0x55,0x1D,0x23,0x04,0x18,0x30,0x16,0x80,0x14,0x59,0xB5,
    0xB1,0x6E,0x89,0x9B,0xAC,0x7E,0x19,0x13,0x2C,0x75,0x68,0x3D,0x9F,0x05,0x15,0x54,
    0x05,0x16,0x30,0x0A,0x06,0x08,0x2A,0x86,0x48,0xCE,0x3D,0x04,0x03,0x02,0x03,0x48,
    0x00,0x30,0x45,0x02,0x20,0x13,0x00,0x46,0x93,0x44,0x1D,0x80,0x74,0x0A,0x59,0xE3,
    0x79,0x43,0xFD,0x04,0x2A,0x6C,0x19,0x5A,0x79,0x53,0x46,0x9E,0x8F,0x3A,0x31,0x47,
    0x05,0x9F,0xF8,0xE0,0xB4,0x02,0x21,0x00,0xAA,0x3D,0xBC,0x3E,0x68,0x47,0x71,0xCC,
    0x36,0x90,0x33,0xF3,0xC4,0xEA,0x12,0xF4,0x4C,0x96,0x65,0xE3,0x65,0xB4,0x7E,0x24,
    0xAB,0x6C,0x64,0xFA,0x13,0x6C,0xF9,0x4C,
};

const uint8_t _duplicate_extn_leaf[] = {
    0x30,0x82,0x04,0x56,0x30,0x82,0x03,0x3E,0xA0,0x03,0x02,0x01,0x02,0x02,0x08,0x5C,
    0x63,0xCA,0xE4,0x4A,0x37,0x53,0xC9,0x30,0x0D,0x06,0x09,0x2A,0x86,0x48,0x86,0xF7,
    0x0D,0x01,0x01,0x0B,0x05,0x00,0x30,0x62,0x31,0x0B,0x30,0x09,0x06,0x03,0x55,0x04,
    0x06,0x13,0x02,0x55,0x53,0x31,0x13,0x30,0x11,0x06,0x03,0x55,0x04,0x0A,0x13,0x0A,
    0x41,0x70,0x70,0x6C,0x65,0x20,0x49,0x6E,0x63,0x2E,0x31,0x26,0x30,0x24,0x06,0x03,
    0x55,0x04,0x0B,0x13,0x1D,0x41,0x70,0x70,0x6C,0x65,0x20,0x43,0x65,0x72,0x74,0x69,
    0x66,0x69,0x63,0x61,0x74,0x69,0x6F,0x6E,0x20,0x41,0x75,0x74,0x68,0x6F,0x72,0x69,
    0x74,0x79,0x31,0x16,0x30,0x14,0x06,0x03,0x55,0x04,0x03,0x13,0x0D,0x41,0x70,0x70,
    0x6C,0x65,0x20,0x52,0x6F,0x6F,0x74,0x20,0x43,0x41,0x30,0x1E,0x17,0x0D,0x31,0x37,
    0x30,0x35,0x31,0x30,0x32,0x31,0x32,0x37,0x33,0x30,0x5A,0x17,0x0D,0x33,0x30,0x31,
    0x32,0x33,0x31,0x30,0x30,0x30,0x30,0x30,0x30,0x5A,0x30,0x73,0x31,0x2D,0x30,0x2B,
    0x06,0x03,0x55,0x04,0x03,0x0C,0x24,0x41,0x70,0x70,0x6C,0x65,0x20,0x69,0x50,0x68,
    0x6F,0x6E,0x65,0x20,0x43,0x65,0x72,0x74,0x69,0x66,0x69,0x63,0x61,0x74,0x69,0x6F,
    0x6E,0x20,0x41,0x75,0x74,0x68,0x6F,0x72,0x69,0x74,0x79,0x31,0x20,0x30,0x1E,0x06,
    0x03,0x55,0x04,0x0B,0x0C,0x17,0x43,0x65,0x72,0x74,0x69,0x66,0x69,0x63,0x61,0x74,
    0x69,0x6F,0x6E,0x20,0x41,0x75,0x74,0x68,0x6F,0x72,0x69,0x74,0x79,0x31,0x13,0x30,
    0x11,0x06,0x03,0x55,0x04,0x0A,0x0C,0x0A,0x41,0x70,0x70,0x6C,0x65,0x20,0x49,0x6E,
    0x63,0x2E,0x31,0x0B,0x30,0x09,0x06,0x03,0x55,0x04,0x06,0x13,0x02,0x55,0x53,0x30,
    0x82,0x01,0x22,0x30,0x0D,0x06,0x09,0x2A,0x86,0x48,0x86,0xF7,0x0D,0x01,0x01,0x01,
    0x05,0x00,0x03,0x82,0x01,0x0F,0x00,0x30,0x82,0x01,0x0A,0x02,0x82,0x01,0x01,0x00,
    0xC9,0x45,0x6A,0x01,0x0F,0x3E,0x83,0x04,0x86,0xC7,0xFC,0xBF,0xDC,0x5E,0xF0,0x1E,
    0x81,0xEE,0x17,0x30,0x73,0x63,0x26,0x2E,0xDE,0x3D,0x7A,0x24,0xCD,0x93,0x3E,0x4F,
    0x39,0x47,0xBA,0x75,0xBE,0xF3,0xC0,0xD2,0xF1,0x59,0xA2,0xAB,0x1F,0xFE,0x0A,0x86,
    0x3C,0xD9,0x2D,0x9A,0x07,0xF2,0x0E,0x6B,0xB9,0x29,0x91,0x1A,0x5F,0x22,0x0A,0x8B,
    0xF1,0x72,0x58,0x05,0xAE,0x4C,0x4B,0x44,0xC5,0x79,0xA7,0x80,0x3C,0xB0,0x88,0xE0,
    0x8C,0x0C,0x27,0x84,0x5D,0x19,0xE5,0x87,0x19,0x36,0xCB,0xE3,0xC5,0x76,0xB7,0xB0,
    0xF4,0x41,0x72,0x51,0xF4,0x05,0x5C,0x83,0x4B,0xA2,0x6D,0xA6,0x51,0xB8,0xF1,0x26,
    0xDF,0x7B,0x5E,0xAD,0x65,0x0C,0xC6,0xB2,0x98,0x51,0x8C,0xBB,0x7D,0x1B,0x4C,0xC1,
    0x4E,0xC8,0x08,0xC7,0xD2,0xED,0x64,0x0B,0xB4,0xDD,0x1B,0x8D,0x4F,0x40,0x7D,0x1B,
    0x8F,0x48,0x96,0x92,0x5B,0xF3,0xD0,0x98,0x7E,0xD9,0xBC,0xA4,0x19,0x0E,0x99,0x61,
    0xBB,0x41,0x5D,0x01,0xCC,0x5B,0x77,0x7A,0x7D,0x24,0xD0,0xDC,0xD3,0x53,0xFF,0xC3,
    0xDC,0xC5,0x94,0x2C,0xB6,0x5A,0x4D,0x8E,0x18,0x23,0x39,0xBD,0xD9,0xC6,0x52,0x3E,
    0xD1,0xF2,0xF4,0x25,0x8A,0xA1,0x2A,0x87,0xFD,0xD8,0x0C,0x46,0x29,0x51,0xFF,0xED,
    0x17,0x6C,0x89,0x25,0x6B,0x87,0xBF,0x8A,0x69,0x14,0x9F,0x77,0x9F,0xC3,0x15,0xB7,
    0x68,0xB3,0x88,0x45,0xBD,0x84,0xE6,0x06,0x02,0x41,0x64,0x0F,0xAD,0x2A,0x28,0xB8,
    0x15,0xC9,0xE0,0xAC,0xA7,0x8A,0xBA,0x72,0x04,0x34,0xB2,0x78,0x8C,0xF8,0xB2,0x85,
    0x02,0x03,0x01,0x00,0x01,0xA3,0x81,0xFE,0x30,0x81,0xFB,0x30,0x0F,0x06,0x03,0x55,
    0x1D,0x13,0x01,0x01,0xFF,0x04,0x05,0x30,0x03,0x01,0x01,0xFF,0x30,0x1F,0x06,0x03,
    0x55,0x1D,0x23,0x04,0x18,0x30,0x16,0x80,0x14,0x2B,0xD0,0x69,0x47,0x94,0x76,0x09,
    0xFE,0xF4,0x6B,0x8D,0x2E,0x40,0xA6,0xF7,0x47,0x4D,0x7F,0x08,0x5E,0x30,0x44,0x06,
    0x08,0x2B,0x06,0x01,0x05,0x05,0x07,0x01,0x01,0x04,0x38,0x30,0x36,0x30,0x34,0x06,
    0x08,0x2B,0x06,0x01,0x05,0x05,0x07,0x30,0x01,0x86,0x28,0x68,0x74,0x74,0x70,0x3A,
    0x2F,0x2F,0x6F,0x63,0x73,0x70,0x2E,0x61,0x70,0x70,0x6C,0x65,0x2E,0x63,0x6F,0x6D,
    0x2F,0x6F,0x63,0x73,0x70,0x30,0x33,0x2D,0x61,0x70,0x70,0x6C,0x65,0x72,0x6F,0x6F,
    0x74,0x63,0x61,0x30,0x2E,0x06,0x03,0x55,0x1D,0x1F,0x04,0x27,0x30,0x25,0x30,0x23,
    0xA0,0x21,0xA0,0x1F,0x86,0x1D,0x68,0x74,0x74,0x70,0x3A,0x2F,0x2F,0x63,0x72,0x6C,
    0x2E,0x61,0x70,0x70,0x6C,0x65,0x2E,0x63,0x6F,0x6D,0x2F,0x72,0x6F,0x6F,0x74,0x2E,
    0x63,0x72,0x6C,0x30,0x1D,0x06,0x03,0x55,0x1D,0x0E,0x04,0x16,0x04,0x14,0x6F,0xF1,
    0x95,0x18,0x62,0x5C,0xE0,0xC8,0xF1,0xC5,0xED,0x6C,0x18,0xC9,0xE0,0xD3,0x64,0x52,
    0x98,0x20,0x30,0x0E,0x06,0x03,0x55,0x1D,0x0F,0x01,0x01,0xFF,0x04,0x04,0x03,0x02,
    0x01,0x06,0x30,0x10,0x06,0x0A,0x2A,0x86,0x48,0x86,0xF7,0x63,0x64,0x06,0x02,0x12,
    0x04,0x02,0x05,0x00,0x30,0x10,0x06,0x0A,0x2A,0x86,0x48,0x86,0xF7,0x63,0x64,0x06,
    0x02,0x12,0x04,0x02,0x05,0x00,0x30,0x0D,0x06,0x09,0x2A,0x86,0x48,0x86,0xF7,0x0D,
    0x01,0x01,0x0B,0x05,0x00,0x03,0x82,0x01,0x01,0x00,0x3A,0xCF,0xAC,0x98,0x8D,0xBE,
    0x92,0x20,0x21,0x09,0xAD,0x95,0xF3,0xB1,0x5C,0x21,0xFA,0x36,0x2D,0x57,0x20,0x44,
    0x74,0x73,0x64,0x92,0x08,0xB3,0x96,0xAC,0xF7,0x6D,0x97,0xFA,0x5B,0x34,0x38,0x27,
    0xCF,0x12,0x46,0xD3,0x3C,0x11,0xF0,0x07,0xC9,0x99,0x90,0xB1,0xD1,0xE8,0x11,0x09,
    0xA5,0xE3,0xA5,0x6B,0x6C,0x63,0x08,0x3F,0x9E,0x25,0xFA,0xD5,0x99,0x9C,0x4C,0xE6,
    0xE5,0xCE,0x8E,0xB2,0x4D,0x68,0xEC,0x8B,0xAB,0xA3,0xA2,0x4F,0x8A,0x11,0x15,0x3E,
    0xDC,0x14,0x2B,0x1C,0xC6,0x44,0xB6,0x6F,0x67,0xC5,0x5B,0x4F,0x95,0x29,0x2D,0x87,
    0x5C,0x3F,0xDC,0x83,0x1E,0x77,0x4F,0xED,0xDA,0x54,0xA7,0x2D,0xE7,0x13,0x81,0xC1,
    0x63,0xC4,0x54,0x0B,0x1B,0x4B,0x0A,0x6A,0x28,0x22,0x08,0xD4,0x37,0x92,0x7C,0x7F,
    0x67,0x28,0x5F,0xAF,0x3D,0x3F,0xB7,0xAC,0x59,0x1D,0x38,0x34,0x64,0x5A,0xEE,0x33,
    0x4A,0x19,0x42,0x44,0x29,0xC4,0xCA,0x18,0x6B,0xE1,0xC1,0x53,0x2D,0x2D,0xF4,0x4D,
    0xC2,0x15,0xF6,0x33,0x32,0x18,0x78,0xF1,0x26,0x6F,0x8A,0x4D,0xEB,0x94,0x4C,0xA3,
    0xE8,0xFF,0x0F,0xB3,0x03,0x8B,0x65,0xDA,0xEB,0x2E,0xD8,0x65,0x50,0x9F,0xDC,0x9F,
    0x8A,0xDF,0x31,0xA8,0x84,0x54,0xDC,0x52,0x52,0x41,0xD2,0xB2,0x13,0x1D,0x31,0x46,
    0x47,0x88,0x5F,0x3E,0xEE,0xC3,0xF2,0x8C,0x23,0x04,0x95,0xEB,0xAC,0x8A,0x3E,0x82,
    0x6C,0x06,0x9F,0x2E,0xE3,0x8B,0x43,0x9A,0x62,0x5B,0x34,0x0D,0xF4,0x99,0xCF,0x2C,
    0xEE,0xBA,0x72,0x86,0x19,0x23,0xA5,0xFC,0x8E,0xB5,
};

#endif /* _TRUSTTESTS_EVALUATION_PATH_PARSE_TESTS_H_ */
