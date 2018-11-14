// fl2000_big_table.c
//
// (c)Copyright 2017, Fresco Logic, Incorporated.
//
// Purpose: TODO: PLEASE RENAME THIS FILE TO SOMETHING USEFUL
//

#include "fl2000_include.h"

struct fl2000_timing_entry const big_table_24bit_r0[] = {
	{ 640,480,60, 0x320, 0x20d, 0x2800320, 0x600089, 0x1e0020d, 0x1c2001c, 0x3f6119 },
	{ 640,480,73, 0x340, 0x208, 0x2800340, 0x2800a1, 0x1e00208, 0x1830018, 0x3c6113 },
	{ 640,480,75, 0x348, 0x1f4, 0x2800348, 0x4000b9, 0x1e001f4, 0x1430014, 0x3f6114 },
	{ 640,350,85, 0x340, 0x1bd, 0x2800340, 0x4000a1, 0x15e01bd, 0x4030040, 0x6b6211 },
	{ 640,400,85, 0x340, 0x1bd, 0x2800340, 0x4000a1, 0x19001bd, 0x2d3002d, 0x6b6211 },
	{ 720,400,85, 0x3a8, 0x1be, 0x2d003a8, 0x4800b5, 0x19001be, 0x2e3002e, 0x476114 },
	{ 800,600,56, 0x400, 0x271, 0x3200400, 0x4800c9, 0x2580271, 0x1920019, 0x2b410c },
	{ 640,480,85, 0x340, 0x1fd, 0x2800340, 0x380089, 0x1e001fd, 0x1d3001d, 0x24410a },
	{ 800,600,60, 0x420, 0x274, 0x3200420, 0x8000d9, 0x2580274, 0x1c4001c, 0x80102 },
	{ 1024,768,43, 0x4f0, 0x331, 0x40004f0, 0xb000e9, 0x3000331, 0x1940019, 0x476110 },
	{ 848,480,60, 0x440, 0x205, 0x3500440, 0x7000e1, 0x1e00205, 0x2080020, 0x1b4108 },
	{ 800,600,75, 0x420, 0x271, 0x3200420, 0x5000f1, 0x2580271, 0x1930019, 0x636114 },
	{ 800,600,72, 0x410, 0x29a, 0x3200410, 0x7800b9, 0x258029a, 0x1e6001e, 0xa0102 },
	{ 800,600,85, 0x418, 0x277, 0x3200418, 0x4000d9, 0x2580277, 0x1f3001f, 0x2d4108 },
	{ 1024,768,60, 0x540, 0x326, 0x4000540, 0x880129, 0x3000326, 0x2460024, 0xd2102 },
	{ 1280,720,60, 0x672, 0x2ee, 0x5000672, 0x280105, 0x2d002ee, 0x1f5001f, 0x346107 },
	{ 1024,768,70, 0x530, 0x326, 0x4000530, 0x880119, 0x3000326, 0x2460024, 0xf2102 },
	{ 1024,768,75, 0x520, 0x320, 0x4000520, 0x600111, 0x3000320, 0x2030020, 0x3f6108 },
	{ 1280,768,60, 0x680, 0x31e, 0x5000680, 0x800141, 0x300031e, 0x1c7001c, 0x7f6208 },
	{ 1152,864,60, 0x640, 0x384, 0x4800640, 0x800181, 0x3600384, 0x2430024, 0x796207 },
	{ 1280,800,60, 0x690, 0x33f, 0x5000690, 0x800149, 0x320033f, 0x1d6001d, 0x436108 },
	{ 1366,768,60, 0x700, 0x31e, 0x5560700, 0x8f0165, 0x300031e, 0x1c3001c, 0x676206 },
	{ 1360,768,60, 0x700, 0x31b, 0x5500700, 0x700171, 0x300031b, 0x1960019, 0x5e610b },
	{ 1024,768,85, 0x560, 0x328, 0x4000560, 0x600131, 0x3000328, 0x2830028, 0x556109 },
	{ 1280,960,60, 0x708, 0x3e8, 0x5000708, 0x7001a9, 0x3c003e8, 0x2830028, 0x616109 },
	{ 1280,768,75, 0x6a0, 0x325, 0x50006a0, 0x800151, 0x3000325, 0x2370023, 0x294104 },
	{ 1440,900,60, 0x770, 0x3a6, 0x5a00770, 0x980181, 0x38403a6, 0x2060020, 0x406106 },
	{ 1280,800,75, 0x6a0, 0x346, 0x50006a0, 0x800151, 0x3200346, 0x2460024, 0x406106 },
	{ 1280,1024,60, 0x698, 0x42a, 0x5000698, 0x700169, 0x400042a, 0x2a3002a, 0x616109 },
	{ 1280,768,85, 0x6b0, 0x329, 0x50006b0, 0x880161, 0x3000329, 0x2770027, 0x2f4104 },
	{ 1400,1050,60, 0x748, 0x441, 0x5780748, 0x900179, 0x41a0441, 0x2540025, 0x496106 },
	{ 1280,800,85, 0x6b0, 0x34b, 0x50006b0, 0x880161, 0x320034b, 0x2960029, 0x314104 },
	{ 1280,1024,75, 0x698, 0x42a, 0x5000698, 0x900189, 0x400042a, 0x2a3002a, 0x1b4102 },
	{ 1440,900,75, 0x790, 0x3ae, 0x5a00790, 0x980191, 0x38403ae, 0x2860028, 0x526106 },
	{ 1680,1050,60, 0x8c0, 0x441, 0x69008c0, 0xb001c9, 0x41a0441, 0x2560025, 0x756204 },
	{ 1920,1080,50, 0xa50, 0x465, 0x7800a50, 0x2c00c1, 0x4380465, 0x2a5002a, 0x596106 },
	{ 1920,1080,60, 0x898, 0x465, 0x7800898, 0x2c00c1, 0x4380465, 0x2a5002a, 0x596106 },
	{ 1280,960,85, 0x6c0, 0x3f3, 0x50006c0, 0xa00181, 0x3c003f3, 0x3330033, 0x596106 },
	{ 1400,1050,75, 0x768, 0x44b, 0x5780768, 0x900189, 0x41a044b, 0x2f4002f, 0x7d6204 },
	{ 1440,900,85, 0x7a0, 0x3b4, 0x5a007a0, 0x980199, 0x38403b4, 0x2e6002e, 0x3f6104 },
	{ 1280,1024,85, 0x6c0, 0x430, 0x50006c0, 0xa00181, 0x4000430, 0x3030030, 0x3f6104 },
	{ 1600,1200,60, 0x870, 0x4e2, 0x6400870, 0xc001f1, 0x4b004e2, 0x3230032, 0x616106 },
	{ 1600,1200,65, 0x879, 0x4e2, 0x6400879, 0xc001f1, 0x4b004e2, 0x3230032, 0x234102 },
	{ 1400,1050,85, 0x778, 0x451, 0x5780778, 0x980199, 0x41a0451, 0x3540035, 0x244102 },
	{ 1680,1050,75, 0x8e0, 0x44b, 0x69008e0, 0xb001d9, 0x41a044b, 0x2f6002f, 0x4b6104 },
	{ 1600,1200,70, 0x870, 0x4e2, 0x6400870, 0xc001f1, 0x4b004e2, 0x3230032, 0x264102 },
	{ 1920,1200,60, 0xa20, 0x4dd, 0x7800a20, 0xc80219, 0x4b004dd, 0x2b6002b, 0x4d6104 },
	{ 1600,1200,75, 0x870, 0x4e2, 0x6400870, 0xc001f1, 0x4b004e2, 0x3230032, 0x516104 },
	{ 1792,1344,60, 0x9b8, 0x572, 0x70009b8, 0x190043, 0x5400572, 0x3230032, 0x536104 },
	{ 1680,1050,85, 0x8f0, 0x451, 0x69008f0, 0xb001e1, 0x41a0451, 0x3560035, 0x2b4102 },
	{ 1856,1392,60, 0x9e0, 0x59f, 0x74009e0, 0xe00241, 0x570059f, 0x2f3002f, 0x576104 },
	{ 1600,1200,85, 0x870, 0x4e2, 0x6400870, 0xc001f1, 0x4b004e2, 0x3230032, 0x2e4102 },
	{ 1920,1440,60, 0xa28, 0x5dc, 0x7800a28, 0xd00229, 0x5a005dc, 0x3c3003c, 0x2f4102 },
	{ 1920,1200,75, 0xa30, 0x4e7, 0x7800a30, 0xd00229, 0x4b004e7, 0x3560035, 0x314102 },
	{ 1792,1344,75, 0x998, 0x589, 0x7000998, 0xd80239, 0x5400589, 0x4930049, 0x346102 },
	{ 1600,1200,100, 0x870, 0x4e2, 0x6400870, 0xc001f1, 0x4b004e2, 0x3230032, 0x366102 },
	{ 1920,1200,85, 0xa40, 0x4ee, 0x7800a40, 0xd00231, 0x4b004ee, 0x3c6003c, 0x716202 },
	{ 1856,1392,75, 0xa00, 0x5dc, 0x7400a00, 0xe00241, 0x57005dc, 0x6c3006c, 0x736202 },
	{ 1920,1440,75, 0xa50, 0x5dc, 0x7800a50, 0xe00241, 0x5a005dc, 0x3c3003c, 0x776202 },
	{ 2560,1600,60, 0xdb0, 0x67a, 0xa000db0, 0x11802f1, 0x640067a, 0x3860038, 0x466102 },
	{ 2560,1600,75, 0xdd0, 0x688, 0xa000dd0, 0x1180301, 0x6400688, 0x4660046, 0x596102 },
	{ 2560,1600,85, 0xdd0, 0x692, 0xa000dd0, 0x1180301, 0x6400692, 0x5060050, 0x646102 },
	{ 1920,1080,24, 0xac0, 0x465, 0x7800ac0, 0x3000c1, 0x4380465, 0x2a5002a, 0x346107 },
	{ 1600,900,60, 0x708, 0x3e8, 0x6400708, 0x5000b1, 0x38403e8, 0x6430064, 0x616109 },
	{ 1280,600,60, 0x670, 0x26e, 0x5000670, 0x800139, 0x258026e, 0x1630016, 0x7b620a },
	{ 854,480,15, 0x440, 0x205, 0x3560440, 0x7000e1, 0x1e00205, 0x2080020, 0x1b4120 },
	{ 854,480,60, 0x440, 0x205, 0x3560440, 0x7000e1, 0x1e00205, 0x2080020, 0x1b4108 },
	{ 854,480,56, 0x41f, 0x21a, 0x356041f, 0x3d009b, 0x1e0021a, 0x2130021, 0x59611c },
	{ 854,480,30, 0x41f, 0x21a, 0x356041f, 0x3d009b, 0x1e0021a, 0x2130021, 0x3f6125 },
	{ 854,480,24, 0x527, 0x21a, 0x3560527, 0x3d009b, 0x1e0021a, 0x2130021, 0x6d6220 },
	{ 2048,1152,60, 0x8a0, 0x4a1, 0x80008a0, 0x200071, 0x48004a1, 0x1f5001f, 0x5e6106 },
	{ 1920,1200,60, 0xa20, 0x4da, 0x7800a20, 0xd001b3, 0x4b004da, 0x2a3002a, 0x4d6104 },
	{ 1920,1080,30, 0x898, 0x465, 0x7800898, 0x2c00c1, 0x4380465, 0x2a5002a, 0x346107 },
};

struct fl2000_timing_entry const big_table_16bit_r0[] = {
	{ 640,480,60, 0x320, 0x20d, 0x2800320, 0x600089, 0x1e0020d, 0x1c2001c, 0x3f6119 },
	{ 640,480,73, 0x340, 0x208, 0x2800340, 0x2800a1, 0x1e00208, 0x1830018, 0x3c6113 },
	{ 640,480,75, 0x348, 0x1f4, 0x2800348, 0x4000b9, 0x1e001f4, 0x1430014, 0x3f6114 },
	{ 640,350,85, 0x340, 0x1bd, 0x2800340, 0x4000a1, 0x15e01bd, 0x4030040, 0x6b6211 },
	{ 640,400,85, 0x340, 0x1bd, 0x2800340, 0x4000a1, 0x19001bd, 0x2d3002d, 0x6b6211 },
	{ 720,400,85, 0x3a8, 0x1be, 0x2d003a8, 0x4800b5, 0x19001be, 0x2e3002e, 0x476114 },
	{ 800,600,56, 0x400, 0x271, 0x3200400, 0x4800c9, 0x2580271, 0x1920019, 0x2b410c },
	{ 640,480,85, 0x340, 0x1fd, 0x2800340, 0x380089, 0x1e001fd, 0x1d3001d, 0x24410a },
	{ 800,600,60, 0x420, 0x274, 0x3200420, 0x8000d9, 0x2580274, 0x1c4001c, 0x80102 },
	{ 1024,768,43, 0x4f0, 0x331, 0x40004f0, 0xb000e9, 0x3000331, 0x1940019, 0x476110 },
	{ 848,480,60, 0x440, 0x205, 0x3500440, 0x7000e1, 0x1e00205, 0x2080020, 0x1b4108 },
	{ 800,600,75, 0x420, 0x271, 0x3200420, 0x5000f1, 0x2580271, 0x1930019, 0x636114 },
	{ 800,600,72, 0x410, 0x29a, 0x3200410, 0x7800b9, 0x258029a, 0x1e6001e, 0xa0102 },
	{ 800,600,85, 0x418, 0x277, 0x3200418, 0x4000d9, 0x2580277, 0x1f3001f, 0x2d4108 },
	{ 1024,768,60, 0x540, 0x326, 0x4000540, 0x880129, 0x3000326, 0x2460024, 0xd2102 },
	{ 1280,720,60, 0x672, 0x2ee, 0x5000672, 0x280105, 0x2d002ee, 0x1f5001f, 0x346107 },
	{ 1024,768,70, 0x530, 0x326, 0x4000530, 0x880119, 0x3000326, 0x2460024, 0xf2102 },
	{ 1024,768,75, 0x520, 0x320, 0x4000520, 0x600111, 0x3000320, 0x2030020, 0x3f6108 },
	{ 1280,768,60, 0x680, 0x31e, 0x5000680, 0x800141, 0x300031e, 0x1c7001c, 0x7f6208 },
	{ 1152,864,60, 0x640, 0x384, 0x4800640, 0x800181, 0x3600384, 0x2430024, 0x796207 },
	{ 1280,800,60, 0x690, 0x33f, 0x5000690, 0x800149, 0x320033f, 0x1d6001d, 0x436108 },
	{ 1366,768,60, 0x700, 0x31e, 0x5560700, 0x8f0165, 0x300031e, 0x1c3001c, 0x676206 },
	{ 1360,768,60, 0x700, 0x31b, 0x5500700, 0x700171, 0x300031b, 0x1960019, 0x5e610b },
	{ 1024,768,85, 0x560, 0x328, 0x4000560, 0x600131, 0x3000328, 0x2830028, 0x556109 },
	{ 1280,960,60, 0x708, 0x3e8, 0x5000708, 0x7001a9, 0x3c003e8, 0x2830028, 0x616109 },
	{ 1280,768,75, 0x6a0, 0x325, 0x50006a0, 0x800151, 0x3000325, 0x2370023, 0x294104 },
	{ 1440,900,60, 0x770, 0x3a6, 0x5a00770, 0x980181, 0x38403a6, 0x2060020, 0x406106 },
	{ 1280,800,75, 0x6a0, 0x346, 0x50006a0, 0x800151, 0x3200346, 0x2460024, 0x406106 },
	{ 1280,1024,60, 0x698, 0x42a, 0x5000698, 0x700169, 0x400042a, 0x2a3002a, 0x616109 },
	{ 1280,768,85, 0x6b0, 0x329, 0x50006b0, 0x880161, 0x3000329, 0x2770027, 0x2f4104 },
	{ 1400,1050,60, 0x748, 0x441, 0x5780748, 0x900179, 0x41a0441, 0x2540025, 0x496106 },
	{ 1280,800,85, 0x6b0, 0x34b, 0x50006b0, 0x880161, 0x320034b, 0x2960029, 0x314104 },
	{ 1280,1024,75, 0x698, 0x42a, 0x5000698, 0x900189, 0x400042a, 0x2a3002a, 0x1b4102 },
	{ 1440,900,75, 0x790, 0x3ae, 0x5a00790, 0x980191, 0x38403ae, 0x2860028, 0x526106 },
	{ 1680,1050,60, 0x8c0, 0x441, 0x69008c0, 0xb001c9, 0x41a0441, 0x2560025, 0x756204 },
	{ 1920,1080,50, 0xa50, 0x465, 0x7800a50, 0x2c00c1, 0x4380465, 0x2a5002a, 0x596106 },
	{ 1920,1080,60, 0x898, 0x465, 0x7800898, 0x2c00c1, 0x4380465, 0x2a5002a, 0x596106 },
	{ 1280,960,85, 0x6c0, 0x3f3, 0x50006c0, 0xa00181, 0x3c003f3, 0x3330033, 0x596106 },
	{ 1400,1050,75, 0x768, 0x44b, 0x5780768, 0x900189, 0x41a044b, 0x2f4002f, 0x7d6204 },
	{ 1440,900,85, 0x7a0, 0x3b4, 0x5a007a0, 0x980199, 0x38403b4, 0x2e6002e, 0x3f6104 },
	{ 1280,1024,85, 0x6c0, 0x430, 0x50006c0, 0xa00181, 0x4000430, 0x3030030, 0x3f6104 },
	{ 1600,1200,60, 0x870, 0x4e2, 0x6400870, 0xc001f1, 0x4b004e2, 0x3230032, 0x616106 },
	{ 1600,1200,65, 0x879, 0x4e2, 0x6400879, 0xc001f1, 0x4b004e2, 0x3230032, 0x234102 },
	{ 1400,1050,85, 0x778, 0x451, 0x5780778, 0x980199, 0x41a0451, 0x3540035, 0x244102 },
	{ 1680,1050,75, 0x8e0, 0x44b, 0x69008e0, 0xb001d9, 0x41a044b, 0x2f6002f, 0x4b6104 },
	{ 1600,1200,70, 0x870, 0x4e2, 0x6400870, 0xc001f1, 0x4b004e2, 0x3230032, 0x264102 },
	{ 1920,1200,60, 0xa20, 0x4dd, 0x7800a20, 0xc80219, 0x4b004dd, 0x2b6002b, 0x4d6104 },
	{ 1600,1200,75, 0x870, 0x4e2, 0x6400870, 0xc001f1, 0x4b004e2, 0x3230032, 0x516104 },
	{ 1792,1344,60, 0x9b8, 0x572, 0x70009b8, 0x190043, 0x5400572, 0x3230032, 0x536104 },
	{ 1680,1050,85, 0x8f0, 0x451, 0x69008f0, 0xb001e1, 0x41a0451, 0x3560035, 0x2b4102 },
	{ 1856,1392,60, 0x9e0, 0x59f, 0x74009e0, 0xe00241, 0x570059f, 0x2f3002f, 0x576104 },
	{ 1600,1200,85, 0x870, 0x4e2, 0x6400870, 0xc001f1, 0x4b004e2, 0x3230032, 0x2e4102 },
	{ 1920,1440,60, 0xa28, 0x5dc, 0x7800a28, 0xd00229, 0x5a005dc, 0x3c3003c, 0x2f4102 },
	{ 1920,1200,75, 0xa30, 0x4e7, 0x7800a30, 0xd00229, 0x4b004e7, 0x3560035, 0x314102 },
	{ 1792,1344,75, 0x998, 0x589, 0x7000998, 0xd80239, 0x5400589, 0x4930049, 0x346102 },
	{ 1600,1200,100, 0x870, 0x4e2, 0x6400870, 0xc001f1, 0x4b004e2, 0x3230032, 0x366102 },
	{ 1920,1200,85, 0xa40, 0x4ee, 0x7800a40, 0xd00231, 0x4b004ee, 0x3c6003c, 0x716202 },
	{ 1856,1392,75, 0xa00, 0x5dc, 0x7400a00, 0xe00241, 0x57005dc, 0x6c3006c, 0x736202 },
	{ 1920,1440,75, 0xa50, 0x5dc, 0x7800a50, 0xe00241, 0x5a005dc, 0x3c3003c, 0x776202 },
	{ 2560,1600,60, 0xdb0, 0x67a, 0xa000db0, 0x11802f1, 0x640067a, 0x3860038, 0x466102 },
	{ 2560,1600,75, 0xdd0, 0x688, 0xa000dd0, 0x1180301, 0x6400688, 0x4660046, 0x596102 },
	{ 2560,1600,85, 0xdd0, 0x692, 0xa000dd0, 0x1180301, 0x6400692, 0x5060050, 0x646102 },
	{ 1920,1080,24, 0xac0, 0x465, 0x7800ac0, 0x3000c1, 0x4380465, 0x2a5002a, 0x346107 },
	{ 1600,900,60, 0x708, 0x3e8, 0x6400708, 0x5000b1, 0x38403e8, 0x6430064, 0x616109 },
	{ 1280,600,60, 0x670, 0x26e, 0x5000670, 0x800139, 0x258026e, 0x1630016, 0x7b620a },
	{ 854,480,15, 0x440, 0x205, 0x3560440, 0x7000e1, 0x1e00205, 0x2080020, 0x1b4120 },
	{ 854,480,60, 0x440, 0x205, 0x3560440, 0x7000e1, 0x1e00205, 0x2080020, 0x1b4108 },
	{ 854,480,56, 0x41f, 0x21a, 0x356041f, 0x3d009b, 0x1e0021a, 0x2130021, 0x59611c },
	{ 854,480,30, 0x41f, 0x21a, 0x356041f, 0x3d009b, 0x1e0021a, 0x2130021, 0x3f6125 },
	{ 854,480,24, 0x527, 0x21a, 0x3560527, 0x3d009b, 0x1e0021a, 0x2130021, 0x6d6220 },
	{ 2048,1152,60, 0x8a0, 0x4a1, 0x80008a0, 0x200071, 0x48004a1, 0x1f5001f, 0x5e6106 },
	{ 1920,1200,60, 0xa20, 0x4da, 0x7800a20, 0xd001b3, 0x4b004da, 0x2a3002a, 0x4d6104 },
	{ 1920,1080,30, 0x898, 0x465, 0x7800898, 0x2c00c1, 0x4380465, 0x2a5002a, 0x346107 },
};

struct fl2000_timing_entry const *
fl2000_table_get_entry(
	uint32_t table_num,
	uint32_t width,
	uint32_t height,
	uint32_t freq)
{
	struct fl2000_timing_entry const * table;
	struct fl2000_timing_entry const * entry = NULL;
	uint32_t i, size;
	
	table = NULL;

	dbg_msg(TRACE_LEVEL_INFO, DBG_OTHER,
		 "Search table:%u width:%u height:%u freq:%u entry.",
		 table_num,
		 width,
		 height,
		 freq);

	switch (table_num) {
	case VGA_BIG_TABLE_24BIT_R0:
		table = big_table_24bit_r0;
		size = ARRAY_SIZE(big_table_24bit_r0);
		break;
	case VGA_BIG_TABLE_16BIT_R0:
		table = big_table_16bit_r0;
		size = ARRAY_SIZE(big_table_16bit_r0);
		break;
	default:
		BUG();
		break;
	}

	for(i = 0; i < size; i++) {
		if (width == table[i].width &&
		    height == table[i].height &&
		    freq == table[i].freq) {
			dbg_msg(TRACE_LEVEL_INFO, DBG_OTHER,
				"Found matched set.");

			entry = &table[i];
			break;
		}
	}

    return entry;
}

// eof: fl2000_big_table.c
//
