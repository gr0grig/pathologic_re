task_0_event_1(var_0_bool, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_bool, var_8_object)
{
	var_9_bool = 0; var_10_object = Obj(); // 0x13 PushV
	var_10_object = var_8_object; // 0x14 Mov
	func_1793(var_9_bool, var_10_object); // 0x15 Call
	if(var_9_bool == 0) goto Label_31; // 0x17 JumpB
	func_200(var_8_object); // 0x19 Call
	var_63_object = Obj(); // 0x1b PushV
	var_63_object = var_8_object; // 0x1c Mov
	func_1800(var_63_object); // 0x1d Call
	
Label_31:
	return 0; // 0x1f Return
}


task_0_event_3(var_0_bool, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_bool, var_8_object)
{
	var_9_bool = 0; var_10_object = Obj(); // 0x21 PushV
	var_10_object = var_8_object; // 0x22 Mov
	func_1806(var_9_bool, var_10_object); // 0x23 Call
	if(var_9_bool == 0) goto Label_45; // 0x25 JumpB
	func_200(var_8_object); // 0x27 Call
	var_63_object = Obj(); // 0x29 PushV
	var_63_object = var_8_object; // 0x2a Mov
	func_1813(var_63_object); // 0x2b Call
	
Label_45:
	return 0; // 0x2d Return
}


task_0_event_17(var_0_bool, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_bool, var_8_object)
{
	var_9_bool = 0; var_10_object = Obj(); // 0x2f PushV
	var_10_object = var_8_object; // 0x30 Mov
	func_1326(var_9_bool, var_10_object); // 0x31 Call
	var_43_bool = var_9_bool == 0; // 0x33 Not
	if(var_43_bool == 0) goto Label_58; // 0x34 JumpB
	var_44_object = Obj(); // 0x35 PushV
	var_44_object = var_8_object; // 0x36 Mov
	func_1861(var_44_object); // 0x37 Call
	return 0; // 0x39 Return
	
Label_58:
	func_200(var_8_object); // 0x3b Call
	var_55_object = Obj(); // 0x3d PushV
	var_55_object = var_8_object; // 0x3e Mov
	func_1878(var_55_object); // 0x3f Call
	return 0; // 0x41 Return
}


task_0_event_7(var_0_bool, var_1_object, var_2_int, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_bool, var_8_object)
{
	var_9_int = 0; // 0x43 PushV
	var_9_int = var_8_object; // 0x44 Mov
	func_178(var_7_bool, var_8_object, var_9_int); // 0x45 Call
	var_39_int = 0; // 0x47 PushV
	var_39_int = var_8_object; // 0x48 Mov
	func_1963(var_39_int); // 0x49 Call
	return 0; // 0x4b Return
}


task_0_event_10(var_0_bool, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_bool, var_8_object)
{
	RequestClearPath(var_8_object); // 0xc5 Func
	return 0; // 0xc7 Return
}


task_0_event_41(var_0_bool, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_bool, var_8_object)
{
	func_200(var_8_object); // 0xd1 Call
	var_10_object = Obj(); // 0xd3 PushV
	var_10_object = var_8_object; // 0xd4 Mov
	func_1917(); // 0xd5 Call
	return 0; // 0xd7 Return
}


task_1_event_17(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_bool, var_8_object)
{
	var_9_bool = 0; var_10_object = Obj(); // 0xec PushV
	var_10_object = var_8_object; // 0xed Mov
	func_1326(var_9_bool, var_10_object); // 0xee Call
	var_43_bool = var_9_bool == 0; // 0xf0 Not
	if(var_43_bool == 0) goto Label_243; // 0xf1 JumpB
	return 0; // 0xf2 Return
	
Label_243:
	var_2_bool = var_8_object; // 0xf3 TMov
	func_382(var_8_object); // 0xf5 Call
	return 0; // 0xf7 Return
}


task_1_event_7(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_bool, var_7_bool, var_8_object)
{
	var_9_int = 0; // 0xf9 PushV
	var_9_int = var_8_object; // 0xfa Mov
	func_360(var_7_bool, var_8_object, var_9_int); // 0xfb Call
	var_50_int = 0; // 0xfd PushV
	var_50_int = var_8_object; // 0xfe Mov
	func_1963(var_50_int); // 0xff Call
	return 0; // 0x101 Return
}


task_1_event_10(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_bool, var_8_object)
{
	RequestClearPath(var_8_object); // 0x17b Func
	return 0; // 0x17d Return
}


task_1_event_41(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_bool, var_8_object)
{
	func_382(var_8_object); // 0x187 Call
	var_10_object = Obj(); // 0x189 PushV
	var_10_object = var_8_object; // 0x18a Mov
	func_1917(); // 0x18b Call
	return 0; // 0x18d Return
}


task_2_event_1(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_object)
{
	var_9_bool = 0; var_10_object = Obj(); // 0x1a2 PushV
	var_10_object = var_8_object; // 0x1a3 Mov
	func_1793(var_9_bool, var_10_object); // 0x1a4 Call
	if(var_9_bool == 0) goto Label_431; // 0x1a6 JumpB
	func_560(var_7_object, var_8_object); // 0x1a8 Call
	var_62_object = Obj(); // 0x1aa PushV
	var_62_object = var_8_object; // 0x1ab Mov
	func_1800(var_62_object); // 0x1ac Call
	goto Label_443; // 0x1ae Jump
	
Label_443:
	return 0; // 0x1bb Return
	
Label_431:
	var_352_bool = 0; var_353_object = Obj(); // 0x1af PushV
	var_353_object = var_8_object; // 0x1b0 Mov
	func_1819(var_352_bool, var_353_object); // 0x1b1 Call
	if(var_352_bool == 0) goto Label_443; // 0x1b3 JumpB
	func_560(var_7_object, var_8_object); // 0x1b5 Call
	var_368_object = Obj(); // 0x1b7 PushV
	var_368_object = var_8_object; // 0x1b8 Mov
	func_1851(var_368_object); // 0x1b9 Call
}


task_2_event_3(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_object)
{
	var_9_bool = 0; var_10_object = Obj(); // 0x1bd PushV
	var_10_object = var_8_object; // 0x1be Mov
	func_1806(var_9_bool, var_10_object); // 0x1bf Call
	if(var_9_bool == 0) goto Label_457; // 0x1c1 JumpB
	func_560(var_7_object, var_8_object); // 0x1c3 Call
	var_62_object = Obj(); // 0x1c5 PushV
	var_62_object = var_8_object; // 0x1c6 Mov
	func_1813(var_62_object); // 0x1c7 Call
	
Label_457:
	return 0; // 0x1c9 Return
}


	task_2_event_17(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_43_object)
	{
	var_44_bool = 0; var_45_object = Obj(); // 0x1cb PushV
	var_45_object = var_43_object; // 0x1cc Mov
	func_1326(var_44_bool, var_45_object); // 0x1cd Call
	var_72_bool = var_44_bool == 0; // 0x1cf Not
	if(var_72_bool == 0) goto Label_470; // 0x1d0 JumpB
	var_73_object = Obj(); // 0x1d1 PushV
	var_73_object = var_43_object; // 0x1d2 Mov
	func_1861(var_73_object); // 0x1d3 Call
	return 0; // 0x1d5 Return
	
Label_470:
	func_560(var_9_object, var_43_object); // 0x1d7 Call
	var_83_object = Obj(); // 0x1d9 PushV
	var_83_object = var_43_object; // 0x1da Mov
	func_1878(var_83_object); // 0x1db Call
	return 0; // 0x1dd Return
	}


task_2_event_30(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object)
{
	var_10_bool = 0; var_11_object = Obj(); var_12_object = Obj(); // 0x1df PushV
	var_11_object = var_8_object; // 0x1e0 Mov
	var_12_object = var_9_object; // 0x1e1 Mov
	func_1923(var_10_bool, var_11_object, var_12_object); // 0x1e2 Call
	if(var_10_bool == 0) goto Label_489; // 0x1e4 JumpB
	var_43_object = Obj(); // 0x1e5 PushV
	var_43_object = var_8_object; // 0x1e6 Mov
	func_458(); // 0x1e7 Call
	
Label_489:
	return 0; // 0x1e9 Return
}


task_2_event_7(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_int, var_8_object)
{
	var_9_int = 0; // 0x1eb PushV
	var_9_int = var_8_object; // 0x1ec Mov
	func_1963(var_9_int); // 0x1ed Call
	return 0; // 0x1ef Return
}


task_2_event_10(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_object)
{
	RequestClearPath(var_8_object); // 0x22a Func
	return 0; // 0x22c Return
}


task_2_event_28(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_object)
{
	Stop(); // 0x22d Func
	return 0; // 0x22f Return
}


task_2_event_41(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_object)
{
	func_560(var_7_object, var_8_object); // 0x239 Call
	var_9_object = Obj(); // 0x23b PushV
	var_9_object = var_8_object; // 0x23c Mov
	func_1917(); // 0x23d Call
	return 0; // 0x23f Return
}


task_3_event_1(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_object)
{
	var_9_bool = 0; var_10_object = Obj(); // 0x243 PushV
	var_10_object = var_8_object; // 0x244 Mov
	func_1793(var_9_bool, var_10_object); // 0x245 Call
	if(var_9_bool == 0) goto Label_592; // 0x247 JumpB
	func_726(); // 0x249 Call
	var_62_object = Obj(); // 0x24b PushV
	var_62_object = var_8_object; // 0x24c Mov
	func_1800(var_62_object); // 0x24d Call
	goto Label_604; // 0x24f Jump
	
Label_604:
	return 0; // 0x25c Return
	
Label_592:
	var_352_bool = 0; var_353_object = Obj(); // 0x250 PushV
	var_353_object = var_8_object; // 0x251 Mov
	func_1819(var_352_bool, var_353_object); // 0x252 Call
	if(var_352_bool == 0) goto Label_604; // 0x254 JumpB
	func_726(); // 0x256 Call
	var_368_object = Obj(); // 0x258 PushV
	var_368_object = var_8_object; // 0x259 Mov
	func_1851(var_368_object); // 0x25a Call
}


task_3_event_3(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_object)
{
	var_9_bool = 0; var_10_object = Obj(); // 0x25e PushV
	var_10_object = var_8_object; // 0x25f Mov
	func_1806(var_9_bool, var_10_object); // 0x260 Call
	if(var_9_bool == 0) goto Label_618; // 0x262 JumpB
	func_726(); // 0x264 Call
	var_62_object = Obj(); // 0x266 PushV
	var_62_object = var_8_object; // 0x267 Mov
	func_1813(var_62_object); // 0x268 Call
	
Label_618:
	return 0; // 0x26a Return
}


	task_3_event_17(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_43_object)
	{
	var_44_bool = 0; var_45_object = Obj(); // 0x26c PushV
	var_45_object = var_43_object; // 0x26d Mov
	func_1326(var_44_bool, var_45_object); // 0x26e Call
	var_72_bool = var_44_bool == 0; // 0x270 Not
	if(var_72_bool == 0) goto Label_631; // 0x271 JumpB
	var_73_object = Obj(); // 0x272 PushV
	var_73_object = var_43_object; // 0x273 Mov
	func_1861(var_73_object); // 0x274 Call
	return 0; // 0x276 Return
	
Label_631:
	func_726(); // 0x278 Call
	var_83_object = Obj(); // 0x27a PushV
	var_83_object = var_43_object; // 0x27b Mov
	func_1878(var_83_object); // 0x27c Call
	return 0; // 0x27e Return
	}


task_3_event_30(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object)
{
	var_10_bool = 0; var_11_object = Obj(); var_12_object = Obj(); // 0x280 PushV
	var_11_object = var_8_object; // 0x281 Mov
	var_12_object = var_9_object; // 0x282 Mov
	func_1923(var_10_bool, var_11_object, var_12_object); // 0x283 Call
	if(var_10_bool == 0) goto Label_650; // 0x285 JumpB
	var_43_object = Obj(); // 0x286 PushV
	var_43_object = var_8_object; // 0x287 Mov
	func_619(); // 0x288 Call
	
Label_650:
	return 0; // 0x28a Return
}


task_3_event_7(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_int, var_8_object)
{
	var_9_int = 0; // 0x28c PushV
	var_9_int = var_8_object; // 0x28d Mov
	func_1963(var_9_int); // 0x28e Call
	return 0; // 0x290 Return
}


task_4_event_17(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_object)
{
	var_9_object = Obj(); // 0x34f PushV
	var_9_object = var_8_object; // 0x350 Mov
	func_1861(var_9_object); // 0x351 Call
	var_19_bool = var_8_object != 0; // 0x353 NullNeq
	if(var_19_bool == 0) goto Label_856; // 0x354 JumpB
	var_0_bool = var_8_object; // 0x355 TMov
	Face(var_0_bool); // 0x356 Func
	
Label_856:
	return 0; // 0x358 Return
}


task_4_event_7(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_int)
{
	var_9_int = 0; // 0x35a PushV
	var_9_int = var_8_int; // 0x35b Mov
	func_1963(var_9_int); // 0x35c Call
	return 0; // 0x35e Return
}


task_5_event_0(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_object)
{
	var_9_bool = 0; var_10_bool = 0; // 0x381 PushV
	IsOverrideActive(var_10_bool); // 0x382 Func
	var_11_bool = var_10_bool == 0; // 0x384 Not
	if(var_11_bool == 0) goto Label_904; // 0x385 JumpB
	WorkWithCorpse(var_8_object); // 0x386 Func
	
Label_904:
	return 2; // 0x388 Return
}


task_5_event_22(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_float, var_11_float)
{
	return 0; // 0x3f7 Return
}


task_5_event_16(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_string)
{
	return 0; // 0x3f9 Return
}


task_5_event_41(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_object)
{
	return 0; // 0x3fb Return
}


task_6_event_41(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_object)
{
	func_1121(); // 0x46c Call
	var_42_object = Obj(); // 0x46e PushV
	var_42_object = var_8_object; // 0x46f Mov
	func_1917(); // 0x470 Call
	return 0; // 0x472 Return
}


task_6_event_1(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_object)
{
	var_9_bool = 0; var_10_object = Obj(); // 0x474 PushV
	var_10_object = var_8_object; // 0x475 Mov
	func_1793(var_9_bool, var_10_object); // 0x476 Call
	if(var_9_bool == 0) goto Label_1152; // 0x478 JumpB
	func_1121(); // 0x47a Call
	var_95_object = Obj(); // 0x47c PushV
	var_95_object = var_8_object; // 0x47d Mov
	func_1800(var_95_object); // 0x47e Call
	
Label_1152:
	return 0; // 0x480 Return
}


task_6_event_3(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_object)
{
	var_9_bool = 0; var_10_object = Obj(); // 0x482 PushV
	var_10_object = var_8_object; // 0x483 Mov
	func_1806(var_9_bool, var_10_object); // 0x484 Call
	if(var_9_bool == 0) goto Label_1166; // 0x486 JumpB
	func_1121(); // 0x488 Call
	var_95_object = Obj(); // 0x48a PushV
	var_95_object = var_8_object; // 0x48b Mov
	func_1813(var_95_object); // 0x48c Call
	
Label_1166:
	return 0; // 0x48e Return
}


task_6_event_17(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_object)
{
	var_9_bool = 0; var_10_object = Obj(); // 0x490 PushV
	var_10_object = var_8_object; // 0x491 Mov
	func_1326(var_9_bool, var_10_object); // 0x492 Call
	var_43_bool = var_9_bool == 0; // 0x494 Not
	if(var_43_bool == 0) goto Label_1179; // 0x495 JumpB
	var_44_object = Obj(); // 0x496 PushV
	var_44_object = var_8_object; // 0x497 Mov
	func_1861(var_44_object); // 0x498 Call
	return 0; // 0x49a Return
	
Label_1179:
	func_1121(); // 0x49c Call
	var_87_object = Obj(); // 0x49e PushV
	var_87_object = var_8_object; // 0x49f Mov
	func_1878(var_87_object); // 0x4a0 Call
	return 0; // 0x4a2 Return
}


task_6_event_7(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_int)
{
	var_9_int = 0; // 0x4a4 PushV
	var_9_int = var_8_int; // 0x4a5 Mov
	func_1963(var_9_int); // 0x4a6 Call
	return 0; // 0x4a8 Return
}


event_22(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_float, var_11_float)
{
	var_12_object = Obj(); var_13_int = 0; var_14_float = 0; // 0x769 PushV
	var_12_object = var_8_object; // 0x76a Mov
	var_13_int = var_9_int; // 0x76b Mov
	var_14_float = var_10_float; // 0x76c Mov
	func_1384(var_13_int, var_14_float); // 0x76d Call
	return 0; // 0x76f Return
}


event_16(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_string)
{
	var_10_float = 0; var_11_float = 0; // 0x770 PushV
	var_12_string = "health"; // 0x771 PushS
	var_13_bool = var_9_string == var_12_string; // 0x772 Eq
	if(var_13_bool == 0) goto Label_1916; // 0x773 JumpB
	var_14_string = "health"; // 0x774 PushS
	GetProperty(var_14_string, var_11_float); // 0x775 Func
	var_15_int = 0; // 0x777 PushI
	var_16_bool = var_11_float <= var_15_int; // 0x778 LE
	if(var_16_bool == 0) goto Label_1916; // 0x779 JumpB
	SignalDeath(var_8_object); // 0x77a Func
	
Label_1916:
	return 2; // 0x77c Return
}


event_41(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_object)
{
	var_9_object = Obj(); // 0x77e PushV
	var_9_object = var_8_object; // 0x77f Mov
	func_1888(var_9_object); // 0x780 Call
	return 0; // 0x782 Return
}


main(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_object)
{
	func_1582(); // 0x19a Call
	
Label_412:
	func_496(var_6_bool, var_7_object); // 0x19d Call
	goto Label_412; // 0x19f Jump
}


func_2048(var_100_bool, var_101_object)
{
	var_102_bool = 0; var_103_object = Obj(); // 0x801 PushV
	var_103_object = var_101_object; // 0x802 Mov
	func_1729(var_102_bool, var_103_object); // 0x803 Call
	var_100_bool = var_102_bool; // 0x804 Mov
	return 0; // 0x806 Return
}


func_1793(var_9_bool, var_10_object)
{
	var_11_bool = 0; var_12_object = Obj(); // 0x702 PushV
	var_12_object = var_10_object; // 0x703 Mov
	func_2048(var_11_bool, var_12_object); // 0x704 Call
	var_9_bool = var_11_bool; // 0x705 Mov
	return 0; // 0x707 Return
}


func_258(var_0_bool, var_1_object, var_148_bool, var_149_object, var_150_float, var_151_float, var_152_bool, var_153_bool)
{
	var_154_bool = 0; var_155_bool = 0; var_156_object = Obj(); var_157_cvector = CVector(0,0,0); var_158_cvector = CVector(0,0,0); var_159_cvector = CVector(0,0,0); var_160_float = 0; var_161_object = Obj(); var_162_bool = 0; var_163_bool = 0; var_164_object = Obj(); var_165_cvector = CVector(0,0,0); var_166_cvector = CVector(0,0,0); var_167_cvector = CVector(0,0,0); var_168_float = 0; var_169_object = Obj(); // 0x102 PushV
	var_0_bool = 0; // 0x103 TMovB
	var_1_object = var_149_object; // 0x104 TMov
	var_163_bool = var_153_bool; // 0x105 Mov
	
Label_262:
	var_170_bool = 0; var_171_object = Obj(); // 0x106 PushV
	var_171_object = var_149_object; // 0x107 Mov
	func_398(var_170_bool, var_171_object); // 0x108 Call
	var_174_bool = var_170_bool == 0; // 0x10a Not
	if(var_174_bool == 0) goto Label_270; // 0x10b JumpB
	var_148_bool = 0; // 0x10c MovB
	return 16; // 0x10d Return
	
Label_270:
	GetPosition(var_165_cvector); // 0x10e ObjFunc
	GetPosition(var_166_cvector); // 0x110 Func
	var_167_cvector = var_165_cvector - var_166_cvector; // 0x112 Sub2
	var_168_float = var_167_cvector | var_167_cvector; // 0x113 Or2
	var_175_bool = 0; // 0x114 PushV
	var_175_bool = 0; // 0x115 MovB
	var_176_int = 0; // 0x116 PushI
	var_177_bool = var_151_float > var_176_int; // 0x117 GT
	if(var_177_bool == 0) goto Label_285; // 0x118 JumpB
	var_178_float = var_151_float * var_151_float; // 0x119 Mult
	var_179_bool = var_168_float > var_178_float; // 0x11a GT
	if(var_179_bool == 0) goto Label_285; // 0x11b JumpB
	var_175_bool = 1; // 0x11c MovB
	
Label_285:
	if(var_175_bool == 0) goto Label_290; // 0x11d JumpB
	Stop(); // 0x11e Func
	var_148_bool = 0; // 0x120 MovB
	return 16; // 0x121 Return
	
Label_290:
	var_180_float = var_150_float * var_150_float; // 0x122 Mult
	var_181_bool = var_168_float > var_180_float; // 0x123 GT
	if(var_181_bool == 0) goto Label_352; // 0x124 JumpB
	GetPFPosition(var_165_cvector); // 0x125 ObjFunc
	FindPathTo(var_169_object, var_165_cvector); // 0x127 Func
	var_182_bool = var_169_object != 0; // 0x129 NullNeq
	if(var_182_bool == 0) goto Label_301; // 0x12a JumpB
	var_164_object = var_169_object; // 0x12b Mov
	var_169_object = 0; // 0x12c SetNull
	
Label_301:
	var_183_bool = var_164_object != 0; // 0x12d NullNeq
	if(var_183_bool == 0) goto Label_334; // 0x12e JumpB
	var_184_bool = var_163_bool; // 0x12f Push
	if(var_184_bool == 0) goto Label_311; // 0x130 JumpB
	var_163_bool = 0; // 0x131 MovB
	RotatePath(var_164_object, var_162_bool); // 0x132 Func
	var_185_bool = var_162_bool == 0; // 0x134 Not
	if(var_185_bool == 0) goto Label_311; // 0x135 JumpB
	goto Label_358; // 0x136 Jump
	
Label_358:
	var_148_bool = !var_0_bool; // 0x166 Not2
	return 16; // 0x167 Return
	
Label_311:
	var_186_int = 0; // 0x137 PushI
	var_187_float = 0.3; // 0x138 PushF
	SetTimer(var_186_int, var_187_float); // 0x139 Func
	var_188_string = ""; // 0x13b PushV
	func_405(var_188_string); // 0x13c Call
	var_189_string = ""; // 0x13e PushV
	func_407(var_189_string); // 0x13f Call
	FollowPath(var_164_object, var_152_bool, var_162_bool, var_188_string, var_189_string); // 0x141 Func
	var_190_bool = var_162_bool == 0; // 0x143 Not
	if(var_190_bool == 0) goto Label_332; // 0x144 JumpB
	var_191_bool = var_0_bool; // 0x145 PushT
	if(var_191_bool == 0) goto Label_330; // 0x146 JumpB
	var_164_object = 0; // 0x147 SetNull
	goto Label_358; // 0x148 Jump
	
Label_330:
	goto Label_357; // 0x14a Jump
	
Label_357:
	goto Label_262; // 0x165 Jump
	
Label_332:
	var_164_object = 0; // 0x14c SetNull
	goto Label_350; // 0x14d Jump
	
Label_350:
	var_169_object = 0; // 0x15e SetNull
	goto Label_356; // 0x15f Jump
	
Label_356:
	var_164_object = 0; // 0x164 SetNull
	
Label_334:
	var_192_int = 0; // 0x14e PushI
	KillTimer(var_192_int); // 0x14f Func
	var_193_float = 0.5; // 0x151 PushF
	Sleep(var_193_float, var_162_bool); // 0x152 Func
	var_194_bool = var_162_bool == 0; // 0x154 Not
	if(var_194_bool == 0) goto Label_346; // 0x155 JumpB
	var_195_bool = var_0_bool; // 0x156 PushT
	if(var_195_bool == 0) goto Label_346; // 0x157 JumpB
	var_164_object = 0; // 0x158 SetNull
	goto Label_358; // 0x159 Jump
	
Label_346:
	var_196_int = 0; // 0x15a PushI
	var_197_float = 0.3; // 0x15b PushF
	SetTimer(var_196_int, var_197_float); // 0x15c Func
	
Label_352:
	var_198_int = 0; // 0x160 PushI
	KillTimer(var_198_int); // 0x161 Func
	goto Label_358; // 0x163 Jump
}


func_1923(var_10_bool, var_11_object, var_12_object)
{
	var_13_float = 0; var_14_bool = 0; var_15_float = 0; var_16_bool = 0; // 0x783 PushV
	var_17_bool = 0; var_18_object = Obj(); var_19_string = ""; // 0x784 PushV
	var_18_object = var_12_object; // 0x785 Mov
	var_19_string = "reputation"; // 0x786 MovS
	func_1209(var_17_bool, var_18_object, var_19_string); // 0x787 Call
	var_26_bool = var_17_bool == 0; // 0x789 Not
	if(var_26_bool == 0) goto Label_1933; // 0x78a JumpB
	var_10_bool = 0; // 0x78b MovB
	return 4; // 0x78c Return
	
Label_1933:
	var_27_string = "reputation"; // 0x78d PushS
	GetProperty(var_27_string, var_15_float); // 0x78e ObjFunc
	var_28_float = 0.5; // 0x790 PushF
	var_29_bool = var_15_float < var_28_float; // 0x791 LT
	if(var_29_bool == 0) goto Label_1941; // 0x792 JumpB
	var_10_bool = 0; // 0x793 MovB
	return 4; // 0x794 Return
	
Label_1941:
	CanSee(var_16_bool, var_11_object); // 0x795 Func
	var_30_bool = 0; // 0x797 PushV
	var_30_bool = 1; // 0x798 MovB
	var_31_bool = var_16_bool; // 0x799 Push
	if(var_31_bool == 0) goto Label_1955; // 0x79a JumpB
	var_32_float = 0; var_33_object = Obj(); // 0x79b PushV
	var_33_object = var_11_object; // 0x79c Mov
	func_1201(var_33_object); // 0x79d Call
	var_40_float = 160000.0; // 0x79f PushF
	var_41_bool = var_32_float <= var_40_float; // 0x7a0 LE
	if(var_41_bool == 0) goto Label_1955; // 0x7a1 JumpB
	var_30_bool = 0; // 0x7a2 MovB
	
Label_1955:
	if(var_30_bool == 0) goto Label_1961; // 0x7a3 JumpB
	var_42_float = -0.2; // 0x7a4 PushF
	ReportReputationChange(var_11_object, var_12_object, var_42_float); // 0x7a5 Func
	var_10_bool = 1; // 0x7a7 MovB
	return 4; // 0x7a8 Return
	
Label_1961:
	var_10_bool = 0; // 0x7a9 MovB
	return 4; // 0x7aa Return
}


func_1540()
{
	var_46_int = 0; var_47_bool = 0; var_48_int = 0; var_49_bool = 0; // 0x604 PushV
	var_50_int = 0; // 0x605 PushI
	ClearSubContainer(var_50_int); // 0x606 Func
	var_51_int = 0; var_52_int = 0; // 0x608 PushV
	var_51_int = 600; // 0x609 MovI
	var_52_int = 1500; // 0x60a MovI
	func_1510(var_51_int, var_52_int); // 0x60b Call
	var_71_int = 200; // 0x60d PushI
	irand(var_48_int, var_71_int); // 0x60e Func
	var_72_int = 0; // 0x610 PushI
	var_73_bool = var_48_int != var_72_int; // 0x611 Neq
	if(var_73_bool == 0) goto Label_1562; // 0x612 JumpB
	var_74_int = 0; var_75_string = ""; // 0x613 PushV
	var_75_string = "ognemet_ammo"; // 0x614 MovS
	func_1577(var_74_int, var_75_string); // 0x615 Call
	var_78_int = 0; // 0x617 PushI
	AddItem(var_49_bool, var_74_int, var_78_int, var_48_int); // 0x618 Func
	
Label_1562:
	var_79_int = 3; // 0x61a PushI
	irand(var_48_int, var_79_int); // 0x61b Func
	var_80_int = 0; // 0x61d PushI
	var_81_bool = var_48_int == var_80_int; // 0x61e Eq
	if(var_81_bool == 0) goto Label_1576; // 0x61f JumpB
	var_82_int = 0; var_83_string = ""; // 0x620 PushV
	var_83_string = "rusk"; // 0x621 MovS
	func_1577(var_82_int, var_83_string); // 0x622 Call
	var_84_int = 0; // 0x624 PushI
	var_85_int = 1; // 0x625 PushI
	AddItem(var_49_bool, var_82_int, var_84_int, var_85_int); // 0x626 Func
	
Label_1576:
	return 4; // 0x628 Return
}


func_0(var_276_bool, var_277_object)
{
	var_280_bool = 0; var_281_object = Obj(); var_282_float = 0; var_283_float = 0; var_284_bool = 0; var_285_bool = 0; // 0x1 PushV
	var_281_object = var_277_object; // 0x2 Mov
	var_282_float = 350; // 0x3 MovI
	var_283_float = 5000; // 0x4 MovI
	var_284_bool = 0; // 0x5 MovB
	var_285_bool = 1; // 0x6 MovB
	func_76(var_276_bool, var_277_object, var_280_bool, var_281_object, var_282_float, var_283_float, var_284_bool, var_285_bool); // 0x7 Call
	var_276_bool = var_280_bool; // 0x8 Mov
	return 0; // 0xa Return
}


func_1285(var_24_bool)
{
	var_26_bool = 0; var_27_bool = 0; // 0x505 PushV
	IsDead(var_27_bool); // 0x506 ObjFunc
	var_24_bool = var_27_bool; // 0x508 Mov
	return 2; // 0x509 Return
}


func_1800(var_95_object)
{
	var_96_object = Obj(); // 0x709 PushV
	var_96_object = var_95_object; // 0x70a Mov
	func_1760(var_95_object, var_96_object); // 0x70b Call
	return 0; // 0x70d Return
}


func_905(var_87_object)
{
	var_88_cvector = CVector(0,0,0); var_89_cvector = CVector(0,0,0); var_90_cvector = CVector(0,0,0); var_91_cvector = CVector(0,0,0); var_92_string = ""; var_93_object = Obj(); var_94_bool = 0; var_95_bool = 0; var_96_float = 0; var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0); var_99_cvector = CVector(0,0,0); var_100_cvector = CVector(0,0,0); var_101_cvector = CVector(0,0,0); var_102_string = ""; var_103_object = Obj(); var_104_bool = 0; var_105_bool = 0; var_106_float = 0; var_107_cvector = CVector(0,0,0); // 0x389 PushV
	var_108_bool = var_87_object == 0; // 0x38a NullEq
	if(var_108_bool == 0) goto Label_913; // 0x38b JumpB
	var_109_string = ""; // 0x38c PushV
	var_109_string = "fdie"; // 0x38d MovS
	func_992(var_109_string); // 0x38e Call
	goto Label_991; // 0x390 Jump
	
Label_991:
	return 20; // 0x3df Return
	
Label_913:
	GetPosition(var_98_cvector); // 0x391 ObjFunc
	GetPosition(var_99_cvector); // 0x393 Func
	GetDirection(var_100_cvector); // 0x395 Func
	var_101_cvector = var_99_cvector - var_98_cvector; // 0x397 Sub2
	var_112_float = GetByIndex(var_101_cvector, 0); // 0x398 PushE
	var_113_float = GetByIndex(var_100_cvector, 0); // 0x399 PushE
	var_114_float = var_112_float * var_113_float; // 0x39a Mult
	var_115_float = GetByIndex(var_101_cvector, 2); // 0x39b PushE
	var_116_float = GetByIndex(var_100_cvector, 2); // 0x39c PushE
	var_117_float = var_115_float * var_116_float; // 0x39d Mult
	var_118_int = var_114_float + var_117_float; // 0x39e Add
	var_119_int = 0; // 0x39f PushI
	var_120_bool = var_118_int >= var_119_int; // 0x3a0 GE
	if(var_120_bool == 0) goto Label_932; // 0x3a1 JumpB
	var_102_string = "fdie"; // 0x3a2 MovS
	goto Label_933; // 0x3a3 Jump
	
Label_933:
	RemoveRTEnvelope(); // 0x3a5 Func
	SetDeathState(); // 0x3a7 Func
	Stop(); // 0x3a9 Func
	StopAsync(); // 0x3ab Func
	var_103_object = var_87_object; // 0x3ad Mov
	var_121_string = "GetScriptProperty"; // 0x3ae PushS
	var_122_int = 2; // 0x3af PushI
	var_123_bool = IsFuncExist(var_87_object, var_121_string, var_122_int); // 0x3b0 FuncExist
	if(var_123_bool == 0) goto Label_957; // 0x3b1 JumpB
	var_124_string = "Owner"; // 0x3b2 PushS
	HasScriptProperty(var_104_bool, var_124_string); // 0x3b3 ObjFunc
	var_125_bool = var_104_bool; // 0x3b5 Push
	if(var_125_bool == 0) goto Label_957; // 0x3b6 JumpB
	var_126_string = "Owner"; // 0x3b7 PushS
	GetScriptProperty(var_103_object, var_126_string); // 0x3b8 ObjFunc
	var_127_bool = var_103_object == 0; // 0x3ba NullEq
	if(var_127_bool == 0) goto Label_957; // 0x3bb JumpB
	var_103_object = var_87_object; // 0x3bc Mov
	
Label_957:
	var_128_string = "@GetEyesHeight"; // 0x3bd PushS
	var_129_int = 1; // 0x3be PushI
	var_130_bool = IsFuncExist(var_103_object, var_128_string, var_129_int); // 0x3bf FuncExist
	if(var_130_bool == 0) goto Label_972; // 0x3c0 JumpB
	GetEyesHeight(var_106_float); // 0x3c1 ObjFunc
	var_107_cvector = CVector(0.0, 0.0, 0.0); // 0x3c3 MovV
	var_131_float = GetByIndex(var_107_cvector, 1); // 0x3c4 PushE
	var_131_float = var_106_float; // 0x3c5 Mov
	SetByIndex(var_107_cvector, 1) = var_131_float; // 0x3c6 PopE
	var_132_string = "head"; // 0x3c7 PushS
	LookAsync(var_87_object, var_132_string, var_107_cvector); // 0x3c8 Func
	var_105_bool = 1; // 0x3ca MovB
	goto Label_973; // 0x3cb Jump
	
Label_973:
	var_133_string = "all"; // 0x3cd PushS
	PlayAnimation(var_133_string, var_102_string); // 0x3ce Func
	WaitForAnimEnd(); // 0x3d0 Func
	var_134_bool = var_105_bool; // 0x3d2 Push
	if(var_134_bool == 0) goto Label_985; // 0x3d3 JumpB
	StopAsync(); // 0x3d4 Func
	var_135_string = "head"; // 0x3d6 PushS
	UnlookAsync(var_135_string); // 0x3d7 Func
	
Label_985:
	var_136_string = "all"; // 0x3d9 PushS
	LockAnimationEnd(var_136_string, var_102_string); // 0x3da Func
	RemoveEnvelope(); // 0x3dc Func
	var_103_object = 0; // 0x3de SetNull
	
Label_972:
	var_105_bool = 0; // 0x3cc MovB
	
Label_932:
	var_102_string = "bdie"; // 0x3a4 MovS
}


func_1290(var_13_bool, var_14_object)
{
	var_15_object = Obj(); var_16_object = Obj(); var_17_object = Obj(); var_18_object = Obj(); // 0x50a PushV
	var_19_bool = var_14_object == 0; // 0x50b NullEq
	if(var_19_bool == 0) goto Label_1295; // 0x50c JumpB
	var_13_bool = 0; // 0x50d MovB
	return 4; // 0x50e Return
	
Label_1295:
	var_20_bool = 0; // 0x50f PushV
	var_20_bool = 0; // 0x510 MovB
	var_21_string = "IsDead"; // 0x511 PushS
	var_22_int = 1; // 0x512 PushI
	var_23_bool = IsFuncExist(var_14_object, var_21_string, var_22_int); // 0x513 FuncExist
	if(var_23_bool == 0) goto Label_1307; // 0x514 JumpB
	var_24_bool = 0; var_25_object = Obj(); // 0x515 PushV
	var_25_object = var_14_object; // 0x516 Mov
	func_1285(var_25_object); // 0x517 Call
	if(var_24_bool == 0) goto Label_1307; // 0x519 JumpB
	var_20_bool = 1; // 0x51a MovB
	
Label_1307:
	if(var_20_bool == 0) goto Label_1310; // 0x51b JumpB
	var_13_bool = 0; // 0x51c MovB
	return 4; // 0x51d Return
	
Label_1310:
	GetScene(var_17_object); // 0x51e Func
	var_28_bool = var_17_object == 0; // 0x520 NullEq
	if(var_28_bool == 0) goto Label_1316; // 0x521 JumpB
	var_13_bool = 0; // 0x522 MovB
	return 4; // 0x523 Return
	
Label_1316:
	GetScene(var_18_object); // 0x524 ObjFunc
	var_29_bool = var_17_object != var_18_object; // 0x526 Neq
	if(var_29_bool == 0) goto Label_1322; // 0x527 JumpB
	var_13_bool = 0; // 0x528 MovB
	return 4; // 0x529 Return
	
Label_1322:
	var_13_bool = 1; // 0x52a MovB
	return 4; // 0x52b Return
}


func_11(var_302_bool, var_303_object)
{
	var_304_bool = 0; var_305_object = Obj(); // 0xc PushV
	var_305_object = var_303_object; // 0xd Mov
	func_1350(var_304_bool, var_305_object); // 0xe Call
	var_302_bool = var_304_bool; // 0xf Mov
	return 0; // 0x11 Return
}


func_1806(var_9_bool, var_10_object)
{
	var_11_bool = 0; var_12_object = Obj(); // 0x70f PushV
	var_12_object = var_10_object; // 0x710 Mov
	func_2048(var_11_bool, var_12_object); // 0x711 Call
	var_9_bool = var_11_bool; // 0x712 Mov
	return 0; // 0x714 Return
}


func_398(var_170_bool, var_171_object)
{
	var_172_bool = 0; var_173_object = Obj(); // 0x18f PushV
	var_173_object = var_171_object; // 0x190 Mov
	func_1326(var_172_bool, var_173_object); // 0x191 Call
	var_170_bool = var_172_bool; // 0x192 Mov
	return 0; // 0x194 Return
}


func_1679(var_221_cvector)
{
	var_222_cvector = CVector(0,0,0); var_223_float = 0; var_224_cvector = CVector(0,0,0); var_225_float = 0; var_226_bool = 0; var_227_cvector = CVector(0,0,0); var_228_float = 0; var_229_cvector = CVector(0,0,0); var_230_float = 0; var_231_bool = 0; // 0x68f PushV
	GetPosition(var_227_cvector); // 0x690 Func
	GetHeight(var_228_float); // 0x692 Func
	var_232_float = GetByIndex(var_227_cvector, 1); // 0x694 PushE
	var_233_int = 2; // 0x695 PushI
	var_234_float = var_228_float / var_233_int; // 0x696 Div
	var_232_float = var_232_float + var_234_float; // 0x697 Add2
	SetByIndex(var_227_cvector, 1) = var_232_float; // 0x698 PopE
	var_229_cvector = var_221_cvector - var_227_cvector; // 0x699 Sub2
	var_235_int = var_229_cvector | var_229_cvector; // 0x69a Or
	var_230_float = sqrt(var_235_int); // 0x69b Sqrt2
	var_236_int = 50; // 0x69c PushI
	var_237_bool = var_230_float < var_236_int; // 0x69d LT
	if(var_237_bool == 0) goto Label_1697; // 0x69e JumpB
	var_231_bool = 0; // 0x69f MovB
	goto Label_1701; // 0x6a0 Jump
	
Label_1701:
	var_238_string = "all"; // 0x6a5 PushS
	var_239_bool = var_231_bool; // 0x6a6 Push
	if(var_239_bool == 0) goto Label_1706; // 0x6a7 JumpB
	var_240_string = "cattack"; // 0x6a8 PushS
	goto Label_1707; // 0x6a9 Jump
	
Label_1707:
	PlayAnimation(var_238_string, var_240_string); // 0x6ab Func
	return 10; // 0x6ad Return
	
Label_1706:
	var_241_string = "attack"; // 0x6aa PushS
	
Label_1697:
	var_242_float = GetByIndex(var_229_cvector, 1); // 0x6a1 PushE
	var_243_float = var_242_float / var_230_float; // 0x6a2 Div
	var_244_float = -0.14286; // 0x6a3 PushF
	var_231_bool = var_243_float < var_244_float; // 0x6a4 LT2
}


func_657()
{
	var_54_int = 0; var_55_int = 0; var_56_int = 0; var_57_int = 0; var_58_bool = 0; var_59_float = 0; var_60_bool = 0; var_61_int = 0; var_62_int = 0; var_63_int = 0; var_64_int = 0; var_65_bool = 0; var_66_float = 0; var_67_bool = 0; // 0x291 PushV
	WaitForAnimEnd(); // 0x292 Func
	var_68_bool = 0; // 0x294 PushV
	func_1451(var_68_bool); // 0x295 Call
	var_71_bool = var_68_bool == 0; // 0x297 Not
	if(var_71_bool == 0) goto Label_666; // 0x298 JumpB
	return 14; // 0x299 Return
	
Label_666:
	var_72_int = 0; // 0x29a PushV
	func_1493(var_72_int); // 0x29b Call
	var_61_int = var_72_int; // 0x29c Mov
	var_62_int = 0; // 0x29e MovI
	
Label_671:
	var_85_bool = 0; // 0x29f PushV
	var_85_bool = 0; // 0x2a0 MovB
	var_86_int = 5; // 0x2a1 PushI
	var_87_bool = var_62_int < var_86_int; // 0x2a2 LT
	if(var_87_bool == 0) goto Label_681; // 0x2a3 JumpB
	var_88_bool = 0; // 0x2a4 PushV
	func_1451(var_88_bool); // 0x2a5 Call
	if(var_88_bool == 0) goto Label_681; // 0x2a7 JumpB
	var_85_bool = 1; // 0x2a8 MovB
	
Label_681:
	if(var_85_bool == 0) goto Label_725; // 0x2a9 JumpB
	var_89_int = 3; // 0x2aa PushI
	irand(var_63_int, var_89_int); // 0x2ab Func
	var_90_int = 0; // 0x2ad PushI
	var_91_bool = var_63_int == var_90_int; // 0x2ae Eq
	if(var_91_bool == 0) goto Label_705; // 0x2af JumpB
	var_92_int = var_61_int; // 0x2b0 Push
	if(var_92_int == 0) goto Label_704; // 0x2b1 JumpB
	irand(var_64_int, var_61_int); // 0x2b2 Func
	var_93_string = "all"; // 0x2b4 PushS
	var_94_string = ""; var_95_int = 0; // 0x2b5 PushV
	var_95_int = var_64_int; // 0x2b6 Mov
	func_1486(var_94_string, var_95_int); // 0x2b7 Call
	PlayAnimation(var_93_string, var_94_string); // 0x2b9 Func
	WaitForAnimEnd(var_65_bool); // 0x2bb Func
	var_96_bool = var_65_bool == 0; // 0x2bd Not
	if(var_96_bool == 0) goto Label_704; // 0x2be JumpB
	goto Label_725; // 0x2bf Jump
	
Label_725:
	return 14; // 0x2d5 Return
	
Label_704:
	goto Label_722; // 0x2c0 Jump
	
Label_722:
	var_97_int = 1; // 0x2d2 PushI
	var_62_int = var_62_int + var_97_int; // 0x2d3 Add2
	goto Label_671; // 0x2d4 Jump
	
Label_705:
	var_98_int = 1; // 0x2c1 PushI
	var_99_bool = var_63_int == var_98_int; // 0x2c2 Eq
	if(var_99_bool == 0) goto Label_719; // 0x2c3 JumpB
	var_100_int = 4; // 0x2c4 PushI
	rand(var_66_float, var_100_int); // 0x2c5 Func
	var_101_int = 1; // 0x2c7 PushI
	var_102_int = var_66_float + var_101_int; // 0x2c8 Add
	Sleep(var_102_int, var_67_bool); // 0x2c9 Func
	var_103_bool = var_67_bool == 0; // 0x2cb Not
	if(var_103_bool == 0) goto Label_718; // 0x2cc JumpB
	goto Label_725; // 0x2cd Jump
	
Label_718:
	goto Label_722; // 0x2ce Jump
	
Label_719:
	var_104_int = var_62_int; // 0x2cf Push
	if(var_104_int == 0) goto Label_722; // 0x2d0 JumpB
	goto Label_725; // 0x2d1 Jump
}


func_1813(var_95_object)
{
	var_96_object = Obj(); // 0x716 PushV
	var_96_object = var_95_object; // 0x717 Mov
	func_1760(var_95_object, var_96_object); // 0x718 Call
	return 0; // 0x71a Return
}


func_405(var_188_string)
{
	var_188_string = "walk"; // 0x195 MovS
	return 0; // 0x196 Return
}


func_407(var_189_string)
{
	var_189_string = "run"; // 0x197 MovS
	return 0; // 0x198 Return
}


func_1819(var_352_bool, var_353_object)
{
	var_354_float = 0; var_355_float = 0; // 0x71b PushV
	var_356_bool = 0; // 0x71c PushV
	var_356_bool = 1; // 0x71d MovB
	var_357_bool = 0; // 0x71e PushV
	var_357_bool = 1; // 0x71f MovB
	var_358_bool = var_353_object == 0; // 0x720 NullEq
	if(var_358_bool == 0) goto Label_1833; // 0x721 JumpB
	var_359_bool = 0; var_360_object = Obj(); // 0x722 PushV
	var_360_object = var_353_object; // 0x723 Mov
	func_1285(var_360_object); // 0x724 Call
	var_361_bool = var_359_bool == 0; // 0x726 Not
	if(var_361_bool == 0) goto Label_1833; // 0x727 JumpB
	var_357_bool = 0; // 0x728 MovB
	
Label_1833:
	if(var_357_bool == 0) goto Label_1842; // 0x729 JumpB
	var_362_bool = 0; var_363_object = Obj(); var_364_string = ""; // 0x72a PushV
	var_363_object = var_353_object; // 0x72b Mov
	var_364_string = "disease"; // 0x72c MovS
	func_1209(var_362_bool, var_363_object, var_364_string); // 0x72d Call
	var_365_bool = var_362_bool == 0; // 0x72f Not
	if(var_365_bool == 0) goto Label_1842; // 0x730 JumpB
	var_356_bool = 0; // 0x731 MovB
	
Label_1842:
	if(var_356_bool == 0) goto Label_1845; // 0x732 JumpB
	var_352_bool = 0; // 0x733 MovB
	return 2; // 0x734 Return
	
Label_1845:
	var_366_string = "disease"; // 0x735 PushS
	GetProperty(var_366_string, var_355_float); // 0x736 ObjFunc
	var_367_int = 0; // 0x738 PushI
	var_352_bool = var_355_float > var_367_int; // 0x739 GT2
	return 2; // 0x73a Return
}


func_1193(var_74_string, var_75_int)
{
	var_76_int = 1; // 0x4aa PushI
	var_77_bool = var_75_int == var_76_int; // 0x4ab Eq
	if(var_77_bool == 0) goto Label_1199; // 0x4ac JumpB
	var_74_string = "fire"; // 0x4ad MovS
	return 0; // 0x4ae Return
	
Label_1199:
	var_74_string = "phys"; // 0x4af MovS
	return 0; // 0x4b0 Return
}


func_1577(var_74_int, var_75_string)
{
	var_76_int = 0; var_77_int = 0; // 0x629 PushV
	GetInvItemByName(var_77_int, var_75_string); // 0x62a Func
	var_74_int = var_77_int; // 0x62c Mov
	return 2; // 0x62d Return
}


func_1963(var_9_int)
{
	var_10_object = Obj(); var_11_float = 0; var_12_object = Obj(); var_13_bool = 0; var_14_float = 0; var_15_float = 0; var_16_float = 0; var_17_object = Obj(); var_18_float = 0; var_19_object = Obj(); var_20_bool = 0; var_21_float = 0; var_22_float = 0; var_23_float = 0; // 0x7ab PushV
	var_24_int = 70; // 0x7ac PushI
	var_25_bool = var_9_int != var_24_int; // 0x7ad Neq
	if(var_25_bool == 0) goto Label_1968; // 0x7ae JumpB
	return 14; // 0x7af Return
	
Label_1968:
	var_26_object = GlobalVars[0]; // 0x7b0 PushGE
	var_27_bool = var_26_object == 0; // 0x7b1 NullEq
	if(var_27_bool == 0) goto Label_1972; // 0x7b2 JumpB
	return 14; // 0x7b3 Return
	
Label_1972:
	var_28_object = GlobalVars[0]; // 0x7b4 PushGE
	Intersect(var_17_object, var_18_float); // 0x7b5 ObjFunc
	var_29_object = GlobalVars[0]; // 0x7b7 PushGE
	var_30_bool = GlobalVars[3]; // 0x7b8 PushGE
	if(var_30_bool == 0) goto Label_1986; // 0x7b9 JumpB
	var_31_float = 0; var_32_float = 0; var_33_float = 0; // 0x7ba PushV
	var_32_float = var_18_float; // 0x7bb Mov
	var_34_float = GlobalVars[2]; // 0x7bc PushGE
	var_33_float = var_34_float; // 0x7bd Mov
	func_1462(var_31_float, var_32_float, var_33_float); // 0x7bf Call
	goto Label_1987; // 0x7c1 Jump
	
Label_1987:
	SetLength(var_31_float); // 0x7c3 ObjFunc
	
Label_1989:
	Next(var_20_bool, var_19_object); // 0x7c5 ObjFunc
	var_36_bool = var_20_bool; // 0x7c7 Push
	if(var_36_bool == 0) goto Label_2045; // 0x7c8 JumpB
	var_37_bool = 0; // 0x7c9 PushV
	var_37_bool = 0; // 0x7ca MovB
	var_38_bool = var_19_object != 0; // 0x7cb NullNeq
	if(var_38_bool == 0) goto Label_2003; // 0x7cc JumpB
	var_39_object = Obj(); // 0x7cd PushV
	func_1456(var_39_object); // 0x7ce Call
	var_42_bool = var_19_object != var_39_object; // 0x7d0 Neq
	if(var_42_bool == 0) goto Label_2003; // 0x7d1 JumpB
	var_37_bool = 1; // 0x7d2 MovB
	
Label_2003:
	if(var_37_bool == 0) goto Label_2044; // 0x7d3 JumpB
	var_43_float = 0; var_44_object = Obj(); var_45_float = 0; var_46_int = 0; // 0x7d4 PushV
	var_44_object = var_19_object; // 0x7d5 Mov
	var_45_float = 0.1; // 0x7d6 MovF
	var_46_int = 1; // 0x7d7 MovI
	func_1221(var_43_float, var_44_object, var_45_float, var_46_int); // 0x7d8 Call
	var_21_float = var_43_float; // 0x7d9 Mov
	var_98_bool = 0; var_99_object = Obj(); var_100_string = ""; // 0x7db PushV
	var_99_object = var_19_object; // 0x7dc Mov
	var_100_string = "disease"; // 0x7dd MovS
	func_1209(var_98_bool, var_99_object, var_100_string); // 0x7de Call
	if(var_98_bool == 0) goto Label_2030; // 0x7e0 JumpB
	var_101_string = "disease"; // 0x7e1 PushS
	GetProperty(var_101_string, var_22_float); // 0x7e2 ObjFunc
	var_102_float = 0.02; // 0x7e4 PushF
	var_103_bool = var_22_float <= var_102_float; // 0x7e5 LE
	if(var_103_bool == 0) goto Label_2025; // 0x7e6 JumpB
	var_22_float = 0; // 0x7e7 MovI
	goto Label_2027; // 0x7e8 Jump
	
Label_2027:
	var_104_string = "disease"; // 0x7eb PushS
	SetProperty(var_104_string, var_22_float); // 0x7ec ObjFunc
	
Label_2030:
	var_105_bool = 0; var_106_object = Obj(); var_107_string = ""; // 0x7ee PushV
	var_106_object = var_19_object; // 0x7ef Mov
	var_107_string = "fire"; // 0x7f0 MovS
	func_1209(var_105_bool, var_106_object, var_107_string); // 0x7f1 Call
	if(var_105_bool == 0) goto Label_2044; // 0x7f3 JumpB
	var_108_string = "fire"; // 0x7f4 PushS
	GetProperty(var_108_string, var_23_float); // 0x7f5 ObjFunc
	var_109_string = "fire"; // 0x7f7 PushS
	var_110_float = 0.1; // 0x7f8 PushF
	var_111_int = var_23_float + var_110_float; // 0x7f9 Add
	SetProperty(var_109_string, var_111_int); // 0x7fa ObjFunc
	
Label_2044:
	goto Label_1989; // 0x7fc Jump
	
Label_2025:
	var_112_float = 0.02; // 0x7e9 PushF
	var_22_float = var_22_float - var_112_float; // 0x7ea Sub2
	
Label_2045:
	return 14; // 0x7fd Return
	
Label_1986:
	var_113_float = 0.05; // 0x7c2 PushF
}


func_1451(var_68_bool)
{
	var_69_bool = 0; var_70_bool = 0; // 0x5ab PushV
	IsLoaded(var_70_bool); // 0x5ac Func
	var_68_bool = var_70_bool; // 0x5ae Mov
	return 2; // 0x5af Return
}


func_1326(var_9_bool, var_10_object)
{
	var_11_int = 0; var_12_int = 0; // 0x52e PushV
	var_13_bool = 0; var_14_object = Obj(); // 0x52f PushV
	var_14_object = var_10_object; // 0x530 Mov
	func_1290(var_13_bool, var_14_object); // 0x531 Call
	var_30_bool = var_13_bool == 0; // 0x533 Not
	if(var_30_bool == 0) goto Label_1335; // 0x534 JumpB
	var_9_bool = 0; // 0x535 MovB
	return 2; // 0x536 Return
	
Label_1335:
	var_31_bool = 0; var_32_object = Obj(); var_33_string = ""; // 0x537 PushV
	var_32_object = var_10_object; // 0x538 Mov
	var_33_string = "noaccess"; // 0x539 MovS
	func_1209(var_31_bool, var_32_object, var_33_string); // 0x53a Call
	var_40_bool = var_31_bool == 0; // 0x53c Not
	if(var_40_bool == 0) goto Label_1344; // 0x53d JumpB
	var_9_bool = 1; // 0x53e MovB
	return 2; // 0x53f Return
	
Label_1344:
	var_41_string = "noaccess"; // 0x540 PushS
	GetProperty(var_41_string, var_12_int); // 0x541 ObjFunc
	var_42_int = 0; // 0x543 PushI
	var_9_bool = var_12_int == var_42_int; // 0x544 Eq2
	return 2; // 0x545 Return
}


func_1582()
{
	var_8_float = 0; var_9_object = Obj(); var_10_object = Obj(); var_11_float = 0; var_12_object = Obj(); var_13_object = Obj(); // 0x62e PushV
	var_14_object = GlobalVars[4]; // 0x62f PushGE
	var_15_object = Obj(); // 0x630 PushV
	func_1480(var_15_object); // 0x631 Call
	var_14_object = var_15_object; // 0x632 Mov
	GlobalVars[4] = var_14_object; // 0x634 PopGE
	GetAttackDistance(var_11_float); // 0x635 Func
	var_18_float = GlobalVars[2]; // 0x637 PushGE
	var_19_float = 600.0; // 0x638 PushF
	var_18_float = var_11_float / var_11_float; // 0x639 Div2
	GlobalVars[2] = var_18_float; // 0x63a PopGE
	GetScene(var_12_object); // 0x63b Func
	var_20_string = "flame"; // 0x63d PushS
	var_21_cvector = CVector(0.0, 0.0, 0.0); // 0x63e PushVec
	AddActorByType(var_13_object, var_20_string, var_12_object, var_21_cvector); // 0x63f Func
	var_22_object = Obj(); // 0x641 PushV
	func_1456(var_22_object); // 0x642 Call
	var_25_string = "flame"; // 0x644 PushS
	Attach(var_22_object, var_25_string); // 0x645 ObjFunc
	var_26_bool = GlobalVars[3]; // 0x647 PushGE
	var_26_bool = 0; // 0x648 MovB
	GlobalVars[3] = var_26_bool; // 0x649 PopGE
	var_27_float = 0.05; // 0x64a PushF
	SetLength(var_27_float); // 0x64b ObjFunc
	var_28_object = GlobalVars[0]; // 0x64d PushGE
	var_28_object = var_13_object; // 0x64e Mov
	GlobalVars[0] = var_28_object; // 0x64f PopGE
	var_29_int = 70; // 0x650 PushI
	var_30_float = 0.1; // 0x651 PushF
	SetTimer(var_29_int, var_30_float); // 0x652 Func
	return 6; // 0x654 Return
}


func_560(var_0_bool, var_1_object)
{
	var_0_bool = 1; // 0x230 TMovB
	var_1_object = 0; // 0x231 TMovB
	Stop(); // 0x232 Func
	StopGroup0(); // 0x234 Func
	return 0; // 0x236 Return
}


func_1201(var_119_float)
{
	var_121_cvector = CVector(0,0,0); var_122_cvector = CVector(0,0,0); var_123_cvector = CVector(0,0,0); var_124_cvector = CVector(0,0,0); var_125_cvector = CVector(0,0,0); var_126_cvector = CVector(0,0,0); // 0x4b1 PushV
	GetPosition(var_124_cvector); // 0x4b2 Func
	GetPosition(var_125_cvector); // 0x4b4 ObjFunc
	var_126_cvector = var_125_cvector - var_124_cvector; // 0x4b6 Sub2
	var_119_float = var_126_cvector | var_126_cvector; // 0x4b7 Or2
	return 6; // 0x4b8 Return
}


func_178(var_0_bool, var_1_object, var_9_int)
{
	var_10_int = 0; // 0xb3 PushI
	var_11_bool = var_9_int != var_10_int; // 0xb4 Neq
	if(var_11_bool == 0) goto Label_183; // 0xb5 JumpB
	return 0; // 0xb6 Return
	
Label_183:
	var_12_bool = 0; var_13_object = Obj(); // 0xb7 PushV
	var_13_object = var_1_object; // 0xb8 MovT
	func_11(var_12_bool, var_13_object); // 0xb9 Call
	var_37_bool = var_12_bool == 0; // 0xbb Not
	if(var_37_bool == 0) goto Label_190; // 0xbc JumpB
	var_0_bool = 1; // 0xbd TMovB
	
Label_190:
	var_38_int = 0; // 0xbe PushI
	KillTimer(var_38_int); // 0xbf Func
	Stop(); // 0xc1 Func
	return 0; // 0xc3 Return
}


func_1710(var_210_object)
{
	var_211_cvector = CVector(0,0,0); var_212_float = 0; var_213_cvector = CVector(0,0,0); var_214_float = 0; // 0x6ae PushV
	GetPosition(var_213_cvector); // 0x6af ObjFunc
	var_215_string = "@GetHeight"; // 0x6b1 PushS
	var_216_int = 1; // 0x6b2 PushI
	var_217_bool = IsFuncExist(var_210_object, var_215_string, var_216_int); // 0x6b3 FuncExist
	if(var_217_bool == 0) goto Label_1724; // 0x6b4 JumpB
	GetHeight(var_214_float); // 0x6b5 ObjFunc
	var_218_float = GetByIndex(var_213_cvector, 1); // 0x6b7 PushE
	var_219_int = 2; // 0x6b8 PushI
	var_220_float = var_214_float / var_219_int; // 0x6b9 Div
	var_218_float = var_218_float + var_220_float; // 0x6ba Add2
	SetByIndex(var_213_cvector, 1) = var_218_float; // 0x6bb PopE
	
Label_1724:
	var_221_cvector = CVector(0,0,0); // 0x6bc PushV
	var_221_cvector = var_213_cvector; // 0x6bd Mov
	func_1679(var_221_cvector); // 0x6be Call
	return 4; // 0x6c0 Return
}


func_1456(var_22_object)
{
	var_23_object = Obj(); var_24_object = Obj(); // 0x5b0 PushV
	self(var_24_object); // 0x5b1 Func
	var_22_object = var_24_object; // 0x5b3 Mov
	return 2; // 0x5b4 Return
}


func_1462(var_31_float, var_32_float, var_33_float)
{
	var_35_bool = var_32_float < var_33_float; // 0x5b7 LT
	if(var_35_bool == 0) goto Label_1467; // 0x5b8 JumpB
	var_31_float = var_32_float; // 0x5b9 Mov
	goto Label_1468; // 0x5ba Jump
	
Label_1468:
	return 0; // 0x5bc Return
	
Label_1467:
	var_31_float = var_33_float; // 0x5bb Mov
}


func_1209(var_59_bool, var_60_object, var_61_string)
{
	var_62_bool = 0; var_63_bool = 0; // 0x4b9 PushV
	var_64_string = "HasProperty"; // 0x4ba PushS
	var_65_int = 2; // 0x4bb PushI
	var_66_bool = IsFuncExist(var_60_object, var_64_string, var_65_int); // 0x4bc FuncExist
	var_67_bool = var_66_bool == 0; // 0x4bd Not
	if(var_67_bool == 0) goto Label_1217; // 0x4be JumpB
	var_59_bool = 0; // 0x4bf MovB
	return 2; // 0x4c0 Return
	
Label_1217:
	HasProperty(var_61_string, var_63_bool); // 0x4c1 ObjFunc
	var_59_bool = var_63_bool; // 0x4c3 Mov
	return 2; // 0x4c4 Return
}


func_1851(var_368_object)
{
	var_369_object = Obj(); // 0x73c PushV
	var_369_object = var_368_object; // 0x73d Mov
	TaskCall(6); // 0x73e TaskCall
	func_1020(var_368_object, var_369_object); // 0x73f Call
	TaskReturn(); // 0x740 TaskReturn
	ResetAAS(); // 0x742 Func
	return 0; // 0x744 Return
}


func_1469(var_91_float, var_92_float, var_93_float, var_94_float)
{
	var_95_bool = var_92_float < var_93_float; // 0x5be LT
	if(var_95_bool == 0) goto Label_1474; // 0x5bf JumpB
	var_91_float = var_93_float; // 0x5c0 Mov
	return 0; // 0x5c1 Return
	
Label_1474:
	var_96_bool = var_92_float > var_94_float; // 0x5c2 GT
	if(var_96_bool == 0) goto Label_1478; // 0x5c3 JumpB
	var_91_float = var_94_float; // 0x5c4 Mov
	return 0; // 0x5c5 Return
	
Label_1478:
	var_91_float = var_92_float; // 0x5c6 Mov
	return 0; // 0x5c7 Return
}


func_576(var_52_bool)
{
	var_52_bool = 0; // 0x240 MovB
	return 0; // 0x241 Return
}


func_1729(var_102_bool, var_103_object)
{
	var_104_bool = 0; var_105_float = 0; var_106_bool = 0; var_107_float = 0; // 0x6c1 PushV
	var_108_bool = 0; var_109_object = Obj(); // 0x6c2 PushV
	var_109_object = var_103_object; // 0x6c3 Mov
	func_1326(var_108_bool, var_109_object); // 0x6c4 Call
	var_110_bool = var_108_bool == 0; // 0x6c6 Not
	if(var_110_bool == 0) goto Label_1738; // 0x6c7 JumpB
	var_102_bool = 0; // 0x6c8 MovB
	return 4; // 0x6c9 Return
	
Label_1738:
	var_111_object = GlobalVars[4]; // 0x6ca PushGE
	in(var_106_bool, var_103_object); // 0x6cb ObjFunc
	var_112_bool = var_106_bool; // 0x6cd Push
	if(var_112_bool == 0) goto Label_1745; // 0x6ce JumpB
	var_102_bool = 1; // 0x6cf MovB
	return 4; // 0x6d0 Return
	
Label_1745:
	var_113_bool = 0; var_114_object = Obj(); var_115_string = ""; // 0x6d1 PushV
	var_114_object = var_103_object; // 0x6d2 Mov
	var_115_string = "disease"; // 0x6d3 MovS
	func_1209(var_113_bool, var_114_object, var_115_string); // 0x6d4 Call
	var_116_bool = var_113_bool == 0; // 0x6d6 Not
	if(var_116_bool == 0) goto Label_1754; // 0x6d7 JumpB
	var_102_bool = 0; // 0x6d8 MovB
	return 4; // 0x6d9 Return
	
Label_1754:
	var_117_string = "disease"; // 0x6da PushS
	GetProperty(var_117_string, var_107_float); // 0x6db ObjFunc
	var_118_int = 0; // 0x6dd PushI
	var_102_bool = var_107_float > var_118_int; // 0x6de GT2
	return 4; // 0x6df Return
}


func_1861(var_44_object)
{
	var_45_bool = 0; var_46_bool = 0; var_47_bool = 0; var_48_bool = 0; // 0x745 PushV
	var_49_bool = var_44_object == 0; // 0x746 NullEq
	if(var_49_bool == 0) goto Label_1865; // 0x747 JumpB
	return 4; // 0x748 Return
	
Label_1865:
	var_50_object = GlobalVars[4]; // 0x749 PushGE
	in(var_47_bool, var_44_object); // 0x74a ObjFunc
	var_51_bool = var_47_bool == 0; // 0x74c Not
	if(var_51_bool == 0) goto Label_1873; // 0x74d JumpB
	var_52_object = GlobalVars[4]; // 0x74e PushGE
	add(var_44_object); // 0x74f ObjFunc
	
Label_1873:
	IsPlayerActor(var_44_object, var_48_bool); // 0x751 Func
	var_53_bool = var_48_bool; // 0x753 Push
	if(var_53_bool == 0) goto Label_1877; // 0x754 JumpB
	
Label_1877:
	return 4; // 0x755 Return
}


func_1350(var_246_bool, var_247_object)
{
	var_248_object = Obj(); var_249_object = Obj(); var_250_int = 0; var_251_object = Obj(); var_252_object = Obj(); var_253_int = 0; // 0x546 PushV
	var_254_bool = var_247_object == 0; // 0x547 NullEq
	if(var_254_bool == 0) goto Label_1355; // 0x548 JumpB
	var_246_bool = 0; // 0x549 MovB
	return 6; // 0x54a Return
	
Label_1355:
	GetScene(var_251_object); // 0x54b Func
	var_255_bool = var_251_object == 0; // 0x54d NullEq
	if(var_255_bool == 0) goto Label_1361; // 0x54e JumpB
	var_246_bool = 0; // 0x54f MovB
	return 6; // 0x550 Return
	
Label_1361:
	GetScene(var_252_object); // 0x551 ObjFunc
	var_256_bool = var_251_object != var_252_object; // 0x553 Neq
	if(var_256_bool == 0) goto Label_1367; // 0x554 JumpB
	var_246_bool = 0; // 0x555 MovB
	return 6; // 0x556 Return
	
Label_1367:
	var_257_bool = 0; var_258_object = Obj(); var_259_string = ""; // 0x557 PushV
	var_258_object = var_247_object; // 0x558 Mov
	var_259_string = "noaccess"; // 0x559 MovS
	func_1209(var_257_bool, var_258_object, var_259_string); // 0x55a Call
	var_260_bool = var_257_bool == 0; // 0x55c Not
	if(var_260_bool == 0) goto Label_1376; // 0x55d JumpB
	var_246_bool = 1; // 0x55e MovB
	return 6; // 0x55f Return
	
Label_1376:
	var_261_string = "noaccess"; // 0x560 PushS
	GetProperty(var_261_string, var_253_int); // 0x561 ObjFunc
	var_262_int = 0; // 0x563 PushI
	var_246_bool = var_253_int == var_262_int; // 0x564 Eq2
	return 6; // 0x565 Return
}


func_1221(var_43_float, var_44_object, var_45_float, var_46_int)
{
	var_47_int = 0; var_48_string = ""; var_49_int = 0; var_50_float = 0; var_51_float = 0; var_52_float = 0; var_53_int = 0; var_54_string = ""; var_55_int = 0; var_56_float = 0; var_57_float = 0; var_58_float = 0; // 0x4c5 PushV
	var_59_bool = 0; var_60_object = Obj(); var_61_string = ""; // 0x4c6 PushV
	var_60_object = var_44_object; // 0x4c7 Mov
	var_61_string = "health"; // 0x4c8 MovS
	func_1209(var_59_bool, var_60_object, var_61_string); // 0x4c9 Call
	var_68_bool = var_59_bool == 0; // 0x4cb Not
	if(var_68_bool == 0) goto Label_1231; // 0x4cc JumpB
	var_43_float = 0.0; // 0x4cd MovF
	return 12; // 0x4ce Return
	
Label_1231:
	var_69_bool = 0; var_70_object = Obj(); var_71_string = ""; // 0x4cf PushV
	var_70_object = var_44_object; // 0x4d0 Mov
	var_71_string = "armor"; // 0x4d1 MovS
	func_1209(var_69_bool, var_70_object, var_71_string); // 0x4d2 Call
	var_72_bool = var_69_bool == 0; // 0x4d4 Not
	if(var_72_bool == 0) goto Label_1240; // 0x4d5 JumpB
	var_53_int = 0; // 0x4d6 MovI
	goto Label_1243; // 0x4d7 Jump
	
Label_1243:
	var_73_string = "armor_"; // 0x4db PushS
	var_74_string = ""; var_75_int = 0; // 0x4dc PushV
	var_75_int = var_46_int; // 0x4dd Mov
	func_1193(var_74_string, var_75_int); // 0x4de Call
	var_54_string = var_73_string + var_74_string; // 0x4e0 Add2
	var_78_bool = 0; var_79_object = Obj(); var_80_string = ""; // 0x4e1 PushV
	var_79_object = var_44_object; // 0x4e2 Mov
	var_80_string = var_54_string; // 0x4e3 Mov
	func_1209(var_78_bool, var_79_object, var_80_string); // 0x4e4 Call
	var_81_bool = var_78_bool == 0; // 0x4e6 Not
	if(var_81_bool == 0) goto Label_1258; // 0x4e7 JumpB
	var_55_int = 0; // 0x4e8 MovI
	goto Label_1260; // 0x4e9 Jump
	
Label_1260:
	var_82_float = 0; var_83_float = 0; var_84_float = 0; // 0x4ec PushV
	var_85_int = var_53_int + var_55_int; // 0x4ed Add
	var_86_float = 100.0; // 0x4ee PushF
	var_83_float = var_85_int / var_85_int; // 0x4ef Div2
	var_84_float = 1; // 0x4f0 MovI
	func_1462(var_82_float, var_83_float, var_84_float); // 0x4f1 Call
	var_56_float = var_82_float; // 0x4f2 Mov
	var_87_string = "health"; // 0x4f4 PushS
	GetProperty(var_87_string, var_57_float); // 0x4f5 ObjFunc
	var_88_int = 1; // 0x4f7 PushI
	var_89_int = var_88_int - var_56_float; // 0x4f8 Sub
	var_58_float = var_45_float * var_89_int; // 0x4f9 Mult2
	var_90_string = "health"; // 0x4fa PushS
	var_91_float = 0; var_92_float = 0; var_93_float = 0; var_94_float = 0; // 0x4fb PushV
	var_92_float = var_57_float - var_58_float; // 0x4fc Sub2
	var_93_float = 0; // 0x4fd MovI
	var_94_float = 1; // 0x4fe MovI
	func_1469(var_91_float, var_92_float, var_93_float, var_94_float); // 0x4ff Call
	SetProperty(var_90_string, var_91_float); // 0x501 ObjFunc
	var_43_float = var_58_float; // 0x503 Mov
	return 12; // 0x504 Return
	
Label_1258:
	GetProperty(var_54_string, var_55_int); // 0x4ea ObjFunc
	
Label_1240:
	var_97_string = "armor"; // 0x4d8 PushS
	GetProperty(var_97_string, var_53_int); // 0x4d9 ObjFunc
}


func_200(var_0_bool)
{
	var_0_bool = 1; // 0xc8 TMovB
	var_9_int = 0; // 0xc9 PushI
	KillTimer(var_9_int); // 0xca Func
	Stop(); // 0xcc Func
	return 0; // 0xce Return
}


func_1480(var_15_object)
{
	var_16_object = Obj(); var_17_object = Obj(); // 0x5c8 PushV
	CreateObjectSet(var_17_object); // 0x5c9 Func
	var_15_object = var_17_object; // 0x5cb Mov
	return 2; // 0x5cc Return
}


func_76(var_0_bool, var_1_object, var_280_bool, var_281_object, var_282_float, var_283_float, var_284_bool, var_285_bool)
{
	var_286_bool = 0; var_287_bool = 0; var_288_object = Obj(); var_289_cvector = CVector(0,0,0); var_290_cvector = CVector(0,0,0); var_291_cvector = CVector(0,0,0); var_292_float = 0; var_293_object = Obj(); var_294_bool = 0; var_295_bool = 0; var_296_object = Obj(); var_297_cvector = CVector(0,0,0); var_298_cvector = CVector(0,0,0); var_299_cvector = CVector(0,0,0); var_300_float = 0; var_301_object = Obj(); // 0x4c PushV
	var_0_bool = 0; // 0x4d TMovB
	var_1_object = var_281_object; // 0x4e TMov
	var_295_bool = var_285_bool; // 0x4f Mov
	
Label_80:
	var_302_bool = 0; var_303_object = Obj(); // 0x50 PushV
	var_303_object = var_281_object; // 0x51 Mov
	func_11(var_302_bool, var_303_object); // 0x52 Call
	var_306_bool = var_302_bool == 0; // 0x54 Not
	if(var_306_bool == 0) goto Label_88; // 0x55 JumpB
	var_280_bool = 0; // 0x56 MovB
	return 16; // 0x57 Return
	
Label_88:
	GetPosition(var_297_cvector); // 0x58 ObjFunc
	GetPosition(var_298_cvector); // 0x5a Func
	var_299_cvector = var_297_cvector - var_298_cvector; // 0x5c Sub2
	var_300_float = var_299_cvector | var_299_cvector; // 0x5d Or2
	var_307_bool = 0; // 0x5e PushV
	var_307_bool = 0; // 0x5f MovB
	var_308_int = 0; // 0x60 PushI
	var_309_bool = var_283_float > var_308_int; // 0x61 GT
	if(var_309_bool == 0) goto Label_103; // 0x62 JumpB
	var_310_float = var_283_float * var_283_float; // 0x63 Mult
	var_311_bool = var_300_float > var_310_float; // 0x64 GT
	if(var_311_bool == 0) goto Label_103; // 0x65 JumpB
	var_307_bool = 1; // 0x66 MovB
	
Label_103:
	if(var_307_bool == 0) goto Label_108; // 0x67 JumpB
	Stop(); // 0x68 Func
	var_280_bool = 0; // 0x6a MovB
	return 16; // 0x6b Return
	
Label_108:
	var_312_float = var_282_float * var_282_float; // 0x6c Mult
	var_313_bool = var_300_float > var_312_float; // 0x6d GT
	if(var_313_bool == 0) goto Label_170; // 0x6e JumpB
	GetPFPosition(var_297_cvector); // 0x6f ObjFunc
	FindPathTo(var_301_object, var_297_cvector); // 0x71 Func
	var_314_bool = var_301_object != 0; // 0x73 NullNeq
	if(var_314_bool == 0) goto Label_119; // 0x74 JumpB
	var_296_object = var_301_object; // 0x75 Mov
	var_301_object = 0; // 0x76 SetNull
	
Label_119:
	var_315_bool = var_296_object != 0; // 0x77 NullNeq
	if(var_315_bool == 0) goto Label_152; // 0x78 JumpB
	var_316_bool = var_295_bool; // 0x79 Push
	if(var_316_bool == 0) goto Label_129; // 0x7a JumpB
	var_295_bool = 0; // 0x7b MovB
	RotatePath(var_296_object, var_294_bool); // 0x7c Func
	var_317_bool = var_294_bool == 0; // 0x7e Not
	if(var_317_bool == 0) goto Label_129; // 0x7f JumpB
	goto Label_176; // 0x80 Jump
	
Label_176:
	var_280_bool = !var_0_bool; // 0xb0 Not2
	return 16; // 0xb1 Return
	
Label_129:
	var_318_int = 0; // 0x81 PushI
	var_319_float = 0.3; // 0x82 PushF
	SetTimer(var_318_int, var_319_float); // 0x83 Func
	var_320_string = ""; // 0x85 PushV
	func_216(var_320_string); // 0x86 Call
	var_321_string = ""; // 0x88 PushV
	func_218(var_321_string); // 0x89 Call
	FollowPath(var_296_object, var_284_bool, var_294_bool, var_320_string, var_321_string); // 0x8b Func
	var_322_bool = var_294_bool == 0; // 0x8d Not
	if(var_322_bool == 0) goto Label_150; // 0x8e JumpB
	var_323_bool = var_0_bool; // 0x8f PushT
	if(var_323_bool == 0) goto Label_148; // 0x90 JumpB
	var_296_object = 0; // 0x91 SetNull
	goto Label_176; // 0x92 Jump
	
Label_148:
	goto Label_175; // 0x94 Jump
	
Label_175:
	goto Label_80; // 0xaf Jump
	
Label_150:
	var_296_object = 0; // 0x96 SetNull
	goto Label_168; // 0x97 Jump
	
Label_168:
	var_301_object = 0; // 0xa8 SetNull
	goto Label_174; // 0xa9 Jump
	
Label_174:
	var_296_object = 0; // 0xae SetNull
	
Label_152:
	var_324_int = 0; // 0x98 PushI
	KillTimer(var_324_int); // 0x99 Func
	var_325_float = 0.5; // 0x9b PushF
	Sleep(var_325_float, var_294_bool); // 0x9c Func
	var_326_bool = var_294_bool == 0; // 0x9e Not
	if(var_326_bool == 0) goto Label_164; // 0x9f JumpB
	var_327_bool = var_0_bool; // 0xa0 PushT
	if(var_327_bool == 0) goto Label_164; // 0xa1 JumpB
	var_296_object = 0; // 0xa2 SetNull
	goto Label_176; // 0xa3 Jump
	
Label_164:
	var_328_int = 0; // 0xa4 PushI
	var_329_float = 0.3; // 0xa5 PushF
	SetTimer(var_328_int, var_329_float); // 0xa6 Func
	
Label_170:
	var_330_int = 0; // 0xaa PushI
	KillTimer(var_330_int); // 0xab Func
	goto Label_176; // 0xad Jump
}


func_1486(var_78_string, var_79_int)
{
	var_80_string = ""; var_81_string = ""; // 0x5ce PushV
	var_81_string = "idle"; // 0x5cf MovS
	var_82_int = var_79_int; // 0x5d0 Push
	if(var_82_int == 0) goto Label_1491; // 0x5d1 JumpB
	var_81_string = var_81_string + var_79_int; // 0x5d2 Add2
	
Label_1491:
	var_78_string = var_81_string; // 0x5d3 Mov
	return 2; // 0x5d4 Return
}


func_1493(var_72_int)
{
	var_73_int = 0; var_74_bool = 0; var_75_int = 0; var_76_bool = 0; // 0x5d5 PushV
	var_75_int = 0; // 0x5d6 MovI
	
Label_1495:
	var_77_string = "all"; // 0x5d7 PushS
	var_78_string = ""; var_79_int = 0; // 0x5d8 PushV
	var_79_int = var_75_int; // 0x5d9 Mov
	func_1486(var_78_string, var_79_int); // 0x5da Call
	HasAnimation(var_76_bool, var_77_string, var_78_string); // 0x5dc Func
	var_83_bool = var_76_bool == 0; // 0x5de Not
	if(var_83_bool == 0) goto Label_1505; // 0x5df JumpB
	goto Label_1508; // 0x5e0 Jump
	
Label_1508:
	var_72_int = var_75_int; // 0x5e4 Mov
	return 4; // 0x5e5 Return
	
Label_1505:
	var_84_int = 1; // 0x5e1 PushI
	var_75_int = var_75_int + var_84_int; // 0x5e2 Add2
	goto Label_1495; // 0x5e3 Jump
}


func_1878(var_87_object)
{
	var_88_object = Obj(); // 0x757 PushV
	var_88_object = var_87_object; // 0x758 Mov
	func_1861(var_88_object); // 0x759 Call
	var_89_object = Obj(); // 0x75b PushV
	var_89_object = var_87_object; // 0x75c Mov
	func_1760(var_87_object, var_89_object); // 0x75d Call
	return 0; // 0x75f Return
}


func_726()
{
	StopAnimation(); // 0x2d6 Func
	StopGroup0(); // 0x2d8 Func
	return 0; // 0x2da Return
}


func_216(var_320_string)
{
	var_320_string = "walk"; // 0xd8 MovS
	return 0; // 0xd9 Return
}


func_1623(var_12_bool)
{
	var_13_float = 0; var_14_float = 0; var_15_object = Obj(); var_16_cvector = CVector(0,0,0); var_17_float = 0; var_18_float = 0; var_19_float = 0; var_20_object = Obj(); var_21_cvector = CVector(0,0,0); var_22_float = 0; // 0x657 PushV
	var_23_bool = var_12_bool; // 0x658 Push
	if(var_23_bool == 0) goto Label_1630; // 0x659 JumpB
	var_24_float = GlobalVars[2]; // 0x65a PushGE
	var_18_float = var_24_float; // 0x65b Mov
	goto Label_1631; // 0x65d Jump
	
Label_1631:
	var_25_object = GlobalVars[0]; // 0x65f PushGE
	GetLength(var_19_float); // 0x660 ObjFunc
	var_26_bool = var_18_float < var_19_float; // 0x662 LT
	if(var_26_bool == 0) goto Label_1637; // 0x663 JumpB
	var_19_float = var_18_float; // 0x664 Mov
	
Label_1637:
	var_27_object = GlobalVars[0]; // 0x665 PushGE
	SetLength(var_19_float); // 0x666 ObjFunc
	var_28_bool = GlobalVars[3]; // 0x668 PushGE
	var_29_bool = var_28_bool != var_12_bool; // 0x669 Neq
	if(var_29_bool == 0) goto Label_1678; // 0x66a JumpB
	var_30_bool = var_12_bool; // 0x66b Push
	if(var_30_bool == 0) goto Label_1668; // 0x66c JumpB
	var_31_object = GlobalVars[1]; // 0x66d PushGE
	var_32_bool = var_31_object == 0; // 0x66e NullEq
	if(var_32_bool == 0) goto Label_1663; // 0x66f JumpB
	var_21_cvector = CVector(0.0, 0.0, 0.0); // 0x670 MovV
	GetHeight(var_22_float); // 0x671 Func
	var_33_float = GetByIndex(var_21_cvector, 1); // 0x673 PushE
	var_33_float = var_22_float; // 0x674 Mov
	SetByIndex(var_21_cvector, 1) = var_33_float; // 0x675 PopE
	var_34_string = "flame_loop"; // 0x676 PushS
	var_35_int = 0; // 0x677 PushI
	var_36_int = 200; // 0x678 PushI
	PlayLoopedGlobalSound(var_20_object, var_34_string, var_21_cvector, var_35_int, var_36_int); // 0x679 Func
	var_37_object = GlobalVars[1]; // 0x67b PushGE
	var_37_object = var_20_object; // 0x67c Mov
	GlobalVars[1] = var_37_object; // 0x67d PopGE
	var_20_object = 0; // 0x67e SetNull
	
Label_1663:
	var_38_object = GlobalVars[1]; // 0x67f PushGE
	var_39_int = 2; // 0x680 PushI
	FadeIn(var_39_int); // 0x681 ObjFunc
	goto Label_1675; // 0x683 Jump
	
Label_1675:
	var_40_bool = GlobalVars[3]; // 0x68b PushGE
	var_40_bool = var_12_bool; // 0x68c Mov
	GlobalVars[3] = var_40_bool; // 0x68d PopGE
	
Label_1678:
	return 10; // 0x68e Return
	
Label_1668:
	var_41_object = GlobalVars[1]; // 0x684 PushGE
	var_42_bool = var_41_object != 0; // 0x685 NullNeq
	if(var_42_bool == 0) goto Label_1675; // 0x686 JumpB
	var_43_object = GlobalVars[1]; // 0x687 PushGE
	var_44_int = 2; // 0x688 PushI
	FadeOut(var_44_int); // 0x689 ObjFunc
	
Label_1630:
	var_18_float = 0.05; // 0x65e MovF
}


func_218(var_321_string)
{
	var_321_string = "run"; // 0xda MovS
	return 0; // 0xdb Return
}


func_731(var_0_bool, var_90_object, var_91_object, var_145_bool)
{
	var_93_bool = 0; var_94_float = 0; var_95_object = Obj(); var_96_bool = 0; var_97_float = 0; var_98_object = Obj(); // 0x2db PushV
	var_0_bool = var_91_object; // 0x2dc TMov
	Face(var_91_object); // 0x2dd Func
	var_99_bool = 1; // 0x2df PushB
	SetAttackState(var_99_bool); // 0x2e0 Func
	var_96_bool = 0; // 0x2e2 MovB
	
Label_739:
	var_100_bool = 0; var_101_object = Obj(); // 0x2e3 PushV
	var_101_object = var_0_bool; // 0x2e4 MovT
	func_2048(var_100_bool, var_101_object); // 0x2e5 Call
	if(var_100_bool == 0) goto Label_831; // 0x2e7 JumpB
	var_119_float = 0; var_120_object = Obj(); // 0x2e8 PushV
	var_120_object = var_0_bool; // 0x2e9 MovT
	func_1201(var_120_object); // 0x2ea Call
	var_97_float = var_119_float; // 0x2eb Mov
	var_127_float = 90000.0; // 0x2ed PushF
	var_128_bool = var_97_float <= var_127_float; // 0x2ee LE
	if(var_128_bool == 0) goto Label_772; // 0x2ef JumpB
	var_129_bool = var_96_bool == 0; // 0x2f0 Not
	if(var_129_bool == 0) goto Label_767; // 0x2f1 JumpB
	var_130_bool = 1; // 0x2f2 PushB
	SetAttackState(var_130_bool); // 0x2f3 Func
	var_131_bool = 0; // 0x2f5 PushV
	var_131_bool = 1; // 0x2f6 MovB
	func_1623(var_131_bool); // 0x2f7 Call
	var_132_string = "all"; // 0x2f9 PushS
	var_133_string = "attack_on"; // 0x2fa PushS
	PlayAnimation(var_132_string, var_133_string); // 0x2fb Func
	var_96_bool = 1; // 0x2fd MovB
	goto Label_771; // 0x2fe Jump
	
Label_771:
	goto Label_826; // 0x303 Jump
	
Label_826:
	WaitForAnimEnd(); // 0x33a Func
	ReportAttack(var_0_bool); // 0x33c Func
	goto Label_739; // 0x33e Jump
	
Label_767:
	var_134_string = "all"; // 0x2ff PushS
	var_135_string = "bjump"; // 0x300 PushS
	PlayAnimation(var_134_string, var_135_string); // 0x301 Func
	
Label_772:
	var_136_float = 490000.0; // 0x304 PushF
	var_137_bool = var_97_float >= var_136_float; // 0x305 GE
	if(var_137_bool == 0) goto Label_807; // 0x306 JumpB
	var_138_bool = var_96_bool; // 0x307 Push
	if(var_138_bool == 0) goto Label_790; // 0x308 JumpB
	var_139_bool = 0; // 0x309 PushB
	SetAttackState(var_139_bool); // 0x30a Func
	var_140_bool = 0; // 0x30c PushV
	var_140_bool = 0; // 0x30d MovB
	func_1623(var_140_bool); // 0x30e Call
	var_141_string = "all"; // 0x310 PushS
	var_142_string = "attack_off"; // 0x311 PushS
	PlayAnimation(var_141_string, var_142_string); // 0x312 Func
	var_96_bool = 0; // 0x314 MovB
	goto Label_806; // 0x315 Jump
	
Label_806:
	goto Label_826; // 0x326 Jump
	
Label_790:
	StopAsync(); // 0x316 Func
	var_143_object = Obj(); var_144_object = Obj(); // 0x318 PushV
	var_144_object = var_0_bool; // 0x319 MovT
	TaskCall(1); // 0x31a TaskCall
	func_220(var_147_object, var_143_object, var_144_object); // 0x31b Call
	TaskReturn(); // 0x31c TaskReturn
	var_98_object = var_145_bool; // 0x31d Mov
	var_0_bool = var_98_object; // 0x31f TMov
	var_200_bool = var_0_bool == 0; // 0x320 NullEq
	if(var_200_bool == 0) goto Label_803; // 0x321 JumpB
	goto Label_831; // 0x322 Jump
	
Label_831:
	var_201_bool = 0; // 0x33f PushB
	SetAttackState(var_201_bool); // 0x340 Func
	var_202_string = "all"; // 0x342 PushS
	var_203_string = "attack_off"; // 0x343 PushS
	PlayAnimation(var_202_string, var_203_string); // 0x344 Func
	var_204_bool = 0; // 0x346 PushV
	var_204_bool = 0; // 0x347 MovB
	func_1623(var_204_bool); // 0x348 Call
	StopAsync(); // 0x34a Func
	var_90_object = var_0_bool; // 0x34c MovT
	return 6; // 0x34d Return
	
Label_803:
	Face(var_0_bool); // 0x323 Func
	var_98_object = 0; // 0x325 SetNull
	
Label_807:
	var_205_bool = var_96_bool == 0; // 0x327 Not
	if(var_205_bool == 0) goto Label_822; // 0x328 JumpB
	var_206_bool = 1; // 0x329 PushB
	SetAttackState(var_206_bool); // 0x32a Func
	var_207_bool = 0; // 0x32c PushV
	var_207_bool = 1; // 0x32d MovB
	func_1623(var_207_bool); // 0x32e Call
	var_208_string = "all"; // 0x330 PushS
	var_209_string = "attack_on"; // 0x331 PushS
	PlayAnimation(var_208_string, var_209_string); // 0x332 Func
	var_96_bool = 1; // 0x334 MovB
	goto Label_826; // 0x335 Jump
	
Label_822:
	var_210_object = Obj(); // 0x336 PushV
	var_210_object = var_0_bool; // 0x337 MovT
	func_1710(var_210_object); // 0x338 Call
}


func_220(var_2_bool, var_143_object, var_144_object)
{
	var_2_bool = var_144_object; // 0xdd TMov
	var_148_bool = 0; var_149_object = Obj(); var_150_float = 0; var_151_float = 0; var_152_bool = 0; var_153_bool = 0; // 0xde PushV
	var_149_object = var_144_object; // 0xdf Mov
	var_150_float = 500.0; // 0xe0 MovF
	var_151_float = 5000; // 0xe1 MovI
	var_152_bool = 0; // 0xe2 MovB
	var_153_bool = 1; // 0xe3 MovB
	func_258(var_143_object, var_144_object, var_148_bool, var_149_object, var_150_float, var_151_float, var_152_bool, var_153_bool); // 0xe4 Call
	var_199_bool = var_148_bool == 0; // 0xe6 Not
	if(var_199_bool == 0) goto Label_233; // 0xe7 JumpB
	var_2_bool = 0; // 0xe8 SetNullT
	
Label_233:
	var_143_object = var_2_bool; // 0xe9 MovT
	return 0; // 0xea Return
}


func_863(var_10_object)
{
	var_11_int = 70; // 0x360 PushI
	KillTimer(var_11_int); // 0x361 Func
	var_12_bool = 0; // 0x363 PushV
	var_12_bool = 0; // 0x364 MovB
	func_1623(var_12_bool); // 0x365 Call
	var_45_object = GlobalVars[0]; // 0x367 PushGE
	RemoveActor(var_45_object); // 0x368 Func
	func_1540(); // 0x36b Call
	var_86_object = Obj(); // 0x36d PushV
	var_86_object = var_10_object; // 0x36e Mov
	func_882(var_86_object); // 0x36f Call
	return 0; // 0x371 Return
}


func_992(var_109_string)
{
	RemoveRTEnvelope(); // 0x3e1 Func
	SetDeathState(); // 0x3e3 Func
	Stop(); // 0x3e5 Func
	StopAsync(); // 0x3e7 Func
	StopSecondaryAnimation(); // 0x3e9 Func
	var_110_string = "all"; // 0x3eb PushS
	PlayAnimation(var_110_string, var_109_string); // 0x3ec Func
	WaitForAnimEnd(); // 0x3ee Func
	var_111_string = "all"; // 0x3f0 PushS
	LockAnimationEnd(var_111_string, var_109_string); // 0x3f1 Func
	RemoveEnvelope(); // 0x3f3 Func
	return 0; // 0x3f5 Return
}


func_1121()
{
	var_54_bool = 0; // 0x461 PushV
	var_54_bool = 0; // 0x462 MovB
	func_1623(var_54_bool); // 0x463 Call
	Stop(); // 0x465 Func
	StopAsync(); // 0x467 Func
	return 0; // 0x469 Return
}


func_1760(var_89_object, var_92_object)
{
	var_90_object = Obj(); var_91_object = Obj(); // 0x6e1 PushV
	var_91_object = var_89_object; // 0x6e2 Mov
	TaskCall(4); // 0x6e3 TaskCall
	func_731(var_89_object, var_92_object, var_90_object, var_91_object); // 0x6e4 Call
	TaskReturn(); // 0x6e5 TaskReturn
	var_89_object = var_92_object; // 0x6e6 Mov
	ResetAAS(); // 0x6e8 Func
	var_245_bool = 0; // 0x6ea PushV
	var_245_bool = 0; // 0x6eb MovB
	var_246_bool = 0; var_247_object = Obj(); // 0x6ec PushV
	var_247_object = var_89_object; // 0x6ed Mov
	func_1350(var_246_bool, var_247_object); // 0x6ee Call
	if(var_246_bool == 0) goto Label_1783; // 0x6f0 JumpB
	var_263_bool = 0; var_264_object = Obj(); // 0x6f1 PushV
	var_264_object = var_89_object; // 0x6f2 Mov
	func_1285(var_264_object); // 0x6f3 Call
	if(var_263_bool == 0) goto Label_1783; // 0x6f5 JumpB
	var_245_bool = 1; // 0x6f6 MovB
	
Label_1783:
	if(var_245_bool == 0) goto Label_1792; // 0x6f7 JumpB
	var_265_object = Obj(); // 0x6f8 PushV
	var_265_object = var_89_object; // 0x6f9 Mov
	TaskCall(6); // 0x6fa TaskCall
	func_1020(var_89_object, var_265_object); // 0x6fb Call
	TaskReturn(); // 0x6fc TaskReturn
	ResetAAS(); // 0x6fe Func
	
Label_1792:
	return 0; // 0x700 Return
}


func_1888(var_9_object)
{
	var_10_object = Obj(); // 0x761 PushV
	var_10_object = var_9_object; // 0x762 Mov
	TaskCall(5); // 0x763 TaskCall
	func_863(var_10_object); // 0x764 Call
	TaskReturn(); // 0x765 TaskReturn
	return 0; // 0x767 Return
}


func_1510(var_51_int, var_52_int)
{
	var_53_int = 0; var_54_int = 0; var_55_int = 0; var_56_bool = 0; var_57_int = 0; var_58_int = 0; var_59_int = 0; var_60_bool = 0; // 0x5e6 PushV
	var_61_bool = var_51_int > var_52_int; // 0x5e7 GT
	if(var_61_bool == 0) goto Label_1517; // 0x5e8 JumpB
	var_62_string = "GenerateMoney: iMin > iMax"; // 0x5e9 PushS
	Trace(var_62_string); // 0x5ea Func
	return 8; // 0x5ec Return
	
Label_1517:
	var_57_int = 0; // 0x5ed MovI
	var_63_bool = var_51_int != var_52_int; // 0x5ee Neq
	if(var_63_bool == 0) goto Label_1524; // 0x5ef JumpB
	var_64_int = var_52_int - var_51_int; // 0x5f0 Sub
	irand(var_58_int, var_64_int); // 0x5f1 Func
	goto Label_1528; // 0x5f3 Jump
	
Label_1528:
	var_57_int = var_57_int + var_51_int; // 0x5f8 Add2
	var_65_int = 0; // 0x5f9 PushI
	var_66_bool = var_57_int == var_65_int; // 0x5fa Eq
	if(var_66_bool == 0) goto Label_1533; // 0x5fb JumpB
	return 8; // 0x5fc Return
	
Label_1533:
	var_67_string = "Money"; // 0x5fd PushS
	GetInvItemByName(var_59_int, var_67_string); // 0x5fe Func
	var_68_int = 0; // 0x600 PushI
	AddItem(var_60_bool, var_59_int, var_68_int, var_57_int); // 0x601 Func
	return 8; // 0x603 Return
	
Label_1524:
	var_69_int = 0; // 0x5f4 PushI
	var_70_bool = var_51_int == var_69_int; // 0x5f5 Eq
	if(var_70_bool == 0) goto Label_1528; // 0x5f6 JumpB
	return 8; // 0x5f7 Return
}


func_360(var_0_bool, var_1_object, var_9_int)
{
	var_10_int = 0; // 0x169 PushI
	var_11_bool = var_9_int != var_10_int; // 0x16a Neq
	if(var_11_bool == 0) goto Label_365; // 0x16b JumpB
	return 0; // 0x16c Return
	
Label_365:
	var_12_bool = 0; var_13_object = Obj(); // 0x16d PushV
	var_13_object = var_1_object; // 0x16e MovT
	func_398(var_12_bool, var_13_object); // 0x16f Call
	var_48_bool = var_12_bool == 0; // 0x171 Not
	if(var_48_bool == 0) goto Label_372; // 0x172 JumpB
	var_0_bool = 1; // 0x173 TMovB
	
Label_372:
	var_49_int = 0; // 0x174 PushI
	KillTimer(var_49_int); // 0x175 Func
	Stop(); // 0x177 Func
	return 0; // 0x179 Return
}


func_1384(var_12_object, var_13_int)
{
	var_15_object = Obj(); var_16_object = Obj(); var_17_cvector = CVector(0,0,0); var_18_float = 0; var_19_int = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_string = ""; var_25_object = Obj(); var_26_object = Obj(); var_27_cvector = CVector(0,0,0); var_28_float = 0; var_29_int = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_string = ""; // 0x568 PushV
	var_35_bool = 0; // 0x569 PushV
	var_35_bool = 0; // 0x56a MovB
	var_36_int = 4; // 0x56b PushI
	var_37_bool = var_13_int != var_36_int; // 0x56c Neq
	if(var_37_bool == 0) goto Label_1394; // 0x56d JumpB
	var_38_int = 5; // 0x56e PushI
	var_39_bool = var_13_int != var_38_int; // 0x56f Neq
	if(var_39_bool == 0) goto Label_1394; // 0x570 JumpB
	var_35_bool = 1; // 0x571 MovB
	
Label_1394:
	if(var_35_bool == 0) goto Label_1413; // 0x572 JumpB
	GetScene(var_25_object); // 0x573 Func
	GetPosition(var_27_cvector); // 0x575 Func
	GetEyesHeight(var_28_float); // 0x577 Func
	var_40_float = GetByIndex(var_27_cvector, 1); // 0x579 PushE
	var_41_int = 2; // 0x57a PushI
	var_42_float = var_28_float / var_41_int; // 0x57b Div
	var_40_float = var_40_float + var_42_float; // 0x57c Add2
	SetByIndex(var_27_cvector, 1) = var_40_float; // 0x57d PopE
	var_43_string = "scripted"; // 0x57e PushS
	var_44_cvector = CVector(0.0, 0.0, 1.0); // 0x57f PushVec
	var_45_string = "blood.xml"; // 0x580 PushS
	AddActorByType(var_26_object, var_43_string, var_25_object, var_27_cvector, var_44_cvector, var_45_string); // 0x581 Func
	var_26_object = 0; // 0x583 SetNull
	var_25_object = 0; // 0x584 SetNull
	
Label_1413:
	var_46_bool = var_12_object == 0; // 0x585 NullEq
	if(var_46_bool == 0) goto Label_1416; // 0x586 JumpB
	return 20; // 0x587 Return
	
Label_1416:
	GetSecondaryAnimationType(var_29_int); // 0x588 Func
	var_47_int = 0; // 0x58a PushI
	var_48_bool = var_29_int < var_47_int; // 0x58b LT
	if(var_48_bool == 0) goto Label_1422; // 0x58c JumpB
	return 20; // 0x58d Return
	
Label_1422:
	GetPosition(var_30_cvector); // 0x58e ObjFunc
	GetPosition(var_31_cvector); // 0x590 Func
	GetDirection(var_32_cvector); // 0x592 Func
	var_33_cvector = var_31_cvector - var_30_cvector; // 0x594 Sub2
	var_49_float = GetByIndex(var_33_cvector, 0); // 0x595 PushE
	var_50_float = GetByIndex(var_32_cvector, 0); // 0x596 PushE
	var_51_float = var_49_float * var_50_float; // 0x597 Mult
	var_52_float = GetByIndex(var_33_cvector, 2); // 0x598 PushE
	var_53_float = GetByIndex(var_32_cvector, 2); // 0x599 PushE
	var_54_float = var_52_float * var_53_float; // 0x59a Mult
	var_55_int = var_51_float + var_54_float; // 0x59b Add
	var_56_int = 0; // 0x59c PushI
	var_57_bool = var_55_int >= var_56_int; // 0x59d GE
	if(var_57_bool == 0) goto Label_1441; // 0x59e JumpB
	var_34_string = "fhit"; // 0x59f MovS
	goto Label_1442; // 0x5a0 Jump
	
Label_1442:
	var_58_string = "hit_react"; // 0x5a2 PushS
	var_59_string = "1"; // 0x5a3 PushS
	var_60_int = var_34_string + var_59_string; // 0x5a4 Add
	var_61_string = "2"; // 0x5a5 PushS
	var_62_int = var_34_string + var_61_string; // 0x5a6 Add
	var_63_int = -10; // 0x5a7 PushI
	FadeSecondaryAnimation(var_58_string, var_60_int, var_62_int, var_63_int); // 0x5a8 Func
	return 20; // 0x5aa Return
	
Label_1441:
	var_34_string = "bhit"; // 0x5a1 MovS
}


func_496(var_0_bool, var_1_object)
{
	var_31_float = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_float = 0; var_35_bool = 0; var_36_object = Obj(); var_37_bool = 0; var_38_float = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_float = 0; var_42_bool = 0; var_43_object = Obj(); var_44_bool = 0; // 0x1f0 PushV
	var_0_bool = 0; // 0x1f1 TMovB
	var_1_object = 0; // 0x1f2 TMovB
	var_45_float = 0.5; // 0x1f3 PushF
	rand(var_38_float, var_45_float); // 0x1f4 Func
	Sleep(var_38_float); // 0x1f6 Func
	
Label_504:
	var_46_bool = var_0_bool == 0; // 0x1f8 Not
	if(var_46_bool == 0) goto Label_552; // 0x1f9 JumpB
	var_47_bool = var_1_object == 0; // 0x1fa Not
	if(var_47_bool == 0) goto Label_524; // 0x1fb JumpB
	
Label_508:
	GetPosition(var_40_cvector); // 0x1fc Func
	GetCameraFarDistance(var_41_float); // 0x1fe Func
	var_48_float = 2.5; // 0x200 PushF
	var_41_float = var_41_float * var_48_float; // 0x201 Mult2
	GetRandomPFPointInCircle(var_39_cvector, var_40_cvector, var_41_float, var_42_bool); // 0x202 Func
	var_49_bool = var_42_bool; // 0x204 Push
	if(var_49_bool == 0) goto Label_519; // 0x205 JumpB
	goto Label_523; // 0x206 Jump
	
Label_523:
	goto Label_525; // 0x20b Jump
	
Label_525:
	FindShiftedPathTo(var_43_object, var_39_cvector); // 0x20d Func
	var_50_bool = var_43_object != 0; // 0x20f NullNeq
	if(var_50_bool == 0) goto Label_547; // 0x210 JumpB
	RotatePath(var_43_object, var_44_bool); // 0x211 Func
	var_51_bool = var_44_bool; // 0x213 Push
	if(var_51_bool == 0) goto Label_546; // 0x214 JumpB
	var_52_bool = 0; // 0x215 PushV
	func_576(var_52_bool); // 0x216 Call
	FollowPath(var_43_object, var_52_bool, var_44_bool); // 0x218 Func
	var_43_object = 0; // 0x21a SetNull
	var_53_bool = var_44_bool; // 0x21b Push
	if(var_53_bool == 0) goto Label_546; // 0x21c JumpB
	TaskCall(3); // 0x21e TaskCall
	func_657(); // 0x21f Call
	TaskReturn(); // 0x220 TaskReturn
	
Label_546:
	goto Label_550; // 0x222 Jump
	
Label_550:
	var_43_object = 0; // 0x226 SetNull
	goto Label_504; // 0x227 Jump
	
Label_547:
	var_105_int = 1; // 0x223 PushI
	Sleep(var_105_int); // 0x224 Func
	
Label_519:
	var_106_int = 1; // 0x207 PushI
	Sleep(var_106_int); // 0x208 Func
	goto Label_508; // 0x20a Jump
	
Label_524:
	var_1_object = 0; // 0x20c TMovB
	
Label_552:
	return 14; // 0x228 Return
}


func_882(var_86_object)
{
	EventDisable(0); // 0x373 EventDisable
	var_87_object = Obj(); // 0x374 PushV
	var_87_object = var_86_object; // 0x375 Mov
	func_905(var_87_object); // 0x376 Call
	var_137_int = 50; // 0x378 PushI
	var_138_int = 40; // 0x379 PushI
	SetRTEnvelope(var_137_int, var_138_int); // 0x37a Func
	EventEnable(0); // 0x37c EventEnable
	
Label_893:
	Hold(); // 0x37d Func
	goto Label_893; // 0x37f Jump
}


func_1020(var_265_object, var_278_bool)
{
	var_266_bool = 0; var_267_float = 0; var_268_float = 0; var_269_bool = 0; var_270_float = 0; var_271_float = 0; // 0x3fc PushV
	var_272_bool = 0; var_273_object = Obj(); var_274_string = ""; // 0x3fd PushV
	var_273_object = var_265_object; // 0x3fe Mov
	var_274_string = "disease"; // 0x3ff MovS
	func_1209(var_272_bool, var_273_object, var_274_string); // 0x400 Call
	var_275_bool = var_272_bool == 0; // 0x402 Not
	if(var_275_bool == 0) goto Label_1029; // 0x403 JumpB
	return 6; // 0x404 Return
	
Label_1029:
	var_276_bool = 0; var_277_object = Obj(); // 0x405 PushV
	var_277_object = var_265_object; // 0x406 Mov
	TaskCall(0); // 0x407 TaskCall
	func_0(var_276_bool, var_277_object); // 0x408 Call
	TaskReturn(); // 0x409 TaskReturn
	var_331_bool = var_278_bool == 0; // 0x40b Not
	if(var_331_bool == 0) goto Label_1038; // 0x40c JumpB
	return 6; // 0x40d Return
	
Label_1038:
	Face(var_265_object); // 0x40e Func
	WaitForAnimEnd(var_269_bool); // 0x410 Func
	var_332_bool = var_269_bool; // 0x412 Push
	if(var_332_bool == 0) goto Label_1118; // 0x413 JumpB
	var_333_string = "all"; // 0x414 PushS
	var_334_string = "attack_on"; // 0x415 PushS
	PlayAnimation(var_333_string, var_334_string); // 0x416 Func
	WaitForAnimEnd(var_269_bool); // 0x418 Func
	var_335_bool = var_269_bool; // 0x41a Push
	if(var_335_bool == 0) goto Label_1118; // 0x41b JumpB
	var_336_bool = 0; // 0x41c PushV
	var_336_bool = 1; // 0x41d MovB
	func_1623(var_336_bool); // 0x41e Call
	
Label_1056:
	var_337_string = "all"; // 0x420 PushS
	var_338_string = "cattack"; // 0x421 PushS
	PlayAnimation(var_337_string, var_338_string); // 0x422 Func
	WaitForAnimEnd(var_269_bool); // 0x424 Func
	var_339_bool = 0; // 0x426 PushV
	var_339_bool = 1; // 0x427 MovB
	var_340_bool = var_269_bool == 0; // 0x428 Not
	if(var_340_bool == 0) goto Label_1073; // 0x429 JumpB
	var_341_bool = 0; var_342_object = Obj(); // 0x42a PushV
	var_342_object = var_265_object; // 0x42b Mov
	func_1350(var_341_bool, var_342_object); // 0x42c Call
	var_343_bool = var_341_bool == 0; // 0x42e Not
	if(var_343_bool == 0) goto Label_1073; // 0x42f JumpB
	var_339_bool = 0; // 0x430 MovB
	
Label_1073:
	if(var_339_bool == 0) goto Label_1075; // 0x431 JumpB
	goto Label_1106; // 0x432 Jump
	
Label_1106:
	var_344_bool = 0; // 0x452 PushV
	var_344_bool = 0; // 0x453 MovB
	func_1623(var_344_bool); // 0x454 Call
	var_345_bool = var_269_bool; // 0x456 Push
	if(var_345_bool == 0) goto Label_1118; // 0x457 JumpB
	var_346_string = "all"; // 0x458 PushS
	var_347_string = "attack_off"; // 0x459 PushS
	PlayAnimation(var_346_string, var_347_string); // 0x45a Func
	WaitForAnimEnd(); // 0x45c Func
	
Label_1118:
	StopAsync(); // 0x45e Func
	return 6; // 0x460 Return
	
Label_1075:
	var_348_string = "disease"; // 0x433 PushS
	GetProperty(var_348_string, var_270_float); // 0x434 ObjFunc
	var_349_float = 0.02; // 0x436 PushF
	var_350_bool = var_270_float <= var_349_float; // 0x437 LE
	if(var_350_bool == 0) goto Label_1086; // 0x438 JumpB
	var_351_string = "disease"; // 0x439 PushS
	var_352_float = 0.0; // 0x43a PushF
	SetProperty(var_351_string, var_352_float); // 0x43b ObjFunc
	goto Label_1106; // 0x43d Jump
	
Label_1086:
	var_353_string = "disease"; // 0x43e PushS
	var_354_float = 0.02; // 0x43f PushF
	var_355_int = var_270_float - var_354_float; // 0x440 Sub
	SetProperty(var_353_string, var_355_int); // 0x441 ObjFunc
	var_356_bool = 0; var_357_object = Obj(); var_358_string = ""; // 0x443 PushV
	var_357_object = var_265_object; // 0x444 Mov
	var_358_string = "fire"; // 0x445 MovS
	func_1209(var_356_bool, var_357_object, var_358_string); // 0x446 Call
	if(var_356_bool == 0) goto Label_1105; // 0x448 JumpB
	var_359_string = "fire"; // 0x449 PushS
	GetProperty(var_359_string, var_271_float); // 0x44a ObjFunc
	var_360_string = "fire"; // 0x44c PushS
	var_361_float = 0.1; // 0x44d PushF
	var_362_int = var_271_float + var_361_float; // 0x44e Add
	SetProperty(var_360_string, var_362_int); // 0x44f ObjFunc
	
Label_1105:
	goto Label_1056; // 0x451 Jump
}


func_382(var_0_bool)
{
	var_0_bool = 1; // 0x17e TMovB
	var_9_int = 0; // 0x17f PushI
	KillTimer(var_9_int); // 0x180 Func
	Stop(); // 0x182 Func
	return 0; // 0x184 Return
}


