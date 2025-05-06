task_0_event_0(var_0_cvector, var_1_cvector, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object)
{
	func_74(); // 0x19 Call
	var_16_int = 10; // 0x1b PushI
	KillTimer(var_16_int); // 0x1c Func
	var_17_object = Obj(); // 0x1e PushV
	var_17_object = var_14_object; // 0x1f Mov
	TaskCall(1); // 0x20 TaskCall
	func_187(var_18_object, var_19_object, var_20_object, var_21_object, var_22_object, var_23_object, var_24_object, var_25_object, var_26_object, var_27_object, var_28_object, var_17_object); // 0x21 Call
	TaskReturn(); // 0x22 TaskReturn
	var_317_int = 10; // 0x24 PushI
	var_318_float = 0.75; // 0x25 PushF
	SetTimer(var_317_int, var_318_float); // 0x26 Func
	return 0; // 0x28 Return
}


task_0_event_7(var_0_cvector, var_1_cvector, var_2_bool, var_3_int, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object)
{
	var_15_object = Obj(); var_16_object = Obj(); // 0x29 PushV
	var_17_int = 10; // 0x2a PushI
	var_18_bool = var_14_object == var_17_int; // 0x2b Eq
	if(var_18_bool == 0) goto Label_73; // 0x2c JumpB
	var_19_string = "player"; // 0x2d PushS
	FindActor(var_16_object, var_19_string); // 0x2e Func
	var_20_bool = 0; var_21_object = Obj(); // 0x30 PushV
	var_21_object = var_16_object; // 0x31 Mov
	func_774(var_20_bool, var_21_object); // 0x32 Call
	if(var_20_bool == 0) goto Label_64; // 0x34 JumpB
	var_36_bool = GlobalVars[1]; // 0x35 PushGE
	var_37_bool = var_36_bool == 0; // 0x36 Not
	if(var_37_bool == 0) goto Label_63; // 0x37 JumpB
	var_38_object = Obj(); // 0x38 PushV
	var_38_object = var_16_object; // 0x39 Mov
	func_678(var_38_object); // 0x3a Call
	var_45_bool = GlobalVars[1]; // 0x3c PushGE
	var_45_bool = 1; // 0x3d MovB
	GlobalVars[1] = var_45_bool; // 0x3e PopGE
	
Label_63:
	goto Label_72; // 0x3f Jump
	
Label_72:
	var_16_object = 0; // 0x48 SetNull
	
Label_73:
	return 2; // 0x49 Return
	
Label_64:
	var_46_bool = GlobalVars[1]; // 0x40 PushGE
	if(var_46_bool == 0) goto Label_72; // 0x41 JumpB
	var_47_string = "head"; // 0x42 PushS
	UnlookAsync(var_47_string); // 0x43 Func
	var_48_bool = GlobalVars[1]; // 0x45 PushGE
	var_48_bool = 0; // 0x46 MovB
	GlobalVars[1] = var_48_bool; // 0x47 PopGE
}


main(var_0_cvector, var_1_cvector, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object)
{
	var_2_bool = 0; // 0x0 TMovB
	var_14_bool = GlobalVars[1]; // 0x1 PushGE
	var_14_bool = 0; // 0x2 MovB
	GlobalVars[1] = var_14_bool; // 0x3 PopGE
	var_15_cvector = GlobalVars[0]; // 0x4 PushGE
	var_16_cvector = CVector(0,0,0); // 0x5 PushV
	func_18(var_16_cvector); // 0x6 Call
	var_15_cvector = var_16_cvector; // 0x7 Mov
	GlobalVars[0] = var_15_cvector; // 0x9 PopGE
	var_19_int = 10; // 0xa PushI
	var_20_float = 0.75; // 0xb PushF
	SetTimer(var_19_int, var_20_float); // 0xc Func
	func_104(var_12_object, var_13_object); // 0xf Call
	return 0; // 0x11 Return
}


func_706()
{
	var_304_string = ""; var_305_int = 0; // 0x2c2 PushV
	var_304_string = "noinv_drop"; // 0x2c3 MovS
	var_305_int = -1; // 0x2c4 MovI
	func_699(var_304_string, var_305_int); // 0x2c5 Call
	return 0; // 0x2c7 Return
}


func_515(var_187_string, var_188_string, var_189_string)
{
	var_190_cvector = CVector(0,0,0); var_191_cvector = CVector(0,0,0); var_192_bool = 0; var_193_object = Obj(); var_194_cvector = CVector(0,0,0); var_195_cvector = CVector(0,0,0); var_196_bool = 0; var_197_object = Obj(); // 0x203 PushV
	GetLocator(var_189_string, var_196_bool, var_194_cvector, var_195_cvector); // 0x204 ObjFunc
	var_198_bool = var_196_bool == 0; // 0x206 Not
	if(var_198_bool == 0) goto Label_525; // 0x207 JumpB
	var_199_string = "Locator doesn't exist for arena spectator "; // 0x208 PushS
	var_200_int = var_199_string + var_189_string; // 0x209 Add
	Trace(var_200_int); // 0x20a Func
	return 8; // 0x20c Return
	
Label_525:
	var_201_bool = 1; // 0x20d PushB
	AddStationaryActor(var_197_object, var_194_cvector, var_195_cvector, var_187_string, var_188_string, var_201_bool); // 0x20e ObjFunc
	add(var_197_object); // 0x210 TObjFunc
	return 8; // 0x212 Return
}


func_774(var_20_bool, var_21_object)
{
	var_22_float = 0; var_23_float = 0; // 0x306 PushV
	var_24_bool = var_21_object == 0; // 0x307 NullEq
	if(var_24_bool == 0) goto Label_779; // 0x308 JumpB
	var_20_bool = 0; // 0x309 MovB
	return 2; // 0x30a Return
	
Label_779:
	var_25_float = 0; var_26_object = Obj(); // 0x30b PushV
	var_26_object = var_21_object; // 0x30c Mov
	func_556(var_26_object); // 0x30d Call
	var_23_float = sqrt(var_25_float); // 0x30f Sqrt2
	var_33_bool = GlobalVars[1]; // 0x310 PushGE
	if(var_33_bool == 0) goto Label_788; // 0x311 JumpB
	var_34_int = 100; // 0x312 PushI
	var_23_float = var_23_float - var_34_int; // 0x313 Sub2
	
Label_788:
	var_35_int = 300; // 0x314 PushI
	var_20_bool = var_23_float < var_35_int; // 0x315 LT2
	return 2; // 0x316 Return
}


func_648(var_260_int)
{
	var_263_int = 0; var_264_int = 0; var_265_object = Obj(); var_266_bool = 0; var_267_int = 0; var_268_int = 0; var_269_int = 0; var_270_int = 0; var_271_object = Obj(); var_272_bool = 0; var_273_int = 0; var_274_int = 0; // 0x288 PushV
	RemoveAllItems(var_260_int); // 0x289 ObjFunc
	size(var_269_int); // 0x28b ObjFunc
	var_270_int = 0; // 0x28d MovI
	
Label_654:
	var_275_bool = var_270_int < var_269_int; // 0x28e LT
	if(var_275_bool == 0) goto Label_664; // 0x28f JumpB
	get(var_271_object, var_270_int); // 0x290 ObjFunc
	AddItem(var_272_bool, var_271_object, var_260_int); // 0x292 ObjFunc
	var_271_object = 0; // 0x294 SetNull
	var_276_int = 1; // 0x295 PushI
	var_270_int = var_270_int + var_276_int; // 0x296 Add2
	goto Label_654; // 0x297 Jump
	
Label_664:
	size(var_269_int); // 0x298 ObjFunc
	var_273_int = 0; // 0x29a MovI
	
Label_667:
	var_277_bool = var_273_int < var_269_int; // 0x29b LT
	if(var_277_bool == 0) goto Label_677; // 0x29c JumpB
	get(var_274_int, var_273_int); // 0x29d ObjFunc
	var_278_bool = 1; // 0x29f PushB
	SelectItem(var_274_int, var_278_bool, var_260_int); // 0x2a0 ObjFunc
	var_279_int = 1; // 0x2a2 PushI
	var_273_int = var_273_int + var_279_int; // 0x2a3 Add2
	goto Label_667; // 0x2a4 Jump
	
Label_677:
	return 12; // 0x2a5 Return
}


func_712()
{
	var_70_string = ""; var_71_int = 0; // 0x2c8 PushV
	var_70_string = "noinv_drop"; // 0x2c9 MovS
	var_71_int = 1; // 0x2ca MovI
	func_699(var_70_string, var_71_int); // 0x2cb Call
	return 0; // 0x2cd Return
}


func_74()
{
	var_15_bool = var_2_bool; // 0x4a PushT
	if(var_15_bool == 0) goto Label_79; // 0x4b JumpB
	StopAnimation(); // 0x4c Func
	goto Label_82; // 0x4e Jump
	
Label_82:
	return 0; // 0x52 Return
	
Label_79:
	func_182(); // 0x50 Call
}


func_587(var_306_object)
{
	var_307_int = 0; var_308_int = 0; // 0x24b PushV
	var_309_bool = var_306_object == 0; // 0x24c Not
	if(var_309_bool == 0) goto Label_591; // 0x24d JumpB
	return 2; // 0x24e Return
	
Label_591:
	var_310_string = "noaccess"; // 0x24f PushS
	GetProperty(var_310_string, var_308_int); // 0x250 ObjFunc
	var_311_int = 1; // 0x252 PushI
	var_312_bool = var_308_int > var_311_int; // 0x253 GT
	if(var_312_bool == 0) goto Label_603; // 0x254 JumpB
	var_313_string = "noaccess"; // 0x255 PushS
	var_314_int = 1; // 0x256 PushI
	var_315_int = var_308_int - var_314_int; // 0x257 Sub
	SetProperty(var_313_string, var_315_int); // 0x258 ObjFunc
	goto Label_606; // 0x25a Jump
	
Label_606:
	return 2; // 0x25e Return
	
Label_603:
	var_316_string = "noaccess"; // 0x25b PushS
	RemoveProperty(var_316_string); // 0x25c ObjFunc
}


func_718()
{
	var_302_string = ""; var_303_int = 0; // 0x2ce PushV
	var_302_string = "nouse_container"; // 0x2cf MovS
	var_303_int = -1; // 0x2d0 MovI
	func_699(var_302_string, var_303_int); // 0x2d1 Call
	return 0; // 0x2d3 Return
}


func_18(var_16_cvector)
{
	var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); // 0x12 PushV
	GetDirection(var_18_cvector); // 0x13 Func
	var_16_cvector = var_18_cvector; // 0x15 Mov
	return 2; // 0x16 Return
}


func_83(var_2_bool)
{
	var_33_int = 0; var_34_int = 0; var_35_int = 0; var_36_int = 0; // 0x53 PushV
	var_2_bool = 1; // 0x54 TMovB
	var_37_int = 0; // 0x55 PushV
	func_757(var_37_int); // 0x56 Call
	var_35_int = var_37_int; // 0x57 Mov
	var_50_int = var_35_int; // 0x59 Push
	if(var_50_int == 0) goto Label_102; // 0x5a JumpB
	irand(var_36_int, var_35_int); // 0x5b Func
	var_51_string = "all"; // 0x5d PushS
	var_52_string = ""; var_53_int = 0; // 0x5e PushV
	var_53_int = var_36_int; // 0x5f Mov
	func_750(var_52_string, var_53_int); // 0x60 Call
	PlayAnimation(var_51_string, var_52_string); // 0x62 Func
	WaitForAnimEnd(); // 0x64 Func
	
Label_102:
	var_2_bool = 0; // 0x66 TMovB
	return 4; // 0x67 Return
}


func_532()
{
	var_248_int = 0; var_249_int = 0; var_250_object = Obj(); var_251_object = Obj(); var_252_int = 0; var_253_int = 0; var_254_object = Obj(); var_255_object = Obj(); // 0x214 PushV
	size(var_252_int); // 0x215 TObjFunc
	var_253_int = 0; // 0x217 MovI
	
Label_536:
	var_256_bool = var_253_int < var_252_int; // 0x218 LT
	if(var_256_bool == 0) goto Label_553; // 0x219 JumpB
	get(var_254_object, var_253_int); // 0x21a TObjFunc
	GetActor(var_255_object); // 0x21c ObjFunc
	var_257_bool = var_255_object != 0; // 0x21e NullNeq
	if(var_257_bool == 0) goto Label_546; // 0x21f JumpB
	RemoveActor(var_255_object); // 0x220 Func
	
Label_546:
	Remove(); // 0x222 ObjFunc
	var_255_object = 0; // 0x224 SetNull
	var_254_object = 0; // 0x225 SetNull
	var_258_int = 1; // 0x226 PushI
	var_253_int = var_253_int + var_258_int; // 0x227 Add2
	goto Label_536; // 0x228 Jump
	
Label_553:
	clear(); // 0x229 TObjFunc
	return 8; // 0x22b Return
}


func_724()
{
	var_75_string = ""; var_76_int = 0; // 0x2d4 PushV
	var_75_string = "nouse_container"; // 0x2d5 MovS
	var_76_int = 1; // 0x2d6 MovI
	func_699(var_75_string, var_76_int); // 0x2d7 Call
	return 0; // 0x2d9 Return
}


func_470()
{
	var_149_int = 0; var_150_int = 0; var_151_object = Obj(); var_152_int = 0; var_153_bool = 0; var_154_int = 0; var_155_bool = 0; var_156_int = 0; var_157_int = 0; var_158_int = 0; var_159_object = Obj(); var_160_int = 0; var_161_bool = 0; var_162_int = 0; var_163_bool = 0; var_164_int = 0; // 0x1d6 PushV
	var_165_int = 0; // 0x1d7 PushI
	GetItemCount(var_157_int, var_165_int); // 0x1d8 ObjFunc
	var_158_int = 0; // 0x1da MovI
	
Label_475:
	var_166_bool = var_158_int < var_157_int; // 0x1db LT
	if(var_166_bool == 0) goto Label_514; // 0x1dc JumpB
	GetItem(var_159_object, var_158_int); // 0x1dd ObjFunc
	GetItemID(var_160_int); // 0x1df ObjFunc
	var_167_string = "Group"; // 0x1e1 PushS
	HasInvItemProperty(var_161_bool, var_160_int, var_167_string); // 0x1e2 Func
	var_168_bool = var_161_bool; // 0x1e4 Push
	if(var_168_bool == 0) goto Label_500; // 0x1e5 JumpB
	var_169_string = "Group"; // 0x1e6 PushS
	GetInvItemProperty(var_162_int, var_160_int, var_169_string); // 0x1e7 Func
	var_170_int = 0; // 0x1e9 PushI
	var_171_bool = var_162_int != var_170_int; // 0x1ea Neq
	if(var_171_bool == 0) goto Label_494; // 0x1eb JumpB
	goto Label_511; // 0x1ec Jump
	
Label_511:
	var_172_int = 1; // 0x1ff PushI
	var_158_int = var_158_int + var_172_int; // 0x200 Add2
	goto Label_475; // 0x201 Jump
	
Label_494:
	var_173_int = 0; // 0x1ee PushI
	IsItemSelected(var_163_bool, var_158_int, var_173_int); // 0x1ef ObjFunc
	var_174_bool = var_163_bool; // 0x1f1 Push
	if(var_174_bool == 0) goto Label_500; // 0x1f2 JumpB
	goto Label_511; // 0x1f3 Jump
	
Label_500:
	var_175_int = 0; // 0x1f4 PushI
	GetItemAmount(var_164_int, var_158_int, var_175_int); // 0x1f5 ObjFunc
	var_176_int = 0; // 0x1f7 PushI
	RemoveItem(var_158_int, var_164_int, var_176_int); // 0x1f8 ObjFunc
	var_177_int = -1; // 0x1fa PushI
	var_158_int = var_158_int + var_177_int; // 0x1fb Add2
	var_178_int = -1; // 0x1fc PushI
	var_157_int = var_157_int + var_178_int; // 0x1fd Add2
	var_159_object = 0; // 0x1fe SetNull
	
Label_514:
	return 16; // 0x202 Return
}


func_730(var_82_float, var_83_float)
{
	var_85_bool = 0; var_86_float = 0; var_87_float = 0; var_88_bool = 0; var_89_float = 0; var_90_float = 0; // 0x2da PushV
	var_88_bool = var_83_float > var_82_float; // 0x2db GT2
	var_91_int = var_83_float - var_82_float; // 0x2dc Sub
	var_89_float = var_91_int / var_91_int; // 0x2dd Div2
	
Label_734:
	var_92_bool = var_88_bool; // 0x2de Push
	if(var_92_bool == 0) goto Label_738; // 0x2df JumpB
	var_93_bool = var_82_float < var_83_float; // 0x2e0 LT
	goto Label_739; // 0x2e1 Jump
	
Label_739:
	if(var_93_bool == 0) goto Label_747; // 0x2e3 JumpB
	ModDarkenLevel(var_82_float); // 0x2e4 Func
	sync(var_90_float); // 0x2e6 Func
	var_94_float = var_90_float * var_89_float; // 0x2e8 Mult
	var_82_float = var_82_float + var_94_float; // 0x2e9 Add2
	goto Label_734; // 0x2ea Jump
	
Label_747:
	ModDarkenLevel(var_83_float); // 0x2eb Func
	return 6; // 0x2ed Return
	
Label_738:
	var_95_bool = var_83_float < var_82_float; // 0x2e2 LT
}


func_607(var_96_object, var_98_int)
{
	var_99_object = Obj(); var_100_int = 0; var_101_int = 0; var_102_object = Obj(); var_103_object = Obj(); var_104_int = 0; var_105_int = 0; var_106_object = Obj(); // 0x25f PushV
	var_107_object = Obj(); // 0x260 PushV
	func_693(var_107_object); // 0x261 Call
	var_103_object = var_107_object; // 0x262 Mov
	GetItemCount(var_104_int, var_98_int); // 0x264 ObjFunc
	var_105_int = 0; // 0x266 MovI
	
Label_615:
	var_108_bool = var_105_int < var_104_int; // 0x267 LT
	if(var_108_bool == 0) goto Label_625; // 0x268 JumpB
	GetItem(var_106_object, var_105_int, var_98_int); // 0x269 ObjFunc
	add(var_106_object); // 0x26b ObjFunc
	var_106_object = 0; // 0x26d SetNull
	var_109_int = 1; // 0x26e PushI
	var_105_int = var_105_int + var_109_int; // 0x26f Add2
	goto Label_615; // 0x270 Jump
	
Label_625:
	var_96_object = var_103_object; // 0x271 Mov
	return 8; // 0x272 Return
}


func_678(var_38_object)
{
	var_39_float = 0; var_40_cvector = CVector(0,0,0); var_41_float = 0; var_42_cvector = CVector(0,0,0); // 0x2a6 PushV
	GetEyesHeight(var_41_float); // 0x2a7 ObjFunc
	var_42_cvector = CVector(0.0, 0.0, 0.0); // 0x2a9 MovV
	var_43_float = GetByIndex(var_42_cvector, 1); // 0x2aa PushE
	var_43_float = var_41_float; // 0x2ab Mov
	SetByIndex(var_42_cvector, 1) = var_43_float; // 0x2ac PopE
	var_44_string = "head"; // 0x2ad PushS
	LookAsync(var_38_object, var_44_string, var_42_cvector); // 0x2ae Func
	return 4; // 0x2b0 Return
}


func_104(var_0_cvector, var_1_cvector)
{
	var_21_int = 0; var_22_bool = 0; var_23_cvector = CVector(0,0,0); var_24_object = Obj(); var_25_int = 0; var_26_bool = 0; var_27_cvector = CVector(0,0,0); var_28_object = Obj(); // 0x68 PushV
	GetPFPosition(var_28_object); // 0x69 Func
	GetDirection(var_0_cvector); // 0x6b Func
	
Label_109:
	var_29_int = 60; // 0x6d PushI
	irand(var_25_int, var_29_int); // 0x6e Func
	var_30_int = 30; // 0x70 PushI
	var_31_int = var_25_int + var_30_int; // 0x71 Add
	Sleep(var_31_int, var_26_bool); // 0x72 Func
	var_32_bool = var_26_bool; // 0x74 Push
	if(var_32_bool == 0) goto Label_122; // 0x75 JumpB
	func_83(var_28_object); // 0x77 Call
	goto Label_180; // 0x79 Jump
	
Label_180:
	goto Label_109; // 0xb4 Jump
	
Label_122:
	GetPFPosition(var_27_cvector); // 0x7a Func
	var_54_float = 0; var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); // 0x7c PushV
	var_55_cvector = var_1_cvector; // 0x7d MovT
	var_56_cvector = var_27_cvector; // 0x7e Mov
	func_689(var_54_float, var_55_cvector, var_56_cvector); // 0x7f Call
	var_59_int = 40000; // 0x81 PushI
	var_60_bool = var_54_float > var_59_int; // 0x82 GT
	if(var_60_bool == 0) goto Label_166; // 0x83 JumpB
	FindPathTo(var_28_object, var_28_object); // 0x84 Func
	var_61_bool = var_28_object != 0; // 0x86 NullNeq
	if(var_61_bool == 0) goto Label_161; // 0x87 JumpB
	RotatePath(var_28_object, var_26_bool); // 0x88 Func
	var_62_bool = var_26_bool == 0; // 0x8a Not
	if(var_62_bool == 0) goto Label_141; // 0x8b JumpB
	goto Label_179; // 0x8c Jump
	
Label_179:
	goto Label_122; // 0xb3 Jump
	
Label_141:
	var_63_bool = 0; // 0x8d PushB
	FollowPath(var_28_object, var_63_bool, var_26_bool); // 0x8e Func
	var_64_bool = var_26_bool == 0; // 0x90 Not
	if(var_64_bool == 0) goto Label_147; // 0x91 JumpB
	goto Label_179; // 0x92 Jump
	
Label_147:
	var_65_float = GetByIndex(var_0_cvector, 0); // 0x93 PushE
	var_66_float = GetByIndex(var_0_cvector, 2); // 0x94 PushE
	Rotate(var_65_float, var_66_float, var_26_bool); // 0x95 Func
	var_67_bool = var_26_bool == 0; // 0x97 Not
	if(var_67_bool == 0) goto Label_154; // 0x98 JumpB
	goto Label_179; // 0x99 Jump
	
Label_154:
	WaitForAnimEnd(var_26_bool); // 0x9a Func
	var_68_bool = var_26_bool == 0; // 0x9c Not
	if(var_68_bool == 0) goto Label_159; // 0x9d JumpB
	goto Label_179; // 0x9e Jump
	
Label_159:
	goto Label_180; // 0x9f Jump
	
Label_161:
	var_69_int = 1; // 0xa1 PushI
	Sleep(var_69_int); // 0xa2 Func
	var_28_object = 0; // 0xa4 SetNull
	goto Label_179; // 0xa5 Jump
	
Label_166:
	var_70_float = GetByIndex(var_0_cvector, 0); // 0xa6 PushE
	var_71_float = GetByIndex(var_0_cvector, 2); // 0xa7 PushE
	Rotate(var_70_float, var_71_float, var_26_bool); // 0xa8 Func
	var_72_bool = var_26_bool == 0; // 0xaa Not
	if(var_72_bool == 0) goto Label_173; // 0xab JumpB
	goto Label_179; // 0xac Jump
	
Label_173:
	WaitForAnimEnd(var_26_bool); // 0xad Func
	var_73_bool = var_26_bool == 0; // 0xaf Not
	if(var_73_bool == 0) goto Label_178; // 0xb0 JumpB
	goto Label_179; // 0xb1 Jump
	
Label_178:
	goto Label_180; // 0xb2 Jump
}


func_556(var_25_float)
{
	var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); // 0x22c PushV
	GetPosition(var_30_cvector); // 0x22d Func
	GetPosition(var_31_cvector); // 0x22f ObjFunc
	var_32_cvector = var_31_cvector - var_30_cvector; // 0x231 Sub2
	var_25_float = var_32_cvector | var_32_cvector; // 0x232 Or2
	return 6; // 0x233 Return
}


func_750(var_43_string, var_44_int)
{
	var_45_string = ""; var_46_string = ""; // 0x2ee PushV
	var_46_string = "idle"; // 0x2ef MovS
	var_47_int = var_44_int; // 0x2f0 Push
	if(var_47_int == 0) goto Label_755; // 0x2f1 JumpB
	var_46_string = var_46_string + var_44_int; // 0x2f2 Add2
	
Label_755:
	var_43_string = var_46_string; // 0x2f3 Mov
	return 2; // 0x2f4 Return
}


func_689(var_54_float, var_55_cvector, var_56_cvector)
{
	var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); // 0x2b1 PushV
	var_58_cvector = var_56_cvector - var_55_cvector; // 0x2b2 Sub2
	var_54_float = var_58_cvector | var_58_cvector; // 0x2b3 Or2
	return 2; // 0x2b4 Return
}


func_564(var_56_object)
{
	var_57_bool = 0; var_58_int = 0; var_59_bool = 0; var_60_int = 0; // 0x234 PushV
	var_61_bool = var_56_object == 0; // 0x235 Not
	if(var_61_bool == 0) goto Label_568; // 0x236 JumpB
	return 4; // 0x237 Return
	
Label_568:
	var_62_string = "noaccess"; // 0x238 PushS
	HasProperty(var_62_string, var_59_bool); // 0x239 ObjFunc
	var_63_bool = var_59_bool; // 0x23b Push
	if(var_63_bool == 0) goto Label_582; // 0x23c JumpB
	var_64_string = "noaccess"; // 0x23d PushS
	GetProperty(var_64_string, var_60_int); // 0x23e ObjFunc
	var_65_string = "noaccess"; // 0x240 PushS
	var_66_int = 1; // 0x241 PushI
	var_67_int = var_60_int + var_66_int; // 0x242 Add
	SetProperty(var_65_string, var_67_int); // 0x243 ObjFunc
	goto Label_586; // 0x245 Jump
	
Label_586:
	return 4; // 0x24a Return
	
Label_582:
	var_68_string = "noaccess"; // 0x246 PushS
	var_69_int = 1; // 0x247 PushI
	SetProperty(var_68_string, var_69_int); // 0x248 ObjFunc
}


func_693(var_53_object)
{
	var_54_object = Obj(); var_55_object = Obj(); // 0x2b5 PushV
	CreateObjectVector(var_55_object); // 0x2b6 Func
	var_53_object = var_55_object; // 0x2b8 Mov
	return 2; // 0x2b9 Return
}


func_182()
{
	StopGroup0(); // 0xb6 Func
	Stop(); // 0xb8 Func
	return 0; // 0xba Return
}


func_628(var_122_object, var_124_int)
{
	var_125_object = Obj(); var_126_int = 0; var_127_int = 0; var_128_bool = 0; var_129_object = Obj(); var_130_int = 0; var_131_int = 0; var_132_bool = 0; // 0x274 PushV
	CreateIntVector(var_129_object); // 0x275 Func
	GetItemCount(var_130_int, var_124_int); // 0x277 ObjFunc
	var_131_int = 0; // 0x279 MovI
	
Label_634:
	var_133_bool = var_131_int < var_130_int; // 0x27a LT
	if(var_133_bool == 0) goto Label_645; // 0x27b JumpB
	IsItemSelected(var_132_bool, var_131_int, var_124_int); // 0x27c ObjFunc
	var_134_bool = var_132_bool; // 0x27e Push
	if(var_134_bool == 0) goto Label_642; // 0x27f JumpB
	add(var_131_int); // 0x280 ObjFunc
	
Label_642:
	var_135_int = 1; // 0x282 PushI
	var_131_int = var_131_int + var_135_int; // 0x283 Add2
	goto Label_634; // 0x284 Jump
	
Label_645:
	var_122_object = var_129_object; // 0x285 Mov
	return 8; // 0x286 Return
}


func_757(var_37_int)
{
	var_38_int = 0; var_39_bool = 0; var_40_int = 0; var_41_bool = 0; // 0x2f5 PushV
	var_40_int = 0; // 0x2f6 MovI
	
Label_759:
	var_42_string = "all"; // 0x2f7 PushS
	var_43_string = ""; var_44_int = 0; // 0x2f8 PushV
	var_44_int = var_40_int; // 0x2f9 Mov
	func_750(var_43_string, var_44_int); // 0x2fa Call
	HasAnimation(var_41_bool, var_42_string, var_43_string); // 0x2fc Func
	var_48_bool = var_41_bool == 0; // 0x2fe Not
	if(var_48_bool == 0) goto Label_769; // 0x2ff JumpB
	goto Label_772; // 0x300 Jump
	
Label_772:
	var_37_int = var_40_int; // 0x304 Mov
	return 4; // 0x305 Return
	
Label_769:
	var_49_int = 1; // 0x301 PushI
	var_40_int = var_40_int + var_49_int; // 0x302 Add2
	goto Label_759; // 0x303 Jump
}


func_187(var_0_cvector, var_1_cvector, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_17_object)
{
	var_29_cvector = CVector(0,0,0); var_30_int = 0; var_31_object = Obj(); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_bool = 0; var_37_object = Obj(); var_38_bool = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_int = 0; var_43_object = Obj(); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_bool = 0; var_49_object = Obj(); var_50_bool = 0; var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); // 0xbb PushV
	var_53_object = Obj(); // 0xbc PushV
	func_693(var_53_object); // 0xbd Call
	var_10_object = var_53_object; // 0xbe TMov
	var_56_object = Obj(); // 0xc0 PushV
	var_56_object = var_17_object; // 0xc1 Mov
	func_564(var_56_object); // 0xc2 Call
	func_712(); // 0xc5 Call
	func_724(); // 0xc8 Call
	var_77_cvector = GlobalVars[0]; // 0xca PushGE
	var_41_cvector = var_77_cvector; // 0xcb Mov
	LockCamera(); // 0xcd Func
	var_78_float = GetByIndex(var_41_cvector, 0); // 0xcf PushE
	var_79_int = -var_78_float; // 0xd0 Neg
	var_80_float = GetByIndex(var_41_cvector, 2); // 0xd1 PushE
	var_81_int = -var_80_float; // 0xd2 Neg
	RotateAsync(var_79_int, var_81_int); // 0xd3 Func
	var_82_float = 0; var_83_float = 0; var_84_float = 0; // 0xd5 PushV
	var_82_float = 0; // 0xd6 MovI
	var_83_float = 1; // 0xd7 MovI
	var_84_float = 0.75; // 0xd8 MovF
	func_730(var_83_float, var_84_float); // 0xd9 Call
	var_96_object = Obj(); var_97_object = Obj(); var_98_int = 0; // 0xdb PushV
	var_97_object = var_17_object; // 0xdc Mov
	var_98_int = 0; // 0xdd MovI
	func_607(var_97_object, var_98_int); // 0xde Call
	var_0_cvector = var_96_object; // 0xdf TMov
	var_110_object = Obj(); var_111_object = Obj(); var_112_int = 0; // 0xe1 PushV
	var_111_object = var_17_object; // 0xe2 Mov
	var_112_int = 1; // 0xe3 MovI
	func_607(var_111_object, var_112_int); // 0xe4 Call
	var_1_cvector = var_110_object; // 0xe5 TMov
	var_113_object = Obj(); var_114_object = Obj(); var_115_int = 0; // 0xe7 PushV
	var_114_object = var_17_object; // 0xe8 Mov
	var_115_int = 2; // 0xe9 MovI
	func_607(var_114_object, var_115_int); // 0xea Call
	var_2_bool = var_113_object; // 0xeb TMov
	var_116_object = Obj(); var_117_object = Obj(); var_118_int = 0; // 0xed PushV
	var_117_object = var_17_object; // 0xee Mov
	var_118_int = 3; // 0xef MovI
	func_607(var_117_object, var_118_int); // 0xf0 Call
	var_3_object = var_116_object; // 0xf1 TMov
	var_119_object = Obj(); var_120_object = Obj(); var_121_int = 0; // 0xf3 PushV
	var_120_object = var_17_object; // 0xf4 Mov
	var_121_int = 4; // 0xf5 MovI
	func_607(var_120_object, var_121_int); // 0xf6 Call
	var_4_object = var_119_object; // 0xf7 TMov
	var_122_object = Obj(); var_123_object = Obj(); var_124_int = 0; // 0xf9 PushV
	var_123_object = var_17_object; // 0xfa Mov
	var_124_int = 0; // 0xfb MovI
	func_628(var_123_object, var_124_int); // 0xfc Call
	var_5_object = var_122_object; // 0xfd TMov
	var_136_object = Obj(); var_137_object = Obj(); var_138_int = 0; // 0xff PushV
	var_137_object = var_17_object; // 0x100 Mov
	var_138_int = 1; // 0x101 MovI
	func_628(var_137_object, var_138_int); // 0x102 Call
	var_6_object = var_136_object; // 0x103 TMov
	var_139_object = Obj(); var_140_object = Obj(); var_141_int = 0; // 0x105 PushV
	var_140_object = var_17_object; // 0x106 Mov
	var_141_int = 2; // 0x107 MovI
	func_628(var_140_object, var_141_int); // 0x108 Call
	var_7_object = var_139_object; // 0x109 TMov
	var_142_object = Obj(); var_143_object = Obj(); var_144_int = 0; // 0x10b PushV
	var_143_object = var_17_object; // 0x10c Mov
	var_144_int = 3; // 0x10d MovI
	func_628(var_143_object, var_144_int); // 0x10e Call
	var_8_object = var_142_object; // 0x10f TMov
	var_145_object = Obj(); var_146_object = Obj(); var_147_int = 0; // 0x111 PushV
	var_146_object = var_17_object; // 0x112 Mov
	var_147_int = 4; // 0x113 MovI
	func_628(var_146_object, var_147_int); // 0x114 Call
	var_9_object = var_145_object; // 0x115 TMov
	var_148_object = Obj(); // 0x117 PushV
	var_148_object = var_17_object; // 0x118 Mov
	func_470(); // 0x119 Call
	var_42_int = 1; // 0x11b MovI
	
Label_284:
	var_179_int = 5; // 0x11c PushI
	var_180_bool = var_42_int < var_179_int; // 0x11d LT
	if(var_180_bool == 0) goto Label_292; // 0x11e JumpB
	RemoveAllItems(var_42_int); // 0x11f ObjFunc
	var_181_int = 1; // 0x121 PushI
	var_42_int = var_42_int + var_181_int; // 0x122 Add2
	goto Label_284; // 0x123 Jump
	
Label_292:
	GetScene(var_43_object); // 0x124 Func
	var_182_string = "pt_arena_player"; // 0x126 PushS
	GetLocator(var_182_string, var_48_bool, var_44_cvector, var_45_cvector); // 0x127 ObjFunc
	var_183_string = "pt_arena_enemy"; // 0x129 PushS
	GetLocator(var_183_string, var_48_bool, var_46_cvector, var_47_cvector); // 0x12a ObjFunc
	Teleport(var_17_object, var_43_object, var_44_cvector, var_45_cvector); // 0x12c Func
	var_184_string = "pers_butcher"; // 0x12e PushS
	var_185_string = "arena_fighter.xml"; // 0x12f PushS
	AddActor(var_49_object, var_184_string, var_43_object, var_46_cvector, var_47_cvector, var_185_string); // 0x130 Func
	var_186_object = Obj(); var_187_string = ""; var_188_string = ""; var_189_string = ""; // 0x132 PushV
	var_186_object = var_43_object; // 0x133 Mov
	var_187_string = "pers_worker"; // 0x134 MovS
	var_188_string = "arena_spectator_worker.xml"; // 0x135 MovS
	var_189_string = "pt_arena_spectator1"; // 0x136 MovS
	func_515(var_187_string, var_188_string, var_189_string); // 0x137 Call
	var_202_object = Obj(); var_203_string = ""; var_204_string = ""; var_205_string = ""; // 0x139 PushV
	var_202_object = var_43_object; // 0x13a Mov
	var_203_string = "pers_worker"; // 0x13b MovS
	var_204_string = "arena_spectator_worker.xml"; // 0x13c MovS
	var_205_string = "pt_arena_spectator2"; // 0x13d MovS
	func_515(var_203_string, var_204_string, var_205_string); // 0x13e Call
	var_206_object = Obj(); var_207_string = ""; var_208_string = ""; var_209_string = ""; // 0x140 PushV
	var_206_object = var_43_object; // 0x141 Mov
	var_207_string = "pers_unosha"; // 0x142 MovS
	var_208_string = "arena_spectator_unosha.xml"; // 0x143 MovS
	var_209_string = "pt_arena_spectator3"; // 0x144 MovS
	func_515(var_207_string, var_208_string, var_209_string); // 0x145 Call
	var_210_object = Obj(); var_211_string = ""; var_212_string = ""; var_213_string = ""; // 0x147 PushV
	var_210_object = var_43_object; // 0x148 Mov
	var_211_string = "pers_unosha"; // 0x149 MovS
	var_212_string = "arena_spectator_unosha.xml"; // 0x14a MovS
	var_213_string = "pt_arena_spectator4"; // 0x14b MovS
	func_515(var_211_string, var_212_string, var_213_string); // 0x14c Call
	var_214_object = Obj(); var_215_string = ""; var_216_string = ""; var_217_string = ""; // 0x14e PushV
	var_214_object = var_43_object; // 0x14f Mov
	var_215_string = "pers_unosha"; // 0x150 MovS
	var_216_string = "arena_spectator_unosha2.xml"; // 0x151 MovS
	var_217_string = "pt_arena_spectator5"; // 0x152 MovS
	func_515(var_215_string, var_216_string, var_217_string); // 0x153 Call
	var_218_object = Obj(); var_219_string = ""; var_220_string = ""; var_221_string = ""; // 0x155 PushV
	var_218_object = var_43_object; // 0x156 Mov
	var_219_string = "pers_dohodyaga"; // 0x157 MovS
	var_220_string = "arena_spectator_dohodyaga.xml"; // 0x158 MovS
	var_221_string = "pt_arena_spectator6"; // 0x159 MovS
	func_515(var_219_string, var_220_string, var_221_string); // 0x15a Call
	var_222_object = Obj(); var_223_string = ""; var_224_string = ""; var_225_string = ""; // 0x15c PushV
	var_222_object = var_43_object; // 0x15d Mov
	var_223_string = "pers_boy"; // 0x15e MovS
	var_224_string = "arena_spectator_boy.xml"; // 0x15f MovS
	var_225_string = "pt_arena_spectator7"; // 0x160 MovS
	func_515(var_223_string, var_224_string, var_225_string); // 0x161 Call
	var_226_float = GetByIndex(var_41_cvector, 0); // 0x163 PushE
	var_227_int = -var_226_float; // 0x164 Neg
	var_228_float = GetByIndex(var_41_cvector, 2); // 0x165 PushE
	var_229_int = -var_228_float; // 0x166 Neg
	Rotate(var_227_int, var_229_int); // 0x167 Func
	var_230_object = Obj(); // 0x169 PushV
	var_230_object = var_17_object; // 0x16a Mov
	func_678(var_230_object); // 0x16b Call
	var_237_float = 0; var_238_float = 0; var_239_float = 0; // 0x16d PushV
	var_237_float = 1; // 0x16e MovI
	var_238_float = 0; // 0x16f MovI
	var_239_float = 0.75; // 0x170 MovF
	func_730(var_238_float, var_239_float); // 0x171 Call
	UnlockCamera(); // 0x173 Func
	
Label_373:
	var_240_int = 1; // 0x175 PushI
	Sleep(var_240_int); // 0x176 Func
	var_241_bool = var_17_object != 0; // 0x178 NullNeq
	if(var_241_bool == 0) goto Label_383; // 0x179 JumpB
	IsDead(var_50_bool); // 0x17a ObjFunc
	var_242_bool = var_50_bool; // 0x17c Push
	if(var_242_bool == 0) goto Label_383; // 0x17d JumpB
	goto Label_384; // 0x17e Jump
	
Label_384:
	LockCamera(); // 0x180 Func
	var_243_float = GetByIndex(var_41_cvector, 0); // 0x182 PushE
	var_244_float = GetByIndex(var_41_cvector, 2); // 0x183 PushE
	RotateAsync(var_243_float, var_244_float); // 0x184 Func
	var_245_float = 0; var_246_float = 0; var_247_float = 0; // 0x186 PushV
	var_245_float = 0; // 0x187 MovI
	var_246_float = 1; // 0x188 MovI
	var_247_float = 0.75; // 0x189 MovF
	func_730(var_246_float, var_247_float); // 0x18a Call
	RemoveActor(var_49_object); // 0x18c Func
	func_532(); // 0x18f Call
	var_259_object = Obj(); var_260_int = 0; var_261_object = Obj(); var_262_object = Obj(); // 0x191 PushV
	var_259_object = var_17_object; // 0x192 Mov
	var_260_int = 0; // 0x193 MovI
	var_261_object = var_0_cvector; // 0x194 MovT
	var_262_object = var_5_object; // 0x195 MovT
	func_648(var_262_object); // 0x196 Call
	var_280_object = Obj(); var_281_int = 0; var_282_object = Obj(); var_283_object = Obj(); // 0x198 PushV
	var_280_object = var_17_object; // 0x199 Mov
	var_281_int = 1; // 0x19a MovI
	var_282_object = var_1_cvector; // 0x19b MovT
	var_283_object = var_6_object; // 0x19c MovT
	func_648(var_283_object); // 0x19d Call
	var_284_object = Obj(); var_285_int = 0; var_286_object = Obj(); var_287_object = Obj(); // 0x19f PushV
	var_284_object = var_17_object; // 0x1a0 Mov
	var_285_int = 2; // 0x1a1 MovI
	var_286_object = var_2_bool; // 0x1a2 MovT
	var_287_object = var_7_object; // 0x1a3 MovT
	func_648(var_287_object); // 0x1a4 Call
	var_288_object = Obj(); var_289_int = 0; var_290_object = Obj(); var_291_object = Obj(); // 0x1a6 PushV
	var_288_object = var_17_object; // 0x1a7 Mov
	var_289_int = 3; // 0x1a8 MovI
	var_290_object = var_3_object; // 0x1a9 MovT
	var_291_object = var_8_object; // 0x1aa MovT
	func_648(var_291_object); // 0x1ab Call
	var_292_object = Obj(); var_293_int = 0; var_294_object = Obj(); var_295_object = Obj(); // 0x1ad PushV
	var_292_object = var_17_object; // 0x1ae Mov
	var_293_int = 4; // 0x1af MovI
	var_294_object = var_4_object; // 0x1b0 MovT
	var_295_object = var_9_object; // 0x1b1 MovT
	func_648(var_295_object); // 0x1b2 Call
	SelectWeapon(); // 0x1b4 ObjFunc
	var_296_string = "pt_arena_return"; // 0x1b6 PushS
	GetLocator(var_296_string, var_48_bool, var_51_cvector, var_52_cvector); // 0x1b7 ObjFunc
	Teleport(var_17_object, var_43_object, var_51_cvector, var_52_cvector); // 0x1b9 Func
	StopAsync(); // 0x1bb Func
	var_297_float = GetByIndex(var_41_cvector, 0); // 0x1bd PushE
	var_298_float = GetByIndex(var_41_cvector, 2); // 0x1be PushE
	Rotate(var_297_float, var_298_float); // 0x1bf Func
	var_299_float = 0; var_300_float = 0; var_301_float = 0; // 0x1c1 PushV
	var_299_float = 1; // 0x1c2 MovI
	var_300_float = 0; // 0x1c3 MovI
	var_301_float = 0.75; // 0x1c4 MovF
	func_730(var_300_float, var_301_float); // 0x1c5 Call
	UnlockCamera(); // 0x1c7 Func
	func_718(); // 0x1ca Call
	func_706(); // 0x1cd Call
	var_306_object = Obj(); // 0x1cf PushV
	var_306_object = var_17_object; // 0x1d0 Mov
	func_587(var_306_object); // 0x1d1 Call
	return 24; // 0x1d3 Return
	
Label_383:
	goto Label_373; // 0x17f Jump
}


func_699(var_70_string, var_71_int)
{
	var_72_int = 0; var_73_int = 0; // 0x2bb PushV
	GetVariable(var_70_string, var_73_int); // 0x2bc Func
	var_74_int = var_73_int + var_71_int; // 0x2be Add
	SetVariable(var_70_string, var_74_int); // 0x2bf Func
	return 2; // 0x2c1 Return
}


