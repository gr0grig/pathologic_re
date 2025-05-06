task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	var_8_int = 1; // 0xac PushI
	if(var_8_int == 0) goto Label_299; // 0xad JumpB
	func_629(); // 0xaf NEW_2
	var_10_int = 35646; // 0xb1 PushI
	var_11_bool = var_7_bool == var_10_int; // 0xb2 Eq
	if(var_11_bool == 0) goto Label_185; // 0xb3 JumpB
	var_12_object = Obj(); var_13_object = Obj(); // 0xb4 PushV
	var_12_object = var_1_object; // 0xb5 MovT
	var_13_object = var_0_object; // 0xb6 MovT
	func_666(); // 0xb7 NEW_2
	
Label_185:
	var_16_int = 11248; // 0xb9 PushI
	var_17_bool = var_6_int == var_16_int; // 0xba Eq
	if(var_17_bool == 0) goto Label_218; // 0xbb JumpB
	var_18_string = ""; // 0xbc PushV
	var_18_string = "Saveyouall"; // 0xbd MovS
	func_149(var_7_bool, var_18_string); // 0xbe NEW_2
	var_35_int = 510202; // 0xc0 PushI
	SetMessage(var_35_int); // 0xc1 TObjFunc
	ClearReplies(); // 0xc3 TObjFunc
	var_36_bool = 0; var_37_object = Obj(); // 0xc5 PushV
	var_37_object = var_1_object; // 0xc6 MovT
	func_672(var_37_object); // 0xc7 NEW_2
	if(var_36_bool == 0) goto Label_207; // 0xc9 JumpB
	var_44_int = 534060; // 0xca PushI
	var_45_int = 11250; // 0xcb PushI
	var_46_int = 35646; // 0xcc PushI
	AddReply(var_44_int, var_45_int, var_46_int); // 0xcd TObjFunc
	
Label_207:
	var_47_int = 510203; // 0xcf PushI
	var_48_int = -1; // 0xd0 PushI
	var_49_int = 11249; // 0xd1 PushI
	AddReply(var_47_int, var_48_int, var_49_int); // 0xd2 TObjFunc
	var_50_int = 536145; // 0xd4 PushI
	var_51_int = -1; // 0xd5 PushI
	var_52_int = 37905; // 0xd6 PushI
	AddReply(var_50_int, var_51_int, var_52_int); // 0xd7 TObjFunc
	return 0; // 0xd9 Return
	
Label_218:
	var_53_int = 11250; // 0xda PushI
	var_54_bool = var_6_int == var_53_int; // 0xdb Eq
	if(var_54_bool == 0) goto Label_241; // 0xdc JumpB
	var_55_string = ""; // 0xdd PushV
	var_55_string = "Saveyouall"; // 0xde MovS
	func_149(var_7_bool, var_55_string); // 0xdf NEW_2
	var_56_int = 510204; // 0xe1 PushI
	SetMessage(var_56_int); // 0xe2 TObjFunc
	ClearReplies(); // 0xe4 TObjFunc
	var_57_int = 534061; // 0xe6 PushI
	var_58_int = 35649; // 0xe7 PushI
	var_59_int = 35648; // 0xe8 PushI
	AddReply(var_57_int, var_58_int, var_59_int); // 0xe9 TObjFunc
	var_60_int = 534063; // 0xeb PushI
	var_61_int = 35649; // 0xec PushI
	var_62_int = 35650; // 0xed PushI
	AddReply(var_60_int, var_61_int, var_62_int); // 0xee TObjFunc
	return 0; // 0xf0 Return
	
Label_241:
	var_63_int = 35649; // 0xf1 PushI
	var_64_bool = var_6_int == var_63_int; // 0xf2 Eq
	if(var_64_bool == 0) goto Label_264; // 0xf3 JumpB
	var_65_string = ""; // 0xf4 PushV
	var_65_string = "Saveyouall"; // 0xf5 MovS
	func_149(var_7_bool, var_65_string); // 0xf6 NEW_2
	var_66_int = 534062; // 0xf8 PushI
	SetMessage(var_66_int); // 0xf9 TObjFunc
	ClearReplies(); // 0xfb TObjFunc
	var_67_int = 510205; // 0xfd PushI
	var_68_int = 11252; // 0xfe PushI
	var_69_int = 11251; // 0xff PushI
	AddReply(var_67_int, var_68_int, var_69_int); // 0x100 TObjFunc
	var_70_int = 534064; // 0x102 PushI
	var_71_int = -1; // 0x103 PushI
	var_72_int = 35652; // 0x104 PushI
	AddReply(var_70_int, var_71_int, var_72_int); // 0x105 TObjFunc
	return 0; // 0x107 Return
	
Label_264:
	var_73_int = 11252; // 0x108 PushI
	var_74_bool = var_6_int == var_73_int; // 0x109 Eq
	if(var_74_bool == 0) goto Label_287; // 0x10a JumpB
	var_75_string = ""; // 0x10b PushV
	var_75_string = "Saveyouall"; // 0x10c MovS
	func_149(var_7_bool, var_75_string); // 0x10d NEW_2
	var_76_int = 510206; // 0x10f PushI
	SetMessage(var_76_int); // 0x110 TObjFunc
	ClearReplies(); // 0x112 TObjFunc
	var_77_int = 510207; // 0x114 PushI
	var_78_int = -1; // 0x115 PushI
	var_79_int = 11253; // 0x116 PushI
	AddReply(var_77_int, var_78_int, var_79_int); // 0x117 TObjFunc
	var_80_int = 534065; // 0x119 PushI
	var_81_int = -1; // 0x11a PushI
	var_82_int = 35653; // 0x11b PushI
	AddReply(var_80_int, var_81_int, var_82_int); // 0x11c TObjFunc
	return 0; // 0x11e Return
	
Label_287:
	var_3_string = 1; // 0x11f TMovB
	var_83_bool = 0; // 0x120 PushV
	func_709(var_83_bool); // 0x121 NEW_2
	if(var_83_bool == 0) goto Label_295; // 0x123 JumpB
	lshStopAnimation(); // 0x124 Func
	goto Label_297; // 0x126 Jump
	
Label_297:
	return 0; // 0x129 Return
	
Label_295:
	StopAnimation(); // 0x127 Func
	
Label_299:
	return 0; // 0x12b Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	var_7_int = 0; var_8_object = Obj(); // 0x12d PushV
	var_8_object = var_6_object; // 0x12e Mov
	TaskCall(0); // 0x12f TaskCall
	func_0(var_9_object, var_7_int, var_8_object); // 0x130 NEW_2
	TaskReturn(); // 0x131 TaskReturn
	return 0; // 0x133 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string)
{
	var_7_bool = 0; var_8_bool = 0; // 0x138 PushV
	var_9_string = "cleanup"; // 0x139 PushS
	var_10_bool = var_6_string == var_9_string; // 0x13a Eq
	if(var_10_bool == 0) goto Label_335; // 0x13b JumpB
	var_0_object = 1; // 0x13c TMovB
	IsLoaded(var_8_bool); // 0x13d Func
	var_11_bool = 0; // 0x13f PushV
	var_11_bool = 0; // 0x140 MovB
	var_12_bool = var_8_bool == 0; // 0x141 Not
	if(var_12_bool == 0) goto Label_328; // 0x142 JumpB
	var_13_bool = 0; // 0x143 PushV
	func_356(var_13_bool); // 0x144 NEW_2
	if(var_13_bool == 0) goto Label_328; // 0x146 JumpB
	var_11_bool = 1; // 0x147 MovB
	
Label_328:
	if(var_11_bool == 0) goto Label_334; // 0x148 JumpB
	var_14_object = Obj(); // 0x149 PushV
	func_636(var_14_object); // 0x14a NEW_2
	RemoveActor(var_14_object); // 0x14c Func
	
Label_334:
	goto Label_339; // 0x14e Jump
	
Label_339:
	return 2; // 0x153 Return
	
Label_335:
	var_17_string = "restore"; // 0x14f PushS
	var_18_bool = var_6_string == var_17_string; // 0x150 Eq
	if(var_18_bool == 0) goto Label_339; // 0x151 JumpB
	var_0_object = 0; // 0x152 TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0; // 0x154 PushV
	var_6_bool = 0; // 0x155 MovB
	var_7_object = var_0_object; // 0x156 PushT
	if(var_7_object == 0) goto Label_349; // 0x157 JumpB
	var_8_bool = 0; // 0x158 PushV
	func_356(var_8_bool); // 0x159 NEW_2
	if(var_8_bool == 0) goto Label_349; // 0x15b JumpB
	var_6_bool = 1; // 0x15c MovB
	
Label_349:
	if(var_6_bool == 0) goto Label_355; // 0x15d JumpB
	var_9_object = Obj(); // 0x15e PushV
	func_636(var_9_object); // 0x15f NEW_2
	RemoveActor(var_9_object); // 0x161 Func
	
Label_355:
	return 0; // 0x163 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	
Label_308:
	Hold(); // 0x134 Func
	goto Label_308; // 0x136 Jump
}


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0; // 0x0 PushV
	var_0_object = var_8_object; // 0x1 TMov
	var_18_bool = 0; var_19_object = Obj(); var_20_float = 0; // 0x2 PushV
	var_19_object = var_8_object; // 0x3 Mov
	var_20_float = 70.0; // 0x4 MovF
	func_358(var_19_object, var_20_float); // 0x5 NEW_2
	var_65_bool = var_18_bool == 0; // 0x7 Not
	if(var_65_bool == 0) goto Label_11; // 0x8 JumpB
	var_7_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_14_object); // 0xb Func
	var_66_int = 0; // 0xd PushV
	func_703(var_66_int); // 0xe NEW_2
	SetNPCName(var_66_int); // 0x10 ObjFunc
	var_67_int = 0; // 0x12 PushV
	func_701(var_67_int); // 0x13 NEW_2
	SetNPCDescription(var_67_int); // 0x15 ObjFunc
	var_68_string = ""; // 0x17 PushV
	func_705(var_68_string); // 0x18 NEW_2
	SetPhoto(var_68_string); // 0x1a ObjFunc
	var_69_string = ""; // 0x1c PushV
	func_707(var_69_string); // 0x1d NEW_2
	SetPhoto2(var_69_string); // 0x1f ObjFunc
	var_70_int = 0; // 0x21 PushV
	func_684(var_70_int); // 0x22 NEW_2
	SetPlayerName(var_70_int); // 0x24 ObjFunc
	var_16_int = -1; // 0x26 MovI
	IsOverrideActive(var_15_bool); // 0x27 Func
	var_78_bool = var_15_bool; // 0x29 Push
	if(var_78_bool == 0) goto Label_45; // 0x2a JumpB
	var_7_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_14_object); // 0x2d Func
	var_79_bool = 0; var_80_object = Obj(); // 0x2f PushV
	var_81_object = Obj(); // 0x30 PushV
	func_636(var_81_object); // 0x31 NEW_2
	var_80_object = var_81_object; // 0x32 Mov
	func_445(var_79_bool, var_80_object); // 0x34 NEW_2
	var_174_object = Obj(); var_175_object = Obj(); // 0x36 PushV
	var_174_object = var_8_object; // 0x37 Mov
	var_175_object = var_14_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_176_object, var_177_object, var_178_string, var_179_bool, var_174_object, var_175_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_17_bool); // 0x3d ObjFunc
	
Label_63:
	var_234_bool = var_17_bool == 0; // 0x3f Not
	if(var_234_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_17_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_235_object = Obj(); // 0x46 PushV
	var_235_object = var_8_object; // 0x47 Mov
	func_427(); // 0x48 NEW_2
	StopDialog(var_14_object); // 0x4a Func
	GetReturnValue(var_16_int); // 0x4c ObjFunc
	var_7_int = var_16_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_705(var_68_string)
{
	var_68_string = "ui/NPC_Klara.png"; // 0x2c1 MovS
	return 0; // 0x2c2 Return
}


func_642(var_45_cvector, var_46_cvector)
{
	var_48_float = 0; var_49_float = 0; // 0x282 PushV
	var_50_int = var_46_cvector | var_46_cvector; // 0x283 Or
	var_49_float = sqrt(var_50_int); // 0x284 Sqrt2
	var_51_float = 0.0; // 0x285 PushF
	var_52_bool = var_49_float < var_51_float; // 0x286 LT
	if(var_52_bool == 0) goto Label_650; // 0x287 JumpB
	var_45_cvector = CVector(0.0, 0.0, 0.0); // 0x288 MovV
	return 2; // 0x289 Return
	
Label_650:
	var_45_cvector = var_46_cvector / var_46_cvector; // 0x28a Div2
	return 2; // 0x28b Return
}


func_707(var_69_string)
{
	var_69_string = "ui/NPC_Klara_b.png"; // 0x2c3 MovS
	return 0; // 0x2c4 Return
}


func_709(var_61_bool)
{
	var_61_bool = 1; // 0x2c5 MovB
	return 0; // 0x2c6 Return
}


func_583(var_218_string)
{
	var_219_bool = 0; var_220_float = 0; var_221_float = 0; var_222_bool = 0; var_223_float = 0; var_224_float = 0; // 0x247 PushV
	lshHasAnimation(var_222_bool, var_218_string); // 0x248 Func
	var_225_bool = var_222_bool; // 0x24a Push
	if(var_225_bool == 0) goto Label_594; // 0x24b JumpB
	lshGetAnimTimes(var_218_string, var_223_float, var_224_float); // 0x24c Func
	var_226_bool = 0; // 0x24e PushB
	lshPlayAnimation(var_223_float, var_224_float, var_226_bool); // 0x24f Func
	goto Label_598; // 0x251 Jump
	
Label_598:
	return 6; // 0x256 Return
	
Label_594:
	var_227_string = "Can't find lsh animation : "; // 0x252 PushS
	var_228_int = var_227_string + var_218_string; // 0x253 Add
	Trace(var_228_int); // 0x254 Func
}


func_652(var_201_int, var_202_string)
{
	var_203_int = 0; var_204_int = 0; // 0x28c PushV
	GetVariable(var_202_string, var_204_int); // 0x28d Func
	var_201_int = var_204_int; // 0x28f Mov
	return 2; // 0x290 Return
}


func_657(var_134_int)
{
	var_135_float = 0; var_136_float = 0; // 0x291 PushV
	GetGameTime(var_136_float); // 0x292 Func
	var_137_int = 1; // 0x294 PushI
	var_138_int = 0; // 0x295 PushV
	var_139_int = 24; // 0x296 PushI
	var_138_int = var_136_float / var_136_float; // 0x297 Div2
	var_134_int = var_137_int + var_138_int; // 0x298 Add2
	return 2; // 0x299 Return
}


func_703(var_66_int)
{
	var_66_int = 502865; // 0x2bf MovI
	return 0; // 0x2c0 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_174_object, var_175_object)
{
	var_0_object = var_175_object; // 0x52 TMov
	var_1_object = var_174_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_180_int = 1; // 0x55 PushI
	if(var_180_int == 0) goto Label_119; // 0x56 JumpB
	var_181_string = ""; // 0x57 PushV
	var_181_string = "Saveyouall"; // 0x58 MovS
	func_149(var_175_object, var_181_string); // 0x59 NEW_2
	var_198_int = 510202; // 0x5b PushI
	SetMessage(var_198_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_199_bool = 0; var_200_object = Obj(); // 0x60 PushV
	var_200_object = var_1_object; // 0x61 MovT
	func_672(var_200_object); // 0x62 NEW_2
	if(var_199_bool == 0) goto Label_106; // 0x64 JumpB
	var_207_int = 534060; // 0x65 PushI
	var_208_int = 11250; // 0x66 PushI
	var_209_int = 35646; // 0x67 PushI
	AddReply(var_207_int, var_208_int, var_209_int); // 0x68 TObjFunc
	
Label_106:
	var_210_int = 510203; // 0x6a PushI
	var_211_int = -1; // 0x6b PushI
	var_212_int = 11249; // 0x6c PushI
	AddReply(var_210_int, var_211_int, var_212_int); // 0x6d TObjFunc
	var_213_int = 536145; // 0x6f PushI
	var_214_int = -1; // 0x70 PushI
	var_215_int = 37905; // 0x71 PushI
	AddReply(var_213_int, var_214_int, var_215_int); // 0x72 TObjFunc
	goto Label_119; // 0x74 Jump
	
Label_119:
	var_216_bool = 0; // 0x77 PushV
	func_709(var_216_bool); // 0x78 NEW_2
	if(var_216_bool == 0) goto Label_134; // 0x7a JumpB
	
Label_123:
	lshWaitForAnimEnd(); // 0x7b Func
	var_217_string = var_3_string; // 0x7d PushT
	if(var_217_string == 0) goto Label_128; // 0x7e JumpB
	goto Label_133; // 0x7f Jump
	
Label_133:
	goto Label_148; // 0x85 Jump
	
Label_148:
	return 0; // 0x94 Return
	
Label_128:
	var_218_string = ""; // 0x80 PushV
	var_218_string = var_2_object; // 0x81 MovT
	func_583(var_218_string); // 0x82 NEW_2
	goto Label_123; // 0x84 Jump
	
Label_134:
	var_229_string = "all"; // 0x86 PushS
	var_230_string = "idle"; // 0x87 PushS
	PlayAnimation(var_229_string, var_230_string); // 0x88 Func
	
Label_138:
	WaitForAnimEnd(); // 0x8a Func
	var_231_string = var_3_string; // 0x8c PushT
	if(var_231_string == 0) goto Label_143; // 0x8d JumpB
	goto Label_148; // 0x8e Jump
	
Label_143:
	var_232_string = "all"; // 0x8f PushS
	var_233_string = "idle"; // 0x90 PushS
	PlayAnimation(var_232_string, var_233_string); // 0x91 Func
	goto Label_138; // 0x93 Jump
}


func_149(var_2_object, var_181_string)
{
	var_182_bool = 0; // 0x96 PushV
	func_709(var_182_bool); // 0x97 NEW_2
	var_183_bool = var_182_bool == 0; // 0x99 Not
	if(var_183_bool == 0) goto Label_156; // 0x9a JumpB
	return 0; // 0x9b Return
	
Label_156:
	var_184_bool = var_181_string == var_2_object; // 0x9c Eq
	if(var_184_bool == 0) goto Label_159; // 0x9d JumpB
	return 0; // 0x9e Return
	
Label_159:
	var_185_string = ""; var_186_bool = 0; // 0x9f PushV
	var_185_string = var_181_string; // 0xa0 Mov
	var_187_string = ""; // 0xa1 PushS
	var_188_bool = var_181_string == var_187_string; // 0xa2 Eq
	if(var_188_bool == 0) goto Label_166; // 0xa3 JumpB
	var_186_bool = 0; // 0xa4 MovB
	goto Label_167; // 0xa5 Jump
	
Label_167:
	func_599(var_185_string, var_186_bool); // 0xa7 NEW_2
	var_2_object = var_181_string; // 0xa9 TMov
	return 0; // 0xaa Return
	
Label_166:
	var_186_bool = 1; // 0xa6 MovB
}


func_599(var_185_string, var_186_bool)
{
	var_189_bool = 0; var_190_float = 0; var_191_float = 0; var_192_bool = 0; var_193_float = 0; var_194_float = 0; // 0x257 PushV
	lshHasAnimation(var_192_bool, var_185_string); // 0x258 Func
	var_195_bool = var_192_bool; // 0x25a Push
	if(var_195_bool == 0) goto Label_609; // 0x25b JumpB
	lshGetAnimTimes(var_185_string, var_193_float, var_194_float); // 0x25c Func
	lshPlayAnimation(var_193_float, var_194_float, var_186_bool); // 0x25e Func
	goto Label_613; // 0x260 Jump
	
Label_613:
	return 6; // 0x265 Return
	
Label_609:
	var_196_string = "Can't find lsh animation : "; // 0x261 PushS
	var_197_int = var_196_string + var_185_string; // 0x262 Add
	Trace(var_197_int); // 0x263 Func
}


func_666()
{
	var_14_string = "ood3Klara1"; // 0x29b PushS
	var_15_int = 1; // 0x29c PushI
	SetVariable(var_14_string, var_15_int); // 0x29d Func
	return 0; // 0x29f Return
}


func_540(var_121_bool)
{
	var_123_string = ""; var_124_int = 0; var_125_bool = 0; var_126_int = 0; var_127_string = ""; var_128_string = ""; var_129_int = 0; var_130_bool = 0; var_131_int = 0; var_132_string = ""; // 0x21c PushV
	var_133_string = "d"; // 0x21d PushS
	var_134_int = 0; // 0x21e PushV
	func_657(var_134_int); // 0x21f NEW_2
	var_140_int = var_133_string + var_134_int; // 0x221 Add
	var_141_string = "m"; // 0x222 PushS
	var_128_string = var_140_int + var_141_string; // 0x223 Add2
	var_129_int = 0; // 0x224 MovI
	
Label_549:
	var_142_int = 1; // 0x225 PushI
	if(var_142_int == 0) goto Label_562; // 0x226 JumpB
	var_143_int = 1; // 0x227 PushI
	var_144_int = var_129_int + var_143_int; // 0x228 Add
	var_145_int = var_128_string + var_144_int; // 0x229 Add
	HasProperty(var_145_int, var_130_bool); // 0x22a ObjFunc
	var_146_bool = var_130_bool == 0; // 0x22c Not
	if(var_146_bool == 0) goto Label_559; // 0x22d JumpB
	goto Label_562; // 0x22e Jump
	
Label_562:
	var_147_bool = var_129_int == 0; // 0x232 Not
	if(var_147_bool == 0) goto Label_566; // 0x233 JumpB
	var_121_bool = 0; // 0x234 MovB
	return 10; // 0x235 Return
	
Label_566:
	var_131_int = 0; // 0x236 MovI
	var_148_int = 1; // 0x237 PushI
	var_149_bool = var_129_int > var_148_int; // 0x238 GT
	if(var_149_bool == 0) goto Label_572; // 0x239 JumpB
	irand(var_131_int, var_129_int); // 0x23a Func
	
Label_572:
	var_150_int = 1; // 0x23c PushI
	var_151_int = var_131_int + var_150_int; // 0x23d Add
	var_152_int = var_128_string + var_151_int; // 0x23e Add
	GetProperty(var_152_int, var_132_string); // 0x23f ObjFunc
	var_153_bool = 0; var_154_string = ""; // 0x241 PushV
	var_154_string = var_132_string; // 0x242 Mov
	func_614(var_153_bool, var_154_string); // 0x243 NEW_2
	var_121_bool = var_153_bool; // 0x244 Mov
	return 10; // 0x246 Return
	
Label_559:
	var_155_int = 1; // 0x22f PushI
	var_129_int = var_129_int + var_155_int; // 0x230 Add2
	goto Label_549; // 0x231 Jump
}


func_672(var_199_bool)
{
	var_201_int = 0; var_202_string = ""; // 0x2a1 PushV
	var_202_string = "ood3Klara1"; // 0x2a2 MovS
	func_652(var_201_int, var_202_string); // 0x2a3 NEW_2
	var_205_int = 0; // 0x2a5 PushI
	var_206_bool = var_201_int == var_205_int; // 0x2a6 Eq
	if(var_206_bool == 0) goto Label_682; // 0x2a7 JumpB
	var_199_bool = 1; // 0x2a8 MovB
	return 0; // 0x2a9 Return
	
Label_682:
	var_199_bool = 0; // 0x2aa MovB
	return 0; // 0x2ab Return
}


func_356(var_8_bool)
{
	var_8_bool = 1; // 0x164 MovB
	return 0; // 0x165 Return
}


func_358(var_18_bool, var_20_float)
{
	var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_bool = 0; var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; // 0x166 PushV
	GetPosition(var_31_cvector); // 0x167 ObjFunc
	GetEyesHeight(var_30_float); // 0x169 ObjFunc
	var_39_float = GetByIndex(var_31_cvector, 1); // 0x16b PushE
	var_39_float = var_39_float + var_30_float; // 0x16c Add2
	SetByIndex(var_31_cvector, 1) = var_39_float; // 0x16d PopE
	GetPosition(var_32_cvector); // 0x16e Func
	GetEyesHeight(var_30_float); // 0x170 Func
	var_40_float = GetByIndex(var_32_cvector, 1); // 0x172 PushE
	var_40_float = var_40_float + var_30_float; // 0x173 Add2
	SetByIndex(var_32_cvector, 1) = var_40_float; // 0x174 PopE
	var_33_cvector = var_31_cvector - var_32_cvector; // 0x175 Sub2
	var_41_float = GetByIndex(var_33_cvector, 1); // 0x176 PushE
	var_41_float = 0; // 0x177 MovI
	SetByIndex(var_33_cvector, 1) = var_41_float; // 0x178 PopE
	var_42_int = var_33_cvector | var_33_cvector; // 0x179 Or
	var_43_float = sqrt(var_42_int); // 0x17a Sqrt
	var_33_cvector = var_33_cvector / var_33_cvector; // 0x17b Div2
	var_34_cvector = -var_33_cvector; // 0x17c Neg2
	var_44_float = var_33_cvector * var_20_float; // 0x17d Mult
	var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); // 0x17e PushV
	var_47_cvector = CVector(0.0, 1.0, 0.0); // 0x17f PushVec
	var_46_cvector = var_34_cvector ^ var_47_cvector; // 0x180 Xor2
	func_642(var_45_cvector, var_46_cvector); // 0x181 NEW_2
	var_53_int = 25; // 0x183 PushI
	var_54_float = var_45_cvector * var_53_int; // 0x184 Mult
	var_55_int = var_44_float + var_54_float; // 0x185 Add
	var_56_cvector = CVector(0.0, 10.0, 0.0); // 0x186 PushVec
	var_35_cvector = var_55_int - var_56_cvector; // 0x187 Sub2
	var_36_cvector = var_32_cvector + var_35_cvector; // 0x188 Add2
	IsOverrideActive(var_37_bool); // 0x189 Func
	var_57_bool = var_37_bool; // 0x18b Push
	if(var_57_bool == 0) goto Label_399; // 0x18c JumpB
	var_18_bool = 0; // 0x18d MovB
	return 18; // 0x18e Return
	
Label_399:
	StopWorld(); // 0x18f Func
	var_58_bool = 1; // 0x191 PushB
	CameraTransit(var_36_cvector, var_34_cvector, var_58_bool); // 0x192 Func
	var_59_float = GetByIndex(var_35_cvector, 0); // 0x194 PushE
	var_60_float = GetByIndex(var_35_cvector, 2); // 0x195 PushE
	Rotate(var_59_float, var_60_float); // 0x196 Func
	var_61_bool = 0; // 0x198 PushV
	func_709(var_61_bool); // 0x199 NEW_2
	if(var_61_bool == 0) goto Label_413; // 0x19b JumpB
	goto Label_421; // 0x19c Jump
	
Label_421:
	CameraWaitForPlayFinish(); // 0x1a5 Func
	ResumeWorld(); // 0x1a7 Func
	var_18_bool = 1; // 0x1a9 MovB
	return 18; // 0x1aa Return
	
Label_413:
	var_62_string = "head"; // 0x19d PushS
	HasAnimationTrack(var_38_bool, var_62_string); // 0x19e Func
	var_63_bool = var_38_bool; // 0x1a0 Push
	if(var_63_bool == 0) goto Label_421; // 0x1a1 JumpB
	var_64_string = "head"; // 0x1a2 PushS
	LookAsyncCamera(var_64_string); // 0x1a3 Func
}


func_614(var_113_bool, var_114_string)
{
	var_115_bool = 0; var_116_bool = 0; // 0x266 PushV
	var_117_bool = 0; // 0x267 PushV
	func_709(var_117_bool); // 0x268 NEW_2
	if(var_117_bool == 0) goto Label_627; // 0x26a JumpB
	lshHasSpeech(var_116_bool, var_114_string); // 0x26b Func
	var_118_bool = var_116_bool; // 0x26d Push
	if(var_118_bool == 0) goto Label_627; // 0x26e JumpB
	lshPlaySpeech(var_114_string); // 0x26f Func
	var_113_bool = 1; // 0x271 MovB
	return 2; // 0x272 Return
	
Label_627:
	var_113_bool = 0; // 0x273 MovB
	return 2; // 0x274 Return
}


func_427()
{
	var_236_bool = 0; var_237_bool = 0; // 0x1ab PushV
	var_238_bool = 1; // 0x1ac PushB
	CameraSwitchToNormal(var_238_bool); // 0x1ad Func
	var_239_bool = 0; // 0x1af PushV
	func_709(var_239_bool); // 0x1b0 NEW_2
	if(var_239_bool == 0) goto Label_436; // 0x1b2 JumpB
	goto Label_444; // 0x1b3 Jump
	
Label_444:
	return 2; // 0x1bc Return
	
Label_436:
	var_240_string = "head"; // 0x1b4 PushS
	HasAnimationTrack(var_237_bool, var_240_string); // 0x1b5 Func
	var_241_bool = var_237_bool; // 0x1b7 Push
	if(var_241_bool == 0) goto Label_444; // 0x1b8 JumpB
	var_242_string = "head"; // 0x1b9 PushS
	UnlookAsync(var_242_string); // 0x1ba Func
}


func_684(var_70_int)
{
	var_71_int = 0; var_72_int = 0; // 0x2ac PushV
	var_73_string = "branch"; // 0x2ad PushS
	GetVariable(var_73_string, var_72_int); // 0x2ae Func
	var_74_int = 0; // 0x2b0 PushI
	var_75_bool = var_72_int == var_74_int; // 0x2b1 Eq
	if(var_75_bool == 0) goto Label_694; // 0x2b2 JumpB
	var_70_int = 1; // 0x2b3 MovI
	return 2; // 0x2b4 Return
	
Label_694:
	var_76_int = 1; // 0x2b6 PushI
	var_77_bool = var_72_int == var_76_int; // 0x2b7 Eq
	if(var_77_bool == 0) goto Label_699; // 0x2b8 JumpB
	var_70_int = 2; // 0x2b9 MovI
	return 2; // 0x2ba Return
	
Label_699:
	var_70_int = 3; // 0x2bb MovI
	return 2; // 0x2bc Return
}


func_629()
{
	var_9_bool = 0; // 0x275 PushV
	func_709(var_9_bool); // 0x276 NEW_2
	if(var_9_bool == 0) goto Label_635; // 0x278 JumpB
	lshStopSpeech(); // 0x279 Func
	
Label_635:
	return 0; // 0x27b Return
}


func_503(var_90_bool)
{
	var_92_string = ""; var_93_int = 0; var_94_bool = 0; var_95_int = 0; var_96_string = ""; var_97_string = ""; var_98_int = 0; var_99_bool = 0; var_100_int = 0; var_101_string = ""; // 0x1f7 PushV
	var_97_string = "c"; // 0x1f8 MovS
	var_98_int = 0; // 0x1f9 MovI
	
Label_506:
	var_102_int = 1; // 0x1fa PushI
	if(var_102_int == 0) goto Label_519; // 0x1fb JumpB
	var_103_int = 1; // 0x1fc PushI
	var_104_int = var_98_int + var_103_int; // 0x1fd Add
	var_105_int = var_97_string + var_104_int; // 0x1fe Add
	HasProperty(var_105_int, var_99_bool); // 0x1ff ObjFunc
	var_106_bool = var_99_bool == 0; // 0x201 Not
	if(var_106_bool == 0) goto Label_516; // 0x202 JumpB
	goto Label_519; // 0x203 Jump
	
Label_519:
	var_107_bool = var_98_int == 0; // 0x207 Not
	if(var_107_bool == 0) goto Label_523; // 0x208 JumpB
	var_90_bool = 0; // 0x209 MovB
	return 10; // 0x20a Return
	
Label_523:
	var_100_int = 0; // 0x20b MovI
	var_108_int = 1; // 0x20c PushI
	var_109_bool = var_98_int > var_108_int; // 0x20d GT
	if(var_109_bool == 0) goto Label_529; // 0x20e JumpB
	irand(var_100_int, var_98_int); // 0x20f Func
	
Label_529:
	var_110_int = 1; // 0x211 PushI
	var_111_int = var_100_int + var_110_int; // 0x212 Add
	var_112_int = var_97_string + var_111_int; // 0x213 Add
	GetProperty(var_112_int, var_101_string); // 0x214 ObjFunc
	var_113_bool = 0; var_114_string = ""; // 0x216 PushV
	var_114_string = var_101_string; // 0x217 Mov
	func_614(var_113_bool, var_114_string); // 0x218 NEW_2
	var_90_bool = var_113_bool; // 0x219 Mov
	return 10; // 0x21b Return
	
Label_516:
	var_119_int = 1; // 0x204 PushI
	var_98_int = var_98_int + var_119_int; // 0x205 Add2
	goto Label_506; // 0x206 Jump
}


func_636(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x27c PushV
	self(var_11_object); // 0x27d Func
	var_9_object = var_11_object; // 0x27f Mov
	return 2; // 0x280 Return
}


func_701(var_67_int)
{
	var_67_int = 515540; // 0x2bd MovI
	return 0; // 0x2be Return
}


func_445(var_79_bool, var_80_object)
{
	var_84_int = 0; var_85_int = 0; var_86_int = 0; var_87_int = 0; // 0x1bd PushV
	var_88_string = "voice_common"; // 0x1be PushS
	GetVariable(var_88_string, var_86_int); // 0x1bf Func
	var_89_int = var_86_int; // 0x1c1 Push
	if(var_89_int == 0) goto Label_483; // 0x1c2 JumpB
	var_90_bool = 0; var_91_object = Obj(); // 0x1c3 PushV
	var_91_object = var_80_object; // 0x1c4 Mov
	func_503(var_91_object); // 0x1c5 NEW_2
	var_120_bool = var_90_bool == 0; // 0x1c7 Not
	if(var_120_bool == 0) goto Label_465; // 0x1c8 JumpB
	var_121_bool = 0; var_122_object = Obj(); // 0x1c9 PushV
	var_122_object = var_80_object; // 0x1ca Mov
	func_540(var_122_object); // 0x1cb NEW_2
	var_156_bool = var_121_bool == 0; // 0x1cd Not
	if(var_156_bool == 0) goto Label_465; // 0x1ce JumpB
	var_79_bool = 0; // 0x1cf MovB
	return 4; // 0x1d0 Return
	
Label_465:
	var_157_int = 2; // 0x1d1 PushI
	irand(var_87_int, var_157_int); // 0x1d2 Func
	var_158_int = var_87_int; // 0x1d4 Push
	if(var_158_int == 0) goto Label_478; // 0x1d5 JumpB
	var_159_string = "voice_common"; // 0x1d6 PushS
	var_160_int = 1; // 0x1d7 PushI
	var_161_int = var_86_int + var_160_int; // 0x1d8 Add
	var_162_int = 3; // 0x1d9 PushI
	var_163_int = var_161_int / var_162_int; // 0x1da Mod
	SetVariable(var_159_string, var_163_int); // 0x1db Func
	goto Label_482; // 0x1dd Jump
	
Label_482:
	goto Label_501; // 0x1e2 Jump
	
Label_501:
	var_79_bool = 1; // 0x1f5 MovB
	return 4; // 0x1f6 Return
	
Label_478:
	var_164_string = "voice_common"; // 0x1de PushS
	var_165_int = 0; // 0x1df PushI
	SetVariable(var_164_string, var_165_int); // 0x1e0 Func
	
Label_483:
	var_166_bool = 0; var_167_object = Obj(); // 0x1e3 PushV
	var_167_object = var_80_object; // 0x1e4 Mov
	func_540(var_167_object); // 0x1e5 NEW_2
	var_168_bool = var_166_bool == 0; // 0x1e7 Not
	if(var_168_bool == 0) goto Label_497; // 0x1e8 JumpB
	var_169_bool = 0; var_170_object = Obj(); // 0x1e9 PushV
	var_170_object = var_80_object; // 0x1ea Mov
	func_503(var_170_object); // 0x1eb NEW_2
	var_171_bool = var_169_bool == 0; // 0x1ed Not
	if(var_171_bool == 0) goto Label_497; // 0x1ee JumpB
	var_79_bool = 0; // 0x1ef MovB
	return 4; // 0x1f0 Return
	
Label_497:
	var_172_string = "voice_common"; // 0x1f1 PushS
	var_173_int = 1; // 0x1f2 PushI
	SetVariable(var_172_string, var_173_int); // 0x1f3 Func
}


