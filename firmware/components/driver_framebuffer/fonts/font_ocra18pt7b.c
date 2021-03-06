#include "../include/driver_framebuffer.h"
const uint8_t ocra18pt7bBitmaps[] = {
  0x00, 0xFF, 0xFF, 0xFF, 0xE0, 0x01, 0xF8, 0xFF, 0xFF, 0xF8, 0xFC, 0x76,
  0x33, 0x19, 0x8C, 0x33, 0x0C, 0xC3, 0x33, 0xFF, 0xFF, 0xCC, 0xC3, 0x33,
  0xFF, 0xFF, 0xCC, 0xC3, 0x30, 0xCC, 0x0C, 0x03, 0x00, 0xC3, 0xFF, 0xFF,
  0xF0, 0x0C, 0x03, 0xFF, 0xFF, 0xC0, 0x3F, 0xFF, 0xFF, 0x0C, 0x03, 0x00,
  0xC0, 0xF0, 0x3C, 0x3F, 0x1C, 0x06, 0x03, 0x01, 0xC0, 0xE0, 0x30, 0x18,
  0x0E, 0x07, 0x01, 0x80, 0xC3, 0xD0, 0xF0, 0x3C, 0x7E, 0x3F, 0xCC, 0x33,
  0x0C, 0xE7, 0x1F, 0x83, 0xC1, 0xF0, 0xEE, 0xF1, 0xFC, 0x7B, 0xFF, 0x7C,
  0xC0, 0xFF, 0xFE, 0xEE, 0xCC, 0x00, 0x19, 0xDC, 0xCC, 0x63, 0x18, 0xC6,
  0x30, 0xC7, 0x1C, 0x60, 0xC7, 0x1C, 0x61, 0x8C, 0x63, 0x18, 0xC6, 0x67,
  0x73, 0x00, 0x04, 0x03, 0x0C, 0xCF, 0xB7, 0x7F, 0x87, 0x81, 0xE0, 0xFC,
  0x7F, 0xBB, 0x70, 0xC0, 0x30, 0x0C, 0x03, 0x00, 0xC0, 0x30, 0x7F, 0xDF,
  0xF0, 0xC0, 0x30, 0x0C, 0x03, 0x00, 0xFF, 0xF0, 0xC3, 0x0C, 0x30, 0xC0,
  0xFF, 0xFF, 0xFF, 0xE0, 0xFF, 0xF0, 0x00, 0x80, 0x60, 0x18, 0x0C, 0x07,
  0x01, 0x80, 0xE0, 0x30, 0x18, 0x06, 0x03, 0x01, 0xC0, 0x60, 0x38, 0x0C,
  0x00, 0x7F, 0x7F, 0xF0, 0x78, 0x3C, 0x1E, 0x0F, 0x07, 0x83, 0xC1, 0xE0,
  0xF0, 0x78, 0x3C, 0x1F, 0xFD, 0xFC, 0x7C, 0x1F, 0x00, 0xC0, 0x30, 0x0C,
  0x03, 0x00, 0xC0, 0x30, 0x0C, 0xC3, 0x30, 0xCC, 0x33, 0x0C, 0xDF, 0xF7,
  0xFC, 0xFF, 0x7F, 0xC0, 0x60, 0x30, 0x18, 0x0D, 0xFF, 0xFE, 0xC0, 0x60,
  0x30, 0x18, 0x0C, 0x07, 0xFF, 0xFE, 0x7F, 0x9F, 0xF0, 0x0C, 0x03, 0x00,
  0xC0, 0x33, 0xFC, 0xFF, 0x00, 0xC0, 0x30, 0x0C, 0x03, 0x00, 0xDF, 0xF7,
  0xF8, 0xC0, 0x60, 0x30, 0xD8, 0x6C, 0x36, 0x1B, 0x0D, 0x86, 0xFF, 0xFF,
  0xC0, 0xC0, 0x60, 0x30, 0x18, 0x0C, 0x3F, 0xCF, 0xF3, 0x00, 0xC0, 0x30,
  0x0C, 0x03, 0xF8, 0xFF, 0x00, 0xC0, 0x30, 0x0C, 0x03, 0xC0, 0xFF, 0xF3,
  0xF8, 0xE0, 0x70, 0x30, 0x18, 0x0C, 0x06, 0x03, 0x01, 0x80, 0xFF, 0xFF,
  0xF0, 0x78, 0x3C, 0x1F, 0xFF, 0xFE, 0xFF, 0xFF, 0xFC, 0x0C, 0x03, 0x00,
  0xC0, 0x30, 0x1C, 0x0E, 0x0E, 0x03, 0x00, 0xC0, 0x30, 0x0C, 0x03, 0x00,
  0xC0, 0x3F, 0x1F, 0x8C, 0xC6, 0x63, 0x31, 0x99, 0xFF, 0xFF, 0xC1, 0xE0,
  0xF0, 0x78, 0x3C, 0x1F, 0xFD, 0xFE, 0xFF, 0xFF, 0xF0, 0x78, 0x3C, 0x1F,
  0xFF, 0xFE, 0x03, 0x01, 0x80, 0xC0, 0x60, 0x30, 0x18, 0x1C, 0x0E, 0xFF,
  0xF0, 0x00, 0x0F, 0xFF, 0xF3, 0xCF, 0x00, 0x00, 0x0F, 0xFF, 0x0C, 0x30,
  0xC3, 0x0C, 0x00, 0x81, 0xC3, 0xC3, 0xC7, 0x87, 0x03, 0x80, 0xE0, 0x3C,
  0x07, 0x80, 0xE0, 0x30, 0xFF, 0xBF, 0xE0, 0x00, 0x00, 0xFF, 0xBF, 0xE0,
  0x80, 0x70, 0x1E, 0x07, 0x80, 0xF0, 0x1C, 0x0E, 0x0E, 0x1E, 0x3C, 0x38,
  0x18, 0x00, 0x03, 0x01, 0xE1, 0xFC, 0xE3, 0x71, 0xF8, 0xEC, 0x70, 0x70,
  0x38, 0x0C, 0x03, 0x00, 0x00, 0x00, 0x0C, 0x03, 0x00, 0x3F, 0x1F, 0xEC,
  0x0F, 0x03, 0x00, 0xC0, 0x37, 0xCF, 0xF3, 0xCC, 0xF3, 0x3C, 0xCF, 0x33,
  0xCC, 0xFF, 0xF7, 0xF8, 0x0C, 0x03, 0x01, 0xC0, 0x78, 0x1E, 0x07, 0x83,
  0x60, 0xCC, 0x33, 0x18, 0xC7, 0xF9, 0xFE, 0x61, 0xB0, 0x6C, 0x0C, 0xFE,
  0x7F, 0xB0, 0xF8, 0x3C, 0x1E, 0x1F, 0xFD, 0xFE, 0xC3, 0xE0, 0xF0, 0x78,
  0x3C, 0x3F, 0xFB, 0xF8, 0x1F, 0x8F, 0xE3, 0x01, 0xC0, 0x60, 0x38, 0x0C,
  0x03, 0x00, 0xC0, 0x38, 0x06, 0x01, 0xC0, 0x30, 0x0F, 0xE1, 0xF8, 0xFC,
  0x3F, 0x83, 0x70, 0xCC, 0x33, 0x8C, 0x63, 0x18, 0xC3, 0x31, 0x8C, 0x63,
  0x38, 0xCC, 0x37, 0x3F, 0x8F, 0xC0, 0xFF, 0xBF, 0xEC, 0x03, 0x00, 0xC0,
  0x30, 0x0F, 0xC3, 0xF0, 0xC0, 0x30, 0x0C, 0x03, 0x00, 0xC0, 0x3F, 0xEF,
  0xF8, 0xFF, 0xBF, 0xEC, 0x03, 0x00, 0xC0, 0x3F, 0x8F, 0xE3, 0x00, 0xC0,
  0x30, 0x0C, 0x03, 0x00, 0xC0, 0x30, 0x0C, 0x00, 0x0F, 0x8F, 0xCE, 0x0E,
  0x06, 0x06, 0x03, 0x01, 0x80, 0xCF, 0xE7, 0xF0, 0x78, 0x3C, 0x1F, 0xFD,
  0xFC, 0xC1, 0xE0, 0xF0, 0x78, 0x3C, 0x1E, 0x0F, 0x07, 0xFF, 0xFF, 0xE0,
  0xF0, 0x78, 0x3C, 0x1E, 0x0F, 0x06, 0x00, 0x7F, 0xDF, 0xF0, 0xC0, 0x30,
  0x0C, 0x03, 0x00, 0xC0, 0x30, 0x0C, 0x03, 0x00, 0xC0, 0x30, 0x0C, 0x1F,
  0xF7, 0xFC, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0xC3, 0xC3,
  0xC3, 0xC3, 0xC3, 0xFF, 0x7E, 0xC0, 0xB0, 0xEC, 0x73, 0x38, 0xDC, 0x3E,
  0x0F, 0x03, 0x80, 0xF0, 0x3E, 0x0D, 0xC3, 0x38, 0xC7, 0x30, 0xEC, 0x08,
  0xC0, 0x30, 0x0C, 0x03, 0x00, 0xC0, 0x30, 0x0C, 0x03, 0x00, 0xC0, 0x30,
  0x0C, 0x03, 0x00, 0xC0, 0x3F, 0xEF, 0xF8, 0xE1, 0xFC, 0xFF, 0x3F, 0x7B,
  0xDE, 0xF3, 0x3C, 0xCF, 0x03, 0xC0, 0xF0, 0x3C, 0x0F, 0x03, 0xC0, 0xF0,
  0x3C, 0x0C, 0xE1, 0xF0, 0xFC, 0x7E, 0x3F, 0x1E, 0xCF, 0x67, 0x93, 0xCD,
  0xE6, 0xF1, 0xF8, 0xFC, 0x7E, 0x1F, 0x0E, 0x1C, 0x0F, 0x83, 0x61, 0xCC,
  0x63, 0x38, 0x6C, 0x1B, 0x06, 0xC1, 0xB8, 0x66, 0x31, 0xCC, 0x37, 0x0F,
  0x81, 0xC0, 0xFF, 0x7F, 0xF0, 0x78, 0x3C, 0x1E, 0x0F, 0x07, 0xFF, 0xFF,
  0x60, 0x30, 0x18, 0x0C, 0x06, 0x03, 0x00, 0x07, 0x07, 0xC7, 0x67, 0x37,
  0x1F, 0x0F, 0x07, 0x83, 0xC9, 0xE7, 0xF3, 0xD9, 0xCD, 0xE7, 0xFD, 0xDE,
  0xFF, 0x7F, 0xF0, 0x78, 0x3C, 0x1F, 0xFF, 0xFD, 0xB0, 0xCC, 0x67, 0x31,
  0x98, 0x6C, 0x36, 0x0F, 0x06, 0x7F, 0xBF, 0xEC, 0x0D, 0x82, 0x70, 0x0C,
  0x01, 0x80, 0x30, 0x0E, 0x01, 0xC0, 0x30, 0x06, 0xC0, 0xFF, 0xE7, 0xF8,
  0xFF, 0xFF, 0xFC, 0xC8, 0x30, 0x0C, 0x03, 0x00, 0xC0, 0x30, 0x0C, 0x03,
  0x00, 0xC0, 0x30, 0x0C, 0x03, 0x00, 0xC0, 0xC1, 0xE0, 0xF0, 0x78, 0x3C,
  0x1E, 0x0F, 0x07, 0x83, 0xC1, 0xE0, 0xF0, 0x78, 0x3C, 0x1F, 0xFD, 0xFC,
  0xC1, 0xE0, 0xF0, 0x78, 0x3C, 0x1E, 0x1D, 0x8C, 0xC6, 0x77, 0x1B, 0x0D,
  0x83, 0x81, 0xC0, 0xE0, 0x20, 0xC0, 0xF0, 0x3C, 0x0F, 0x03, 0xC0, 0xF3,
  0x3C, 0xCF, 0x33, 0xCC, 0xF3, 0x3C, 0xCF, 0x33, 0xCC, 0xDF, 0xE7, 0xF8,
  0xC0, 0xB8, 0x66, 0x19, 0xCC, 0x37, 0x07, 0x81, 0xE0, 0x30, 0x1E, 0x07,
  0x83, 0x71, 0xCC, 0x61, 0xB0, 0x6C, 0x08, 0xC0, 0xF0, 0x3C, 0x0F, 0x87,
  0x73, 0x8F, 0xC1, 0xE0, 0x30, 0x0C, 0x03, 0x00, 0xC0, 0x30, 0x0C, 0x03,
  0x00, 0xC0, 0xFF, 0xFF, 0xE0, 0x38, 0x0C, 0x07, 0x01, 0x80, 0xC0, 0x30,
  0x18, 0x0E, 0x03, 0x01, 0xC0, 0x60, 0x3F, 0xEF, 0xF8, 0xFF, 0xFF, 0xFD,
  0x83, 0x60, 0xD8, 0x36, 0x0D, 0x83, 0x60, 0xD8, 0x36, 0x0D, 0x83, 0x60,
  0xD8, 0x3F, 0xFF, 0xFC, 0xC0, 0x38, 0x06, 0x01, 0xC0, 0x30, 0x06, 0x01,
  0x80, 0x30, 0x0E, 0x01, 0x80, 0x70, 0x0C, 0x01, 0x80, 0x60, 0x08, 0x7F,
  0xDF, 0xF0, 0x6C, 0x1B, 0x06, 0xC1, 0xB0, 0x6C, 0x1B, 0x06, 0xC1, 0xB0,
  0x6C, 0x1B, 0x06, 0xDF, 0xF7, 0xFC, 0x00, 0x03, 0x01, 0xC0, 0x78, 0x3E,
  0x0D, 0xC7, 0x31, 0x86, 0xE1, 0xB0, 0x20, 0xFF, 0xBF, 0xE0, 0xF0, 0xF8,
  0x78, 0x3C, 0x1E, 0x07, 0x03, 0x3F, 0x1F, 0xC0, 0x60, 0x37, 0xFF, 0xFF,
  0x07, 0x83, 0xC3, 0xFF, 0xDF, 0xE0, 0xC0, 0x60, 0x30, 0x18, 0x0D, 0xE7,
  0xFB, 0x8F, 0x83, 0xC1, 0xE0, 0xF0, 0x78, 0x3E, 0x3F, 0xFB, 0x78, 0x1F,
  0x8F, 0xE7, 0x03, 0x00, 0xC0, 0x30, 0x0C, 0x03, 0x00, 0x70, 0x0F, 0xE1,
  0xF8, 0x01, 0x80, 0xC0, 0x60, 0x33, 0xDB, 0xFF, 0x8F, 0x83, 0xC1, 0xE0,
  0xF0, 0x78, 0x3E, 0x3B, 0xFC, 0xF6, 0x3E, 0x3F, 0xB8, 0xF8, 0x3C, 0x1F,
  0xFF, 0xFF, 0x80, 0xE0, 0x3F, 0xCF, 0xE0, 0x0F, 0x8F, 0xCC, 0x06, 0x0F,
  0xE7, 0xF0, 0xC0, 0x60, 0x30, 0x18, 0x0C, 0x06, 0x03, 0x01, 0x80, 0xC0,
  0x3D, 0xBF, 0xF8, 0xF8, 0x3C, 0x1E, 0x0F, 0x07, 0xC7, 0x7F, 0x9E, 0xC0,
  0x60, 0x30, 0x3B, 0xF9, 0xF8, 0xC0, 0x60, 0x30, 0x18, 0x0C, 0xF7, 0xFF,
  0xC7, 0xC3, 0xC1, 0xE0, 0xF0, 0x78, 0x3C, 0x1E, 0x0F, 0x06, 0x38, 0x38,
  0x00, 0x00, 0xF8, 0xF8, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0xFF,
  0xFF, 0x07, 0x07, 0x00, 0x00, 0x3F, 0x3F, 0x03, 0x03, 0x03, 0x03, 0x03,
  0x03, 0x03, 0x03, 0x03, 0x43, 0xC3, 0x7F, 0x3E, 0xC0, 0x30, 0x0C, 0x03,
  0x00, 0xC1, 0x31, 0xCC, 0xE3, 0x70, 0xF8, 0x3E, 0x0F, 0xC3, 0x38, 0xC7,
  0x30, 0x6C, 0x08, 0xF8, 0xF8, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18,
  0x18, 0x18, 0x18, 0x18, 0xFF, 0xFF, 0xFB, 0xBF, 0xFE, 0xEF, 0x33, 0xCC,
  0xF3, 0x3C, 0xCF, 0x33, 0xCC, 0xF3, 0x3C, 0xCC, 0xCF, 0x7F, 0xFC, 0x7C,
  0x3C, 0x1E, 0x0F, 0x07, 0x83, 0xC1, 0xE0, 0xF0, 0x60, 0x3E, 0x3F, 0xB8,
  0xF8, 0x3C, 0x1E, 0x0F, 0x07, 0x83, 0xE3, 0xBF, 0x8F, 0x80, 0xDC, 0x7F,
  0x3C, 0xDC, 0x3C, 0x1E, 0x0F, 0x07, 0xC3, 0xF3, 0x7F, 0x37, 0x18, 0x0C,
  0x06, 0x03, 0x00, 0x3D, 0xBF, 0xF8, 0xF8, 0x3C, 0x1E, 0x0F, 0x07, 0x83,
  0xE3, 0xBF, 0xCF, 0x60, 0x30, 0x18, 0x0C, 0x06, 0xCF, 0x37, 0xEF, 0x8B,
  0x83, 0xC0, 0x30, 0x0C, 0x03, 0x00, 0xC0, 0x30, 0x0C, 0x00, 0x7F, 0x1F,
  0xEC, 0x09, 0xC0, 0x7C, 0x03, 0xC0, 0x38, 0x07, 0xC1, 0xFF, 0xE7, 0xF0,
  0x30, 0x0C, 0x03, 0x03, 0xFE, 0xFF, 0x8C, 0x03, 0x00, 0xC0, 0x30, 0x0C,
  0x03, 0x00, 0xC3, 0x3F, 0x87, 0xC0, 0xC1, 0xE0, 0xF0, 0x78, 0x3C, 0x1E,
  0x0F, 0x07, 0x87, 0xC7, 0xFF, 0xDE, 0x60, 0xC1, 0xE0, 0xF0, 0x78, 0x36,
  0x33, 0x18, 0xDC, 0x6C, 0x36, 0x0E, 0x07, 0x00, 0xC0, 0xF0, 0x3C, 0x0F,
  0x03, 0xCC, 0xF3, 0x3C, 0xCF, 0x7B, 0xFF, 0xDF, 0xE7, 0x38, 0xC0, 0xB8,
  0x67, 0x30, 0xFC, 0x1E, 0x07, 0x01, 0xE0, 0xDC, 0x73, 0xB8, 0x6C, 0x08,
  0xC1, 0xE0, 0xF0, 0x78, 0x76, 0x33, 0x18, 0xD8, 0x6C, 0x3E, 0x0E, 0x03,
  0x01, 0x01, 0x87, 0xC3, 0xC0, 0x7F, 0xBF, 0xC0, 0xE0, 0xE0, 0xE0, 0xE0,
  0xE0, 0xE0, 0xE0, 0x7F, 0xFF, 0xE0, 0x07, 0xC3, 0xF0, 0xC0, 0x30, 0x0C,
  0x03, 0x07, 0xC1, 0xF0, 0x0C, 0x03, 0x00, 0xC0, 0x30, 0x0C, 0x03, 0xF0,
  0x7C, 0xFF, 0xF0, 0xFF, 0xF0, 0x78, 0x1F, 0x00, 0xC0, 0x30, 0x0C, 0x03,
  0x00, 0xF8, 0x3E, 0x0C, 0x03, 0x00, 0xC0, 0x30, 0x0C, 0x1F, 0x07, 0x80,
  0x78, 0x3F, 0x3C, 0xCF, 0x33, 0xCC, 0xF3, 0xF0, 0x78 };

const GFXglyph ocra18pt7bGlyphs[] = {
  {     0,   1,   1,  14,    0,    0 },   // 0x20 ' '
  {     1,   3,  15,  14,    5,  -14 },   // 0x21 '!'
  {     7,   9,   7,  14,    2,  -14 },   // 0x22 '"'
  {    15,  10,  12,  14,    2,  -14 },   // 0x23 '#'
  {    30,  10,  15,  14,    2,  -14 },   // 0x24 '$'
  {    49,  10,  15,  14,    2,  -14 },   // 0x25 '%'
  {    68,  10,  13,  14,    2,  -12 },   // 0x26 '&'
  {    85,   4,   9,  14,    5,  -14 },   // 0x27 '''
  {    90,   5,  15,  14,    5,  -14 },   // 0x28 '('
  {   100,   5,  15,  14,    4,  -14 },   // 0x29 ')'
  {   110,  10,  12,  14,    2,  -13 },   // 0x2A '*'
  {   125,  10,  10,  14,    2,  -12 },   // 0x2B '+'
  {   138,   6,   7,  14,    4,   -6 },   // 0x2C ','
  {   144,   9,   3,  14,    2,   -8 },   // 0x2D '-'
  {   148,   4,   3,  14,    5,   -4 },   // 0x2E '.'
  {   150,  10,  15,  14,    2,  -14 },   // 0x2F '/'
  {   169,   9,  15,  14,    2,  -14 },   // 0x30 '0'
  {   186,  10,  15,  14,    2,  -14 },   // 0x31 '1'
  {   205,   9,  15,  14,    2,  -14 },   // 0x32 '2'
  {   222,  10,  15,  14,    2,  -14 },   // 0x33 '3'
  {   241,   9,  15,  14,    3,  -14 },   // 0x34 '4'
  {   258,  10,  15,  14,    2,  -14 },   // 0x35 '5'
  {   277,   9,  15,  14,    2,  -14 },   // 0x36 '6'
  {   294,  10,  15,  14,    2,  -14 },   // 0x37 '7'
  {   313,   9,  15,  14,    2,  -14 },   // 0x38 '8'
  {   330,   9,  15,  14,    2,  -14 },   // 0x39 '9'
  {   347,   4,  10,  14,    5,  -11 },   // 0x3A ':'
  {   352,   6,  13,  14,    4,  -12 },   // 0x3B ';'
  {   362,   9,  12,  14,    2,  -13 },   // 0x3C '<'
  {   376,  10,   6,  14,    2,  -10 },   // 0x3D '='
  {   384,   9,  12,  14,    3,  -13 },   // 0x3E '>'
  {   398,  10,  15,  14,    2,  -14 },   // 0x3F '?'
  {   417,  10,  15,  14,    2,  -14 },   // 0x40 '@'
  {   436,  10,  15,  14,    2,  -14 },   // 0x41 'A'
  {   455,   9,  15,  14,    2,  -14 },   // 0x42 'B'
  {   472,  10,  15,  14,    2,  -14 },   // 0x43 'C'
  {   491,  10,  15,  14,    2,  -14 },   // 0x44 'D'
  {   510,  10,  15,  14,    2,  -14 },   // 0x45 'E'
  {   529,  10,  15,  14,    2,  -14 },   // 0x46 'F'
  {   548,   9,  15,  14,    2,  -14 },   // 0x47 'G'
  {   565,   9,  16,  14,    2,  -14 },   // 0x48 'H'
  {   583,  10,  15,  14,    2,  -14 },   // 0x49 'I'
  {   602,   8,  15,  14,    3,  -14 },   // 0x4A 'J'
  {   617,  10,  15,  14,    2,  -14 },   // 0x4B 'K'
  {   636,  10,  15,  14,    2,  -14 },   // 0x4C 'L'
  {   655,  10,  15,  14,    2,  -14 },   // 0x4D 'M'
  {   674,   9,  15,  14,    2,  -14 },   // 0x4E 'N'
  {   691,  10,  15,  14,    2,  -14 },   // 0x4F 'O'
  {   710,   9,  15,  14,    2,  -14 },   // 0x50 'P'
  {   727,   9,  15,  14,    2,  -14 },   // 0x51 'Q'
  {   744,   9,  15,  14,    2,  -14 },   // 0x52 'R'
  {   761,  10,  15,  14,    2,  -14 },   // 0x53 'S'
  {   780,  10,  15,  14,    2,  -14 },   // 0x54 'T'
  {   799,   9,  15,  14,    2,  -14 },   // 0x55 'U'
  {   816,   9,  15,  14,    2,  -14 },   // 0x56 'V'
  {   833,  10,  15,  14,    2,  -14 },   // 0x57 'W'
  {   852,  10,  15,  14,    2,  -14 },   // 0x58 'X'
  {   871,  10,  15,  14,    2,  -14 },   // 0x59 'Y'
  {   890,  10,  15,  14,    2,  -14 },   // 0x5A 'Z'
  {   909,  10,  15,  14,    2,  -14 },   // 0x5B '['
  {   928,  10,  15,  14,    2,  -14 },   // 0x5C '\'
  {   947,  10,  15,  14,    2,  -14 },   // 0x5D ']'
  {   966,  10,  10,  14,    2,  -11 },   // 0x5E '^'
  {   979,  10,   2,  14,    2,    1 },   // 0x5F '_'
  {   982,   8,   7,  14,    3,  -14 },   // 0x60 '`'
  {   989,   9,  11,  14,    2,  -10 },   // 0x61 'a'
  {  1002,   9,  15,  14,    2,  -14 },   // 0x62 'b'
  {  1019,  10,  11,  14,    2,  -10 },   // 0x63 'c'
  {  1033,   9,  15,  14,    2,  -14 },   // 0x64 'd'
  {  1050,   9,  11,  14,    2,  -10 },   // 0x65 'e'
  {  1063,   9,  15,  14,    2,  -14 },   // 0x66 'f'
  {  1080,   9,  15,  14,    2,  -10 },   // 0x67 'g'
  {  1097,   9,  15,  14,    2,  -14 },   // 0x68 'h'
  {  1114,   8,  15,  14,    3,  -14 },   // 0x69 'i'
  {  1129,   8,  19,  14,    3,  -14 },   // 0x6A 'j'
  {  1148,  10,  15,  14,    2,  -14 },   // 0x6B 'k'
  {  1167,   8,  15,  14,    3,  -14 },   // 0x6C 'l'
  {  1182,  10,  11,  14,    2,  -10 },   // 0x6D 'm'
  {  1196,   9,  11,  14,    2,  -10 },   // 0x6E 'n'
  {  1209,   9,  11,  14,    2,  -10 },   // 0x6F 'o'
  {  1222,   9,  15,  14,    2,  -10 },   // 0x70 'p'
  {  1239,   9,  15,  14,    2,  -10 },   // 0x71 'q'
  {  1256,  10,  11,  14,    2,  -10 },   // 0x72 'r'
  {  1270,  10,  11,  14,    2,  -10 },   // 0x73 's'
  {  1284,  10,  14,  14,    2,  -13 },   // 0x74 't'
  {  1302,   9,  11,  14,    2,  -10 },   // 0x75 'u'
  {  1315,   9,  11,  14,    2,  -10 },   // 0x76 'v'
  {  1328,  10,  11,  14,    2,  -10 },   // 0x77 'w'
  {  1342,  10,  11,  14,    2,  -10 },   // 0x78 'x'
  {  1356,   9,  15,  14,    2,  -10 },   // 0x79 'y'
  {  1373,   9,  11,  14,    2,  -10 },   // 0x7A 'z'
  {  1386,  10,  15,  14,    2,  -14 },   // 0x7B '{'
  {  1405,   2,  15,  14,    6,  -14 },   // 0x7C '|'
  {  1409,  10,  15,  14,    2,  -14 },   // 0x7D '}'
  {  1428,  10,   7,  14,    2,  -14 } }; // 0x7E '~'

const GFXfont ocra18pt7b = {
  (uint8_t  *)ocra18pt7bBitmaps,
  (GFXglyph *)ocra18pt7bGlyphs,
  0x20, 0x7E, 18 };//B

// Approx. 2109 bytes
