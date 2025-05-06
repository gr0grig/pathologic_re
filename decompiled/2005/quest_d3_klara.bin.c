task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	var_8_int = 1; // 0xac PushI
	if(var_8_int == 0) goto Label_299; // 0xad JumpB
	func_627(); // 0xaf NEW_2
	var_10_int = 35646; // 0xb1 PushI
	var_11_bool = var_7_bool == var_10_int; // 0xb2 Eq
	if(var_11_bool == 0) goto Label_185; // 0xb3 JumpB
	var_12_object = Obj(); var_13_object = Obj(); // 0xb4 PushV
	var_12_object = var_1_object; // 0xb5 MovT
	var_13_object = var_0_object; // 0xb6 MovT
	func_664(); // 0xb7 NEW_2
	
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
	func_670(var_37_object); // 0xc7 NEW_2
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
	func_707(var_83_bool); // 0x121 NEW_2
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
	func_634(var_14_object); // 0x14a NEW_2
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
	func_634(var_9_object); // 0x15f NEW_2
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
	var_64_bool = var_18_bool == 0; // 0x7 Not
	if(var_64_bool == 0) goto Label_11; // 0x8 JumpB
	var_7_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_14_object); // 0xb Func
	var_65_int = 0; // 0xd PushV
	func_701(var_65_int); // 0xe NEW_2
	SetNPCName(var_65_int); // 0x10 ObjFunc
	var_66_int = 0; // 0x12 PushV
	func_699(var_66_int); // 0x13 NEW_2
	SetNPCDescription(var_66_int); // 0x15 ObjFunc
	var_67_string = ""; // 0x17 PushV
	func_703(var_67_string); // 0x18 NEW_2
	SetPhoto(var_67_string); // 0x1a ObjFunc
	var_68_string = ""; // 0x1c PushV
	func_705(var_68_string); // 0x1d NEW_2
	SetPhoto2(var_68_string); // 0x1f ObjFunc
	var_69_int = 0; // 0x21 PushV
	func_682(var_69_int); // 0x22 NEW_2
	SetPlayerName(var_69_int); // 0x24 ObjFunc
	var_16_int = -1; // 0x26 MovI
	IsOverrideActive(var_15_bool); // 0x27 Func
	var_77_bool = var_15_bool; // 0x29 Push
	if(var_77_bool == 0) goto Label_45; // 0x2a JumpB
	var_7_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_14_object); // 0x2d Func
	var_78_bool = 0; var_79_object = Obj(); // 0x2f PushV
	var_80_object = Obj(); // 0x30 PushV
	func_634(var_80_object); // 0x31 NEW_2
	var_79_object = var_80_object; // 0x32 Mov
	func_443(var_78_bool, var_79_object); // 0x34 NEW_2
	var_173_object = Obj(); var_174_object = Obj(); // 0x36 PushV
	var_173_object = var_8_object; // 0x37 Mov
	var_174_object = var_14_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_175_object, var_176_object, var_177_string, var_178_bool, var_173_object, var_174_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_17_bool); // 0x3d ObjFunc
	
Label_63:
	var_233_bool = var_17_bool == 0; // 0x3f Not
	if(var_233_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_17_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_234_object = Obj(); // 0x46 PushV
	var_234_object = var_8_object; // 0x47 Mov
	func_426(); // 0x48 NEW_2
	StopDialog(var_14_object); // 0x4a Func
	GetReturnValue(var_16_int); // 0x4c ObjFunc
	var_7_int = var_16_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_640(var_45_cvector, var_46_cvector)
{
	var_48_float = 0; var_49_float = 0; // 0x280 PushV
	var_50_int = var_46_cvector | var_46_cvector; // 0x281 Or
	var_49_float = sqrt(var_50_int); // 0x282 Sqrt2
	var_51_float = 0.0; // 0x283 PushF
	var_52_bool = var_49_float < var_51_float; // 0x284 LT
	if(var_52_bool == 0) goto Label_648; // 0x285 JumpB
	var_45_cvector = CVector(0.0, 0.0, 0.0); // 0x286 MovV
	return 2; // 0x287 Return
	
Label_648:
	var_45_cvector = var_46_cvector / var_46_cvector; // 0x288 Div2
	return 2; // 0x289 Return
}


func_705(var_68_string)
{
	var_68_string = "ui/NPC_Klara_b.png"; // 0x2c1 MovS
	return 0; // 0x2c2 Return
}


func_707(var_60_bool)
{
	var_60_bool = 1; // 0x2c3 MovB
	return 0; // 0x2c4 Return
}


func_581(var_217_string)
{
	var_218_bool = 0; var_219_float = 0; var_220_float = 0; var_221_bool = 0; var_222_float = 0; var_223_float = 0; // 0x245 PushV
	lshHasAnimation(var_221_bool, var_217_string); // 0x246 Func
	var_224_bool = var_221_bool; // 0x248 Push
	if(var_224_bool == 0) goto Label_592; // 0x249 JumpB
	lshGetAnimTimes(var_217_string, var_222_float, var_223_float); // 0x24a Func
	var_225_bool = 0; // 0x24c PushB
	lshPlayAnimation(var_222_float, var_223_float, var_225_bool); // 0x24d Func
	goto Label_596; // 0x24f Jump
	
Label_596:
	return 6; // 0x254 Return
	
Label_592:
	var_226_string = "Can't find lsh animation : "; // 0x250 PushS
	var_227_int = var_226_string + var_217_string; // 0x251 Add
	Trace(var_227_int); // 0x252 Func
}


func_701(var_65_int)
{
	var_65_int = 502865; // 0x2bd MovI
	return 0; // 0x2be Return
}


func_650(var_200_int, var_201_string)
{
	var_202_int = 0; var_203_int = 0; // 0x28a PushV
	GetVariable(var_201_string, var_203_int); // 0x28b Func
	var_200_int = var_203_int; // 0x28d Mov
	return 2; // 0x28e Return
}


func_655(var_133_int)
{
	var_134_float = 0; var_135_float = 0; // 0x28f PushV
	GetGameTime(var_135_float); // 0x290 Func
	var_136_int = 1; // 0x292 PushI
	var_137_int = 0; // 0x293 PushV
	var_138_int = 24; // 0x294 PushI
	var_137_int = var_135_float / var_135_float; // 0x295 Div2
	var_133_int = var_136_int + var_137_int; // 0x296 Add2
	return 2; // 0x297 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_173_object, var_174_object)
{
	var_0_object = var_174_object; // 0x52 TMov
	var_1_object = var_173_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_179_int = 1; // 0x55 PushI
	if(var_179_int == 0) goto Label_119; // 0x56 JumpB
	var_180_string = ""; // 0x57 PushV
	var_180_string = "Saveyouall"; // 0x58 MovS
	func_149(var_174_object, var_180_string); // 0x59 NEW_2
	var_197_int = 510202; // 0x5b PushI
	SetMessage(var_197_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_198_bool = 0; var_199_object = Obj(); // 0x60 PushV
	var_199_object = var_1_object; // 0x61 MovT
	func_670(var_199_object); // 0x62 NEW_2
	if(var_198_bool == 0) goto Label_106; // 0x64 JumpB
	var_206_int = 534060; // 0x65 PushI
	var_207_int = 11250; // 0x66 PushI
	var_208_int = 35646; // 0x67 PushI
	AddReply(var_206_int, var_207_int, var_208_int); // 0x68 TObjFunc
	
Label_106:
	var_209_int = 510203; // 0x6a PushI
	var_210_int = -1; // 0x6b PushI
	var_211_int = 11249; // 0x6c PushI
	AddReply(var_209_int, var_210_int, var_211_int); // 0x6d TObjFunc
	var_212_int = 536145; // 0x6f PushI
	var_213_int = -1; // 0x70 PushI
	var_214_int = 37905; // 0x71 PushI
	AddReply(var_212_int, var_213_int, var_214_int); // 0x72 TObjFunc
	goto Label_119; // 0x74 Jump
	
Label_119:
	var_215_bool = 0; // 0x77 PushV
	func_707(var_215_bool); // 0x78 NEW_2
	if(var_215_bool == 0) goto Label_134; // 0x7a JumpB
	
Label_123:
	lshWaitForAnimEnd(); // 0x7b Func
	var_216_string = var_3_string; // 0x7d PushT
	if(var_216_string == 0) goto Label_128; // 0x7e JumpB
	goto Label_133; // 0x7f Jump
	
Label_133:
	goto Label_148; // 0x85 Jump
	
Label_148:
	return 0; // 0x94 Return
	
Label_128:
	var_217_string = ""; // 0x80 PushV
	var_217_string = var_2_object; // 0x81 MovT
	func_581(var_217_string); // 0x82 NEW_2
	goto Label_123; // 0x84 Jump
	
Label_134:
	var_228_string = "all"; // 0x86 PushS
	var_229_string = "idle"; // 0x87 PushS
	PlayAnimation(var_228_string, var_229_string); // 0x88 Func
	
Label_138:
	WaitForAnimEnd(); // 0x8a Func
	var_230_string = var_3_string; // 0x8c PushT
	if(var_230_string == 0) goto Label_143; // 0x8d JumpB
	goto Label_148; // 0x8e Jump
	
Label_143:
	var_231_string = "all"; // 0x8f PushS
	var_232_string = "idle"; // 0x90 PushS
	PlayAnimation(var_231_string, var_232_string); // 0x91 Func
	goto Label_138; // 0x93 Jump
}


func_149(var_2_object, var_180_string)
{
	var_181_bool = 0; // 0x96 PushV
	func_707(var_181_bool); // 0x97 NEW_2
	var_182_bool = var_181_bool == 0; // 0x99 Not
	if(var_182_bool == 0) goto Label_156; // 0x9a JumpB
	return 0; // 0x9b Return
	
Label_156:
	var_183_bool = var_180_string == var_2_object; // 0x9c Eq
	if(var_183_bool == 0) goto Label_159; // 0x9d JumpB
	return 0; // 0x9e Return
	
Label_159:
	var_184_string = ""; var_185_bool = 0; // 0x9f PushV
	var_184_string = var_180_string; // 0xa0 Mov
	var_186_string = ""; // 0xa1 PushS
	var_187_bool = var_180_string == var_186_string; // 0xa2 Eq
	if(var_187_bool == 0) goto Label_166; // 0xa3 JumpB
	var_185_bool = 0; // 0xa4 MovB
	goto Label_167; // 0xa5 Jump
	
Label_167:
	func_597(var_184_string, var_185_bool); // 0xa7 NEW_2
	var_2_object = var_180_string; // 0xa9 TMov
	return 0; // 0xaa Return
	
Label_166:
	var_185_bool = 1; // 0xa6 MovB
}


func_597(var_184_string, var_185_bool)
{
	var_188_bool = 0; var_189_float = 0; var_190_float = 0; var_191_bool = 0; var_192_float = 0; var_193_float = 0; // 0x255 PushV
	lshHasAnimation(var_191_bool, var_184_string); // 0x256 Func
	var_194_bool = var_191_bool; // 0x258 Push
	if(var_194_bool == 0) goto Label_607; // 0x259 JumpB
	lshGetAnimTimes(var_184_string, var_192_float, var_193_float); // 0x25a Func
	lshPlayAnimation(var_192_float, var_193_float, var_185_bool); // 0x25c Func
	goto Label_611; // 0x25e Jump
	
Label_611:
	return 6; // 0x263 Return
	
Label_607:
	var_195_string = "Can't find lsh animation : "; // 0x25f PushS
	var_196_int = var_195_string + var_184_string; // 0x260 Add
	Trace(var_196_int); // 0x261 Func
}


func_664()
{
	var_14_string = "ood3Klara1"; // 0x299 PushS
	var_15_int = 1; // 0x29a PushI
	SetVariable(var_14_string, var_15_int); // 0x29b Func
	return 0; // 0x29d Return
}


func_538(var_120_bool)
{
	var_122_string = ""; var_123_int = 0; var_124_bool = 0; var_125_int = 0; var_126_string = ""; var_127_string = ""; var_128_int = 0; var_129_bool = 0; var_130_int = 0; var_131_string = ""; // 0x21a PushV
	var_132_string = "d"; // 0x21b PushS
	var_133_int = 0; // 0x21c PushV
	func_655(var_133_int); // 0x21d NEW_2
	var_139_int = var_132_string + var_133_int; // 0x21f Add
	var_140_string = "m"; // 0x220 PushS
	var_127_string = var_139_int + var_140_string; // 0x221 Add2
	var_128_int = 0; // 0x222 MovI
	
Label_547:
	var_141_int = 1; // 0x223 PushI
	if(var_141_int == 0) goto Label_560; // 0x224 JumpB
	var_142_int = 1; // 0x225 PushI
	var_143_int = var_128_int + var_142_int; // 0x226 Add
	var_144_int = var_127_string + var_143_int; // 0x227 Add
	HasProperty(var_144_int, var_129_bool); // 0x228 ObjFunc
	var_145_bool = var_129_bool == 0; // 0x22a Not
	if(var_145_bool == 0) goto Label_557; // 0x22b JumpB
	goto Label_560; // 0x22c Jump
	
Label_560:
	var_146_bool = var_128_int == 0; // 0x230 Not
	if(var_146_bool == 0) goto Label_564; // 0x231 JumpB
	var_120_bool = 0; // 0x232 MovB
	return 10; // 0x233 Return
	
Label_564:
	var_130_int = 0; // 0x234 MovI
	var_147_int = 1; // 0x235 PushI
	var_148_bool = var_128_int > var_147_int; // 0x236 GT
	if(var_148_bool == 0) goto Label_570; // 0x237 JumpB
	irand(var_130_int, var_128_int); // 0x238 Func
	
Label_570:
	var_149_int = 1; // 0x23a PushI
	var_150_int = var_130_int + var_149_int; // 0x23b Add
	var_151_int = var_127_string + var_150_int; // 0x23c Add
	GetProperty(var_151_int, var_131_string); // 0x23d ObjFunc
	var_152_bool = 0; var_153_string = ""; // 0x23f PushV
	var_153_string = var_131_string; // 0x240 Mov
	func_612(var_152_bool, var_153_string); // 0x241 NEW_2
	var_120_bool = var_152_bool; // 0x242 Mov
	return 10; // 0x244 Return
	
Label_557:
	var_154_int = 1; // 0x22d PushI
	var_128_int = var_128_int + var_154_int; // 0x22e Add2
	goto Label_547; // 0x22f Jump
}


func_670(var_198_bool)
{
	var_200_int = 0; var_201_string = ""; // 0x29f PushV
	var_201_string = "ood3Klara1"; // 0x2a0 MovS
	func_650(var_200_int, var_201_string); // 0x2a1 NEW_2
	var_204_int = 0; // 0x2a3 PushI
	var_205_bool = var_200_int == var_204_int; // 0x2a4 Eq
	if(var_205_bool == 0) goto Label_680; // 0x2a5 JumpB
	var_198_bool = 1; // 0x2a6 MovB
	return 0; // 0x2a7 Return
	
Label_680:
	var_198_bool = 0; // 0x2a8 MovB
	return 0; // 0x2a9 Return
}


func_356(var_8_bool)
{
	var_8_bool = 1; // 0x164 MovB
	return 0; // 0x165 Return
}


func_612(var_112_bool, var_113_string)
{
	var_114_bool = 0; var_115_bool = 0; // 0x264 PushV
	var_116_bool = 0; // 0x265 PushV
	func_707(var_116_bool); // 0x266 NEW_2
	if(var_116_bool == 0) goto Label_625; // 0x268 JumpB
	lshHasSpeech(var_115_bool, var_113_string); // 0x269 Func
	var_117_bool = var_115_bool; // 0x26b Push
	if(var_117_bool == 0) goto Label_625; // 0x26c JumpB
	lshPlaySpeech(var_113_string); // 0x26d Func
	var_112_bool = 1; // 0x26f MovB
	return 2; // 0x270 Return
	
Label_625:
	var_112_bool = 0; // 0x271 MovB
	return 2; // 0x272 Return
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
	func_640(var_45_cvector, var_46_cvector); // 0x181 NEW_2
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
	CameraTransit(var_36_cvector, var_34_cvector); // 0x191 Func
	var_58_float = GetByIndex(var_35_cvector, 0); // 0x193 PushE
	var_59_float = GetByIndex(var_35_cvector, 2); // 0x194 PushE
	Rotate(var_58_float, var_59_float); // 0x195 Func
	var_60_bool = 0; // 0x197 PushV
	func_707(var_60_bool); // 0x198 NEW_2
	if(var_60_bool == 0) goto Label_412; // 0x19a JumpB
	goto Label_420; // 0x19b Jump
	
Label_420:
	CameraWaitForPlayFinish(); // 0x1a4 Func
	ResumeWorld(); // 0x1a6 Func
	var_18_bool = 1; // 0x1a8 MovB
	return 18; // 0x1a9 Return
	
Label_412:
	var_61_string = "head"; // 0x19c PushS
	HasAnimationTrack(var_38_bool, var_61_string); // 0x19d Func
	var_62_bool = var_38_bool; // 0x19f Push
	if(var_62_bool == 0) goto Label_420; // 0x1a0 JumpB
	var_63_string = "head"; // 0x1a1 PushS
	LookAsyncCamera(var_63_string); // 0x1a2 Func
}


func_682(var_69_int)
{
	var_70_int = 0; var_71_int = 0; // 0x2aa PushV
	var_72_string = "branch"; // 0x2ab PushS
	GetVariable(var_72_string, var_71_int); // 0x2ac Func
	var_73_int = 0; // 0x2ae PushI
	var_74_bool = var_71_int == var_73_int; // 0x2af Eq
	if(var_74_bool == 0) goto Label_692; // 0x2b0 JumpB
	var_69_int = 1; // 0x2b1 MovI
	return 2; // 0x2b2 Return
	
Label_692:
	var_75_int = 1; // 0x2b4 PushI
	var_76_bool = var_71_int == var_75_int; // 0x2b5 Eq
	if(var_76_bool == 0) goto Label_697; // 0x2b6 JumpB
	var_69_int = 2; // 0x2b7 MovI
	return 2; // 0x2b8 Return
	
Label_697:
	var_69_int = 3; // 0x2b9 MovI
	return 2; // 0x2ba Return
}


func_426()
{
	var_235_bool = 0; var_236_bool = 0; // 0x1aa PushV
	CameraSwitchToNormal(); // 0x1ab Func
	var_237_bool = 0; // 0x1ad PushV
	func_707(var_237_bool); // 0x1ae NEW_2
	if(var_237_bool == 0) goto Label_434; // 0x1b0 JumpB
	goto Label_442; // 0x1b1 Jump
	
Label_442:
	return 2; // 0x1ba Return
	
Label_434:
	var_238_string = "head"; // 0x1b2 PushS
	HasAnimationTrack(var_236_bool, var_238_string); // 0x1b3 Func
	var_239_bool = var_236_bool; // 0x1b5 Push
	if(var_239_bool == 0) goto Label_442; // 0x1b6 JumpB
	var_240_string = "head"; // 0x1b7 PushS
	UnlookAsync(var_240_string); // 0x1b8 Func
}


func_627()
{
	var_9_bool = 0; // 0x273 PushV
	func_707(var_9_bool); // 0x274 NEW_2
	if(var_9_bool == 0) goto Label_633; // 0x276 JumpB
	lshStopSpeech(); // 0x277 Func
	
Label_633:
	return 0; // 0x279 Return
}


func_501(var_89_bool)
{
	var_91_string = ""; var_92_int = 0; var_93_bool = 0; var_94_int = 0; var_95_string = ""; var_96_string = ""; var_97_int = 0; var_98_bool = 0; var_99_int = 0; var_100_string = ""; // 0x1f5 PushV
	var_96_string = "c"; // 0x1f6 MovS
	var_97_int = 0; // 0x1f7 MovI
	
Label_504:
	var_101_int = 1; // 0x1f8 PushI
	if(var_101_int == 0) goto Label_517; // 0x1f9 JumpB
	var_102_int = 1; // 0x1fa PushI
	var_103_int = var_97_int + var_102_int; // 0x1fb Add
	var_104_int = var_96_string + var_103_int; // 0x1fc Add
	HasProperty(var_104_int, var_98_bool); // 0x1fd ObjFunc
	var_105_bool = var_98_bool == 0; // 0x1ff Not
	if(var_105_bool == 0) goto Label_514; // 0x200 JumpB
	goto Label_517; // 0x201 Jump
	
Label_517:
	var_106_bool = var_97_int == 0; // 0x205 Not
	if(var_106_bool == 0) goto Label_521; // 0x206 JumpB
	var_89_bool = 0; // 0x207 MovB
	return 10; // 0x208 Return
	
Label_521:
	var_99_int = 0; // 0x209 MovI
	var_107_int = 1; // 0x20a PushI
	var_108_bool = var_97_int > var_107_int; // 0x20b GT
	if(var_108_bool == 0) goto Label_527; // 0x20c JumpB
	irand(var_99_int, var_97_int); // 0x20d Func
	
Label_527:
	var_109_int = 1; // 0x20f PushI
	var_110_int = var_99_int + var_109_int; // 0x210 Add
	var_111_int = var_96_string + var_110_int; // 0x211 Add
	GetProperty(var_111_int, var_100_string); // 0x212 ObjFunc
	var_112_bool = 0; var_113_string = ""; // 0x214 PushV
	var_113_string = var_100_string; // 0x215 Mov
	func_612(var_112_bool, var_113_string); // 0x216 NEW_2
	var_89_bool = var_112_bool; // 0x217 Mov
	return 10; // 0x219 Return
	
Label_514:
	var_118_int = 1; // 0x202 PushI
	var_97_int = var_97_int + var_118_int; // 0x203 Add2
	goto Label_504; // 0x204 Jump
}


func_634(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x27a PushV
	self(var_11_object); // 0x27b Func
	var_9_object = var_11_object; // 0x27d Mov
	return 2; // 0x27e Return
}


func_443(var_78_bool, var_79_object)
{
	var_83_int = 0; var_84_int = 0; var_85_int = 0; var_86_int = 0; // 0x1bb PushV
	var_87_string = "voice_common"; // 0x1bc PushS
	GetVariable(var_87_string, var_85_int); // 0x1bd Func
	var_88_int = var_85_int; // 0x1bf Push
	if(var_88_int == 0) goto Label_481; // 0x1c0 JumpB
	var_89_bool = 0; var_90_object = Obj(); // 0x1c1 PushV
	var_90_object = var_79_object; // 0x1c2 Mov
	func_501(var_90_object); // 0x1c3 NEW_2
	var_119_bool = var_89_bool == 0; // 0x1c5 Not
	if(var_119_bool == 0) goto Label_463; // 0x1c6 JumpB
	var_120_bool = 0; var_121_object = Obj(); // 0x1c7 PushV
	var_121_object = var_79_object; // 0x1c8 Mov
	func_538(var_121_object); // 0x1c9 NEW_2
	var_155_bool = var_120_bool == 0; // 0x1cb Not
	if(var_155_bool == 0) goto Label_463; // 0x1cc JumpB
	var_78_bool = 0; // 0x1cd MovB
	return 4; // 0x1ce Return
	
Label_463:
	var_156_int = 2; // 0x1cf PushI
	irand(var_86_int, var_156_int); // 0x1d0 Func
	var_157_int = var_86_int; // 0x1d2 Push
	if(var_157_int == 0) goto Label_476; // 0x1d3 JumpB
	var_158_string = "voice_common"; // 0x1d4 PushS
	var_159_int = 1; // 0x1d5 PushI
	var_160_int = var_85_int + var_159_int; // 0x1d6 Add
	var_161_int = 3; // 0x1d7 PushI
	var_162_int = var_160_int / var_161_int; // 0x1d8 Mod
	SetVariable(var_158_string, var_162_int); // 0x1d9 Func
	goto Label_480; // 0x1db Jump
	
Label_480:
	goto Label_499; // 0x1e0 Jump
	
Label_499:
	var_78_bool = 1; // 0x1f3 MovB
	return 4; // 0x1f4 Return
	
Label_476:
	var_163_string = "voice_common"; // 0x1dc PushS
	var_164_int = 0; // 0x1dd PushI
	SetVariable(var_163_string, var_164_int); // 0x1de Func
	
Label_481:
	var_165_bool = 0; var_166_object = Obj(); // 0x1e1 PushV
	var_166_object = var_79_object; // 0x1e2 Mov
	func_538(var_166_object); // 0x1e3 NEW_2
	var_167_bool = var_165_bool == 0; // 0x1e5 Not
	if(var_167_bool == 0) goto Label_495; // 0x1e6 JumpB
	var_168_bool = 0; var_169_object = Obj(); // 0x1e7 PushV
	var_169_object = var_79_object; // 0x1e8 Mov
	func_501(var_169_object); // 0x1e9 NEW_2
	var_170_bool = var_168_bool == 0; // 0x1eb Not
	if(var_170_bool == 0) goto Label_495; // 0x1ec JumpB
	var_78_bool = 0; // 0x1ed MovB
	return 4; // 0x1ee Return
	
Label_495:
	var_171_string = "voice_common"; // 0x1ef PushS
	var_172_int = 1; // 0x1f0 PushI
	SetVariable(var_171_string, var_172_int); // 0x1f1 Func
}


func_699(var_66_int)
{
	var_66_int = 515540; // 0x2bb MovI
	return 0; // 0x2bc Return
}


func_703(var_67_string)
{
	var_67_string = "ui/NPC_Klara.png"; // 0x2bf MovS
	return 0; // 0x2c0 Return
}


