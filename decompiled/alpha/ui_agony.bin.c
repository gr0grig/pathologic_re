task_0_event_100(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_float, var_7_int)
{
	DestroyWindow(); // 0x75 Func
	return 0; // 0x77 Return
}


task_0_event_200(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_float, var_7_int, var_8_string, var_9_object)
{
	var_10_int = 0; var_11_int = 0; // 0xcb PushV
	var_12_string = "ok"; // 0xcc PushS
	var_13_bool = var_8_string == var_12_string; // 0xcd Eq
	if(var_13_bool == 0) goto Label_211; // 0xce JumpB
	func_336(); // 0xd0 Call
	goto Label_242; // 0xd2 Jump
	
Label_242:
	return 2; // 0xf2 Return
	
Label_211:
	var_96_string = "cancel"; // 0xd3 PushS
	var_97_bool = var_8_string == var_96_string; // 0xd4 Eq
	if(var_97_bool == 0) goto Label_218; // 0xd5 JumpB
	func_358(); // 0xd7 Call
	goto Label_242; // 0xd9 Jump
	
Label_218:
	var_147_int = 0; var_148_int = 0; var_149_string = ""; // 0xda PushV
	var_148_int = var_7_int; // 0xdb Mov
	var_149_string = var_8_string; // 0xdc Mov
	func_451(var_148_int, var_149_string); // 0xdd Call
	var_11_int = var_147_int; // 0xde Mov
	var_158_int = -1; // 0xe0 PushI
	var_159_bool = var_11_int != var_158_int; // 0xe1 Neq
	if(var_159_bool == 0) goto Label_242; // 0xe2 JumpB
	var_160_int = 0; // 0xe3 PushI
	var_161_bool = var_7_int == var_160_int; // 0xe4 Eq
	if(var_161_bool == 0) goto Label_235; // 0xe5 JumpB
	var_162_int = 0; // 0xe6 PushV
	var_162_int = var_11_int; // 0xe7 Mov
	func_377(var_162_int); // 0xe8 Call
	goto Label_242; // 0xea Jump
	
Label_235:
	var_174_int = 1; // 0xeb PushI
	var_175_bool = var_7_int == var_174_int; // 0xec Eq
	if(var_175_bool == 0) goto Label_242; // 0xed JumpB
	var_176_int = 0; // 0xee PushV
	var_176_int = var_11_int; // 0xef Mov
	func_404(var_176_int); // 0xf0 Call
}


main(var_0_object, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_float)
{
	var_7_string = "default"; // 0x0 PushS
	SetCursor(var_7_string); // 0x1 Func
	ShowCursor(); // 0x3 Func
	CaptureKeyboard(); // 0x5 Func
	var_8_bool = 0; // 0x7 PushB
	SetOwnerDraw(var_8_bool); // 0x8 Func
	GetWindowData(var_2_object); // 0xa Func
	var_9_bool = var_5_object == 0; // 0xc Not
	if(var_9_bool == 0) goto Label_17; // 0xd JumpB
	DestroyWindow(); // 0xe Func
	return 0; // 0x10 Return
	
Label_17:
	var_10_string = "agony"; // 0x11 PushS
	GetProperty(var_10_string, var_2_object); // 0x12 TObjFunc
	func_54(var_5_object, var_6_float); // 0x15 Call
	func_150(); // 0x18 Call
	func_141(); // 0x1b Call
	ProcessEvents(); // 0x1d Func
	return 0; // 0x1f Return
}


func_32(var_37_bool, var_38_int)
{
	var_39_int = 0; var_40_int = 0; var_41_object = Obj(); var_42_int = 0; var_43_int = 0; var_44_object = Obj(); // 0x20 PushV
	size(var_42_int); // 0x21 TObjFunc
	var_43_int = 0; // 0x23 MovI
	
Label_36:
	var_45_bool = var_43_int < var_42_int; // 0x24 LT
	if(var_45_bool == 0) goto Label_52; // 0x25 JumpB
	get(var_44_object, var_43_int); // 0x26 TObjFunc
	var_46_int = 0; var_47_object = Obj(); // 0x28 PushV
	var_47_object = var_44_object; // 0x29 Mov
	func_446(var_47_object); // 0x2a Call
	var_48_bool = var_46_int == var_38_int; // 0x2c Eq
	if(var_48_bool == 0) goto Label_48; // 0x2d JumpB
	var_37_bool = 1; // 0x2e MovB
	return 6; // 0x2f Return
	
Label_48:
	var_44_object = 0; // 0x30 SetNull
	var_49_int = 1; // 0x31 PushI
	var_43_int = var_43_int + var_49_int; // 0x32 Add2
	goto Label_36; // 0x33 Jump
	
Label_52:
	var_37_bool = 0; // 0x34 MovB
	return 6; // 0x35 Return
}


func_451(var_147_int, var_149_string)
{
	var_150_int = 0; var_151_int = 0; // 0x1c3 PushV
	var_151_int = 0; // 0x1c4 MovI
	
Label_453:
	var_152_int = 6; // 0x1c5 PushI
	var_153_bool = var_151_int < var_152_int; // 0x1c6 LT
	if(var_153_bool == 0) goto Label_467; // 0x1c7 JumpB
	var_154_string = ""; var_155_int = 0; // 0x1c8 PushV
	var_155_int = var_151_int; // 0x1c9 Mov
	func_430(var_154_string, var_155_int); // 0x1ca Call
	var_156_bool = var_149_string == var_154_string; // 0x1cc Eq
	if(var_156_bool == 0) goto Label_464; // 0x1cd JumpB
	var_147_int = var_151_int; // 0x1ce Mov
	return 2; // 0x1cf Return
	
Label_464:
	var_157_int = 1; // 0x1d0 PushI
	var_151_int = var_151_int + var_157_int; // 0x1d1 Add2
	goto Label_453; // 0x1d2 Jump
	
Label_467:
	var_147_int = -1; // 0x1d3 MovI
	return 2; // 0x1d4 Return
}


func_358()
{
	var_98_int = 0; var_99_int = 0; var_100_int = 0; var_101_int = 0; // 0x166 PushV
	size(var_100_int); // 0x167 TObjFunc
	var_101_int = 0; // 0x169 MovI
	
Label_362:
	var_102_bool = var_101_int < var_100_int; // 0x16a LT
	if(var_102_bool == 0) goto Label_370; // 0x16b JumpB
	var_103_int = 0; // 0x16c PushI
	set(var_101_int, var_103_int); // 0x16d TObjFunc
	var_104_int = 1; // 0x16f PushI
	var_101_int = var_101_int + var_104_int; // 0x170 Add2
	goto Label_362; // 0x171 Jump
	
Label_370:
	func_150(); // 0x173 Call
	func_141(); // 0x176 Call
	return 4; // 0x178 Return
}


func_141()
{
	var_90_int = 100; // 0x8d PushI
	var_91_float = 0; // 0x8e PushV
	func_120(var_90_int, var_91_float); // 0x8f Call
	var_107_float = var_90_int * var_91_float; // 0x91 Mult
	var_108_string = "level"; // 0x92 PushS
	SendMessage(var_107_float, var_108_string); // 0x93 Func
	return 0; // 0x95 Return
}


func_430(var_67_string, var_68_int)
{
	var_69_int = 1; // 0x1af PushI
	var_70_int = var_68_int + var_69_int; // 0x1b0 Add
	var_71_int = 10; // 0x1b1 PushI
	var_72_bool = var_70_int < var_71_int; // 0x1b2 LT
	if(var_72_bool == 0) goto Label_441; // 0x1b3 JumpB
	var_73_string = "slot0"; // 0x1b4 PushS
	var_74_int = 1; // 0x1b5 PushI
	var_75_int = var_68_int + var_74_int; // 0x1b6 Add
	var_67_string = var_73_string + var_75_int; // 0x1b7 Add2
	return 0; // 0x1b8 Return
	
Label_441:
	var_76_string = "slot"; // 0x1b9 PushS
	var_77_int = 1; // 0x1ba PushI
	var_78_int = var_68_int + var_77_int; // 0x1bb Add
	var_67_string = var_76_string + var_78_int; // 0x1bc Add2
	return 0; // 0x1bd Return
}


func_336()
{
	var_14_float = 0; var_15_float = 0; // 0x150 PushV
	var_16_float = 0; // 0x151 PushV
	func_120(var_15_float, var_16_float); // 0x152 Call
	var_15_float = var_16_float; // 0x153 Mov
	var_32_float = 0.001; // 0x155 PushF
	var_33_bool = var_15_float < var_32_float; // 0x156 LT
	if(var_33_bool == 0) goto Label_345; // 0x157 JumpB
	var_15_float = 0; // 0x158 MovI
	
Label_345:
	var_34_string = "Do "; // 0x159 PushS
	var_35_int = var_34_string + var_15_float; // 0x15a Add
	Trace(var_35_int); // 0x15b Func
	var_36_string = "agony"; // 0x15d PushS
	SetProperty(var_36_string, var_15_float); // 0x15e TObjFunc
	func_305(); // 0x161 Call
	DestroyWindow(); // 0x163 Func
	return 2; // 0x165 Return
}


func_305()
{
	var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_object = Obj(); var_41_int = 0; var_42_int = 0; var_43_int = 0; var_44_int = 0; var_45_object = Obj(); var_46_int = 0; // 0x131 PushV
	size(var_42_int); // 0x132 TObjFunc
	var_43_int = 0; // 0x134 MovI
	
Label_309:
	var_47_bool = var_43_int < var_42_int; // 0x135 LT
	if(var_47_bool == 0) goto Label_335; // 0x136 JumpB
	get(var_44_int, var_43_int); // 0x137 TObjFunc
	var_48_int = var_44_int; // 0x139 Push
	if(var_48_int == 0) goto Label_332; // 0x13a JumpB
	get(var_45_object, var_43_int); // 0x13b TObjFunc
	var_46_int = 0; // 0x13d MovI
	
Label_318:
	var_49_bool = var_46_int < var_44_int; // 0x13e LT
	if(var_49_bool == 0) goto Label_331; // 0x13f JumpB
	var_50_int = 0; // 0x140 PushV
	var_51_int = 0; var_52_object = Obj(); // 0x141 PushV
	var_52_object = var_45_object; // 0x142 Mov
	func_446(var_52_object); // 0x143 Call
	var_50_int = var_51_int; // 0x144 Mov
	func_243(var_50_int); // 0x146 Call
	var_94_int = 1; // 0x148 PushI
	var_46_int = var_46_int + var_94_int; // 0x149 Add2
	goto Label_318; // 0x14a Jump
	
Label_331:
	var_45_object = 0; // 0x14b SetNull
	
Label_332:
	var_95_int = 1; // 0x14c PushI
	var_43_int = var_43_int + var_95_int; // 0x14d Add2
	goto Label_309; // 0x14e Jump
	
Label_335:
	return 10; // 0x14f Return
}


func_243(var_50_int)
{
	var_55_int = 0; var_56_int = 0; var_57_float = 0; var_58_int = 0; var_59_object = Obj(); var_60_int = 0; var_61_bool = 0; var_62_float = 0; var_63_int = 0; var_64_int = 0; var_65_float = 0; var_66_int = 0; var_67_object = Obj(); var_68_int = 0; var_69_bool = 0; var_70_float = 0; // 0xf3 PushV
	var_71_int = 2; // 0xf4 PushI
	GetItemCount(var_63_int, var_71_int); // 0xf5 TObjFunc
	var_64_int = -1; // 0xf7 MovI
	var_66_int = 0; // 0xf8 MovI
	
Label_249:
	var_72_bool = var_66_int < var_63_int; // 0xf9 LT
	if(var_72_bool == 0) goto Label_297; // 0xfa JumpB
	var_73_int = 2; // 0xfb PushI
	GetItem(var_67_object, var_66_int, var_73_int); // 0xfc TObjFunc
	var_74_int = 0; var_75_object = Obj(); // 0xfe PushV
	var_75_object = var_67_object; // 0xff Mov
	func_446(var_75_object); // 0x100 Call
	var_68_int = var_74_int; // 0x101 Mov
	var_76_bool = var_68_int == var_50_int; // 0x103 Eq
	if(var_76_bool == 0) goto Label_293; // 0x104 JumpB
	var_77_string = "disease"; // 0x105 PushS
	HasProperty(var_69_bool, var_77_string); // 0x106 ObjFunc
	var_78_bool = var_69_bool == 0; // 0x108 Not
	if(var_78_bool == 0) goto Label_279; // 0x109 JumpB
	var_79_bool = 0; // 0x10a PushV
	var_79_bool = 1; // 0x10b MovB
	var_80_int = -1; // 0x10c PushI
	var_81_bool = var_64_int == var_80_int; // 0x10d Eq
	if(var_81_bool == 0) goto Label_275; // 0x10e JumpB
	var_82_int = 0; // 0x10f PushI
	var_83_bool = var_65_float > var_82_int; // 0x110 GT
	if(var_83_bool == 0) goto Label_275; // 0x111 JumpB
	var_79_bool = 0; // 0x112 MovB
	
Label_275:
	if(var_79_bool == 0) goto Label_278; // 0x113 JumpB
	var_64_int = var_66_int; // 0x114 Mov
	var_65_float = 0; // 0x115 MovI
	
Label_278:
	goto Label_293; // 0x116 Jump
	
Label_293:
	var_67_object = 0; // 0x125 SetNull
	var_84_int = 1; // 0x126 PushI
	var_66_int = var_66_int + var_84_int; // 0x127 Add2
	goto Label_249; // 0x128 Jump
	
Label_279:
	var_85_string = "disease"; // 0x117 PushS
	GetProperty(var_70_float, var_85_string); // 0x118 ObjFunc
	var_86_bool = 0; // 0x11a PushV
	var_86_bool = 1; // 0x11b MovB
	var_87_int = -1; // 0x11c PushI
	var_88_bool = var_64_int == var_87_int; // 0x11d Eq
	if(var_88_bool == 0) goto Label_290; // 0x11e JumpB
	var_89_bool = var_70_float < var_65_float; // 0x11f LT
	if(var_89_bool == 0) goto Label_290; // 0x120 JumpB
	var_86_bool = 0; // 0x121 MovB
	
Label_290:
	if(var_86_bool == 0) goto Label_293; // 0x122 JumpB
	var_64_int = var_66_int; // 0x123 Mov
	var_65_float = var_70_float; // 0x124 Mov
	
Label_297:
	var_90_int = -1; // 0x129 PushI
	var_91_bool = var_64_int != var_90_int; // 0x12a Neq
	if(var_91_bool == 0) goto Label_304; // 0x12b JumpB
	var_92_int = 1; // 0x12c PushI
	var_93_int = 2; // 0x12d PushI
	RemoveItem(var_64_int, var_92_int, var_93_int); // 0x12e TObjFunc
	
Label_304:
	return 16; // 0x130 Return
}


func_404(var_176_int)
{
	var_177_int = 0; var_178_object = Obj(); var_179_int = 0; var_180_int = 0; var_181_object = Obj(); var_182_int = 0; // 0x194 PushV
	size(var_180_int); // 0x195 TObjFunc
	var_183_bool = var_176_int >= var_180_int; // 0x197 GE
	if(var_183_bool == 0) goto Label_410; // 0x198 JumpB
	return 6; // 0x199 Return
	
Label_410:
	get(var_181_object, var_176_int); // 0x19a TObjFunc
	get(var_182_int, var_176_int); // 0x19c TObjFunc
	var_184_int = 0; // 0x19e PushI
	var_185_bool = var_182_int == var_184_int; // 0x19f Eq
	if(var_185_bool == 0) goto Label_418; // 0x1a0 JumpB
	return 6; // 0x1a1 Return
	
Label_418:
	var_186_int = 1; // 0x1a2 PushI
	var_182_int = var_182_int - var_186_int; // 0x1a3 Sub2
	set(var_176_int, var_182_int); // 0x1a4 TObjFunc
	func_150(); // 0x1a7 Call
	func_141(); // 0x1aa Call
	return 6; // 0x1ac Return
}


func_150()
{
	var_52_int = 0; var_53_int = 0; var_54_object = Obj(); var_55_int = 0; var_56_int = 0; var_57_int = 0; var_58_int = 0; var_59_object = Obj(); var_60_int = 0; var_61_int = 0; // 0x96 PushV
	size(var_57_int); // 0x97 TObjFunc
	var_58_int = 0; // 0x99 MovI
	
Label_154:
	var_62_int = 6; // 0x9a PushI
	var_63_bool = var_58_int < var_62_int; // 0x9b LT
	if(var_63_bool == 0) goto Label_202; // 0x9c JumpB
	var_64_bool = var_58_int < var_57_int; // 0x9d LT
	if(var_64_bool == 0) goto Label_192; // 0x9e JumpB
	get(var_59_object, var_58_int); // 0x9f TObjFunc
	get(var_60_int, var_58_int); // 0xa1 TObjFunc
	get(var_61_int, var_58_int); // 0xa3 TObjFunc
	var_65_int = var_60_int; // 0xa5 Push
	if(var_65_int == 0) goto Label_175; // 0xa6 JumpB
	var_66_int = 16384; // 0xa7 PushI
	var_67_string = ""; var_68_int = 0; // 0xa8 PushV
	var_68_int = var_58_int; // 0xa9 Mov
	func_430(var_67_string, var_68_int); // 0xaa Call
	SendMessage(var_66_int, var_67_string, var_59_object); // 0xac Func
	goto Label_182; // 0xae Jump
	
Label_182:
	var_79_int = 65536; // 0xb6 PushI
	var_80_int = var_60_int | var_79_int; // 0xb7 Or
	var_81_string = ""; var_82_int = 0; // 0xb8 PushV
	var_82_int = var_58_int; // 0xb9 Mov
	func_430(var_81_string, var_82_int); // 0xba Call
	SendMessage(var_80_int, var_81_string); // 0xbc Func
	var_59_object = 0; // 0xbe SetNull
	goto Label_199; // 0xbf Jump
	
Label_199:
	var_83_int = 1; // 0xc7 PushI
	var_58_int = var_58_int + var_83_int; // 0xc8 Add2
	goto Label_154; // 0xc9 Jump
	
Label_175:
	var_84_int = 0; // 0xaf PushI
	var_85_string = ""; var_86_int = 0; // 0xb0 PushV
	var_86_int = var_58_int; // 0xb1 Mov
	func_430(var_85_string, var_86_int); // 0xb2 Call
	SendMessage(var_84_int, var_85_string, var_59_object); // 0xb4 Func
	
Label_192:
	var_87_int = 32768; // 0xc0 PushI
	var_88_string = ""; var_89_int = 0; // 0xc1 PushV
	var_89_int = var_58_int; // 0xc2 Mov
	func_430(var_88_string, var_89_int); // 0xc3 Call
	SendMessage(var_87_int, var_88_string); // 0xc5 Func
	
Label_202:
	return 10; // 0xca Return
}


func_54(var_0_object, var_2_object)
{
	var_11_int = 0; var_12_int = 0; var_13_object = Obj(); var_14_int = 0; var_15_bool = 0; var_16_float = 0; var_17_int = 0; var_18_int = 0; var_19_int = 0; var_20_object = Obj(); var_21_int = 0; var_22_bool = 0; var_23_float = 0; var_24_int = 0; // 0x36 PushV
	CreateObjectVector(var_0_object); // 0x37 Func
	CreateFloatVector(var_24_int); // 0x39 Func
	CreateIntVector(var_22_bool); // 0x3b Func
	CreateIntVector(var_21_int); // 0x3d Func
	var_25_string = "player"; // 0x3f PushS
	FindActor(var_24_int, var_25_string); // 0x40 Func
	var_26_bool = var_2_object == 0; // 0x42 Not
	if(var_26_bool == 0) goto Label_71; // 0x43 JumpB
	DestroyWindow(); // 0x44 Func
	return 14; // 0x46 Return
	
Label_71:
	var_27_int = 2; // 0x47 PushI
	GetItemCount(var_18_int, var_27_int); // 0x48 TObjFunc
	var_19_int = 0; // 0x4a MovI
	
Label_75:
	var_28_bool = var_19_int < var_18_int; // 0x4b LT
	if(var_28_bool == 0) goto Label_115; // 0x4c JumpB
	var_29_int = 2; // 0x4d PushI
	GetItem(var_20_object, var_19_int, var_29_int); // 0x4e TObjFunc
	var_30_int = 0; var_31_object = Obj(); // 0x50 PushV
	var_31_object = var_20_object; // 0x51 Mov
	func_446(var_31_object); // 0x52 Call
	var_21_int = var_30_int; // 0x53 Mov
	var_34_string = "Agony"; // 0x55 PushS
	HasInvItemProperty(var_22_bool, var_21_int, var_34_string); // 0x56 Func
	var_35_bool = var_22_bool == 0; // 0x58 Not
	if(var_35_bool == 0) goto Label_91; // 0x59 JumpB
	goto Label_112; // 0x5a Jump
	
Label_112:
	var_36_int = 1; // 0x70 PushI
	var_19_int = var_19_int + var_36_int; // 0x71 Add2
	goto Label_75; // 0x72 Jump
	
Label_91:
	var_37_bool = 0; var_38_int = 0; // 0x5b PushV
	var_38_int = var_21_int; // 0x5c Mov
	func_32(var_37_bool, var_38_int); // 0x5d Call
	if(var_37_bool == 0) goto Label_97; // 0x5f JumpB
	goto Label_112; // 0x60 Jump
	
Label_97:
	var_50_string = "Agony"; // 0x61 PushS
	GetInvItemProperty(var_23_float, var_21_int, var_50_string); // 0x62 Func
	GetItemCountOfType(var_24_int, var_21_int); // 0x64 TObjFunc
	add(var_20_object); // 0x66 TObjFunc
	add(var_23_float); // 0x68 TObjFunc
	add(var_24_int); // 0x6a TObjFunc
	var_51_int = 0; // 0x6c PushI
	add(var_51_int); // 0x6d TObjFunc
	var_20_object = 0; // 0x6f SetNull
	
Label_115:
	return 14; // 0x73 Return
}


func_120(var_6_float, var_91_float)
{
	var_92_float = 0; var_93_int = 0; var_94_int = 0; var_95_object = Obj(); var_96_float = 0; var_97_int = 0; var_98_float = 0; var_99_int = 0; var_100_int = 0; var_101_object = Obj(); var_102_float = 0; var_103_int = 0; // 0x78 PushV
	var_98_float = var_6_float; // 0x79 MovT
	size(var_99_int); // 0x7a TObjFunc
	var_100_int = 0; // 0x7c MovI
	
Label_125:
	var_104_bool = var_100_int < var_99_int; // 0x7d LT
	if(var_104_bool == 0) goto Label_139; // 0x7e JumpB
	get(var_101_object, var_100_int); // 0x7f TObjFunc
	get(var_102_float, var_100_int); // 0x81 TObjFunc
	get(var_103_int, var_100_int); // 0x83 TObjFunc
	var_105_float = var_103_int * var_102_float; // 0x85 Mult
	var_98_float = var_98_float - var_105_float; // 0x86 Sub2
	var_101_object = 0; // 0x87 SetNull
	var_106_int = 1; // 0x88 PushI
	var_100_int = var_100_int + var_106_int; // 0x89 Add2
	goto Label_125; // 0x8a Jump
	
Label_139:
	var_91_float = var_98_float; // 0x8b Mov
	return 12; // 0x8c Return
}


func_377(var_162_int)
{
	var_163_int = 0; var_164_object = Obj(); var_165_int = 0; var_166_int = 0; var_167_int = 0; var_168_object = Obj(); var_169_int = 0; var_170_int = 0; // 0x179 PushV
	size(var_167_int); // 0x17a TObjFunc
	var_171_bool = var_162_int >= var_167_int; // 0x17c GE
	if(var_171_bool == 0) goto Label_383; // 0x17d JumpB
	return 8; // 0x17e Return
	
Label_383:
	get(var_168_object, var_162_int); // 0x17f TObjFunc
	get(var_169_int, var_162_int); // 0x181 TObjFunc
	get(var_170_int, var_162_int); // 0x183 TObjFunc
	var_172_bool = var_169_int <= var_170_int; // 0x185 LE
	if(var_172_bool == 0) goto Label_392; // 0x186 JumpB
	return 8; // 0x187 Return
	
Label_392:
	var_173_int = 1; // 0x188 PushI
	var_170_int = var_170_int + var_173_int; // 0x189 Add2
	set(var_162_int, var_170_int); // 0x18a TObjFunc
	func_150(); // 0x18d Call
	func_141(); // 0x190 Call
	return 8; // 0x192 Return
}


func_446(var_30_int)
{
	var_32_int = 0; var_33_int = 0; // 0x1be PushV
	GetItemID(var_33_int); // 0x1bf ObjFunc
	var_30_int = var_33_int; // 0x1c1 Mov
	return 2; // 0x1c2 Return
}


