task_0_event_9(var_0_int, var_1_float)
{
	var_2_bool = 0; var_3_int = 0; var_4_float = 0; // 0x1 PushV
	var_3_int = var_0_int; // 0x2 Mov
	var_4_float = var_1_float; // 0x3 Mov
	func_8587(var_3_int, var_4_float); // 0x4 NEW_2
	if(var_2_bool == 0) goto Label_8; // 0x6 JumpB
	return 0; // 0x7 Return
	
Label_8:
	var_4097_bool = 0; var_4098_int = 0; var_4099_float = 0; // 0x8 PushV
	var_4098_int = var_0_int; // 0x9 Mov
	var_4099_float = var_1_float; // 0xa Mov
	func_12053(var_4098_int, var_4099_float); // 0xb NEW_2
	if(var_4097_bool == 0) goto Label_15; // 0xd JumpB
	return 0; // 0xe Return
	
Label_15:
	var_4539_int = 0; var_4540_float = 0; // 0xf PushV
	var_4539_int = var_0_int; // 0x10 Mov
	var_4540_float = var_1_float; // 0x11 Mov
	func_12149(var_4539_int, var_4540_float); // 0x12 NEW_2
	return 0; // 0x14 Return
}


event_26(var_0_string, var_1_string)
{
	var_2_int = 0; var_3_int = 0; var_4_int = 0; var_5_int = 0; // 0x1cf7 PushV
	var_6_string = "playsound"; // 0x1cf8 PushS
	var_7_bool = var_0_string == var_6_string; // 0x1cf9 Eq
	if(var_7_bool == 0) goto Label_7422; // 0x1cfa JumpB
	PlaySound(var_1_string); // 0x1cfb Func
	goto Label_7443; // 0x1cfd Jump
	
Label_7443:
	return 4; // 0x1d13 Return
	
Label_7422:
	var_8_string = "enable_bonfire"; // 0x1cfe PushS
	var_9_bool = var_0_string == var_8_string; // 0x1cff Eq
	if(var_9_bool == 0) goto Label_7433; // 0x1d00 JumpB
	_strtoi(var_4_int, var_1_string); // 0x1d01 Func
	var_10_int = 0; // 0x1d03 PushV
	var_11_int = 1; // 0x1d04 PushI
	var_10_int = var_4_int - var_11_int; // 0x1d05 Sub2
	func_7555(var_10_int); // 0x1d06 NEW_2
	goto Label_7443; // 0x1d08 Jump
	
Label_7433:
	var_64_string = "disable_bonfire"; // 0x1d09 PushS
	var_65_bool = var_0_string == var_64_string; // 0x1d0a Eq
	if(var_65_bool == 0) goto Label_7443; // 0x1d0b JumpB
	_strtoi(var_5_int, var_1_string); // 0x1d0c Func
	var_66_int = 0; // 0x1d0e PushV
	var_67_int = 1; // 0x1d0f PushI
	var_66_int = var_5_int - var_67_int; // 0x1d10 Sub2
	func_7632(var_66_int); // 0x1d11 NEW_2
}


event_1000(var_0_string, var_1_string)
{
	var_2_int = 0; var_3_int = 0; var_4_object = Obj(); var_5_int = 0; var_6_int = 0; var_7_object = Obj(); var_8_object = Obj(); var_9_object = Obj(); var_10_cvector = CVector(0,0,0); var_11_object = Obj(); var_12_int = 0; var_13_int = 0; var_14_object = Obj(); var_15_int = 0; var_16_int = 0; var_17_object = Obj(); var_18_object = Obj(); var_19_object = Obj(); var_20_cvector = CVector(0,0,0); var_21_object = Obj(); // 0x1d14 PushV
	var_22_string = "horror"; // 0x1d15 PushS
	var_23_bool = var_0_string == var_22_string; // 0x1d16 Eq
	if(var_23_bool == 0) goto Label_7483; // 0x1d17 JumpB
	_strtoi(var_12_int, var_1_string); // 0x1d18 Func
	var_24_int = 0; // 0x1d1a PushV
	var_24_int = var_12_int; // 0x1d1b Mov
	func_392(var_24_int); // 0x1d1c NEW_2
	var_39_object = GlobalVars[13]; // 0x1d1e PushGE
	size(var_13_int); // 0x1d1f ObjFunc
	var_40_bool = 0; // 0x1d21 PushV
	var_40_bool = 0; // 0x1d22 MovB
	var_41_int = 0; // 0x1d23 PushI
	var_42_bool = var_12_int >= var_41_int; // 0x1d24 GE
	if(var_42_bool == 0) goto Label_7465; // 0x1d25 JumpB
	var_43_bool = var_12_int < var_13_int; // 0x1d26 LT
	if(var_43_bool == 0) goto Label_7465; // 0x1d27 JumpB
	var_40_bool = 1; // 0x1d28 MovB
	
Label_7465:
	if(var_40_bool == 0) goto Label_7479; // 0x1d29 JumpB
	var_44_object = GlobalVars[13]; // 0x1d2a PushGE
	get(var_14_object, var_12_int); // 0x1d2b ObjFunc
	var_45_object = Obj(); var_46_int = 0; // 0x1d2d PushV
	var_45_object = var_14_object; // 0x1d2e Mov
	var_46_int = 1; // 0x1d2f MovI
	func_255(var_46_int); // 0x1d30 NEW_2
	var_72_string = "Replaced"; // 0x1d32 PushS
	Trace(var_72_string); // 0x1d33 Func
	var_14_object = 0; // 0x1d35 SetNull
	goto Label_7482; // 0x1d36 Jump
	
Label_7482:
	goto Label_7554; // 0x1d3a Jump
	
Label_7554:
	return 20; // 0x1d82 Return
	
Label_7479:
	var_73_string = "Invalid region index"; // 0x1d37 PushS
	Trace(var_73_string); // 0x1d38 Func
	
Label_7483:
	var_74_string = "nail"; // 0x1d3b PushS
	var_75_bool = var_0_string == var_74_string; // 0x1d3c Eq
	if(var_75_bool == 0) goto Label_7521; // 0x1d3d JumpB
	_strtoi(var_15_int, var_1_string); // 0x1d3e Func
	var_76_int = 0; // 0x1d40 PushV
	var_76_int = var_15_int; // 0x1d41 Mov
	func_422(var_76_int); // 0x1d42 NEW_2
	var_88_object = GlobalVars[13]; // 0x1d44 PushGE
	size(var_16_int); // 0x1d45 ObjFunc
	var_89_bool = 0; // 0x1d47 PushV
	var_89_bool = 0; // 0x1d48 MovB
	var_90_int = 0; // 0x1d49 PushI
	var_91_bool = var_15_int >= var_90_int; // 0x1d4a GE
	if(var_91_bool == 0) goto Label_7503; // 0x1d4b JumpB
	var_92_bool = var_15_int < var_16_int; // 0x1d4c LT
	if(var_92_bool == 0) goto Label_7503; // 0x1d4d JumpB
	var_89_bool = 1; // 0x1d4e MovB
	
Label_7503:
	if(var_89_bool == 0) goto Label_7517; // 0x1d4f JumpB
	var_93_object = GlobalVars[13]; // 0x1d50 PushGE
	get(var_17_object, var_15_int); // 0x1d51 ObjFunc
	var_94_object = Obj(); var_95_int = 0; // 0x1d53 PushV
	var_94_object = var_17_object; // 0x1d54 Mov
	var_95_int = 2; // 0x1d55 MovI
	func_255(var_95_int); // 0x1d56 NEW_2
	var_96_string = "Replaced"; // 0x1d58 PushS
	Trace(var_96_string); // 0x1d59 Func
	var_17_object = 0; // 0x1d5b SetNull
	goto Label_7520; // 0x1d5c Jump
	
Label_7520:
	goto Label_7554; // 0x1d60 Jump
	
Label_7517:
	var_97_string = "Invalid region index"; // 0x1d5d PushS
	Trace(var_97_string); // 0x1d5e Func
	
Label_7521:
	var_98_string = "fogme"; // 0x1d61 PushS
	var_99_bool = var_0_string == var_98_string; // 0x1d62 Eq
	if(var_99_bool == 0) goto Label_7541; // 0x1d63 JumpB
	var_100_object = Obj(); // 0x1d64 PushV
	func_81(var_100_object); // 0x1d65 NEW_2
	var_18_object = var_100_object; // 0x1d66 Mov
	GetScene(var_19_object); // 0x1d68 ObjFunc
	GetPosition(var_20_cvector); // 0x1d6a ObjFunc
	var_104_string = "fog"; // 0x1d6c PushS
	var_105_cvector = CVector(0.0, 0.0, 1.0); // 0x1d6d PushVec
	var_106_string = "fog_stat.xml"; // 0x1d6e PushS
	AddActorByType(var_21_object, var_104_string, var_19_object, var_20_cvector, var_105_cvector, var_106_string); // 0x1d6f Func
	var_21_object = 0; // 0x1d71 SetNull
	var_19_object = 0; // 0x1d72 SetNull
	var_18_object = 0; // 0x1d73 SetNull
	goto Label_7554; // 0x1d74 Jump
	
Label_7541:
	var_107_string = "sepia"; // 0x1d75 PushS
	var_108_bool = var_0_string == var_107_string; // 0x1d76 Eq
	if(var_108_bool == 0) goto Label_7548; // 0x1d77 JumpB
	func_239(); // 0x1d79 NEW_2
	goto Label_7554; // 0x1d7b Jump
	
Label_7548:
	var_111_string = "nosepia"; // 0x1d7c PushS
	var_112_bool = var_0_string == var_111_string; // 0x1d7d Eq
	if(var_112_bool == 0) goto Label_7554; // 0x1d7e JumpB
	func_244(); // 0x1d80 NEW_2
}


main()
{
	var_0_string = "branch"; // 0x15 PushS
	var_1_int = 1; // 0x16 PushI
	SetVariable(var_0_string, var_1_int); // 0x17 Func
	var_2_int = 0; // 0x19 PushI
	var_3_int = 1; // 0x1a PushI
	SetSaveProperty(var_2_int, var_3_int); // 0x1b Func
	func_59(); // 0x1e NEW_2
	func_7855(); // 0x21 NEW_2
	func_8642(); // 0x24 NEW_2
	func_12114(); // 0x27 NEW_2
	var_4579_float = 0; // 0x29 PushV
	var_4580_float = 0; // 0x2a PushV
	func_234(var_4580_float); // 0x2b NEW_2
	var_4579_float = var_4580_float; // 0x2c Mov
	func_13631(var_4579_float); // 0x2e NEW_2
	var_4987_object = Obj(); var_4988_string = ""; // 0x30 PushV
	var_4988_string = "quest_b1_02"; // 0x31 MovS
	func_111(var_4987_object, var_4988_string); // 0x32 NEW_2
	var_4989_float = 0.66667; // 0x34 PushF
	AdvanceGameTime(var_4989_float); // 0x35 Func
	
Label_55:
	Hold(); // 0x37 Func
	goto Label_55; // 0x39 Jump
}


func_10242()
{
	return 0; // 0x2803 Return
}


func_14339(var_144_bool, var_145_int, var_146_int)
{
	var_147_int = 6; // 0x3804 PushI
	var_148_bool = var_145_int == var_147_int; // 0x3805 Eq
	if(var_148_bool == 0) goto Label_14345; // 0x3806 JumpB
	var_144_bool = 0; // 0x3807 MovB
	return 0; // 0x3808 Return
	
Label_14345:
	var_149_int = 4; // 0x3809 PushI
	var_150_bool = var_146_int == var_149_int; // 0x380a Eq
	if(var_150_bool == 0) goto Label_14359; // 0x380b JumpB
	var_151_int = 15; // 0x380c PushI
	var_152_bool = var_145_int == var_151_int; // 0x380d Eq
	if(var_152_bool == 0) goto Label_14353; // 0x380e JumpB
	var_144_bool = 0; // 0x380f MovB
	return 0; // 0x3810 Return
	
Label_14353:
	var_153_int = 9; // 0x3811 PushI
	var_154_bool = var_145_int == var_153_int; // 0x3812 Eq
	if(var_154_bool == 0) goto Label_14358; // 0x3813 JumpB
	var_144_bool = 0; // 0x3814 MovB
	return 0; // 0x3815 Return
	
Label_14358:
	goto Label_14376; // 0x3816 Jump
	
Label_14376:
	var_144_bool = 1; // 0x3828 MovB
	return 0; // 0x3829 Return
	
Label_14359:
	var_155_int = 5; // 0x3817 PushI
	var_156_bool = var_146_int == var_155_int; // 0x3818 Eq
	if(var_156_bool == 0) goto Label_14368; // 0x3819 JumpB
	var_157_int = 15; // 0x381a PushI
	var_158_bool = var_145_int == var_157_int; // 0x381b Eq
	if(var_158_bool == 0) goto Label_14367; // 0x381c JumpB
	var_144_bool = 0; // 0x381d MovB
	return 0; // 0x381e Return
	
Label_14367:
	goto Label_14376; // 0x381f Jump
	
Label_14368:
	var_159_int = 6; // 0x3820 PushI
	var_160_bool = var_146_int == var_159_int; // 0x3821 Eq
	if(var_160_bool == 0) goto Label_14376; // 0x3822 JumpB
	var_161_int = 15; // 0x3823 PushI
	var_162_bool = var_145_int == var_161_int; // 0x3824 Eq
	if(var_162_bool == 0) goto Label_14376; // 0x3825 JumpB
	var_144_bool = 0; // 0x3826 MovB
	return 0; // 0x3827 Return
}


func_10244()
{
	return 0; // 0x2805 Return
}


func_10246()
{
	var_4653_string = ""; var_4654_bool = 0; // 0x2807 PushV
	var_4653_string = "burah_home@door1"; // 0x2808 MovS
	var_4654_bool = 1; // 0x2809 MovB
	func_151(var_4653_string, var_4654_bool); // 0x280a NEW_2
	return 0; // 0x280c Return
}


func_5126()
{
	var_123_string = "dt_house3_08_i2"; // 0x1407 PushS
	add(var_123_string); // 0x1408 ObjFunc
	var_124_string = "dt_house3_09"; // 0x140a PushS
	add(var_124_string); // 0x140b ObjFunc
	var_125_string = "dt_house3_09_i2"; // 0x140d PushS
	add(var_125_string); // 0x140e ObjFunc
	var_126_string = "house1_se_03l"; // 0x1410 PushS
	add(var_126_string); // 0x1411 ObjFunc
	var_127_string = "house1_se_03r"; // 0x1413 PushS
	add(var_127_string); // 0x1414 ObjFunc
	var_128_string = "house1_se_01l"; // 0x1416 PushS
	add(var_128_string); // 0x1417 ObjFunc
	var_129_string = "house1_se_01r"; // 0x1419 PushS
	add(var_129_string); // 0x141a ObjFunc
	var_130_string = "house1_se_04l"; // 0x141c PushS
	add(var_130_string); // 0x141d ObjFunc
	var_131_string = "house1_se_04r"; // 0x141f PushS
	add(var_131_string); // 0x1420 ObjFunc
	var_132_string = "house5_11"; // 0x1422 PushS
	add(var_132_string); // 0x1423 ObjFunc
	var_133_string = "house5_09"; // 0x1425 PushS
	add(var_133_string); // 0x1426 ObjFunc
	var_134_string = "house5_13"; // 0x1428 PushS
	add(var_134_string); // 0x1429 ObjFunc
	var_135_string = "house5_12"; // 0x142b PushS
	add(var_135_string); // 0x142c ObjFunc
	var_136_string = "house5_14"; // 0x142e PushS
	add(var_136_string); // 0x142f ObjFunc
	var_137_string = "house5_unoin03l"; // 0x1431 PushS
	add(var_137_string); // 0x1432 ObjFunc
	var_138_string = "house5_unoin03r"; // 0x1434 PushS
	add(var_138_string); // 0x1435 ObjFunc
	var_139_string = "house5_unoin02l"; // 0x1437 PushS
	add(var_139_string); // 0x1438 ObjFunc
	var_140_string = "house5_unoin02r"; // 0x143a PushS
	add(var_140_string); // 0x143b ObjFunc
	var_141_string = "house5_unoin01l"; // 0x143d PushS
	add(var_141_string); // 0x143e ObjFunc
	var_142_string = "house5_unoin01r"; // 0x1440 PushS
	add(var_142_string); // 0x1441 ObjFunc
	return 0; // 0x1443 Return
}


func_10253()
{
	var_5141_string = ""; var_5142_bool = 0; // 0x280e PushV
	var_5141_string = "burah_home@door1"; // 0x280f MovS
	var_5142_bool = 0; // 0x2810 MovB
	func_151(var_5141_string, var_5142_bool); // 0x2811 NEW_2
	return 0; // 0x2813 Return
}


func_1037(var_1794_int, var_1795_int)
{
	var_1796_bool = 0; // 0x40e PushV
	var_1796_bool = 1; // 0x40f MovB
	var_1797_int = 22; // 0x410 PushI
	var_1798_bool = var_1795_int >= var_1797_int; // 0x411 GE
	if(var_1798_bool == 0) goto Label_1047; // 0x412 JumpB
	var_1799_int = 6; // 0x413 PushI
	var_1800_bool = var_1795_int < var_1799_int; // 0x414 LT
	if(var_1800_bool == 0) goto Label_1047; // 0x415 JumpB
	var_1796_bool = 0; // 0x416 MovB
	
Label_1047:
	if(var_1796_bool == 0) goto Label_1054; // 0x417 JumpB
	var_1801_int = 0; var_1802_bool = 0; // 0x418 PushV
	var_1801_int = var_1794_int; // 0x419 Mov
	var_1802_bool = 1; // 0x41a MovB
	func_729(var_1801_int, var_1802_bool); // 0x41b NEW_2
	goto Label_1059; // 0x41d Jump
	
Label_1059:
	return 0; // 0x423 Return
	
Label_1054:
	var_1803_int = 0; var_1804_bool = 0; // 0x41e PushV
	var_1803_int = var_1794_int; // 0x41f Mov
	var_1804_bool = 0; // 0x420 MovB
	func_729(var_1803_int, var_1804_bool); // 0x421 NEW_2
}


func_7181(var_4128_int, var_4129_int, var_4130_object, var_4131_object, var_4132_object, var_4133_object)
{
	var_4134_int = 0; // 0x1c0e PushI
	var_4135_bool = var_4129_int == var_4134_int; // 0x1c0f Eq
	if(var_4135_bool == 0) goto Label_7221; // 0x1c10 JumpB
	var_4136_int = 0; var_4137_bool = 0; // 0x1c11 PushV
	var_4136_int = 14; // 0x1c12 MovI
	var_4137_bool = 0; // 0x1c13 MovB
	func_746(var_4136_int, var_4137_bool); // 0x1c14 NEW_2
	var_4138_int = 0; var_4139_bool = 0; var_4140_int = 0; // 0x1c16 PushV
	var_4138_int = 14; // 0x1c17 MovI
	var_4139_bool = 0; // 0x1c18 MovB
	var_4140_int = 1; // 0x1c19 MovI
	func_763(var_4138_int, var_4139_bool, var_4140_int); // 0x1c1a NEW_2
	var_4141_int = 0; var_4142_int = 0; var_4143_object = Obj(); var_4144_object = Obj(); var_4145_object = Obj(); // 0x1c1c PushV
	var_4141_int = 14; // 0x1c1d MovI
	var_4142_int = var_4128_int; // 0x1c1e Mov
	var_4143_object = var_4130_object; // 0x1c1f Mov
	var_4144_object = var_4131_object; // 0x1c20 Mov
	var_4145_object = var_4132_object; // 0x1c21 Mov
	func_670(var_4141_int, var_4142_int, var_4143_object, var_4144_object, var_4145_object); // 0x1c22 NEW_2
	var_4146_object = Obj(); var_4147_int = 0; // 0x1c24 PushV
	var_4146_object = var_4133_object; // 0x1c25 Mov
	var_4147_int = 2; // 0x1c26 MovI
	func_255(var_4147_int); // 0x1c27 NEW_2
	var_4148_int = 0; var_4149_bool = 0; var_4150_int = 0; // 0x1c29 PushV
	var_4148_int = 14; // 0x1c2a MovI
	var_4149_bool = 0; // 0x1c2b MovB
	var_4150_int = 5; // 0x1c2c MovI
	func_820(var_4148_int, var_4149_bool, var_4150_int); // 0x1c2d NEW_2
	var_4151_int = 0; var_4152_bool = 0; var_4153_int = 0; // 0x1c2f PushV
	var_4151_int = 14; // 0x1c30 MovI
	var_4152_bool = 1; // 0x1c31 MovB
	var_4153_int = 5; // 0x1c32 MovI
	func_882(var_4151_int, var_4152_bool, var_4153_int); // 0x1c33 NEW_2
	
Label_7221:
	var_4154_int = 0; var_4155_bool = 0; // 0x1c35 PushV
	var_4154_int = 14; // 0x1c36 MovI
	var_4155_bool = 0; // 0x1c37 MovB
	func_729(var_4154_int, var_4155_bool); // 0x1c38 NEW_2
	var_4156_int = 0; var_4157_int = 0; var_4158_int = 0; // 0x1c3a PushV
	var_4156_int = 14; // 0x1c3b MovI
	var_4157_int = var_4128_int; // 0x1c3c Mov
	var_4158_int = var_4129_int; // 0x1c3d Mov
	func_3421(var_4156_int, var_4157_int, var_4158_int); // 0x1c3e NEW_2
	return 0; // 0x1c40 Return
}


func_6160(var_3963_int, var_3964_int, var_3965_object, var_3966_object, var_3967_object, var_3968_object)
{
	var_3969_int = 0; // 0x1811 PushI
	var_3970_bool = var_3964_int == var_3969_int; // 0x1812 Eq
	if(var_3970_bool == 0) goto Label_6200; // 0x1813 JumpB
	var_3971_int = 0; var_3972_bool = 0; // 0x1814 PushV
	var_3971_int = 9; // 0x1815 MovI
	var_3972_bool = 0; // 0x1816 MovB
	func_746(var_3971_int, var_3972_bool); // 0x1817 NEW_2
	var_3973_int = 0; var_3974_bool = 0; var_3975_int = 0; // 0x1819 PushV
	var_3973_int = 9; // 0x181a MovI
	var_3974_bool = 0; // 0x181b MovB
	var_3975_int = 1; // 0x181c MovI
	func_763(var_3973_int, var_3974_bool, var_3975_int); // 0x181d NEW_2
	var_3976_int = 0; var_3977_int = 0; var_3978_object = Obj(); var_3979_object = Obj(); var_3980_object = Obj(); // 0x181f PushV
	var_3976_int = 9; // 0x1820 MovI
	var_3977_int = var_3963_int; // 0x1821 Mov
	var_3978_object = var_3965_object; // 0x1822 Mov
	var_3979_object = var_3966_object; // 0x1823 Mov
	var_3980_object = var_3967_object; // 0x1824 Mov
	func_670(var_3976_int, var_3977_int, var_3978_object, var_3979_object, var_3980_object); // 0x1825 NEW_2
	var_3981_object = Obj(); var_3982_int = 0; // 0x1827 PushV
	var_3981_object = var_3968_object; // 0x1828 Mov
	var_3982_int = 2; // 0x1829 MovI
	func_255(var_3982_int); // 0x182a NEW_2
	var_3983_int = 0; var_3984_bool = 0; var_3985_int = 0; // 0x182c PushV
	var_3983_int = 9; // 0x182d MovI
	var_3984_bool = 0; // 0x182e MovB
	var_3985_int = 7; // 0x182f MovI
	func_820(var_3983_int, var_3984_bool, var_3985_int); // 0x1830 NEW_2
	var_3986_int = 0; var_3987_bool = 0; var_3988_int = 0; // 0x1832 PushV
	var_3986_int = 9; // 0x1833 MovI
	var_3987_bool = 1; // 0x1834 MovB
	var_3988_int = 7; // 0x1835 MovI
	func_882(var_3986_int, var_3987_bool, var_3988_int); // 0x1836 NEW_2
	
Label_6200:
	var_3989_int = 0; var_3990_bool = 0; // 0x1838 PushV
	var_3989_int = 9; // 0x1839 MovI
	var_3990_bool = 0; // 0x183a MovB
	func_729(var_3989_int, var_3990_bool); // 0x183b NEW_2
	var_3991_int = 0; var_3992_int = 0; var_3993_int = 0; // 0x183d PushV
	var_3991_int = 9; // 0x183e MovI
	var_3992_int = var_3963_int; // 0x183f Mov
	var_3993_int = var_3964_int; // 0x1840 Mov
	func_3609(var_3991_int, var_3992_int, var_3993_int); // 0x1841 NEW_2
	return 0; // 0x1843 Return
}


func_3087(var_2117_int, var_2118_int, var_2119_int)
{
	var_2120_int = 0; var_2121_int = 0; var_2122_int = 0; var_2123_int = 0; // 0xc0f PushV
	var_2124_bool = 0; // 0xc10 PushV
	var_2124_bool = 0; // 0xc11 MovB
	var_2125_int = 8; // 0xc12 PushI
	var_2126_bool = var_2119_int > var_2125_int; // 0xc13 GT
	if(var_2126_bool == 0) goto Label_3097; // 0xc14 JumpB
	var_2127_int = 21; // 0xc15 PushI
	var_2128_bool = var_2119_int < var_2127_int; // 0xc16 LT
	if(var_2128_bool == 0) goto Label_3097; // 0xc17 JumpB
	var_2124_bool = 1; // 0xc18 MovB
	
Label_3097:
	if(var_2124_bool == 0) goto Label_3152; // 0xc19 JumpB
	var_2129_int = 0; var_2130_string = ""; var_2131_string = ""; var_2132_int = 0; // 0xc1a PushV
	var_2129_int = var_2117_int; // 0xc1b Mov
	var_2130_string = "pers_vaxxabit"; // 0xc1c MovS
	var_2131_string = "vaxxabit_d.xml"; // 0xc1d MovS
	var_2132_int = 5; // 0xc1e MovI
	func_453(var_2129_int, var_2130_string, var_2131_string, var_2132_int); // 0xc1f NEW_2
	var_2133_int = 0; var_2134_string = ""; var_2135_string = ""; var_2136_int = 0; // 0xc21 PushV
	var_2133_int = var_2117_int; // 0xc22 Mov
	var_2134_string = "pers_vaxxabitka"; // 0xc23 MovS
	var_2135_string = "vaxxabitka_d.xml"; // 0xc24 MovS
	var_2136_int = 5; // 0xc25 MovI
	func_453(var_2133_int, var_2134_string, var_2135_string, var_2136_int); // 0xc26 NEW_2
	var_2137_int = 0; var_2138_string = ""; var_2139_string = ""; var_2140_int = 0; // 0xc28 PushV
	var_2137_int = var_2117_int; // 0xc29 Mov
	var_2138_string = "pers_rat_big"; // 0xc2a MovS
	var_2139_string = "rat_big.xml"; // 0xc2b MovS
	var_2140_int = 2; // 0xc2c MovI
	func_453(var_2137_int, var_2138_string, var_2139_string, var_2140_int); // 0xc2d NEW_2
	var_2141_int = 0; var_2142_string = ""; var_2143_string = ""; var_2144_int = 0; // 0xc2f PushV
	var_2141_int = var_2117_int; // 0xc30 Mov
	var_2142_string = "fog"; // 0xc31 MovS
	var_2143_string = "fog.xml"; // 0xc32 MovS
	var_2144_int = 6; // 0xc33 MovI
	func_479(var_2141_int, var_2142_string, var_2143_string, var_2144_int); // 0xc34 NEW_2
	var_2149_int = 5; // 0xc36 PushI
	var_2150_bool = var_2118_int >= var_2149_int; // 0xc37 GE
	if(var_2150_bool == 0) goto Label_3136; // 0xc38 JumpB
	var_2151_int = 0; var_2152_string = ""; var_2153_string = ""; var_2154_int = 0; // 0xc39 PushV
	var_2151_int = var_2117_int; // 0xc3a Mov
	var_2152_string = "fog"; // 0xc3b MovS
	var_2153_string = "fog_hunter.xml"; // 0xc3c MovS
	var_2154_int = 2; // 0xc3d MovI
	func_479(var_2151_int, var_2152_string, var_2153_string, var_2154_int); // 0xc3e NEW_2
	
Label_3136:
	var_2155_int = 1; // 0xc40 PushI
	var_2156_float = 0; var_2157_int = 0; // 0xc41 PushV
	var_2157_int = var_2118_int; // 0xc42 Mov
	func_1205(var_2156_float, var_2157_int); // 0xc43 NEW_2
	var_2122_int = var_2155_int * var_2156_float; // 0xc45 Mult2
	var_2202_int = var_2122_int; // 0xc46 Push
	if(var_2202_int == 0) goto Label_3151; // 0xc47 JumpB
	var_2203_int = 0; var_2204_string = ""; var_2205_string = ""; var_2206_int = 0; // 0xc48 PushV
	var_2203_int = var_2117_int; // 0xc49 Mov
	var_2204_string = "pers_bomber"; // 0xc4a MovS
	var_2205_string = "bomber.xml"; // 0xc4b MovS
	var_2206_int = var_2122_int; // 0xc4c Mov
	func_453(var_2203_int, var_2204_string, var_2205_string, var_2206_int); // 0xc4d NEW_2
	
Label_3151:
	goto Label_3205; // 0xc4f Jump
	
Label_3205:
	var_2207_bool = 0; var_2208_int = 0; // 0xc85 PushV
	var_2208_int = var_2118_int; // 0xc86 Mov
	func_1322(var_2207_bool, var_2208_int); // 0xc87 NEW_2
	if(var_2207_bool == 0) goto Label_3217; // 0xc89 JumpB
	var_2210_int = 0; var_2211_string = ""; var_2212_string = ""; var_2213_int = 0; // 0xc8a PushV
	var_2210_int = var_2117_int; // 0xc8b Mov
	var_2211_string = "pers_sanitar"; // 0xc8c MovS
	var_2212_string = "sanitar.xml"; // 0xc8d MovS
	var_2213_int = 2; // 0xc8e MovI
	func_453(var_2210_int, var_2211_string, var_2212_string, var_2213_int); // 0xc8f NEW_2
	
Label_3217:
	var_2214_int = 0; var_2215_string = ""; var_2216_string = ""; var_2217_int = 0; var_2218_int = 0; var_2219_int = 0; // 0xc91 PushV
	var_2214_int = var_2117_int; // 0xc92 Mov
	var_2215_string = "pers_worker"; // 0xc93 MovS
	var_2216_string = "agony1_man.xml"; // 0xc94 MovS
	var_2217_int = 2; // 0xc95 MovI
	var_2218_int = 4; // 0xc96 MovI
	var_2219_int = 4; // 0xc97 MovI
	func_466(var_2214_int, var_2215_string, var_2216_string, var_2217_int, var_2218_int, var_2219_int); // 0xc98 NEW_2
	var_2224_int = 0; var_2225_string = ""; var_2226_string = ""; var_2227_int = 0; var_2228_int = 0; var_2229_int = 0; // 0xc9a PushV
	var_2224_int = var_2117_int; // 0xc9b Mov
	var_2225_string = "pers_unosha"; // 0xc9c MovS
	var_2226_string = "agony1_man.xml"; // 0xc9d MovS
	var_2227_int = 2; // 0xc9e MovI
	var_2228_int = 4; // 0xc9f MovI
	var_2229_int = 4; // 0xca0 MovI
	func_466(var_2224_int, var_2225_string, var_2226_string, var_2227_int, var_2228_int, var_2229_int); // 0xca1 NEW_2
	var_2230_int = 0; var_2231_string = ""; var_2232_string = ""; var_2233_int = 0; var_2234_int = 0; var_2235_int = 0; // 0xca3 PushV
	var_2230_int = var_2117_int; // 0xca4 Mov
	var_2231_string = "pers_woman"; // 0xca5 MovS
	var_2232_string = "agony1_woman.xml"; // 0xca6 MovS
	var_2233_int = 2; // 0xca7 MovI
	var_2234_int = 4; // 0xca8 MovI
	var_2235_int = 4; // 0xca9 MovI
	func_466(var_2230_int, var_2231_string, var_2232_string, var_2233_int, var_2234_int, var_2235_int); // 0xcaa NEW_2
	var_2236_int = 0; var_2237_string = ""; var_2238_string = ""; var_2239_int = 0; var_2240_int = 0; var_2241_int = 0; // 0xcac PushV
	var_2236_int = var_2117_int; // 0xcad Mov
	var_2237_string = "pers_wasted_girl"; // 0xcae MovS
	var_2238_string = "agony1_woman.xml"; // 0xcaf MovS
	var_2239_int = 2; // 0xcb0 MovI
	var_2240_int = 4; // 0xcb1 MovI
	var_2241_int = 4; // 0xcb2 MovI
	func_466(var_2236_int, var_2237_string, var_2238_string, var_2239_int, var_2240_int, var_2241_int); // 0xcb3 NEW_2
	return 4; // 0xcb5 Return
	
Label_3152:
	var_2242_int = 0; var_2243_string = ""; var_2244_string = ""; var_2245_int = 0; // 0xc50 PushV
	var_2242_int = var_2117_int; // 0xc51 Mov
	var_2243_string = "pers_vaxxabit"; // 0xc52 MovS
	var_2244_string = "vaxxabit_d.xml"; // 0xc53 MovS
	var_2245_int = 4; // 0xc54 MovI
	func_453(var_2242_int, var_2243_string, var_2244_string, var_2245_int); // 0xc55 NEW_2
	var_2246_int = 0; var_2247_string = ""; var_2248_string = ""; var_2249_int = 0; // 0xc57 PushV
	var_2246_int = var_2117_int; // 0xc58 Mov
	var_2247_string = "pers_vaxxabitka"; // 0xc59 MovS
	var_2248_string = "vaxxabitka_d.xml"; // 0xc5a MovS
	var_2249_int = 4; // 0xc5b MovI
	func_453(var_2246_int, var_2247_string, var_2248_string, var_2249_int); // 0xc5c NEW_2
	var_2250_int = 0; var_2251_string = ""; var_2252_string = ""; var_2253_int = 0; // 0xc5e PushV
	var_2250_int = var_2117_int; // 0xc5f Mov
	var_2251_string = "pers_rat_big"; // 0xc60 MovS
	var_2252_string = "rat_big.xml"; // 0xc61 MovS
	var_2253_int = 3; // 0xc62 MovI
	func_453(var_2250_int, var_2251_string, var_2252_string, var_2253_int); // 0xc63 NEW_2
	var_2254_int = 0; var_2255_string = ""; var_2256_string = ""; var_2257_int = 0; // 0xc65 PushV
	var_2254_int = var_2117_int; // 0xc66 Mov
	var_2255_string = "fog"; // 0xc67 MovS
	var_2256_string = "fog.xml"; // 0xc68 MovS
	var_2257_int = 6; // 0xc69 MovI
	func_479(var_2254_int, var_2255_string, var_2256_string, var_2257_int); // 0xc6a NEW_2
	var_2258_int = 5; // 0xc6c PushI
	var_2259_bool = var_2118_int >= var_2258_int; // 0xc6d GE
	if(var_2259_bool == 0) goto Label_3190; // 0xc6e JumpB
	var_2260_int = 0; var_2261_string = ""; var_2262_string = ""; var_2263_int = 0; // 0xc6f PushV
	var_2260_int = var_2117_int; // 0xc70 Mov
	var_2261_string = "fog"; // 0xc71 MovS
	var_2262_string = "fog_hunter.xml"; // 0xc72 MovS
	var_2263_int = 2; // 0xc73 MovI
	func_479(var_2260_int, var_2261_string, var_2262_string, var_2263_int); // 0xc74 NEW_2
	
Label_3190:
	var_2264_int = 2; // 0xc76 PushI
	var_2265_float = 0; var_2266_int = 0; // 0xc77 PushV
	var_2266_int = var_2118_int; // 0xc78 Mov
	func_1205(var_2265_float, var_2266_int); // 0xc79 NEW_2
	var_2123_int = var_2264_int * var_2265_float; // 0xc7b Mult2
	var_2267_int = var_2123_int; // 0xc7c Push
	if(var_2267_int == 0) goto Label_3205; // 0xc7d JumpB
	var_2268_int = 0; var_2269_string = ""; var_2270_string = ""; var_2271_int = 0; // 0xc7e PushV
	var_2268_int = var_2117_int; // 0xc7f Mov
	var_2269_string = "pers_bomber"; // 0xc80 MovS
	var_2270_string = "bomber.xml"; // 0xc81 MovS
	var_2271_int = var_2123_int; // 0xc82 Mov
	func_453(var_2268_int, var_2269_string, var_2270_string, var_2271_int); // 0xc83 NEW_2
}


func_11279()
{
	var_6044_object = Obj(); var_6045_object = Obj(); // 0x2c0f PushV
	var_6046_object = Obj(); // 0x2c10 PushV
	func_12030(var_6046_object); // 0x2c11 NEW_2
	var_6045_object = var_6046_object; // 0x2c12 Mov
	var_6047_string = "b2AndreiKabak"; // 0x2c14 PushS
	var_6048_string = "pt_map_andrei"; // 0x2c15 PushS
	var_6049_int = 0; // 0x2c16 PushI
	var_6050_int = 531558; // 0x2c17 PushI
	var_6051_float = 0; // 0x2c18 PushV
	func_234(var_6051_float); // 0x2c19 NEW_2
	AddMark(var_6047_string, var_6048_string, var_6049_int, var_6050_int, var_6051_float); // 0x2c1b ObjFunc
	return 2; // 0x2c1d Return
}


func_10260()
{
	var_4659_object = Obj(); var_4660_object = Obj(); // 0x2814 PushV
	var_4661_object = Obj(); // 0x2815 PushV
	func_12030(var_4661_object); // 0x2816 NEW_2
	var_4660_object = var_4661_object; // 0x2817 Mov
	var_4668_string = "b1BigVlad"; // 0x2819 PushS
	var_4669_string = "pt_map_bigvlad"; // 0x281a PushS
	var_4670_int = 3; // 0x281b PushI
	var_4671_int = 520525; // 0x281c PushI
	var_4672_float = 0; // 0x281d PushV
	func_234(var_4672_float); // 0x281e NEW_2
	AddMark(var_4668_string, var_4669_string, var_4670_int, var_4671_int, var_4672_float); // 0x2820 ObjFunc
	return 2; // 0x2822 Return
}


func_8219(var_4119_int, var_4120_int)
{
	var_4122_int = 0; var_4123_int = 0; var_4124_int = 0; var_4125_int = 0; // 0x201b PushV
	var_4126_int = 0; // 0x201c PushI
	var_4127_bool = var_4120_int == var_4126_int; // 0x201d Eq
	if(var_4127_bool == 0) goto Label_8263; // 0x201e JumpB
	var_4128_int = 2; // 0x201f PushI
	var_4129_bool = var_4119_int == var_4128_int; // 0x2020 Eq
	if(var_4129_bool == 0) goto Label_8257; // 0x2021 JumpB
	var_4130_int = 0; // 0x2022 PushV
	func_12047(var_4130_int); // 0x2023 NEW_2
	var_4131_int = 0; // 0x2025 PushI
	var_4132_bool = var_4130_int == var_4131_int; // 0x2026 Eq
	if(var_4132_bool == 0) goto Label_8242; // 0x2027 JumpB
	var_4133_string = "d1q01"; // 0x2028 PushS
	GetVariable(var_4133_string, var_4124_int); // 0x2029 Func
	var_4134_int = 1000; // 0x202b PushI
	var_4135_bool = var_4124_int != var_4134_int; // 0x202c Neq
	if(var_4135_bool == 0) goto Label_8241; // 0x202d JumpB
	var_4136_string = "gameover_fail.xml"; // 0x202e PushS
	GameOver(var_4136_string); // 0x202f Func
	
Label_8241:
	goto Label_8257; // 0x2031 Jump
	
Label_8257:
	var_4137_int = 101; // 0x2041 PushI
	SendWorldWndMessage(var_4137_int); // 0x2042 Func
	var_4138_string = "c_iWM_RealDayChange"; // 0x2044 PushS
	SetVariable(var_4138_string, var_4119_int); // 0x2045 Func
	
Label_8263:
	return 4; // 0x2047 Return
	
Label_8242:
	var_4139_int = 0; // 0x2032 PushV
	func_12047(var_4139_int); // 0x2033 NEW_2
	var_4140_int = 1; // 0x2035 PushI
	var_4141_bool = var_4139_int == var_4140_int; // 0x2036 Eq
	if(var_4141_bool == 0) goto Label_8257; // 0x2037 JumpB
	var_4142_string = "b1q01"; // 0x2038 PushS
	GetVariable(var_4142_string, var_4125_int); // 0x2039 Func
	var_4143_int = 1000; // 0x203b PushI
	var_4144_bool = var_4125_int != var_4143_int; // 0x203c Neq
	if(var_4144_bool == 0) goto Label_8257; // 0x203d JumpB
	var_4145_string = "gameover_fail.xml"; // 0x203e PushS
	GameOver(var_4145_string); // 0x203f Func
}


func_11295()
{
	var_4728_string = ""; var_4729_bool = 0; // 0x2c20 PushV
	var_4728_string = "vagon_army@door1"; // 0x2c21 MovS
	var_4729_bool = 1; // 0x2c22 MovB
	func_151(var_4728_string, var_4729_bool); // 0x2c23 NEW_2
	return 0; // 0x2c25 Return
}


func_10276()
{
	var_4677_string = ""; var_4678_bool = 0; // 0x2825 PushV
	var_4677_string = "termitnik2@door1"; // 0x2826 MovS
	var_4678_bool = 1; // 0x2827 MovB
	func_151(var_4677_string, var_4678_bool); // 0x2828 NEW_2
	return 0; // 0x282a Return
}


func_1060(var_790_bool, var_791_int, var_792_int)
{
	var_793_int = 0; var_794_int = 0; // 0x424 PushV
	var_795_int = 0; // 0x425 PushV
	func_12047(var_795_int); // 0x426 NEW_2
	var_794_int = var_795_int; // 0x427 Mov
	var_799_int = 1; // 0x429 PushI
	var_800_bool = var_794_int == var_799_int; // 0x42a Eq
	if(var_800_bool == 0) goto Label_1081; // 0x42b JumpB
	var_801_bool = 0; // 0x42c PushV
	var_801_bool = 0; // 0x42d MovB
	var_802_int = 0; // 0x42e PushI
	var_803_bool = var_791_int == var_802_int; // 0x42f Eq
	if(var_803_bool == 0) goto Label_1077; // 0x430 JumpB
	var_804_int = 21; // 0x431 PushI
	var_805_bool = var_792_int < var_804_int; // 0x432 LT
	if(var_805_bool == 0) goto Label_1077; // 0x433 JumpB
	var_801_bool = 1; // 0x434 MovB
	
Label_1077:
	if(var_801_bool == 0) goto Label_1080; // 0x435 JumpB
	var_790_bool = 1; // 0x436 MovB
	return 2; // 0x437 Return
	
Label_1080:
	goto Label_1089; // 0x438 Jump
	
Label_1089:
	var_790_bool = 0; // 0x441 MovB
	return 2; // 0x442 Return
	
Label_1081:
	var_806_int = 2; // 0x439 PushI
	var_807_bool = var_794_int == var_806_int; // 0x43a Eq
	if(var_807_bool == 0) goto Label_1089; // 0x43b JumpB
	var_808_int = 5; // 0x43c PushI
	var_809_bool = var_791_int == var_808_int; // 0x43d Eq
	if(var_809_bool == 0) goto Label_1089; // 0x43e JumpB
	var_790_bool = 1; // 0x43f MovB
	return 2; // 0x440 Return
}


func_11302()
{
	var_4740_string = ""; var_4741_bool = 0; // 0x2c27 PushV
	var_4740_string = "house1_kabak@door1"; // 0x2c28 MovS
	var_4741_bool = 1; // 0x2c29 MovB
	func_151(var_4740_string, var_4741_bool); // 0x2c2a NEW_2
	return 0; // 0x2c2c Return
}


func_14378(var_4479_int, var_4480_int)
{
	var_4482_object = Obj(); var_4483_object = Obj(); // 0x382a PushV
	var_4484_string = "Updating game "; // 0x382b PushS
	var_4485_int = var_4484_string + var_4479_int; // 0x382c Add
	var_4486_string = " "; // 0x382d PushS
	var_4487_int = var_4485_int + var_4486_string; // 0x382e Add
	var_4488_int = var_4487_int + var_4480_int; // 0x382f Add
	Trace(var_4488_int); // 0x3830 Func
	var_4489_bool = 0; // 0x3832 PushV
	var_4489_bool = 0; // 0x3833 MovB
	var_4490_int = 8; // 0x3834 PushI
	var_4491_bool = var_4479_int == var_4490_int; // 0x3835 Eq
	if(var_4491_bool == 0) goto Label_14395; // 0x3836 JumpB
	var_4492_int = 0; // 0x3837 PushI
	var_4493_bool = var_4480_int == var_4492_int; // 0x3838 Eq
	if(var_4493_bool == 0) goto Label_14395; // 0x3839 JumpB
	var_4489_bool = 1; // 0x383a MovB
	
Label_14395:
	if(var_4489_bool == 0) goto Label_14403; // 0x383b JumpB
	var_4494_string = "sobor"; // 0x383c PushS
	GetSceneByName(var_4483_object, var_4494_string); // 0x383d Func
	var_4495_string = "aglaja"; // 0x383f PushS
	Trigger(var_4483_object, var_4495_string); // 0x3840 Func
	var_4483_object = 0; // 0x3842 SetNull
	
Label_14403:
	var_4496_bool = 0; // 0x3843 PushV
	var_4496_bool = 0; // 0x3844 MovB
	var_4497_int = 9; // 0x3845 PushI
	var_4498_bool = var_4479_int == var_4497_int; // 0x3846 Eq
	if(var_4498_bool == 0) goto Label_14412; // 0x3847 JumpB
	var_4499_int = 0; // 0x3848 PushI
	var_4500_bool = var_4480_int == var_4499_int; // 0x3849 Eq
	if(var_4500_bool == 0) goto Label_14412; // 0x384a JumpB
	var_4496_bool = 1; // 0x384b MovB
	
Label_14412:
	if(var_4496_bool == 0) goto Label_14429; // 0x384c JumpB
	var_4501_int = 0; // 0x384d PushV
	var_4501_int = 0; // 0x384e MovI
	func_7632(var_4501_int); // 0x384f NEW_2
	var_4536_int = 0; // 0x3851 PushV
	var_4536_int = 1; // 0x3852 MovI
	func_7632(var_4536_int); // 0x3853 NEW_2
	var_4537_int = 0; // 0x3855 PushV
	var_4537_int = 2; // 0x3856 MovI
	func_7632(var_4537_int); // 0x3857 NEW_2
	var_4538_int = 0; // 0x3859 PushV
	var_4538_int = 3; // 0x385a MovI
	func_7632(var_4538_int); // 0x385b NEW_2
	
Label_14429:
	return 2; // 0x385d Return
}


func_10283()
{
	var_5887_string = ""; var_5888_bool = 0; // 0x282c PushV
	var_5887_string = "cot_viktor@door1"; // 0x282d MovS
	var_5888_bool = 0; // 0x282e MovB
	func_151(var_5887_string, var_5888_bool); // 0x282f NEW_2
	return 0; // 0x2831 Return
}


func_11309()
{
	var_4746_string = ""; var_4747_bool = 0; // 0x2c2e PushV
	var_4746_string = "mnogogrannik_han@door1"; // 0x2c2f MovS
	var_4747_bool = 1; // 0x2c30 MovB
	func_151(var_4746_string, var_4747_bool); // 0x2c31 NEW_2
	return 0; // 0x2c33 Return
}


func_10290()
{
	var_6024_string = ""; var_6025_bool = 0; // 0x2833 PushV
	var_6024_string = "cot_anna@door1"; // 0x2834 MovS
	var_6025_bool = 1; // 0x2835 MovB
	func_151(var_6024_string, var_6025_bool); // 0x2836 NEW_2
	return 0; // 0x2838 Return
}


func_11316()
{
	var_6212_string = "b8DankoLetter2"; // 0x2c35 PushS
	var_6213_int = 1; // 0x2c36 PushI
	SetVariable(var_6212_string, var_6213_int); // 0x2c37 Func
	return 0; // 0x2c39 Return
}


func_10297()
{
	var_5895_string = ""; var_5896_bool = 0; // 0x283a PushV
	var_5895_string = "cot_anna@door1"; // 0x283b MovS
	var_5896_bool = 0; // 0x283c MovB
	func_151(var_5895_string, var_5896_bool); // 0x283d NEW_2
	return 0; // 0x283f Return
}


func_11322()
{
	var_6226_string = "b9KlaraLetter"; // 0x2c3b PushS
	var_6227_int = 1; // 0x2c3c PushI
	SetVariable(var_6226_string, var_6227_int); // 0x2c3d Func
	return 0; // 0x2c3f Return
}


func_59()
{
	var_4_object = Obj(); var_5_object = Obj(); var_6_bool = 0; var_7_cvector = CVector(0,0,0); var_8_cvector = CVector(0,0,0); var_9_object = Obj(); var_10_object = Obj(); var_11_bool = 0; var_12_cvector = CVector(0,0,0); var_13_cvector = CVector(0,0,0); // 0x3b PushV
	var_14_string = "player"; // 0x3c PushS
	FindActor(var_9_object, var_14_string); // 0x3d Func
	GetMainOutdoorScene(var_10_object); // 0x3f Func
	var_15_bool = var_10_object == 0; // 0x41 Not
	if(var_15_bool == 0) goto Label_71; // 0x42 JumpB
	var_16_string = "Starting scene not found"; // 0x43 PushS
	Trace(var_16_string); // 0x44 Func
	return 10; // 0x46 Return
	
Label_71:
	var_17_string = "pt_birth_Burah"; // 0x47 PushS
	GetLocator(var_17_string, var_11_bool, var_12_cvector, var_13_cvector); // 0x48 ObjFunc
	var_18_bool = var_11_bool; // 0x4a Push
	if(var_18_bool == 0) goto Label_78; // 0x4b JumpB
	Teleport(var_9_object, var_10_object, var_12_cvector, var_13_cvector); // 0x4c Func
	
Label_78:
	return 10; // 0x4e Return
}


func_4160(var_3427_int, var_3428_int, var_3429_int)
{
	var_3430_int = 0; var_3431_int = 0; var_3432_int = 0; var_3433_int = 0; var_3434_int = 0; var_3435_int = 0; var_3436_int = 0; var_3437_int = 0; // 0x1040 PushV
	var_3438_bool = 0; // 0x1041 PushV
	var_3438_bool = 0; // 0x1042 MovB
	var_3439_int = 8; // 0x1043 PushI
	var_3440_bool = var_3429_int > var_3439_int; // 0x1044 GT
	if(var_3440_bool == 0) goto Label_4170; // 0x1045 JumpB
	var_3441_int = 21; // 0x1046 PushI
	var_3442_bool = var_3429_int < var_3441_int; // 0x1047 LT
	if(var_3442_bool == 0) goto Label_4170; // 0x1048 JumpB
	var_3438_bool = 1; // 0x1049 MovB
	
Label_4170:
	if(var_3438_bool == 0) goto Label_4247; // 0x104a JumpB
	var_3443_int = 0; var_3444_string = ""; var_3445_string = ""; var_3446_int = 0; // 0x104b PushV
	var_3443_int = var_3427_int; // 0x104c Mov
	var_3444_string = "pers_rat"; // 0x104d MovS
	var_3445_string = "rat.xml"; // 0x104e MovS
	var_3446_int = 4; // 0x104f MovI
	func_453(var_3443_int, var_3444_string, var_3445_string, var_3446_int); // 0x1050 NEW_2
	var_3447_int = 0; var_3448_string = ""; var_3449_string = ""; var_3450_int = 0; // 0x1052 PushV
	var_3447_int = var_3427_int; // 0x1053 Mov
	var_3448_string = "pers_alkash"; // 0x1054 MovS
	var_3449_string = "alkash.xml"; // 0x1055 MovS
	var_3450_int = 2; // 0x1056 MovI
	func_453(var_3447_int, var_3448_string, var_3449_string, var_3450_int); // 0x1057 NEW_2
	var_3451_int = 0; var_3452_string = ""; var_3453_string = ""; var_3454_int = 0; // 0x1059 PushV
	var_3451_int = var_3427_int; // 0x105a Mov
	var_3452_string = "pers_dohodyaga"; // 0x105b MovS
	var_3453_string = "dohodyaga.xml"; // 0x105c MovS
	var_3454_int = 1; // 0x105d MovI
	func_453(var_3451_int, var_3452_string, var_3453_string, var_3454_int); // 0x105e NEW_2
	var_3455_int = 2; // 0x1060 PushI
	var_3456_float = 0; var_3457_int = 0; // 0x1061 PushV
	var_3457_int = var_3428_int; // 0x1062 Mov
	func_1115(var_3456_float, var_3457_int); // 0x1063 NEW_2
	var_3434_int = var_3455_int * var_3456_float; // 0x1065 Mult2
	var_3458_int = var_3434_int; // 0x1066 Push
	if(var_3458_int == 0) goto Label_4207; // 0x1067 JumpB
	var_3459_int = 0; var_3460_string = ""; var_3461_string = ""; var_3462_int = 0; // 0x1068 PushV
	var_3459_int = var_3427_int; // 0x1069 Mov
	var_3460_string = "pers_grabitel"; // 0x106a MovS
	var_3461_string = "grabitel.xml"; // 0x106b MovS
	var_3462_int = var_3434_int; // 0x106c Mov
	func_453(var_3459_int, var_3460_string, var_3461_string, var_3462_int); // 0x106d NEW_2
	
Label_4207:
	var_3463_int = 1; // 0x106f PushI
	var_3464_int = var_3428_int + var_3463_int; // 0x1070 Add
	var_3465_int = 2; // 0x1071 PushI
	var_3466_bool = var_3464_int >= var_3465_int; // 0x1072 GE
	if(var_3466_bool == 0) goto Label_4231; // 0x1073 JumpB
	var_3467_int = 0; var_3468_string = ""; var_3469_string = ""; var_3470_int = 0; // 0x1074 PushV
	var_3467_int = var_3427_int; // 0x1075 Mov
	var_3468_string = "pers_patrool"; // 0x1076 MovS
	var_3469_string = "patrol.xml"; // 0x1077 MovS
	var_3470_int = 2; // 0x1078 MovI
	func_453(var_3467_int, var_3468_string, var_3469_string, var_3470_int); // 0x1079 NEW_2
	var_3471_bool = 0; var_3472_int = 0; // 0x107b PushV
	var_3472_int = var_3428_int; // 0x107c Mov
	func_1322(var_3471_bool, var_3472_int); // 0x107d NEW_2
	if(var_3471_bool == 0) goto Label_4231; // 0x107f JumpB
	var_3473_int = 0; var_3474_string = ""; var_3475_string = ""; var_3476_int = 0; // 0x1080 PushV
	var_3473_int = var_3427_int; // 0x1081 Mov
	var_3474_string = "pers_soldat_hand"; // 0x1082 MovS
	var_3475_string = "soldier_patrol.xml"; // 0x1083 MovS
	var_3476_int = 1; // 0x1084 MovI
	func_453(var_3473_int, var_3474_string, var_3475_string, var_3476_int); // 0x1085 NEW_2
	
Label_4231:
	var_3477_int = 1; // 0x1087 PushI
	var_3478_float = 0; var_3479_int = 0; // 0x1088 PushV
	var_3479_int = var_3428_int; // 0x1089 Mov
	func_1205(var_3478_float, var_3479_int); // 0x108a NEW_2
	var_3435_int = var_3477_int * var_3478_float; // 0x108c Mult2
	var_3480_int = var_3435_int; // 0x108d Push
	if(var_3480_int == 0) goto Label_4246; // 0x108e JumpB
	var_3481_int = 0; var_3482_string = ""; var_3483_string = ""; var_3484_int = 0; // 0x108f PushV
	var_3481_int = var_3427_int; // 0x1090 Mov
	var_3482_string = "pers_bomber"; // 0x1091 MovS
	var_3483_string = "bomber.xml"; // 0x1092 MovS
	var_3484_int = var_3435_int; // 0x1093 Mov
	func_453(var_3481_int, var_3482_string, var_3483_string, var_3484_int); // 0x1094 NEW_2
	
Label_4246:
	goto Label_4322; // 0x1096 Jump
	
Label_4322:
	var_3485_bool = 0; var_3486_int = 0; // 0x10e2 PushV
	var_3486_int = var_3428_int; // 0x10e3 Mov
	func_1322(var_3485_bool, var_3486_int); // 0x10e4 NEW_2
	if(var_3485_bool == 0) goto Label_4334; // 0x10e6 JumpB
	var_3487_int = 0; var_3488_string = ""; var_3489_string = ""; var_3490_int = 0; // 0x10e7 PushV
	var_3487_int = var_3427_int; // 0x10e8 Mov
	var_3488_string = "pers_sanitar"; // 0x10e9 MovS
	var_3489_string = "sanitar.xml"; // 0x10ea MovS
	var_3490_int = 2; // 0x10eb MovI
	func_453(var_3487_int, var_3488_string, var_3489_string, var_3490_int); // 0x10ec NEW_2
	
Label_4334:
	return 8; // 0x10ee Return
	
Label_4247:
	var_3491_int = 0; var_3492_string = ""; var_3493_string = ""; var_3494_int = 0; // 0x1097 PushV
	var_3491_int = var_3427_int; // 0x1098 Mov
	var_3492_string = "pers_rat"; // 0x1099 MovS
	var_3493_string = "rat.xml"; // 0x109a MovS
	var_3494_int = 8; // 0x109b MovI
	func_453(var_3491_int, var_3492_string, var_3493_string, var_3494_int); // 0x109c NEW_2
	var_3495_int = 0; var_3496_string = ""; var_3497_string = ""; var_3498_int = 0; // 0x109e PushV
	var_3495_int = var_3427_int; // 0x109f Mov
	var_3496_string = "pers_alkash"; // 0x10a0 MovS
	var_3497_string = "alkash.xml"; // 0x10a1 MovS
	var_3498_int = 1; // 0x10a2 MovI
	func_453(var_3495_int, var_3496_string, var_3497_string, var_3498_int); // 0x10a3 NEW_2
	var_3499_int = 0; var_3500_string = ""; var_3501_string = ""; var_3502_int = 0; // 0x10a5 PushV
	var_3499_int = var_3427_int; // 0x10a6 Mov
	var_3500_string = "pers_dohodyaga"; // 0x10a7 MovS
	var_3501_string = "dohodyaga.xml"; // 0x10a8 MovS
	var_3502_int = 1; // 0x10a9 MovI
	func_453(var_3499_int, var_3500_string, var_3501_string, var_3502_int); // 0x10aa NEW_2
	var_3503_int = 3; // 0x10ac PushI
	var_3504_float = 0; var_3505_int = 0; // 0x10ad PushV
	var_3505_int = var_3428_int; // 0x10ae Mov
	func_1115(var_3504_float, var_3505_int); // 0x10af NEW_2
	var_3436_int = var_3503_int * var_3504_float; // 0x10b1 Mult2
	var_3506_int = var_3436_int; // 0x10b2 Push
	if(var_3506_int == 0) goto Label_4283; // 0x10b3 JumpB
	var_3507_int = 0; var_3508_string = ""; var_3509_string = ""; var_3510_int = 0; // 0x10b4 PushV
	var_3507_int = var_3427_int; // 0x10b5 Mov
	var_3508_string = "pers_grabitel"; // 0x10b6 MovS
	var_3509_string = "grabitel.xml"; // 0x10b7 MovS
	var_3510_int = var_3436_int; // 0x10b8 Mov
	func_453(var_3507_int, var_3508_string, var_3509_string, var_3510_int); // 0x10b9 NEW_2
	
Label_4283:
	var_3511_int = 1; // 0x10bb PushI
	var_3512_int = var_3428_int + var_3511_int; // 0x10bc Add
	var_3513_int = 2; // 0x10bd PushI
	var_3514_bool = var_3512_int >= var_3513_int; // 0x10be GE
	if(var_3514_bool == 0) goto Label_4307; // 0x10bf JumpB
	var_3515_int = 0; var_3516_string = ""; var_3517_string = ""; var_3518_int = 0; // 0x10c0 PushV
	var_3515_int = var_3427_int; // 0x10c1 Mov
	var_3516_string = "pers_patrool"; // 0x10c2 MovS
	var_3517_string = "patrol.xml"; // 0x10c3 MovS
	var_3518_int = 1; // 0x10c4 MovI
	func_453(var_3515_int, var_3516_string, var_3517_string, var_3518_int); // 0x10c5 NEW_2
	var_3519_bool = 0; var_3520_int = 0; // 0x10c7 PushV
	var_3520_int = var_3428_int; // 0x10c8 Mov
	func_1322(var_3519_bool, var_3520_int); // 0x10c9 NEW_2
	if(var_3519_bool == 0) goto Label_4307; // 0x10cb JumpB
	var_3521_int = 0; var_3522_string = ""; var_3523_string = ""; var_3524_int = 0; // 0x10cc PushV
	var_3521_int = var_3427_int; // 0x10cd Mov
	var_3522_string = "pers_soldat_hand"; // 0x10ce MovS
	var_3523_string = "soldier_patrol.xml"; // 0x10cf MovS
	var_3524_int = 1; // 0x10d0 MovI
	func_453(var_3521_int, var_3522_string, var_3523_string, var_3524_int); // 0x10d1 NEW_2
	
Label_4307:
	var_3525_int = 1; // 0x10d3 PushI
	var_3526_float = 0; var_3527_int = 0; // 0x10d4 PushV
	var_3527_int = var_3428_int; // 0x10d5 Mov
	func_1205(var_3526_float, var_3527_int); // 0x10d6 NEW_2
	var_3437_int = var_3525_int * var_3526_float; // 0x10d8 Mult2
	var_3528_int = var_3437_int; // 0x10d9 Push
	if(var_3528_int == 0) goto Label_4322; // 0x10da JumpB
	var_3529_int = 0; var_3530_string = ""; var_3531_string = ""; var_3532_int = 0; // 0x10db PushV
	var_3529_int = var_3427_int; // 0x10dc Mov
	var_3530_string = "pers_bomber"; // 0x10dd MovS
	var_3531_string = "bomber.xml"; // 0x10de MovS
	var_3532_int = var_3437_int; // 0x10df Mov
	func_453(var_3529_int, var_3530_string, var_3531_string, var_3532_int); // 0x10e0 NEW_2
}


func_10304()
{
	var_4722_string = ""; var_4723_bool = 0; // 0x2841 PushV
	var_4722_string = "house_vlad@door2"; // 0x2842 MovS
	var_4723_bool = 1; // 0x2843 MovB
	func_151(var_4722_string, var_4723_bool); // 0x2844 NEW_2
	return 0; // 0x2846 Return
}


func_11328()
{
	var_5534_int = 0; var_5535_string = ""; // 0x2c41 PushV
	var_5535_string = "map_chertez_state"; // 0x2c42 MovS
	func_106(var_5534_int, var_5535_string); // 0x2c43 NEW_2
	var_5536_int = 2; // 0x2c45 PushI
	var_5537_bool = var_5534_int <= var_5536_int; // 0x2c46 LE
	if(var_5537_bool == 0) goto Label_11344; // 0x2c47 JumpB
	var_5538_string = "map_chertez_state"; // 0x2c48 PushS
	var_5539_int = 2; // 0x2c49 PushI
	SetVariable(var_5538_string, var_5539_int); // 0x2c4a Func
	var_5540_string = "map_chertez_force"; // 0x2c4c PushS
	var_5541_int = 1; // 0x2c4d PushI
	SetVariable(var_5540_string, var_5541_int); // 0x2c4e Func
	
Label_11344:
	return 0; // 0x2c50 Return
}


func_7233()
{
	var_313_string = "lc_house3_05_i2"; // 0x1c42 PushS
	add(var_313_string); // 0x1c43 ObjFunc
	var_314_string = "lc_house3_05"; // 0x1c45 PushS
	add(var_314_string); // 0x1c46 ObjFunc
	var_315_string = "lc_house3_06_i2"; // 0x1c48 PushS
	add(var_315_string); // 0x1c49 ObjFunc
	var_316_string = "lc_house3_06"; // 0x1c4b PushS
	add(var_316_string); // 0x1c4c ObjFunc
	var_317_string = "lc_House6_06"; // 0x1c4e PushS
	add(var_317_string); // 0x1c4f ObjFunc
	var_318_string = "lc_house3_04_i2"; // 0x1c51 PushS
	add(var_318_string); // 0x1c52 ObjFunc
	var_319_string = "lc_house3_04"; // 0x1c54 PushS
	add(var_319_string); // 0x1c55 ObjFunc
	var_320_string = "house3_plus_03_i2"; // 0x1c57 PushS
	add(var_320_string); // 0x1c58 ObjFunc
	return 0; // 0x1c5a Return
}


func_6212()
{
	var_226_string = "r4_house_2_02"; // 0x1845 PushS
	add(var_226_string); // 0x1846 ObjFunc
	var_227_string = "r4_house3_03_i2"; // 0x1848 PushS
	add(var_227_string); // 0x1849 ObjFunc
	var_228_string = "r4_house3_03"; // 0x184b PushS
	add(var_228_string); // 0x184c ObjFunc
	var_229_string = "r4_house4_02_i2"; // 0x184e PushS
	add(var_229_string); // 0x184f ObjFunc
	var_230_string = "r4_house4_02"; // 0x1851 PushS
	add(var_230_string); // 0x1852 ObjFunc
	var_231_string = "r4_house4_01_i2"; // 0x1854 PushS
	add(var_231_string); // 0x1855 ObjFunc
	var_232_string = "r4_house4_01"; // 0x1857 PushS
	add(var_232_string); // 0x1858 ObjFunc
	var_233_string = "r4_house3_02_i2"; // 0x185a PushS
	add(var_233_string); // 0x185b ObjFunc
	var_234_string = "r4_house3_02"; // 0x185d PushS
	add(var_234_string); // 0x185e ObjFunc
	var_235_string = "r4_house_2_01"; // 0x1860 PushS
	add(var_235_string); // 0x1861 ObjFunc
	var_236_string = "r4_house3_01_i2"; // 0x1863 PushS
	add(var_236_string); // 0x1864 ObjFunc
	var_237_string = "r4_house3_01"; // 0x1866 PushS
	add(var_237_string); // 0x1867 ObjFunc
	var_238_string = "r4_house7_01"; // 0x1869 PushS
	add(var_238_string); // 0x186a ObjFunc
	var_239_string = "r4_House6_01"; // 0x186c PushS
	add(var_239_string); // 0x186d ObjFunc
	var_240_string = "r4_house_2_03"; // 0x186f PushS
	add(var_240_string); // 0x1870 ObjFunc
	var_241_string = "r4_House6_03"; // 0x1872 PushS
	add(var_241_string); // 0x1873 ObjFunc
	var_242_string = "r4_house_2_04"; // 0x1875 PushS
	add(var_242_string); // 0x1876 ObjFunc
	return 0; // 0x1878 Return
}


func_1091(var_767_float, var_768_int)
{
	var_769_int = 1; // 0x444 PushI
	var_770_int = var_768_int + var_769_int; // 0x445 Add
	var_771_int = 7; // 0x446 PushI
	var_772_bool = var_770_int == var_771_int; // 0x447 Eq
	if(var_772_bool == 0) goto Label_1099; // 0x448 JumpB
	var_767_float = 2; // 0x449 MovI
	return 0; // 0x44a Return
	
Label_1099:
	var_773_int = 1; // 0x44b PushI
	var_774_int = var_768_int + var_773_int; // 0x44c Add
	var_775_int = 8; // 0x44d PushI
	var_776_bool = var_774_int == var_775_int; // 0x44e Eq
	if(var_776_bool == 0) goto Label_1106; // 0x44f JumpB
	var_767_float = 0; // 0x450 MovI
	return 0; // 0x451 Return
	
Label_1106:
	var_777_int = 1; // 0x452 PushI
	var_778_int = var_768_int + var_777_int; // 0x453 Add
	var_779_int = 1; // 0x454 PushI
	var_780_bool = var_778_int == var_779_int; // 0x455 Eq
	if(var_780_bool == 0) goto Label_1113; // 0x456 JumpB
	var_767_float = 0; // 0x457 MovI
	return 0; // 0x458 Return
	
Label_1113:
	var_767_float = 1; // 0x459 MovI
	return 0; // 0x45a Return
}


func_5188(var_1295_int, var_1296_int, var_1297_object, var_1298_object, var_1299_object, var_1300_object)
{
	var_1301_int = 0; // 0x1445 PushI
	var_1302_bool = var_1296_int == var_1301_int; // 0x1446 Eq
	if(var_1302_bool == 0) goto Label_5228; // 0x1447 JumpB
	var_1303_int = 0; var_1304_bool = 0; // 0x1448 PushV
	var_1303_int = 4; // 0x1449 MovI
	var_1304_bool = 0; // 0x144a MovB
	func_746(var_1303_int, var_1304_bool); // 0x144b NEW_2
	var_1305_int = 0; var_1306_bool = 0; var_1307_int = 0; // 0x144d PushV
	var_1305_int = 4; // 0x144e MovI
	var_1306_bool = 0; // 0x144f MovB
	var_1307_int = 1; // 0x1450 MovI
	func_763(var_1305_int, var_1306_bool, var_1307_int); // 0x1451 NEW_2
	var_1308_int = 0; var_1309_int = 0; var_1310_object = Obj(); var_1311_object = Obj(); var_1312_object = Obj(); // 0x1453 PushV
	var_1308_int = 4; // 0x1454 MovI
	var_1309_int = var_1295_int; // 0x1455 Mov
	var_1310_object = var_1297_object; // 0x1456 Mov
	var_1311_object = var_1298_object; // 0x1457 Mov
	var_1312_object = var_1299_object; // 0x1458 Mov
	func_572(var_1309_int, var_1310_object, var_1311_object, var_1312_object); // 0x1459 NEW_2
	var_1313_object = Obj(); var_1314_int = 0; // 0x145b PushV
	var_1313_object = var_1300_object; // 0x145c Mov
	var_1314_int = 0; // 0x145d MovI
	func_255(var_1314_int); // 0x145e NEW_2
	var_1315_int = 0; var_1316_bool = 0; var_1317_int = 0; // 0x1460 PushV
	var_1315_int = 4; // 0x1461 MovI
	var_1316_bool = 0; // 0x1462 MovB
	var_1317_int = 4; // 0x1463 MovI
	func_820(var_1315_int, var_1316_bool, var_1317_int); // 0x1464 NEW_2
	var_1318_int = 0; var_1319_bool = 0; var_1320_int = 0; // 0x1466 PushV
	var_1318_int = 4; // 0x1467 MovI
	var_1319_bool = 0; // 0x1468 MovB
	var_1320_int = 4; // 0x1469 MovI
	func_882(var_1318_int, var_1319_bool, var_1320_int); // 0x146a NEW_2
	
Label_5228:
	var_1321_int = 0; var_1322_int = 0; // 0x146c PushV
	var_1321_int = 4; // 0x146d MovI
	var_1322_int = var_1296_int; // 0x146e Mov
	func_970(var_1321_int, var_1322_int); // 0x146f NEW_2
	var_1335_int = 0; var_1336_int = 0; var_1337_int = 0; // 0x1471 PushV
	var_1335_int = 4; // 0x1472 MovI
	var_1336_int = var_1295_int; // 0x1473 Mov
	var_1337_int = var_1296_int; // 0x1474 Mov
	func_1847(var_1335_int, var_1336_int, var_1337_int); // 0x1475 NEW_2
	return 0; // 0x1477 Return
}


func_10311()
{
	var_4734_string = ""; var_4735_bool = 0; // 0x2848 PushV
	var_4734_string = "cot_maria@door1"; // 0x2849 MovS
	var_4735_bool = 1; // 0x284a MovB
	func_151(var_4734_string, var_4735_bool); // 0x284b NEW_2
	return 0; // 0x284d Return
}


func_8264(var_4157_int, var_4158_int)
{
	var_4160_object = Obj(); var_4161_object = Obj(); var_4162_string = ""; var_4163_int = 0; var_4164_int = 0; var_4165_int = 0; var_4166_object = Obj(); var_4167_object = Obj(); var_4168_string = ""; var_4169_int = 0; var_4170_int = 0; var_4171_int = 0; // 0x2048 PushV
	var_4172_bool = 0; // 0x2049 PushV
	var_4172_bool = 0; // 0x204a MovB
	var_4173_int = 5; // 0x204b PushI
	var_4174_bool = var_4158_int == var_4173_int; // 0x204c Eq
	if(var_4174_bool == 0) goto Label_8274; // 0x204d JumpB
	var_4175_int = 7; // 0x204e PushI
	var_4176_bool = var_4157_int >= var_4175_int; // 0x204f GE
	if(var_4176_bool == 0) goto Label_8274; // 0x2050 JumpB
	var_4172_bool = 1; // 0x2051 MovB
	
Label_8274:
	if(var_4172_bool == 0) goto Label_8285; // 0x2052 JumpB
	var_4177_int = 0; // 0x2053 PushV
	func_12047(var_4177_int); // 0x2054 NEW_2
	var_4178_int = 2; // 0x2056 PushI
	var_4179_bool = var_4177_int != var_4178_int; // 0x2057 Neq
	if(var_4179_bool == 0) goto Label_8284; // 0x2058 JumpB
	func_7728(); // 0x205a NEW_2
	
Label_8284:
	goto Label_8304; // 0x205c Jump
	
Label_8304:
	var_4226_bool = 0; // 0x2070 PushV
	var_4226_bool = 0; // 0x2071 MovB
	var_4227_int = 7; // 0x2072 PushI
	var_4228_bool = var_4158_int == var_4227_int; // 0x2073 Eq
	if(var_4228_bool == 0) goto Label_8313; // 0x2074 JumpB
	var_4229_int = 1; // 0x2075 PushI
	var_4230_bool = var_4157_int != var_4229_int; // 0x2076 Neq
	if(var_4230_bool == 0) goto Label_8313; // 0x2077 JumpB
	var_4226_bool = 1; // 0x2078 MovB
	
Label_8313:
	if(var_4226_bool == 0) goto Label_8317; // 0x2079 JumpB
	var_4231_int = 100; // 0x207a PushI
	SendWorldWndMessage(var_4231_int); // 0x207b Func
	
Label_8317:
	var_4232_int = 0; // 0x207d PushI
	var_4233_bool = var_4158_int == var_4232_int; // 0x207e Eq
	if(var_4233_bool == 0) goto Label_8405; // 0x207f JumpB
	func_8442(); // 0x2081 NEW_2
	func_8517(); // 0x2084 NEW_2
	var_4327_int = 6; // 0x2086 PushI
	var_4328_bool = var_4157_int == var_4327_int; // 0x2087 Eq
	if(var_4328_bool == 0) goto Label_8338; // 0x2088 JumpB
	GetMainOutdoorScene(var_4166_object); // 0x2089 Func
	var_4329_string = "shed_corpse"; // 0x208b PushS
	var_4330_string = "splash_object_wo_pf.bin"; // 0x208c PushS
	var_4331_cvector = CVector(0.0, 0.0, 0.0); // 0x208d PushVec
	AddScriptedActor(var_4167_object, var_4329_string, var_4330_string, var_4166_object, var_4331_cvector); // 0x208e Func
	var_4167_object = 0; // 0x2090 SetNull
	var_4166_object = 0; // 0x2091 SetNull
	
Label_8338:
	var_4332_int = 9; // 0x2092 PushI
	var_4333_bool = var_4157_int == var_4332_int; // 0x2093 Eq
	if(var_4333_bool == 0) goto Label_8344; // 0x2094 JumpB
	func_8566(); // 0x2096 NEW_2
	
Label_8344:
	var_4347_int = 1; // 0x2098 PushI
	var_4348_bool = var_4157_int != var_4347_int; // 0x2099 Neq
	if(var_4348_bool == 0) goto Label_8405; // 0x209a JumpB
	var_4349_int = 0; // 0x209b PushV
	func_12047(var_4349_int); // 0x209c NEW_2
	var_4350_int = 1; // 0x209e PushI
	var_4351_bool = var_4349_int == var_4350_int; // 0x209f Eq
	if(var_4351_bool == 0) goto Label_8363; // 0x20a0 JumpB
	var_4352_string = "b"; // 0x20a1 PushS
	var_4353_int = 1; // 0x20a2 PushI
	var_4354_int = var_4157_int - var_4353_int; // 0x20a3 Sub
	var_4355_int = var_4352_string + var_4354_int; // 0x20a4 Add
	var_4356_string = "q01"; // 0x20a5 PushS
	var_4357_int = var_4355_int + var_4356_string; // 0x20a6 Add
	GetVariable(var_4357_int, var_4169_int); // 0x20a7 Func
	var_4168_string = "volonteers_burah"; // 0x20a9 MovS
	goto Label_8388; // 0x20aa Jump
	
Label_8388:
	Trace(var_4168_string); // 0x20c4 Func
	var_4358_int = 1000; // 0x20c6 PushI
	var_4359_bool = var_4169_int == var_4358_int; // 0x20c7 Eq
	if(var_4359_bool == 0) goto Label_8399; // 0x20c8 JumpB
	var_4360_bool = 0; var_4361_string = ""; var_4362_string = ""; var_4363_string = ""; // 0x20c9 PushV
	var_4361_string = var_4168_string; // 0x20ca Mov
	var_4362_string = "rescue_locked"; // 0x20cb MovS
	var_4363_string = ""; // 0x20cc MovS
	func_201(var_4360_bool, var_4361_string, var_4362_string, var_4363_string); // 0x20cd NEW_2
	
Label_8399:
	var_4367_bool = 0; var_4368_string = ""; var_4369_string = ""; var_4370_string = ""; // 0x20cf PushV
	var_4368_string = var_4168_string; // 0x20d0 Mov
	var_4369_string = "update"; // 0x20d1 MovS
	var_4370_string = ""; // 0x20d2 MovS
	func_201(var_4367_bool, var_4368_string, var_4369_string, var_4370_string); // 0x20d3 NEW_2
	
Label_8405:
	var_4371_bool = 0; // 0x20d5 PushV
	var_4371_bool = 0; // 0x20d6 MovB
	var_4372_int = 6; // 0x20d7 PushI
	var_4373_bool = var_4157_int == var_4372_int; // 0x20d8 Eq
	if(var_4373_bool == 0) goto Label_8414; // 0x20d9 JumpB
	var_4374_int = 0; // 0x20da PushI
	var_4375_bool = var_4158_int == var_4374_int; // 0x20db Eq
	if(var_4375_bool == 0) goto Label_8414; // 0x20dc JumpB
	var_4371_bool = 1; // 0x20dd MovB
	
Label_8414:
	if(var_4371_bool == 0) goto Label_8418; // 0x20de JumpB
	func_7848(); // 0x20e0 NEW_2
	
Label_8418:
	var_4378_bool = 0; // 0x20e2 PushV
	var_4378_bool = 0; // 0x20e3 MovB
	var_4379_int = 7; // 0x20e4 PushI
	var_4380_bool = var_4157_int == var_4379_int; // 0x20e5 Eq
	if(var_4380_bool == 0) goto Label_8427; // 0x20e6 JumpB
	var_4381_int = 0; // 0x20e7 PushI
	var_4382_bool = var_4158_int == var_4381_int; // 0x20e8 Eq
	if(var_4382_bool == 0) goto Label_8427; // 0x20e9 JumpB
	var_4378_bool = 1; // 0x20ea MovB
	
Label_8427:
	if(var_4378_bool == 0) goto Label_8441; // 0x20eb JumpB
	var_4383_object = GlobalVars[14]; // 0x20ec PushGE
	size(var_4170_int); // 0x20ed ObjFunc
	var_4171_int = 0; // 0x20ef MovI
	
Label_8432:
	var_4384_bool = var_4171_int < var_4170_int; // 0x20f0 LT
	if(var_4384_bool == 0) goto Label_8441; // 0x20f1 JumpB
	var_4385_int = 0; // 0x20f2 PushV
	var_4385_int = var_4171_int; // 0x20f3 Mov
	func_7555(var_4385_int); // 0x20f4 NEW_2
	var_4438_int = 1; // 0x20f6 PushI
	var_4171_int = var_4171_int + var_4438_int; // 0x20f7 Add2
	goto Label_8432; // 0x20f8 Jump
	
Label_8441:
	return 12; // 0x20f9 Return
	
Label_8363:
	var_4439_int = 0; // 0x20ab PushV
	func_12047(var_4439_int); // 0x20ac NEW_2
	var_4440_int = 0; // 0x20ae PushI
	var_4441_bool = var_4439_int == var_4440_int; // 0x20af Eq
	if(var_4441_bool == 0) goto Label_8379; // 0x20b0 JumpB
	var_4442_string = "d"; // 0x20b1 PushS
	var_4443_int = 1; // 0x20b2 PushI
	var_4444_int = var_4157_int - var_4443_int; // 0x20b3 Sub
	var_4445_int = var_4442_string + var_4444_int; // 0x20b4 Add
	var_4446_string = "q01"; // 0x20b5 PushS
	var_4447_int = var_4445_int + var_4446_string; // 0x20b6 Add
	GetVariable(var_4447_int, var_4169_int); // 0x20b7 Func
	var_4168_string = "volonteers_danko"; // 0x20b9 MovS
	goto Label_8388; // 0x20ba Jump
	
Label_8379:
	var_4448_string = "k"; // 0x20bb PushS
	var_4449_int = 1; // 0x20bc PushI
	var_4450_int = var_4157_int - var_4449_int; // 0x20bd Sub
	var_4451_int = var_4448_string + var_4450_int; // 0x20be Add
	var_4452_string = "q01"; // 0x20bf PushS
	var_4453_int = var_4451_int + var_4452_string; // 0x20c0 Add
	GetVariable(var_4453_int, var_4169_int); // 0x20c1 Func
	var_4168_string = "volonteers_klara"; // 0x20c3 MovS
	
Label_8285:
	var_4454_bool = 0; // 0x205d PushV
	var_4454_bool = 0; // 0x205e MovB
	var_4455_int = 22; // 0x205f PushI
	var_4456_bool = var_4158_int == var_4455_int; // 0x2060 Eq
	if(var_4456_bool == 0) goto Label_8294; // 0x2061 JumpB
	var_4457_int = 7; // 0x2062 PushI
	var_4458_bool = var_4157_int >= var_4457_int; // 0x2063 GE
	if(var_4458_bool == 0) goto Label_8294; // 0x2064 JumpB
	var_4454_bool = 1; // 0x2065 MovB
	
Label_8294:
	if(var_4454_bool == 0) goto Label_8304; // 0x2066 JumpB
	var_4459_int = 0; // 0x2067 PushV
	func_12047(var_4459_int); // 0x2068 NEW_2
	var_4460_int = 2; // 0x206a PushI
	var_4461_bool = var_4459_int != var_4460_int; // 0x206b Neq
	if(var_4461_bool == 0) goto Label_8304; // 0x206c JumpB
	func_7791(); // 0x206e NEW_2
}


func_10318()
{
	var_4610_string = ""; var_4611_bool = 0; // 0x284f PushV
	var_4610_string = "warehouse_rubin@door1"; // 0x2850 MovS
	var_4611_bool = 1; // 0x2851 MovB
	func_151(var_4610_string, var_4611_bool); // 0x2852 NEW_2
	return 0; // 0x2854 Return
}


func_9295(var_3168_int, var_3169_int, var_3170_int)
{
	var_3171_object = Obj(); var_3172_object = Obj(); var_3173_object = Obj(); var_3174_object = Obj(); var_3175_object = Obj(); var_3176_object = Obj(); var_3177_object = Obj(); var_3178_object = Obj(); // 0x244f PushV
	var_3179_object = GlobalVars[8]; // 0x2450 PushGE
	get(var_3175_object, var_3168_int); // 0x2451 ObjFunc
	var_3180_object = GlobalVars[9]; // 0x2453 PushGE
	get(var_3176_object, var_3168_int); // 0x2454 ObjFunc
	var_3181_object = GlobalVars[10]; // 0x2456 PushGE
	get(var_3177_object, var_3168_int); // 0x2457 ObjFunc
	var_3182_object = GlobalVars[13]; // 0x2459 PushGE
	get(var_3178_object, var_3168_int); // 0x245a ObjFunc
	var_3183_int = 0; // 0x245c PushI
	var_3184_bool = var_3168_int == var_3183_int; // 0x245d Eq
	if(var_3184_bool == 0) goto Label_9321; // 0x245e JumpB
	var_3185_int = 0; var_3186_int = 0; var_3187_object = Obj(); var_3188_object = Obj(); var_3189_object = Obj(); var_3190_object = Obj(); // 0x245f PushV
	var_3185_int = var_3169_int; // 0x2460 Mov
	var_3186_int = var_3170_int; // 0x2461 Mov
	var_3187_object = var_3175_object; // 0x2462 Mov
	var_3188_object = var_3176_object; // 0x2463 Mov
	var_3189_object = var_3177_object; // 0x2464 Mov
	var_3190_object = var_3178_object; // 0x2465 Mov
	func_4441(var_3185_int, var_3186_int, var_3187_object, var_3188_object, var_3189_object, var_3190_object); // 0x2466 NEW_2
	goto Label_9515; // 0x2468 Jump
	
Label_9515:
	return 8; // 0x252b Return
	
Label_9321:
	var_3397_int = 1; // 0x2469 PushI
	var_3398_bool = var_3168_int == var_3397_int; // 0x246a Eq
	if(var_3398_bool == 0) goto Label_9334; // 0x246b JumpB
	var_3399_int = 0; var_3400_int = 0; var_3401_object = Obj(); var_3402_object = Obj(); var_3403_object = Obj(); var_3404_object = Obj(); // 0x246c PushV
	var_3399_int = var_3169_int; // 0x246d Mov
	var_3400_int = var_3170_int; // 0x246e Mov
	var_3401_object = var_3175_object; // 0x246f Mov
	var_3402_object = var_3176_object; // 0x2470 Mov
	var_3403_object = var_3177_object; // 0x2471 Mov
	var_3404_object = var_3178_object; // 0x2472 Mov
	func_4638(var_3399_int, var_3400_int, var_3401_object, var_3402_object, var_3403_object, var_3404_object); // 0x2473 NEW_2
	goto Label_9515; // 0x2475 Jump
	
Label_9334:
	var_3533_int = 2; // 0x2476 PushI
	var_3534_bool = var_3168_int == var_3533_int; // 0x2477 Eq
	if(var_3534_bool == 0) goto Label_9347; // 0x2478 JumpB
	var_3535_int = 0; var_3536_int = 0; var_3537_object = Obj(); var_3538_object = Obj(); var_3539_object = Obj(); var_3540_object = Obj(); // 0x2479 PushV
	var_3535_int = var_3169_int; // 0x247a Mov
	var_3536_int = var_3170_int; // 0x247b Mov
	var_3537_object = var_3175_object; // 0x247c Mov
	var_3538_object = var_3176_object; // 0x247d Mov
	var_3539_object = var_3177_object; // 0x247e Mov
	var_3540_object = var_3178_object; // 0x247f Mov
	func_4844(var_3535_int, var_3536_int, var_3537_object, var_3538_object, var_3539_object, var_3540_object); // 0x2480 NEW_2
	goto Label_9515; // 0x2482 Jump
	
Label_9347:
	var_3676_int = 3; // 0x2483 PushI
	var_3677_bool = var_3168_int == var_3676_int; // 0x2484 Eq
	if(var_3677_bool == 0) goto Label_9360; // 0x2485 JumpB
	var_3678_int = 0; var_3679_int = 0; var_3680_object = Obj(); var_3681_object = Obj(); var_3682_object = Obj(); var_3683_object = Obj(); // 0x2486 PushV
	var_3678_int = var_3169_int; // 0x2487 Mov
	var_3679_int = var_3170_int; // 0x2488 Mov
	var_3680_object = var_3175_object; // 0x2489 Mov
	var_3681_object = var_3176_object; // 0x248a Mov
	var_3682_object = var_3177_object; // 0x248b Mov
	var_3683_object = var_3178_object; // 0x248c Mov
	func_5074(var_3678_int, var_3679_int, var_3680_object, var_3681_object, var_3682_object, var_3683_object); // 0x248d NEW_2
	goto Label_9515; // 0x248f Jump
	
Label_9360:
	var_3709_int = 4; // 0x2490 PushI
	var_3710_bool = var_3168_int == var_3709_int; // 0x2491 Eq
	if(var_3710_bool == 0) goto Label_9373; // 0x2492 JumpB
	var_3711_int = 0; var_3712_int = 0; var_3713_object = Obj(); var_3714_object = Obj(); var_3715_object = Obj(); var_3716_object = Obj(); // 0x2493 PushV
	var_3711_int = var_3169_int; // 0x2494 Mov
	var_3712_int = var_3170_int; // 0x2495 Mov
	var_3713_object = var_3175_object; // 0x2496 Mov
	var_3714_object = var_3176_object; // 0x2497 Mov
	var_3715_object = var_3177_object; // 0x2498 Mov
	var_3716_object = var_3178_object; // 0x2499 Mov
	func_5292(var_3711_int, var_3712_int, var_3713_object, var_3714_object, var_3715_object, var_3716_object); // 0x249a NEW_2
	goto Label_9515; // 0x249c Jump
	
Label_9373:
	var_3742_int = 5; // 0x249d PushI
	var_3743_bool = var_3168_int == var_3742_int; // 0x249e Eq
	if(var_3743_bool == 0) goto Label_9386; // 0x249f JumpB
	var_3744_int = 0; var_3745_int = 0; var_3746_object = Obj(); var_3747_object = Obj(); var_3748_object = Obj(); var_3749_object = Obj(); // 0x24a0 PushV
	var_3744_int = var_3169_int; // 0x24a1 Mov
	var_3745_int = var_3170_int; // 0x24a2 Mov
	var_3746_object = var_3175_object; // 0x24a3 Mov
	var_3747_object = var_3176_object; // 0x24a4 Mov
	var_3748_object = var_3177_object; // 0x24a5 Mov
	var_3749_object = var_3178_object; // 0x24a6 Mov
	func_5534(var_3744_int, var_3745_int, var_3746_object, var_3747_object, var_3748_object, var_3749_object); // 0x24a7 NEW_2
	goto Label_9515; // 0x24a9 Jump
	
Label_9386:
	var_3775_int = 6; // 0x24aa PushI
	var_3776_bool = var_3168_int == var_3775_int; // 0x24ab Eq
	if(var_3776_bool == 0) goto Label_9399; // 0x24ac JumpB
	var_3777_int = 0; var_3778_int = 0; var_3779_object = Obj(); var_3780_object = Obj(); var_3781_object = Obj(); var_3782_object = Obj(); // 0x24ad PushV
	var_3777_int = var_3169_int; // 0x24ae Mov
	var_3778_int = var_3170_int; // 0x24af Mov
	var_3779_object = var_3175_object; // 0x24b0 Mov
	var_3780_object = var_3176_object; // 0x24b1 Mov
	var_3781_object = var_3177_object; // 0x24b2 Mov
	var_3782_object = var_3178_object; // 0x24b3 Mov
	func_5602(); // 0x24b4 NEW_2
	goto Label_9515; // 0x24b6 Jump
	
Label_9399:
	var_3785_int = 7; // 0x24b7 PushI
	var_3786_bool = var_3168_int == var_3785_int; // 0x24b8 Eq
	if(var_3786_bool == 0) goto Label_9412; // 0x24b9 JumpB
	var_3787_int = 0; var_3788_int = 0; var_3789_object = Obj(); var_3790_object = Obj(); var_3791_object = Obj(); var_3792_object = Obj(); // 0x24ba PushV
	var_3787_int = var_3169_int; // 0x24bb Mov
	var_3788_int = var_3170_int; // 0x24bc Mov
	var_3789_object = var_3175_object; // 0x24bd Mov
	var_3790_object = var_3176_object; // 0x24be Mov
	var_3791_object = var_3177_object; // 0x24bf Mov
	var_3792_object = var_3178_object; // 0x24c0 Mov
	func_5757(var_3787_int, var_3788_int, var_3789_object, var_3790_object, var_3791_object, var_3792_object); // 0x24c1 NEW_2
	goto Label_9515; // 0x24c3 Jump
	
Label_9412:
	var_3928_int = 8; // 0x24c4 PushI
	var_3929_bool = var_3168_int == var_3928_int; // 0x24c5 Eq
	if(var_3929_bool == 0) goto Label_9425; // 0x24c6 JumpB
	var_3930_int = 0; var_3931_int = 0; var_3932_object = Obj(); var_3933_object = Obj(); var_3934_object = Obj(); var_3935_object = Obj(); // 0x24c7 PushV
	var_3930_int = var_3169_int; // 0x24c8 Mov
	var_3931_int = var_3170_int; // 0x24c9 Mov
	var_3932_object = var_3175_object; // 0x24ca Mov
	var_3933_object = var_3176_object; // 0x24cb Mov
	var_3934_object = var_3177_object; // 0x24cc Mov
	var_3935_object = var_3178_object; // 0x24cd Mov
	func_5957(var_3930_int, var_3931_int, var_3932_object, var_3933_object, var_3934_object, var_3935_object); // 0x24ce NEW_2
	goto Label_9515; // 0x24d0 Jump
	
Label_9425:
	var_3961_int = 9; // 0x24d1 PushI
	var_3962_bool = var_3168_int == var_3961_int; // 0x24d2 Eq
	if(var_3962_bool == 0) goto Label_9438; // 0x24d3 JumpB
	var_3963_int = 0; var_3964_int = 0; var_3965_object = Obj(); var_3966_object = Obj(); var_3967_object = Obj(); var_3968_object = Obj(); // 0x24d4 PushV
	var_3963_int = var_3169_int; // 0x24d5 Mov
	var_3964_int = var_3170_int; // 0x24d6 Mov
	var_3965_object = var_3175_object; // 0x24d7 Mov
	var_3966_object = var_3176_object; // 0x24d8 Mov
	var_3967_object = var_3177_object; // 0x24d9 Mov
	var_3968_object = var_3178_object; // 0x24da Mov
	func_6160(var_3963_int, var_3964_int, var_3965_object, var_3966_object, var_3967_object, var_3968_object); // 0x24db NEW_2
	goto Label_9515; // 0x24dd Jump
	
Label_9438:
	var_3994_int = 10; // 0x24de PushI
	var_3995_bool = var_3168_int == var_3994_int; // 0x24df Eq
	if(var_3995_bool == 0) goto Label_9451; // 0x24e0 JumpB
	var_3996_int = 0; var_3997_int = 0; var_3998_object = Obj(); var_3999_object = Obj(); var_4000_object = Obj(); var_4001_object = Obj(); // 0x24e1 PushV
	var_3996_int = var_3169_int; // 0x24e2 Mov
	var_3997_int = var_3170_int; // 0x24e3 Mov
	var_3998_object = var_3175_object; // 0x24e4 Mov
	var_3999_object = var_3176_object; // 0x24e5 Mov
	var_4000_object = var_3177_object; // 0x24e6 Mov
	var_4001_object = var_3178_object; // 0x24e7 Mov
	func_6369(var_3996_int, var_3997_int, var_3998_object, var_3999_object, var_4000_object, var_4001_object); // 0x24e8 NEW_2
	goto Label_9515; // 0x24ea Jump
	
Label_9451:
	var_4027_int = 11; // 0x24eb PushI
	var_4028_bool = var_3168_int == var_4027_int; // 0x24ec Eq
	if(var_4028_bool == 0) goto Label_9464; // 0x24ed JumpB
	var_4029_int = 0; var_4030_int = 0; var_4031_object = Obj(); var_4032_object = Obj(); var_4033_object = Obj(); var_4034_object = Obj(); // 0x24ee PushV
	var_4029_int = var_3169_int; // 0x24ef Mov
	var_4030_int = var_3170_int; // 0x24f0 Mov
	var_4031_object = var_3175_object; // 0x24f1 Mov
	var_4032_object = var_3176_object; // 0x24f2 Mov
	var_4033_object = var_3177_object; // 0x24f3 Mov
	var_4034_object = var_3178_object; // 0x24f4 Mov
	func_6581(var_4029_int, var_4030_int, var_4031_object, var_4032_object, var_4033_object, var_4034_object); // 0x24f5 NEW_2
	goto Label_9515; // 0x24f7 Jump
	
Label_9464:
	var_4060_int = 12; // 0x24f8 PushI
	var_4061_bool = var_3168_int == var_4060_int; // 0x24f9 Eq
	if(var_4061_bool == 0) goto Label_9477; // 0x24fa JumpB
	var_4062_int = 0; var_4063_int = 0; var_4064_object = Obj(); var_4065_object = Obj(); var_4066_object = Obj(); var_4067_object = Obj(); // 0x24fb PushV
	var_4062_int = var_3169_int; // 0x24fc Mov
	var_4063_int = var_3170_int; // 0x24fd Mov
	var_4064_object = var_3175_object; // 0x24fe Mov
	var_4065_object = var_3176_object; // 0x24ff Mov
	var_4066_object = var_3177_object; // 0x2500 Mov
	var_4067_object = var_3178_object; // 0x2501 Mov
	func_6778(var_4062_int, var_4063_int, var_4064_object, var_4065_object, var_4066_object, var_4067_object); // 0x2502 NEW_2
	goto Label_9515; // 0x2504 Jump
	
Label_9477:
	var_4093_int = 13; // 0x2505 PushI
	var_4094_bool = var_3168_int == var_4093_int; // 0x2506 Eq
	if(var_4094_bool == 0) goto Label_9490; // 0x2507 JumpB
	var_4095_int = 0; var_4096_int = 0; var_4097_object = Obj(); var_4098_object = Obj(); var_4099_object = Obj(); var_4100_object = Obj(); // 0x2508 PushV
	var_4095_int = var_3169_int; // 0x2509 Mov
	var_4096_int = var_3170_int; // 0x250a Mov
	var_4097_object = var_3175_object; // 0x250b Mov
	var_4098_object = var_3176_object; // 0x250c Mov
	var_4099_object = var_3177_object; // 0x250d Mov
	var_4100_object = var_3178_object; // 0x250e Mov
	func_6981(var_4095_int, var_4096_int, var_4097_object, var_4098_object, var_4099_object, var_4100_object); // 0x250f NEW_2
	goto Label_9515; // 0x2511 Jump
	
Label_9490:
	var_4126_int = 14; // 0x2512 PushI
	var_4127_bool = var_3168_int == var_4126_int; // 0x2513 Eq
	if(var_4127_bool == 0) goto Label_9503; // 0x2514 JumpB
	var_4128_int = 0; var_4129_int = 0; var_4130_object = Obj(); var_4131_object = Obj(); var_4132_object = Obj(); var_4133_object = Obj(); // 0x2515 PushV
	var_4128_int = var_3169_int; // 0x2516 Mov
	var_4129_int = var_3170_int; // 0x2517 Mov
	var_4130_object = var_3175_object; // 0x2518 Mov
	var_4131_object = var_3176_object; // 0x2519 Mov
	var_4132_object = var_3177_object; // 0x251a Mov
	var_4133_object = var_3178_object; // 0x251b Mov
	func_7181(var_4128_int, var_4129_int, var_4130_object, var_4131_object, var_4132_object, var_4133_object); // 0x251c NEW_2
	goto Label_9515; // 0x251e Jump
	
Label_9503:
	var_4269_int = 15; // 0x251f PushI
	var_4270_bool = var_3168_int == var_4269_int; // 0x2520 Eq
	if(var_4270_bool == 0) goto Label_9515; // 0x2521 JumpB
	var_4271_int = 0; var_4272_int = 0; var_4273_object = Obj(); var_4274_object = Obj(); var_4275_object = Obj(); var_4276_object = Obj(); // 0x2522 PushV
	var_4271_int = var_3169_int; // 0x2523 Mov
	var_4272_int = var_3170_int; // 0x2524 Mov
	var_4273_object = var_3175_object; // 0x2525 Mov
	var_4274_object = var_3176_object; // 0x2526 Mov
	var_4275_object = var_3177_object; // 0x2527 Mov
	var_4276_object = var_3178_object; // 0x2528 Mov
	func_7363(var_4271_int, var_4272_int, var_4273_object, var_4274_object, var_4275_object, var_4276_object); // 0x2529 NEW_2
}


func_81(var_100_object)
{
	var_101_object = Obj(); var_102_object = Obj(); // 0x51 PushV
	var_103_string = "player"; // 0x52 PushS
	FindActor(var_102_object, var_103_string); // 0x53 Func
	var_100_object = var_102_object; // 0x55 Mov
	return 2; // 0x56 Return
}


func_11345()
{
	var_5548_int = 0; var_5549_string = ""; // 0x2c52 PushV
	var_5549_string = "map_chertez_state"; // 0x2c53 MovS
	func_106(var_5548_int, var_5549_string); // 0x2c54 NEW_2
	var_5550_int = 3; // 0x2c56 PushI
	var_5551_bool = var_5548_int <= var_5550_int; // 0x2c57 LE
	if(var_5551_bool == 0) goto Label_11361; // 0x2c58 JumpB
	var_5552_string = "map_chertez_state"; // 0x2c59 PushS
	var_5553_int = 3; // 0x2c5a PushI
	SetVariable(var_5552_string, var_5553_int); // 0x2c5b Func
	var_5554_string = "map_chertez_force"; // 0x2c5d PushS
	var_5555_int = 1; // 0x2c5e PushI
	SetVariable(var_5554_string, var_5555_int); // 0x2c5f Func
	
Label_11361:
	return 0; // 0x2c61 Return
}


func_10325()
{
	var_4549_object = Obj(); var_4550_object = Obj(); var_4551_object = Obj(); var_4552_object = Obj(); // 0x2855 PushV
	var_4553_object = Obj(); // 0x2856 PushV
	func_12030(var_4553_object); // 0x2857 NEW_2
	var_4551_object = var_4553_object; // 0x2858 Mov
	var_4560_string = "b1BigVlad"; // 0x285a PushS
	FindMark(var_4552_object, var_4560_string); // 0x285b ObjFunc
	var_4561_object = var_4552_object; // 0x285d Push
	if(var_4561_object == 0) goto Label_10337; // 0x285e JumpB
	Remove(); // 0x285f ObjFunc
	
Label_10337:
	var_4562_string = "b1BigVlad11Hours"; // 0x2861 PushS
	FindMark(var_4552_object, var_4562_string); // 0x2862 ObjFunc
	var_4563_object = var_4552_object; // 0x2864 Push
	if(var_4563_object == 0) goto Label_10344; // 0x2865 JumpB
	Remove(); // 0x2866 ObjFunc
	
Label_10344:
	var_4564_string = "b1KapellaGotoLaska"; // 0x2868 PushS
	FindMark(var_4552_object, var_4564_string); // 0x2869 ObjFunc
	var_4565_object = var_4552_object; // 0x286b Push
	if(var_4565_object == 0) goto Label_10351; // 0x286c JumpB
	Remove(); // 0x286d ObjFunc
	
Label_10351:
	var_4566_string = "b1KapellaGotoNotkin"; // 0x286f PushS
	FindMark(var_4552_object, var_4566_string); // 0x2870 ObjFunc
	var_4567_object = var_4552_object; // 0x2872 Push
	if(var_4567_object == 0) goto Label_10358; // 0x2873 JumpB
	Remove(); // 0x2874 ObjFunc
	
Label_10358:
	var_4568_string = "b1MladVladGotoGrif"; // 0x2876 PushS
	FindMark(var_4552_object, var_4568_string); // 0x2877 ObjFunc
	var_4569_object = var_4552_object; // 0x2879 Push
	if(var_4569_object == 0) goto Label_10365; // 0x287a JumpB
	Remove(); // 0x287b ObjFunc
	
Label_10365:
	var_4570_string = "b1q01BakWillBeAt18"; // 0x287d PushS
	FindMark(var_4552_object, var_4570_string); // 0x287e ObjFunc
	var_4571_object = var_4552_object; // 0x2880 Push
	if(var_4571_object == 0) goto Label_10372; // 0x2881 JumpB
	Remove(); // 0x2882 ObjFunc
	
Label_10372:
	var_4572_string = "b1q01BigVladGotoKapella"; // 0x2884 PushS
	FindMark(var_4552_object, var_4572_string); // 0x2885 ObjFunc
	var_4573_object = var_4552_object; // 0x2887 Push
	if(var_4573_object == 0) goto Label_10379; // 0x2888 JumpB
	Remove(); // 0x2889 ObjFunc
	
Label_10379:
	var_4574_string = "b1q01BigVladGotoMladVlad"; // 0x288b PushS
	FindMark(var_4552_object, var_4574_string); // 0x288c ObjFunc
	var_4575_object = var_4552_object; // 0x288e Push
	if(var_4575_object == 0) goto Label_10386; // 0x288f JumpB
	Remove(); // 0x2890 ObjFunc
	
Label_10386:
	var_4576_string = "b1q01GrifGotoDanko"; // 0x2892 PushS
	FindMark(var_4552_object, var_4576_string); // 0x2893 ObjFunc
	var_4577_object = var_4552_object; // 0x2895 Push
	if(var_4577_object == 0) goto Label_10393; // 0x2896 JumpB
	Remove(); // 0x2897 ObjFunc
	
Label_10393:
	var_4578_string = "b1q01NotkinGotoGrif"; // 0x2899 PushS
	FindMark(var_4552_object, var_4578_string); // 0x289a ObjFunc
	var_4579_object = var_4552_object; // 0x289c Push
	if(var_4579_object == 0) goto Label_10400; // 0x289d JumpB
	Remove(); // 0x289e ObjFunc
	
Label_10400:
	var_4580_string = "b1q02GrifGotoLaska"; // 0x28a0 PushS
	FindMark(var_4552_object, var_4580_string); // 0x28a1 ObjFunc
	var_4581_object = var_4552_object; // 0x28a3 Push
	if(var_4581_object == 0) goto Label_10407; // 0x28a4 JumpB
	Remove(); // 0x28a5 ObjFunc
	
Label_10407:
	var_4582_string = "b1q02LaskaGotoGorbin"; // 0x28a7 PushS
	FindMark(var_4552_object, var_4582_string); // 0x28a8 ObjFunc
	var_4583_object = var_4552_object; // 0x28aa Push
	if(var_4583_object == 0) goto Label_10414; // 0x28ab JumpB
	Remove(); // 0x28ac ObjFunc
	
Label_10414:
	var_4584_string = "b1q02LaskaSelf"; // 0x28ae PushS
	FindMark(var_4552_object, var_4584_string); // 0x28af ObjFunc
	var_4585_object = var_4552_object; // 0x28b1 Push
	if(var_4585_object == 0) goto Label_10421; // 0x28b2 JumpB
	Remove(); // 0x28b3 ObjFunc
	
Label_10421:
	var_4586_string = "b1q03GrifGotoDoberman"; // 0x28b5 PushS
	FindMark(var_4552_object, var_4586_string); // 0x28b6 ObjFunc
	var_4587_object = var_4552_object; // 0x28b8 Push
	if(var_4587_object == 0) goto Label_10428; // 0x28b9 JumpB
	Remove(); // 0x28ba ObjFunc
	
Label_10428:
	var_4588_string = "b1q03NotkinGotoDoberman"; // 0x28bc PushS
	FindMark(var_4552_object, var_4588_string); // 0x28bd ObjFunc
	var_4589_object = var_4552_object; // 0x28bf Push
	if(var_4589_object == 0) goto Label_10435; // 0x28c0 JumpB
	Remove(); // 0x28c1 ObjFunc
	
Label_10435:
	var_4590_string = "b1GrifGotoNotkin"; // 0x28c3 PushS
	FindMark(var_4552_object, var_4590_string); // 0x28c4 ObjFunc
	var_4591_object = var_4552_object; // 0x28c6 Push
	if(var_4591_object == 0) goto Label_10442; // 0x28c7 JumpB
	Remove(); // 0x28c8 ObjFunc
	
Label_10442:
	var_4592_string = "b1q03NotkinGotoDobermanSelf"; // 0x28ca PushS
	FindMark(var_4552_object, var_4592_string); // 0x28cb ObjFunc
	var_4593_object = var_4552_object; // 0x28cd Push
	if(var_4593_object == 0) goto Label_10449; // 0x28ce JumpB
	Remove(); // 0x28cf ObjFunc
	
Label_10449:
	var_4594_string = "b1LaskaGotoMishka"; // 0x28d1 PushS
	FindMark(var_4552_object, var_4594_string); // 0x28d2 ObjFunc
	var_4595_object = var_4552_object; // 0x28d4 Push
	if(var_4595_object == 0) goto Label_10456; // 0x28d5 JumpB
	Remove(); // 0x28d6 ObjFunc
	
Label_10456:
	var_4596_string = "b1q05Spi4kaGotoLaska"; // 0x28d8 PushS
	FindMark(var_4552_object, var_4596_string); // 0x28d9 ObjFunc
	var_4597_object = var_4552_object; // 0x28db Push
	if(var_4597_object == 0) goto Label_10463; // 0x28dc JumpB
	Remove(); // 0x28dd ObjFunc
	
Label_10463:
	var_4598_string = "b1q05Spi4kaGotoMishka"; // 0x28df PushS
	FindMark(var_4552_object, var_4598_string); // 0x28e0 ObjFunc
	var_4599_object = var_4552_object; // 0x28e2 Push
	if(var_4599_object == 0) goto Label_10470; // 0x28e3 JumpB
	Remove(); // 0x28e4 ObjFunc
	
Label_10470:
	var_4600_string = "b1q05PatrolGroup"; // 0x28e6 PushS
	FindMark(var_4552_object, var_4600_string); // 0x28e7 ObjFunc
	var_4601_object = var_4552_object; // 0x28e9 Push
	if(var_4601_object == 0) goto Label_10477; // 0x28ea JumpB
	Remove(); // 0x28eb ObjFunc
	
Label_10477:
	var_4602_string = "b1BurahFatherHome"; // 0x28ed PushS
	FindMark(var_4552_object, var_4602_string); // 0x28ee ObjFunc
	var_4603_object = var_4552_object; // 0x28f0 Push
	if(var_4603_object == 0) goto Label_10484; // 0x28f1 JumpB
	Remove(); // 0x28f2 ObjFunc
	
Label_10484:
	var_4604_bool = 0; var_4605_int = 0; // 0x28f4 PushV
	var_4605_int = 200; // 0x28f5 MovI
	func_12005(var_4604_bool, var_4605_int); // 0x28f6 NEW_2
	var_4616_bool = 0; var_4617_int = 0; // 0x28f8 PushV
	var_4617_int = 205; // 0x28f9 MovI
	func_12005(var_4616_bool, var_4617_int); // 0x28fa NEW_2
	var_4618_bool = 0; var_4619_int = 0; // 0x28fc PushV
	var_4619_int = 209; // 0x28fd MovI
	func_12005(var_4618_bool, var_4619_int); // 0x28fe NEW_2
	var_4620_bool = 0; var_4621_int = 0; // 0x2900 PushV
	var_4621_int = 242; // 0x2901 MovI
	func_12005(var_4620_bool, var_4621_int); // 0x2902 NEW_2
	var_4622_bool = 0; var_4623_int = 0; // 0x2904 PushV
	var_4623_int = 582; // 0x2905 MovI
	func_12005(var_4622_bool, var_4623_int); // 0x2906 NEW_2
	return 4; // 0x2908 Return
}


func_88(var_584_bool, var_585_object, var_586_string)
{
	var_587_bool = 0; var_588_bool = 0; // 0x58 PushV
	var_589_string = "HasProperty"; // 0x59 PushS
	var_590_int = 2; // 0x5a PushI
	var_591_bool = IsFuncExist(var_585_object, var_589_string, var_590_int); // 0x5b FuncExist
	var_592_bool = var_591_bool == 0; // 0x5c Not
	if(var_592_bool == 0) goto Label_96; // 0x5d JumpB
	var_584_bool = 0; // 0x5e MovB
	return 2; // 0x5f Return
	
Label_96:
	HasProperty(var_586_string, var_588_bool); // 0x60 ObjFunc
	var_584_bool = var_588_bool; // 0x62 Mov
	return 2; // 0x63 Return
}


func_1115(var_3276_float, var_3277_int)
{
	var_3278_int = 1; // 0x45c PushI
	var_3279_int = var_3277_int + var_3278_int; // 0x45d Add
	var_3280_int = 1; // 0x45e PushI
	var_3281_bool = var_3279_int == var_3280_int; // 0x45f Eq
	if(var_3281_bool == 0) goto Label_1124; // 0x460 JumpB
	var_3276_float = 0; // 0x461 MovI
	return 0; // 0x462 Return
	
Label_1124:
	var_3282_int = 1; // 0x464 PushI
	var_3283_int = var_3277_int + var_3282_int; // 0x465 Add
	var_3284_int = 2; // 0x466 PushI
	var_3285_bool = var_3283_int == var_3284_int; // 0x467 Eq
	if(var_3285_bool == 0) goto Label_1132; // 0x468 JumpB
	var_3276_float = 0; // 0x469 MovI
	return 0; // 0x46a Return
	
Label_1132:
	var_3286_int = 1; // 0x46c PushI
	var_3287_int = var_3277_int + var_3286_int; // 0x46d Add
	var_3288_int = 3; // 0x46e PushI
	var_3289_bool = var_3287_int == var_3288_int; // 0x46f Eq
	if(var_3289_bool == 0) goto Label_1140; // 0x470 JumpB
	var_3276_float = 1; // 0x471 MovI
	return 0; // 0x472 Return
	
Label_1140:
	var_3290_int = 1; // 0x474 PushI
	var_3291_int = var_3277_int + var_3290_int; // 0x475 Add
	var_3292_int = 4; // 0x476 PushI
	var_3293_bool = var_3291_int == var_3292_int; // 0x477 Eq
	if(var_3293_bool == 0) goto Label_1148; // 0x478 JumpB
	var_3276_float = 1; // 0x479 MovI
	return 0; // 0x47a Return
	
Label_1148:
	var_3294_int = 1; // 0x47c PushI
	var_3295_int = var_3277_int + var_3294_int; // 0x47d Add
	var_3296_int = 5; // 0x47e PushI
	var_3297_bool = var_3295_int == var_3296_int; // 0x47f Eq
	if(var_3297_bool == 0) goto Label_1156; // 0x480 JumpB
	var_3276_float = 1; // 0x481 MovI
	return 0; // 0x482 Return
	
Label_1156:
	var_3298_int = 1; // 0x484 PushI
	var_3299_int = var_3277_int + var_3298_int; // 0x485 Add
	var_3300_int = 6; // 0x486 PushI
	var_3301_bool = var_3299_int == var_3300_int; // 0x487 Eq
	if(var_3301_bool == 0) goto Label_1164; // 0x488 JumpB
	var_3276_float = 2; // 0x489 MovI
	return 0; // 0x48a Return
	
Label_1164:
	var_3302_int = 1; // 0x48c PushI
	var_3303_int = var_3277_int + var_3302_int; // 0x48d Add
	var_3304_int = 7; // 0x48e PushI
	var_3305_bool = var_3303_int == var_3304_int; // 0x48f Eq
	if(var_3305_bool == 0) goto Label_1172; // 0x490 JumpB
	var_3276_float = 1; // 0x491 MovI
	return 0; // 0x492 Return
	
Label_1172:
	var_3306_int = 1; // 0x494 PushI
	var_3307_int = var_3277_int + var_3306_int; // 0x495 Add
	var_3308_int = 8; // 0x496 PushI
	var_3309_bool = var_3307_int == var_3308_int; // 0x497 Eq
	if(var_3309_bool == 0) goto Label_1180; // 0x498 JumpB
	var_3276_float = 1; // 0x499 MovI
	return 0; // 0x49a Return
	
Label_1180:
	var_3310_int = 1; // 0x49c PushI
	var_3311_int = var_3277_int + var_3310_int; // 0x49d Add
	var_3312_int = 9; // 0x49e PushI
	var_3313_bool = var_3311_int == var_3312_int; // 0x49f Eq
	if(var_3313_bool == 0) goto Label_1188; // 0x4a0 JumpB
	var_3276_float = 1; // 0x4a1 MovI
	return 0; // 0x4a2 Return
	
Label_1188:
	var_3314_int = 1; // 0x4a4 PushI
	var_3315_int = var_3277_int + var_3314_int; // 0x4a5 Add
	var_3316_int = 10; // 0x4a6 PushI
	var_3317_bool = var_3315_int == var_3316_int; // 0x4a7 Eq
	if(var_3317_bool == 0) goto Label_1196; // 0x4a8 JumpB
	var_3276_float = 1; // 0x4a9 MovI
	return 0; // 0x4aa Return
	
Label_1196:
	var_3318_int = 1; // 0x4ac PushI
	var_3319_int = var_3277_int + var_3318_int; // 0x4ad Add
	var_3320_int = 11; // 0x4ae PushI
	var_3321_bool = var_3319_int == var_3320_int; // 0x4af Eq
	if(var_3321_bool == 0) goto Label_1203; // 0x4b0 JumpB
	var_3276_float = 1; // 0x4b1 MovI
	return 0; // 0x4b2 Return
	
Label_1203:
	var_3276_float = 0; // 0x4b3 MovI
	return 0; // 0x4b4 Return
}


func_7259(var_1946_int, var_1947_int, var_1948_object, var_1949_object, var_1950_object, var_1951_object)
{
	var_1952_int = 0; // 0x1c5c PushI
	var_1953_bool = var_1947_int == var_1952_int; // 0x1c5d Eq
	if(var_1953_bool == 0) goto Label_7299; // 0x1c5e JumpB
	var_1954_int = 0; var_1955_bool = 0; // 0x1c5f PushV
	var_1954_int = 15; // 0x1c60 MovI
	var_1955_bool = 0; // 0x1c61 MovB
	func_746(var_1954_int, var_1955_bool); // 0x1c62 NEW_2
	var_1956_int = 0; var_1957_bool = 0; var_1958_int = 0; // 0x1c64 PushV
	var_1956_int = 15; // 0x1c65 MovI
	var_1957_bool = 0; // 0x1c66 MovB
	var_1958_int = 1; // 0x1c67 MovI
	func_763(var_1956_int, var_1957_bool, var_1958_int); // 0x1c68 NEW_2
	var_1959_int = 0; var_1960_int = 0; var_1961_object = Obj(); var_1962_object = Obj(); var_1963_object = Obj(); // 0x1c6a PushV
	var_1959_int = 15; // 0x1c6b MovI
	var_1960_int = var_1946_int; // 0x1c6c Mov
	var_1961_object = var_1948_object; // 0x1c6d Mov
	var_1962_object = var_1949_object; // 0x1c6e Mov
	var_1963_object = var_1950_object; // 0x1c6f Mov
	func_572(var_1960_int, var_1961_object, var_1962_object, var_1963_object); // 0x1c70 NEW_2
	var_1964_object = Obj(); var_1965_int = 0; // 0x1c72 PushV
	var_1964_object = var_1951_object; // 0x1c73 Mov
	var_1965_int = 0; // 0x1c74 MovI
	func_255(var_1965_int); // 0x1c75 NEW_2
	var_1966_int = 0; var_1967_bool = 0; var_1968_int = 0; // 0x1c77 PushV
	var_1966_int = 15; // 0x1c78 MovI
	var_1967_bool = 0; // 0x1c79 MovB
	var_1968_int = 5; // 0x1c7a MovI
	func_820(var_1966_int, var_1967_bool, var_1968_int); // 0x1c7b NEW_2
	var_1969_int = 0; var_1970_bool = 0; var_1971_int = 0; // 0x1c7d PushV
	var_1969_int = 15; // 0x1c7e MovI
	var_1970_bool = 0; // 0x1c7f MovB
	var_1971_int = 5; // 0x1c80 MovI
	func_882(var_1969_int, var_1970_bool, var_1971_int); // 0x1c81 NEW_2
	
Label_7299:
	var_1972_int = 0; var_1973_int = 0; // 0x1c83 PushV
	var_1972_int = 15; // 0x1c84 MovI
	var_1973_int = var_1947_int; // 0x1c85 Mov
	func_1037(var_1972_int, var_1973_int); // 0x1c86 NEW_2
	var_1974_int = 0; var_1975_int = 0; var_1976_int = 0; // 0x1c88 PushV
	var_1974_int = 15; // 0x1c89 MovI
	var_1975_int = var_1946_int; // 0x1c8a Mov
	var_1976_int = var_1947_int; // 0x1c8b Mov
	func_1326(var_1974_int, var_1975_int, var_1976_int); // 0x1c8c NEW_2
	return 0; // 0x1c8e Return
}


func_14430(var_23_int)
{
	var_24_int = 0; var_25_int = 0; var_26_int = 0; var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_int = 0; var_35_int = 0; // 0x385e PushV
	var_36_string = "Disease update"; // 0x385f PushS
	Trace(var_36_string); // 0x3860 Func
	var_30_int = 0; // 0x3862 MovI
	var_37_int = 0; // 0x3863 PushI
	var_38_bool = var_23_int == var_37_int; // 0x3864 Eq
	if(var_38_bool == 0) goto Label_14440; // 0x3865 JumpB
	var_30_int = 0; // 0x3866 MovI
	goto Label_14494; // 0x3867 Jump
	
Label_14494:
	var_39_int = 1; // 0x389e PushI
	var_40_int = var_23_int + var_39_int; // 0x389f Add
	var_41_int = 12; // 0x38a0 PushI
	var_42_bool = var_40_int != var_41_int; // 0x38a1 Neq
	if(var_42_bool == 0) goto Label_14558; // 0x38a2 JumpB
	var_43_string = "Diseased regions : "; // 0x38a3 PushS
	var_44_int = var_43_string + var_30_int; // 0x38a4 Add
	Trace(var_44_int); // 0x38a5 Func
	var_31_int = 0; // 0x38a7 MovI
	
Label_14504:
	var_45_int = 16; // 0x38a8 PushI
	var_46_bool = var_31_int < var_45_int; // 0x38a9 LT
	if(var_46_bool == 0) goto Label_14529; // 0x38aa JumpB
	var_47_bool = 0; var_48_int = 0; // 0x38ab PushV
	var_48_int = var_31_int; // 0x38ac Mov
	func_380(var_47_bool, var_48_int); // 0x38ad NEW_2
	if(var_47_bool == 0) goto Label_14517; // 0x38af JumpB
	var_59_int = 0; // 0x38b0 PushV
	var_59_int = var_31_int; // 0x38b1 Mov
	func_422(var_59_int); // 0x38b2 NEW_2
	goto Label_14526; // 0x38b4 Jump
	
Label_14526:
	var_71_int = 1; // 0x38be PushI
	var_31_int = var_31_int + var_71_int; // 0x38bf Add2
	goto Label_14504; // 0x38c0 Jump
	
Label_14517:
	var_72_bool = 0; var_73_int = 0; // 0x38b5 PushV
	var_73_int = var_31_int; // 0x38b6 Mov
	func_410(var_72_bool, var_73_int); // 0x38b7 NEW_2
	if(var_72_bool == 0) goto Label_14526; // 0x38b9 JumpB
	var_81_int = 0; // 0x38ba PushV
	var_81_int = var_31_int; // 0x38bb Mov
	func_362(var_81_int); // 0x38bc NEW_2
	
Label_14529:
	var_93_int = 2; // 0x38c1 PushI
	var_94_bool = var_23_int == var_93_int; // 0x38c2 Eq
	if(var_94_bool == 0) goto Label_14539; // 0x38c3 JumpB
	var_95_string = "Special diseased region: 6"; // 0x38c4 PushS
	Trace(var_95_string); // 0x38c5 Func
	var_96_int = 0; // 0x38c7 PushV
	var_96_int = 5; // 0x38c8 MovI
	func_392(var_96_int); // 0x38c9 NEW_2
	
Label_14539:
	var_108_int = 0; // 0x38cb PushV
	func_293(var_108_int); // 0x38cc NEW_2
	var_32_int = var_108_int; // 0x38cd Mov
	var_119_bool = var_32_int < var_30_int; // 0x38cf LT
	if(var_119_bool == 0) goto Label_14557; // 0x38d0 JumpB
	var_33_int = var_30_int - var_32_int; // 0x38d1 Sub2
	var_34_int = 0; // 0x38d2 MovI
	
Label_14547:
	var_120_bool = var_34_int < var_33_int; // 0x38d3 LT
	if(var_120_bool == 0) goto Label_14557; // 0x38d4 JumpB
	var_121_int = 0; // 0x38d5 PushV
	var_122_int = 1; // 0x38d6 PushI
	var_121_int = var_23_int + var_122_int; // 0x38d7 Add2
	func_311(var_121_int); // 0x38d8 NEW_2
	var_167_int = 1; // 0x38da PushI
	var_34_int = var_34_int + var_167_int; // 0x38db Add2
	goto Label_14547; // 0x38dc Jump
	
Label_14557:
	goto Label_14583; // 0x38dd Jump
	
Label_14583:
	return 12; // 0x38f7 Return
	
Label_14558:
	var_35_int = 0; // 0x38de MovI
	
Label_14559:
	var_168_int = 16; // 0x38df PushI
	var_169_bool = var_35_int < var_168_int; // 0x38e0 LT
	if(var_169_bool == 0) goto Label_14583; // 0x38e1 JumpB
	var_170_bool = 0; // 0x38e2 PushV
	var_170_bool = 1; // 0x38e3 MovB
	var_171_bool = 0; var_172_int = 0; // 0x38e4 PushV
	var_172_int = var_35_int; // 0x38e5 Mov
	func_380(var_171_bool, var_172_int); // 0x38e6 NEW_2
	if(var_171_bool == 0) goto Label_14575; // 0x38e8 JumpB
	var_173_bool = 0; var_174_int = 0; // 0x38e9 PushV
	var_174_int = var_35_int; // 0x38ea Mov
	func_410(var_173_bool, var_174_int); // 0x38eb NEW_2
	if(var_173_bool == 0) goto Label_14575; // 0x38ed JumpB
	var_170_bool = 0; // 0x38ee MovB
	
Label_14575:
	if(var_170_bool == 0) goto Label_14580; // 0x38ef JumpB
	var_175_int = 0; // 0x38f0 PushV
	var_175_int = var_35_int; // 0x38f1 Mov
	func_362(var_175_int); // 0x38f2 NEW_2
	
Label_14580:
	var_176_int = 1; // 0x38f4 PushI
	var_35_int = var_35_int + var_176_int; // 0x38f5 Add2
	goto Label_14559; // 0x38f6 Jump
	
Label_14440:
	var_177_int = 1; // 0x3868 PushI
	var_178_bool = var_23_int == var_177_int; // 0x3869 Eq
	if(var_178_bool == 0) goto Label_14445; // 0x386a JumpB
	var_30_int = 0; // 0x386b MovI
	goto Label_14494; // 0x386c Jump
	
Label_14445:
	var_179_int = 2; // 0x386d PushI
	var_180_bool = var_23_int == var_179_int; // 0x386e Eq
	if(var_180_bool == 0) goto Label_14450; // 0x386f JumpB
	var_30_int = 1; // 0x3870 MovI
	goto Label_14494; // 0x3871 Jump
	
Label_14450:
	var_181_int = 3; // 0x3872 PushI
	var_182_bool = var_23_int == var_181_int; // 0x3873 Eq
	if(var_182_bool == 0) goto Label_14455; // 0x3874 JumpB
	var_30_int = 2; // 0x3875 MovI
	goto Label_14494; // 0x3876 Jump
	
Label_14455:
	var_183_int = 4; // 0x3877 PushI
	var_184_bool = var_23_int == var_183_int; // 0x3878 Eq
	if(var_184_bool == 0) goto Label_14460; // 0x3879 JumpB
	var_30_int = 3; // 0x387a MovI
	goto Label_14494; // 0x387b Jump
	
Label_14460:
	var_185_int = 5; // 0x387c PushI
	var_186_bool = var_23_int == var_185_int; // 0x387d Eq
	if(var_186_bool == 0) goto Label_14465; // 0x387e JumpB
	var_30_int = 4; // 0x387f MovI
	goto Label_14494; // 0x3880 Jump
	
Label_14465:
	var_187_int = 6; // 0x3881 PushI
	var_188_bool = var_23_int == var_187_int; // 0x3882 Eq
	if(var_188_bool == 0) goto Label_14470; // 0x3883 JumpB
	var_30_int = 5; // 0x3884 MovI
	goto Label_14494; // 0x3885 Jump
	
Label_14470:
	var_189_int = 7; // 0x3886 PushI
	var_190_bool = var_23_int == var_189_int; // 0x3887 Eq
	if(var_190_bool == 0) goto Label_14475; // 0x3888 JumpB
	var_30_int = 5; // 0x3889 MovI
	goto Label_14494; // 0x388a Jump
	
Label_14475:
	var_191_int = 8; // 0x388b PushI
	var_192_bool = var_23_int == var_191_int; // 0x388c Eq
	if(var_192_bool == 0) goto Label_14480; // 0x388d JumpB
	var_30_int = 6; // 0x388e MovI
	goto Label_14494; // 0x388f Jump
	
Label_14480:
	var_193_int = 9; // 0x3890 PushI
	var_194_bool = var_23_int == var_193_int; // 0x3891 Eq
	if(var_194_bool == 0) goto Label_14485; // 0x3892 JumpB
	var_30_int = 6; // 0x3893 MovI
	goto Label_14494; // 0x3894 Jump
	
Label_14485:
	var_195_int = 10; // 0x3895 PushI
	var_196_bool = var_23_int == var_195_int; // 0x3896 Eq
	if(var_196_bool == 0) goto Label_14490; // 0x3897 JumpB
	var_30_int = 7; // 0x3898 MovI
	goto Label_14494; // 0x3899 Jump
	
Label_14490:
	var_197_int = 11; // 0x389a PushI
	var_198_bool = var_23_int == var_197_int; // 0x389b Eq
	if(var_198_bool == 0) goto Label_14494; // 0x389c JumpB
	var_30_int = 8; // 0x389d MovI
}


func_11362()
{
	var_6240_int = 0; var_6241_string = ""; // 0x2c63 PushV
	var_6241_string = "map_chertez_state"; // 0x2c64 MovS
	func_106(var_6240_int, var_6241_string); // 0x2c65 NEW_2
	var_6242_int = 4; // 0x2c67 PushI
	var_6243_bool = var_6240_int <= var_6242_int; // 0x2c68 LE
	if(var_6243_bool == 0) goto Label_11378; // 0x2c69 JumpB
	var_6244_string = "map_chertez_state"; // 0x2c6a PushS
	var_6245_int = 4; // 0x2c6b PushI
	SetVariable(var_6244_string, var_6245_int); // 0x2c6c Func
	var_6246_string = "map_chertez_force"; // 0x2c6e PushS
	var_6247_int = 1; // 0x2c6f PushI
	SetVariable(var_6246_string, var_6247_int); // 0x2c70 Func
	
Label_11378:
	return 0; // 0x2c72 Return
}


func_100(var_40_object)
{
	var_41_object = Obj(); var_42_object = Obj(); // 0x64 PushV
	CreateObjectVector(var_42_object); // 0x65 Func
	var_40_object = var_42_object; // 0x67 Mov
	return 2; // 0x68 Return
}


func_106(var_4824_int, var_4825_string)
{
	var_4826_int = 0; var_4827_int = 0; // 0x6a PushV
	GetVariable(var_4825_string, var_4827_int); // 0x6b Func
	var_4824_int = var_4827_int; // 0x6d Mov
	return 2; // 0x6e Return
}


func_2156(var_749_int, var_750_int, var_751_int)
{
	var_752_int = 0; var_753_int = 0; // 0x86c PushV
	var_754_int = 1; // 0x86d PushI
	var_755_int = var_750_int + var_754_int; // 0x86e Add
	var_756_int = 12; // 0x86f PushI
	var_757_bool = var_755_int == var_756_int; // 0x870 Eq
	if(var_757_bool == 0) goto Label_2163; // 0x871 JumpB
	return 2; // 0x872 Return
	
Label_2163:
	var_758_bool = 0; // 0x873 PushV
	var_758_bool = 0; // 0x874 MovB
	var_759_bool = 0; // 0x875 PushV
	var_759_bool = 1; // 0x876 MovB
	var_760_int = 7; // 0x877 PushI
	var_761_bool = var_751_int < var_760_int; // 0x878 LT
	if(var_761_bool == 0) goto Label_2174; // 0x879 JumpB
	var_762_int = 21; // 0x87a PushI
	var_763_bool = var_751_int > var_762_int; // 0x87b GT
	if(var_763_bool == 0) goto Label_2174; // 0x87c JumpB
	var_759_bool = 0; // 0x87d MovB
	
Label_2174:
	if(var_759_bool == 0) goto Label_2179; // 0x87e JumpB
	var_764_int = 0; // 0x87f PushI
	var_765_bool = var_750_int != var_764_int; // 0x880 Neq
	if(var_765_bool == 0) goto Label_2179; // 0x881 JumpB
	var_758_bool = 1; // 0x882 MovB
	
Label_2179:
	if(var_758_bool == 0) goto Label_2195; // 0x883 JumpB
	var_766_int = 1; // 0x884 PushI
	var_767_float = 0; var_768_int = 0; // 0x885 PushV
	var_768_int = var_750_int; // 0x886 Mov
	func_1091(var_767_float, var_768_int); // 0x887 NEW_2
	var_753_int = var_766_int * var_767_float; // 0x889 Mult2
	var_781_int = var_753_int; // 0x88a Push
	if(var_781_int == 0) goto Label_2195; // 0x88b JumpB
	var_782_int = 0; var_783_string = ""; var_784_string = ""; var_785_int = 0; // 0x88c PushV
	var_782_int = var_749_int; // 0x88d Mov
	var_783_string = "pers_grabitel"; // 0x88e MovS
	var_784_string = "grabitel.xml"; // 0x88f MovS
	var_785_int = var_753_int; // 0x890 Mov
	func_453(var_782_int, var_783_string, var_784_string, var_785_int); // 0x891 NEW_2
	
Label_2195:
	var_790_bool = 0; var_791_int = 0; var_792_int = 0; // 0x893 PushV
	var_791_int = var_750_int; // 0x894 Mov
	var_792_int = var_751_int; // 0x895 Mov
	func_1060(var_790_bool, var_791_int, var_792_int); // 0x896 NEW_2
	if(var_790_bool == 0) goto Label_2258; // 0x898 JumpB
	var_810_int = 0; var_811_string = ""; var_812_string = ""; var_813_int = 0; // 0x899 PushV
	var_810_int = var_749_int; // 0x89a Mov
	var_811_string = "pers_unosha"; // 0x89b MovS
	var_812_string = "unosha_attacker.xml"; // 0x89c MovS
	var_813_int = 1; // 0x89d MovI
	func_453(var_810_int, var_811_string, var_812_string, var_813_int); // 0x89e NEW_2
	var_814_int = 0; var_815_string = ""; var_816_string = ""; var_817_int = 0; // 0x8a0 PushV
	var_814_int = var_749_int; // 0x8a1 Mov
	var_815_string = "pers_unosha"; // 0x8a2 MovS
	var_816_string = "unosha2_attacker.xml"; // 0x8a3 MovS
	var_817_int = 1; // 0x8a4 MovI
	func_453(var_814_int, var_815_string, var_816_string, var_817_int); // 0x8a5 NEW_2
	var_818_int = 0; var_819_string = ""; var_820_string = ""; var_821_int = 0; // 0x8a7 PushV
	var_818_int = var_749_int; // 0x8a8 Mov
	var_819_string = "pers_worker"; // 0x8a9 MovS
	var_820_string = "worker_attacker.xml"; // 0x8aa MovS
	var_821_int = 1; // 0x8ab MovI
	func_453(var_818_int, var_819_string, var_820_string, var_821_int); // 0x8ac NEW_2
	var_822_int = 0; var_823_string = ""; var_824_string = ""; var_825_int = 0; // 0x8ae PushV
	var_822_int = var_749_int; // 0x8af Mov
	var_823_string = "pers_worker"; // 0x8b0 MovS
	var_824_string = "worker2_attacker.xml"; // 0x8b1 MovS
	var_825_int = 1; // 0x8b2 MovI
	func_453(var_822_int, var_823_string, var_824_string, var_825_int); // 0x8b3 NEW_2
	var_826_int = 0; var_827_string = ""; var_828_string = ""; var_829_int = 0; // 0x8b5 PushV
	var_826_int = var_749_int; // 0x8b6 Mov
	var_827_string = "pers_boy"; // 0x8b7 MovS
	var_828_string = "boy.xml"; // 0x8b8 MovS
	var_829_int = 1; // 0x8b9 MovI
	func_453(var_826_int, var_827_string, var_828_string, var_829_int); // 0x8ba NEW_2
	var_830_int = 0; var_831_string = ""; var_832_string = ""; var_833_int = 0; // 0x8bc PushV
	var_830_int = var_749_int; // 0x8bd Mov
	var_831_string = "pers_alkash"; // 0x8be MovS
	var_832_string = "alkash.xml"; // 0x8bf MovS
	var_833_int = 1; // 0x8c0 MovI
	func_453(var_830_int, var_831_string, var_832_string, var_833_int); // 0x8c1 NEW_2
	var_834_int = 0; var_835_string = ""; var_836_string = ""; var_837_int = 0; // 0x8c3 PushV
	var_834_int = var_749_int; // 0x8c4 Mov
	var_835_string = "pers_girl"; // 0x8c5 MovS
	var_836_string = "girl.xml"; // 0x8c6 MovS
	var_837_int = 1; // 0x8c7 MovI
	func_453(var_834_int, var_835_string, var_836_string, var_837_int); // 0x8c8 NEW_2
	var_838_int = 0; var_839_string = ""; var_840_string = ""; var_841_int = 0; // 0x8ca PushV
	var_838_int = var_749_int; // 0x8cb Mov
	var_839_string = "pers_girl"; // 0x8cc MovS
	var_840_string = "girl2.xml"; // 0x8cd MovS
	var_841_int = 1; // 0x8ce MovI
	func_453(var_838_int, var_839_string, var_840_string, var_841_int); // 0x8cf NEW_2
	goto Label_2332; // 0x8d1 Jump
	
Label_2332:
	return 2; // 0x91c Return
	
Label_2258:
	var_842_bool = 0; // 0x8d2 PushV
	var_842_bool = 0; // 0x8d3 MovB
	var_843_int = 8; // 0x8d4 PushI
	var_844_bool = var_751_int > var_843_int; // 0x8d5 GT
	if(var_844_bool == 0) goto Label_2267; // 0x8d6 JumpB
	var_845_int = 21; // 0x8d7 PushI
	var_846_bool = var_751_int < var_845_int; // 0x8d8 LT
	if(var_846_bool == 0) goto Label_2267; // 0x8d9 JumpB
	var_842_bool = 1; // 0x8da MovB
	
Label_2267:
	if(var_842_bool == 0) goto Label_2311; // 0x8db JumpB
	var_847_int = 0; var_848_string = ""; var_849_string = ""; var_850_int = 0; // 0x8dc PushV
	var_847_int = var_749_int; // 0x8dd Mov
	var_848_string = "pers_boy"; // 0x8de MovS
	var_849_string = "boy.xml"; // 0x8df MovS
	var_850_int = 1; // 0x8e0 MovI
	func_453(var_847_int, var_848_string, var_849_string, var_850_int); // 0x8e1 NEW_2
	var_851_int = 0; var_852_string = ""; var_853_string = ""; var_854_int = 0; // 0x8e3 PushV
	var_851_int = var_749_int; // 0x8e4 Mov
	var_852_string = "pers_alkash"; // 0x8e5 MovS
	var_853_string = "alkash.xml"; // 0x8e6 MovS
	var_854_int = 1; // 0x8e7 MovI
	func_453(var_851_int, var_852_string, var_853_string, var_854_int); // 0x8e8 NEW_2
	var_855_int = 0; var_856_string = ""; var_857_string = ""; var_858_int = 0; // 0x8ea PushV
	var_855_int = var_749_int; // 0x8eb Mov
	var_856_string = "pers_girl"; // 0x8ec MovS
	var_857_string = "girl.xml"; // 0x8ed MovS
	var_858_int = 1; // 0x8ee MovI
	func_453(var_855_int, var_856_string, var_857_string, var_858_int); // 0x8ef NEW_2
	var_859_int = 0; var_860_string = ""; var_861_string = ""; var_862_int = 0; // 0x8f1 PushV
	var_859_int = var_749_int; // 0x8f2 Mov
	var_860_string = "pers_girl"; // 0x8f3 MovS
	var_861_string = "girl2.xml"; // 0x8f4 MovS
	var_862_int = 1; // 0x8f5 MovI
	func_453(var_859_int, var_860_string, var_861_string, var_862_int); // 0x8f6 NEW_2
	var_863_int = 0; var_864_string = ""; var_865_string = ""; var_866_int = 0; // 0x8f8 PushV
	var_863_int = var_749_int; // 0x8f9 Mov
	var_864_string = "pers_worker"; // 0x8fa MovS
	var_865_string = "worker.xml"; // 0x8fb MovS
	var_866_int = 2; // 0x8fc MovI
	func_453(var_863_int, var_864_string, var_865_string, var_866_int); // 0x8fd NEW_2
	var_867_int = 0; var_868_string = ""; var_869_string = ""; var_870_int = 0; // 0x8ff PushV
	var_867_int = var_749_int; // 0x900 Mov
	var_868_string = "pers_worker"; // 0x901 MovS
	var_869_string = "worker2.xml"; // 0x902 MovS
	var_870_int = 2; // 0x903 MovI
	func_453(var_867_int, var_868_string, var_869_string, var_870_int); // 0x904 NEW_2
	goto Label_2332; // 0x906 Jump
	
Label_2311:
	var_871_int = 0; var_872_string = ""; var_873_string = ""; var_874_int = 0; // 0x907 PushV
	var_871_int = var_749_int; // 0x908 Mov
	var_872_string = "pers_alkash"; // 0x909 MovS
	var_873_string = "alkash.xml"; // 0x90a MovS
	var_874_int = 1; // 0x90b MovI
	func_453(var_871_int, var_872_string, var_873_string, var_874_int); // 0x90c NEW_2
	var_875_int = 0; var_876_string = ""; var_877_string = ""; var_878_int = 0; // 0x90e PushV
	var_875_int = var_749_int; // 0x90f Mov
	var_876_string = "pers_worker"; // 0x910 MovS
	var_877_string = "worker.xml"; // 0x911 MovS
	var_878_int = 1; // 0x912 MovI
	func_453(var_875_int, var_876_string, var_877_string, var_878_int); // 0x913 NEW_2
	var_879_int = 0; var_880_string = ""; var_881_string = ""; var_882_int = 0; // 0x915 PushV
	var_879_int = var_749_int; // 0x916 Mov
	var_880_string = "pers_worker"; // 0x917 MovS
	var_881_string = "worker2.xml"; // 0x918 MovS
	var_882_int = 1; // 0x919 MovI
	func_453(var_879_int, var_880_string, var_881_string, var_882_int); // 0x91a NEW_2
}


func_111(var_4763_object, var_4764_string)
{
	var_4765_object = Obj(); var_4766_object = Obj(); var_4767_object = Obj(); var_4768_object = Obj(); // 0x6f PushV
	GetMainOutdoorScene(var_4767_object); // 0x70 Func
	var_4769_string = ".bin"; // 0x72 PushS
	var_4770_int = var_4764_string + var_4769_string; // 0x73 Add
	AddBlankActor(var_4768_object, var_4767_object, var_4764_string, var_4770_int); // 0x74 Func
	var_4763_object = var_4768_object; // 0x76 Mov
	return 4; // 0x77 Return
}


func_11379()
{
	var_6254_int = 0; var_6255_string = ""; // 0x2c74 PushV
	var_6255_string = "map_chertez_state"; // 0x2c75 MovS
	func_106(var_6254_int, var_6255_string); // 0x2c76 NEW_2
	var_6256_int = 5; // 0x2c78 PushI
	var_6257_bool = var_6254_int <= var_6256_int; // 0x2c79 LE
	if(var_6257_bool == 0) goto Label_11395; // 0x2c7a JumpB
	var_6258_string = "map_chertez_state"; // 0x2c7b PushS
	var_6259_int = 5; // 0x2c7c PushI
	SetVariable(var_6258_string, var_6259_int); // 0x2c7d Func
	var_6260_string = "map_chertez_force"; // 0x2c7f PushS
	var_6261_int = 1; // 0x2c80 PushI
	SetVariable(var_6260_string, var_6261_int); // 0x2c81 Func
	
Label_11395:
	return 0; // 0x2c83 Return
}


func_5240(var_2585_int, var_2586_int, var_2587_object, var_2588_object, var_2589_object, var_2590_object)
{
	var_2591_int = 0; // 0x1479 PushI
	var_2592_bool = var_2586_int == var_2591_int; // 0x147a Eq
	if(var_2592_bool == 0) goto Label_5280; // 0x147b JumpB
	var_2593_int = 0; var_2594_bool = 0; // 0x147c PushV
	var_2593_int = 4; // 0x147d MovI
	var_2594_bool = 1; // 0x147e MovB
	func_746(var_2593_int, var_2594_bool); // 0x147f NEW_2
	var_2595_int = 0; var_2596_bool = 0; var_2597_int = 0; // 0x1481 PushV
	var_2595_int = 4; // 0x1482 MovI
	var_2596_bool = 1; // 0x1483 MovB
	var_2597_int = 1; // 0x1484 MovI
	func_763(var_2595_int, var_2596_bool, var_2597_int); // 0x1485 NEW_2
	var_2598_int = 0; var_2599_int = 0; var_2600_object = Obj(); var_2601_object = Obj(); var_2602_object = Obj(); // 0x1487 PushV
	var_2598_int = 4; // 0x1488 MovI
	var_2599_int = var_2585_int; // 0x1489 Mov
	var_2600_object = var_2587_object; // 0x148a Mov
	var_2601_object = var_2588_object; // 0x148b Mov
	var_2602_object = var_2589_object; // 0x148c Mov
	func_591(var_2598_int, var_2599_int, var_2600_object, var_2601_object, var_2602_object); // 0x148d NEW_2
	var_2603_object = Obj(); var_2604_int = 0; // 0x148f PushV
	var_2603_object = var_2590_object; // 0x1490 Mov
	var_2604_int = 1; // 0x1491 MovI
	func_255(var_2604_int); // 0x1492 NEW_2
	var_2605_int = 0; var_2606_bool = 0; var_2607_int = 0; // 0x1494 PushV
	var_2605_int = 4; // 0x1495 MovI
	var_2606_bool = 1; // 0x1496 MovB
	var_2607_int = 4; // 0x1497 MovI
	func_820(var_2605_int, var_2606_bool, var_2607_int); // 0x1498 NEW_2
	var_2608_int = 0; var_2609_bool = 0; var_2610_int = 0; // 0x149a PushV
	var_2608_int = 4; // 0x149b MovI
	var_2609_bool = 0; // 0x149c MovB
	var_2610_int = 4; // 0x149d MovI
	func_882(var_2608_int, var_2609_bool, var_2610_int); // 0x149e NEW_2
	
Label_5280:
	var_2611_int = 0; var_2612_bool = 0; // 0x14a0 PushV
	var_2611_int = 4; // 0x14a1 MovI
	var_2612_bool = 0; // 0x14a2 MovB
	func_729(var_2611_int, var_2612_bool); // 0x14a3 NEW_2
	var_2613_int = 0; var_2614_int = 0; var_2615_int = 0; // 0x14a5 PushV
	var_2613_int = 4; // 0x14a6 MovI
	var_2614_int = var_2585_int; // 0x14a7 Mov
	var_2615_int = var_2586_int; // 0x14a8 Mov
	func_2894(var_2613_int, var_2614_int, var_2615_int); // 0x14a9 NEW_2
	return 0; // 0x14ab Return
}


func_6265(var_1636_int, var_1637_int, var_1638_object, var_1639_object, var_1640_object, var_1641_object)
{
	var_1642_int = 0; // 0x187a PushI
	var_1643_bool = var_1637_int == var_1642_int; // 0x187b Eq
	if(var_1643_bool == 0) goto Label_6305; // 0x187c JumpB
	var_1644_int = 0; var_1645_bool = 0; // 0x187d PushV
	var_1644_int = 10; // 0x187e MovI
	var_1645_bool = 0; // 0x187f MovB
	func_746(var_1644_int, var_1645_bool); // 0x1880 NEW_2
	var_1646_int = 0; var_1647_bool = 0; var_1648_int = 0; // 0x1882 PushV
	var_1646_int = 10; // 0x1883 MovI
	var_1647_bool = 0; // 0x1884 MovB
	var_1648_int = 1; // 0x1885 MovI
	func_763(var_1646_int, var_1647_bool, var_1648_int); // 0x1886 NEW_2
	var_1649_int = 0; var_1650_int = 0; var_1651_object = Obj(); var_1652_object = Obj(); var_1653_object = Obj(); // 0x1888 PushV
	var_1649_int = 10; // 0x1889 MovI
	var_1650_int = var_1636_int; // 0x188a Mov
	var_1651_object = var_1638_object; // 0x188b Mov
	var_1652_object = var_1639_object; // 0x188c Mov
	var_1653_object = var_1640_object; // 0x188d Mov
	func_572(var_1650_int, var_1651_object, var_1652_object, var_1653_object); // 0x188e NEW_2
	var_1654_object = Obj(); var_1655_int = 0; // 0x1890 PushV
	var_1654_object = var_1641_object; // 0x1891 Mov
	var_1655_int = 0; // 0x1892 MovI
	func_255(var_1655_int); // 0x1893 NEW_2
	var_1656_int = 0; var_1657_bool = 0; var_1658_int = 0; // 0x1895 PushV
	var_1656_int = 10; // 0x1896 MovI
	var_1657_bool = 0; // 0x1897 MovB
	var_1658_int = 7; // 0x1898 MovI
	func_820(var_1656_int, var_1657_bool, var_1658_int); // 0x1899 NEW_2
	var_1659_int = 0; var_1660_bool = 0; var_1661_int = 0; // 0x189b PushV
	var_1659_int = 10; // 0x189c MovI
	var_1660_bool = 0; // 0x189d MovB
	var_1661_int = 7; // 0x189e MovI
	func_882(var_1659_int, var_1660_bool, var_1661_int); // 0x189f NEW_2
	
Label_6305:
	var_1662_int = 0; var_1663_int = 0; // 0x18a1 PushV
	var_1662_int = 10; // 0x18a2 MovI
	var_1663_int = var_1637_int; // 0x18a3 Mov
	func_933(var_1662_int, var_1663_int); // 0x18a4 NEW_2
	var_1664_int = 0; var_1665_int = 0; var_1666_int = 0; // 0x18a6 PushV
	var_1664_int = 10; // 0x18a7 MovI
	var_1665_int = var_1636_int; // 0x18a8 Mov
	var_1666_int = var_1637_int; // 0x18a9 Mov
	func_1574(var_1664_int, var_1665_int, var_1666_int); // 0x18aa NEW_2
	return 0; // 0x18ac Return
}


func_122(var_4675_object, var_4676_string)
{
	var_4677_object = Obj(); var_4678_object = Obj(); var_4679_object = Obj(); var_4680_object = Obj(); // 0x7a PushV
	GetMainOutdoorScene(var_4679_object); // 0x7b Func
	var_4681_string = ".xml"; // 0x7d PushS
	var_4682_int = var_4676_string + var_4681_string; // 0x7e Add
	AddBlankActorFromXml(var_4680_object, var_4679_object, var_4676_string, var_4682_int); // 0x7f Func
	var_4675_object = var_4680_object; // 0x81 Mov
	return 4; // 0x82 Return
}


func_11396()
{
	var_6268_int = 0; var_6269_string = ""; // 0x2c85 PushV
	var_6269_string = "map_chertez_state"; // 0x2c86 MovS
	func_106(var_6268_int, var_6269_string); // 0x2c87 NEW_2
	var_6270_int = 6; // 0x2c89 PushI
	var_6271_bool = var_6268_int <= var_6270_int; // 0x2c8a LE
	if(var_6271_bool == 0) goto Label_11412; // 0x2c8b JumpB
	var_6272_string = "map_chertez_state"; // 0x2c8c PushS
	var_6273_int = 6; // 0x2c8d PushI
	SetVariable(var_6272_string, var_6273_int); // 0x2c8e Func
	var_6274_string = "map_chertez_force"; // 0x2c90 PushS
	var_6275_int = 1; // 0x2c91 PushI
	SetVariable(var_6274_string, var_6275_int); // 0x2c92 Func
	
Label_11412:
	return 0; // 0x2c94 Return
}


func_133(var_328_object, var_330_string, var_331_string, var_332_string)
{
	var_334_bool = 0; var_335_cvector = CVector(0,0,0); var_336_cvector = CVector(0,0,0); var_337_object = Obj(); var_338_bool = 0; var_339_cvector = CVector(0,0,0); var_340_cvector = CVector(0,0,0); var_341_object = Obj(); // 0x85 PushV
	GetLocator(var_330_string, var_338_bool, var_339_cvector, var_340_cvector); // 0x86 ObjFunc
	var_342_bool = var_338_bool == 0; // 0x88 Not
	if(var_342_bool == 0) goto Label_146; // 0x89 JumpB
	var_343_string = "Locator "; // 0x8a PushS
	var_344_int = var_343_string + var_330_string; // 0x8b Add
	var_345_string = " doesn't exist"; // 0x8c PushS
	var_346_int = var_344_int + var_345_string; // 0x8d Add
	Trace(var_346_int); // 0x8e Func
	var_341_object = 0; // 0x90 SetNull
	goto Label_148; // 0x91 Jump
	
Label_148:
	var_328_object = var_341_object; // 0x94 Mov
	return 8; // 0x95 Return
	
Label_146:
	AddStationaryActor(var_341_object, var_339_cvector, var_340_cvector, var_331_string, var_332_string); // 0x92 ObjFunc
}


func_7311(var_3137_int, var_3138_int, var_3139_object, var_3140_object, var_3141_object, var_3142_object)
{
	var_3143_int = 0; // 0x1c90 PushI
	var_3144_bool = var_3138_int == var_3143_int; // 0x1c91 Eq
	if(var_3144_bool == 0) goto Label_7351; // 0x1c92 JumpB
	var_3145_int = 0; var_3146_bool = 0; // 0x1c93 PushV
	var_3145_int = 15; // 0x1c94 MovI
	var_3146_bool = 1; // 0x1c95 MovB
	func_746(var_3145_int, var_3146_bool); // 0x1c96 NEW_2
	var_3147_int = 0; var_3148_bool = 0; var_3149_int = 0; // 0x1c98 PushV
	var_3147_int = 15; // 0x1c99 MovI
	var_3148_bool = 1; // 0x1c9a MovB
	var_3149_int = 1; // 0x1c9b MovI
	func_763(var_3147_int, var_3148_bool, var_3149_int); // 0x1c9c NEW_2
	var_3150_int = 0; var_3151_int = 0; var_3152_object = Obj(); var_3153_object = Obj(); var_3154_object = Obj(); // 0x1c9e PushV
	var_3150_int = 15; // 0x1c9f MovI
	var_3151_int = var_3137_int; // 0x1ca0 Mov
	var_3152_object = var_3139_object; // 0x1ca1 Mov
	var_3153_object = var_3140_object; // 0x1ca2 Mov
	var_3154_object = var_3141_object; // 0x1ca3 Mov
	func_591(var_3150_int, var_3151_int, var_3152_object, var_3153_object, var_3154_object); // 0x1ca4 NEW_2
	var_3155_object = Obj(); var_3156_int = 0; // 0x1ca6 PushV
	var_3155_object = var_3142_object; // 0x1ca7 Mov
	var_3156_int = 1; // 0x1ca8 MovI
	func_255(var_3156_int); // 0x1ca9 NEW_2
	var_3157_int = 0; var_3158_bool = 0; var_3159_int = 0; // 0x1cab PushV
	var_3157_int = 15; // 0x1cac MovI
	var_3158_bool = 1; // 0x1cad MovB
	var_3159_int = 5; // 0x1cae MovI
	func_820(var_3157_int, var_3158_bool, var_3159_int); // 0x1caf NEW_2
	var_3160_int = 0; var_3161_bool = 0; var_3162_int = 0; // 0x1cb1 PushV
	var_3160_int = 15; // 0x1cb2 MovI
	var_3161_bool = 0; // 0x1cb3 MovB
	var_3162_int = 5; // 0x1cb4 MovI
	func_882(var_3160_int, var_3161_bool, var_3162_int); // 0x1cb5 NEW_2
	
Label_7351:
	var_3163_int = 0; var_3164_bool = 0; // 0x1cb7 PushV
	var_3163_int = 15; // 0x1cb8 MovI
	var_3164_bool = 0; // 0x1cb9 MovB
	func_729(var_3163_int, var_3164_bool); // 0x1cba NEW_2
	var_3165_int = 0; var_3166_int = 0; var_3167_int = 0; // 0x1cbc PushV
	var_3165_int = 15; // 0x1cbd MovI
	var_3166_int = var_3137_int; // 0x1cbe Mov
	var_3167_int = var_3138_int; // 0x1cbf Mov
	func_2534(var_3165_int, var_3166_int, var_3167_int); // 0x1cc0 NEW_2
	return 0; // 0x1cc2 Return
}


func_11413()
{
	var_4683_string = ""; var_4684_bool = 0; // 0x2c96 PushV
	var_4683_string = "termitnik@door1"; // 0x2c97 MovS
	var_4684_bool = 1; // 0x2c98 MovB
	func_151(var_4683_string, var_4684_bool); // 0x2c99 NEW_2
	return 0; // 0x2c9b Return
}


func_151(var_4590_string, var_4591_bool)
{
	var_4592_object = Obj(); var_4593_object = Obj(); // 0x97 PushV
	FindActor(var_4593_object, var_4590_string); // 0x98 Func
	var_4594_bool = var_4593_object == 0; // 0x9a Not
	if(var_4594_bool == 0) goto Label_163; // 0x9b JumpB
	var_4595_string = "Door "; // 0x9c PushS
	var_4596_int = var_4595_string + var_4590_string; // 0x9d Add
	var_4597_string = " not found"; // 0x9e PushS
	var_4598_int = var_4596_int + var_4597_string; // 0x9f Add
	Trace(var_4598_int); // 0xa0 Func
	goto Label_166; // 0xa2 Jump
	
Label_166:
	return 2; // 0xa6 Return
	
Label_163:
	var_4599_string = "locked"; // 0xa3 PushS
	SetProperty(var_4599_string, var_4591_bool); // 0xa4 ObjFunc
}


func_11420()
{
	var_5165_string = ""; var_5166_bool = 0; // 0x2c9d PushV
	var_5165_string = "termitnik@door1"; // 0x2c9e MovS
	var_5166_bool = 0; // 0x2c9f MovB
	func_151(var_5165_string, var_5166_bool); // 0x2ca0 NEW_2
	return 0; // 0x2ca2 Return
}


func_11427()
{
	var_6146_string = "resque_list"; // 0x2ca4 PushS
	var_6147_int = 1; // 0x2ca5 PushI
	SetVariable(var_6146_string, var_6147_int); // 0x2ca6 Func
	func_14330(); // 0x2ca9 NEW_2
	return 0; // 0x2cab Return
}


func_168(var_4622_string, var_4623_bool)
{
	var_4624_object = Obj(); var_4625_object = Obj(); // 0xa8 PushV
	FindActor(var_4625_object, var_4622_string); // 0xa9 Func
	var_4626_bool = var_4625_object == 0; // 0xab Not
	if(var_4626_bool == 0) goto Label_180; // 0xac JumpB
	var_4627_string = "Door "; // 0xad PushS
	var_4628_int = var_4627_string + var_4622_string; // 0xae Add
	var_4629_string = " not found"; // 0xaf PushS
	var_4630_int = var_4628_int + var_4629_string; // 0xb0 Add
	Trace(var_4630_int); // 0xb1 Func
	goto Label_187; // 0xb3 Jump
	
Label_187:
	return 2; // 0xbb Return
	
Label_180:
	var_4631_bool = var_4623_bool; // 0xb4 Push
	if(var_4631_bool == 0) goto Label_184; // 0xb5 JumpB
	Close(); // 0xb6 ObjFunc
	
Label_184:
	var_4632_string = "locked"; // 0xb8 PushS
	SetProperty(var_4632_string, var_4623_bool); // 0xb9 ObjFunc
}


func_5292(var_3711_int, var_3712_int, var_3713_object, var_3714_object, var_3715_object, var_3716_object)
{
	var_3717_int = 0; // 0x14ad PushI
	var_3718_bool = var_3712_int == var_3717_int; // 0x14ae Eq
	if(var_3718_bool == 0) goto Label_5332; // 0x14af JumpB
	var_3719_int = 0; var_3720_bool = 0; // 0x14b0 PushV
	var_3719_int = 4; // 0x14b1 MovI
	var_3720_bool = 0; // 0x14b2 MovB
	func_746(var_3719_int, var_3720_bool); // 0x14b3 NEW_2
	var_3721_int = 0; var_3722_bool = 0; var_3723_int = 0; // 0x14b5 PushV
	var_3721_int = 4; // 0x14b6 MovI
	var_3722_bool = 0; // 0x14b7 MovB
	var_3723_int = 1; // 0x14b8 MovI
	func_763(var_3721_int, var_3722_bool, var_3723_int); // 0x14b9 NEW_2
	var_3724_int = 0; var_3725_int = 0; var_3726_object = Obj(); var_3727_object = Obj(); var_3728_object = Obj(); // 0x14bb PushV
	var_3724_int = 4; // 0x14bc MovI
	var_3725_int = var_3711_int; // 0x14bd Mov
	var_3726_object = var_3713_object; // 0x14be Mov
	var_3727_object = var_3714_object; // 0x14bf Mov
	var_3728_object = var_3715_object; // 0x14c0 Mov
	func_670(var_3724_int, var_3725_int, var_3726_object, var_3727_object, var_3728_object); // 0x14c1 NEW_2
	var_3729_object = Obj(); var_3730_int = 0; // 0x14c3 PushV
	var_3729_object = var_3716_object; // 0x14c4 Mov
	var_3730_int = 2; // 0x14c5 MovI
	func_255(var_3730_int); // 0x14c6 NEW_2
	var_3731_int = 0; var_3732_bool = 0; var_3733_int = 0; // 0x14c8 PushV
	var_3731_int = 4; // 0x14c9 MovI
	var_3732_bool = 0; // 0x14ca MovB
	var_3733_int = 4; // 0x14cb MovI
	func_820(var_3731_int, var_3732_bool, var_3733_int); // 0x14cc NEW_2
	var_3734_int = 0; var_3735_bool = 0; var_3736_int = 0; // 0x14ce PushV
	var_3734_int = 4; // 0x14cf MovI
	var_3735_bool = 1; // 0x14d0 MovB
	var_3736_int = 4; // 0x14d1 MovI
	func_882(var_3734_int, var_3735_bool, var_3736_int); // 0x14d2 NEW_2
	
Label_5332:
	var_3737_int = 0; var_3738_bool = 0; // 0x14d4 PushV
	var_3737_int = 4; // 0x14d5 MovI
	var_3738_bool = 0; // 0x14d6 MovB
	func_729(var_3737_int, var_3738_bool); // 0x14d7 NEW_2
	var_3739_int = 0; var_3740_int = 0; var_3741_int = 0; // 0x14d9 PushV
	var_3739_int = 4; // 0x14da MovI
	var_3740_int = var_3711_int; // 0x14db Mov
	var_3741_int = var_3712_int; // 0x14dc Mov
	func_3797(var_3739_int, var_3740_int, var_3741_int); // 0x14dd NEW_2
	return 0; // 0x14df Return
}


func_6317(var_2866_int, var_2867_int, var_2868_object, var_2869_object, var_2870_object, var_2871_object)
{
	var_2872_int = 0; // 0x18ae PushI
	var_2873_bool = var_2867_int == var_2872_int; // 0x18af Eq
	if(var_2873_bool == 0) goto Label_6357; // 0x18b0 JumpB
	var_2874_int = 0; var_2875_bool = 0; // 0x18b1 PushV
	var_2874_int = 10; // 0x18b2 MovI
	var_2875_bool = 1; // 0x18b3 MovB
	func_746(var_2874_int, var_2875_bool); // 0x18b4 NEW_2
	var_2876_int = 0; var_2877_bool = 0; var_2878_int = 0; // 0x18b6 PushV
	var_2876_int = 10; // 0x18b7 MovI
	var_2877_bool = 1; // 0x18b8 MovB
	var_2878_int = 1; // 0x18b9 MovI
	func_763(var_2876_int, var_2877_bool, var_2878_int); // 0x18ba NEW_2
	var_2879_int = 0; var_2880_int = 0; var_2881_object = Obj(); var_2882_object = Obj(); var_2883_object = Obj(); // 0x18bc PushV
	var_2879_int = 10; // 0x18bd MovI
	var_2880_int = var_2866_int; // 0x18be Mov
	var_2881_object = var_2868_object; // 0x18bf Mov
	var_2882_object = var_2869_object; // 0x18c0 Mov
	var_2883_object = var_2870_object; // 0x18c1 Mov
	func_591(var_2879_int, var_2880_int, var_2881_object, var_2882_object, var_2883_object); // 0x18c2 NEW_2
	var_2884_object = Obj(); var_2885_int = 0; // 0x18c4 PushV
	var_2884_object = var_2871_object; // 0x18c5 Mov
	var_2885_int = 1; // 0x18c6 MovI
	func_255(var_2885_int); // 0x18c7 NEW_2
	var_2886_int = 0; var_2887_bool = 0; var_2888_int = 0; // 0x18c9 PushV
	var_2886_int = 10; // 0x18ca MovI
	var_2887_bool = 1; // 0x18cb MovB
	var_2888_int = 7; // 0x18cc MovI
	func_820(var_2886_int, var_2887_bool, var_2888_int); // 0x18cd NEW_2
	var_2889_int = 0; var_2890_bool = 0; var_2891_int = 0; // 0x18cf PushV
	var_2889_int = 10; // 0x18d0 MovI
	var_2890_bool = 0; // 0x18d1 MovB
	var_2891_int = 7; // 0x18d2 MovI
	func_882(var_2889_int, var_2890_bool, var_2891_int); // 0x18d3 NEW_2
	
Label_6357:
	var_2892_int = 0; var_2893_bool = 0; // 0x18d5 PushV
	var_2892_int = 10; // 0x18d6 MovI
	var_2893_bool = 0; // 0x18d7 MovB
	func_729(var_2892_int, var_2893_bool); // 0x18d8 NEW_2
	var_2894_int = 0; var_2895_int = 0; var_2896_int = 0; // 0x18da PushV
	var_2894_int = 10; // 0x18db MovI
	var_2895_int = var_2866_int; // 0x18dc Mov
	var_2896_int = var_2867_int; // 0x18dd Mov
	func_2714(var_2894_int, var_2895_int, var_2896_int); // 0x18de NEW_2
	return 0; // 0x18e0 Return
}


func_11436()
{
	var_4752_string = ""; var_4753_bool = 0; // 0x2cad PushV
	var_4752_string = "mnogogrannik@door1"; // 0x2cae MovS
	var_4753_bool = 1; // 0x2caf MovB
	func_151(var_4752_string, var_4753_bool); // 0x2cb0 NEW_2
	return 0; // 0x2cb2 Return
}


func_11443()
{
	var_4716_string = ""; var_4717_bool = 0; // 0x2cb4 PushV
	var_4716_string = "sobor@door1"; // 0x2cb5 MovS
	var_4717_bool = 1; // 0x2cb6 MovB
	func_151(var_4716_string, var_4717_bool); // 0x2cb7 NEW_2
	return 0; // 0x2cb9 Return
}


func_1205(var_2156_float, var_2157_int)
{
	var_2158_int = 1; // 0x4b6 PushI
	var_2159_int = var_2157_int + var_2158_int; // 0x4b7 Add
	var_2160_int = 1; // 0x4b8 PushI
	var_2161_bool = var_2159_int == var_2160_int; // 0x4b9 Eq
	if(var_2161_bool == 0) goto Label_1214; // 0x4ba JumpB
	var_2156_float = 0; // 0x4bb MovI
	return 0; // 0x4bc Return
	
Label_1214:
	var_2162_int = 1; // 0x4be PushI
	var_2163_int = var_2157_int + var_2162_int; // 0x4bf Add
	var_2164_int = 2; // 0x4c0 PushI
	var_2165_bool = var_2163_int == var_2164_int; // 0x4c1 Eq
	if(var_2165_bool == 0) goto Label_1222; // 0x4c2 JumpB
	var_2156_float = 0; // 0x4c3 MovI
	return 0; // 0x4c4 Return
	
Label_1222:
	var_2166_int = 1; // 0x4c6 PushI
	var_2167_int = var_2157_int + var_2166_int; // 0x4c7 Add
	var_2168_int = 3; // 0x4c8 PushI
	var_2169_bool = var_2167_int == var_2168_int; // 0x4c9 Eq
	if(var_2169_bool == 0) goto Label_1230; // 0x4ca JumpB
	var_2156_float = 0; // 0x4cb MovI
	return 0; // 0x4cc Return
	
Label_1230:
	var_2170_int = 1; // 0x4ce PushI
	var_2171_int = var_2157_int + var_2170_int; // 0x4cf Add
	var_2172_int = 4; // 0x4d0 PushI
	var_2173_bool = var_2171_int == var_2172_int; // 0x4d1 Eq
	if(var_2173_bool == 0) goto Label_1238; // 0x4d2 JumpB
	var_2156_float = 0; // 0x4d3 MovI
	return 0; // 0x4d4 Return
	
Label_1238:
	var_2174_int = 1; // 0x4d6 PushI
	var_2175_int = var_2157_int + var_2174_int; // 0x4d7 Add
	var_2176_int = 5; // 0x4d8 PushI
	var_2177_bool = var_2175_int == var_2176_int; // 0x4d9 Eq
	if(var_2177_bool == 0) goto Label_1246; // 0x4da JumpB
	var_2156_float = 0; // 0x4db MovI
	return 0; // 0x4dc Return
	
Label_1246:
	var_2178_int = 1; // 0x4de PushI
	var_2179_int = var_2157_int + var_2178_int; // 0x4df Add
	var_2180_int = 6; // 0x4e0 PushI
	var_2181_bool = var_2179_int == var_2180_int; // 0x4e1 Eq
	if(var_2181_bool == 0) goto Label_1254; // 0x4e2 JumpB
	var_2156_float = 2; // 0x4e3 MovI
	return 0; // 0x4e4 Return
	
Label_1254:
	var_2182_int = 1; // 0x4e6 PushI
	var_2183_int = var_2157_int + var_2182_int; // 0x4e7 Add
	var_2184_int = 7; // 0x4e8 PushI
	var_2185_bool = var_2183_int == var_2184_int; // 0x4e9 Eq
	if(var_2185_bool == 0) goto Label_1262; // 0x4ea JumpB
	var_2156_float = 1; // 0x4eb MovI
	return 0; // 0x4ec Return
	
Label_1262:
	var_2186_int = 1; // 0x4ee PushI
	var_2187_int = var_2157_int + var_2186_int; // 0x4ef Add
	var_2188_int = 8; // 0x4f0 PushI
	var_2189_bool = var_2187_int == var_2188_int; // 0x4f1 Eq
	if(var_2189_bool == 0) goto Label_1270; // 0x4f2 JumpB
	var_2156_float = 1; // 0x4f3 MovI
	return 0; // 0x4f4 Return
	
Label_1270:
	var_2190_int = 1; // 0x4f6 PushI
	var_2191_int = var_2157_int + var_2190_int; // 0x4f7 Add
	var_2192_int = 9; // 0x4f8 PushI
	var_2193_bool = var_2191_int == var_2192_int; // 0x4f9 Eq
	if(var_2193_bool == 0) goto Label_1278; // 0x4fa JumpB
	var_2156_float = 1; // 0x4fb MovI
	return 0; // 0x4fc Return
	
Label_1278:
	var_2194_int = 1; // 0x4fe PushI
	var_2195_int = var_2157_int + var_2194_int; // 0x4ff Add
	var_2196_int = 10; // 0x500 PushI
	var_2197_bool = var_2195_int == var_2196_int; // 0x501 Eq
	if(var_2197_bool == 0) goto Label_1286; // 0x502 JumpB
	var_2156_float = 1; // 0x503 MovI
	return 0; // 0x504 Return
	
Label_1286:
	var_2198_int = 1; // 0x506 PushI
	var_2199_int = var_2157_int + var_2198_int; // 0x507 Add
	var_2200_int = 11; // 0x508 PushI
	var_2201_bool = var_2199_int == var_2200_int; // 0x509 Eq
	if(var_2201_bool == 0) goto Label_1293; // 0x50a JumpB
	var_2156_float = 1; // 0x50b MovI
	return 0; // 0x50c Return
	
Label_1293:
	var_2156_float = 0; // 0x50d MovI
	return 0; // 0x50e Return
}


func_3254(var_2302_int, var_2303_int, var_2304_int)
{
	var_2305_int = 0; var_2306_int = 0; var_2307_int = 0; var_2308_int = 0; // 0xcb6 PushV
	var_2309_bool = 0; // 0xcb7 PushV
	var_2309_bool = 0; // 0xcb8 MovB
	var_2310_int = 8; // 0xcb9 PushI
	var_2311_bool = var_2304_int > var_2310_int; // 0xcba GT
	if(var_2311_bool == 0) goto Label_3264; // 0xcbb JumpB
	var_2312_int = 21; // 0xcbc PushI
	var_2313_bool = var_2304_int < var_2312_int; // 0xcbd LT
	if(var_2313_bool == 0) goto Label_3264; // 0xcbe JumpB
	var_2309_bool = 1; // 0xcbf MovB
	
Label_3264:
	if(var_2309_bool == 0) goto Label_3319; // 0xcc0 JumpB
	var_2314_int = 0; var_2315_string = ""; var_2316_string = ""; var_2317_int = 0; // 0xcc1 PushV
	var_2314_int = var_2302_int; // 0xcc2 Mov
	var_2315_string = "pers_vaxxabit"; // 0xcc3 MovS
	var_2316_string = "vaxxabit_d.xml"; // 0xcc4 MovS
	var_2317_int = 7; // 0xcc5 MovI
	func_453(var_2314_int, var_2315_string, var_2316_string, var_2317_int); // 0xcc6 NEW_2
	var_2318_int = 0; var_2319_string = ""; var_2320_string = ""; var_2321_int = 0; // 0xcc8 PushV
	var_2318_int = var_2302_int; // 0xcc9 Mov
	var_2319_string = "pers_vaxxabitka"; // 0xcca MovS
	var_2320_string = "vaxxabitka_d.xml"; // 0xccb MovS
	var_2321_int = 7; // 0xccc MovI
	func_453(var_2318_int, var_2319_string, var_2320_string, var_2321_int); // 0xccd NEW_2
	var_2322_int = 0; var_2323_string = ""; var_2324_string = ""; var_2325_int = 0; // 0xccf PushV
	var_2322_int = var_2302_int; // 0xcd0 Mov
	var_2323_string = "pers_rat_big"; // 0xcd1 MovS
	var_2324_string = "rat_big.xml"; // 0xcd2 MovS
	var_2325_int = 3; // 0xcd3 MovI
	func_453(var_2322_int, var_2323_string, var_2324_string, var_2325_int); // 0xcd4 NEW_2
	var_2326_int = 0; var_2327_string = ""; var_2328_string = ""; var_2329_int = 0; // 0xcd6 PushV
	var_2326_int = var_2302_int; // 0xcd7 Mov
	var_2327_string = "fog"; // 0xcd8 MovS
	var_2328_string = "fog.xml"; // 0xcd9 MovS
	var_2329_int = 7; // 0xcda MovI
	func_479(var_2326_int, var_2327_string, var_2328_string, var_2329_int); // 0xcdb NEW_2
	var_2330_int = 5; // 0xcdd PushI
	var_2331_bool = var_2303_int >= var_2330_int; // 0xcde GE
	if(var_2331_bool == 0) goto Label_3303; // 0xcdf JumpB
	var_2332_int = 0; var_2333_string = ""; var_2334_string = ""; var_2335_int = 0; // 0xce0 PushV
	var_2332_int = var_2302_int; // 0xce1 Mov
	var_2333_string = "fog"; // 0xce2 MovS
	var_2334_string = "fog_hunter.xml"; // 0xce3 MovS
	var_2335_int = 3; // 0xce4 MovI
	func_479(var_2332_int, var_2333_string, var_2334_string, var_2335_int); // 0xce5 NEW_2
	
Label_3303:
	var_2336_int = 2; // 0xce7 PushI
	var_2337_float = 0; var_2338_int = 0; // 0xce8 PushV
	var_2338_int = var_2303_int; // 0xce9 Mov
	func_1205(var_2337_float, var_2338_int); // 0xcea NEW_2
	var_2307_int = var_2336_int * var_2337_float; // 0xcec Mult2
	var_2339_int = var_2307_int; // 0xced Push
	if(var_2339_int == 0) goto Label_3318; // 0xcee JumpB
	var_2340_int = 0; var_2341_string = ""; var_2342_string = ""; var_2343_int = 0; // 0xcef PushV
	var_2340_int = var_2302_int; // 0xcf0 Mov
	var_2341_string = "pers_bomber"; // 0xcf1 MovS
	var_2342_string = "bomber.xml"; // 0xcf2 MovS
	var_2343_int = var_2307_int; // 0xcf3 Mov
	func_453(var_2340_int, var_2341_string, var_2342_string, var_2343_int); // 0xcf4 NEW_2
	
Label_3318:
	goto Label_3372; // 0xcf6 Jump
	
Label_3372:
	var_2344_bool = 0; var_2345_int = 0; // 0xd2c PushV
	var_2345_int = var_2303_int; // 0xd2d Mov
	func_1322(var_2344_bool, var_2345_int); // 0xd2e NEW_2
	if(var_2344_bool == 0) goto Label_3384; // 0xd30 JumpB
	var_2346_int = 0; var_2347_string = ""; var_2348_string = ""; var_2349_int = 0; // 0xd31 PushV
	var_2346_int = var_2302_int; // 0xd32 Mov
	var_2347_string = "pers_sanitar"; // 0xd33 MovS
	var_2348_string = "sanitar.xml"; // 0xd34 MovS
	var_2349_int = 2; // 0xd35 MovI
	func_453(var_2346_int, var_2347_string, var_2348_string, var_2349_int); // 0xd36 NEW_2
	
Label_3384:
	var_2350_int = 0; var_2351_string = ""; var_2352_string = ""; var_2353_int = 0; var_2354_int = 0; var_2355_int = 0; // 0xd38 PushV
	var_2350_int = var_2302_int; // 0xd39 Mov
	var_2351_string = "pers_worker"; // 0xd3a MovS
	var_2352_string = "agony1_man.xml"; // 0xd3b MovS
	var_2353_int = 2; // 0xd3c MovI
	var_2354_int = 4; // 0xd3d MovI
	var_2355_int = 4; // 0xd3e MovI
	func_466(var_2350_int, var_2351_string, var_2352_string, var_2353_int, var_2354_int, var_2355_int); // 0xd3f NEW_2
	var_2356_int = 0; var_2357_string = ""; var_2358_string = ""; var_2359_int = 0; var_2360_int = 0; var_2361_int = 0; // 0xd41 PushV
	var_2356_int = var_2302_int; // 0xd42 Mov
	var_2357_string = "pers_unosha"; // 0xd43 MovS
	var_2358_string = "agony1_man.xml"; // 0xd44 MovS
	var_2359_int = 2; // 0xd45 MovI
	var_2360_int = 4; // 0xd46 MovI
	var_2361_int = 4; // 0xd47 MovI
	func_466(var_2356_int, var_2357_string, var_2358_string, var_2359_int, var_2360_int, var_2361_int); // 0xd48 NEW_2
	var_2362_int = 0; var_2363_string = ""; var_2364_string = ""; var_2365_int = 0; var_2366_int = 0; var_2367_int = 0; // 0xd4a PushV
	var_2362_int = var_2302_int; // 0xd4b Mov
	var_2363_string = "pers_woman"; // 0xd4c MovS
	var_2364_string = "agony1_woman.xml"; // 0xd4d MovS
	var_2365_int = 2; // 0xd4e MovI
	var_2366_int = 4; // 0xd4f MovI
	var_2367_int = 4; // 0xd50 MovI
	func_466(var_2362_int, var_2363_string, var_2364_string, var_2365_int, var_2366_int, var_2367_int); // 0xd51 NEW_2
	var_2368_int = 0; var_2369_string = ""; var_2370_string = ""; var_2371_int = 0; var_2372_int = 0; var_2373_int = 0; // 0xd53 PushV
	var_2368_int = var_2302_int; // 0xd54 Mov
	var_2369_string = "pers_wasted_girl"; // 0xd55 MovS
	var_2370_string = "agony1_woman.xml"; // 0xd56 MovS
	var_2371_int = 2; // 0xd57 MovI
	var_2372_int = 4; // 0xd58 MovI
	var_2373_int = 4; // 0xd59 MovI
	func_466(var_2368_int, var_2369_string, var_2370_string, var_2371_int, var_2372_int, var_2373_int); // 0xd5a NEW_2
	return 4; // 0xd5c Return
	
Label_3319:
	var_2374_int = 0; var_2375_string = ""; var_2376_string = ""; var_2377_int = 0; // 0xcf7 PushV
	var_2374_int = var_2302_int; // 0xcf8 Mov
	var_2375_string = "pers_vaxxabit"; // 0xcf9 MovS
	var_2376_string = "vaxxabit_d.xml"; // 0xcfa MovS
	var_2377_int = 5; // 0xcfb MovI
	func_453(var_2374_int, var_2375_string, var_2376_string, var_2377_int); // 0xcfc NEW_2
	var_2378_int = 0; var_2379_string = ""; var_2380_string = ""; var_2381_int = 0; // 0xcfe PushV
	var_2378_int = var_2302_int; // 0xcff Mov
	var_2379_string = "pers_vaxxabitka"; // 0xd00 MovS
	var_2380_string = "vaxxabitka_d.xml"; // 0xd01 MovS
	var_2381_int = 5; // 0xd02 MovI
	func_453(var_2378_int, var_2379_string, var_2380_string, var_2381_int); // 0xd03 NEW_2
	var_2382_int = 0; var_2383_string = ""; var_2384_string = ""; var_2385_int = 0; // 0xd05 PushV
	var_2382_int = var_2302_int; // 0xd06 Mov
	var_2383_string = "pers_rat_big"; // 0xd07 MovS
	var_2384_string = "rat_big.xml"; // 0xd08 MovS
	var_2385_int = 4; // 0xd09 MovI
	func_453(var_2382_int, var_2383_string, var_2384_string, var_2385_int); // 0xd0a NEW_2
	var_2386_int = 0; var_2387_string = ""; var_2388_string = ""; var_2389_int = 0; // 0xd0c PushV
	var_2386_int = var_2302_int; // 0xd0d Mov
	var_2387_string = "fog"; // 0xd0e MovS
	var_2388_string = "fog.xml"; // 0xd0f MovS
	var_2389_int = 7; // 0xd10 MovI
	func_479(var_2386_int, var_2387_string, var_2388_string, var_2389_int); // 0xd11 NEW_2
	var_2390_int = 5; // 0xd13 PushI
	var_2391_bool = var_2303_int >= var_2390_int; // 0xd14 GE
	if(var_2391_bool == 0) goto Label_3357; // 0xd15 JumpB
	var_2392_int = 0; var_2393_string = ""; var_2394_string = ""; var_2395_int = 0; // 0xd16 PushV
	var_2392_int = var_2302_int; // 0xd17 Mov
	var_2393_string = "fog"; // 0xd18 MovS
	var_2394_string = "fog_hunter.xml"; // 0xd19 MovS
	var_2395_int = 3; // 0xd1a MovI
	func_479(var_2392_int, var_2393_string, var_2394_string, var_2395_int); // 0xd1b NEW_2
	
Label_3357:
	var_2396_int = 2; // 0xd1d PushI
	var_2397_float = 0; var_2398_int = 0; // 0xd1e PushV
	var_2398_int = var_2303_int; // 0xd1f Mov
	func_1205(var_2397_float, var_2398_int); // 0xd20 NEW_2
	var_2308_int = var_2396_int * var_2397_float; // 0xd22 Mult2
	var_2399_int = var_2308_int; // 0xd23 Push
	if(var_2399_int == 0) goto Label_3372; // 0xd24 JumpB
	var_2400_int = 0; var_2401_string = ""; var_2402_string = ""; var_2403_int = 0; // 0xd25 PushV
	var_2400_int = var_2302_int; // 0xd26 Mov
	var_2401_string = "pers_bomber"; // 0xd27 MovS
	var_2402_string = "bomber.xml"; // 0xd28 MovS
	var_2403_int = var_2308_int; // 0xd29 Mov
	func_453(var_2400_int, var_2401_string, var_2402_string, var_2403_int); // 0xd2a NEW_2
}


func_11450()
{
	var_5026_string = ""; var_5027_bool = 0; // 0x2cbb PushV
	var_5026_string = "sobor@door1"; // 0x2cbc MovS
	var_5027_bool = 0; // 0x2cbd MovB
	func_151(var_5026_string, var_5027_bool); // 0x2cbe NEW_2
	return 0; // 0x2cc0 Return
}


func_189(var_671_bool, var_672_string, var_673_string)
{
	var_674_object = Obj(); var_675_object = Obj(); // 0xbd PushV
	FindActor(var_675_object, var_672_string); // 0xbe Func
	var_676_bool = var_675_object == 0; // 0xc0 NullEq
	if(var_676_bool == 0) goto Label_196; // 0xc1 JumpB
	var_671_bool = 0; // 0xc2 MovB
	return 2; // 0xc3 Return
	
Label_196:
	Trigger(var_675_object, var_673_string); // 0xc4 Func
	var_671_bool = 1; // 0xc6 MovB
	return 2; // 0xc7 Return
}


func_11457()
{
	var_4590_string = ""; var_4591_bool = 0; // 0x2cc2 PushV
	var_4590_string = "cot_bigvlad@door1"; // 0x2cc3 MovS
	var_4591_bool = 1; // 0x2cc4 MovB
	func_151(var_4590_string, var_4591_bool); // 0x2cc5 NEW_2
	return 0; // 0x2cc7 Return
}


func_7363(var_4271_int, var_4272_int, var_4273_object, var_4274_object, var_4275_object, var_4276_object)
{
	var_4277_int = 0; // 0x1cc4 PushI
	var_4278_bool = var_4272_int == var_4277_int; // 0x1cc5 Eq
	if(var_4278_bool == 0) goto Label_7403; // 0x1cc6 JumpB
	var_4279_int = 0; var_4280_bool = 0; // 0x1cc7 PushV
	var_4279_int = 15; // 0x1cc8 MovI
	var_4280_bool = 0; // 0x1cc9 MovB
	func_746(var_4279_int, var_4280_bool); // 0x1cca NEW_2
	var_4281_int = 0; var_4282_bool = 0; var_4283_int = 0; // 0x1ccc PushV
	var_4281_int = 15; // 0x1ccd MovI
	var_4282_bool = 0; // 0x1cce MovB
	var_4283_int = 1; // 0x1ccf MovI
	func_763(var_4281_int, var_4282_bool, var_4283_int); // 0x1cd0 NEW_2
	var_4284_int = 0; var_4285_int = 0; var_4286_object = Obj(); var_4287_object = Obj(); var_4288_object = Obj(); // 0x1cd2 PushV
	var_4284_int = 15; // 0x1cd3 MovI
	var_4285_int = var_4271_int; // 0x1cd4 Mov
	var_4286_object = var_4273_object; // 0x1cd5 Mov
	var_4287_object = var_4274_object; // 0x1cd6 Mov
	var_4288_object = var_4275_object; // 0x1cd7 Mov
	func_670(var_4284_int, var_4285_int, var_4286_object, var_4287_object, var_4288_object); // 0x1cd8 NEW_2
	var_4289_object = Obj(); var_4290_int = 0; // 0x1cda PushV
	var_4289_object = var_4276_object; // 0x1cdb Mov
	var_4290_int = 2; // 0x1cdc MovI
	func_255(var_4290_int); // 0x1cdd NEW_2
	var_4291_int = 0; var_4292_bool = 0; var_4293_int = 0; // 0x1cdf PushV
	var_4291_int = 15; // 0x1ce0 MovI
	var_4292_bool = 0; // 0x1ce1 MovB
	var_4293_int = 5; // 0x1ce2 MovI
	func_820(var_4291_int, var_4292_bool, var_4293_int); // 0x1ce3 NEW_2
	var_4294_int = 0; var_4295_bool = 0; var_4296_int = 0; // 0x1ce5 PushV
	var_4294_int = 15; // 0x1ce6 MovI
	var_4295_bool = 1; // 0x1ce7 MovB
	var_4296_int = 5; // 0x1ce8 MovI
	func_882(var_4294_int, var_4295_bool, var_4296_int); // 0x1ce9 NEW_2
	
Label_7403:
	var_4297_int = 0; var_4298_bool = 0; // 0x1ceb PushV
	var_4297_int = 15; // 0x1cec MovI
	var_4298_bool = 0; // 0x1ced MovB
	func_729(var_4297_int, var_4298_bool); // 0x1cee NEW_2
	var_4299_int = 0; var_4300_int = 0; var_4301_int = 0; // 0x1cf0 PushV
	var_4299_int = 15; // 0x1cf1 MovI
	var_4300_int = var_4271_int; // 0x1cf2 Mov
	var_4301_int = var_4272_int; // 0x1cf3 Mov
	func_3421(var_4299_int, var_4300_int, var_4301_int); // 0x1cf4 NEW_2
	return 0; // 0x1cf6 Return
}


func_11464()
{
	var_4689_string = ""; var_4690_bool = 0; // 0x2cc9 PushV
	var_4689_string = "cot_bigvlad@door1"; // 0x2cca MovS
	var_4690_bool = 0; // 0x2ccb MovB
	func_151(var_4689_string, var_4690_bool); // 0x2ccc NEW_2
	return 0; // 0x2cce Return
}


func_201(var_4360_bool, var_4361_string, var_4362_string, var_4363_string)
{
	var_4364_object = Obj(); var_4365_object = Obj(); // 0xc9 PushV
	FindActor(var_4365_object, var_4361_string); // 0xca Func
	var_4366_bool = var_4365_object == 0; // 0xcc NullEq
	if(var_4366_bool == 0) goto Label_208; // 0xcd JumpB
	var_4360_bool = 0; // 0xce MovB
	return 2; // 0xcf Return
	
Label_208:
	Trigger(var_4365_object, var_4362_string, var_4363_string); // 0xd0 Func
	var_4360_bool = 1; // 0xd2 MovB
	return 2; // 0xd3 Return
}


func_11471()
{
	var_4604_string = ""; var_4605_bool = 0; // 0x2cd0 PushV
	var_4604_string = "vagon_mishka@door1"; // 0x2cd1 MovS
	var_4605_bool = 1; // 0x2cd2 MovB
	func_151(var_4604_string, var_4605_bool); // 0x2cd3 NEW_2
	return 0; // 0x2cd5 Return
}


func_213(var_598_object)
{
	var_599_int = 0; var_600_int = 0; var_601_object = Obj(); var_602_int = 0; var_603_int = 0; var_604_object = Obj(); // 0xd5 PushV
	var_605_object = var_598_object; // 0xd6 Push
	if(var_605_object == 0) goto Label_233; // 0xd7 JumpB
	size(var_602_int); // 0xd8 ObjFunc
	var_603_int = 0; // 0xda MovI
	
Label_219:
	var_606_bool = var_603_int < var_602_int; // 0xdb LT
	if(var_606_bool == 0) goto Label_231; // 0xdc JumpB
	get(var_604_object, var_603_int); // 0xdd ObjFunc
	var_607_object = var_604_object; // 0xdf Push
	if(var_607_object == 0) goto Label_227; // 0xe0 JumpB
	Remove(); // 0xe1 ObjFunc
	
Label_227:
	var_604_object = 0; // 0xe3 SetNull
	var_608_int = 1; // 0xe4 PushI
	var_603_int = var_603_int + var_608_int; // 0xe5 Add2
	goto Label_219; // 0xe6 Jump
	
Label_231:
	clear(); // 0xe7 ObjFunc
	
Label_233:
	return 6; // 0xe9 Return
}


func_11478()
{
	var_5833_string = ""; var_5834_bool = 0; // 0x2cd7 PushV
	var_5833_string = "warehouse_notkin@door1"; // 0x2cd8 MovS
	var_5834_bool = 1; // 0x2cd9 MovB
	func_151(var_5833_string, var_5834_bool); // 0x2cda NEW_2
	return 0; // 0x2cdc Return
}


func_11485()
{
	var_4708_string = ""; var_4709_bool = 0; // 0x2cde PushV
	var_4708_string = "warehouse_notkin@door1"; // 0x2cdf MovS
	var_4709_bool = 0; // 0x2ce0 MovB
	func_151(var_4708_string, var_4709_bool); // 0x2ce1 NEW_2
	return 0; // 0x2ce3 Return
}


func_5344()
{
	var_145_string = "dt_house3_14_i2"; // 0x14e1 PushS
	add(var_145_string); // 0x14e2 ObjFunc
	var_146_string = "dt_house3_14"; // 0x14e4 PushS
	add(var_146_string); // 0x14e5 ObjFunc
	var_147_string = "house1_arc_01l"; // 0x14e7 PushS
	add(var_147_string); // 0x14e8 ObjFunc
	var_148_string = "house1_arc_01r"; // 0x14ea PushS
	add(var_148_string); // 0x14eb ObjFunc
	var_149_string = "dt_House6_01"; // 0x14ed PushS
	add(var_149_string); // 0x14ee ObjFunc
	var_150_string = "dt_house_1_09"; // 0x14f0 PushS
	add(var_150_string); // 0x14f1 ObjFunc
	var_151_string = "house5_24"; // 0x14f3 PushS
	add(var_151_string); // 0x14f4 ObjFunc
	var_152_string = "dt_House6_03"; // 0x14f6 PushS
	add(var_152_string); // 0x14f7 ObjFunc
	var_153_string = "dt_House6_04"; // 0x14f9 PushS
	add(var_153_string); // 0x14fa ObjFunc
	var_154_string = "dt_house_1_08"; // 0x14fc PushS
	add(var_154_string); // 0x14fd ObjFunc
	var_155_string = "house5_unoin_solidl"; // 0x14ff PushS
	add(var_155_string); // 0x1500 ObjFunc
	var_156_string = "house5_unoin_solidr"; // 0x1502 PushS
	add(var_156_string); // 0x1503 ObjFunc
	var_157_string = "dt_house2_12"; // 0x1505 PushS
	add(var_157_string); // 0x1506 ObjFunc
	var_158_string = "dt_house2_11"; // 0x1508 PushS
	add(var_158_string); // 0x1509 ObjFunc
	var_159_string = "dt_house2_13"; // 0x150b PushS
	add(var_159_string); // 0x150c ObjFunc
	var_160_string = "dt_house2_09"; // 0x150e PushS
	add(var_160_string); // 0x150f ObjFunc
	var_161_string = "dt_house2_08"; // 0x1511 PushS
	add(var_161_string); // 0x1512 ObjFunc
	var_162_string = "dt_house2_07"; // 0x1514 PushS
	add(var_162_string); // 0x1515 ObjFunc
	var_163_string = "dt_house2_06"; // 0x1517 PushS
	add(var_163_string); // 0x1518 ObjFunc
	var_164_string = "house5_01"; // 0x151a PushS
	add(var_164_string); // 0x151b ObjFunc
	var_165_string = "house5_15"; // 0x151d PushS
	add(var_165_string); // 0x151e ObjFunc
	var_166_string = "house5_16"; // 0x1520 PushS
	add(var_166_string); // 0x1521 ObjFunc
	var_167_string = "house5_17"; // 0x1523 PushS
	add(var_167_string); // 0x1524 ObjFunc
	var_168_string = "house5_unoin04l"; // 0x1526 PushS
	add(var_168_string); // 0x1527 ObjFunc
	var_169_string = "house5_unoin04r"; // 0x1529 PushS
	add(var_169_string); // 0x152a ObjFunc
	var_170_string = "house5_23"; // 0x152c PushS
	add(var_170_string); // 0x152d ObjFunc
	var_171_string = "house1_se_05r"; // 0x152f PushS
	add(var_171_string); // 0x1530 ObjFunc
	var_172_string = "house1_se_05l"; // 0x1532 PushS
	add(var_172_string); // 0x1533 ObjFunc
	return 0; // 0x1535 Return
}


func_6369(var_3996_int, var_3997_int, var_3998_object, var_3999_object, var_4000_object, var_4001_object)
{
	var_4002_int = 0; // 0x18e2 PushI
	var_4003_bool = var_3997_int == var_4002_int; // 0x18e3 Eq
	if(var_4003_bool == 0) goto Label_6409; // 0x18e4 JumpB
	var_4004_int = 0; var_4005_bool = 0; // 0x18e5 PushV
	var_4004_int = 10; // 0x18e6 MovI
	var_4005_bool = 0; // 0x18e7 MovB
	func_746(var_4004_int, var_4005_bool); // 0x18e8 NEW_2
	var_4006_int = 0; var_4007_bool = 0; var_4008_int = 0; // 0x18ea PushV
	var_4006_int = 10; // 0x18eb MovI
	var_4007_bool = 0; // 0x18ec MovB
	var_4008_int = 1; // 0x18ed MovI
	func_763(var_4006_int, var_4007_bool, var_4008_int); // 0x18ee NEW_2
	var_4009_int = 0; var_4010_int = 0; var_4011_object = Obj(); var_4012_object = Obj(); var_4013_object = Obj(); // 0x18f0 PushV
	var_4009_int = 10; // 0x18f1 MovI
	var_4010_int = var_3996_int; // 0x18f2 Mov
	var_4011_object = var_3998_object; // 0x18f3 Mov
	var_4012_object = var_3999_object; // 0x18f4 Mov
	var_4013_object = var_4000_object; // 0x18f5 Mov
	func_670(var_4009_int, var_4010_int, var_4011_object, var_4012_object, var_4013_object); // 0x18f6 NEW_2
	var_4014_object = Obj(); var_4015_int = 0; // 0x18f8 PushV
	var_4014_object = var_4001_object; // 0x18f9 Mov
	var_4015_int = 2; // 0x18fa MovI
	func_255(var_4015_int); // 0x18fb NEW_2
	var_4016_int = 0; var_4017_bool = 0; var_4018_int = 0; // 0x18fd PushV
	var_4016_int = 10; // 0x18fe MovI
	var_4017_bool = 0; // 0x18ff MovB
	var_4018_int = 7; // 0x1900 MovI
	func_820(var_4016_int, var_4017_bool, var_4018_int); // 0x1901 NEW_2
	var_4019_int = 0; var_4020_bool = 0; var_4021_int = 0; // 0x1903 PushV
	var_4019_int = 10; // 0x1904 MovI
	var_4020_bool = 1; // 0x1905 MovB
	var_4021_int = 7; // 0x1906 MovI
	func_882(var_4019_int, var_4020_bool, var_4021_int); // 0x1907 NEW_2
	
Label_6409:
	var_4022_int = 0; var_4023_bool = 0; // 0x1909 PushV
	var_4022_int = 10; // 0x190a MovI
	var_4023_bool = 0; // 0x190b MovB
	func_729(var_4022_int, var_4023_bool); // 0x190c NEW_2
	var_4024_int = 0; var_4025_int = 0; var_4026_int = 0; // 0x190e PushV
	var_4024_int = 10; // 0x190f MovI
	var_4025_int = var_3996_int; // 0x1910 Mov
	var_4026_int = var_3997_int; // 0x1911 Mov
	func_3609(var_4024_int, var_4025_int, var_4026_int); // 0x1912 NEW_2
	return 0; // 0x1914 Return
}


func_11492(var_5388_bool)
{
	var_5391_int = 0; var_5392_string = ""; // 0x2ce5 PushV
	var_5392_string = "b7q02"; // 0x2ce6 MovS
	func_106(var_5391_int, var_5392_string); // 0x2ce7 NEW_2
	var_5393_int = 0; // 0x2ce9 PushI
	var_5394_bool = var_5391_int == var_5393_int; // 0x2cea Eq
	if(var_5394_bool == 0) goto Label_11502; // 0x2ceb JumpB
	var_5388_bool = 1; // 0x2cec MovB
	return 0; // 0x2ced Return
	
Label_11502:
	var_5388_bool = 0; // 0x2cee MovB
	return 0; // 0x2cef Return
}


func_234(var_4580_float)
{
	var_4581_float = 0; var_4582_float = 0; // 0xea PushV
	GetGameTime(var_4582_float); // 0xeb Func
	var_4580_float = var_4582_float; // 0xed Mov
	return 2; // 0xee Return
}


func_239()
{
	var_109_float = 0.5; // 0xef PushF
	var_110_float = 0.886; // 0xf0 PushF
	SetSepia(var_109_float, var_110_float); // 0xf1 Func
	return 0; // 0xf3 Return
}


func_4335()
{
	return 0; // 0x10f0 Return
}


func_4337(var_517_int, var_518_int, var_519_object, var_520_object, var_521_object, var_522_object)
{
	var_523_int = 0; // 0x10f2 PushI
	var_524_bool = var_518_int == var_523_int; // 0x10f3 Eq
	if(var_524_bool == 0) goto Label_4377; // 0x10f4 JumpB
	var_525_int = 0; var_526_bool = 0; // 0x10f5 PushV
	var_525_int = 0; // 0x10f6 MovI
	var_526_bool = 0; // 0x10f7 MovB
	func_746(var_525_int, var_526_bool); // 0x10f8 NEW_2
	var_527_int = 0; var_528_bool = 0; var_529_int = 0; // 0x10fa PushV
	var_527_int = 0; // 0x10fb MovI
	var_528_bool = 0; // 0x10fc MovB
	var_529_int = 1; // 0x10fd MovI
	func_763(var_527_int, var_528_bool, var_529_int); // 0x10fe NEW_2
	var_565_int = 0; var_566_int = 0; var_567_object = Obj(); var_568_object = Obj(); var_569_object = Obj(); // 0x1100 PushV
	var_565_int = 0; // 0x1101 MovI
	var_566_int = var_517_int; // 0x1102 Mov
	var_567_object = var_519_object; // 0x1103 Mov
	var_568_object = var_520_object; // 0x1104 Mov
	var_569_object = var_521_object; // 0x1105 Mov
	func_572(var_566_int, var_567_object, var_568_object, var_569_object); // 0x1106 NEW_2
	var_611_object = Obj(); var_612_int = 0; // 0x1108 PushV
	var_611_object = var_522_object; // 0x1109 Mov
	var_612_int = 0; // 0x110a MovI
	func_255(var_612_int); // 0x110b NEW_2
	var_638_int = 0; var_639_bool = 0; var_640_int = 0; // 0x110d PushV
	var_638_int = 0; // 0x110e MovI
	var_639_bool = 0; // 0x110f MovB
	var_640_int = 4; // 0x1110 MovI
	func_820(var_638_int, var_639_bool, var_640_int); // 0x1111 NEW_2
	var_685_int = 0; var_686_bool = 0; var_687_int = 0; // 0x1113 PushV
	var_685_int = 0; // 0x1114 MovI
	var_686_bool = 0; // 0x1115 MovB
	var_687_int = 4; // 0x1116 MovI
	func_882(var_685_int, var_686_bool, var_687_int); // 0x1117 NEW_2
	
Label_4377:
	var_723_int = 0; var_724_int = 0; // 0x1119 PushV
	var_723_int = 0; // 0x111a MovI
	var_724_int = var_518_int; // 0x111b Mov
	func_1000(var_723_int, var_724_int); // 0x111c NEW_2
	var_749_int = 0; var_750_int = 0; var_751_int = 0; // 0x111e PushV
	var_749_int = 0; // 0x111f MovI
	var_750_int = var_517_int; // 0x1120 Mov
	var_751_int = var_518_int; // 0x1121 Mov
	func_2156(var_749_int, var_750_int, var_751_int); // 0x1122 NEW_2
	return 0; // 0x1124 Return
}


func_11504(var_5411_bool)
{
	var_5414_int = 0; var_5415_string = ""; // 0x2cf1 PushV
	var_5415_string = "b7q01"; // 0x2cf2 MovS
	func_106(var_5414_int, var_5415_string); // 0x2cf3 NEW_2
	var_5416_int = 1000; // 0x2cf5 PushI
	var_5417_bool = var_5414_int == var_5416_int; // 0x2cf6 Eq
	if(var_5417_bool == 0) goto Label_11514; // 0x2cf7 JumpB
	var_5411_bool = 1; // 0x2cf8 MovB
	return 0; // 0x2cf9 Return
	
Label_11514:
	var_5411_bool = 0; // 0x2cfa MovB
	return 0; // 0x2cfb Return
}


func_244()
{
	var_113_int = 0; // 0xf4 PushI
	var_114_int = 0; // 0xf5 PushI
	SetSepia(var_113_int, var_114_int); // 0xf6 Func
	return 0; // 0xf8 Return
}


func_14584(var_4304_int)
{
	var_4305_object = Obj(); var_4306_object = Obj(); var_4307_object = Obj(); var_4308_object = Obj(); var_4309_object = Obj(); var_4310_object = Obj(); var_4311_object = Obj(); var_4312_object = Obj(); // 0x38f8 PushV
	var_4313_int = 3; // 0x38f9 PushI
	var_4314_bool = var_4304_int == var_4313_int; // 0x38fa Eq
	if(var_4314_bool == 0) goto Label_14608; // 0x38fb JumpB
	var_4315_string = "Special diseased house: house5_unoin03l"; // 0x38fc PushS
	Trace(var_4315_string); // 0x38fd Func
	var_4316_string = "Special diseased house: house5_unoin03r"; // 0x38ff PushS
	Trace(var_4316_string); // 0x3900 Func
	var_4317_string = "house5_unoin03l"; // 0x3902 PushS
	GetSceneByName(var_4309_object, var_4317_string); // 0x3903 Func
	var_4318_string = "s_house5_unoin03l.isc"; // 0x3905 PushS
	ReplaceScene(var_4309_object, var_4318_string); // 0x3906 Func
	var_4319_string = "house5_unoin03r"; // 0x3908 PushS
	GetSceneByName(var_4309_object, var_4319_string); // 0x3909 Func
	var_4320_string = "s_house5_unoin03r.isc"; // 0x390b PushS
	ReplaceScene(var_4309_object, var_4320_string); // 0x390c Func
	var_4309_object = 0; // 0x390e SetNull
	goto Label_14643; // 0x390f Jump
	
Label_14643:
	return 8; // 0x3933 Return
	
Label_14608:
	var_4321_int = 4; // 0x3910 PushI
	var_4322_bool = var_4304_int == var_4321_int; // 0x3911 Eq
	if(var_4322_bool == 0) goto Label_14619; // 0x3912 JumpB
	var_4323_string = "theater"; // 0x3913 PushS
	GetSceneByName(var_4310_object, var_4323_string); // 0x3914 Func
	var_4324_string = "dtheater_burah.isc"; // 0x3916 PushS
	ReplaceScene(var_4310_object, var_4324_string); // 0x3917 Func
	var_4310_object = 0; // 0x3919 SetNull
	goto Label_14643; // 0x391a Jump
	
Label_14619:
	var_4325_int = 8; // 0x391b PushI
	var_4326_bool = var_4304_int == var_4325_int; // 0x391c Eq
	if(var_4326_bool == 0) goto Label_14633; // 0x391d JumpB
	var_4327_string = "Special replaced house: uprava_admin"; // 0x391e PushS
	Trace(var_4327_string); // 0x391f Func
	var_4328_string = "uprava_admin"; // 0x3921 PushS
	GetSceneByName(var_4311_object, var_4328_string); // 0x3922 Func
	var_4329_string = "uprava_admin_army_burah.isc"; // 0x3924 PushS
	ReplaceScene(var_4311_object, var_4329_string); // 0x3925 Func
	var_4311_object = 0; // 0x3927 SetNull
	goto Label_14643; // 0x3928 Jump
	
Label_14633:
	var_4330_int = 11; // 0x3929 PushI
	var_4331_bool = var_4304_int == var_4330_int; // 0x392a Eq
	if(var_4331_bool == 0) goto Label_14643; // 0x392b JumpB
	var_4332_string = "theater"; // 0x392c PushS
	GetSceneByName(var_4312_object, var_4332_string); // 0x392d Func
	var_4333_string = "theater_burah.isc"; // 0x392f PushS
	ReplaceScene(var_4312_object, var_4333_string); // 0x3930 Func
	var_4312_object = 0; // 0x3932 SetNull
}


func_249(var_445_string, var_446_int)
{
	var_447_string = "Region"; // 0xfa PushS
	var_448_int = var_447_string + var_446_int; // 0xfb Add
	var_449_string = "State"; // 0xfc PushS
	var_445_string = var_448_int + var_449_string; // 0xfd Add2
	return 0; // 0xfe Return
}


func_8442()
{
	var_4432_int = 0; var_4433_object = Obj(); var_4434_int = 0; var_4435_object = Obj(); var_4436_bool = 0; var_4437_cvector = CVector(0,0,0); var_4438_cvector = CVector(0,0,0); var_4439_string = ""; var_4440_int = 0; var_4441_object = Obj(); var_4442_int = 0; var_4443_object = Obj(); var_4444_bool = 0; var_4445_cvector = CVector(0,0,0); var_4446_cvector = CVector(0,0,0); var_4447_string = ""; // 0x20fa PushV
	var_4448_int = 0; // 0x20fb PushV
	func_12047(var_4448_int); // 0x20fc NEW_2
	var_4449_int = 0; // 0x20fe PushI
	var_4450_bool = var_4448_int == var_4449_int; // 0x20ff Eq
	if(var_4450_bool == 0) goto Label_8450; // 0x2100 JumpB
	return 16; // 0x2101 Return
	
Label_8450:
	var_4451_object = GlobalVars[6]; // 0x2102 PushGE
	size(var_4440_int); // 0x2103 ObjFunc
	GetMainOutdoorScene(var_4441_object); // 0x2105 Func
	var_4442_int = 0; // 0x2107 MovI
	
Label_8456:
	var_4452_bool = var_4442_int < var_4440_int; // 0x2108 LT
	if(var_4452_bool == 0) goto Label_8515; // 0x2109 JumpB
	var_4453_object = GlobalVars[6]; // 0x210a PushGE
	get(var_4443_object, var_4442_int); // 0x210b ObjFunc
	var_4454_object = var_4443_object; // 0x210d Push
	if(var_4454_object == 0) goto Label_8464; // 0x210e JumpB
	goto Label_8512; // 0x210f Jump
	
Label_8512:
	var_4455_int = 1; // 0x2140 PushI
	var_4442_int = var_4442_int + var_4455_int; // 0x2141 Add2
	goto Label_8456; // 0x2142 Jump
	
Label_8464:
	var_4456_string = "pt_plant"; // 0x2110 PushS
	var_4457_int = 1; // 0x2111 PushI
	var_4458_int = var_4442_int + var_4457_int; // 0x2112 Add
	var_4459_int = var_4456_string + var_4458_int; // 0x2113 Add
	GetLocator(var_4459_int, var_4444_bool, var_4445_cvector, var_4446_cvector); // 0x2114 ObjFunc
	var_4460_bool = var_4444_bool == 0; // 0x2116 Not
	if(var_4460_bool == 0) goto Label_8476; // 0x2117 JumpB
	var_4461_string = "Plant point not found"; // 0x2118 PushS
	Trace(var_4461_string); // 0x2119 Func
	goto Label_8512; // 0x211b Jump
	
Label_8476:
	var_4462_int = 6; // 0x211c PushI
	var_4463_int = 3; // 0x211d PushI
	var_4464_int = 3; // 0x211e PushI
	var_4465_int = 3; // 0x211f PushI
	var_4466_int = 1; // 0x2120 PushI
	var_4467_int = 1; // 0x2121 PushI
	var_4468_string = ""; // 0x2122 PushS
	var_4469_string = "grass_black_tvir"; // 0x2123 PushS
	var_4470_string = "grass_blood_tvir"; // 0x2124 PushS
	var_4471_string = "grass_brown_tvir"; // 0x2125 PushS
	var_4472_string = "grass_savyur"; // 0x2126 PushS
	var_4473_string = "grass_white_plet"; // 0x2127 PushS
	RandOneOf(var_4447_string, var_4462_int, var_4463_int, var_4464_int, var_4465_int, var_4466_int, var_4467_int, var_4468_string, var_4469_string, var_4470_string, var_4471_string, var_4472_string, var_4473_string); // 0x2128 Func
	var_4474_string = var_4447_string; // 0x212a Push
	if(var_4474_string == 0) goto Label_8511; // 0x212b JumpB
	var_4475_string = "scripted"; // 0x212c PushS
	var_4476_string = "item_"; // 0x212d PushS
	var_4477_int = var_4476_string + var_4447_string; // 0x212e Add
	var_4478_string = "_stat.xml"; // 0x212f PushS
	var_4479_int = var_4477_int + var_4478_string; // 0x2130 Add
	AddStationaryActorByType(var_4443_object, var_4445_cvector, var_4446_cvector, var_4475_string, var_4479_int); // 0x2131 ObjFunc
	var_4480_object = GlobalVars[6]; // 0x2133 PushGE
	set(var_4442_int, var_4443_object); // 0x2134 ObjFunc
	var_4481_string = "New plant: ""; // 0x2136 PushS
	var_4482_int = var_4481_string + var_4447_string; // 0x2137 Add
	var_4483_string = "" at location #"; // 0x2138 PushS
	var_4484_int = var_4482_int + var_4483_string; // 0x2139 Add
	var_4485_int = 1; // 0x213a PushI
	var_4486_int = var_4442_int + var_4485_int; // 0x213b Add
	var_4487_int = var_4484_int + var_4486_int; // 0x213c Add
	Trace(var_4487_int); // 0x213d Func
	
Label_8511:
	var_4443_object = 0; // 0x213f SetNull
	
Label_8515:
	return 16; // 0x2143 Return
}


func_11516(var_5435_bool)
{
	var_5438_int = 0; var_5439_string = ""; // 0x2cfd PushV
	var_5439_string = "b8q01"; // 0x2cfe MovS
	func_106(var_5438_int, var_5439_string); // 0x2cff NEW_2
	var_5440_int = 0; // 0x2d01 PushI
	var_5441_bool = var_5438_int == var_5440_int; // 0x2d02 Eq
	if(var_5441_bool == 0) goto Label_11526; // 0x2d03 JumpB
	var_5435_bool = 1; // 0x2d04 MovB
	return 0; // 0x2d05 Return
	
Label_11526:
	var_5435_bool = 0; // 0x2d06 MovB
	return 0; // 0x2d07 Return
}


func_255(var_612_int)
{
	var_613_int = 0; var_614_string = ""; var_615_int = 0; var_616_string = ""; var_617_string = ""; var_618_object = Obj(); var_619_int = 0; var_620_string = ""; var_621_int = 0; var_622_string = ""; var_623_string = ""; var_624_object = Obj(); // 0xff PushV
	size(var_619_int); // 0x100 ObjFunc
	var_625_int = 1; // 0x102 PushI
	var_626_bool = var_612_int == var_625_int; // 0x103 Eq
	if(var_626_bool == 0) goto Label_263; // 0x104 JumpB
	var_620_string = "s_"; // 0x105 MovS
	goto Label_267; // 0x106 Jump
	
Label_267:
	var_621_int = 0; // 0x10b MovI
	
Label_268:
	var_627_bool = var_621_int < var_619_int; // 0x10c LT
	if(var_627_bool == 0) goto Label_292; // 0x10d JumpB
	get(var_622_string, var_621_int); // 0x10e ObjFunc
	var_628_int = var_620_string + var_622_string; // 0x110 Add
	var_629_string = ".isc"; // 0x111 PushS
	var_623_string = var_628_int + var_629_string; // 0x112 Add2
	GetSceneByName(var_624_object, var_622_string); // 0x113 Func
	var_630_bool = var_624_object == 0; // 0x115 Not
	if(var_630_bool == 0) goto Label_286; // 0x116 JumpB
	var_631_string = "City manager: can't replace indoor scene ""; // 0x117 PushS
	var_632_int = var_631_string + var_622_string; // 0x118 Add
	var_633_string = "" because it doesn't exist"; // 0x119 PushS
	var_634_int = var_632_int + var_633_string; // 0x11a Add
	Trace(var_634_int); // 0x11b Func
	goto Label_288; // 0x11d Jump
	
Label_288:
	var_624_object = 0; // 0x120 SetNull
	var_635_int = 1; // 0x121 PushI
	var_621_int = var_621_int + var_635_int; // 0x122 Add2
	goto Label_268; // 0x123 Jump
	
Label_286:
	ReplaceScene(var_624_object, var_623_string); // 0x11e Func
	
Label_292:
	return 12; // 0x124 Return
	
Label_263:
	var_636_int = 2; // 0x107 PushI
	var_637_bool = var_612_int == var_636_int; // 0x108 Eq
	if(var_637_bool == 0) goto Label_267; // 0x109 JumpB
	var_620_string = "n_"; // 0x10a MovS
}


func_11528(var_4864_bool)
{
	var_4867_int = 0; var_4868_string = ""; // 0x2d09 PushV
	var_4868_string = "b10q01DankoTalk"; // 0x2d0a MovS
	func_106(var_4867_int, var_4868_string); // 0x2d0b NEW_2
	var_4869_int = 1; // 0x2d0d PushI
	var_4870_bool = var_4867_int == var_4869_int; // 0x2d0e Eq
	if(var_4870_bool == 0) goto Label_11538; // 0x2d0f JumpB
	var_4864_bool = 1; // 0x2d10 MovB
	return 0; // 0x2d11 Return
	
Label_11538:
	var_4864_bool = 0; // 0x2d12 MovB
	return 0; // 0x2d13 Return
}


func_10507()
{
	var_5839_object = Obj(); var_5840_object = Obj(); var_5841_object = Obj(); var_5842_object = Obj(); // 0x290b PushV
	var_5843_object = Obj(); // 0x290c PushV
	func_12030(var_5843_object); // 0x290d NEW_2
	var_5841_object = var_5843_object; // 0x290e Mov
	var_5844_string = "b2BurahHome"; // 0x2910 PushS
	FindMark(var_5842_object, var_5844_string); // 0x2911 ObjFunc
	var_5845_object = var_5842_object; // 0x2913 Push
	if(var_5845_object == 0) goto Label_10519; // 0x2914 JumpB
	Remove(); // 0x2915 ObjFunc
	
Label_10519:
	var_5846_string = "b2DankoGotoMladVlad"; // 0x2917 PushS
	FindMark(var_5842_object, var_5846_string); // 0x2918 ObjFunc
	var_5847_object = var_5842_object; // 0x291a Push
	if(var_5847_object == 0) goto Label_10526; // 0x291b JumpB
	Remove(); // 0x291c ObjFunc
	
Label_10526:
	var_5848_string = "b2q01AlexandrGotoOspina"; // 0x291e PushS
	FindMark(var_5842_object, var_5848_string); // 0x291f ObjFunc
	var_5849_object = var_5842_object; // 0x2921 Push
	if(var_5849_object == 0) goto Label_10533; // 0x2922 JumpB
	Remove(); // 0x2923 ObjFunc
	
Label_10533:
	var_5850_string = "b2q01BigVladGotoAlexandr"; // 0x2925 PushS
	FindMark(var_5842_object, var_5850_string); // 0x2926 ObjFunc
	var_5851_object = var_5842_object; // 0x2928 Push
	if(var_5851_object == 0) goto Label_10540; // 0x2929 JumpB
	Remove(); // 0x292a ObjFunc
	
Label_10540:
	var_5852_string = "b2q01BigVladGotoKaterina"; // 0x292c PushS
	FindMark(var_5842_object, var_5852_string); // 0x292d ObjFunc
	var_5853_object = var_5842_object; // 0x292f Push
	if(var_5853_object == 0) goto Label_10547; // 0x2930 JumpB
	Remove(); // 0x2931 ObjFunc
	
Label_10547:
	var_5854_string = "b2q01BigVladGotoMladVlad"; // 0x2933 PushS
	FindMark(var_5842_object, var_5854_string); // 0x2934 ObjFunc
	var_5855_object = var_5842_object; // 0x2936 Push
	if(var_5855_object == 0) goto Label_10554; // 0x2937 JumpB
	Remove(); // 0x2938 ObjFunc
	
Label_10554:
	var_5856_string = "b2Travnik1"; // 0x293a PushS
	FindMark(var_5842_object, var_5856_string); // 0x293b ObjFunc
	var_5857_object = var_5842_object; // 0x293d Push
	if(var_5857_object == 0) goto Label_10561; // 0x293e JumpB
	Remove(); // 0x293f ObjFunc
	
Label_10561:
	var_5858_string = "b2Travnik2"; // 0x2941 PushS
	FindMark(var_5842_object, var_5858_string); // 0x2942 ObjFunc
	var_5859_object = var_5842_object; // 0x2944 Push
	if(var_5859_object == 0) goto Label_10568; // 0x2945 JumpB
	Remove(); // 0x2946 ObjFunc
	
Label_10568:
	var_5860_string = "b2Travnik3"; // 0x2948 PushS
	FindMark(var_5842_object, var_5860_string); // 0x2949 ObjFunc
	var_5861_object = var_5842_object; // 0x294b Push
	if(var_5861_object == 0) goto Label_10575; // 0x294c JumpB
	Remove(); // 0x294d ObjFunc
	
Label_10575:
	var_5862_string = "b2q01BigVladGotoDanko"; // 0x294f PushS
	FindMark(var_5842_object, var_5862_string); // 0x2950 ObjFunc
	var_5863_object = var_5842_object; // 0x2952 Push
	if(var_5863_object == 0) goto Label_10582; // 0x2953 JumpB
	Remove(); // 0x2954 ObjFunc
	
Label_10582:
	var_5864_string = "b2q03GoodShop"; // 0x2956 PushS
	FindMark(var_5842_object, var_5864_string); // 0x2957 ObjFunc
	var_5865_object = var_5842_object; // 0x2959 Push
	if(var_5865_object == 0) goto Label_10589; // 0x295a JumpB
	Remove(); // 0x295b ObjFunc
	
Label_10589:
	var_5866_string = "b2AndreiKabak"; // 0x295d PushS
	FindMark(var_5842_object, var_5866_string); // 0x295e ObjFunc
	var_5867_object = var_5842_object; // 0x2960 Push
	if(var_5867_object == 0) goto Label_10596; // 0x2961 JumpB
	Remove(); // 0x2962 ObjFunc
	
Label_10596:
	var_5868_bool = 0; var_5869_int = 0; // 0x2964 PushV
	var_5869_int = 245; // 0x2965 MovI
	func_12005(var_5868_bool, var_5869_int); // 0x2966 NEW_2
	var_5870_bool = 0; var_5871_int = 0; // 0x2968 PushV
	var_5871_int = 456; // 0x2969 MovI
	func_12005(var_5870_bool, var_5871_int); // 0x296a NEW_2
	var_5872_bool = 0; var_5873_int = 0; // 0x296c PushV
	var_5873_int = 585; // 0x296d MovI
	func_12005(var_5872_bool, var_5873_int); // 0x296e NEW_2
	var_5874_bool = 0; var_5875_int = 0; // 0x2970 PushV
	var_5875_int = 588; // 0x2971 MovI
	func_12005(var_5874_bool, var_5875_int); // 0x2972 NEW_2
	return 4; // 0x2974 Return
}


func_1295(var_1127_bool, var_1128_int, var_1129_int)
{
	var_1127_bool = 0; // 0x510 MovB
	var_1130_int = 10; // 0x511 PushI
	var_1131_bool = var_1128_int >= var_1130_int; // 0x512 GE
	if(var_1131_bool == 0) goto Label_1304; // 0x513 JumpB
	var_1132_int = 6; // 0x514 PushI
	var_1133_bool = var_1129_int < var_1132_int; // 0x515 LT
	if(var_1133_bool == 0) goto Label_1304; // 0x516 JumpB
	var_1127_bool = 1; // 0x517 MovB
	
Label_1304:
	return 0; // 0x518 Return
}


func_11540(var_4883_bool)
{
	var_4886_int = 0; var_4887_string = ""; // 0x2d15 PushV
	var_4887_string = "b11q01"; // 0x2d16 MovS
	func_106(var_4886_int, var_4887_string); // 0x2d17 NEW_2
	var_4888_int = 0; // 0x2d19 PushI
	var_4889_bool = var_4886_int == var_4888_int; // 0x2d1a Eq
	if(var_4889_bool == 0) goto Label_11550; // 0x2d1b JumpB
	var_4883_bool = 1; // 0x2d1c MovB
	return 0; // 0x2d1d Return
	
Label_11550:
	var_4883_bool = 0; // 0x2d1e MovB
	return 0; // 0x2d1f Return
}


func_6421()
{
	var_245_string = "r5_house2_01"; // 0x1916 PushS
	add(var_245_string); // 0x1917 ObjFunc
	var_246_string = "r5_house2_02"; // 0x1919 PushS
	add(var_246_string); // 0x191a ObjFunc
	var_247_string = "r5_house2_03"; // 0x191c PushS
	add(var_247_string); // 0x191d ObjFunc
	var_248_string = "r5_house3_01_i2"; // 0x191f PushS
	add(var_248_string); // 0x1920 ObjFunc
	var_249_string = "r5_house3_01"; // 0x1922 PushS
	add(var_249_string); // 0x1923 ObjFunc
	var_250_string = "r5_house3_02_i2"; // 0x1925 PushS
	add(var_250_string); // 0x1926 ObjFunc
	var_251_string = "r5_house3_02"; // 0x1928 PushS
	add(var_251_string); // 0x1929 ObjFunc
	var_252_string = "r5_house3_03_i2"; // 0x192b PushS
	add(var_252_string); // 0x192c ObjFunc
	var_253_string = "r5_house3_03"; // 0x192e PushS
	add(var_253_string); // 0x192f ObjFunc
	var_254_string = "r5_house3_04_i2"; // 0x1931 PushS
	add(var_254_string); // 0x1932 ObjFunc
	var_255_string = "r5_house3_04"; // 0x1934 PushS
	add(var_255_string); // 0x1935 ObjFunc
	var_256_string = "r5_house3_05_i2"; // 0x1937 PushS
	add(var_256_string); // 0x1938 ObjFunc
	var_257_string = "r5_house3_05"; // 0x193a PushS
	add(var_257_string); // 0x193b ObjFunc
	var_258_string = "r5_house3_06_i2"; // 0x193d PushS
	add(var_258_string); // 0x193e ObjFunc
	var_259_string = "r5_house3_06"; // 0x1940 PushS
	add(var_259_string); // 0x1941 ObjFunc
	var_260_string = "r5_house3_07_i2"; // 0x1943 PushS
	add(var_260_string); // 0x1944 ObjFunc
	var_261_string = "r5_house3_07"; // 0x1946 PushS
	add(var_261_string); // 0x1947 ObjFunc
	var_262_string = "r5_House6_01"; // 0x1949 PushS
	add(var_262_string); // 0x194a ObjFunc
	return 0; // 0x194c Return
}


func_1305(var_1138_bool, var_1139_int, var_1140_int)
{
	var_1138_bool = 0; // 0x51a MovB
	var_1141_int = 3; // 0x51b PushI
	var_1142_bool = var_1139_int >= var_1141_int; // 0x51c GE
	if(var_1142_bool == 0) goto Label_1321; // 0x51d JumpB
	var_1143_bool = 0; // 0x51e PushV
	var_1143_bool = 1; // 0x51f MovB
	var_1144_int = 22; // 0x520 PushI
	var_1145_bool = var_1140_int > var_1144_int; // 0x521 GT
	if(var_1145_bool == 0) goto Label_1319; // 0x522 JumpB
	var_1146_int = 5; // 0x523 PushI
	var_1147_bool = var_1140_int < var_1146_int; // 0x524 LT
	if(var_1147_bool == 0) goto Label_1319; // 0x525 JumpB
	var_1143_bool = 0; // 0x526 MovB
	
Label_1319:
	if(var_1143_bool == 0) goto Label_1321; // 0x527 JumpB
	var_1138_bool = 1; // 0x528 MovB
	
Label_1321:
	return 0; // 0x529 Return
}


func_2333(var_913_int, var_914_int, var_915_int)
{
	var_916_int = 0; var_917_int = 0; // 0x91d PushV
	var_918_int = 1; // 0x91e PushI
	var_919_int = var_914_int + var_918_int; // 0x91f Add
	var_920_int = 12; // 0x920 PushI
	var_921_bool = var_919_int == var_920_int; // 0x921 Eq
	if(var_921_bool == 0) goto Label_2340; // 0x922 JumpB
	return 2; // 0x923 Return
	
Label_2340:
	var_922_bool = 0; // 0x924 PushV
	var_922_bool = 0; // 0x925 MovB
	var_923_bool = 0; // 0x926 PushV
	var_923_bool = 1; // 0x927 MovB
	var_924_int = 7; // 0x928 PushI
	var_925_bool = var_915_int < var_924_int; // 0x929 LT
	if(var_925_bool == 0) goto Label_2351; // 0x92a JumpB
	var_926_int = 21; // 0x92b PushI
	var_927_bool = var_915_int > var_926_int; // 0x92c GT
	if(var_927_bool == 0) goto Label_2351; // 0x92d JumpB
	var_923_bool = 0; // 0x92e MovB
	
Label_2351:
	if(var_923_bool == 0) goto Label_2356; // 0x92f JumpB
	var_928_int = 0; // 0x930 PushI
	var_929_bool = var_914_int != var_928_int; // 0x931 Neq
	if(var_929_bool == 0) goto Label_2356; // 0x932 JumpB
	var_922_bool = 1; // 0x933 MovB
	
Label_2356:
	if(var_922_bool == 0) goto Label_2372; // 0x934 JumpB
	var_930_int = 1; // 0x935 PushI
	var_931_float = 0; var_932_int = 0; // 0x936 PushV
	var_932_int = var_914_int; // 0x937 Mov
	func_1091(var_931_float, var_932_int); // 0x938 NEW_2
	var_917_int = var_930_int * var_931_float; // 0x93a Mult2
	var_933_int = var_917_int; // 0x93b Push
	if(var_933_int == 0) goto Label_2372; // 0x93c JumpB
	var_934_int = 0; var_935_string = ""; var_936_string = ""; var_937_int = 0; // 0x93d PushV
	var_934_int = var_913_int; // 0x93e Mov
	var_935_string = "pers_grabitel"; // 0x93f MovS
	var_936_string = "grabitel.xml"; // 0x940 MovS
	var_937_int = var_917_int; // 0x941 Mov
	func_453(var_934_int, var_935_string, var_936_string, var_937_int); // 0x942 NEW_2
	
Label_2372:
	var_938_bool = 0; var_939_int = 0; var_940_int = 0; // 0x944 PushV
	var_939_int = var_914_int; // 0x945 Mov
	var_940_int = var_915_int; // 0x946 Mov
	func_1060(var_938_bool, var_939_int, var_940_int); // 0x947 NEW_2
	if(var_938_bool == 0) goto Label_2421; // 0x949 JumpB
	var_941_int = 0; var_942_string = ""; var_943_string = ""; var_944_int = 0; // 0x94a PushV
	var_941_int = var_913_int; // 0x94b Mov
	var_942_string = "pers_unosha"; // 0x94c MovS
	var_943_string = "unosha_attacker.xml"; // 0x94d MovS
	var_944_int = 1; // 0x94e MovI
	func_453(var_941_int, var_942_string, var_943_string, var_944_int); // 0x94f NEW_2
	var_945_int = 0; var_946_string = ""; var_947_string = ""; var_948_int = 0; // 0x951 PushV
	var_945_int = var_913_int; // 0x952 Mov
	var_946_string = "pers_unosha"; // 0x953 MovS
	var_947_string = "unosha2_attacker.xml"; // 0x954 MovS
	var_948_int = 1; // 0x955 MovI
	func_453(var_945_int, var_946_string, var_947_string, var_948_int); // 0x956 NEW_2
	var_949_int = 0; var_950_string = ""; var_951_string = ""; var_952_int = 0; // 0x958 PushV
	var_949_int = var_913_int; // 0x959 Mov
	var_950_string = "pers_worker"; // 0x95a MovS
	var_951_string = "worker_attacker.xml"; // 0x95b MovS
	var_952_int = 1; // 0x95c MovI
	func_453(var_949_int, var_950_string, var_951_string, var_952_int); // 0x95d NEW_2
	var_953_int = 0; var_954_string = ""; var_955_string = ""; var_956_int = 0; // 0x95f PushV
	var_953_int = var_913_int; // 0x960 Mov
	var_954_string = "pers_worker"; // 0x961 MovS
	var_955_string = "worker2_attacker.xml"; // 0x962 MovS
	var_956_int = 1; // 0x963 MovI
	func_453(var_953_int, var_954_string, var_955_string, var_956_int); // 0x964 NEW_2
	var_957_int = 0; var_958_string = ""; var_959_string = ""; var_960_int = 0; // 0x966 PushV
	var_957_int = var_913_int; // 0x967 Mov
	var_958_string = "pers_alkash"; // 0x968 MovS
	var_959_string = "alkash.xml"; // 0x969 MovS
	var_960_int = 1; // 0x96a MovI
	func_453(var_957_int, var_958_string, var_959_string, var_960_int); // 0x96b NEW_2
	var_961_int = 0; var_962_string = ""; var_963_string = ""; var_964_int = 0; // 0x96d PushV
	var_961_int = var_913_int; // 0x96e Mov
	var_962_string = "pers_woman"; // 0x96f MovS
	var_963_string = "woman.xml"; // 0x970 MovS
	var_964_int = 2; // 0x971 MovI
	func_453(var_961_int, var_962_string, var_963_string, var_964_int); // 0x972 NEW_2
	goto Label_2509; // 0x974 Jump
	
Label_2509:
	var_965_bool = 0; // 0x9cd PushV
	var_965_bool = 0; // 0x9ce MovB
	var_966_bool = 0; // 0x9cf PushV
	var_966_bool = 0; // 0x9d0 MovB
	var_967_int = 0; // 0x9d1 PushI
	var_968_bool = var_914_int == var_967_int; // 0x9d2 Eq
	if(var_968_bool == 0) goto Label_2520; // 0x9d3 JumpB
	var_969_int = 12; // 0x9d4 PushI
	var_970_bool = var_915_int > var_969_int; // 0x9d5 GT
	if(var_970_bool == 0) goto Label_2520; // 0x9d6 JumpB
	var_966_bool = 1; // 0x9d7 MovB
	
Label_2520:
	if(var_966_bool == 0) goto Label_2525; // 0x9d8 JumpB
	var_971_int = 22; // 0x9d9 PushI
	var_972_bool = var_915_int < var_971_int; // 0x9da LT
	if(var_972_bool == 0) goto Label_2525; // 0x9db JumpB
	var_965_bool = 1; // 0x9dc MovB
	
Label_2525:
	if(var_965_bool == 0) goto Label_2533; // 0x9dd JumpB
	var_973_int = 0; var_974_string = ""; var_975_string = ""; var_976_int = 0; // 0x9de PushV
	var_973_int = var_913_int; // 0x9df Mov
	var_974_string = "pers_woman"; // 0x9e0 MovS
	var_975_string = "woman_killme.xml"; // 0x9e1 MovS
	var_976_int = 1; // 0x9e2 MovI
	func_453(var_973_int, var_974_string, var_975_string, var_976_int); // 0x9e3 NEW_2
	
Label_2533:
	return 2; // 0x9e5 Return
	
Label_2421:
	var_977_bool = 0; // 0x975 PushV
	var_977_bool = 0; // 0x976 MovB
	var_978_int = 8; // 0x977 PushI
	var_979_bool = var_915_int > var_978_int; // 0x978 GT
	if(var_979_bool == 0) goto Label_2430; // 0x979 JumpB
	var_980_int = 21; // 0x97a PushI
	var_981_bool = var_915_int < var_980_int; // 0x97b LT
	if(var_981_bool == 0) goto Label_2430; // 0x97c JumpB
	var_977_bool = 1; // 0x97d MovB
	
Label_2430:
	if(var_977_bool == 0) goto Label_2474; // 0x97e JumpB
	var_982_int = 0; var_983_string = ""; var_984_string = ""; var_985_int = 0; // 0x97f PushV
	var_982_int = var_913_int; // 0x980 Mov
	var_983_string = "pers_worker"; // 0x981 MovS
	var_984_string = "worker.xml"; // 0x982 MovS
	var_985_int = 2; // 0x983 MovI
	func_453(var_982_int, var_983_string, var_984_string, var_985_int); // 0x984 NEW_2
	var_986_int = 0; var_987_string = ""; var_988_string = ""; var_989_int = 0; // 0x986 PushV
	var_986_int = var_913_int; // 0x987 Mov
	var_987_string = "pers_worker"; // 0x988 MovS
	var_988_string = "worker2.xml"; // 0x989 MovS
	var_989_int = 2; // 0x98a MovI
	func_453(var_986_int, var_987_string, var_988_string, var_989_int); // 0x98b NEW_2
	var_990_int = 0; var_991_string = ""; var_992_string = ""; var_993_int = 0; // 0x98d PushV
	var_990_int = var_913_int; // 0x98e Mov
	var_991_string = "pers_alkash"; // 0x98f MovS
	var_992_string = "alkash.xml"; // 0x990 MovS
	var_993_int = 1; // 0x991 MovI
	func_453(var_990_int, var_991_string, var_992_string, var_993_int); // 0x992 NEW_2
	var_994_int = 0; var_995_string = ""; var_996_string = ""; var_997_int = 0; // 0x994 PushV
	var_994_int = var_913_int; // 0x995 Mov
	var_995_string = "pers_woman"; // 0x996 MovS
	var_996_string = "woman.xml"; // 0x997 MovS
	var_997_int = 2; // 0x998 MovI
	func_453(var_994_int, var_995_string, var_996_string, var_997_int); // 0x999 NEW_2
	var_998_int = 0; var_999_string = ""; var_1000_string = ""; var_1001_int = 0; // 0x99b PushV
	var_998_int = var_913_int; // 0x99c Mov
	var_999_string = "pers_unosha"; // 0x99d MovS
	var_1000_string = "unosha.xml"; // 0x99e MovS
	var_1001_int = 1; // 0x99f MovI
	func_453(var_998_int, var_999_string, var_1000_string, var_1001_int); // 0x9a0 NEW_2
	var_1002_int = 0; var_1003_string = ""; var_1004_string = ""; var_1005_int = 0; // 0x9a2 PushV
	var_1002_int = var_913_int; // 0x9a3 Mov
	var_1003_string = "pers_unosha"; // 0x9a4 MovS
	var_1004_string = "unosha2.xml"; // 0x9a5 MovS
	var_1005_int = 1; // 0x9a6 MovI
	func_453(var_1002_int, var_1003_string, var_1004_string, var_1005_int); // 0x9a7 NEW_2
	goto Label_2509; // 0x9a9 Jump
	
Label_2474:
	var_1006_int = 0; var_1007_string = ""; var_1008_string = ""; var_1009_int = 0; // 0x9aa PushV
	var_1006_int = var_913_int; // 0x9ab Mov
	var_1007_string = "pers_alkash"; // 0x9ac MovS
	var_1008_string = "alkash.xml"; // 0x9ad MovS
	var_1009_int = 1; // 0x9ae MovI
	func_453(var_1006_int, var_1007_string, var_1008_string, var_1009_int); // 0x9af NEW_2
	var_1010_int = 0; var_1011_string = ""; var_1012_string = ""; var_1013_int = 0; // 0x9b1 PushV
	var_1010_int = var_913_int; // 0x9b2 Mov
	var_1011_string = "pers_worker"; // 0x9b3 MovS
	var_1012_string = "worker.xml"; // 0x9b4 MovS
	var_1013_int = 1; // 0x9b5 MovI
	func_453(var_1010_int, var_1011_string, var_1012_string, var_1013_int); // 0x9b6 NEW_2
	var_1014_int = 0; var_1015_string = ""; var_1016_string = ""; var_1017_int = 0; // 0x9b8 PushV
	var_1014_int = var_913_int; // 0x9b9 Mov
	var_1015_string = "pers_worker"; // 0x9ba MovS
	var_1016_string = "worker2.xml"; // 0x9bb MovS
	var_1017_int = 1; // 0x9bc MovI
	func_453(var_1014_int, var_1015_string, var_1016_string, var_1017_int); // 0x9bd NEW_2
	var_1018_int = 0; var_1019_string = ""; var_1020_string = ""; var_1021_int = 0; // 0x9bf PushV
	var_1018_int = var_913_int; // 0x9c0 Mov
	var_1019_string = "pers_unosha"; // 0x9c1 MovS
	var_1020_string = "unosha2.xml"; // 0x9c2 MovS
	var_1021_int = 1; // 0x9c3 MovI
	func_453(var_1018_int, var_1019_string, var_1020_string, var_1021_int); // 0x9c4 NEW_2
	var_1022_int = 0; var_1023_string = ""; var_1024_string = ""; var_1025_int = 0; // 0x9c6 PushV
	var_1022_int = var_913_int; // 0x9c7 Mov
	var_1023_string = "pers_dog"; // 0x9c8 MovS
	var_1024_string = "dog.xml"; // 0x9c9 MovS
	var_1025_int = 1; // 0x9ca MovI
	func_453(var_1022_int, var_1023_string, var_1024_string, var_1025_int); // 0x9cb NEW_2
}


func_11552(var_4898_bool)
{
	var_4901_int = 0; var_4902_string = ""; // 0x2d21 PushV
	var_4902_string = "b12q01BlockVisit"; // 0x2d22 MovS
	func_106(var_4901_int, var_4902_string); // 0x2d23 NEW_2
	var_4903_int = 0; // 0x2d25 PushI
	var_4904_bool = var_4901_int != var_4903_int; // 0x2d26 Neq
	if(var_4904_bool == 0) goto Label_11562; // 0x2d27 JumpB
	var_4898_bool = 1; // 0x2d28 MovB
	return 0; // 0x2d29 Return
	
Label_11562:
	var_4898_bool = 0; // 0x2d2a MovB
	return 0; // 0x2d2b Return
}


func_4389(var_2004_int, var_2005_int, var_2006_object, var_2007_object, var_2008_object, var_2009_object)
{
	var_2010_int = 0; // 0x1126 PushI
	var_2011_bool = var_2005_int == var_2010_int; // 0x1127 Eq
	if(var_2011_bool == 0) goto Label_4429; // 0x1128 JumpB
	var_2012_int = 0; var_2013_bool = 0; // 0x1129 PushV
	var_2012_int = 0; // 0x112a MovI
	var_2013_bool = 1; // 0x112b MovB
	func_746(var_2012_int, var_2013_bool); // 0x112c NEW_2
	var_2014_int = 0; var_2015_bool = 0; var_2016_int = 0; // 0x112e PushV
	var_2014_int = 0; // 0x112f MovI
	var_2015_bool = 1; // 0x1130 MovB
	var_2016_int = 1; // 0x1131 MovI
	func_763(var_2014_int, var_2015_bool, var_2016_int); // 0x1132 NEW_2
	var_2017_int = 0; var_2018_int = 0; var_2019_object = Obj(); var_2020_object = Obj(); var_2021_object = Obj(); // 0x1134 PushV
	var_2017_int = 0; // 0x1135 MovI
	var_2018_int = var_2004_int; // 0x1136 Mov
	var_2019_object = var_2006_object; // 0x1137 Mov
	var_2020_object = var_2007_object; // 0x1138 Mov
	var_2021_object = var_2008_object; // 0x1139 Mov
	func_591(var_2017_int, var_2018_int, var_2019_object, var_2020_object, var_2021_object); // 0x113a NEW_2
	var_2107_object = Obj(); var_2108_int = 0; // 0x113c PushV
	var_2107_object = var_2009_object; // 0x113d Mov
	var_2108_int = 1; // 0x113e MovI
	func_255(var_2108_int); // 0x113f NEW_2
	var_2109_int = 0; var_2110_bool = 0; var_2111_int = 0; // 0x1141 PushV
	var_2109_int = 0; // 0x1142 MovI
	var_2110_bool = 1; // 0x1143 MovB
	var_2111_int = 4; // 0x1144 MovI
	func_820(var_2109_int, var_2110_bool, var_2111_int); // 0x1145 NEW_2
	var_2112_int = 0; var_2113_bool = 0; var_2114_int = 0; // 0x1147 PushV
	var_2112_int = 0; // 0x1148 MovI
	var_2113_bool = 0; // 0x1149 MovB
	var_2114_int = 4; // 0x114a MovI
	func_882(var_2112_int, var_2113_bool, var_2114_int); // 0x114b NEW_2
	
Label_4429:
	var_2115_int = 0; var_2116_bool = 0; // 0x114d PushV
	var_2115_int = 0; // 0x114e MovI
	var_2116_bool = 0; // 0x114f MovB
	func_729(var_2115_int, var_2116_bool); // 0x1150 NEW_2
	var_2117_int = 0; var_2118_int = 0; var_2119_int = 0; // 0x1152 PushV
	var_2117_int = 0; // 0x1153 MovI
	var_2118_int = var_2004_int; // 0x1154 Mov
	var_2119_int = var_2005_int; // 0x1155 Mov
	func_3087(var_2117_int, var_2118_int, var_2119_int); // 0x1156 NEW_2
	return 0; // 0x1158 Return
}


func_293(var_108_int)
{
	var_109_int = 0; var_110_int = 0; var_111_int = 0; var_112_int = 0; // 0x125 PushV
	var_111_int = 0; // 0x126 MovI
	var_112_int = 0; // 0x127 MovI
	
Label_296:
	var_113_int = 16; // 0x128 PushI
	var_114_bool = var_112_int < var_113_int; // 0x129 LT
	if(var_114_bool == 0) goto Label_309; // 0x12a JumpB
	var_115_bool = 0; var_116_int = 0; // 0x12b PushV
	var_116_int = var_112_int; // 0x12c Mov
	func_380(var_115_bool, var_116_int); // 0x12d NEW_2
	if(var_115_bool == 0) goto Label_306; // 0x12f JumpB
	var_117_int = 1; // 0x130 PushI
	var_111_int = var_111_int + var_117_int; // 0x131 Add2
	
Label_306:
	var_118_int = 1; // 0x132 PushI
	var_112_int = var_112_int + var_118_int; // 0x133 Add2
	goto Label_296; // 0x134 Jump
	
Label_309:
	var_108_int = var_111_int; // 0x135 Mov
	return 4; // 0x136 Return
}


func_1322(var_2207_bool, var_2208_int)
{
	var_2209_int = 8; // 0x52b PushI
	var_2207_bool = var_2208_int >= var_2209_int; // 0x52c GE2
	return 0; // 0x52d Return
}


func_11564(var_4914_bool)
{
	var_4917_int = 0; var_4918_string = ""; // 0x2d2d PushV
	var_4918_string = "b12q01DankoVisit"; // 0x2d2e MovS
	func_106(var_4917_int, var_4918_string); // 0x2d2f NEW_2
	var_4919_int = 0; // 0x2d31 PushI
	var_4920_bool = var_4917_int != var_4919_int; // 0x2d32 Neq
	if(var_4920_bool == 0) goto Label_11574; // 0x2d33 JumpB
	var_4914_bool = 1; // 0x2d34 MovB
	return 0; // 0x2d35 Return
	
Label_11574:
	var_4914_bool = 0; // 0x2d36 MovB
	return 0; // 0x2d37 Return
}


func_1326(var_1805_int, var_1806_int, var_1807_int)
{
	var_1808_int = 0; var_1809_int = 0; // 0x52e PushV
	var_1810_int = 1; // 0x52f PushI
	var_1811_int = var_1806_int + var_1810_int; // 0x530 Add
	var_1812_int = 12; // 0x531 PushI
	var_1813_bool = var_1811_int == var_1812_int; // 0x532 Eq
	if(var_1813_bool == 0) goto Label_1333; // 0x533 JumpB
	return 2; // 0x534 Return
	
Label_1333:
	var_1814_bool = 0; // 0x535 PushV
	var_1814_bool = 0; // 0x536 MovB
	var_1815_bool = 0; // 0x537 PushV
	var_1815_bool = 1; // 0x538 MovB
	var_1816_int = 7; // 0x539 PushI
	var_1817_bool = var_1807_int < var_1816_int; // 0x53a LT
	if(var_1817_bool == 0) goto Label_1344; // 0x53b JumpB
	var_1818_int = 21; // 0x53c PushI
	var_1819_bool = var_1807_int > var_1818_int; // 0x53d GT
	if(var_1819_bool == 0) goto Label_1344; // 0x53e JumpB
	var_1815_bool = 0; // 0x53f MovB
	
Label_1344:
	if(var_1815_bool == 0) goto Label_1349; // 0x540 JumpB
	var_1820_int = 0; // 0x541 PushI
	var_1821_bool = var_1806_int != var_1820_int; // 0x542 Neq
	if(var_1821_bool == 0) goto Label_1349; // 0x543 JumpB
	var_1814_bool = 1; // 0x544 MovB
	
Label_1349:
	if(var_1814_bool == 0) goto Label_1364; // 0x545 JumpB
	var_1822_float = 0; var_1823_int = 0; // 0x546 PushV
	var_1823_int = var_1806_int; // 0x547 Mov
	func_1091(var_1822_float, var_1823_int); // 0x548 NEW_2
	var_1809_int = var_1822_float; // 0x549 Mov
	var_1824_int = var_1809_int; // 0x54b Push
	if(var_1824_int == 0) goto Label_1364; // 0x54c JumpB
	var_1825_int = 0; var_1826_string = ""; var_1827_string = ""; var_1828_int = 0; // 0x54d PushV
	var_1825_int = var_1805_int; // 0x54e Mov
	var_1826_string = "pers_grabitel"; // 0x54f MovS
	var_1827_string = "grabitel.xml"; // 0x550 MovS
	var_1828_int = var_1809_int; // 0x551 Mov
	func_453(var_1825_int, var_1826_string, var_1827_string, var_1828_int); // 0x552 NEW_2
	
Label_1364:
	var_1829_bool = 0; var_1830_int = 0; var_1831_int = 0; // 0x554 PushV
	var_1830_int = var_1806_int; // 0x555 Mov
	var_1831_int = var_1807_int; // 0x556 Mov
	func_1060(var_1829_bool, var_1830_int, var_1831_int); // 0x557 NEW_2
	if(var_1829_bool == 0) goto Label_1441; // 0x559 JumpB
	var_1832_int = 0; var_1833_string = ""; var_1834_string = ""; var_1835_int = 0; // 0x55a PushV
	var_1832_int = var_1805_int; // 0x55b Mov
	var_1833_string = "pers_unosha"; // 0x55c MovS
	var_1834_string = "unosha_attacker.xml"; // 0x55d MovS
	var_1835_int = 1; // 0x55e MovI
	func_453(var_1832_int, var_1833_string, var_1834_string, var_1835_int); // 0x55f NEW_2
	var_1836_int = 0; var_1837_string = ""; var_1838_string = ""; var_1839_int = 0; // 0x561 PushV
	var_1836_int = var_1805_int; // 0x562 Mov
	var_1837_string = "pers_unosha"; // 0x563 MovS
	var_1838_string = "unosha2_attacker.xml"; // 0x564 MovS
	var_1839_int = 1; // 0x565 MovI
	func_453(var_1836_int, var_1837_string, var_1838_string, var_1839_int); // 0x566 NEW_2
	var_1840_int = 0; var_1841_string = ""; var_1842_string = ""; var_1843_int = 0; // 0x568 PushV
	var_1840_int = var_1805_int; // 0x569 Mov
	var_1841_string = "pers_worker"; // 0x56a MovS
	var_1842_string = "worker_attacker.xml"; // 0x56b MovS
	var_1843_int = 1; // 0x56c MovI
	func_453(var_1840_int, var_1841_string, var_1842_string, var_1843_int); // 0x56d NEW_2
	var_1844_int = 0; var_1845_string = ""; var_1846_string = ""; var_1847_int = 0; // 0x56f PushV
	var_1844_int = var_1805_int; // 0x570 Mov
	var_1845_string = "pers_worker"; // 0x571 MovS
	var_1846_string = "worker2_attacker.xml"; // 0x572 MovS
	var_1847_int = 1; // 0x573 MovI
	func_453(var_1844_int, var_1845_string, var_1846_string, var_1847_int); // 0x574 NEW_2
	var_1848_int = 0; var_1849_string = ""; var_1850_string = ""; var_1851_int = 0; // 0x576 PushV
	var_1848_int = var_1805_int; // 0x577 Mov
	var_1849_string = "pers_wasted_girl"; // 0x578 MovS
	var_1850_string = "wasted_girl.xml"; // 0x579 MovS
	var_1851_int = 2; // 0x57a MovI
	func_453(var_1848_int, var_1849_string, var_1850_string, var_1851_int); // 0x57b NEW_2
	var_1852_int = 0; var_1853_string = ""; var_1854_string = ""; var_1855_int = 0; // 0x57d PushV
	var_1852_int = var_1805_int; // 0x57e Mov
	var_1853_string = "pers_wasted_male"; // 0x57f MovS
	var_1854_string = "wasted_male.xml"; // 0x580 MovS
	var_1855_int = 3; // 0x581 MovI
	func_453(var_1852_int, var_1853_string, var_1854_string, var_1855_int); // 0x582 NEW_2
	var_1856_int = 0; var_1857_string = ""; var_1858_string = ""; var_1859_int = 0; // 0x584 PushV
	var_1856_int = var_1805_int; // 0x585 Mov
	var_1857_string = "pers_woman"; // 0x586 MovS
	var_1858_string = "woman.xml"; // 0x587 MovS
	var_1859_int = 3; // 0x588 MovI
	func_453(var_1856_int, var_1857_string, var_1858_string, var_1859_int); // 0x589 NEW_2
	var_1860_int = 0; var_1861_string = ""; var_1862_string = ""; var_1863_int = 0; // 0x58b PushV
	var_1860_int = var_1805_int; // 0x58c Mov
	var_1861_string = "pers_boy"; // 0x58d MovS
	var_1862_string = "boy.xml"; // 0x58e MovS
	var_1863_int = 1; // 0x58f MovI
	func_453(var_1860_int, var_1861_string, var_1862_string, var_1863_int); // 0x590 NEW_2
	var_1864_int = 0; var_1865_string = ""; var_1866_string = ""; var_1867_int = 0; // 0x592 PushV
	var_1864_int = var_1805_int; // 0x593 Mov
	var_1865_string = "pers_girl"; // 0x594 MovS
	var_1866_string = "girl.xml"; // 0x595 MovS
	var_1867_int = 1; // 0x596 MovI
	func_453(var_1864_int, var_1865_string, var_1866_string, var_1867_int); // 0x597 NEW_2
	var_1868_int = 0; var_1869_string = ""; var_1870_string = ""; var_1871_int = 0; // 0x599 PushV
	var_1868_int = var_1805_int; // 0x59a Mov
	var_1869_string = "pers_girl"; // 0x59b MovS
	var_1870_string = "girl2.xml"; // 0x59c MovS
	var_1871_int = 1; // 0x59d MovI
	func_453(var_1868_int, var_1869_string, var_1870_string, var_1871_int); // 0x59e NEW_2
	goto Label_1536; // 0x5a0 Jump
	
Label_1536:
	var_1872_bool = 0; // 0x600 PushV
	var_1872_bool = 0; // 0x601 MovB
	var_1873_bool = 0; // 0x602 PushV
	var_1873_bool = 0; // 0x603 MovB
	var_1874_int = 0; // 0x604 PushI
	var_1875_bool = var_1806_int == var_1874_int; // 0x605 Eq
	if(var_1875_bool == 0) goto Label_1547; // 0x606 JumpB
	var_1876_int = 12; // 0x607 PushI
	var_1877_bool = var_1807_int > var_1876_int; // 0x608 GT
	if(var_1877_bool == 0) goto Label_1547; // 0x609 JumpB
	var_1873_bool = 1; // 0x60a MovB
	
Label_1547:
	if(var_1873_bool == 0) goto Label_1552; // 0x60b JumpB
	var_1878_int = 22; // 0x60c PushI
	var_1879_bool = var_1807_int < var_1878_int; // 0x60d LT
	if(var_1879_bool == 0) goto Label_1552; // 0x60e JumpB
	var_1872_bool = 1; // 0x60f MovB
	
Label_1552:
	if(var_1872_bool == 0) goto Label_1560; // 0x610 JumpB
	var_1880_int = 0; var_1881_string = ""; var_1882_string = ""; var_1883_int = 0; // 0x611 PushV
	var_1880_int = var_1805_int; // 0x612 Mov
	var_1881_string = "pers_wasted_girl"; // 0x613 MovS
	var_1882_string = "wasted_girl_killme.xml"; // 0x614 MovS
	var_1883_int = 1; // 0x615 MovI
	func_453(var_1880_int, var_1881_string, var_1882_string, var_1883_int); // 0x616 NEW_2
	
Label_1560:
	var_1884_bool = 0; var_1885_int = 0; var_1886_int = 0; // 0x618 PushV
	var_1885_int = var_1806_int; // 0x619 Mov
	var_1886_int = var_1807_int; // 0x61a Mov
	func_1295(var_1884_bool, var_1885_int, var_1886_int); // 0x61b NEW_2
	if(var_1884_bool == 0) goto Label_1573; // 0x61d JumpB
	var_1887_int = 0; var_1888_string = ""; var_1889_string = ""; var_1890_int = 0; // 0x61e PushV
	var_1887_int = var_1805_int; // 0x61f Mov
	var_1888_string = "pers_soldat"; // 0x620 MovS
	var_1889_string = "soldier_marauder.xml"; // 0x621 MovS
	var_1890_int = 2; // 0x622 MovI
	func_453(var_1887_int, var_1888_string, var_1889_string, var_1890_int); // 0x623 NEW_2
	
Label_1573:
	return 2; // 0x625 Return
	
Label_1441:
	var_1891_bool = 0; // 0x5a1 PushV
	var_1891_bool = 0; // 0x5a2 MovB
	var_1892_int = 8; // 0x5a3 PushI
	var_1893_bool = var_1807_int > var_1892_int; // 0x5a4 GT
	if(var_1893_bool == 0) goto Label_1450; // 0x5a5 JumpB
	var_1894_int = 21; // 0x5a6 PushI
	var_1895_bool = var_1807_int < var_1894_int; // 0x5a7 LT
	if(var_1895_bool == 0) goto Label_1450; // 0x5a8 JumpB
	var_1891_bool = 1; // 0x5a9 MovB
	
Label_1450:
	if(var_1891_bool == 0) goto Label_1508; // 0x5aa JumpB
	var_1896_int = 0; var_1897_string = ""; var_1898_string = ""; var_1899_int = 0; // 0x5ab PushV
	var_1896_int = var_1805_int; // 0x5ac Mov
	var_1897_string = "pers_wasted_girl"; // 0x5ad MovS
	var_1898_string = "wasted_girl.xml"; // 0x5ae MovS
	var_1899_int = 2; // 0x5af MovI
	func_453(var_1896_int, var_1897_string, var_1898_string, var_1899_int); // 0x5b0 NEW_2
	var_1900_int = 0; var_1901_string = ""; var_1902_string = ""; var_1903_int = 0; // 0x5b2 PushV
	var_1900_int = var_1805_int; // 0x5b3 Mov
	var_1901_string = "pers_wasted_male"; // 0x5b4 MovS
	var_1902_string = "wasted_male.xml"; // 0x5b5 MovS
	var_1903_int = 3; // 0x5b6 MovI
	func_453(var_1900_int, var_1901_string, var_1902_string, var_1903_int); // 0x5b7 NEW_2
	var_1904_int = 0; var_1905_string = ""; var_1906_string = ""; var_1907_int = 0; // 0x5b9 PushV
	var_1904_int = var_1805_int; // 0x5ba Mov
	var_1905_string = "pers_woman"; // 0x5bb MovS
	var_1906_string = "woman.xml"; // 0x5bc MovS
	var_1907_int = 3; // 0x5bd MovI
	func_453(var_1904_int, var_1905_string, var_1906_string, var_1907_int); // 0x5be NEW_2
	var_1908_int = 0; var_1909_string = ""; var_1910_string = ""; var_1911_int = 0; // 0x5c0 PushV
	var_1908_int = var_1805_int; // 0x5c1 Mov
	var_1909_string = "pers_unosha"; // 0x5c2 MovS
	var_1910_string = "unosha.xml"; // 0x5c3 MovS
	var_1911_int = 2; // 0x5c4 MovI
	func_453(var_1908_int, var_1909_string, var_1910_string, var_1911_int); // 0x5c5 NEW_2
	var_1912_int = 0; var_1913_string = ""; var_1914_string = ""; var_1915_int = 0; // 0x5c7 PushV
	var_1912_int = var_1805_int; // 0x5c8 Mov
	var_1913_string = "pers_unosha"; // 0x5c9 MovS
	var_1914_string = "unosha2.xml"; // 0x5ca MovS
	var_1915_int = 2; // 0x5cb MovI
	func_453(var_1912_int, var_1913_string, var_1914_string, var_1915_int); // 0x5cc NEW_2
	var_1916_int = 0; var_1917_string = ""; var_1918_string = ""; var_1919_int = 0; // 0x5ce PushV
	var_1916_int = var_1805_int; // 0x5cf Mov
	var_1917_string = "pers_boy"; // 0x5d0 MovS
	var_1918_string = "boy.xml"; // 0x5d1 MovS
	var_1919_int = 2; // 0x5d2 MovI
	func_453(var_1916_int, var_1917_string, var_1918_string, var_1919_int); // 0x5d3 NEW_2
	var_1920_int = 0; var_1921_string = ""; var_1922_string = ""; var_1923_int = 0; // 0x5d5 PushV
	var_1920_int = var_1805_int; // 0x5d6 Mov
	var_1921_string = "pers_girl"; // 0x5d7 MovS
	var_1922_string = "girl.xml"; // 0x5d8 MovS
	var_1923_int = 1; // 0x5d9 MovI
	func_453(var_1920_int, var_1921_string, var_1922_string, var_1923_int); // 0x5da NEW_2
	var_1924_int = 0; var_1925_string = ""; var_1926_string = ""; var_1927_int = 0; // 0x5dc PushV
	var_1924_int = var_1805_int; // 0x5dd Mov
	var_1925_string = "pers_girl"; // 0x5de MovS
	var_1926_string = "girl2.xml"; // 0x5df MovS
	var_1927_int = 1; // 0x5e0 MovI
	func_453(var_1924_int, var_1925_string, var_1926_string, var_1927_int); // 0x5e1 NEW_2
	goto Label_1536; // 0x5e3 Jump
	
Label_1508:
	var_1928_int = 0; var_1929_string = ""; var_1930_string = ""; var_1931_int = 0; // 0x5e4 PushV
	var_1928_int = var_1805_int; // 0x5e5 Mov
	var_1929_string = "pers_wasted_girl"; // 0x5e6 MovS
	var_1930_string = "wasted_girl.xml"; // 0x5e7 MovS
	var_1931_int = 1; // 0x5e8 MovI
	func_453(var_1928_int, var_1929_string, var_1930_string, var_1931_int); // 0x5e9 NEW_2
	var_1932_int = 0; var_1933_string = ""; var_1934_string = ""; var_1935_int = 0; // 0x5eb PushV
	var_1932_int = var_1805_int; // 0x5ec Mov
	var_1933_string = "pers_wasted_male"; // 0x5ed MovS
	var_1934_string = "wasted_male.xml"; // 0x5ee MovS
	var_1935_int = 2; // 0x5ef MovI
	func_453(var_1932_int, var_1933_string, var_1934_string, var_1935_int); // 0x5f0 NEW_2
	var_1936_int = 0; var_1937_string = ""; var_1938_string = ""; var_1939_int = 0; // 0x5f2 PushV
	var_1936_int = var_1805_int; // 0x5f3 Mov
	var_1937_string = "pers_unosha"; // 0x5f4 MovS
	var_1938_string = "unosha.xml"; // 0x5f5 MovS
	var_1939_int = 1; // 0x5f6 MovI
	func_453(var_1936_int, var_1937_string, var_1938_string, var_1939_int); // 0x5f7 NEW_2
	var_1940_int = 0; var_1941_string = ""; var_1942_string = ""; var_1943_int = 0; // 0x5f9 PushV
	var_1940_int = var_1805_int; // 0x5fa Mov
	var_1941_string = "pers_unosha"; // 0x5fb MovS
	var_1942_string = "unosha2.xml"; // 0x5fc MovS
	var_1943_int = 1; // 0x5fd MovI
	func_453(var_1940_int, var_1941_string, var_1942_string, var_1943_int); // 0x5fe NEW_2
}


func_9520(var_6098_int, var_6099_float)
{
	var_6100_int = 0; var_6101_int = 0; var_6102_int = 0; var_6103_float = 0; // 0x2531 PushV
	var_6101_int = 531503; // 0x2532 MovI
	var_6102_int = 531502; // 0x2533 MovI
	var_6103_float = var_6099_float; // 0x2534 Mov
	func_12022(var_6100_int, var_6101_int, var_6102_int, var_6103_float); // 0x2535 NEW_2
	var_6098_int = var_6100_int; // 0x2536 Mov
	return 0; // 0x2538 Return
}


func_14644(var_4218_object, var_4220_cvector, var_4221_cvector)
{
	var_4222_object = Obj(); var_4223_object = Obj(); // 0x3934 PushV
	var_4224_string = "pers_morlok"; // 0x3935 PushS
	var_4225_string = "Burah_arena_manager.xml"; // 0x3936 PushS
	AddStationaryActor(var_4223_object, var_4220_cvector, var_4221_cvector, var_4224_string, var_4225_string); // 0x3937 ObjFunc
	var_4218_object = var_4223_object; // 0x3939 Mov
	return 2; // 0x393a Return
}


func_5430(var_1340_int, var_1341_int, var_1342_object, var_1343_object, var_1344_object, var_1345_object)
{
	var_1346_int = 0; // 0x1537 PushI
	var_1347_bool = var_1341_int == var_1346_int; // 0x1538 Eq
	if(var_1347_bool == 0) goto Label_5470; // 0x1539 JumpB
	var_1348_int = 0; var_1349_bool = 0; // 0x153a PushV
	var_1348_int = 5; // 0x153b MovI
	var_1349_bool = 0; // 0x153c MovB
	func_746(var_1348_int, var_1349_bool); // 0x153d NEW_2
	var_1350_int = 0; var_1351_bool = 0; var_1352_int = 0; // 0x153f PushV
	var_1350_int = 5; // 0x1540 MovI
	var_1351_bool = 0; // 0x1541 MovB
	var_1352_int = 1; // 0x1542 MovI
	func_763(var_1350_int, var_1351_bool, var_1352_int); // 0x1543 NEW_2
	var_1353_int = 0; var_1354_int = 0; var_1355_object = Obj(); var_1356_object = Obj(); var_1357_object = Obj(); // 0x1545 PushV
	var_1353_int = 5; // 0x1546 MovI
	var_1354_int = var_1340_int; // 0x1547 Mov
	var_1355_object = var_1342_object; // 0x1548 Mov
	var_1356_object = var_1343_object; // 0x1549 Mov
	var_1357_object = var_1344_object; // 0x154a Mov
	func_572(var_1354_int, var_1355_object, var_1356_object, var_1357_object); // 0x154b NEW_2
	var_1358_object = Obj(); var_1359_int = 0; // 0x154d PushV
	var_1358_object = var_1345_object; // 0x154e Mov
	var_1359_int = 0; // 0x154f MovI
	func_255(var_1359_int); // 0x1550 NEW_2
	var_1360_int = 0; var_1361_bool = 0; var_1362_int = 0; // 0x1552 PushV
	var_1360_int = 5; // 0x1553 MovI
	var_1361_bool = 0; // 0x1554 MovB
	var_1362_int = 4; // 0x1555 MovI
	func_820(var_1360_int, var_1361_bool, var_1362_int); // 0x1556 NEW_2
	var_1363_int = 0; var_1364_bool = 0; var_1365_int = 0; // 0x1558 PushV
	var_1363_int = 5; // 0x1559 MovI
	var_1364_bool = 0; // 0x155a MovB
	var_1365_int = 4; // 0x155b MovI
	func_882(var_1363_int, var_1364_bool, var_1365_int); // 0x155c NEW_2
	
Label_5470:
	var_1366_int = 0; var_1367_int = 0; // 0x155e PushV
	var_1366_int = 5; // 0x155f MovI
	var_1367_int = var_1341_int; // 0x1560 Mov
	func_933(var_1366_int, var_1367_int); // 0x1561 NEW_2
	var_1368_int = 0; var_1369_int = 0; var_1370_int = 0; // 0x1563 PushV
	var_1368_int = 5; // 0x1564 MovI
	var_1369_int = var_1340_int; // 0x1565 Mov
	var_1370_int = var_1341_int; // 0x1566 Mov
	func_1847(var_1368_int, var_1369_int, var_1370_int); // 0x1567 NEW_2
	return 0; // 0x1569 Return
}


func_311(var_121_int)
{
	var_123_int = 0; var_124_int = 0; var_125_int = 0; var_126_int = 0; var_127_int = 0; var_128_int = 0; // 0x137 PushV
	var_129_int = 16; // 0x138 PushI
	irand(var_126_int, var_129_int); // 0x139 Func
	var_127_int = 0; // 0x13b MovI
	
Label_316:
	var_130_int = 16; // 0x13c PushI
	var_131_bool = var_127_int < var_130_int; // 0x13d LT
	if(var_131_bool == 0) goto Label_349; // 0x13e JumpB
	var_132_int = var_127_int + var_126_int; // 0x13f Add
	var_133_int = 16; // 0x140 PushI
	var_128_int = var_132_int % var_133_int; // 0x141 Mod2
	var_134_bool = 0; // 0x142 PushV
	var_134_bool = 0; // 0x143 MovB
	var_135_bool = 0; var_136_int = 0; // 0x144 PushV
	var_136_int = var_128_int; // 0x145 Mov
	func_350(var_135_bool, var_136_int); // 0x146 NEW_2
	if(var_135_bool == 0) goto Label_336; // 0x148 JumpB
	var_144_bool = 0; var_145_int = 0; var_146_int = 0; // 0x149 PushV
	var_145_int = var_128_int; // 0x14a Mov
	var_146_int = var_121_int; // 0x14b Mov
	func_14339(var_144_bool, var_145_int, var_146_int); // 0x14c NEW_2
	if(var_144_bool == 0) goto Label_336; // 0x14e JumpB
	var_134_bool = 1; // 0x14f MovB
	
Label_336:
	if(var_134_bool == 0) goto Label_346; // 0x150 JumpB
	var_163_int = 0; // 0x151 PushV
	var_163_int = var_128_int; // 0x152 Mov
	func_392(var_163_int); // 0x153 NEW_2
	var_164_string = "Diseased Region: "; // 0x155 PushS
	var_165_int = var_164_string + var_128_int; // 0x156 Add
	Trace(var_165_int); // 0x157 Func
	return 6; // 0x159 Return
	
Label_346:
	var_166_int = 1; // 0x15a PushI
	var_127_int = var_127_int + var_166_int; // 0x15b Add2
	goto Label_316; // 0x15c Jump
	
Label_349:
	return 6; // 0x15d Return
}


func_11576(var_4930_bool)
{
	var_4933_int = 0; var_4934_string = ""; // 0x2d39 PushV
	var_4934_string = "b12q01KlaraVisit"; // 0x2d3a MovS
	func_106(var_4933_int, var_4934_string); // 0x2d3b NEW_2
	var_4935_int = 0; // 0x2d3d PushI
	var_4936_bool = var_4933_int != var_4935_int; // 0x2d3e Neq
	if(var_4936_bool == 0) goto Label_11586; // 0x2d3f JumpB
	var_4930_bool = 1; // 0x2d40 MovB
	return 0; // 0x2d41 Return
	
Label_11586:
	var_4930_bool = 0; // 0x2d42 MovB
	return 0; // 0x2d43 Return
}


func_9529(var_5623_int, var_5624_float)
{
	var_5625_int = 0; var_5626_int = 0; var_5627_int = 0; var_5628_float = 0; // 0x253a PushV
	var_5626_int = 530554; // 0x253b MovI
	var_5627_int = 530553; // 0x253c MovI
	var_5628_float = var_5624_float; // 0x253d Mov
	func_12022(var_5625_int, var_5626_int, var_5627_int, var_5628_float); // 0x253e NEW_2
	var_5623_int = var_5625_int; // 0x253f Mov
	return 0; // 0x2541 Return
}


func_13631(var_4579_float)
{
	var_4583_object = GlobalVars[16]; // 0x3540 PushGE
	var_4583_object = 0; // 0x3541 SetNull
	GlobalVars[16] = var_4583_object; // 0x3542 PopGE
	var_4584_int = 45058; // 0x3543 PushI
	var_4585_float = 24.0; // 0x3544 PushF
	SetTimeEvent(var_4584_int, var_4585_float); // 0x3545 Func
	var_4586_object = Obj(); var_4587_object = Obj(); // 0x3547 PushV
	var_4588_object = GlobalVars[16]; // 0x3548 PushGE
	var_4586_object = var_4588_object; // 0x3549 Mov
	var_4589_object = GlobalVars[16]; // 0x354b PushGE
	var_4587_object = var_4589_object; // 0x354c Mov
	func_11457(); // 0x354e NEW_2
	var_4600_object = Obj(); var_4601_object = Obj(); // 0x3550 PushV
	var_4602_object = GlobalVars[16]; // 0x3551 PushGE
	var_4600_object = var_4602_object; // 0x3552 Mov
	var_4603_object = GlobalVars[16]; // 0x3554 PushGE
	var_4601_object = var_4603_object; // 0x3555 Mov
	func_11471(); // 0x3557 NEW_2
	var_4606_object = Obj(); var_4607_object = Obj(); // 0x3559 PushV
	var_4608_object = GlobalVars[16]; // 0x355a PushGE
	var_4606_object = var_4608_object; // 0x355b Mov
	var_4609_object = GlobalVars[16]; // 0x355d PushGE
	var_4607_object = var_4609_object; // 0x355e Mov
	func_10318(); // 0x3560 NEW_2
	var_4612_object = Obj(); var_4613_object = Obj(); // 0x3562 PushV
	var_4614_object = GlobalVars[16]; // 0x3563 PushGE
	var_4612_object = var_4614_object; // 0x3564 Mov
	var_4615_object = GlobalVars[16]; // 0x3566 PushGE
	var_4613_object = var_4615_object; // 0x3567 Mov
	func_10186(); // 0x3569 NEW_2
	var_4618_object = Obj(); var_4619_object = Obj(); // 0x356b PushV
	var_4620_object = GlobalVars[16]; // 0x356c PushGE
	var_4618_object = var_4620_object; // 0x356d Mov
	var_4621_object = GlobalVars[16]; // 0x356f PushGE
	var_4619_object = var_4621_object; // 0x3570 Mov
	func_10200(); // 0x3572 NEW_2
	var_4633_object = Obj(); var_4634_object = Obj(); // 0x3574 PushV
	var_4635_object = GlobalVars[16]; // 0x3575 PushGE
	var_4633_object = var_4635_object; // 0x3576 Mov
	var_4636_object = GlobalVars[16]; // 0x3578 PushGE
	var_4634_object = var_4636_object; // 0x3579 Mov
	func_10214(); // 0x357b NEW_2
	var_4639_object = Obj(); var_4640_object = Obj(); // 0x357d PushV
	var_4641_object = GlobalVars[16]; // 0x357e PushGE
	var_4639_object = var_4641_object; // 0x357f Mov
	var_4642_object = GlobalVars[16]; // 0x3581 PushGE
	var_4640_object = var_4642_object; // 0x3582 Mov
	func_10228(); // 0x3584 NEW_2
	var_4645_object = Obj(); var_4646_object = Obj(); // 0x3586 PushV
	var_4647_object = GlobalVars[16]; // 0x3587 PushGE
	var_4645_object = var_4647_object; // 0x3588 Mov
	var_4648_object = GlobalVars[16]; // 0x358a PushGE
	var_4646_object = var_4648_object; // 0x358b Mov
	func_10242(); // 0x358d NEW_2
	var_4649_object = Obj(); var_4650_object = Obj(); // 0x358f PushV
	var_4651_object = GlobalVars[16]; // 0x3590 PushGE
	var_4649_object = var_4651_object; // 0x3591 Mov
	var_4652_object = GlobalVars[16]; // 0x3593 PushGE
	var_4650_object = var_4652_object; // 0x3594 Mov
	func_10246(); // 0x3596 NEW_2
	var_4655_object = Obj(); var_4656_object = Obj(); // 0x3598 PushV
	var_4657_object = GlobalVars[16]; // 0x3599 PushGE
	var_4655_object = var_4657_object; // 0x359a Mov
	var_4658_object = GlobalVars[16]; // 0x359c PushGE
	var_4656_object = var_4658_object; // 0x359d Mov
	func_10260(); // 0x359f NEW_2
	var_4673_object = Obj(); var_4674_object = Obj(); // 0x35a1 PushV
	var_4675_object = GlobalVars[16]; // 0x35a2 PushGE
	var_4673_object = var_4675_object; // 0x35a3 Mov
	var_4676_object = GlobalVars[16]; // 0x35a5 PushGE
	var_4674_object = var_4676_object; // 0x35a6 Mov
	func_10276(); // 0x35a8 NEW_2
	var_4679_object = Obj(); var_4680_object = Obj(); // 0x35aa PushV
	var_4681_object = GlobalVars[16]; // 0x35ab PushGE
	var_4679_object = var_4681_object; // 0x35ac Mov
	var_4682_object = GlobalVars[16]; // 0x35ae PushGE
	var_4680_object = var_4682_object; // 0x35af Mov
	func_11413(); // 0x35b1 NEW_2
	var_4685_object = Obj(); var_4686_object = Obj(); // 0x35b3 PushV
	var_4687_object = GlobalVars[16]; // 0x35b4 PushGE
	var_4685_object = var_4687_object; // 0x35b5 Mov
	var_4688_object = GlobalVars[16]; // 0x35b7 PushGE
	var_4686_object = var_4688_object; // 0x35b8 Mov
	func_11190(); // 0x35ba NEW_2
	var_4712_object = Obj(); var_4713_object = Obj(); // 0x35bc PushV
	var_4714_object = GlobalVars[16]; // 0x35bd PushGE
	var_4712_object = var_4714_object; // 0x35be Mov
	var_4715_object = GlobalVars[16]; // 0x35c0 PushGE
	var_4713_object = var_4715_object; // 0x35c1 Mov
	func_11443(); // 0x35c3 NEW_2
	var_4718_object = Obj(); var_4719_object = Obj(); // 0x35c5 PushV
	var_4720_object = GlobalVars[16]; // 0x35c6 PushGE
	var_4718_object = var_4720_object; // 0x35c7 Mov
	var_4721_object = GlobalVars[16]; // 0x35c9 PushGE
	var_4719_object = var_4721_object; // 0x35ca Mov
	func_10304(); // 0x35cc NEW_2
	var_4724_object = Obj(); var_4725_object = Obj(); // 0x35ce PushV
	var_4726_object = GlobalVars[16]; // 0x35cf PushGE
	var_4724_object = var_4726_object; // 0x35d0 Mov
	var_4727_object = GlobalVars[16]; // 0x35d2 PushGE
	var_4725_object = var_4727_object; // 0x35d3 Mov
	func_11295(); // 0x35d5 NEW_2
	var_4730_object = Obj(); var_4731_object = Obj(); // 0x35d7 PushV
	var_4732_object = GlobalVars[16]; // 0x35d8 PushGE
	var_4730_object = var_4732_object; // 0x35d9 Mov
	var_4733_object = GlobalVars[16]; // 0x35db PushGE
	var_4731_object = var_4733_object; // 0x35dc Mov
	func_10311(); // 0x35de NEW_2
	var_4736_object = Obj(); var_4737_object = Obj(); // 0x35e0 PushV
	var_4738_object = GlobalVars[16]; // 0x35e1 PushGE
	var_4736_object = var_4738_object; // 0x35e2 Mov
	var_4739_object = GlobalVars[16]; // 0x35e4 PushGE
	var_4737_object = var_4739_object; // 0x35e5 Mov
	func_11302(); // 0x35e7 NEW_2
	var_4742_object = Obj(); var_4743_object = Obj(); // 0x35e9 PushV
	var_4744_object = GlobalVars[16]; // 0x35ea PushGE
	var_4742_object = var_4744_object; // 0x35eb Mov
	var_4745_object = GlobalVars[16]; // 0x35ed PushGE
	var_4743_object = var_4745_object; // 0x35ee Mov
	func_11309(); // 0x35f0 NEW_2
	var_4748_object = Obj(); var_4749_object = Obj(); // 0x35f2 PushV
	var_4750_object = GlobalVars[16]; // 0x35f3 PushGE
	var_4748_object = var_4750_object; // 0x35f4 Mov
	var_4751_object = GlobalVars[16]; // 0x35f6 PushGE
	var_4749_object = var_4751_object; // 0x35f7 Mov
	func_11436(); // 0x35f9 NEW_2
	var_4754_int = 0; var_4755_float = 0; // 0x35fb PushV
	var_4755_float = var_4579_float; // 0x35fc Mov
	func_9754(var_4754_int, var_4755_float); // 0x35fd NEW_2
	var_4763_object = Obj(); var_4764_string = ""; // 0x35ff PushV
	var_4764_string = "volonteers_burah"; // 0x3600 MovS
	func_111(var_4763_object, var_4764_string); // 0x3601 NEW_2
	var_4771_object = Obj(); var_4772_string = ""; // 0x3603 PushV
	var_4772_string = "quest_b1_01"; // 0x3604 MovS
	func_111(var_4771_object, var_4772_string); // 0x3605 NEW_2
	var_4773_object = Obj(); var_4774_string = ""; // 0x3607 PushV
	var_4774_string = "quest_b1_05"; // 0x3608 MovS
	func_111(var_4773_object, var_4774_string); // 0x3609 NEW_2
	var_4775_int = 45060; // 0x360b PushI
	var_4776_float = 72.0; // 0x360c PushF
	SetTimeEvent(var_4775_int, var_4776_float); // 0x360d Func
	var_4777_int = 45068; // 0x360f PushI
	var_4778_float = 11.0; // 0x3610 PushF
	SetTimeEvent(var_4777_int, var_4778_float); // 0x3611 Func
	var_4779_int = 45069; // 0x3613 PushI
	var_4780_float = 72.0; // 0x3614 PushF
	SetTimeEvent(var_4779_int, var_4780_float); // 0x3615 Func
	var_4781_int = 45072; // 0x3617 PushI
	var_4782_float = 48.0; // 0x3618 PushF
	SetTimeEvent(var_4781_int, var_4782_float); // 0x3619 Func
	var_4783_int = 45073; // 0x361b PushI
	var_4784_float = 48.0; // 0x361c PushF
	SetTimeEvent(var_4783_int, var_4784_float); // 0x361d Func
	var_4785_int = 45070; // 0x361f PushI
	var_4786_float = 72.0; // 0x3620 PushF
	SetTimeEvent(var_4785_int, var_4786_float); // 0x3621 Func
	var_4787_int = 45071; // 0x3623 PushI
	var_4788_float = 18.0; // 0x3624 PushF
	SetTimeEvent(var_4787_int, var_4788_float); // 0x3625 Func
	var_4789_int = 45086; // 0x3627 PushI
	var_4790_float = 240.0; // 0x3628 PushF
	SetTimeEvent(var_4789_int, var_4790_float); // 0x3629 Func
	var_4791_int = 45087; // 0x362b PushI
	var_4792_float = 264.0; // 0x362c PushF
	SetTimeEvent(var_4791_int, var_4792_float); // 0x362d Func
	var_4793_int = 45088; // 0x362f PushI
	var_4794_float = 223.25; // 0x3630 PushF
	SetTimeEvent(var_4793_int, var_4794_float); // 0x3631 Func
	var_4795_int = 45089; // 0x3633 PushI
	var_4796_float = 247.25; // 0x3634 PushF
	SetTimeEvent(var_4795_int, var_4796_float); // 0x3635 Func
	var_4797_int = 45090; // 0x3637 PushI
	var_4798_float = 281.0; // 0x3638 PushF
	SetTimeEvent(var_4797_int, var_4798_float); // 0x3639 Func
	var_4799_int = 45091; // 0x363b PushI
	var_4800_float = 271.5; // 0x363c PushF
	SetTimeEvent(var_4799_int, var_4800_float); // 0x363d Func
	var_4801_int = 45092; // 0x363f PushI
	var_4802_float = 271.25; // 0x3640 PushF
	SetTimeEvent(var_4801_int, var_4802_float); // 0x3641 Func
	var_4803_int = 45093; // 0x3643 PushI
	var_4804_float = 282.0; // 0x3644 PushF
	SetTimeEvent(var_4803_int, var_4804_float); // 0x3645 Func
	var_4805_int = 45111; // 0x3647 PushI
	var_4806_float = 12.0; // 0x3648 PushF
	SetTimeEvent(var_4805_int, var_4806_float); // 0x3649 Func
	var_4807_int = 45112; // 0x364b PushI
	var_4808_float = 24.05; // 0x364c PushF
	SetTimeEvent(var_4807_int, var_4808_float); // 0x364d Func
	var_4809_int = 45113; // 0x364f PushI
	var_4810_float = 36.0; // 0x3650 PushF
	SetTimeEvent(var_4809_int, var_4810_float); // 0x3651 Func
	var_4811_int = 45067; // 0x3653 PushI
	var_4812_float = 55.25; // 0x3654 PushF
	SetTimeEvent(var_4811_int, var_4812_float); // 0x3655 Func
	var_4813_int = 45066; // 0x3657 PushI
	var_4814_float = 120.0; // 0x3658 PushF
	SetTimeEvent(var_4813_int, var_4814_float); // 0x3659 Func
	var_4815_int = 45079; // 0x365b PushI
	var_4816_float = 168.0; // 0x365c PushF
	SetTimeEvent(var_4815_int, var_4816_float); // 0x365d Func
	var_4817_int = 45080; // 0x365f PushI
	var_4818_float = 168.0; // 0x3660 PushF
	SetTimeEvent(var_4817_int, var_4818_float); // 0x3661 Func
	var_4819_int = 45065; // 0x3663 PushI
	var_4820_float = 96.0; // 0x3664 PushF
	SetTimeEvent(var_4819_int, var_4820_float); // 0x3665 Func
	var_4821_int = 45062; // 0x3667 PushI
	var_4822_float = 192.0; // 0x3668 PushF
	SetTimeEvent(var_4821_int, var_4822_float); // 0x3669 Func
	var_4823_int = 45061; // 0x366b PushI
	var_4824_float = 144.0; // 0x366c PushF
	SetTimeEvent(var_4823_int, var_4824_float); // 0x366d Func
	var_4825_int = 45076; // 0x366f PushI
	var_4826_float = 31.25; // 0x3670 PushF
	SetTimeEvent(var_4825_int, var_4826_float); // 0x3671 Func
	var_4827_int = 45077; // 0x3673 PushI
	var_4828_float = 33.0; // 0x3674 PushF
	SetTimeEvent(var_4827_int, var_4828_float); // 0x3675 Func
	var_4829_int = 45074; // 0x3677 PushI
	var_4830_float = 48.0; // 0x3678 PushF
	SetTimeEvent(var_4829_int, var_4830_float); // 0x3679 Func
	var_4831_int = 45075; // 0x367b PushI
	var_4832_float = 41.0; // 0x367c PushF
	SetTimeEvent(var_4831_int, var_4832_float); // 0x367d Func
	var_4833_int = 45078; // 0x367f PushI
	var_4834_float = 144.0; // 0x3680 PushF
	SetTimeEvent(var_4833_int, var_4834_float); // 0x3681 Func
	var_4835_int = 45114; // 0x3683 PushI
	var_4836_float = 48.05; // 0x3684 PushF
	SetTimeEvent(var_4835_int, var_4836_float); // 0x3685 Func
	var_4837_int = 45115; // 0x3687 PushI
	var_4838_float = 60.0; // 0x3688 PushF
	SetTimeEvent(var_4837_int, var_4838_float); // 0x3689 Func
	var_4839_int = 45116; // 0x368b PushI
	var_4840_float = 58.0; // 0x368c PushF
	SetTimeEvent(var_4839_int, var_4840_float); // 0x368d Func
	var_4841_int = 45117; // 0x368f PushI
	var_4842_float = 48.08; // 0x3690 PushF
	SetTimeEvent(var_4841_int, var_4842_float); // 0x3691 Func
	var_4843_int = 45118; // 0x3693 PushI
	var_4844_float = 72.08; // 0x3694 PushF
	SetTimeEvent(var_4843_int, var_4844_float); // 0x3695 Func
	var_4845_int = 45119; // 0x3697 PushI
	var_4846_float = 96.08; // 0x3698 PushF
	SetTimeEvent(var_4845_int, var_4846_float); // 0x3699 Func
	var_4847_int = 45120; // 0x369b PushI
	var_4848_float = 120.08; // 0x369c PushF
	SetTimeEvent(var_4847_int, var_4848_float); // 0x369d Func
	var_4849_int = 45121; // 0x369f PushI
	var_4850_float = 144.08; // 0x36a0 PushF
	SetTimeEvent(var_4849_int, var_4850_float); // 0x36a1 Func
	var_4851_int = 45122; // 0x36a3 PushI
	var_4852_float = 168.08; // 0x36a4 PushF
	SetTimeEvent(var_4851_int, var_4852_float); // 0x36a5 Func
	var_4853_int = 45123; // 0x36a7 PushI
	var_4854_float = 79.25; // 0x36a8 PushF
	SetTimeEvent(var_4853_int, var_4854_float); // 0x36a9 Func
	var_4855_int = 45124; // 0x36ab PushI
	var_4856_float = 84.0; // 0x36ac PushF
	SetTimeEvent(var_4855_int, var_4856_float); // 0x36ad Func
	var_4857_int = 45125; // 0x36af PushI
	var_4858_float = 96.05; // 0x36b0 PushF
	SetTimeEvent(var_4857_int, var_4858_float); // 0x36b1 Func
	var_4859_int = 45126; // 0x36b3 PushI
	var_4860_float = 103.25; // 0x36b4 PushF
	SetTimeEvent(var_4859_int, var_4860_float); // 0x36b5 Func
	var_4861_int = 45127; // 0x36b7 PushI
	var_4862_float = 120.05; // 0x36b8 PushF
	SetTimeEvent(var_4861_int, var_4862_float); // 0x36b9 Func
	var_4863_int = 45128; // 0x36bb PushI
	var_4864_float = 127.25; // 0x36bc PushF
	SetTimeEvent(var_4863_int, var_4864_float); // 0x36bd Func
	var_4865_int = 45129; // 0x36bf PushI
	var_4866_float = 144.05; // 0x36c0 PushF
	SetTimeEvent(var_4865_int, var_4866_float); // 0x36c1 Func
	var_4867_int = 45130; // 0x36c3 PushI
	var_4868_float = 151.25; // 0x36c4 PushF
	SetTimeEvent(var_4867_int, var_4868_float); // 0x36c5 Func
	var_4869_int = 45131; // 0x36c7 PushI
	var_4870_float = 152.0; // 0x36c8 PushF
	SetTimeEvent(var_4869_int, var_4870_float); // 0x36c9 Func
	var_4871_int = 45132; // 0x36cb PushI
	var_4872_float = 156.0; // 0x36cc PushF
	SetTimeEvent(var_4871_int, var_4872_float); // 0x36cd Func
	var_4873_int = 45133; // 0x36cf PushI
	var_4874_float = 168.05; // 0x36d0 PushF
	SetTimeEvent(var_4873_int, var_4874_float); // 0x36d1 Func
	var_4875_int = 45134; // 0x36d3 PushI
	var_4876_float = 192.05; // 0x36d4 PushF
	SetTimeEvent(var_4875_int, var_4876_float); // 0x36d5 Func
	var_4877_int = 45135; // 0x36d7 PushI
	var_4878_float = 175.25; // 0x36d8 PushF
	SetTimeEvent(var_4877_int, var_4878_float); // 0x36d9 Func
	var_4879_int = 45136; // 0x36db PushI
	var_4880_float = 180.0; // 0x36dc PushF
	SetTimeEvent(var_4879_int, var_4880_float); // 0x36dd Func
	var_4881_int = 45137; // 0x36df PushI
	var_4882_float = 199.25; // 0x36e0 PushF
	SetTimeEvent(var_4881_int, var_4882_float); // 0x36e1 Func
	var_4883_int = 45138; // 0x36e3 PushI
	var_4884_float = 216.05; // 0x36e4 PushF
	SetTimeEvent(var_4883_int, var_4884_float); // 0x36e5 Func
	var_4885_int = 45139; // 0x36e7 PushI
	var_4886_float = 240.05; // 0x36e8 PushF
	SetTimeEvent(var_4885_int, var_4886_float); // 0x36e9 Func
	var_4887_int = 45140; // 0x36eb PushI
	var_4888_float = 263.25; // 0x36ec PushF
	SetTimeEvent(var_4887_int, var_4888_float); // 0x36ed Func
	var_4889_int = 45141; // 0x36ef PushI
	var_4890_float = 263.5; // 0x36f0 PushF
	SetTimeEvent(var_4889_int, var_4890_float); // 0x36f1 Func
	var_4891_int = 45142; // 0x36f3 PushI
	var_4892_float = 264.04999; // 0x36f4 PushF
	SetTimeEvent(var_4891_int, var_4892_float); // 0x36f5 Func
	var_4893_int = 45143; // 0x36f7 PushI
	var_4894_float = 252.0; // 0x36f8 PushF
	SetTimeEvent(var_4893_int, var_4894_float); // 0x36f9 Func
	var_4895_int = 45144; // 0x36fb PushI
	var_4896_float = 108.0; // 0x36fc PushF
	SetTimeEvent(var_4895_int, var_4896_float); // 0x36fd Func
	var_4897_int = 45262; // 0x36ff PushI
	var_4898_float = 168.0; // 0x3700 PushF
	SetTimeEvent(var_4897_int, var_4898_float); // 0x3701 Func
	var_4899_int = 45263; // 0x3703 PushI
	var_4900_float = 192.0; // 0x3704 PushF
	SetTimeEvent(var_4899_int, var_4900_float); // 0x3705 Func
	var_4901_int = 45147; // 0x3707 PushI
	var_4902_float = 210.0; // 0x3708 PushF
	SetTimeEvent(var_4901_int, var_4902_float); // 0x3709 Func
	var_4903_int = 45148; // 0x370b PushI
	var_4904_float = 207.0; // 0x370c PushF
	SetTimeEvent(var_4903_int, var_4904_float); // 0x370d Func
	var_4905_int = 45149; // 0x370f PushI
	var_4906_float = 222.0; // 0x3710 PushF
	SetTimeEvent(var_4905_int, var_4906_float); // 0x3711 Func
	var_4907_int = 45150; // 0x3713 PushI
	var_4908_float = 240.0; // 0x3714 PushF
	SetTimeEvent(var_4907_int, var_4908_float); // 0x3715 Func
	var_4909_int = 45151; // 0x3717 PushI
	var_4910_float = 250.5; // 0x3718 PushF
	SetTimeEvent(var_4909_int, var_4910_float); // 0x3719 Func
	var_4911_int = 45152; // 0x371b PushI
	var_4912_float = 31.02; // 0x371c PushF
	SetTimeEvent(var_4911_int, var_4912_float); // 0x371d Func
	var_4913_int = 45153; // 0x371f PushI
	var_4914_float = 55.02; // 0x3720 PushF
	SetTimeEvent(var_4913_int, var_4914_float); // 0x3721 Func
	var_4915_int = 45154; // 0x3723 PushI
	var_4916_float = 79.02; // 0x3724 PushF
	SetTimeEvent(var_4915_int, var_4916_float); // 0x3725 Func
	var_4917_int = 45155; // 0x3727 PushI
	var_4918_float = 103.02; // 0x3728 PushF
	SetTimeEvent(var_4917_int, var_4918_float); // 0x3729 Func
	var_4919_int = 45156; // 0x372b PushI
	var_4920_float = 127.02; // 0x372c PushF
	SetTimeEvent(var_4919_int, var_4920_float); // 0x372d Func
	var_4921_int = 45157; // 0x372f PushI
	var_4922_float = 151.02; // 0x3730 PushF
	SetTimeEvent(var_4921_int, var_4922_float); // 0x3731 Func
	var_4923_int = 45158; // 0x3733 PushI
	var_4924_float = 175.02; // 0x3734 PushF
	SetTimeEvent(var_4923_int, var_4924_float); // 0x3735 Func
	var_4925_int = 45159; // 0x3737 PushI
	var_4926_float = 199.02; // 0x3738 PushF
	SetTimeEvent(var_4925_int, var_4926_float); // 0x3739 Func
	var_4927_int = 45160; // 0x373b PushI
	var_4928_float = 223.02; // 0x373c PushF
	SetTimeEvent(var_4927_int, var_4928_float); // 0x373d Func
	var_4929_int = 45161; // 0x373f PushI
	var_4930_float = 247.02; // 0x3740 PushF
	SetTimeEvent(var_4929_int, var_4930_float); // 0x3741 Func
	var_4931_int = 45162; // 0x3743 PushI
	var_4932_float = 271.01999; // 0x3744 PushF
	SetTimeEvent(var_4931_int, var_4932_float); // 0x3745 Func
	var_4933_int = 45185; // 0x3747 PushI
	var_4934_float = 63.0; // 0x3748 PushF
	SetTimeEvent(var_4933_int, var_4934_float); // 0x3749 Func
	var_4935_int = 45186; // 0x374b PushI
	var_4936_float = 184.5; // 0x374c PushF
	SetTimeEvent(var_4935_int, var_4936_float); // 0x374d Func
	var_4937_int = 45187; // 0x374f PushI
	var_4938_float = 230.0; // 0x3750 PushF
	SetTimeEvent(var_4937_int, var_4938_float); // 0x3751 Func
	var_4939_int = 45188; // 0x3753 PushI
	var_4940_float = 135.0; // 0x3754 PushF
	SetTimeEvent(var_4939_int, var_4940_float); // 0x3755 Func
	var_4941_int = 45189; // 0x3757 PushI
	var_4942_float = 111.5; // 0x3758 PushF
	SetTimeEvent(var_4941_int, var_4942_float); // 0x3759 Func
	var_4943_int = 45190; // 0x375b PushI
	var_4944_float = 64.0; // 0x375c PushF
	SetTimeEvent(var_4943_int, var_4944_float); // 0x375d Func
	var_4945_int = 45059; // 0x375f PushI
	var_4946_float = 48.0; // 0x3760 PushF
	SetTimeEvent(var_4945_int, var_4946_float); // 0x3761 Func
	var_4947_int = 45081; // 0x3763 PushI
	var_4948_float = 144.0; // 0x3764 PushF
	SetTimeEvent(var_4947_int, var_4948_float); // 0x3765 Func
	var_4949_int = 45082; // 0x3767 PushI
	var_4950_float = 127.0; // 0x3768 PushF
	SetTimeEvent(var_4949_int, var_4950_float); // 0x3769 Func
	var_4951_int = 45083; // 0x376b PushI
	var_4952_float = 192.0; // 0x376c PushF
	SetTimeEvent(var_4951_int, var_4952_float); // 0x376d Func
	var_4953_int = 45084; // 0x376f PushI
	var_4954_float = 192.0; // 0x3770 PushF
	SetTimeEvent(var_4953_int, var_4954_float); // 0x3771 Func
	var_4955_int = 45085; // 0x3773 PushI
	var_4956_float = 216.0; // 0x3774 PushF
	SetTimeEvent(var_4955_int, var_4956_float); // 0x3775 Func
	var_4957_int = 45191; // 0x3777 PushI
	var_4958_float = 64.25; // 0x3778 PushF
	SetTimeEvent(var_4957_int, var_4958_float); // 0x3779 Func
	var_4959_int = 45192; // 0x377b PushI
	var_4960_float = 120.0; // 0x377c PushF
	SetTimeEvent(var_4959_int, var_4960_float); // 0x377d Func
	var_4961_int = 45193; // 0x377f PushI
	var_4962_float = 11.0; // 0x3780 PushF
	SetTimeEvent(var_4961_int, var_4962_float); // 0x3781 Func
	var_4963_int = 45194; // 0x3783 PushI
	var_4964_float = 39.0; // 0x3784 PushF
	SetTimeEvent(var_4963_int, var_4964_float); // 0x3785 Func
	var_4965_int = 45195; // 0x3787 PushI
	var_4966_float = 82.5; // 0x3788 PushF
	SetTimeEvent(var_4965_int, var_4966_float); // 0x3789 Func
	var_4967_int = 45196; // 0x378b PushI
	var_4968_float = 227.5; // 0x378c PushF
	SetTimeEvent(var_4967_int, var_4968_float); // 0x378d Func
	var_4969_int = 45197; // 0x378f PushI
	var_4970_float = 199.33; // 0x3790 PushF
	SetTimeEvent(var_4969_int, var_4970_float); // 0x3791 Func
	var_4971_int = 45198; // 0x3793 PushI
	var_4972_float = 24.0; // 0x3794 PushF
	SetTimeEvent(var_4971_int, var_4972_float); // 0x3795 Func
	var_4973_int = 45234; // 0x3797 PushI
	var_4974_float = 67.5; // 0x3798 PushF
	SetTimeEvent(var_4973_int, var_4974_float); // 0x3799 Func
	var_4975_int = 45235; // 0x379b PushI
	var_4976_float = 90.0; // 0x379c PushF
	SetTimeEvent(var_4975_int, var_4976_float); // 0x379d Func
	var_4977_int = 45237; // 0x379f PushI
	var_4978_float = 178.5; // 0x37a0 PushF
	SetTimeEvent(var_4977_int, var_4978_float); // 0x37a1 Func
	var_4979_int = 45238; // 0x37a3 PushI
	var_4980_float = 205.25; // 0x37a4 PushF
	SetTimeEvent(var_4979_int, var_4980_float); // 0x37a5 Func
	var_4981_int = 45264; // 0x37a7 PushI
	var_4982_float = 216.0; // 0x37a8 PushF
	SetTimeEvent(var_4981_int, var_4982_float); // 0x37a9 Func
	var_4983_int = 45265; // 0x37ab PushI
	var_4984_float = 240.0; // 0x37ac PushF
	SetTimeEvent(var_4983_int, var_4984_float); // 0x37ad Func
	var_4985_int = 45266; // 0x37af PushI
	var_4986_float = 264.0; // 0x37b0 PushF
	SetTimeEvent(var_4985_int, var_4986_float); // 0x37b1 Func
	return 0; // 0x37b3 Return
}


func_9538(var_5634_int, var_5635_float)
{
	var_5636_int = 0; var_5637_int = 0; var_5638_int = 0; var_5639_float = 0; // 0x2543 PushV
	var_5637_int = 530556; // 0x2544 MovI
	var_5638_int = 530555; // 0x2545 MovI
	var_5639_float = var_5635_float; // 0x2546 Mov
	func_12022(var_5636_int, var_5637_int, var_5638_int, var_5639_float); // 0x2547 NEW_2
	var_5634_int = var_5636_int; // 0x2548 Mov
	return 0; // 0x254a Return
}


func_11588(var_5303_bool)
{
	var_5306_int = 0; var_5307_string = ""; // 0x2d45 PushV
	var_5307_string = "b4NotkinMapVisit"; // 0x2d46 MovS
	func_106(var_5306_int, var_5307_string); // 0x2d47 NEW_2
	var_5308_int = 0; // 0x2d49 PushI
	var_5309_bool = var_5306_int != var_5308_int; // 0x2d4a Neq
	if(var_5309_bool == 0) goto Label_11598; // 0x2d4b JumpB
	var_5303_bool = 1; // 0x2d4c MovB
	return 0; // 0x2d4d Return
	
Label_11598:
	var_5303_bool = 0; // 0x2d4e MovB
	return 0; // 0x2d4f Return
}


func_8517()
{
	var_4488_object = Obj(); var_4489_int = 0; var_4490_int = 0; var_4491_object = Obj(); var_4492_bool = 0; var_4493_cvector = CVector(0,0,0); var_4494_cvector = CVector(0,0,0); var_4495_string = ""; var_4496_object = Obj(); var_4497_int = 0; var_4498_int = 0; var_4499_object = Obj(); var_4500_bool = 0; var_4501_cvector = CVector(0,0,0); var_4502_cvector = CVector(0,0,0); var_4503_string = ""; // 0x2145 PushV
	GetMainOutdoorScene(var_4496_object); // 0x2146 Func
	var_4504_object = GlobalVars[7]; // 0x2148 PushGE
	size(var_4497_int); // 0x2149 ObjFunc
	var_4498_int = 0; // 0x214b MovI
	
Label_8524:
	var_4505_bool = var_4498_int < var_4497_int; // 0x214c LT
	if(var_4505_bool == 0) goto Label_8564; // 0x214d JumpB
	var_4506_object = GlobalVars[7]; // 0x214e PushGE
	get(var_4499_object, var_4498_int); // 0x214f ObjFunc
	var_4507_object = var_4499_object; // 0x2151 Push
	if(var_4507_object == 0) goto Label_8532; // 0x2152 JumpB
	goto Label_8561; // 0x2153 Jump
	
Label_8561:
	var_4508_int = 1; // 0x2171 PushI
	var_4498_int = var_4498_int + var_4508_int; // 0x2172 Add2
	goto Label_8524; // 0x2173 Jump
	
Label_8532:
	var_4509_string = "pt_grave_supply"; // 0x2154 PushS
	var_4510_int = 1; // 0x2155 PushI
	var_4511_int = var_4498_int + var_4510_int; // 0x2156 Add
	var_4512_int = var_4509_string + var_4511_int; // 0x2157 Add
	GetLocator(var_4512_int, var_4500_bool, var_4501_cvector, var_4502_cvector); // 0x2158 ObjFunc
	var_4513_bool = var_4500_bool == 0; // 0x215a Not
	if(var_4513_bool == 0) goto Label_8544; // 0x215b JumpB
	var_4514_string = "Grave supply point not found"; // 0x215c PushS
	Trace(var_4514_string); // 0x215d Func
	goto Label_8561; // 0x215f Jump
	
Label_8544:
	var_4515_int = 1; // 0x2160 PushI
	var_4516_int = 1; // 0x2161 PushI
	var_4517_string = "bread"; // 0x2162 PushS
	var_4518_string = "milk"; // 0x2163 PushS
	RandOneOf(var_4503_string, var_4515_int, var_4516_int, var_4517_string, var_4518_string); // 0x2164 Func
	var_4519_string = "scripted"; // 0x2166 PushS
	var_4520_string = "item_"; // 0x2167 PushS
	var_4521_int = var_4520_string + var_4503_string; // 0x2168 Add
	var_4522_string = "_stat.xml"; // 0x2169 PushS
	var_4523_int = var_4521_int + var_4522_string; // 0x216a Add
	AddStationaryActorByType(var_4499_object, var_4501_cvector, var_4502_cvector, var_4519_string, var_4523_int); // 0x216b ObjFunc
	var_4524_object = GlobalVars[7]; // 0x216d PushGE
	set(var_4498_int, var_4499_object); // 0x216e ObjFunc
	var_4499_object = 0; // 0x2170 SetNull
	
Label_8564:
	return 16; // 0x2174 Return
}


func_9547(var_5645_int, var_5646_float)
{
	var_5647_int = 0; var_5648_int = 0; var_5649_int = 0; var_5650_float = 0; // 0x254c PushV
	var_5648_int = 530558; // 0x254d MovI
	var_5649_int = 530557; // 0x254e MovI
	var_5650_float = var_5646_float; // 0x254f Mov
	func_12022(var_5647_int, var_5648_int, var_5649_int, var_5650_float); // 0x2550 NEW_2
	var_5645_int = var_5647_int; // 0x2551 Mov
	return 0; // 0x2553 Return
}


func_6477(var_1669_int, var_1670_int, var_1671_object, var_1672_object, var_1673_object, var_1674_object)
{
	var_1675_int = 0; // 0x194e PushI
	var_1676_bool = var_1670_int == var_1675_int; // 0x194f Eq
	if(var_1676_bool == 0) goto Label_6517; // 0x1950 JumpB
	var_1677_int = 0; var_1678_bool = 0; // 0x1951 PushV
	var_1677_int = 11; // 0x1952 MovI
	var_1678_bool = 0; // 0x1953 MovB
	func_746(var_1677_int, var_1678_bool); // 0x1954 NEW_2
	var_1679_int = 0; var_1680_bool = 0; var_1681_int = 0; // 0x1956 PushV
	var_1679_int = 11; // 0x1957 MovI
	var_1680_bool = 0; // 0x1958 MovB
	var_1681_int = 1; // 0x1959 MovI
	func_763(var_1679_int, var_1680_bool, var_1681_int); // 0x195a NEW_2
	var_1682_int = 0; var_1683_int = 0; var_1684_object = Obj(); var_1685_object = Obj(); var_1686_object = Obj(); // 0x195c PushV
	var_1682_int = 11; // 0x195d MovI
	var_1683_int = var_1669_int; // 0x195e Mov
	var_1684_object = var_1671_object; // 0x195f Mov
	var_1685_object = var_1672_object; // 0x1960 Mov
	var_1686_object = var_1673_object; // 0x1961 Mov
	func_572(var_1683_int, var_1684_object, var_1685_object, var_1686_object); // 0x1962 NEW_2
	var_1687_object = Obj(); var_1688_int = 0; // 0x1964 PushV
	var_1687_object = var_1674_object; // 0x1965 Mov
	var_1688_int = 0; // 0x1966 MovI
	func_255(var_1688_int); // 0x1967 NEW_2
	var_1689_int = 0; var_1690_bool = 0; var_1691_int = 0; // 0x1969 PushV
	var_1689_int = 11; // 0x196a MovI
	var_1690_bool = 0; // 0x196b MovB
	var_1691_int = 5; // 0x196c MovI
	func_820(var_1689_int, var_1690_bool, var_1691_int); // 0x196d NEW_2
	var_1692_int = 0; var_1693_bool = 0; var_1694_int = 0; // 0x196f PushV
	var_1692_int = 11; // 0x1970 MovI
	var_1693_bool = 0; // 0x1971 MovB
	var_1694_int = 5; // 0x1972 MovI
	func_882(var_1692_int, var_1693_bool, var_1694_int); // 0x1973 NEW_2
	
Label_6517:
	var_1695_int = 0; var_1696_int = 0; // 0x1975 PushV
	var_1695_int = 11; // 0x1976 MovI
	var_1696_int = var_1670_int; // 0x1977 Mov
	func_933(var_1695_int, var_1696_int); // 0x1978 NEW_2
	var_1697_int = 0; var_1698_int = 0; var_1699_int = 0; // 0x197a PushV
	var_1697_int = 11; // 0x197b MovI
	var_1698_int = var_1669_int; // 0x197c Mov
	var_1699_int = var_1670_int; // 0x197d Mov
	func_1574(var_1697_int, var_1698_int, var_1699_int); // 0x197e NEW_2
	return 0; // 0x1980 Return
}


func_11600(var_5350_bool)
{
	var_5353_int = 0; var_5354_string = ""; // 0x2d51 PushV
	var_5354_string = "b6q01"; // 0x2d52 MovS
	func_106(var_5353_int, var_5354_string); // 0x2d53 NEW_2
	var_5355_int = 0; // 0x2d55 PushI
	var_5356_bool = var_5353_int == var_5355_int; // 0x2d56 Eq
	if(var_5356_bool == 0) goto Label_11610; // 0x2d57 JumpB
	var_5350_bool = 1; // 0x2d58 MovB
	return 0; // 0x2d59 Return
	
Label_11610:
	var_5350_bool = 0; // 0x2d5a MovB
	return 0; // 0x2d5b Return
}


func_9556(var_5656_int, var_5657_float)
{
	var_5658_int = 0; var_5659_int = 0; var_5660_int = 0; var_5661_float = 0; // 0x2555 PushV
	var_5659_int = 530560; // 0x2556 MovI
	var_5660_int = 530559; // 0x2557 MovI
	var_5661_float = var_5657_float; // 0x2558 Mov
	func_12022(var_5658_int, var_5659_int, var_5660_int, var_5661_float); // 0x2559 NEW_2
	var_5656_int = var_5658_int; // 0x255a Mov
	return 0; // 0x255c Return
}


func_4441(var_3185_int, var_3186_int, var_3187_object, var_3188_object, var_3189_object, var_3190_object)
{
	var_3191_int = 0; // 0x115a PushI
	var_3192_bool = var_3186_int == var_3191_int; // 0x115b Eq
	if(var_3192_bool == 0) goto Label_4481; // 0x115c JumpB
	var_3193_int = 0; var_3194_bool = 0; // 0x115d PushV
	var_3193_int = 0; // 0x115e MovI
	var_3194_bool = 0; // 0x115f MovB
	func_746(var_3193_int, var_3194_bool); // 0x1160 NEW_2
	var_3195_int = 0; var_3196_bool = 0; var_3197_int = 0; // 0x1162 PushV
	var_3195_int = 0; // 0x1163 MovI
	var_3196_bool = 0; // 0x1164 MovB
	var_3197_int = 1; // 0x1165 MovI
	func_763(var_3195_int, var_3196_bool, var_3197_int); // 0x1166 NEW_2
	var_3198_int = 0; var_3199_int = 0; var_3200_object = Obj(); var_3201_object = Obj(); var_3202_object = Obj(); // 0x1168 PushV
	var_3198_int = 0; // 0x1169 MovI
	var_3199_int = var_3185_int; // 0x116a Mov
	var_3200_object = var_3187_object; // 0x116b Mov
	var_3201_object = var_3188_object; // 0x116c Mov
	var_3202_object = var_3189_object; // 0x116d Mov
	func_670(var_3198_int, var_3199_int, var_3200_object, var_3201_object, var_3202_object); // 0x116e NEW_2
	var_3237_object = Obj(); var_3238_int = 0; // 0x1170 PushV
	var_3237_object = var_3190_object; // 0x1171 Mov
	var_3238_int = 2; // 0x1172 MovI
	func_255(var_3238_int); // 0x1173 NEW_2
	var_3239_int = 0; var_3240_bool = 0; var_3241_int = 0; // 0x1175 PushV
	var_3239_int = 0; // 0x1176 MovI
	var_3240_bool = 0; // 0x1177 MovB
	var_3241_int = 4; // 0x1178 MovI
	func_820(var_3239_int, var_3240_bool, var_3241_int); // 0x1179 NEW_2
	var_3242_int = 0; var_3243_bool = 0; var_3244_int = 0; // 0x117b PushV
	var_3242_int = 0; // 0x117c MovI
	var_3243_bool = 1; // 0x117d MovB
	var_3244_int = 4; // 0x117e MovI
	func_882(var_3242_int, var_3243_bool, var_3244_int); // 0x117f NEW_2
	
Label_4481:
	var_3245_int = 0; var_3246_bool = 0; // 0x1181 PushV
	var_3245_int = 0; // 0x1182 MovI
	var_3246_bool = 0; // 0x1183 MovB
	func_729(var_3245_int, var_3246_bool); // 0x1184 NEW_2
	var_3247_int = 0; var_3248_int = 0; var_3249_int = 0; // 0x1186 PushV
	var_3247_int = 0; // 0x1187 MovI
	var_3248_int = var_3185_int; // 0x1188 Mov
	var_3249_int = var_3186_int; // 0x1189 Mov
	func_3985(var_3247_int, var_3248_int, var_3249_int); // 0x118a NEW_2
	return 0; // 0x118c Return
}


func_11612(var_5560_bool)
{
	var_5563_int = 0; var_5564_string = ""; // 0x2d5d PushV
	var_5564_string = "b9q03AglajaTalk"; // 0x2d5e MovS
	func_106(var_5563_int, var_5564_string); // 0x2d5f NEW_2
	var_5565_int = 0; // 0x2d61 PushI
	var_5566_bool = var_5563_int != var_5565_int; // 0x2d62 Neq
	if(var_5566_bool == 0) goto Label_11622; // 0x2d63 JumpB
	var_5560_bool = 1; // 0x2d64 MovB
	return 0; // 0x2d65 Return
	
Label_11622:
	var_5560_bool = 0; // 0x2d66 MovB
	return 0; // 0x2d67 Return
}


func_3421(var_4156_int, var_4157_int, var_4158_int)
{
	var_4159_int = 0; var_4160_int = 0; var_4161_int = 0; var_4162_int = 0; var_4163_int = 0; var_4164_int = 0; var_4165_int = 0; var_4166_int = 0; // 0xd5d PushV
	var_4167_bool = 0; // 0xd5e PushV
	var_4167_bool = 0; // 0xd5f MovB
	var_4168_int = 8; // 0xd60 PushI
	var_4169_bool = var_4158_int > var_4168_int; // 0xd61 GT
	if(var_4169_bool == 0) goto Label_3431; // 0xd62 JumpB
	var_4170_int = 21; // 0xd63 PushI
	var_4171_bool = var_4158_int < var_4170_int; // 0xd64 LT
	if(var_4171_bool == 0) goto Label_3431; // 0xd65 JumpB
	var_4167_bool = 1; // 0xd66 MovB
	
Label_3431:
	if(var_4167_bool == 0) goto Label_3508; // 0xd67 JumpB
	var_4172_int = 0; var_4173_string = ""; var_4174_string = ""; var_4175_int = 0; // 0xd68 PushV
	var_4172_int = var_4156_int; // 0xd69 Mov
	var_4173_string = "pers_rat"; // 0xd6a MovS
	var_4174_string = "rat.xml"; // 0xd6b MovS
	var_4175_int = 3; // 0xd6c MovI
	func_453(var_4172_int, var_4173_string, var_4174_string, var_4175_int); // 0xd6d NEW_2
	var_4176_int = 0; var_4177_string = ""; var_4178_string = ""; var_4179_int = 0; // 0xd6f PushV
	var_4176_int = var_4156_int; // 0xd70 Mov
	var_4177_string = "pers_alkash"; // 0xd71 MovS
	var_4178_string = "alkash.xml"; // 0xd72 MovS
	var_4179_int = 2; // 0xd73 MovI
	func_453(var_4176_int, var_4177_string, var_4178_string, var_4179_int); // 0xd74 NEW_2
	var_4180_int = 0; var_4181_string = ""; var_4182_string = ""; var_4183_int = 0; // 0xd76 PushV
	var_4180_int = var_4156_int; // 0xd77 Mov
	var_4181_string = "pers_dohodyaga"; // 0xd78 MovS
	var_4182_string = "dohodyaga.xml"; // 0xd79 MovS
	var_4183_int = 1; // 0xd7a MovI
	func_453(var_4180_int, var_4181_string, var_4182_string, var_4183_int); // 0xd7b NEW_2
	var_4184_int = 2; // 0xd7d PushI
	var_4185_float = 0; var_4186_int = 0; // 0xd7e PushV
	var_4186_int = var_4157_int; // 0xd7f Mov
	func_1115(var_4185_float, var_4186_int); // 0xd80 NEW_2
	var_4163_int = var_4184_int * var_4185_float; // 0xd82 Mult2
	var_4187_int = var_4163_int; // 0xd83 Push
	if(var_4187_int == 0) goto Label_3468; // 0xd84 JumpB
	var_4188_int = 0; var_4189_string = ""; var_4190_string = ""; var_4191_int = 0; // 0xd85 PushV
	var_4188_int = var_4156_int; // 0xd86 Mov
	var_4189_string = "pers_grabitel"; // 0xd87 MovS
	var_4190_string = "grabitel.xml"; // 0xd88 MovS
	var_4191_int = var_4163_int; // 0xd89 Mov
	func_453(var_4188_int, var_4189_string, var_4190_string, var_4191_int); // 0xd8a NEW_2
	
Label_3468:
	var_4192_int = 1; // 0xd8c PushI
	var_4193_int = var_4157_int + var_4192_int; // 0xd8d Add
	var_4194_int = 2; // 0xd8e PushI
	var_4195_bool = var_4193_int >= var_4194_int; // 0xd8f GE
	if(var_4195_bool == 0) goto Label_3492; // 0xd90 JumpB
	var_4196_int = 0; var_4197_string = ""; var_4198_string = ""; var_4199_int = 0; // 0xd91 PushV
	var_4196_int = var_4156_int; // 0xd92 Mov
	var_4197_string = "pers_patrool"; // 0xd93 MovS
	var_4198_string = "patrol.xml"; // 0xd94 MovS
	var_4199_int = 2; // 0xd95 MovI
	func_453(var_4196_int, var_4197_string, var_4198_string, var_4199_int); // 0xd96 NEW_2
	var_4200_bool = 0; var_4201_int = 0; // 0xd98 PushV
	var_4201_int = var_4157_int; // 0xd99 Mov
	func_1322(var_4200_bool, var_4201_int); // 0xd9a NEW_2
	if(var_4200_bool == 0) goto Label_3492; // 0xd9c JumpB
	var_4202_int = 0; var_4203_string = ""; var_4204_string = ""; var_4205_int = 0; // 0xd9d PushV
	var_4202_int = var_4156_int; // 0xd9e Mov
	var_4203_string = "pers_soldat_hand"; // 0xd9f MovS
	var_4204_string = "soldier_patrol.xml"; // 0xda0 MovS
	var_4205_int = 1; // 0xda1 MovI
	func_453(var_4202_int, var_4203_string, var_4204_string, var_4205_int); // 0xda2 NEW_2
	
Label_3492:
	var_4206_int = 1; // 0xda4 PushI
	var_4207_float = 0; var_4208_int = 0; // 0xda5 PushV
	var_4208_int = var_4157_int; // 0xda6 Mov
	func_1205(var_4207_float, var_4208_int); // 0xda7 NEW_2
	var_4164_int = var_4206_int * var_4207_float; // 0xda9 Mult2
	var_4209_int = var_4164_int; // 0xdaa Push
	if(var_4209_int == 0) goto Label_3507; // 0xdab JumpB
	var_4210_int = 0; var_4211_string = ""; var_4212_string = ""; var_4213_int = 0; // 0xdac PushV
	var_4210_int = var_4156_int; // 0xdad Mov
	var_4211_string = "pers_bomber"; // 0xdae MovS
	var_4212_string = "bomber.xml"; // 0xdaf MovS
	var_4213_int = var_4164_int; // 0xdb0 Mov
	func_453(var_4210_int, var_4211_string, var_4212_string, var_4213_int); // 0xdb1 NEW_2
	
Label_3507:
	goto Label_3583; // 0xdb3 Jump
	
Label_3583:
	var_4214_bool = 0; var_4215_int = 0; var_4216_int = 0; // 0xdff PushV
	var_4215_int = var_4157_int; // 0xe00 Mov
	var_4216_int = var_4158_int; // 0xe01 Mov
	func_1295(var_4214_bool, var_4215_int, var_4216_int); // 0xe02 NEW_2
	if(var_4214_bool == 0) goto Label_3596; // 0xe04 JumpB
	var_4217_int = 0; var_4218_string = ""; var_4219_string = ""; var_4220_int = 0; // 0xe05 PushV
	var_4217_int = var_4156_int; // 0xe06 Mov
	var_4218_string = "pers_soldat"; // 0xe07 MovS
	var_4219_string = "soldier_marauder.xml"; // 0xe08 MovS
	var_4220_int = 2; // 0xe09 MovI
	func_453(var_4217_int, var_4218_string, var_4219_string, var_4220_int); // 0xe0a NEW_2
	
Label_3596:
	var_4221_bool = 0; var_4222_int = 0; // 0xe0c PushV
	var_4222_int = var_4157_int; // 0xe0d Mov
	func_1322(var_4221_bool, var_4222_int); // 0xe0e NEW_2
	if(var_4221_bool == 0) goto Label_3608; // 0xe10 JumpB
	var_4223_int = 0; var_4224_string = ""; var_4225_string = ""; var_4226_int = 0; // 0xe11 PushV
	var_4223_int = var_4156_int; // 0xe12 Mov
	var_4224_string = "pers_sanitar"; // 0xe13 MovS
	var_4225_string = "sanitar.xml"; // 0xe14 MovS
	var_4226_int = 1; // 0xe15 MovI
	func_453(var_4223_int, var_4224_string, var_4225_string, var_4226_int); // 0xe16 NEW_2
	
Label_3608:
	return 8; // 0xe18 Return
	
Label_3508:
	var_4227_int = 0; var_4228_string = ""; var_4229_string = ""; var_4230_int = 0; // 0xdb4 PushV
	var_4227_int = var_4156_int; // 0xdb5 Mov
	var_4228_string = "pers_rat"; // 0xdb6 MovS
	var_4229_string = "rat.xml"; // 0xdb7 MovS
	var_4230_int = 5; // 0xdb8 MovI
	func_453(var_4227_int, var_4228_string, var_4229_string, var_4230_int); // 0xdb9 NEW_2
	var_4231_int = 0; var_4232_string = ""; var_4233_string = ""; var_4234_int = 0; // 0xdbb PushV
	var_4231_int = var_4156_int; // 0xdbc Mov
	var_4232_string = "pers_alkash"; // 0xdbd MovS
	var_4233_string = "alkash.xml"; // 0xdbe MovS
	var_4234_int = 1; // 0xdbf MovI
	func_453(var_4231_int, var_4232_string, var_4233_string, var_4234_int); // 0xdc0 NEW_2
	var_4235_int = 1; // 0xdc2 PushI
	var_4236_int = var_4157_int + var_4235_int; // 0xdc3 Add
	var_4237_int = 2; // 0xdc4 PushI
	var_4238_bool = var_4236_int >= var_4237_int; // 0xdc5 GE
	if(var_4238_bool == 0) goto Label_3546; // 0xdc6 JumpB
	var_4239_int = 0; var_4240_string = ""; var_4241_string = ""; var_4242_int = 0; // 0xdc7 PushV
	var_4239_int = var_4156_int; // 0xdc8 Mov
	var_4240_string = "pers_patrool"; // 0xdc9 MovS
	var_4241_string = "patrol.xml"; // 0xdca MovS
	var_4242_int = 1; // 0xdcb MovI
	func_453(var_4239_int, var_4240_string, var_4241_string, var_4242_int); // 0xdcc NEW_2
	var_4243_bool = 0; var_4244_int = 0; // 0xdce PushV
	var_4244_int = var_4157_int; // 0xdcf Mov
	func_1322(var_4243_bool, var_4244_int); // 0xdd0 NEW_2
	if(var_4243_bool == 0) goto Label_3546; // 0xdd2 JumpB
	var_4245_int = 0; var_4246_string = ""; var_4247_string = ""; var_4248_int = 0; // 0xdd3 PushV
	var_4245_int = var_4156_int; // 0xdd4 Mov
	var_4246_string = "pers_soldat_hand"; // 0xdd5 MovS
	var_4247_string = "soldier_patrol.xml"; // 0xdd6 MovS
	var_4248_int = 1; // 0xdd7 MovI
	func_453(var_4245_int, var_4246_string, var_4247_string, var_4248_int); // 0xdd8 NEW_2
	
Label_3546:
	var_4249_int = 0; var_4250_string = ""; var_4251_string = ""; var_4252_int = 0; // 0xdda PushV
	var_4249_int = var_4156_int; // 0xddb Mov
	var_4250_string = "pers_rat"; // 0xddc MovS
	var_4251_string = "rat.xml"; // 0xddd MovS
	var_4252_int = 2; // 0xdde MovI
	func_453(var_4249_int, var_4250_string, var_4251_string, var_4252_int); // 0xddf NEW_2
	var_4253_int = 3; // 0xde1 PushI
	var_4254_float = 0; var_4255_int = 0; // 0xde2 PushV
	var_4255_int = var_4157_int; // 0xde3 Mov
	func_1115(var_4254_float, var_4255_int); // 0xde4 NEW_2
	var_4165_int = var_4253_int * var_4254_float; // 0xde6 Mult2
	var_4256_int = var_4165_int; // 0xde7 Push
	if(var_4256_int == 0) goto Label_3568; // 0xde8 JumpB
	var_4257_int = 0; var_4258_string = ""; var_4259_string = ""; var_4260_int = 0; // 0xde9 PushV
	var_4257_int = var_4156_int; // 0xdea Mov
	var_4258_string = "pers_grabitel"; // 0xdeb MovS
	var_4259_string = "grabitel.xml"; // 0xdec MovS
	var_4260_int = var_4165_int; // 0xded Mov
	func_453(var_4257_int, var_4258_string, var_4259_string, var_4260_int); // 0xdee NEW_2
	
Label_3568:
	var_4261_int = 1; // 0xdf0 PushI
	var_4262_float = 0; var_4263_int = 0; // 0xdf1 PushV
	var_4263_int = var_4157_int; // 0xdf2 Mov
	func_1205(var_4262_float, var_4263_int); // 0xdf3 NEW_2
	var_4166_int = var_4261_int * var_4262_float; // 0xdf5 Mult2
	var_4264_int = var_4166_int; // 0xdf6 Push
	if(var_4264_int == 0) goto Label_3583; // 0xdf7 JumpB
	var_4265_int = 0; var_4266_string = ""; var_4267_string = ""; var_4268_int = 0; // 0xdf8 PushV
	var_4265_int = var_4156_int; // 0xdf9 Mov
	var_4266_string = "pers_bomber"; // 0xdfa MovS
	var_4267_string = "bomber.xml"; // 0xdfb MovS
	var_4268_int = var_4166_int; // 0xdfc Mov
	func_453(var_4265_int, var_4266_string, var_4267_string, var_4268_int); // 0xdfd NEW_2
}


func_350(var_491_bool, var_492_int)
{
	var_493_int = 0; var_494_int = 0; // 0x15e PushV
	var_495_string = ""; var_496_int = 0; // 0x15f PushV
	var_496_int = var_492_int; // 0x160 Mov
	func_249(var_495_string, var_496_int); // 0x161 NEW_2
	GetVariable(var_495_string, var_494_int); // 0x163 Func
	var_497_int = 3; // 0x165 PushI
	var_498_int = var_494_int & var_497_int; // 0x166 And
	var_499_int = 0; // 0x167 PushI
	var_491_bool = var_498_int == var_499_int; // 0x168 Eq2
	return 2; // 0x169 Return
}


func_9565(var_5667_int, var_5668_float)
{
	var_5669_int = 0; var_5670_int = 0; var_5671_int = 0; var_5672_float = 0; // 0x255e PushV
	var_5670_int = 530562; // 0x255f MovI
	var_5671_int = 530561; // 0x2560 MovI
	var_5672_float = var_5668_float; // 0x2561 Mov
	func_12022(var_5669_int, var_5670_int, var_5671_int, var_5672_float); // 0x2562 NEW_2
	var_5667_int = var_5669_int; // 0x2563 Mov
	return 0; // 0x2565 Return
}


func_9574(var_5678_int, var_5679_float)
{
	var_5680_int = 0; var_5681_int = 0; var_5682_int = 0; var_5683_float = 0; // 0x2567 PushV
	var_5681_int = 530564; // 0x2568 MovI
	var_5682_int = 530563; // 0x2569 MovI
	var_5683_float = var_5679_float; // 0x256a Mov
	func_12022(var_5680_int, var_5681_int, var_5682_int, var_5683_float); // 0x256b NEW_2
	var_5678_int = var_5680_int; // 0x256c Mov
	return 0; // 0x256e Return
}


func_11624(var_5568_bool)
{
	var_5571_int = 0; var_5572_string = ""; // 0x2d69 PushV
	var_5572_string = "b9q03"; // 0x2d6a MovS
	func_106(var_5571_int, var_5572_string); // 0x2d6b NEW_2
	var_5573_int = 0; // 0x2d6d PushI
	var_5574_bool = var_5571_int == var_5573_int; // 0x2d6e Eq
	if(var_5574_bool == 0) goto Label_11634; // 0x2d6f JumpB
	var_5568_bool = 1; // 0x2d70 MovB
	return 0; // 0x2d71 Return
	
Label_11634:
	var_5568_bool = 0; // 0x2d72 MovB
	return 0; // 0x2d73 Return
}


func_362(var_81_int)
{
	var_82_int = 0; var_83_int = 0; var_84_int = 0; var_85_int = 0; // 0x16a PushV
	var_86_string = ""; var_87_int = 0; // 0x16b PushV
	var_87_int = var_81_int; // 0x16c Mov
	func_249(var_86_string, var_87_int); // 0x16d NEW_2
	GetVariable(var_86_string, var_84_int); // 0x16f Func
	var_88_int = 252; // 0x171 PushI
	var_89_int = var_84_int & var_88_int; // 0x172 And
	var_90_int = 0; // 0x173 PushI
	var_85_int = var_89_int | var_90_int; // 0x174 Or2
	var_91_string = ""; var_92_int = 0; // 0x175 PushV
	var_92_int = var_81_int; // 0x176 Mov
	func_249(var_91_string, var_92_int); // 0x177 NEW_2
	SetVariable(var_91_string, var_85_int); // 0x179 Func
	return 4; // 0x17b Return
}


func_5482(var_2618_int, var_2619_int, var_2620_object, var_2621_object, var_2622_object, var_2623_object)
{
	var_2624_int = 0; // 0x156b PushI
	var_2625_bool = var_2619_int == var_2624_int; // 0x156c Eq
	if(var_2625_bool == 0) goto Label_5522; // 0x156d JumpB
	var_2626_int = 0; var_2627_bool = 0; // 0x156e PushV
	var_2626_int = 5; // 0x156f MovI
	var_2627_bool = 1; // 0x1570 MovB
	func_746(var_2626_int, var_2627_bool); // 0x1571 NEW_2
	var_2628_int = 0; var_2629_bool = 0; var_2630_int = 0; // 0x1573 PushV
	var_2628_int = 5; // 0x1574 MovI
	var_2629_bool = 1; // 0x1575 MovB
	var_2630_int = 1; // 0x1576 MovI
	func_763(var_2628_int, var_2629_bool, var_2630_int); // 0x1577 NEW_2
	var_2631_int = 0; var_2632_int = 0; var_2633_object = Obj(); var_2634_object = Obj(); var_2635_object = Obj(); // 0x1579 PushV
	var_2631_int = 5; // 0x157a MovI
	var_2632_int = var_2618_int; // 0x157b Mov
	var_2633_object = var_2620_object; // 0x157c Mov
	var_2634_object = var_2621_object; // 0x157d Mov
	var_2635_object = var_2622_object; // 0x157e Mov
	func_591(var_2631_int, var_2632_int, var_2633_object, var_2634_object, var_2635_object); // 0x157f NEW_2
	var_2636_object = Obj(); var_2637_int = 0; // 0x1581 PushV
	var_2636_object = var_2623_object; // 0x1582 Mov
	var_2637_int = 1; // 0x1583 MovI
	func_255(var_2637_int); // 0x1584 NEW_2
	var_2638_int = 0; var_2639_bool = 0; var_2640_int = 0; // 0x1586 PushV
	var_2638_int = 5; // 0x1587 MovI
	var_2639_bool = 1; // 0x1588 MovB
	var_2640_int = 4; // 0x1589 MovI
	func_820(var_2638_int, var_2639_bool, var_2640_int); // 0x158a NEW_2
	var_2641_int = 0; var_2642_bool = 0; var_2643_int = 0; // 0x158c PushV
	var_2641_int = 5; // 0x158d MovI
	var_2642_bool = 0; // 0x158e MovB
	var_2643_int = 4; // 0x158f MovI
	func_882(var_2641_int, var_2642_bool, var_2643_int); // 0x1590 NEW_2
	
Label_5522:
	var_2644_int = 0; var_2645_bool = 0; // 0x1592 PushV
	var_2644_int = 5; // 0x1593 MovI
	var_2645_bool = 0; // 0x1594 MovB
	func_729(var_2644_int, var_2645_bool); // 0x1595 NEW_2
	var_2646_int = 0; var_2647_int = 0; var_2648_int = 0; // 0x1597 PushV
	var_2646_int = 5; // 0x1598 MovI
	var_2647_int = var_2618_int; // 0x1599 Mov
	var_2648_int = var_2619_int; // 0x159a Mov
	func_2894(var_2646_int, var_2647_int, var_2648_int); // 0x159b NEW_2
	return 0; // 0x159d Return
}


func_9583(var_5689_int, var_5690_float)
{
	var_5691_int = 0; var_5692_int = 0; var_5693_int = 0; var_5694_float = 0; // 0x2570 PushV
	var_5692_int = 530566; // 0x2571 MovI
	var_5693_int = 530565; // 0x2572 MovI
	var_5694_float = var_5690_float; // 0x2573 Mov
	func_12022(var_5691_int, var_5692_int, var_5693_int, var_5694_float); // 0x2574 NEW_2
	var_5689_int = var_5691_int; // 0x2575 Mov
	return 0; // 0x2577 Return
}


func_11636(var_5575_bool)
{
	var_5578_int = 0; var_5579_string = ""; // 0x2d75 PushV
	var_5579_string = "b9q03BadInit"; // 0x2d76 MovS
	func_106(var_5578_int, var_5579_string); // 0x2d77 NEW_2
	var_5580_int = 0; // 0x2d79 PushI
	var_5581_bool = var_5578_int != var_5580_int; // 0x2d7a Neq
	if(var_5581_bool == 0) goto Label_11646; // 0x2d7b JumpB
	var_5575_bool = 1; // 0x2d7c MovB
	return 0; // 0x2d7d Return
	
Label_11646:
	var_5575_bool = 0; // 0x2d7e MovB
	return 0; // 0x2d7f Return
}


func_8566()
{
	var_4334_object = Obj(); var_4335_object = Obj(); var_4336_object = Obj(); var_4337_object = Obj(); // 0x2176 PushV
	GetMainOutdoorScene(var_4336_object); // 0x2177 Func
	var_4338_string = "big_gun"; // 0x2179 PushS
	var_4339_string = "big_gun.bin"; // 0x217a PushS
	var_4340_cvector = CVector(0.0, 0.0, 0.0); // 0x217b PushVec
	AddScriptedActor(var_4337_object, var_4338_string, var_4339_string, var_4336_object, var_4340_cvector); // 0x217c Func
	var_4341_string = "vagon_martira"; // 0x217e PushS
	var_4342_string = "big_gun.bin"; // 0x217f PushS
	var_4343_cvector = CVector(0.0, 0.0, 0.0); // 0x2180 PushVec
	AddScriptedActor(var_4337_object, var_4341_string, var_4342_string, var_4336_object, var_4343_cvector); // 0x2181 Func
	var_4344_string = "d9q01_trigger_wagon"; // 0x2183 PushS
	var_4345_string = "quest_d9_01_wagon.bin"; // 0x2184 PushS
	var_4346_cvector = CVector(0.0, 0.0, 0.0); // 0x2185 PushVec
	AddScriptedActor(var_4337_object, var_4344_string, var_4345_string, var_4336_object, var_4346_cvector); // 0x2186 Func
	return 4; // 0x2188 Return
}


func_10615()
{
	var_4643_object = Obj(); var_4644_object = Obj(); var_4645_object = Obj(); var_4646_object = Obj(); // 0x2977 PushV
	var_4647_object = Obj(); // 0x2978 PushV
	func_12030(var_4647_object); // 0x2979 NEW_2
	var_4645_object = var_4647_object; // 0x297a Mov
	var_4648_string = "b3q01BigVladGotoOspina"; // 0x297c PushS
	FindMark(var_4646_object, var_4648_string); // 0x297d ObjFunc
	var_4649_object = var_4646_object; // 0x297f Push
	if(var_4649_object == 0) goto Label_10627; // 0x2980 JumpB
	Remove(); // 0x2981 ObjFunc
	
Label_10627:
	var_4650_string = "b3q01ButcherGotoBigVlad"; // 0x2983 PushS
	FindMark(var_4646_object, var_4650_string); // 0x2984 ObjFunc
	var_4651_object = var_4646_object; // 0x2986 Push
	if(var_4651_object == 0) goto Label_10634; // 0x2987 JumpB
	Remove(); // 0x2988 ObjFunc
	
Label_10634:
	var_4652_string = "b3q01OspinaGotoButcher"; // 0x298a PushS
	FindMark(var_4646_object, var_4652_string); // 0x298b ObjFunc
	var_4653_object = var_4646_object; // 0x298d Push
	if(var_4653_object == 0) goto Label_10641; // 0x298e JumpB
	Remove(); // 0x298f ObjFunc
	
Label_10641:
	var_4654_string = "b3q02GrifGotoDanko"; // 0x2991 PushS
	FindMark(var_4646_object, var_4654_string); // 0x2992 ObjFunc
	var_4655_object = var_4646_object; // 0x2994 Push
	if(var_4655_object == 0) goto Label_10648; // 0x2995 JumpB
	Remove(); // 0x2996 ObjFunc
	
Label_10648:
	var_4656_string = "b3q02GrifGotoNotkin"; // 0x2998 PushS
	FindMark(var_4646_object, var_4656_string); // 0x2999 ObjFunc
	var_4657_object = var_4646_object; // 0x299b Push
	if(var_4657_object == 0) goto Label_10655; // 0x299c JumpB
	Remove(); // 0x299d ObjFunc
	
Label_10655:
	var_4658_string = "b3q02KapellaGotoNotkin"; // 0x299f PushS
	FindMark(var_4646_object, var_4658_string); // 0x29a0 ObjFunc
	var_4659_object = var_4646_object; // 0x29a2 Push
	if(var_4659_object == 0) goto Label_10662; // 0x29a3 JumpB
	Remove(); // 0x29a4 ObjFunc
	
Label_10662:
	var_4660_string = "b3q02NotkinGotoKapella"; // 0x29a6 PushS
	FindMark(var_4646_object, var_4660_string); // 0x29a7 ObjFunc
	var_4661_object = var_4646_object; // 0x29a9 Push
	if(var_4661_object == 0) goto Label_10669; // 0x29aa JumpB
	Remove(); // 0x29ab ObjFunc
	
Label_10669:
	var_4662_string = "b3q03BurahHome"; // 0x29ad PushS
	FindMark(var_4646_object, var_4662_string); // 0x29ae ObjFunc
	var_4663_object = var_4646_object; // 0x29b0 Push
	if(var_4663_object == 0) goto Label_10676; // 0x29b1 JumpB
	Remove(); // 0x29b2 ObjFunc
	
Label_10676:
	var_4664_bool = 0; var_4665_int = 0; // 0x29b4 PushV
	var_4665_int = 221; // 0x29b5 MovI
	func_12005(var_4664_bool, var_4665_int); // 0x29b6 NEW_2
	var_4666_bool = 0; var_4667_int = 0; // 0x29b8 PushV
	var_4667_int = 227; // 0x29b9 MovI
	func_12005(var_4666_bool, var_4667_int); // 0x29ba NEW_2
	var_4668_bool = 0; var_4669_int = 0; // 0x29bc PushV
	var_4669_int = 235; // 0x29bd MovI
	func_12005(var_4668_bool, var_4669_int); // 0x29be NEW_2
	var_4670_bool = 0; var_4671_int = 0; // 0x29c0 PushV
	var_4671_int = 631; // 0x29c1 MovI
	func_12005(var_4670_bool, var_4671_int); // 0x29c2 NEW_2
	return 4; // 0x29c4 Return
}


func_9592(var_5700_int, var_5701_float)
{
	var_5702_int = 0; var_5703_int = 0; var_5704_int = 0; var_5705_float = 0; // 0x2579 PushV
	var_5703_int = 530568; // 0x257a MovI
	var_5704_int = 530567; // 0x257b MovI
	var_5705_float = var_5701_float; // 0x257c Mov
	func_12022(var_5702_int, var_5703_int, var_5704_int, var_5705_float); // 0x257d NEW_2
	var_5700_int = var_5702_int; // 0x257e Mov
	return 0; // 0x2580 Return
}


func_380(var_1978_bool, var_1979_int)
{
	var_1980_int = 0; var_1981_int = 0; // 0x17c PushV
	var_1982_string = ""; var_1983_int = 0; // 0x17d PushV
	var_1983_int = var_1979_int; // 0x17e Mov
	func_249(var_1982_string, var_1983_int); // 0x17f NEW_2
	GetVariable(var_1982_string, var_1981_int); // 0x181 Func
	var_1984_int = 3; // 0x183 PushI
	var_1985_int = var_1981_int & var_1984_int; // 0x184 And
	var_1986_int = 1; // 0x185 PushI
	var_1978_bool = var_1985_int == var_1986_int; // 0x186 Eq2
	return 2; // 0x187 Return
}


func_11648(var_5603_bool)
{
	var_5606_int = 0; var_5607_string = ""; // 0x2d81 PushV
	var_5607_string = "b11q04"; // 0x2d82 MovS
	func_106(var_5606_int, var_5607_string); // 0x2d83 NEW_2
	var_5608_int = 0; // 0x2d85 PushI
	var_5609_bool = var_5606_int == var_5608_int; // 0x2d86 Eq
	if(var_5609_bool == 0) goto Label_11658; // 0x2d87 JumpB
	var_5603_bool = 1; // 0x2d88 MovB
	return 0; // 0x2d89 Return
	
Label_11658:
	var_5603_bool = 0; // 0x2d8a MovB
	return 0; // 0x2d8b Return
}


func_6529(var_2899_int, var_2900_int, var_2901_object, var_2902_object, var_2903_object, var_2904_object)
{
	var_2905_int = 0; // 0x1982 PushI
	var_2906_bool = var_2900_int == var_2905_int; // 0x1983 Eq
	if(var_2906_bool == 0) goto Label_6569; // 0x1984 JumpB
	var_2907_int = 0; var_2908_bool = 0; // 0x1985 PushV
	var_2907_int = 11; // 0x1986 MovI
	var_2908_bool = 0; // 0x1987 MovB
	func_746(var_2907_int, var_2908_bool); // 0x1988 NEW_2
	var_2909_int = 0; var_2910_bool = 0; var_2911_int = 0; // 0x198a PushV
	var_2909_int = 11; // 0x198b MovI
	var_2910_bool = 1; // 0x198c MovB
	var_2911_int = 1; // 0x198d MovI
	func_763(var_2909_int, var_2910_bool, var_2911_int); // 0x198e NEW_2
	var_2912_int = 0; var_2913_int = 0; var_2914_object = Obj(); var_2915_object = Obj(); var_2916_object = Obj(); // 0x1990 PushV
	var_2912_int = 11; // 0x1991 MovI
	var_2913_int = var_2899_int; // 0x1992 Mov
	var_2914_object = var_2901_object; // 0x1993 Mov
	var_2915_object = var_2902_object; // 0x1994 Mov
	var_2916_object = var_2903_object; // 0x1995 Mov
	func_591(var_2912_int, var_2913_int, var_2914_object, var_2915_object, var_2916_object); // 0x1996 NEW_2
	var_2917_object = Obj(); var_2918_int = 0; // 0x1998 PushV
	var_2917_object = var_2904_object; // 0x1999 Mov
	var_2918_int = 1; // 0x199a MovI
	func_255(var_2918_int); // 0x199b NEW_2
	var_2919_int = 0; var_2920_bool = 0; var_2921_int = 0; // 0x199d PushV
	var_2919_int = 11; // 0x199e MovI
	var_2920_bool = 1; // 0x199f MovB
	var_2921_int = 5; // 0x19a0 MovI
	func_820(var_2919_int, var_2920_bool, var_2921_int); // 0x19a1 NEW_2
	var_2922_int = 0; var_2923_bool = 0; var_2924_int = 0; // 0x19a3 PushV
	var_2922_int = 11; // 0x19a4 MovI
	var_2923_bool = 0; // 0x19a5 MovB
	var_2924_int = 5; // 0x19a6 MovI
	func_882(var_2922_int, var_2923_bool, var_2924_int); // 0x19a7 NEW_2
	
Label_6569:
	var_2925_int = 0; var_2926_bool = 0; // 0x19a9 PushV
	var_2925_int = 11; // 0x19aa MovI
	var_2926_bool = 0; // 0x19ab MovB
	func_729(var_2925_int, var_2926_bool); // 0x19ac NEW_2
	var_2927_int = 0; var_2928_int = 0; var_2929_int = 0; // 0x19ae PushV
	var_2927_int = 11; // 0x19af MovI
	var_2928_int = var_2899_int; // 0x19b0 Mov
	var_2929_int = var_2900_int; // 0x19b1 Mov
	func_2714(var_2927_int, var_2928_int, var_2929_int); // 0x19b2 NEW_2
	return 0; // 0x19b4 Return
}


func_9601(var_5482_int, var_5483_float)
{
	var_5484_int = 0; var_5485_int = 0; var_5486_int = 0; var_5487_float = 0; // 0x2582 PushV
	var_5485_int = 529886; // 0x2583 MovI
	var_5486_int = 529885; // 0x2584 MovI
	var_5487_float = var_5483_float; // 0x2585 Mov
	func_12022(var_5484_int, var_5485_int, var_5486_int, var_5487_float); // 0x2586 NEW_2
	var_5482_int = var_5484_int; // 0x2587 Mov
	return 0; // 0x2589 Return
}


func_7555(var_4526_int)
{
	var_4527_int = 0; var_4528_object = Obj(); var_4529_object = Obj(); var_4530_object = Obj(); var_4531_cvector = CVector(0,0,0); var_4532_cvector = CVector(0,0,0); var_4533_bool = 0; var_4534_object = Obj(); var_4535_int = 0; var_4536_object = Obj(); var_4537_object = Obj(); var_4538_object = Obj(); var_4539_cvector = CVector(0,0,0); var_4540_cvector = CVector(0,0,0); var_4541_bool = 0; var_4542_object = Obj(); // 0x1d83 PushV
	var_4543_object = GlobalVars[14]; // 0x1d84 PushGE
	size(var_4535_int); // 0x1d85 ObjFunc
	var_4544_bool = 0; // 0x1d87 PushV
	var_4544_bool = 1; // 0x1d88 MovB
	var_4545_bool = var_4526_int >= var_4535_int; // 0x1d89 GE
	if(var_4545_bool == 0) goto Label_7567; // 0x1d8a JumpB
	var_4546_int = -1; // 0x1d8b PushI
	var_4547_bool = var_4526_int == var_4546_int; // 0x1d8c Eq
	if(var_4547_bool == 0) goto Label_7567; // 0x1d8d JumpB
	var_4544_bool = 0; // 0x1d8e MovB
	
Label_7567:
	if(var_4544_bool == 0) goto Label_7573; // 0x1d8f JumpB
	var_4548_string = "Wrong bonfire index "; // 0x1d90 PushS
	var_4549_int = var_4548_string + var_4526_int; // 0x1d91 Add
	Trace(var_4549_int); // 0x1d92 Func
	return 16; // 0x1d94 Return
	
Label_7573:
	var_4550_object = GlobalVars[14]; // 0x1d95 PushGE
	get(var_4536_object, var_4526_int); // 0x1d96 ObjFunc
	var_4551_string = "bonfire_light"; // 0x1d98 PushS
	var_4552_int = 1; // 0x1d99 PushI
	var_4553_int = var_4526_int + var_4552_int; // 0x1d9a Add
	var_4554_int = var_4551_string + var_4553_int; // 0x1d9b Add
	FindActor(var_4537_object, var_4554_int); // 0x1d9c Func
	var_4555_bool = var_4537_object == 0; // 0x1d9e Not
	if(var_4555_bool == 0) goto Label_7593; // 0x1d9f JumpB
	var_4556_string = "Bofire  light "; // 0x1da0 PushS
	var_4557_int = 1; // 0x1da1 PushI
	var_4558_int = var_4526_int + var_4557_int; // 0x1da2 Add
	var_4559_int = var_4556_string + var_4558_int; // 0x1da3 Add
	var_4560_string = " not found"; // 0x1da4 PushS
	var_4561_int = var_4559_int + var_4560_string; // 0x1da5 Add
	Trace(var_4561_int); // 0x1da6 Func
	goto Label_7596; // 0x1da8 Jump
	
Label_7596:
	GetMainOutdoorScene(var_4538_object); // 0x1dac Func
	var_4562_string = "pt_bonfire"; // 0x1dae PushS
	var_4563_int = 1; // 0x1daf PushI
	var_4564_int = var_4526_int + var_4563_int; // 0x1db0 Add
	var_4565_int = var_4562_string + var_4564_int; // 0x1db1 Add
	GetLocator(var_4565_int, var_4541_bool, var_4539_cvector, var_4540_cvector); // 0x1db2 ObjFunc
	var_4566_bool = var_4541_bool == 0; // 0x1db4 Not
	if(var_4566_bool == 0) goto Label_7610; // 0x1db5 JumpB
	var_4567_string = "Locator for bonfire doesn't exist"; // 0x1db6 PushS
	Trace(var_4567_string); // 0x1db7 Func
	return 16; // 0x1db9 Return
	
Label_7610:
	var_4568_bool = var_4536_object == 0; // 0x1dba Not
	if(var_4568_bool == 0) goto Label_7620; // 0x1dbb JumpB
	var_4569_string = "scripted"; // 0x1dbc PushS
	var_4570_string = "bonfire_big.xml"; // 0x1dbd PushS
	AddActorByType(var_4542_object, var_4569_string, var_4538_object, var_4539_cvector, var_4540_cvector, var_4570_string); // 0x1dbe Func
	var_4571_object = GlobalVars[14]; // 0x1dc0 PushGE
	set(var_4526_int, var_4542_object); // 0x1dc1 ObjFunc
	var_4542_object = 0; // 0x1dc3 SetNull
	
Label_7620:
	var_4572_string = "Setting bonfire "; // 0x1dc4 PushS
	var_4573_int = 1; // 0x1dc5 PushI
	var_4574_int = var_4526_int + var_4573_int; // 0x1dc6 Add
	var_4575_int = var_4572_string + var_4574_int; // 0x1dc7 Add
	var_4576_string = "... ok"; // 0x1dc8 PushS
	var_4577_int = var_4575_int + var_4576_string; // 0x1dc9 Add
	Trace(var_4577_int); // 0x1dca Func
	return 16; // 0x1dcc Return
	
Label_7593:
	var_4578_bool = 1; // 0x1da9 PushB
	Switch(var_4578_bool); // 0x1daa ObjFunc
}


func_392(var_24_int)
{
	var_25_int = 0; var_26_int = 0; var_27_int = 0; var_28_int = 0; // 0x188 PushV
	var_29_string = ""; var_30_int = 0; // 0x189 PushV
	var_30_int = var_24_int; // 0x18a Mov
	func_249(var_29_string, var_30_int); // 0x18b NEW_2
	GetVariable(var_29_string, var_27_int); // 0x18d Func
	var_34_int = 252; // 0x18f PushI
	var_35_int = var_27_int & var_34_int; // 0x190 And
	var_36_int = 1; // 0x191 PushI
	var_28_int = var_35_int | var_36_int; // 0x192 Or2
	var_37_string = ""; var_38_int = 0; // 0x193 PushV
	var_38_int = var_24_int; // 0x194 Mov
	func_249(var_37_string, var_38_int); // 0x195 NEW_2
	SetVariable(var_37_string, var_28_int); // 0x197 Func
	return 4; // 0x199 Return
}


func_9610(var_4872_int, var_4873_float)
{
	var_4874_int = 0; var_4875_int = 0; var_4876_int = 0; var_4877_float = 0; // 0x258b PushV
	var_4875_int = 521908; // 0x258c MovI
	var_4876_int = 521907; // 0x258d MovI
	var_4877_float = var_4873_float; // 0x258e Mov
	func_12022(var_4874_int, var_4875_int, var_4876_int, var_4877_float); // 0x258f NEW_2
	var_4872_int = var_4874_int; // 0x2590 Mov
	return 0; // 0x2592 Return
}


func_8587(var_2_bool, var_3_int)
{
	var_5_int = 0; var_6_int = 0; var_7_int = 0; var_8_float = 0; var_9_int = 0; var_10_int = 0; var_11_int = 0; var_12_int = 0; var_13_int = 0; var_14_float = 0; var_15_int = 0; var_16_int = 0; // 0x218b PushV
	var_17_bool = 0; // 0x218c PushV
	var_17_bool = 0; // 0x218d MovB
	var_18_int = 16384; // 0x218e PushI
	var_19_bool = var_3_int > var_18_int; // 0x218f GT
	if(var_19_bool == 0) goto Label_8597; // 0x2190 JumpB
	var_20_int = 16396; // 0x2191 PushI
	var_21_bool = var_3_int < var_20_int; // 0x2192 LT
	if(var_21_bool == 0) goto Label_8597; // 0x2193 JumpB
	var_17_bool = 1; // 0x2194 MovB
	
Label_8597:
	if(var_17_bool == 0) goto Label_8606; // 0x2195 JumpB
	var_22_int = 16384; // 0x2196 PushI
	var_11_int = var_3_int - var_22_int; // 0x2197 Sub2
	var_23_int = 0; // 0x2198 PushV
	var_23_int = var_11_int; // 0x2199 Mov
	func_14430(var_23_int); // 0x219a NEW_2
	var_2_bool = 1; // 0x219c MovB
	return 12; // 0x219d Return
	
Label_8606:
	var_199_bool = 0; // 0x219e PushV
	var_199_bool = 0; // 0x219f MovB
	var_200_int = 32768; // 0x21a0 PushI
	var_201_bool = var_3_int > var_200_int; // 0x21a1 GT
	if(var_201_bool == 0) goto Label_8615; // 0x21a2 JumpB
	var_202_int = 33056; // 0x21a3 PushI
	var_203_bool = var_3_int < var_202_int; // 0x21a4 LT
	if(var_203_bool == 0) goto Label_8615; // 0x21a5 JumpB
	var_199_bool = 1; // 0x21a6 MovB
	
Label_8615:
	if(var_199_bool == 0) goto Label_8640; // 0x21a7 JumpB
	var_204_int = 32768; // 0x21a8 PushI
	var_205_int = var_3_int - var_204_int; // 0x21a9 Sub
	var_206_int = 24; // 0x21aa PushI
	var_12_int = var_205_int / var_205_int; // 0x21ab Div2
	var_207_int = 32768; // 0x21ac PushI
	var_208_int = var_3_int - var_207_int; // 0x21ad Sub
	var_209_int = 24; // 0x21ae PushI
	var_13_int = var_208_int % var_209_int; // 0x21af Mod2
	GetGameTime(var_14_float); // 0x21b0 Func
	var_210_int = 24; // 0x21b2 PushI
	var_15_int = var_14_float / var_14_float; // 0x21b3 Div2
	var_16_int = var_14_float; // 0x21b4 Mov
	var_211_int = 24; // 0x21b5 PushI
	var_16_int = var_16_int % var_211_int; // 0x21b6 Mod2
	var_212_int = 0; var_213_int = 0; var_214_int = 0; var_215_int = 0; // 0x21b7 PushV
	var_212_int = var_12_int; // 0x21b8 Mov
	var_213_int = var_13_int; // 0x21b9 Mov
	var_214_int = var_15_int; // 0x21ba Mov
	var_215_int = var_16_int; // 0x21bb Mov
	func_8725(var_212_int, var_213_int, var_214_int, var_215_int); // 0x21bc NEW_2
	var_2_bool = 1; // 0x21be MovB
	return 12; // 0x21bf Return
	
Label_8640:
	var_2_bool = 0; // 0x21c0 MovB
	return 12; // 0x21c1 Return
}


func_11660(var_5741_bool)
{
	var_5744_int = 0; var_5745_string = ""; // 0x2d8d PushV
	var_5745_string = "b3KapellaVisit"; // 0x2d8e MovS
	func_106(var_5744_int, var_5745_string); // 0x2d8f NEW_2
	var_5746_int = 0; // 0x2d91 PushI
	var_5747_bool = var_5744_int != var_5746_int; // 0x2d92 Neq
	if(var_5747_bool == 0) goto Label_11670; // 0x2d93 JumpB
	var_5741_bool = 1; // 0x2d94 MovB
	return 0; // 0x2d95 Return
	
Label_11670:
	var_5741_bool = 0; // 0x2d96 MovB
	return 0; // 0x2d97 Return
}


func_4493()
{
	var_64_string = "dt_house3_05_i2"; // 0x118e PushS
	add(var_64_string); // 0x118f ObjFunc
	var_65_string = "dt_house3_05"; // 0x1191 PushS
	add(var_65_string); // 0x1192 ObjFunc
	var_66_string = "dt_house3_06_i2"; // 0x1194 PushS
	add(var_66_string); // 0x1195 ObjFunc
	var_67_string = "dt_house_1_10"; // 0x1197 PushS
	add(var_67_string); // 0x1198 ObjFunc
	var_68_string = "house5_10"; // 0x119a PushS
	add(var_68_string); // 0x119b ObjFunc
	var_69_string = "house5_07"; // 0x119d PushS
	add(var_69_string); // 0x119e ObjFunc
	var_70_string = "dt_house_1_03"; // 0x11a0 PushS
	add(var_70_string); // 0x11a1 ObjFunc
	var_71_string = "dt_house1_union2_04l"; // 0x11a3 PushS
	add(var_71_string); // 0x11a4 ObjFunc
	var_72_string = "dt_house1_union2_04r"; // 0x11a6 PushS
	add(var_72_string); // 0x11a7 ObjFunc
	var_73_string = "house5_22"; // 0x11a9 PushS
	add(var_73_string); // 0x11aa ObjFunc
	var_74_string = "house5_08"; // 0x11ac PushS
	add(var_74_string); // 0x11ad ObjFunc
	var_75_string = "dt_house1_union2_02l"; // 0x11af PushS
	add(var_75_string); // 0x11b0 ObjFunc
	var_76_string = "dt_house1_union2_02r"; // 0x11b2 PushS
	add(var_76_string); // 0x11b3 ObjFunc
	return 0; // 0x11b5 Return
}


func_9619(var_5781_int, var_5782_float)
{
	var_5783_int = 0; var_5784_int = 0; var_5785_int = 0; var_5786_float = 0; // 0x2594 PushV
	var_5784_int = 530492; // 0x2595 MovI
	var_5785_int = 530491; // 0x2596 MovI
	var_5786_float = var_5782_float; // 0x2597 Mov
	func_12022(var_5783_int, var_5784_int, var_5785_int, var_5786_float); // 0x2598 NEW_2
	var_5781_int = var_5783_int; // 0x2599 Mov
	return 0; // 0x259b Return
}


func_11672(var_5757_bool)
{
	var_5760_int = 0; var_5761_string = ""; // 0x2d99 PushV
	var_5761_string = "b8GeorgVisit"; // 0x2d9a MovS
	func_106(var_5760_int, var_5761_string); // 0x2d9b NEW_2
	var_5762_int = 0; // 0x2d9d PushI
	var_5763_bool = var_5760_int != var_5762_int; // 0x2d9e Neq
	if(var_5763_bool == 0) goto Label_11682; // 0x2d9f JumpB
	var_5757_bool = 1; // 0x2da0 MovB
	return 0; // 0x2da1 Return
	
Label_11682:
	var_5757_bool = 0; // 0x2da2 MovB
	return 0; // 0x2da3 Return
}


func_410(var_72_bool, var_73_int)
{
	var_74_int = 0; var_75_int = 0; // 0x19a PushV
	var_76_string = ""; var_77_int = 0; // 0x19b PushV
	var_77_int = var_73_int; // 0x19c Mov
	func_249(var_76_string, var_77_int); // 0x19d NEW_2
	GetVariable(var_76_string, var_75_int); // 0x19f Func
	var_78_int = 3; // 0x1a1 PushI
	var_79_int = var_75_int & var_78_int; // 0x1a2 And
	var_80_int = 2; // 0x1a3 PushI
	var_72_bool = var_79_int == var_80_int; // 0x1a4 Eq2
	return 2; // 0x1a5 Return
}


func_9628(var_5711_int, var_5712_float)
{
	var_5713_int = 0; var_5714_int = 0; var_5715_int = 0; var_5716_float = 0; // 0x259d PushV
	var_5714_int = 530570; // 0x259e MovI
	var_5715_int = 530569; // 0x259f MovI
	var_5716_float = var_5712_float; // 0x25a0 Mov
	func_12022(var_5713_int, var_5714_int, var_5715_int, var_5716_float); // 0x25a1 NEW_2
	var_5711_int = var_5713_int; // 0x25a2 Mov
	return 0; // 0x25a4 Return
}


func_5534(var_3744_int, var_3745_int, var_3746_object, var_3747_object, var_3748_object, var_3749_object)
{
	var_3750_int = 0; // 0x159f PushI
	var_3751_bool = var_3745_int == var_3750_int; // 0x15a0 Eq
	if(var_3751_bool == 0) goto Label_5574; // 0x15a1 JumpB
	var_3752_int = 0; var_3753_bool = 0; // 0x15a2 PushV
	var_3752_int = 5; // 0x15a3 MovI
	var_3753_bool = 0; // 0x15a4 MovB
	func_746(var_3752_int, var_3753_bool); // 0x15a5 NEW_2
	var_3754_int = 0; var_3755_bool = 0; var_3756_int = 0; // 0x15a7 PushV
	var_3754_int = 5; // 0x15a8 MovI
	var_3755_bool = 0; // 0x15a9 MovB
	var_3756_int = 1; // 0x15aa MovI
	func_763(var_3754_int, var_3755_bool, var_3756_int); // 0x15ab NEW_2
	var_3757_int = 0; var_3758_int = 0; var_3759_object = Obj(); var_3760_object = Obj(); var_3761_object = Obj(); // 0x15ad PushV
	var_3757_int = 5; // 0x15ae MovI
	var_3758_int = var_3744_int; // 0x15af Mov
	var_3759_object = var_3746_object; // 0x15b0 Mov
	var_3760_object = var_3747_object; // 0x15b1 Mov
	var_3761_object = var_3748_object; // 0x15b2 Mov
	func_670(var_3757_int, var_3758_int, var_3759_object, var_3760_object, var_3761_object); // 0x15b3 NEW_2
	var_3762_object = Obj(); var_3763_int = 0; // 0x15b5 PushV
	var_3762_object = var_3749_object; // 0x15b6 Mov
	var_3763_int = 2; // 0x15b7 MovI
	func_255(var_3763_int); // 0x15b8 NEW_2
	var_3764_int = 0; var_3765_bool = 0; var_3766_int = 0; // 0x15ba PushV
	var_3764_int = 5; // 0x15bb MovI
	var_3765_bool = 0; // 0x15bc MovB
	var_3766_int = 4; // 0x15bd MovI
	func_820(var_3764_int, var_3765_bool, var_3766_int); // 0x15be NEW_2
	var_3767_int = 0; var_3768_bool = 0; var_3769_int = 0; // 0x15c0 PushV
	var_3767_int = 5; // 0x15c1 MovI
	var_3768_bool = 1; // 0x15c2 MovB
	var_3769_int = 4; // 0x15c3 MovI
	func_882(var_3767_int, var_3768_bool, var_3769_int); // 0x15c4 NEW_2
	
Label_5574:
	var_3770_int = 0; var_3771_bool = 0; // 0x15c6 PushV
	var_3770_int = 5; // 0x15c7 MovI
	var_3771_bool = 0; // 0x15c8 MovB
	func_729(var_3770_int, var_3771_bool); // 0x15c9 NEW_2
	var_3772_int = 0; var_3773_int = 0; var_3774_int = 0; // 0x15cb PushV
	var_3772_int = 5; // 0x15cc MovI
	var_3773_int = var_3744_int; // 0x15cd Mov
	var_3774_int = var_3745_int; // 0x15ce Mov
	func_3797(var_3772_int, var_3773_int, var_3774_int); // 0x15cf NEW_2
	return 0; // 0x15d1 Return
}


func_11684(var_5773_bool)
{
	var_5776_int = 0; var_5777_string = ""; // 0x2da5 PushV
	var_5777_string = "b10MatVisit"; // 0x2da6 MovS
	func_106(var_5776_int, var_5777_string); // 0x2da7 NEW_2
	var_5778_int = 0; // 0x2da9 PushI
	var_5779_bool = var_5776_int != var_5778_int; // 0x2daa Neq
	if(var_5779_bool == 0) goto Label_11694; // 0x2dab JumpB
	var_5773_bool = 1; // 0x2dac MovB
	return 0; // 0x2dad Return
	
Label_11694:
	var_5773_bool = 0; // 0x2dae MovB
	return 0; // 0x2daf Return
}


func_9637(var_5506_int, var_5507_float)
{
	var_5508_int = 0; var_5509_int = 0; var_5510_int = 0; var_5511_float = 0; // 0x25a6 PushV
	var_5509_int = 529890; // 0x25a7 MovI
	var_5510_int = 529889; // 0x25a8 MovI
	var_5511_float = var_5507_float; // 0x25a9 Mov
	func_12022(var_5508_int, var_5509_int, var_5510_int, var_5511_float); // 0x25aa NEW_2
	var_5506_int = var_5508_int; // 0x25ab Mov
	return 0; // 0x25ad Return
}


func_422(var_76_int)
{
	var_77_int = 0; var_78_int = 0; var_79_int = 0; var_80_int = 0; // 0x1a6 PushV
	var_81_string = ""; var_82_int = 0; // 0x1a7 PushV
	var_82_int = var_76_int; // 0x1a8 Mov
	func_249(var_81_string, var_82_int); // 0x1a9 NEW_2
	GetVariable(var_81_string, var_79_int); // 0x1ab Func
	var_83_int = 252; // 0x1ad PushI
	var_84_int = var_79_int & var_83_int; // 0x1ae And
	var_85_int = 2; // 0x1af PushI
	var_80_int = var_84_int | var_85_int; // 0x1b0 Or2
	var_86_string = ""; var_87_int = 0; // 0x1b1 PushV
	var_87_int = var_76_int; // 0x1b2 Mov
	func_249(var_86_string, var_87_int); // 0x1b3 NEW_2
	SetVariable(var_86_string, var_80_int); // 0x1b5 Func
	return 4; // 0x1b7 Return
}


func_9646(var_5490_int, var_5491_float)
{
	var_5492_int = 0; var_5493_int = 0; var_5494_int = 0; var_5495_float = 0; // 0x25af PushV
	var_5493_int = 529894; // 0x25b0 MovI
	var_5494_int = 529893; // 0x25b1 MovI
	var_5495_float = var_5491_float; // 0x25b2 Mov
	func_12022(var_5492_int, var_5493_int, var_5494_int, var_5495_float); // 0x25b3 NEW_2
	var_5490_int = var_5492_int; // 0x25b4 Mov
	return 0; // 0x25b6 Return
}


func_11696(var_5789_bool)
{
	var_5792_int = 0; var_5793_string = ""; // 0x2db1 PushV
	var_5793_string = "b6ViktorVisit"; // 0x2db2 MovS
	func_106(var_5792_int, var_5793_string); // 0x2db3 NEW_2
	var_5794_int = 0; // 0x2db5 PushI
	var_5795_bool = var_5792_int != var_5794_int; // 0x2db6 Neq
	if(var_5795_bool == 0) goto Label_11706; // 0x2db7 JumpB
	var_5789_bool = 1; // 0x2db8 MovB
	return 0; // 0x2db9 Return
	
Label_11706:
	var_5789_bool = 0; // 0x2dba MovB
	return 0; // 0x2dbb Return
}


func_6581(var_4029_int, var_4030_int, var_4031_object, var_4032_object, var_4033_object, var_4034_object)
{
	var_4035_int = 0; // 0x19b6 PushI
	var_4036_bool = var_4030_int == var_4035_int; // 0x19b7 Eq
	if(var_4036_bool == 0) goto Label_6621; // 0x19b8 JumpB
	var_4037_int = 0; var_4038_bool = 0; // 0x19b9 PushV
	var_4037_int = 11; // 0x19ba MovI
	var_4038_bool = 1; // 0x19bb MovB
	func_746(var_4037_int, var_4038_bool); // 0x19bc NEW_2
	var_4039_int = 0; var_4040_bool = 0; var_4041_int = 0; // 0x19be PushV
	var_4039_int = 11; // 0x19bf MovI
	var_4040_bool = 0; // 0x19c0 MovB
	var_4041_int = 1; // 0x19c1 MovI
	func_763(var_4039_int, var_4040_bool, var_4041_int); // 0x19c2 NEW_2
	var_4042_int = 0; var_4043_int = 0; var_4044_object = Obj(); var_4045_object = Obj(); var_4046_object = Obj(); // 0x19c4 PushV
	var_4042_int = 11; // 0x19c5 MovI
	var_4043_int = var_4029_int; // 0x19c6 Mov
	var_4044_object = var_4031_object; // 0x19c7 Mov
	var_4045_object = var_4032_object; // 0x19c8 Mov
	var_4046_object = var_4033_object; // 0x19c9 Mov
	func_670(var_4042_int, var_4043_int, var_4044_object, var_4045_object, var_4046_object); // 0x19ca NEW_2
	var_4047_object = Obj(); var_4048_int = 0; // 0x19cc PushV
	var_4047_object = var_4034_object; // 0x19cd Mov
	var_4048_int = 2; // 0x19ce MovI
	func_255(var_4048_int); // 0x19cf NEW_2
	var_4049_int = 0; var_4050_bool = 0; var_4051_int = 0; // 0x19d1 PushV
	var_4049_int = 11; // 0x19d2 MovI
	var_4050_bool = 0; // 0x19d3 MovB
	var_4051_int = 5; // 0x19d4 MovI
	func_820(var_4049_int, var_4050_bool, var_4051_int); // 0x19d5 NEW_2
	var_4052_int = 0; var_4053_bool = 0; var_4054_int = 0; // 0x19d7 PushV
	var_4052_int = 11; // 0x19d8 MovI
	var_4053_bool = 1; // 0x19d9 MovB
	var_4054_int = 5; // 0x19da MovI
	func_882(var_4052_int, var_4053_bool, var_4054_int); // 0x19db NEW_2
	
Label_6621:
	var_4055_int = 0; var_4056_bool = 0; // 0x19dd PushV
	var_4055_int = 11; // 0x19de MovI
	var_4056_bool = 0; // 0x19df MovB
	func_729(var_4055_int, var_4056_bool); // 0x19e0 NEW_2
	var_4057_int = 0; var_4058_int = 0; var_4059_int = 0; // 0x19e2 PushV
	var_4057_int = 11; // 0x19e3 MovI
	var_4058_int = var_4029_int; // 0x19e4 Mov
	var_4059_int = var_4030_int; // 0x19e5 Mov
	func_3609(var_4057_int, var_4058_int, var_4059_int); // 0x19e6 NEW_2
	return 0; // 0x19e8 Return
}


func_4534(var_885_int, var_886_int, var_887_object, var_888_object, var_889_object, var_890_object)
{
	var_891_int = 0; // 0x11b7 PushI
	var_892_bool = var_886_int == var_891_int; // 0x11b8 Eq
	if(var_892_bool == 0) goto Label_4574; // 0x11b9 JumpB
	var_893_int = 0; var_894_bool = 0; // 0x11ba PushV
	var_893_int = 1; // 0x11bb MovI
	var_894_bool = 0; // 0x11bc MovB
	func_746(var_893_int, var_894_bool); // 0x11bd NEW_2
	var_895_int = 0; var_896_bool = 0; var_897_int = 0; // 0x11bf PushV
	var_895_int = 1; // 0x11c0 MovI
	var_896_bool = 0; // 0x11c1 MovB
	var_897_int = 1; // 0x11c2 MovI
	func_763(var_895_int, var_896_bool, var_897_int); // 0x11c3 NEW_2
	var_898_int = 0; var_899_int = 0; var_900_object = Obj(); var_901_object = Obj(); var_902_object = Obj(); // 0x11c5 PushV
	var_898_int = 1; // 0x11c6 MovI
	var_899_int = var_885_int; // 0x11c7 Mov
	var_900_object = var_887_object; // 0x11c8 Mov
	var_901_object = var_888_object; // 0x11c9 Mov
	var_902_object = var_889_object; // 0x11ca Mov
	func_572(var_899_int, var_900_object, var_901_object, var_902_object); // 0x11cb NEW_2
	var_903_object = Obj(); var_904_int = 0; // 0x11cd PushV
	var_903_object = var_890_object; // 0x11ce Mov
	var_904_int = 0; // 0x11cf MovI
	func_255(var_904_int); // 0x11d0 NEW_2
	var_905_int = 0; var_906_bool = 0; var_907_int = 0; // 0x11d2 PushV
	var_905_int = 1; // 0x11d3 MovI
	var_906_bool = 0; // 0x11d4 MovB
	var_907_int = 8; // 0x11d5 MovI
	func_820(var_905_int, var_906_bool, var_907_int); // 0x11d6 NEW_2
	var_908_int = 0; var_909_bool = 0; var_910_int = 0; // 0x11d8 PushV
	var_908_int = 1; // 0x11d9 MovI
	var_909_bool = 0; // 0x11da MovB
	var_910_int = 8; // 0x11db MovI
	func_882(var_908_int, var_909_bool, var_910_int); // 0x11dc NEW_2
	
Label_4574:
	var_911_int = 0; var_912_int = 0; // 0x11de PushV
	var_911_int = 1; // 0x11df MovI
	var_912_int = var_886_int; // 0x11e0 Mov
	func_1000(var_911_int, var_912_int); // 0x11e1 NEW_2
	var_913_int = 0; var_914_int = 0; var_915_int = 0; // 0x11e3 PushV
	var_913_int = 1; // 0x11e4 MovI
	var_914_int = var_885_int; // 0x11e5 Mov
	var_915_int = var_886_int; // 0x11e6 Mov
	func_2333(var_913_int, var_914_int, var_915_int); // 0x11e7 NEW_2
	return 0; // 0x11e9 Return
}


func_9655(var_5514_int, var_5515_float)
{
	var_5516_int = 0; var_5517_int = 0; var_5518_int = 0; var_5519_float = 0; // 0x25b8 PushV
	var_5517_int = 529888; // 0x25b9 MovI
	var_5518_int = 529887; // 0x25ba MovI
	var_5519_float = var_5515_float; // 0x25bb Mov
	func_12022(var_5516_int, var_5517_int, var_5518_int, var_5519_float); // 0x25bc NEW_2
	var_5514_int = var_5516_int; // 0x25bd Mov
	return 0; // 0x25bf Return
}


func_440(var_486_int)
{
	var_487_object = Obj(); var_488_object = Obj(); // 0x1b8 PushV
	GetMainOutdoorScene(var_488_object); // 0x1b9 Func
	var_489_bool = var_488_object == 0; // 0x1bb NullEq
	if(var_489_bool == 0) goto Label_449; // 0x1bc JumpB
	var_490_string = "City manager: main outdoor scene not found"; // 0x1bd PushS
	Trace(var_490_string); // 0x1be Func
	return 2; // 0x1c0 Return
	
Label_449:
	RemoveAllRegionActors(var_486_int); // 0x1c1 ObjFunc
	return 2; // 0x1c3 Return
}


func_11708(var_6032_bool)
{
	var_6035_int = 0; var_6036_string = ""; // 0x2dbd PushV
	var_6036_string = "b2AndreiVisit"; // 0x2dbe MovS
	func_106(var_6035_int, var_6036_string); // 0x2dbf NEW_2
	var_6037_int = 0; // 0x2dc1 PushI
	var_6038_bool = var_6035_int != var_6037_int; // 0x2dc2 Neq
	if(var_6038_bool == 0) goto Label_11718; // 0x2dc3 JumpB
	var_6032_bool = 1; // 0x2dc4 MovB
	return 0; // 0x2dc5 Return
	
Label_11718:
	var_6032_bool = 0; // 0x2dc6 MovB
	return 0; // 0x2dc7 Return
}


func_9664(var_4890_int, var_4891_float)
{
	var_4892_int = 0; var_4893_int = 0; var_4894_int = 0; var_4895_float = 0; // 0x25c1 PushV
	var_4893_int = 522099; // 0x25c2 MovI
	var_4894_int = 522098; // 0x25c3 MovI
	var_4895_float = var_4891_float; // 0x25c4 Mov
	func_12022(var_4892_int, var_4893_int, var_4894_int, var_4895_float); // 0x25c5 NEW_2
	var_4890_int = var_4892_int; // 0x25c6 Mov
	return 0; // 0x25c8 Return
}


func_8642()
{
	var_416_float = 0; var_417_int = 0; var_418_int = 0; var_419_float = 0; var_420_int = 0; var_421_object = Obj(); var_422_object = Obj(); var_423_float = 0; var_424_int = 0; var_425_int = 0; var_426_float = 0; var_427_int = 0; var_428_object = Obj(); var_429_object = Obj(); // 0x21c2 PushV
	GetGameTime(var_423_float); // 0x21c3 Func
	var_424_int = 1; // 0x21c5 MovI
	
Label_8646:
	var_430_int = 12; // 0x21c6 PushI
	var_431_bool = var_424_int < var_430_int; // 0x21c7 LT
	if(var_431_bool == 0) goto Label_8658; // 0x21c8 JumpB
	var_432_int = 16384; // 0x21c9 PushI
	var_433_int = var_432_int + var_424_int; // 0x21ca Add
	var_434_int = 24; // 0x21cb PushI
	var_435_float = var_434_int * var_424_int; // 0x21cc Mult
	SetTimeEvent(var_433_int, var_435_float); // 0x21cd Func
	var_436_int = 1; // 0x21cf PushI
	var_424_int = var_424_int + var_436_int; // 0x21d0 Add2
	goto Label_8646; // 0x21d1 Jump
	
Label_8658:
	var_425_int = 0; // 0x21d2 MovI
	
Label_8659:
	var_437_int = 288; // 0x21d3 PushI
	var_438_bool = var_425_int < var_437_int; // 0x21d4 LT
	if(var_438_bool == 0) goto Label_8673; // 0x21d5 JumpB
	var_426_float = var_425_int; // 0x21d6 Mov
	var_439_bool = var_426_float < var_423_float; // 0x21d7 LT
	if(var_439_bool == 0) goto Label_8666; // 0x21d8 JumpB
	goto Label_8670; // 0x21d9 Jump
	
Label_8670:
	var_440_int = 1; // 0x21de PushI
	var_425_int = var_425_int + var_440_int; // 0x21df Add2
	goto Label_8659; // 0x21e0 Jump
	
Label_8666:
	var_441_int = 32768; // 0x21da PushI
	var_442_int = var_441_int + var_425_int; // 0x21db Add
	SetTimeEvent(var_442_int, var_426_float); // 0x21dc Func
	
Label_8673:
	var_427_int = 0; // 0x21e1 MovI
	
Label_8674:
	var_443_int = 16; // 0x21e2 PushI
	var_444_bool = var_427_int < var_443_int; // 0x21e3 LT
	if(var_444_bool == 0) goto Label_8692; // 0x21e4 JumpB
	var_445_string = ""; var_446_int = 0; // 0x21e5 PushV
	var_446_int = var_427_int; // 0x21e6 Mov
	func_249(var_445_string, var_446_int); // 0x21e7 NEW_2
	var_450_int = 0; // 0x21e9 PushI
	SetVariable(var_445_string, var_450_int); // 0x21ea Func
	var_451_int = 0; var_452_bool = 0; // 0x21ec PushV
	var_451_int = var_427_int; // 0x21ed Mov
	var_452_bool = 0; // 0x21ee MovB
	func_746(var_451_int, var_452_bool); // 0x21ef NEW_2
	var_462_int = 1; // 0x21f1 PushI
	var_427_int = var_427_int + var_462_int; // 0x21f2 Add2
	goto Label_8674; // 0x21f3 Jump
	
Label_8692:
	var_463_int = 0; var_464_int = 0; var_465_int = 0; var_466_int = 0; // 0x21f4 PushV
	var_463_int = 0; // 0x21f5 MovI
	var_467_int = 24; // 0x21f6 PushI
	var_464_int = var_423_float % var_467_int; // 0x21f7 Mod2
	var_465_int = 0; // 0x21f8 MovI
	var_468_int = 24; // 0x21f9 PushI
	var_466_int = var_423_float % var_468_int; // 0x21fa Mod2
	func_8725(var_463_int, var_464_int, var_465_int, var_466_int); // 0x21fb NEW_2
	var_4355_string = "dt_house_1_07"; // 0x21fd PushS
	FindActor(var_428_object, var_4355_string); // 0x21fe Func
	var_4356_int = 200; // 0x2200 PushI
	var_4357_bool = 0; // 0x2201 PushB
	EnableSubset(var_4356_int, var_4357_bool); // 0x2202 ObjFunc
	GetMainOutdoorScene(var_429_object); // 0x2204 Func
	var_4358_int = 0; // 0x2206 PushI
	var_4359_bool = 0; // 0x2207 PushV
	var_4359_bool = 1; // 0x2208 MovB
	var_4360_int = 7; // 0x2209 PushI
	var_4361_bool = var_423_float < var_4360_int; // 0x220a LT
	if(var_4361_bool == 0) goto Label_8720; // 0x220b JumpB
	var_4362_int = 20; // 0x220c PushI
	var_4363_bool = var_423_float >= var_4362_int; // 0x220d GE
	if(var_4363_bool == 0) goto Label_8720; // 0x220e JumpB
	var_4359_bool = 0; // 0x220f MovB
	
Label_8720:
	SwitchLights(var_4358_int, var_4359_bool); // 0x2210 ObjFunc
	return 14; // 0x2212 Return
}


func_453(var_782_int, var_783_string, var_784_string, var_785_int)
{
	var_786_object = Obj(); var_787_object = Obj(); // 0x1c5 PushV
	GetMainOutdoorScene(var_787_object); // 0x1c6 Func
	var_788_bool = var_787_object == 0; // 0x1c8 NullEq
	if(var_788_bool == 0) goto Label_462; // 0x1c9 JumpB
	var_789_string = "City manager: Can't find main outdoor scene"; // 0x1ca PushS
	Trace(var_789_string); // 0x1cb Func
	return 2; // 0x1cd Return
	
Label_462:
	SetRegionActorCount(var_782_int, var_783_string, var_784_string, var_785_int); // 0x1ce ObjFunc
	return 2; // 0x1d0 Return
}


func_10695()
{
	var_5074_object = Obj(); var_5075_object = Obj(); var_5076_object = Obj(); var_5077_object = Obj(); // 0x29c7 PushV
	var_5078_object = Obj(); // 0x29c8 PushV
	func_12030(var_5078_object); // 0x29c9 NEW_2
	var_5076_object = var_5078_object; // 0x29ca Mov
	var_5079_string = "b4q01DankoGotoLara"; // 0x29cc PushS
	FindMark(var_5077_object, var_5079_string); // 0x29cd ObjFunc
	var_5080_object = var_5077_object; // 0x29cf Push
	if(var_5080_object == 0) goto Label_10707; // 0x29d0 JumpB
	Remove(); // 0x29d1 ObjFunc
	
Label_10707:
	var_5081_string = "b4q01DankoGotoLaraSelf"; // 0x29d3 PushS
	FindMark(var_5077_object, var_5081_string); // 0x29d4 ObjFunc
	var_5082_object = var_5077_object; // 0x29d6 Push
	if(var_5082_object == 0) goto Label_10714; // 0x29d7 JumpB
	Remove(); // 0x29d8 ObjFunc
	
Label_10714:
	var_5083_string = "b4q01LaraGotoRubin"; // 0x29da PushS
	FindMark(var_5077_object, var_5083_string); // 0x29db ObjFunc
	var_5084_object = var_5077_object; // 0x29dd Push
	if(var_5084_object == 0) goto Label_10721; // 0x29de JumpB
	Remove(); // 0x29df ObjFunc
	
Label_10721:
	var_5085_string = "b4Spi4kaMapMark"; // 0x29e1 PushS
	FindMark(var_5077_object, var_5085_string); // 0x29e2 ObjFunc
	var_5086_object = var_5077_object; // 0x29e4 Push
	if(var_5086_object == 0) goto Label_10728; // 0x29e5 JumpB
	Remove(); // 0x29e6 ObjFunc
	
Label_10728:
	var_5087_bool = 0; var_5088_int = 0; // 0x29e8 PushV
	var_5088_int = 213; // 0x29e9 MovI
	func_12005(var_5087_bool, var_5088_int); // 0x29ea NEW_2
	var_5089_bool = 0; var_5090_int = 0; // 0x29ec PushV
	var_5090_int = 216; // 0x29ed MovI
	func_12005(var_5089_bool, var_5090_int); // 0x29ee NEW_2
	var_5091_bool = 0; var_5092_int = 0; // 0x29f0 PushV
	var_5092_int = 527; // 0x29f1 MovI
	func_12005(var_5091_bool, var_5092_int); // 0x29f2 NEW_2
	return 4; // 0x29f4 Return
}


func_11720(var_6062_bool)
{
	var_6065_int = 0; var_6066_string = ""; // 0x2dc9 PushV
	var_6066_string = "b4Spi4kaVisit"; // 0x2dca MovS
	func_106(var_6065_int, var_6066_string); // 0x2dcb NEW_2
	var_6067_int = 0; // 0x2dcd PushI
	var_6068_bool = var_6065_int != var_6067_int; // 0x2dce Neq
	if(var_6068_bool == 0) goto Label_11730; // 0x2dcf JumpB
	var_6062_bool = 1; // 0x2dd0 MovB
	return 0; // 0x2dd1 Return
	
Label_11730:
	var_6062_bool = 0; // 0x2dd2 MovB
	return 0; // 0x2dd3 Return
}


func_9673(var_5498_int, var_5499_float)
{
	var_5500_int = 0; var_5501_int = 0; var_5502_int = 0; var_5503_float = 0; // 0x25ca PushV
	var_5501_int = 529892; // 0x25cb MovI
	var_5502_int = 529891; // 0x25cc MovI
	var_5503_float = var_5499_float; // 0x25cd Mov
	func_12022(var_5500_int, var_5501_int, var_5502_int, var_5503_float); // 0x25ce NEW_2
	var_5498_int = var_5500_int; // 0x25cf Mov
	return 0; // 0x25d1 Return
}


func_7632(var_378_int)
{
	var_379_int = 0; var_380_object = Obj(); var_381_object = Obj(); var_382_int = 0; var_383_object = Obj(); var_384_object = Obj(); // 0x1dd0 PushV
	var_385_object = GlobalVars[14]; // 0x1dd1 PushGE
	size(var_382_int); // 0x1dd2 ObjFunc
	var_386_bool = 0; // 0x1dd4 PushV
	var_386_bool = 1; // 0x1dd5 MovB
	var_387_bool = var_378_int >= var_382_int; // 0x1dd6 GE
	if(var_387_bool == 0) goto Label_7644; // 0x1dd7 JumpB
	var_388_int = -1; // 0x1dd8 PushI
	var_389_bool = var_378_int == var_388_int; // 0x1dd9 Eq
	if(var_389_bool == 0) goto Label_7644; // 0x1dda JumpB
	var_386_bool = 0; // 0x1ddb MovB
	
Label_7644:
	if(var_386_bool == 0) goto Label_7650; // 0x1ddc JumpB
	var_390_string = "Wrong bonfire index "; // 0x1ddd PushS
	var_391_int = var_390_string + var_378_int; // 0x1dde Add
	Trace(var_391_int); // 0x1ddf Func
	return 6; // 0x1de1 Return
	
Label_7650:
	var_392_object = GlobalVars[14]; // 0x1de2 PushGE
	get(var_383_object, var_378_int); // 0x1de3 ObjFunc
	var_393_string = "bonfire_light"; // 0x1de5 PushS
	var_394_int = 1; // 0x1de6 PushI
	var_395_int = var_378_int + var_394_int; // 0x1de7 Add
	var_396_int = var_393_string + var_395_int; // 0x1de8 Add
	FindActor(var_384_object, var_396_int); // 0x1de9 Func
	var_397_bool = var_384_object == 0; // 0x1deb Not
	if(var_397_bool == 0) goto Label_7670; // 0x1dec JumpB
	var_398_string = "Bofire  light "; // 0x1ded PushS
	var_399_int = 1; // 0x1dee PushI
	var_400_int = var_378_int + var_399_int; // 0x1def Add
	var_401_int = var_398_string + var_400_int; // 0x1df0 Add
	var_402_string = " not found"; // 0x1df1 PushS
	var_403_int = var_401_int + var_402_string; // 0x1df2 Add
	Trace(var_403_int); // 0x1df3 Func
	goto Label_7673; // 0x1df5 Jump
	
Label_7673:
	var_404_object = var_383_object; // 0x1df9 Push
	if(var_404_object == 0) goto Label_7677; // 0x1dfa JumpB
	RemoveActor(var_383_object); // 0x1dfb Func
	
Label_7677:
	var_383_object = 0; // 0x1dfd SetNull
	var_405_object = GlobalVars[14]; // 0x1dfe PushGE
	set(var_378_int, var_383_object); // 0x1dff ObjFunc
	var_406_string = "Cleanup bonfire "; // 0x1e01 PushS
	var_407_int = 1; // 0x1e02 PushI
	var_408_int = var_378_int + var_407_int; // 0x1e03 Add
	var_409_int = var_406_string + var_408_int; // 0x1e04 Add
	var_410_string = "... ok"; // 0x1e05 PushS
	var_411_int = var_409_int + var_410_string; // 0x1e06 Add
	Trace(var_411_int); // 0x1e07 Func
	return 6; // 0x1e09 Return
	
Label_7670:
	var_412_bool = 0; // 0x1df6 PushB
	Switch(var_412_bool); // 0x1df7 ObjFunc
}


func_466(var_2214_int, var_2215_string, var_2216_string, var_2217_int, var_2218_int, var_2219_int)
{
	var_2220_object = Obj(); var_2221_object = Obj(); // 0x1d2 PushV
	GetMainOutdoorScene(var_2221_object); // 0x1d3 Func
	var_2222_bool = var_2221_object == 0; // 0x1d5 NullEq
	if(var_2222_bool == 0) goto Label_475; // 0x1d6 JumpB
	var_2223_string = "City manager: Can't find main outdoor scene"; // 0x1d7 PushS
	Trace(var_2223_string); // 0x1d8 Func
	return 2; // 0x1da Return
	
Label_475:
	SetRegionActorCount(var_2214_int, var_2215_string, var_2216_string, var_2217_int, var_2218_int, var_2219_int); // 0x1db ObjFunc
	return 2; // 0x1dd Return
}


func_5586()
{
	return 0; // 0x15d3 Return
}


func_9682(var_5610_int, var_5611_float)
{
	var_5612_int = 0; var_5613_int = 0; var_5614_int = 0; var_5615_float = 0; // 0x25d3 PushV
	var_5613_int = 530533; // 0x25d4 MovI
	var_5614_int = 530532; // 0x25d5 MovI
	var_5615_float = var_5611_float; // 0x25d6 Mov
	func_12022(var_5612_int, var_5613_int, var_5614_int, var_5615_float); // 0x25d7 NEW_2
	var_5610_int = var_5612_int; // 0x25d8 Mov
	return 0; // 0x25da Return
}


func_5588(var_1374_int)
{
	var_1379_int = 0; var_1380_int = 0; // 0x15d5 PushV
	var_1379_int = 6; // 0x15d6 MovI
	var_1380_int = var_1374_int; // 0x15d7 Mov
	func_1000(var_1379_int, var_1380_int); // 0x15d8 NEW_2
	return 0; // 0x15da Return
}


func_11732(var_6090_bool)
{
	var_6093_int = 0; var_6094_string = ""; // 0x2dd5 PushV
	var_6094_string = "b10KapellaVisit"; // 0x2dd6 MovS
	func_106(var_6093_int, var_6094_string); // 0x2dd7 NEW_2
	var_6095_int = 0; // 0x2dd9 PushI
	var_6096_bool = var_6093_int != var_6095_int; // 0x2dda Neq
	if(var_6096_bool == 0) goto Label_11742; // 0x2ddb JumpB
	var_6090_bool = 1; // 0x2ddc MovB
	return 0; // 0x2ddd Return
	
Label_11742:
	var_6090_bool = 0; // 0x2dde MovB
	return 0; // 0x2ddf Return
}


func_5595()
{
	var_2657_int = 0; var_2658_bool = 0; // 0x15dc PushV
	var_2657_int = 6; // 0x15dd MovI
	var_2658_bool = 0; // 0x15de MovB
	func_729(var_2657_int, var_2658_bool); // 0x15df NEW_2
	return 0; // 0x15e1 Return
}


func_9691(var_5722_int, var_5723_float)
{
	var_5724_int = 0; var_5725_int = 0; var_5726_int = 0; var_5727_float = 0; // 0x25dc PushV
	var_5725_int = 530572; // 0x25dd MovI
	var_5726_int = 530571; // 0x25de MovI
	var_5727_float = var_5723_float; // 0x25df Mov
	func_12022(var_5724_int, var_5725_int, var_5726_int, var_5727_float); // 0x25e0 NEW_2
	var_5722_int = var_5724_int; // 0x25e1 Mov
	return 0; // 0x25e3 Return
}


func_479(var_2141_int, var_2142_string, var_2143_string, var_2144_int)
{
	var_2145_object = Obj(); var_2146_object = Obj(); // 0x1df PushV
	GetMainOutdoorScene(var_2146_object); // 0x1e0 Func
	var_2147_bool = var_2146_object == 0; // 0x1e2 NullEq
	if(var_2147_bool == 0) goto Label_488; // 0x1e3 JumpB
	var_2148_string = "City manager: Can't find main outdoor scene"; // 0x1e4 PushS
	Trace(var_2148_string); // 0x1e5 Func
	return 2; // 0x1e7 Return
	
Label_488:
	SetRegionActorCountByType(var_2141_int, var_2142_string, var_2143_string, var_2144_int); // 0x1e8 ObjFunc
	return 2; // 0x1ea Return
}


func_11744(var_6106_bool)
{
	var_6109_int = 0; var_6110_string = ""; // 0x2de1 PushV
	var_6110_string = "b9BlockVisit"; // 0x2de2 MovS
	func_106(var_6109_int, var_6110_string); // 0x2de3 NEW_2
	var_6111_int = 0; // 0x2de5 PushI
	var_6112_bool = var_6109_int != var_6111_int; // 0x2de6 Neq
	if(var_6112_bool == 0) goto Label_11754; // 0x2de7 JumpB
	var_6106_bool = 1; // 0x2de8 MovB
	return 0; // 0x2de9 Return
	
Label_11754:
	var_6106_bool = 0; // 0x2dea MovB
	return 0; // 0x2deb Return
}


func_5602()
{
	var_3783_int = 0; var_3784_bool = 0; // 0x15e3 PushV
	var_3783_int = 6; // 0x15e4 MovI
	var_3784_bool = 0; // 0x15e5 MovB
	func_729(var_3783_int, var_3784_bool); // 0x15e6 NEW_2
	return 0; // 0x15e8 Return
}


func_9700(var_4946_int, var_4947_float)
{
	var_4948_int = 0; var_4949_int = 0; var_4950_int = 0; var_4951_float = 0; // 0x25e5 PushV
	var_4949_int = 522713; // 0x25e6 MovI
	var_4950_int = 522712; // 0x25e7 MovI
	var_4951_float = var_4947_float; // 0x25e8 Mov
	func_12022(var_4948_int, var_4949_int, var_4950_int, var_4951_float); // 0x25e9 NEW_2
	var_4946_int = var_4948_int; // 0x25ea Mov
	return 0; // 0x25ec Return
}


func_2534(var_3026_int, var_3027_int, var_3028_int)
{
	var_3029_int = 0; var_3030_int = 0; var_3031_int = 0; var_3032_int = 0; // 0x9e6 PushV
	var_3033_bool = 0; // 0x9e7 PushV
	var_3033_bool = 0; // 0x9e8 MovB
	var_3034_int = 8; // 0x9e9 PushI
	var_3035_bool = var_3028_int > var_3034_int; // 0x9ea GT
	if(var_3035_bool == 0) goto Label_2544; // 0x9eb JumpB
	var_3036_int = 21; // 0x9ec PushI
	var_3037_bool = var_3028_int < var_3036_int; // 0x9ed LT
	if(var_3037_bool == 0) goto Label_2544; // 0x9ee JumpB
	var_3033_bool = 1; // 0x9ef MovB
	
Label_2544:
	if(var_3033_bool == 0) goto Label_2599; // 0x9f0 JumpB
	var_3038_int = 0; var_3039_string = ""; var_3040_string = ""; var_3041_int = 0; // 0x9f1 PushV
	var_3038_int = var_3026_int; // 0x9f2 Mov
	var_3039_string = "pers_vaxxabit"; // 0x9f3 MovS
	var_3040_string = "vaxxabit_d.xml"; // 0x9f4 MovS
	var_3041_int = 6; // 0x9f5 MovI
	func_453(var_3038_int, var_3039_string, var_3040_string, var_3041_int); // 0x9f6 NEW_2
	var_3042_int = 0; var_3043_string = ""; var_3044_string = ""; var_3045_int = 0; // 0x9f8 PushV
	var_3042_int = var_3026_int; // 0x9f9 Mov
	var_3043_string = "pers_vaxxabitka"; // 0x9fa MovS
	var_3044_string = "vaxxabitka_d.xml"; // 0x9fb MovS
	var_3045_int = 6; // 0x9fc MovI
	func_453(var_3042_int, var_3043_string, var_3044_string, var_3045_int); // 0x9fd NEW_2
	var_3046_int = 0; var_3047_string = ""; var_3048_string = ""; var_3049_int = 0; // 0x9ff PushV
	var_3046_int = var_3026_int; // 0xa00 Mov
	var_3047_string = "pers_rat_big"; // 0xa01 MovS
	var_3048_string = "rat_big.xml"; // 0xa02 MovS
	var_3049_int = 3; // 0xa03 MovI
	func_453(var_3046_int, var_3047_string, var_3048_string, var_3049_int); // 0xa04 NEW_2
	var_3050_int = 0; var_3051_string = ""; var_3052_string = ""; var_3053_int = 0; // 0xa06 PushV
	var_3050_int = var_3026_int; // 0xa07 Mov
	var_3051_string = "fog"; // 0xa08 MovS
	var_3052_string = "fog.xml"; // 0xa09 MovS
	var_3053_int = 8; // 0xa0a MovI
	func_479(var_3050_int, var_3051_string, var_3052_string, var_3053_int); // 0xa0b NEW_2
	var_3054_int = 5; // 0xa0d PushI
	var_3055_bool = var_3027_int >= var_3054_int; // 0xa0e GE
	if(var_3055_bool == 0) goto Label_2583; // 0xa0f JumpB
	var_3056_int = 0; var_3057_string = ""; var_3058_string = ""; var_3059_int = 0; // 0xa10 PushV
	var_3056_int = var_3026_int; // 0xa11 Mov
	var_3057_string = "fog"; // 0xa12 MovS
	var_3058_string = "fog_hunter.xml"; // 0xa13 MovS
	var_3059_int = 3; // 0xa14 MovI
	func_479(var_3056_int, var_3057_string, var_3058_string, var_3059_int); // 0xa15 NEW_2
	
Label_2583:
	var_3060_int = 1; // 0xa17 PushI
	var_3061_float = 0; var_3062_int = 0; // 0xa18 PushV
	var_3062_int = var_3027_int; // 0xa19 Mov
	func_1205(var_3061_float, var_3062_int); // 0xa1a NEW_2
	var_3031_int = var_3060_int * var_3061_float; // 0xa1c Mult2
	var_3063_int = var_3031_int; // 0xa1d Push
	if(var_3063_int == 0) goto Label_2598; // 0xa1e JumpB
	var_3064_int = 0; var_3065_string = ""; var_3066_string = ""; var_3067_int = 0; // 0xa1f PushV
	var_3064_int = var_3026_int; // 0xa20 Mov
	var_3065_string = "pers_bomber"; // 0xa21 MovS
	var_3066_string = "bomber.xml"; // 0xa22 MovS
	var_3067_int = var_3031_int; // 0xa23 Mov
	func_453(var_3064_int, var_3065_string, var_3066_string, var_3067_int); // 0xa24 NEW_2
	
Label_2598:
	goto Label_2652; // 0xa26 Jump
	
Label_2652:
	var_3068_int = 0; var_3069_string = ""; var_3070_string = ""; var_3071_int = 0; var_3072_int = 0; var_3073_int = 0; // 0xa5c PushV
	var_3068_int = var_3026_int; // 0xa5d Mov
	var_3069_string = "pers_worker"; // 0xa5e MovS
	var_3070_string = "agony1_man.xml"; // 0xa5f MovS
	var_3071_int = 2; // 0xa60 MovI
	var_3072_int = 4; // 0xa61 MovI
	var_3073_int = 4; // 0xa62 MovI
	func_466(var_3068_int, var_3069_string, var_3070_string, var_3071_int, var_3072_int, var_3073_int); // 0xa63 NEW_2
	var_3074_int = 0; var_3075_string = ""; var_3076_string = ""; var_3077_int = 0; var_3078_int = 0; var_3079_int = 0; // 0xa65 PushV
	var_3074_int = var_3026_int; // 0xa66 Mov
	var_3075_string = "pers_unosha"; // 0xa67 MovS
	var_3076_string = "agony1_man.xml"; // 0xa68 MovS
	var_3077_int = 2; // 0xa69 MovI
	var_3078_int = 4; // 0xa6a MovI
	var_3079_int = 4; // 0xa6b MovI
	func_466(var_3074_int, var_3075_string, var_3076_string, var_3077_int, var_3078_int, var_3079_int); // 0xa6c NEW_2
	var_3080_int = 0; var_3081_string = ""; var_3082_string = ""; var_3083_int = 0; var_3084_int = 0; var_3085_int = 0; // 0xa6e PushV
	var_3080_int = var_3026_int; // 0xa6f Mov
	var_3081_string = "pers_woman"; // 0xa70 MovS
	var_3082_string = "agony1_woman.xml"; // 0xa71 MovS
	var_3083_int = 2; // 0xa72 MovI
	var_3084_int = 4; // 0xa73 MovI
	var_3085_int = 4; // 0xa74 MovI
	func_466(var_3080_int, var_3081_string, var_3082_string, var_3083_int, var_3084_int, var_3085_int); // 0xa75 NEW_2
	var_3086_int = 0; var_3087_string = ""; var_3088_string = ""; var_3089_int = 0; var_3090_int = 0; var_3091_int = 0; // 0xa77 PushV
	var_3086_int = var_3026_int; // 0xa78 Mov
	var_3087_string = "pers_wasted_girl"; // 0xa79 MovS
	var_3088_string = "agony1_woman.xml"; // 0xa7a MovS
	var_3089_int = 2; // 0xa7b MovI
	var_3090_int = 4; // 0xa7c MovI
	var_3091_int = 4; // 0xa7d MovI
	func_466(var_3086_int, var_3087_string, var_3088_string, var_3089_int, var_3090_int, var_3091_int); // 0xa7e NEW_2
	var_3092_bool = 0; var_3093_int = 0; var_3094_int = 0; // 0xa80 PushV
	var_3093_int = var_3027_int; // 0xa81 Mov
	var_3094_int = var_3028_int; // 0xa82 Mov
	func_1295(var_3092_bool, var_3093_int, var_3094_int); // 0xa83 NEW_2
	if(var_3092_bool == 0) goto Label_2701; // 0xa85 JumpB
	var_3095_int = 0; var_3096_string = ""; var_3097_string = ""; var_3098_int = 0; // 0xa86 PushV
	var_3095_int = var_3026_int; // 0xa87 Mov
	var_3096_string = "pers_soldat"; // 0xa88 MovS
	var_3097_string = "soldier_marauder.xml"; // 0xa89 MovS
	var_3098_int = 2; // 0xa8a MovI
	func_453(var_3095_int, var_3096_string, var_3097_string, var_3098_int); // 0xa8b NEW_2
	
Label_2701:
	var_3099_bool = 0; var_3100_int = 0; // 0xa8d PushV
	var_3100_int = var_3027_int; // 0xa8e Mov
	func_1322(var_3099_bool, var_3100_int); // 0xa8f NEW_2
	if(var_3099_bool == 0) goto Label_2713; // 0xa91 JumpB
	var_3101_int = 0; var_3102_string = ""; var_3103_string = ""; var_3104_int = 0; // 0xa92 PushV
	var_3101_int = var_3026_int; // 0xa93 Mov
	var_3102_string = "pers_sanitar"; // 0xa94 MovS
	var_3103_string = "sanitar.xml"; // 0xa95 MovS
	var_3104_int = 2; // 0xa96 MovI
	func_453(var_3101_int, var_3102_string, var_3103_string, var_3104_int); // 0xa97 NEW_2
	
Label_2713:
	return 4; // 0xa99 Return
	
Label_2599:
	var_3105_int = 0; var_3106_string = ""; var_3107_string = ""; var_3108_int = 0; // 0xa27 PushV
	var_3105_int = var_3026_int; // 0xa28 Mov
	var_3106_string = "pers_vaxxabit"; // 0xa29 MovS
	var_3107_string = "vaxxabit_d.xml"; // 0xa2a MovS
	var_3108_int = 6; // 0xa2b MovI
	func_453(var_3105_int, var_3106_string, var_3107_string, var_3108_int); // 0xa2c NEW_2
	var_3109_int = 0; var_3110_string = ""; var_3111_string = ""; var_3112_int = 0; // 0xa2e PushV
	var_3109_int = var_3026_int; // 0xa2f Mov
	var_3110_string = "pers_vaxxabitka"; // 0xa30 MovS
	var_3111_string = "vaxxabitka_d.xml"; // 0xa31 MovS
	var_3112_int = 5; // 0xa32 MovI
	func_453(var_3109_int, var_3110_string, var_3111_string, var_3112_int); // 0xa33 NEW_2
	var_3113_int = 0; var_3114_string = ""; var_3115_string = ""; var_3116_int = 0; // 0xa35 PushV
	var_3113_int = var_3026_int; // 0xa36 Mov
	var_3114_string = "pers_rat_big"; // 0xa37 MovS
	var_3115_string = "rat_big.xml"; // 0xa38 MovS
	var_3116_int = 4; // 0xa39 MovI
	func_453(var_3113_int, var_3114_string, var_3115_string, var_3116_int); // 0xa3a NEW_2
	var_3117_int = 0; var_3118_string = ""; var_3119_string = ""; var_3120_int = 0; // 0xa3c PushV
	var_3117_int = var_3026_int; // 0xa3d Mov
	var_3118_string = "fog"; // 0xa3e MovS
	var_3119_string = "fog.xml"; // 0xa3f MovS
	var_3120_int = 6; // 0xa40 MovI
	func_479(var_3117_int, var_3118_string, var_3119_string, var_3120_int); // 0xa41 NEW_2
	var_3121_int = 5; // 0xa43 PushI
	var_3122_bool = var_3027_int >= var_3121_int; // 0xa44 GE
	if(var_3122_bool == 0) goto Label_2637; // 0xa45 JumpB
	var_3123_int = 0; var_3124_string = ""; var_3125_string = ""; var_3126_int = 0; // 0xa46 PushV
	var_3123_int = var_3026_int; // 0xa47 Mov
	var_3124_string = "fog"; // 0xa48 MovS
	var_3125_string = "fog_hunter.xml"; // 0xa49 MovS
	var_3126_int = 2; // 0xa4a MovI
	func_479(var_3123_int, var_3124_string, var_3125_string, var_3126_int); // 0xa4b NEW_2
	
Label_2637:
	var_3127_int = 1; // 0xa4d PushI
	var_3128_float = 0; var_3129_int = 0; // 0xa4e PushV
	var_3129_int = var_3027_int; // 0xa4f Mov
	func_1205(var_3128_float, var_3129_int); // 0xa50 NEW_2
	var_3032_int = var_3127_int * var_3128_float; // 0xa52 Mult2
	var_3130_int = var_3032_int; // 0xa53 Push
	if(var_3130_int == 0) goto Label_2652; // 0xa54 JumpB
	var_3131_int = 0; var_3132_string = ""; var_3133_string = ""; var_3134_int = 0; // 0xa55 PushV
	var_3131_int = var_3026_int; // 0xa56 Mov
	var_3132_string = "pers_bomber"; // 0xa57 MovS
	var_3133_string = "bomber.xml"; // 0xa58 MovS
	var_3134_int = var_3032_int; // 0xa59 Mov
	func_453(var_3131_int, var_3132_string, var_3133_string, var_3134_int); // 0xa5a NEW_2
}


func_6633()
{
	var_265_string = "r6_house2_03"; // 0x19ea PushS
	add(var_265_string); // 0x19eb ObjFunc
	var_266_string = "r6_house4_01_i2"; // 0x19ed PushS
	add(var_266_string); // 0x19ee ObjFunc
	var_267_string = "r6_house4_02_i2"; // 0x19f0 PushS
	add(var_267_string); // 0x19f1 ObjFunc
	var_268_string = "r6_house4_02"; // 0x19f3 PushS
	add(var_268_string); // 0x19f4 ObjFunc
	var_269_string = "r6_house3_02_i2"; // 0x19f6 PushS
	add(var_269_string); // 0x19f7 ObjFunc
	var_270_string = "r6_house3_02"; // 0x19f9 PushS
	add(var_270_string); // 0x19fa ObjFunc
	var_271_string = "r6_house3_01_i2"; // 0x19fc PushS
	add(var_271_string); // 0x19fd ObjFunc
	var_272_string = "r6_house3_01"; // 0x19ff PushS
	add(var_272_string); // 0x1a00 ObjFunc
	var_273_string = "r6_house2_01"; // 0x1a02 PushS
	add(var_273_string); // 0x1a03 ObjFunc
	var_274_string = "r6_house7_01"; // 0x1a05 PushS
	add(var_274_string); // 0x1a06 ObjFunc
	var_275_string = "r6_house7_02"; // 0x1a08 PushS
	add(var_275_string); // 0x1a09 ObjFunc
	var_276_string = "r6_House6_01"; // 0x1a0b PushS
	add(var_276_string); // 0x1a0c ObjFunc
	var_277_string = "r6_house2_02"; // 0x1a0e PushS
	add(var_277_string); // 0x1a0f ObjFunc
	return 0; // 0x1a11 Return
}


func_4586(var_2274_int, var_2275_int, var_2276_object, var_2277_object, var_2278_object, var_2279_object)
{
	var_2280_int = 0; // 0x11eb PushI
	var_2281_bool = var_2275_int == var_2280_int; // 0x11ec Eq
	if(var_2281_bool == 0) goto Label_4626; // 0x11ed JumpB
	var_2282_int = 0; var_2283_bool = 0; // 0x11ee PushV
	var_2282_int = 1; // 0x11ef MovI
	var_2283_bool = 1; // 0x11f0 MovB
	func_746(var_2282_int, var_2283_bool); // 0x11f1 NEW_2
	var_2284_int = 0; var_2285_bool = 0; var_2286_int = 0; // 0x11f3 PushV
	var_2284_int = 1; // 0x11f4 MovI
	var_2285_bool = 1; // 0x11f5 MovB
	var_2286_int = 1; // 0x11f6 MovI
	func_763(var_2284_int, var_2285_bool, var_2286_int); // 0x11f7 NEW_2
	var_2287_int = 0; var_2288_int = 0; var_2289_object = Obj(); var_2290_object = Obj(); var_2291_object = Obj(); // 0x11f9 PushV
	var_2287_int = 1; // 0x11fa MovI
	var_2288_int = var_2274_int; // 0x11fb Mov
	var_2289_object = var_2276_object; // 0x11fc Mov
	var_2290_object = var_2277_object; // 0x11fd Mov
	var_2291_object = var_2278_object; // 0x11fe Mov
	func_591(var_2287_int, var_2288_int, var_2289_object, var_2290_object, var_2291_object); // 0x11ff NEW_2
	var_2292_object = Obj(); var_2293_int = 0; // 0x1201 PushV
	var_2292_object = var_2279_object; // 0x1202 Mov
	var_2293_int = 1; // 0x1203 MovI
	func_255(var_2293_int); // 0x1204 NEW_2
	var_2294_int = 0; var_2295_bool = 0; var_2296_int = 0; // 0x1206 PushV
	var_2294_int = 1; // 0x1207 MovI
	var_2295_bool = 1; // 0x1208 MovB
	var_2296_int = 8; // 0x1209 MovI
	func_820(var_2294_int, var_2295_bool, var_2296_int); // 0x120a NEW_2
	var_2297_int = 0; var_2298_bool = 0; var_2299_int = 0; // 0x120c PushV
	var_2297_int = 1; // 0x120d MovI
	var_2298_bool = 0; // 0x120e MovB
	var_2299_int = 8; // 0x120f MovI
	func_882(var_2297_int, var_2298_bool, var_2299_int); // 0x1210 NEW_2
	
Label_4626:
	var_2300_int = 0; var_2301_bool = 0; // 0x1212 PushV
	var_2300_int = 1; // 0x1213 MovI
	var_2301_bool = 0; // 0x1214 MovB
	func_729(var_2300_int, var_2301_bool); // 0x1215 NEW_2
	var_2302_int = 0; var_2303_int = 0; var_2304_int = 0; // 0x1217 PushV
	var_2302_int = 1; // 0x1218 MovI
	var_2303_int = var_2274_int; // 0x1219 Mov
	var_2304_int = var_2275_int; // 0x121a Mov
	func_3254(var_2302_int, var_2303_int, var_2304_int); // 0x121b NEW_2
	return 0; // 0x121d Return
}


func_5609()
{
	var_177_string = "House6_02"; // 0x15ea PushS
	add(var_177_string); // 0x15eb ObjFunc
	var_178_string = "House6_01"; // 0x15ed PushS
	add(var_178_string); // 0x15ee ObjFunc
	var_179_string = "house_2_01"; // 0x15f0 PushS
	add(var_179_string); // 0x15f1 ObjFunc
	var_180_string = "house7_03"; // 0x15f3 PushS
	add(var_180_string); // 0x15f4 ObjFunc
	var_181_string = "house7_02"; // 0x15f6 PushS
	add(var_181_string); // 0x15f7 ObjFunc
	var_182_string = "house3_01_i2"; // 0x15f9 PushS
	add(var_182_string); // 0x15fa ObjFunc
	var_183_string = "house3_01"; // 0x15fc PushS
	add(var_183_string); // 0x15fd ObjFunc
	var_184_string = "house_2_03"; // 0x15ff PushS
	add(var_184_string); // 0x1600 ObjFunc
	var_185_string = "house_2_02"; // 0x1602 PushS
	add(var_185_string); // 0x1603 ObjFunc
	var_186_string = "house4_01_i2"; // 0x1605 PushS
	add(var_186_string); // 0x1606 ObjFunc
	var_187_string = "house4_01"; // 0x1608 PushS
	add(var_187_string); // 0x1609 ObjFunc
	var_188_string = "House6_05"; // 0x160b PushS
	add(var_188_string); // 0x160c ObjFunc
	var_189_string = "House6_04"; // 0x160e PushS
	add(var_189_string); // 0x160f ObjFunc
	var_190_string = "House6_03"; // 0x1611 PushS
	add(var_190_string); // 0x1612 ObjFunc
	return 0; // 0x1614 Return
}


func_492(var_570_int, var_571_bool)
{
	var_572_object = Obj(); var_573_object = Obj(); var_574_bool = 0; var_575_object = Obj(); var_576_object = Obj(); var_577_object = Obj(); var_578_bool = 0; var_579_object = Obj(); // 0x1ec PushV
	GetMainOutdoorScene(var_576_object); // 0x1ed Func
	var_580_int = 101; // 0x1ef PushI
	var_581_int = var_580_int + var_570_int; // 0x1f0 Add
	GetGroupActors(var_577_object, var_581_int); // 0x1f1 ObjFunc
	var_582_object = var_577_object; // 0x1f3 Push
	if(var_582_object == 0) goto Label_523; // 0x1f4 JumpB
	
Label_501:
	Next(var_578_bool, var_579_object); // 0x1f5 ObjFunc
	var_583_bool = var_578_bool; // 0x1f7 Push
	if(var_583_bool == 0) goto Label_522; // 0x1f8 JumpB
	var_584_bool = 0; var_585_object = Obj(); var_586_string = ""; // 0x1f9 PushV
	var_585_object = var_579_object; // 0x1fa Mov
	var_586_string = "locked"; // 0x1fb MovS
	func_88(var_584_bool, var_585_object, var_586_string); // 0x1fc NEW_2
	if(var_584_bool == 0) goto Label_515; // 0x1fe JumpB
	var_593_string = "locked"; // 0x1ff PushS
	SetProperty(var_593_string, var_571_bool); // 0x200 ObjFunc
	goto Label_521; // 0x202 Jump
	
Label_521:
	goto Label_501; // 0x209 Jump
	
Label_515:
	var_594_string = "Actor ""; // 0x203 PushS
	var_595_int = var_594_string + var_579_object; // 0x204 Add
	var_596_string = "" can't be locked"; // 0x205 PushS
	var_597_int = var_595_int + var_596_string; // 0x206 Add
	Trace(var_597_int); // 0x207 Func
	
Label_522:
	var_579_object = 0; // 0x20a SetNull
	
Label_523:
	return 8; // 0x20b Return
}


func_11756(var_5805_bool)
{
	var_5808_int = 0; var_5809_string = ""; // 0x2ded PushV
	var_5809_string = "b5MladVladVisit"; // 0x2dee MovS
	func_106(var_5808_int, var_5809_string); // 0x2def NEW_2
	var_5810_int = 0; // 0x2df1 PushI
	var_5811_bool = var_5808_int != var_5810_int; // 0x2df2 Neq
	if(var_5811_bool == 0) goto Label_11766; // 0x2df3 JumpB
	var_5805_bool = 1; // 0x2df4 MovB
	return 0; // 0x2df5 Return
	
Label_11766:
	var_5805_bool = 0; // 0x2df6 MovB
	return 0; // 0x2df7 Return
}


func_9709(var_4906_int, var_4907_float)
{
	var_4908_int = 0; var_4909_int = 0; var_4910_int = 0; var_4911_float = 0; // 0x25ee PushV
	var_4909_int = 522715; // 0x25ef MovI
	var_4910_int = 522714; // 0x25f0 MovI
	var_4911_float = var_4907_float; // 0x25f1 Mov
	func_12022(var_4908_int, var_4909_int, var_4910_int, var_4911_float); // 0x25f2 NEW_2
	var_4906_int = var_4908_int; // 0x25f3 Mov
	return 0; // 0x25f5 Return
}


func_9718(var_4922_int, var_4923_float)
{
	var_4924_int = 0; var_4925_int = 0; var_4926_int = 0; var_4927_float = 0; // 0x25f7 PushV
	var_4925_int = 522719; // 0x25f8 MovI
	var_4926_int = 522718; // 0x25f9 MovI
	var_4927_float = var_4923_float; // 0x25fa Mov
	func_12022(var_4924_int, var_4925_int, var_4926_int, var_4927_float); // 0x25fb NEW_2
	var_4922_int = var_4924_int; // 0x25fc Mov
	return 0; // 0x25fe Return
}


func_10743()
{
	var_4998_object = Obj(); var_4999_object = Obj(); var_5000_object = Obj(); var_5001_object = Obj(); // 0x29f7 PushV
	var_5002_object = Obj(); // 0x29f8 PushV
	func_12030(var_5002_object); // 0x29f9 NEW_2
	var_5000_object = var_5002_object; // 0x29fa Mov
	var_5003_string = "b5q01DankoGotoAndrei"; // 0x29fc PushS
	FindMark(var_5001_object, var_5003_string); // 0x29fd ObjFunc
	var_5004_object = var_5001_object; // 0x29ff Push
	if(var_5004_object == 0) goto Label_10755; // 0x2a00 JumpB
	Remove(); // 0x2a01 ObjFunc
	
Label_10755:
	var_5005_string = "b5q01DankoGotoOspina"; // 0x2a03 PushS
	FindMark(var_5001_object, var_5005_string); // 0x2a04 ObjFunc
	var_5006_object = var_5001_object; // 0x2a06 Push
	if(var_5006_object == 0) goto Label_10762; // 0x2a07 JumpB
	Remove(); // 0x2a08 ObjFunc
	
Label_10762:
	var_5007_string = "b5q01VeraGotoStvorki"; // 0x2a0a PushS
	FindMark(var_5001_object, var_5007_string); // 0x2a0b ObjFunc
	var_5008_object = var_5001_object; // 0x2a0d Push
	if(var_5008_object == 0) goto Label_10769; // 0x2a0e JumpB
	Remove(); // 0x2a0f ObjFunc
	
Label_10769:
	var_5009_string = "b5q01GathererWife"; // 0x2a11 PushS
	FindMark(var_5001_object, var_5009_string); // 0x2a12 ObjFunc
	var_5010_object = var_5001_object; // 0x2a14 Push
	if(var_5010_object == 0) goto Label_10776; // 0x2a15 JumpB
	Remove(); // 0x2a16 ObjFunc
	
Label_10776:
	var_5011_bool = 0; var_5012_int = 0; // 0x2a18 PushV
	var_5012_int = 238; // 0x2a19 MovI
	func_12005(var_5011_bool, var_5012_int); // 0x2a1a NEW_2
	var_5013_bool = 0; var_5014_int = 0; // 0x2a1c PushV
	var_5014_int = 249; // 0x2a1d MovI
	func_12005(var_5013_bool, var_5014_int); // 0x2a1e NEW_2
	return 4; // 0x2a20 Return
}


func_11768(var_6134_bool)
{
	var_6137_int = 0; var_6138_string = ""; // 0x2df9 PushV
	var_6138_string = "resque_list"; // 0x2dfa MovS
	func_106(var_6137_int, var_6138_string); // 0x2dfb NEW_2
	var_6139_int = 0; // 0x2dfd PushI
	var_6140_bool = var_6137_int != var_6139_int; // 0x2dfe Neq
	if(var_6140_bool == 0) goto Label_11778; // 0x2dff JumpB
	var_6134_bool = 1; // 0x2e00 MovB
	return 0; // 0x2e01 Return
	
Label_11778:
	var_6134_bool = 0; // 0x2e02 MovB
	return 0; // 0x2e03 Return
}


func_9727(var_4938_int, var_4939_float)
{
	var_4940_int = 0; var_4941_int = 0; var_4942_int = 0; var_4943_float = 0; // 0x2600 PushV
	var_4941_int = 522717; // 0x2601 MovI
	var_4942_int = 522716; // 0x2602 MovI
	var_4943_float = var_4939_float; // 0x2603 Mov
	func_12022(var_4940_int, var_4941_int, var_4942_int, var_4943_float); // 0x2604 NEW_2
	var_4938_int = var_4940_int; // 0x2605 Mov
	return 0; // 0x2607 Return
}


func_11780(var_4978_bool)
{
	var_4981_int = 0; var_4982_string = ""; // 0x2e05 PushV
	var_4982_string = "b3BigVladVisit"; // 0x2e06 MovS
	func_106(var_4981_int, var_4982_string); // 0x2e07 NEW_2
	var_4983_int = 0; // 0x2e09 PushI
	var_4984_bool = var_4981_int != var_4983_int; // 0x2e0a Neq
	if(var_4984_bool == 0) goto Label_11790; // 0x2e0b JumpB
	var_4978_bool = 1; // 0x2e0c MovB
	return 0; // 0x2e0d Return
	
Label_11790:
	var_4978_bool = 0; // 0x2e0e MovB
	return 0; // 0x2e0f Return
}


func_9736(var_5733_int, var_5734_float)
{
	var_5735_int = 0; var_5736_int = 0; var_5737_int = 0; var_5738_float = 0; // 0x2609 PushV
	var_5736_int = 530574; // 0x260a MovI
	var_5737_int = 530573; // 0x260b MovI
	var_5738_float = var_5734_float; // 0x260c Mov
	func_12022(var_5735_int, var_5736_int, var_5737_int, var_5738_float); // 0x260d NEW_2
	var_5733_int = var_5735_int; // 0x260e Mov
	return 0; // 0x2610 Return
}


func_7692(var_4387_object, var_4389_string, var_4390_string, var_4391_string)
{
	var_4393_bool = 0; var_4394_cvector = CVector(0,0,0); var_4395_cvector = CVector(0,0,0); var_4396_object = Obj(); var_4397_bool = 0; var_4398_cvector = CVector(0,0,0); var_4399_cvector = CVector(0,0,0); var_4400_object = Obj(); // 0x1e0c PushV
	var_4401_string = "pt_guard_"; // 0x1e0d PushS
	var_4402_int = var_4401_string + var_4389_string; // 0x1e0e Add
	GetLocator(var_4402_int, var_4397_bool, var_4398_cvector, var_4399_cvector); // 0x1e0f ObjFunc
	var_4403_bool = var_4397_bool == 0; // 0x1e11 Not
	if(var_4403_bool == 0) goto Label_7704; // 0x1e12 JumpB
	var_4404_string = "Locator doesn't exist for guard "; // 0x1e13 PushS
	var_4405_int = var_4404_string + var_4389_string; // 0x1e14 Add
	Trace(var_4405_int); // 0x1e15 Func
	goto Label_7706; // 0x1e17 Jump
	
Label_7706:
	var_4387_object = var_4400_object; // 0x1e1a Mov
	return 8; // 0x1e1b Return
	
Label_7704:
	AddStationaryActor(var_4400_object, var_4398_cvector, var_4399_cvector, var_4390_string, var_4391_string); // 0x1e18 ObjFunc
}


func_526(var_2029_string, var_2031_string, var_2032_string)
{
	var_2038_object = Obj(); var_2039_int = 0; var_2040_bool = 0; var_2041_cvector = CVector(0,0,0); var_2042_cvector = CVector(0,0,0); var_2043_object = Obj(); var_2044_object = Obj(); var_2045_int = 0; var_2046_bool = 0; var_2047_cvector = CVector(0,0,0); var_2048_cvector = CVector(0,0,0); var_2049_object = Obj(); // 0x20e PushV
	GetMainOutdoorScene(var_2044_object); // 0x20f Func
	var_2045_int = 0; // 0x211 MovI
	
Label_530:
	var_2050_int = 1; // 0x212 PushI
	var_2051_int = var_2045_int + var_2050_int; // 0x213 Add
	var_2052_int = var_2029_string + var_2051_int; // 0x214 Add
	GetLocator(var_2052_int, var_2046_bool, var_2047_cvector, var_2048_cvector); // 0x215 ObjFunc
	var_2053_bool = var_2046_bool == 0; // 0x217 Not
	if(var_2053_bool == 0) goto Label_538; // 0x218 JumpB
	goto Label_546; // 0x219 Jump
	
Label_546:
	return 12; // 0x222 Return
	
Label_538:
	AddStationaryActor(var_2049_object, var_2047_cvector, var_2048_cvector, var_2031_string, var_2032_string); // 0x21a ObjFunc
	add(var_2049_object); // 0x21c ObjFunc
	var_2049_object = 0; // 0x21e SetNull
	var_2054_int = 1; // 0x21f PushI
	var_2045_int = var_2045_int + var_2054_int; // 0x220 Add2
	goto Label_530; // 0x221 Jump
}


func_11792(var_5224_bool)
{
	var_5227_int = 0; var_5228_string = ""; // 0x2e11 PushV
	var_5228_string = "b3DankoVisit"; // 0x2e12 MovS
	func_106(var_5227_int, var_5228_string); // 0x2e13 NEW_2
	var_5229_int = 0; // 0x2e15 PushI
	var_5230_bool = var_5227_int != var_5229_int; // 0x2e16 Neq
	if(var_5230_bool == 0) goto Label_11802; // 0x2e17 JumpB
	var_5224_bool = 1; // 0x2e18 MovB
	return 0; // 0x2e19 Return
	
Label_11802:
	var_5224_bool = 0; // 0x2e1a MovB
	return 0; // 0x2e1b Return
}


func_9745(var_4962_int, var_4963_float)
{
	var_4964_int = 0; var_4965_int = 0; var_4966_int = 0; var_4967_float = 0; // 0x2612 PushV
	var_4965_int = 529840; // 0x2613 MovI
	var_4966_int = 529839; // 0x2614 MovI
	var_4967_float = var_4963_float; // 0x2615 Mov
	func_12022(var_4964_int, var_4965_int, var_4966_int, var_4967_float); // 0x2616 NEW_2
	var_4962_int = var_4964_int; // 0x2617 Mov
	return 0; // 0x2619 Return
}


func_6674(var_1702_int, var_1703_int, var_1704_object, var_1705_object, var_1706_object, var_1707_object)
{
	var_1708_int = 0; // 0x1a13 PushI
	var_1709_bool = var_1703_int == var_1708_int; // 0x1a14 Eq
	if(var_1709_bool == 0) goto Label_6714; // 0x1a15 JumpB
	var_1710_int = 0; var_1711_bool = 0; // 0x1a16 PushV
	var_1710_int = 12; // 0x1a17 MovI
	var_1711_bool = 0; // 0x1a18 MovB
	func_746(var_1710_int, var_1711_bool); // 0x1a19 NEW_2
	var_1712_int = 0; var_1713_bool = 0; var_1714_int = 0; // 0x1a1b PushV
	var_1712_int = 12; // 0x1a1c MovI
	var_1713_bool = 0; // 0x1a1d MovB
	var_1714_int = 1; // 0x1a1e MovI
	func_763(var_1712_int, var_1713_bool, var_1714_int); // 0x1a1f NEW_2
	var_1715_int = 0; var_1716_int = 0; var_1717_object = Obj(); var_1718_object = Obj(); var_1719_object = Obj(); // 0x1a21 PushV
	var_1715_int = 12; // 0x1a22 MovI
	var_1716_int = var_1702_int; // 0x1a23 Mov
	var_1717_object = var_1704_object; // 0x1a24 Mov
	var_1718_object = var_1705_object; // 0x1a25 Mov
	var_1719_object = var_1706_object; // 0x1a26 Mov
	func_572(var_1716_int, var_1717_object, var_1718_object, var_1719_object); // 0x1a27 NEW_2
	var_1720_object = Obj(); var_1721_int = 0; // 0x1a29 PushV
	var_1720_object = var_1707_object; // 0x1a2a Mov
	var_1721_int = 0; // 0x1a2b MovI
	func_255(var_1721_int); // 0x1a2c NEW_2
	var_1722_int = 0; var_1723_bool = 0; var_1724_int = 0; // 0x1a2e PushV
	var_1722_int = 12; // 0x1a2f MovI
	var_1723_bool = 0; // 0x1a30 MovB
	var_1724_int = 4; // 0x1a31 MovI
	func_820(var_1722_int, var_1723_bool, var_1724_int); // 0x1a32 NEW_2
	var_1725_int = 0; var_1726_bool = 0; var_1727_int = 0; // 0x1a34 PushV
	var_1725_int = 12; // 0x1a35 MovI
	var_1726_bool = 0; // 0x1a36 MovB
	var_1727_int = 4; // 0x1a37 MovI
	func_882(var_1725_int, var_1726_bool, var_1727_int); // 0x1a38 NEW_2
	
Label_6714:
	var_1728_int = 0; var_1729_int = 0; // 0x1a3a PushV
	var_1728_int = 12; // 0x1a3b MovI
	var_1729_int = var_1703_int; // 0x1a3c Mov
	func_970(var_1728_int, var_1729_int); // 0x1a3d NEW_2
	var_1730_int = 0; var_1731_int = 0; var_1732_int = 0; // 0x1a3f PushV
	var_1730_int = 12; // 0x1a40 MovI
	var_1731_int = var_1702_int; // 0x1a41 Mov
	var_1732_int = var_1703_int; // 0x1a42 Mov
	func_1574(var_1730_int, var_1731_int, var_1732_int); // 0x1a43 NEW_2
	return 0; // 0x1a45 Return
}


func_8725(var_463_int, var_464_int, var_465_int, var_466_int)
{
	var_469_int = 0; var_470_object = Obj(); var_471_object = Obj(); var_472_object = Obj(); var_473_object = Obj(); var_474_int = 0; var_475_object = Obj(); var_476_object = Obj(); var_477_object = Obj(); var_478_object = Obj(); // 0x2215 PushV
	var_479_string = "City update"; // 0x2216 PushS
	Trace(var_479_string); // 0x2217 Func
	var_480_bool = 0; // 0x2219 PushV
	var_480_bool = 0; // 0x221a MovB
	var_481_bool = var_463_int == var_465_int; // 0x221b Eq
	if(var_481_bool == 0) goto Label_8736; // 0x221c JumpB
	var_482_bool = var_464_int == var_466_int; // 0x221d Eq
	if(var_482_bool == 0) goto Label_8736; // 0x221e JumpB
	var_480_bool = 1; // 0x221f MovB
	
Label_8736:
	if(var_480_bool == 0) goto Label_8740; // 0x2220 JumpB
	var_483_string = "kolokol"; // 0x2221 PushS
	PlaySound(var_483_string); // 0x2222 Func
	
Label_8740:
	var_474_int = 0; // 0x2224 MovI
	
Label_8741:
	var_484_int = 16; // 0x2225 PushI
	var_485_bool = var_474_int < var_484_int; // 0x2226 LT
	if(var_485_bool == 0) goto Label_8781; // 0x2227 JumpB
	var_486_int = 0; // 0x2228 PushV
	var_486_int = var_474_int; // 0x2229 Mov
	func_440(var_486_int); // 0x222a NEW_2
	var_491_bool = 0; var_492_int = 0; // 0x222c PushV
	var_492_int = var_474_int; // 0x222d Mov
	func_350(var_491_bool, var_492_int); // 0x222e NEW_2
	if(var_491_bool == 0) goto Label_8760; // 0x2230 JumpB
	var_500_int = 0; var_501_int = 0; var_502_int = 0; // 0x2231 PushV
	var_500_int = var_474_int; // 0x2232 Mov
	var_501_int = var_463_int; // 0x2233 Mov
	var_502_int = var_464_int; // 0x2234 Mov
	func_8845(var_500_int, var_501_int, var_502_int); // 0x2235 NEW_2
	goto Label_8778; // 0x2237 Jump
	
Label_8778:
	var_1977_int = 1; // 0x224a PushI
	var_474_int = var_474_int + var_1977_int; // 0x224b Add2
	goto Label_8741; // 0x224c Jump
	
Label_8760:
	var_1978_bool = 0; var_1979_int = 0; // 0x2238 PushV
	var_1979_int = var_474_int; // 0x2239 Mov
	func_380(var_1978_bool, var_1979_int); // 0x223a NEW_2
	if(var_1978_bool == 0) goto Label_8772; // 0x223c JumpB
	var_1987_int = 0; var_1988_int = 0; var_1989_int = 0; // 0x223d PushV
	var_1987_int = var_474_int; // 0x223e Mov
	var_1988_int = var_463_int; // 0x223f Mov
	var_1989_int = var_464_int; // 0x2240 Mov
	func_9070(var_1987_int, var_1988_int, var_1989_int); // 0x2241 NEW_2
	goto Label_8778; // 0x2243 Jump
	
Label_8772:
	var_3168_int = 0; var_3169_int = 0; var_3170_int = 0; // 0x2244 PushV
	var_3168_int = var_474_int; // 0x2245 Mov
	var_3169_int = var_463_int; // 0x2246 Mov
	var_3170_int = var_464_int; // 0x2247 Mov
	func_9295(var_3168_int, var_3169_int, var_3170_int); // 0x2248 NEW_2
	
Label_8781:
	var_4302_int = 0; // 0x224d PushI
	var_4303_bool = var_464_int == var_4302_int; // 0x224e Eq
	if(var_4303_bool == 0) goto Label_8817; // 0x224f JumpB
	var_4304_int = 0; // 0x2250 PushV
	var_4304_int = var_463_int; // 0x2251 Mov
	func_14584(var_4304_int); // 0x2252 NEW_2
	var_4334_bool = 0; // 0x2254 PushV
	var_4334_bool = 1; // 0x2255 MovB
	var_4335_int = 1; // 0x2256 PushI
	var_4336_bool = var_463_int == var_4335_int; // 0x2257 Eq
	if(var_4336_bool == 0) goto Label_8799; // 0x2258 JumpB
	var_4337_bool = 0; var_4338_int = 0; // 0x2259 PushV
	var_4338_int = 5; // 0x225a MovI
	func_380(var_4337_bool, var_4338_int); // 0x225b NEW_2
	if(var_4337_bool == 0) goto Label_8799; // 0x225d JumpB
	var_4334_bool = 0; // 0x225e MovB
	
Label_8799:
	if(var_4334_bool == 0) goto Label_8809; // 0x225f JumpB
	var_4339_string = "dt_house_1_07"; // 0x2260 PushS
	FindActor(var_475_object, var_4339_string); // 0x2261 Func
	var_4340_int = 200; // 0x2263 PushI
	var_4341_bool = 1; // 0x2264 PushB
	EnableSubset(var_4340_int, var_4341_bool); // 0x2265 ObjFunc
	var_475_object = 0; // 0x2267 SetNull
	goto Label_8817; // 0x2268 Jump
	
Label_8817:
	var_4342_int = 7; // 0x2271 PushI
	var_4343_bool = var_464_int == var_4342_int; // 0x2272 Eq
	if(var_4343_bool == 0) goto Label_8831; // 0x2273 JumpB
	var_4344_string = "day time"; // 0x2274 PushS
	Trace(var_4344_string); // 0x2275 Func
	GetMainOutdoorScene(var_477_object); // 0x2277 Func
	var_4345_int = 0; // 0x2279 PushI
	var_4346_bool = 0; // 0x227a PushB
	SwitchLights(var_4345_int, var_4346_bool); // 0x227b ObjFunc
	var_477_object = 0; // 0x227d SetNull
	goto Label_8844; // 0x227e Jump
	
Label_8844:
	return 10; // 0x228c Return
	
Label_8831:
	var_4347_int = 20; // 0x227f PushI
	var_4348_bool = var_464_int == var_4347_int; // 0x2280 Eq
	if(var_4348_bool == 0) goto Label_8844; // 0x2281 JumpB
	var_4349_string = "night time"; // 0x2282 PushS
	Trace(var_4349_string); // 0x2283 Func
	GetMainOutdoorScene(var_478_object); // 0x2285 Func
	var_4350_int = 0; // 0x2287 PushI
	var_4351_bool = 1; // 0x2288 PushB
	SwitchLights(var_4350_int, var_4351_bool); // 0x2289 ObjFunc
	var_478_object = 0; // 0x228b SetNull
	
Label_8809:
	var_4352_string = "dt_house_1_07"; // 0x2269 PushS
	FindActor(var_476_object, var_4352_string); // 0x226a Func
	var_4353_int = 200; // 0x226c PushI
	var_4354_bool = 0; // 0x226d PushB
	EnableSubset(var_4353_int, var_4354_bool); // 0x226e ObjFunc
	var_476_object = 0; // 0x2270 SetNull
}


func_5653(var_1383_int, var_1384_int, var_1385_object, var_1386_object, var_1387_object, var_1388_object)
{
	var_1389_int = 0; // 0x1616 PushI
	var_1390_bool = var_1384_int == var_1389_int; // 0x1617 Eq
	if(var_1390_bool == 0) goto Label_5693; // 0x1618 JumpB
	var_1391_int = 0; var_1392_bool = 0; // 0x1619 PushV
	var_1391_int = 7; // 0x161a MovI
	var_1392_bool = 0; // 0x161b MovB
	func_746(var_1391_int, var_1392_bool); // 0x161c NEW_2
	var_1393_int = 0; var_1394_bool = 0; var_1395_int = 0; // 0x161e PushV
	var_1393_int = 7; // 0x161f MovI
	var_1394_bool = 0; // 0x1620 MovB
	var_1395_int = 1; // 0x1621 MovI
	func_763(var_1393_int, var_1394_bool, var_1395_int); // 0x1622 NEW_2
	var_1396_int = 0; var_1397_int = 0; var_1398_object = Obj(); var_1399_object = Obj(); var_1400_object = Obj(); // 0x1624 PushV
	var_1396_int = 7; // 0x1625 MovI
	var_1397_int = var_1383_int; // 0x1626 Mov
	var_1398_object = var_1385_object; // 0x1627 Mov
	var_1399_object = var_1386_object; // 0x1628 Mov
	var_1400_object = var_1387_object; // 0x1629 Mov
	func_572(var_1397_int, var_1398_object, var_1399_object, var_1400_object); // 0x162a NEW_2
	var_1401_object = Obj(); var_1402_int = 0; // 0x162c PushV
	var_1401_object = var_1388_object; // 0x162d Mov
	var_1402_int = 0; // 0x162e MovI
	func_255(var_1402_int); // 0x162f NEW_2
	var_1403_int = 0; var_1404_bool = 0; var_1405_int = 0; // 0x1631 PushV
	var_1403_int = 7; // 0x1632 MovI
	var_1404_bool = 0; // 0x1633 MovB
	var_1405_int = 6; // 0x1634 MovI
	func_820(var_1403_int, var_1404_bool, var_1405_int); // 0x1635 NEW_2
	var_1406_int = 0; var_1407_bool = 0; var_1408_int = 0; // 0x1637 PushV
	var_1406_int = 7; // 0x1638 MovI
	var_1407_bool = 0; // 0x1639 MovB
	var_1408_int = 6; // 0x163a MovI
	func_882(var_1406_int, var_1407_bool, var_1408_int); // 0x163b NEW_2
	
Label_5693:
	var_1409_int = 0; var_1410_int = 0; // 0x163d PushV
	var_1409_int = 7; // 0x163e MovI
	var_1410_int = var_1384_int; // 0x163f Mov
	func_970(var_1409_int, var_1410_int); // 0x1640 NEW_2
	var_1411_int = 0; var_1412_int = 0; var_1413_int = 0; // 0x1642 PushV
	var_1411_int = 7; // 0x1643 MovI
	var_1412_int = var_1383_int; // 0x1644 Mov
	var_1413_int = var_1384_int; // 0x1645 Mov
	func_1574(var_1411_int, var_1412_int, var_1413_int); // 0x1646 NEW_2
	return 0; // 0x1648 Return
}


func_3609(var_3815_int, var_3816_int, var_3817_int)
{
	var_3818_int = 0; var_3819_int = 0; var_3820_int = 0; var_3821_int = 0; var_3822_int = 0; var_3823_int = 0; var_3824_int = 0; var_3825_int = 0; // 0xe19 PushV
	var_3826_bool = 0; // 0xe1a PushV
	var_3826_bool = 0; // 0xe1b MovB
	var_3827_int = 8; // 0xe1c PushI
	var_3828_bool = var_3817_int > var_3827_int; // 0xe1d GT
	if(var_3828_bool == 0) goto Label_3619; // 0xe1e JumpB
	var_3829_int = 21; // 0xe1f PushI
	var_3830_bool = var_3817_int < var_3829_int; // 0xe20 LT
	if(var_3830_bool == 0) goto Label_3619; // 0xe21 JumpB
	var_3826_bool = 1; // 0xe22 MovB
	
Label_3619:
	if(var_3826_bool == 0) goto Label_3696; // 0xe23 JumpB
	var_3831_int = 0; var_3832_string = ""; var_3833_string = ""; var_3834_int = 0; // 0xe24 PushV
	var_3831_int = var_3815_int; // 0xe25 Mov
	var_3832_string = "pers_rat"; // 0xe26 MovS
	var_3833_string = "rat.xml"; // 0xe27 MovS
	var_3834_int = 1; // 0xe28 MovI
	func_453(var_3831_int, var_3832_string, var_3833_string, var_3834_int); // 0xe29 NEW_2
	var_3835_int = 0; var_3836_string = ""; var_3837_string = ""; var_3838_int = 0; // 0xe2b PushV
	var_3835_int = var_3815_int; // 0xe2c Mov
	var_3836_string = "pers_alkash"; // 0xe2d MovS
	var_3837_string = "alkash.xml"; // 0xe2e MovS
	var_3838_int = 2; // 0xe2f MovI
	func_453(var_3835_int, var_3836_string, var_3837_string, var_3838_int); // 0xe30 NEW_2
	var_3839_int = 0; var_3840_string = ""; var_3841_string = ""; var_3842_int = 0; // 0xe32 PushV
	var_3839_int = var_3815_int; // 0xe33 Mov
	var_3840_string = "pers_dohodyaga"; // 0xe34 MovS
	var_3841_string = "dohodyaga.xml"; // 0xe35 MovS
	var_3842_int = 1; // 0xe36 MovI
	func_453(var_3839_int, var_3840_string, var_3841_string, var_3842_int); // 0xe37 NEW_2
	var_3843_int = 2; // 0xe39 PushI
	var_3844_float = 0; var_3845_int = 0; // 0xe3a PushV
	var_3845_int = var_3816_int; // 0xe3b Mov
	func_1115(var_3844_float, var_3845_int); // 0xe3c NEW_2
	var_3822_int = var_3843_int * var_3844_float; // 0xe3e Mult2
	var_3846_int = var_3822_int; // 0xe3f Push
	if(var_3846_int == 0) goto Label_3656; // 0xe40 JumpB
	var_3847_int = 0; var_3848_string = ""; var_3849_string = ""; var_3850_int = 0; // 0xe41 PushV
	var_3847_int = var_3815_int; // 0xe42 Mov
	var_3848_string = "pers_grabitel"; // 0xe43 MovS
	var_3849_string = "grabitel.xml"; // 0xe44 MovS
	var_3850_int = var_3822_int; // 0xe45 Mov
	func_453(var_3847_int, var_3848_string, var_3849_string, var_3850_int); // 0xe46 NEW_2
	
Label_3656:
	var_3851_int = 1; // 0xe48 PushI
	var_3852_int = var_3816_int + var_3851_int; // 0xe49 Add
	var_3853_int = 2; // 0xe4a PushI
	var_3854_bool = var_3852_int >= var_3853_int; // 0xe4b GE
	if(var_3854_bool == 0) goto Label_3680; // 0xe4c JumpB
	var_3855_int = 0; var_3856_string = ""; var_3857_string = ""; var_3858_int = 0; // 0xe4d PushV
	var_3855_int = var_3815_int; // 0xe4e Mov
	var_3856_string = "pers_patrool"; // 0xe4f MovS
	var_3857_string = "patrol.xml"; // 0xe50 MovS
	var_3858_int = 1; // 0xe51 MovI
	func_453(var_3855_int, var_3856_string, var_3857_string, var_3858_int); // 0xe52 NEW_2
	var_3859_bool = 0; var_3860_int = 0; // 0xe54 PushV
	var_3860_int = var_3816_int; // 0xe55 Mov
	func_1322(var_3859_bool, var_3860_int); // 0xe56 NEW_2
	if(var_3859_bool == 0) goto Label_3680; // 0xe58 JumpB
	var_3861_int = 0; var_3862_string = ""; var_3863_string = ""; var_3864_int = 0; // 0xe59 PushV
	var_3861_int = var_3815_int; // 0xe5a Mov
	var_3862_string = "pers_soldat_hand"; // 0xe5b MovS
	var_3863_string = "soldier_patrol.xml"; // 0xe5c MovS
	var_3864_int = 1; // 0xe5d MovI
	func_453(var_3861_int, var_3862_string, var_3863_string, var_3864_int); // 0xe5e NEW_2
	
Label_3680:
	var_3865_int = 1; // 0xe60 PushI
	var_3866_float = 0; var_3867_int = 0; // 0xe61 PushV
	var_3867_int = var_3816_int; // 0xe62 Mov
	func_1205(var_3866_float, var_3867_int); // 0xe63 NEW_2
	var_3823_int = var_3865_int * var_3866_float; // 0xe65 Mult2
	var_3868_int = var_3823_int; // 0xe66 Push
	if(var_3868_int == 0) goto Label_3695; // 0xe67 JumpB
	var_3869_int = 0; var_3870_string = ""; var_3871_string = ""; var_3872_int = 0; // 0xe68 PushV
	var_3869_int = var_3815_int; // 0xe69 Mov
	var_3870_string = "pers_bomber"; // 0xe6a MovS
	var_3871_string = "bomber.xml"; // 0xe6b MovS
	var_3872_int = var_3823_int; // 0xe6c Mov
	func_453(var_3869_int, var_3870_string, var_3871_string, var_3872_int); // 0xe6d NEW_2
	
Label_3695:
	goto Label_3771; // 0xe6f Jump
	
Label_3771:
	var_3873_bool = 0; var_3874_int = 0; var_3875_int = 0; // 0xebb PushV
	var_3874_int = var_3816_int; // 0xebc Mov
	var_3875_int = var_3817_int; // 0xebd Mov
	func_1295(var_3873_bool, var_3874_int, var_3875_int); // 0xebe NEW_2
	if(var_3873_bool == 0) goto Label_3784; // 0xec0 JumpB
	var_3876_int = 0; var_3877_string = ""; var_3878_string = ""; var_3879_int = 0; // 0xec1 PushV
	var_3876_int = var_3815_int; // 0xec2 Mov
	var_3877_string = "pers_soldat"; // 0xec3 MovS
	var_3878_string = "soldier_marauder.xml"; // 0xec4 MovS
	var_3879_int = 2; // 0xec5 MovI
	func_453(var_3876_int, var_3877_string, var_3878_string, var_3879_int); // 0xec6 NEW_2
	
Label_3784:
	var_3880_bool = 0; var_3881_int = 0; // 0xec8 PushV
	var_3881_int = var_3816_int; // 0xec9 Mov
	func_1322(var_3880_bool, var_3881_int); // 0xeca NEW_2
	if(var_3880_bool == 0) goto Label_3796; // 0xecc JumpB
	var_3882_int = 0; var_3883_string = ""; var_3884_string = ""; var_3885_int = 0; // 0xecd PushV
	var_3882_int = var_3815_int; // 0xece Mov
	var_3883_string = "pers_sanitar"; // 0xecf MovS
	var_3884_string = "sanitar.xml"; // 0xed0 MovS
	var_3885_int = 1; // 0xed1 MovI
	func_453(var_3882_int, var_3883_string, var_3884_string, var_3885_int); // 0xed2 NEW_2
	
Label_3796:
	return 8; // 0xed4 Return
	
Label_3696:
	var_3886_int = 0; var_3887_string = ""; var_3888_string = ""; var_3889_int = 0; // 0xe70 PushV
	var_3886_int = var_3815_int; // 0xe71 Mov
	var_3887_string = "pers_rat"; // 0xe72 MovS
	var_3888_string = "rat.xml"; // 0xe73 MovS
	var_3889_int = 3; // 0xe74 MovI
	func_453(var_3886_int, var_3887_string, var_3888_string, var_3889_int); // 0xe75 NEW_2
	var_3890_int = 0; var_3891_string = ""; var_3892_string = ""; var_3893_int = 0; // 0xe77 PushV
	var_3890_int = var_3815_int; // 0xe78 Mov
	var_3891_string = "pers_alkash"; // 0xe79 MovS
	var_3892_string = "alkash.xml"; // 0xe7a MovS
	var_3893_int = 1; // 0xe7b MovI
	func_453(var_3890_int, var_3891_string, var_3892_string, var_3893_int); // 0xe7c NEW_2
	var_3894_int = 0; var_3895_string = ""; var_3896_string = ""; var_3897_int = 0; // 0xe7e PushV
	var_3894_int = var_3815_int; // 0xe7f Mov
	var_3895_string = "pers_dohodyaga"; // 0xe80 MovS
	var_3896_string = "dohodyaga.xml"; // 0xe81 MovS
	var_3897_int = 1; // 0xe82 MovI
	func_453(var_3894_int, var_3895_string, var_3896_string, var_3897_int); // 0xe83 NEW_2
	var_3898_int = 3; // 0xe85 PushI
	var_3899_float = 0; var_3900_int = 0; // 0xe86 PushV
	var_3900_int = var_3816_int; // 0xe87 Mov
	func_1115(var_3899_float, var_3900_int); // 0xe88 NEW_2
	var_3824_int = var_3898_int * var_3899_float; // 0xe8a Mult2
	var_3901_int = var_3824_int; // 0xe8b Push
	if(var_3901_int == 0) goto Label_3732; // 0xe8c JumpB
	var_3902_int = 0; var_3903_string = ""; var_3904_string = ""; var_3905_int = 0; // 0xe8d PushV
	var_3902_int = var_3815_int; // 0xe8e Mov
	var_3903_string = "pers_grabitel"; // 0xe8f MovS
	var_3904_string = "grabitel.xml"; // 0xe90 MovS
	var_3905_int = var_3824_int; // 0xe91 Mov
	func_453(var_3902_int, var_3903_string, var_3904_string, var_3905_int); // 0xe92 NEW_2
	
Label_3732:
	var_3906_int = 1; // 0xe94 PushI
	var_3907_int = var_3816_int + var_3906_int; // 0xe95 Add
	var_3908_int = 2; // 0xe96 PushI
	var_3909_bool = var_3907_int >= var_3908_int; // 0xe97 GE
	if(var_3909_bool == 0) goto Label_3756; // 0xe98 JumpB
	var_3910_int = 0; var_3911_string = ""; var_3912_string = ""; var_3913_int = 0; // 0xe99 PushV
	var_3910_int = var_3815_int; // 0xe9a Mov
	var_3911_string = "pers_patrool"; // 0xe9b MovS
	var_3912_string = "patrol.xml"; // 0xe9c MovS
	var_3913_int = 1; // 0xe9d MovI
	func_453(var_3910_int, var_3911_string, var_3912_string, var_3913_int); // 0xe9e NEW_2
	var_3914_bool = 0; var_3915_int = 0; // 0xea0 PushV
	var_3915_int = var_3816_int; // 0xea1 Mov
	func_1322(var_3914_bool, var_3915_int); // 0xea2 NEW_2
	if(var_3914_bool == 0) goto Label_3756; // 0xea4 JumpB
	var_3916_int = 0; var_3917_string = ""; var_3918_string = ""; var_3919_int = 0; // 0xea5 PushV
	var_3916_int = var_3815_int; // 0xea6 Mov
	var_3917_string = "pers_soldat_hand"; // 0xea7 MovS
	var_3918_string = "soldier_patrol.xml"; // 0xea8 MovS
	var_3919_int = 1; // 0xea9 MovI
	func_453(var_3916_int, var_3917_string, var_3918_string, var_3919_int); // 0xeaa NEW_2
	
Label_3756:
	var_3920_int = 1; // 0xeac PushI
	var_3921_float = 0; var_3922_int = 0; // 0xead PushV
	var_3922_int = var_3816_int; // 0xeae Mov
	func_1205(var_3921_float, var_3922_int); // 0xeaf NEW_2
	var_3825_int = var_3920_int * var_3921_float; // 0xeb1 Mult2
	var_3923_int = var_3825_int; // 0xeb2 Push
	if(var_3923_int == 0) goto Label_3771; // 0xeb3 JumpB
	var_3924_int = 0; var_3925_string = ""; var_3926_string = ""; var_3927_int = 0; // 0xeb4 PushV
	var_3924_int = var_3815_int; // 0xeb5 Mov
	var_3925_string = "pers_bomber"; // 0xeb6 MovS
	var_3926_string = "bomber.xml"; // 0xeb7 MovS
	var_3927_int = var_3825_int; // 0xeb8 Mov
	func_453(var_3924_int, var_3925_string, var_3926_string, var_3927_int); // 0xeb9 NEW_2
}


func_9754(var_4754_int, var_4755_float)
{
	var_4756_int = 0; var_4757_int = 0; var_4758_int = 0; var_4759_float = 0; // 0x261b PushV
	var_4757_int = 518132; // 0x261c MovI
	var_4758_int = 518131; // 0x261d MovI
	var_4759_float = var_4755_float; // 0x261e Mov
	func_12022(var_4756_int, var_4757_int, var_4758_int, var_4759_float); // 0x261f NEW_2
	var_4754_int = var_4756_int; // 0x2620 Mov
	return 0; // 0x2622 Return
}


func_11804(var_6184_bool)
{
	var_6187_int = 0; var_6188_string = ""; // 0x2e1d PushV
	var_6188_string = "b3NotkinVisit"; // 0x2e1e MovS
	func_106(var_6187_int, var_6188_string); // 0x2e1f NEW_2
	var_6189_int = 0; // 0x2e21 PushI
	var_6190_bool = var_6187_int != var_6189_int; // 0x2e22 Neq
	if(var_6190_bool == 0) goto Label_11814; // 0x2e23 JumpB
	var_6184_bool = 1; // 0x2e24 MovB
	return 0; // 0x2e25 Return
	
Label_11814:
	var_6184_bool = 0; // 0x2e26 MovB
	return 0; // 0x2e27 Return
}


func_7709(var_4384_object, var_4385_object, var_4386_int)
{
	var_4387_object = Obj(); var_4388_object = Obj(); var_4389_string = ""; var_4390_string = ""; var_4391_string = ""; // 0x1e1e PushV
	var_4388_object = var_4385_object; // 0x1e1f Mov
	var_4392_string = "term"; // 0x1e20 PushS
	var_4389_string = var_4392_string + var_4386_int; // 0x1e21 Add2
	var_4390_string = "pers_patrool"; // 0x1e22 MovS
	var_4391_string = "guard_term.xml"; // 0x1e23 MovS
	func_7692(var_4388_object, var_4389_string, var_4390_string, var_4391_string); // 0x1e24 NEW_2
	var_4384_object = var_4387_object; // 0x1e25 Mov
	return 0; // 0x1e27 Return
}


func_4638(var_3399_int, var_3400_int, var_3401_object, var_3402_object, var_3403_object, var_3404_object)
{
	var_3405_int = 0; // 0x121f PushI
	var_3406_bool = var_3400_int == var_3405_int; // 0x1220 Eq
	if(var_3406_bool == 0) goto Label_4678; // 0x1221 JumpB
	var_3407_int = 0; var_3408_bool = 0; // 0x1222 PushV
	var_3407_int = 1; // 0x1223 MovI
	var_3408_bool = 0; // 0x1224 MovB
	func_746(var_3407_int, var_3408_bool); // 0x1225 NEW_2
	var_3409_int = 0; var_3410_bool = 0; var_3411_int = 0; // 0x1227 PushV
	var_3409_int = 1; // 0x1228 MovI
	var_3410_bool = 0; // 0x1229 MovB
	var_3411_int = 1; // 0x122a MovI
	func_763(var_3409_int, var_3410_bool, var_3411_int); // 0x122b NEW_2
	var_3412_int = 0; var_3413_int = 0; var_3414_object = Obj(); var_3415_object = Obj(); var_3416_object = Obj(); // 0x122d PushV
	var_3412_int = 1; // 0x122e MovI
	var_3413_int = var_3399_int; // 0x122f Mov
	var_3414_object = var_3401_object; // 0x1230 Mov
	var_3415_object = var_3402_object; // 0x1231 Mov
	var_3416_object = var_3403_object; // 0x1232 Mov
	func_670(var_3412_int, var_3413_int, var_3414_object, var_3415_object, var_3416_object); // 0x1233 NEW_2
	var_3417_object = Obj(); var_3418_int = 0; // 0x1235 PushV
	var_3417_object = var_3404_object; // 0x1236 Mov
	var_3418_int = 2; // 0x1237 MovI
	func_255(var_3418_int); // 0x1238 NEW_2
	var_3419_int = 0; var_3420_bool = 0; var_3421_int = 0; // 0x123a PushV
	var_3419_int = 1; // 0x123b MovI
	var_3420_bool = 0; // 0x123c MovB
	var_3421_int = 8; // 0x123d MovI
	func_820(var_3419_int, var_3420_bool, var_3421_int); // 0x123e NEW_2
	var_3422_int = 0; var_3423_bool = 0; var_3424_int = 0; // 0x1240 PushV
	var_3422_int = 1; // 0x1241 MovI
	var_3423_bool = 1; // 0x1242 MovB
	var_3424_int = 8; // 0x1243 MovI
	func_882(var_3422_int, var_3423_bool, var_3424_int); // 0x1244 NEW_2
	
Label_4678:
	var_3425_int = 0; var_3426_bool = 0; // 0x1246 PushV
	var_3425_int = 1; // 0x1247 MovI
	var_3426_bool = 0; // 0x1248 MovB
	func_729(var_3425_int, var_3426_bool); // 0x1249 NEW_2
	var_3427_int = 0; var_3428_int = 0; var_3429_int = 0; // 0x124b PushV
	var_3427_int = 1; // 0x124c MovI
	var_3428_int = var_3399_int; // 0x124d Mov
	var_3429_int = var_3400_int; // 0x124e Mov
	func_4160(var_3427_int, var_3428_int, var_3429_int); // 0x124f NEW_2
	return 0; // 0x1251 Return
}


func_10787()
{
	var_5171_object = Obj(); var_5172_object = Obj(); var_5173_object = Obj(); var_5174_object = Obj(); // 0x2a23 PushV
	var_5175_object = Obj(); // 0x2a24 PushV
	func_12030(var_5175_object); // 0x2a25 NEW_2
	var_5173_object = var_5175_object; // 0x2a26 Mov
	var_5176_string = "b6q01KlaraGotoTermitnik2"; // 0x2a28 PushS
	FindMark(var_5174_object, var_5176_string); // 0x2a29 ObjFunc
	var_5177_object = var_5174_object; // 0x2a2b Push
	if(var_5177_object == 0) goto Label_10799; // 0x2a2c JumpB
	Remove(); // 0x2a2d ObjFunc
	
Label_10799:
	var_5178_string = "b6q02KlaraGotoRat"; // 0x2a2f PushS
	FindMark(var_5174_object, var_5178_string); // 0x2a30 ObjFunc
	var_5179_object = var_5174_object; // 0x2a32 Push
	if(var_5179_object == 0) goto Label_10806; // 0x2a33 JumpB
	Remove(); // 0x2a34 ObjFunc
	
Label_10806:
	var_5180_string = "b6q03MariaGotoNina"; // 0x2a36 PushS
	FindMark(var_5174_object, var_5180_string); // 0x2a37 ObjFunc
	var_5181_object = var_5174_object; // 0x2a39 Push
	if(var_5181_object == 0) goto Label_10813; // 0x2a3a JumpB
	Remove(); // 0x2a3b ObjFunc
	
Label_10813:
	var_5182_string = "b6q03ViktorGotoMaria"; // 0x2a3d PushS
	FindMark(var_5174_object, var_5182_string); // 0x2a3e ObjFunc
	var_5183_object = var_5174_object; // 0x2a40 Push
	if(var_5183_object == 0) goto Label_10820; // 0x2a41 JumpB
	Remove(); // 0x2a42 ObjFunc
	
Label_10820:
	var_5184_string = "b6q02LetterGotoAnna"; // 0x2a44 PushS
	FindMark(var_5174_object, var_5184_string); // 0x2a45 ObjFunc
	var_5185_object = var_5174_object; // 0x2a47 Push
	if(var_5185_object == 0) goto Label_10827; // 0x2a48 JumpB
	Remove(); // 0x2a49 ObjFunc
	
Label_10827:
	var_5186_string = "b6q01MatGotoByk"; // 0x2a4b PushS
	FindMark(var_5174_object, var_5186_string); // 0x2a4c ObjFunc
	var_5187_object = var_5174_object; // 0x2a4e Push
	if(var_5187_object == 0) goto Label_10834; // 0x2a4f JumpB
	Remove(); // 0x2a50 ObjFunc
	
Label_10834:
	var_5188_bool = 0; var_5189_int = 0; // 0x2a52 PushV
	var_5189_int = 265; // 0x2a53 MovI
	func_12005(var_5188_bool, var_5189_int); // 0x2a54 NEW_2
	var_5190_bool = 0; var_5191_int = 0; // 0x2a56 PushV
	var_5191_int = 266; // 0x2a57 MovI
	func_12005(var_5190_bool, var_5191_int); // 0x2a58 NEW_2
	var_5192_bool = 0; var_5193_int = 0; // 0x2a5a PushV
	var_5193_int = 276; // 0x2a5b MovI
	func_12005(var_5192_bool, var_5193_int); // 0x2a5c NEW_2
	return 4; // 0x2a5e Return
}


func_548(var_2055_string)
{
	var_2062_object = Obj(); var_2063_int = 0; var_2064_bool = 0; var_2065_cvector = CVector(0,0,0); var_2066_cvector = CVector(0,0,0); var_2067_object = Obj(); var_2068_string = ""; var_2069_object = Obj(); var_2070_int = 0; var_2071_bool = 0; var_2072_cvector = CVector(0,0,0); var_2073_cvector = CVector(0,0,0); var_2074_object = Obj(); var_2075_string = ""; // 0x224 PushV
	GetMainOutdoorScene(var_2069_object); // 0x225 Func
	var_2070_int = 0; // 0x227 MovI
	
Label_552:
	var_2076_int = 1; // 0x228 PushI
	var_2077_int = var_2070_int + var_2076_int; // 0x229 Add
	var_2078_int = var_2055_string + var_2077_int; // 0x22a Add
	GetLocator(var_2078_int, var_2071_bool, var_2072_cvector, var_2073_cvector); // 0x22b ObjFunc
	var_2079_bool = var_2071_bool == 0; // 0x22d Not
	if(var_2079_bool == 0) goto Label_560; // 0x22e JumpB
	goto Label_570; // 0x22f Jump
	
Label_570:
	return 14; // 0x23a Return
	
Label_560:
	var_2075_string = "fog_stat.xml"; // 0x230 MovS
	var_2080_string = "fog"; // 0x231 PushS
	AddStationaryActorByType(var_2074_object, var_2072_cvector, var_2073_cvector, var_2080_string, var_2075_string); // 0x232 ObjFunc
	add(var_2074_object); // 0x234 ObjFunc
	var_2074_object = 0; // 0x236 SetNull
	var_2081_int = 1; // 0x237 PushI
	var_2070_int = var_2070_int + var_2081_int; // 0x238 Add2
	goto Label_552; // 0x239 Jump
}


func_9763(var_4954_int, var_4955_float)
{
	var_4956_int = 0; var_4957_int = 0; var_4958_int = 0; var_4959_float = 0; // 0x2624 PushV
	var_4957_int = 529838; // 0x2625 MovI
	var_4958_int = 529837; // 0x2626 MovI
	var_4959_float = var_4955_float; // 0x2627 Mov
	func_12022(var_4956_int, var_4957_int, var_4958_int, var_4959_float); // 0x2628 NEW_2
	var_4954_int = var_4956_int; // 0x2629 Mov
	return 0; // 0x262b Return
}


func_1574(var_1411_int, var_1412_int, var_1413_int)
{
	var_1414_int = 0; var_1415_int = 0; // 0x626 PushV
	var_1416_int = 1; // 0x627 PushI
	var_1417_int = var_1412_int + var_1416_int; // 0x628 Add
	var_1418_int = 12; // 0x629 PushI
	var_1419_bool = var_1417_int == var_1418_int; // 0x62a Eq
	if(var_1419_bool == 0) goto Label_1581; // 0x62b JumpB
	return 2; // 0x62c Return
	
Label_1581:
	var_1420_bool = 0; // 0x62d PushV
	var_1420_bool = 0; // 0x62e MovB
	var_1421_bool = 0; // 0x62f PushV
	var_1421_bool = 1; // 0x630 MovB
	var_1422_int = 7; // 0x631 PushI
	var_1423_bool = var_1413_int < var_1422_int; // 0x632 LT
	if(var_1423_bool == 0) goto Label_1592; // 0x633 JumpB
	var_1424_int = 21; // 0x634 PushI
	var_1425_bool = var_1413_int > var_1424_int; // 0x635 GT
	if(var_1425_bool == 0) goto Label_1592; // 0x636 JumpB
	var_1421_bool = 0; // 0x637 MovB
	
Label_1592:
	if(var_1421_bool == 0) goto Label_1597; // 0x638 JumpB
	var_1426_int = 0; // 0x639 PushI
	var_1427_bool = var_1412_int != var_1426_int; // 0x63a Neq
	if(var_1427_bool == 0) goto Label_1597; // 0x63b JumpB
	var_1420_bool = 1; // 0x63c MovB
	
Label_1597:
	if(var_1420_bool == 0) goto Label_1613; // 0x63d JumpB
	var_1428_int = 1; // 0x63e PushI
	var_1429_float = 0; var_1430_int = 0; // 0x63f PushV
	var_1430_int = var_1412_int; // 0x640 Mov
	func_1091(var_1429_float, var_1430_int); // 0x641 NEW_2
	var_1415_int = var_1428_int * var_1429_float; // 0x643 Mult2
	var_1431_int = var_1415_int; // 0x644 Push
	if(var_1431_int == 0) goto Label_1613; // 0x645 JumpB
	var_1432_int = 0; var_1433_string = ""; var_1434_string = ""; var_1435_int = 0; // 0x646 PushV
	var_1432_int = var_1411_int; // 0x647 Mov
	var_1433_string = "pers_grabitel"; // 0x648 MovS
	var_1434_string = "grabitel.xml"; // 0x649 MovS
	var_1435_int = var_1415_int; // 0x64a Mov
	func_453(var_1432_int, var_1433_string, var_1434_string, var_1435_int); // 0x64b NEW_2
	
Label_1613:
	var_1436_bool = 0; var_1437_int = 0; var_1438_int = 0; // 0x64d PushV
	var_1437_int = var_1412_int; // 0x64e Mov
	var_1438_int = var_1413_int; // 0x64f Mov
	func_1060(var_1436_bool, var_1437_int, var_1438_int); // 0x650 NEW_2
	if(var_1436_bool == 0) goto Label_1707; // 0x652 JumpB
	var_1439_int = 0; var_1440_string = ""; var_1441_string = ""; var_1442_int = 0; // 0x653 PushV
	var_1439_int = var_1411_int; // 0x654 Mov
	var_1440_string = "pers_unosha"; // 0x655 MovS
	var_1441_string = "unosha_attacker.xml"; // 0x656 MovS
	var_1442_int = 1; // 0x657 MovI
	func_453(var_1439_int, var_1440_string, var_1441_string, var_1442_int); // 0x658 NEW_2
	var_1443_int = 0; var_1444_string = ""; var_1445_string = ""; var_1446_int = 0; // 0x65a PushV
	var_1443_int = var_1411_int; // 0x65b Mov
	var_1444_string = "pers_unosha"; // 0x65c MovS
	var_1445_string = "unosha2_attacker.xml"; // 0x65d MovS
	var_1446_int = 1; // 0x65e MovI
	func_453(var_1443_int, var_1444_string, var_1445_string, var_1446_int); // 0x65f NEW_2
	var_1447_int = 0; var_1448_string = ""; var_1449_string = ""; var_1450_int = 0; // 0x661 PushV
	var_1447_int = var_1411_int; // 0x662 Mov
	var_1448_string = "pers_worker"; // 0x663 MovS
	var_1449_string = "worker_attacker.xml"; // 0x664 MovS
	var_1450_int = 1; // 0x665 MovI
	func_453(var_1447_int, var_1448_string, var_1449_string, var_1450_int); // 0x666 NEW_2
	var_1451_int = 0; var_1452_string = ""; var_1453_string = ""; var_1454_int = 0; // 0x668 PushV
	var_1451_int = var_1411_int; // 0x669 Mov
	var_1452_string = "pers_worker"; // 0x66a MovS
	var_1453_string = "worker2_attacker.xml"; // 0x66b MovS
	var_1454_int = 1; // 0x66c MovI
	func_453(var_1451_int, var_1452_string, var_1453_string, var_1454_int); // 0x66d NEW_2
	var_1455_int = 0; var_1456_string = ""; var_1457_string = ""; var_1458_int = 0; // 0x66f PushV
	var_1455_int = var_1411_int; // 0x670 Mov
	var_1456_string = "pers_woman"; // 0x671 MovS
	var_1457_string = "woman.xml"; // 0x672 MovS
	var_1458_int = 1; // 0x673 MovI
	func_453(var_1455_int, var_1456_string, var_1457_string, var_1458_int); // 0x674 NEW_2
	var_1459_int = 0; var_1460_string = ""; var_1461_string = ""; var_1462_int = 0; // 0x676 PushV
	var_1459_int = var_1411_int; // 0x677 Mov
	var_1460_string = "pers_alkash"; // 0x678 MovS
	var_1461_string = "alkash.xml"; // 0x679 MovS
	var_1462_int = 1; // 0x67a MovI
	func_453(var_1459_int, var_1460_string, var_1461_string, var_1462_int); // 0x67b NEW_2
	var_1463_bool = 0; // 0x67d PushV
	var_1463_bool = 0; // 0x67e MovB
	var_1464_int = 8; // 0x67f PushI
	var_1465_bool = var_1413_int > var_1464_int; // 0x680 GT
	if(var_1465_bool == 0) goto Label_1670; // 0x681 JumpB
	var_1466_int = 21; // 0x682 PushI
	var_1467_bool = var_1413_int < var_1466_int; // 0x683 LT
	if(var_1467_bool == 0) goto Label_1670; // 0x684 JumpB
	var_1463_bool = 1; // 0x685 MovB
	
Label_1670:
	if(var_1463_bool == 0) goto Label_1706; // 0x686 JumpB
	var_1468_int = 0; var_1469_string = ""; var_1470_string = ""; var_1471_int = 0; // 0x687 PushV
	var_1468_int = var_1411_int; // 0x688 Mov
	var_1469_string = "pers_boy"; // 0x689 MovS
	var_1470_string = "boy.xml"; // 0x68a MovS
	var_1471_int = 1; // 0x68b MovI
	func_453(var_1468_int, var_1469_string, var_1470_string, var_1471_int); // 0x68c NEW_2
	var_1472_int = 0; var_1473_string = ""; var_1474_string = ""; var_1475_int = 0; // 0x68e PushV
	var_1472_int = var_1411_int; // 0x68f Mov
	var_1473_string = "pers_girl"; // 0x690 MovS
	var_1474_string = "girl.xml"; // 0x691 MovS
	var_1475_int = 1; // 0x692 MovI
	func_453(var_1472_int, var_1473_string, var_1474_string, var_1475_int); // 0x693 NEW_2
	var_1476_int = 0; var_1477_string = ""; var_1478_string = ""; var_1479_int = 0; // 0x695 PushV
	var_1476_int = var_1411_int; // 0x696 Mov
	var_1477_string = "pers_girl"; // 0x697 MovS
	var_1478_string = "girl2.xml"; // 0x698 MovS
	var_1479_int = 1; // 0x699 MovI
	func_453(var_1476_int, var_1477_string, var_1478_string, var_1479_int); // 0x69a NEW_2
	var_1480_int = 0; var_1481_string = ""; var_1482_string = ""; var_1483_int = 0; // 0x69c PushV
	var_1480_int = var_1411_int; // 0x69d Mov
	var_1481_string = "pers_littleboy"; // 0x69e MovS
	var_1482_string = "littleboy.xml"; // 0x69f MovS
	var_1483_int = 1; // 0x6a0 MovI
	func_453(var_1480_int, var_1481_string, var_1482_string, var_1483_int); // 0x6a1 NEW_2
	var_1484_int = 0; var_1485_string = ""; var_1486_string = ""; var_1487_int = 0; // 0x6a3 PushV
	var_1484_int = var_1411_int; // 0x6a4 Mov
	var_1485_string = "pers_littlegirl"; // 0x6a5 MovS
	var_1486_string = "littlegirl.xml"; // 0x6a6 MovS
	var_1487_int = 1; // 0x6a7 MovI
	func_453(var_1484_int, var_1485_string, var_1486_string, var_1487_int); // 0x6a8 NEW_2
	
Label_1706:
	goto Label_1833; // 0x6aa Jump
	
Label_1833:
	var_1488_bool = 0; var_1489_int = 0; var_1490_int = 0; // 0x729 PushV
	var_1489_int = var_1412_int; // 0x72a Mov
	var_1490_int = var_1413_int; // 0x72b Mov
	func_1295(var_1488_bool, var_1489_int, var_1490_int); // 0x72c NEW_2
	if(var_1488_bool == 0) goto Label_1846; // 0x72e JumpB
	var_1491_int = 0; var_1492_string = ""; var_1493_string = ""; var_1494_int = 0; // 0x72f PushV
	var_1491_int = var_1411_int; // 0x730 Mov
	var_1492_string = "pers_soldat"; // 0x731 MovS
	var_1493_string = "soldier_marauder.xml"; // 0x732 MovS
	var_1494_int = 2; // 0x733 MovI
	func_453(var_1491_int, var_1492_string, var_1493_string, var_1494_int); // 0x734 NEW_2
	
Label_1846:
	return 2; // 0x736 Return
	
Label_1707:
	var_1495_bool = 0; // 0x6ab PushV
	var_1495_bool = 0; // 0x6ac MovB
	var_1496_int = 8; // 0x6ad PushI
	var_1497_bool = var_1413_int > var_1496_int; // 0x6ae GT
	if(var_1497_bool == 0) goto Label_1716; // 0x6af JumpB
	var_1498_int = 21; // 0x6b0 PushI
	var_1499_bool = var_1413_int < var_1498_int; // 0x6b1 LT
	if(var_1499_bool == 0) goto Label_1716; // 0x6b2 JumpB
	var_1495_bool = 1; // 0x6b3 MovB
	
Label_1716:
	if(var_1495_bool == 0) goto Label_1793; // 0x6b4 JumpB
	var_1500_int = 0; var_1501_string = ""; var_1502_string = ""; var_1503_int = 0; // 0x6b5 PushV
	var_1500_int = var_1411_int; // 0x6b6 Mov
	var_1501_string = "pers_woman"; // 0x6b7 MovS
	var_1502_string = "woman.xml"; // 0x6b8 MovS
	var_1503_int = 1; // 0x6b9 MovI
	func_453(var_1500_int, var_1501_string, var_1502_string, var_1503_int); // 0x6ba NEW_2
	var_1504_int = 0; var_1505_string = ""; var_1506_string = ""; var_1507_int = 0; // 0x6bc PushV
	var_1504_int = var_1411_int; // 0x6bd Mov
	var_1505_string = "pers_unosha"; // 0x6be MovS
	var_1506_string = "unosha.xml"; // 0x6bf MovS
	var_1507_int = 1; // 0x6c0 MovI
	func_453(var_1504_int, var_1505_string, var_1506_string, var_1507_int); // 0x6c1 NEW_2
	var_1508_int = 0; var_1509_string = ""; var_1510_string = ""; var_1511_int = 0; // 0x6c3 PushV
	var_1508_int = var_1411_int; // 0x6c4 Mov
	var_1509_string = "pers_unosha"; // 0x6c5 MovS
	var_1510_string = "unosha2.xml"; // 0x6c6 MovS
	var_1511_int = 1; // 0x6c7 MovI
	func_453(var_1508_int, var_1509_string, var_1510_string, var_1511_int); // 0x6c8 NEW_2
	var_1512_int = 0; var_1513_string = ""; var_1514_string = ""; var_1515_int = 0; // 0x6ca PushV
	var_1512_int = var_1411_int; // 0x6cb Mov
	var_1513_string = "pers_boy"; // 0x6cc MovS
	var_1514_string = "boy.xml"; // 0x6cd MovS
	var_1515_int = 1; // 0x6ce MovI
	func_453(var_1512_int, var_1513_string, var_1514_string, var_1515_int); // 0x6cf NEW_2
	var_1516_int = 0; var_1517_string = ""; var_1518_string = ""; var_1519_int = 0; // 0x6d1 PushV
	var_1516_int = var_1411_int; // 0x6d2 Mov
	var_1517_string = "pers_girl"; // 0x6d3 MovS
	var_1518_string = "girl.xml"; // 0x6d4 MovS
	var_1519_int = 1; // 0x6d5 MovI
	func_453(var_1516_int, var_1517_string, var_1518_string, var_1519_int); // 0x6d6 NEW_2
	var_1520_int = 0; var_1521_string = ""; var_1522_string = ""; var_1523_int = 0; // 0x6d8 PushV
	var_1520_int = var_1411_int; // 0x6d9 Mov
	var_1521_string = "pers_girl"; // 0x6da MovS
	var_1522_string = "girl2.xml"; // 0x6db MovS
	var_1523_int = 1; // 0x6dc MovI
	func_453(var_1520_int, var_1521_string, var_1522_string, var_1523_int); // 0x6dd NEW_2
	var_1524_int = 0; var_1525_string = ""; var_1526_string = ""; var_1527_int = 0; // 0x6df PushV
	var_1524_int = var_1411_int; // 0x6e0 Mov
	var_1525_string = "pers_littleboy"; // 0x6e1 MovS
	var_1526_string = "littleboy.xml"; // 0x6e2 MovS
	var_1527_int = 1; // 0x6e3 MovI
	func_453(var_1524_int, var_1525_string, var_1526_string, var_1527_int); // 0x6e4 NEW_2
	var_1528_int = 0; var_1529_string = ""; var_1530_string = ""; var_1531_int = 0; // 0x6e6 PushV
	var_1528_int = var_1411_int; // 0x6e7 Mov
	var_1529_string = "pers_littlegirl"; // 0x6e8 MovS
	var_1530_string = "littlegirl.xml"; // 0x6e9 MovS
	var_1531_int = 1; // 0x6ea MovI
	func_453(var_1528_int, var_1529_string, var_1530_string, var_1531_int); // 0x6eb NEW_2
	var_1532_int = 0; var_1533_string = ""; var_1534_string = ""; var_1535_int = 0; // 0x6ed PushV
	var_1532_int = var_1411_int; // 0x6ee Mov
	var_1533_string = "pers_alkash"; // 0x6ef MovS
	var_1534_string = "alkash.xml"; // 0x6f0 MovS
	var_1535_int = 1; // 0x6f1 MovI
	func_453(var_1532_int, var_1533_string, var_1534_string, var_1535_int); // 0x6f2 NEW_2
	var_1536_int = 1; // 0x6f4 PushI
	var_1537_int = var_1412_int + var_1536_int; // 0x6f5 Add
	var_1538_int = 3; // 0x6f6 PushI
	var_1539_bool = var_1537_int >= var_1538_int; // 0x6f7 GE
	if(var_1539_bool == 0) goto Label_1792; // 0x6f8 JumpB
	var_1540_int = 0; var_1541_string = ""; var_1542_string = ""; var_1543_int = 0; // 0x6f9 PushV
	var_1540_int = var_1411_int; // 0x6fa Mov
	var_1541_string = "pers_dohodyaga"; // 0x6fb MovS
	var_1542_string = "dohodyaga.xml"; // 0x6fc MovS
	var_1543_int = 1; // 0x6fd MovI
	func_453(var_1540_int, var_1541_string, var_1542_string, var_1543_int); // 0x6fe NEW_2
	
Label_1792:
	goto Label_1833; // 0x700 Jump
	
Label_1793:
	var_1544_int = 0; var_1545_string = ""; var_1546_string = ""; var_1547_int = 0; // 0x701 PushV
	var_1544_int = var_1411_int; // 0x702 Mov
	var_1545_string = "pers_woman"; // 0x703 MovS
	var_1546_string = "woman.xml"; // 0x704 MovS
	var_1547_int = 1; // 0x705 MovI
	func_453(var_1544_int, var_1545_string, var_1546_string, var_1547_int); // 0x706 NEW_2
	var_1548_int = 0; var_1549_string = ""; var_1550_string = ""; var_1551_int = 0; // 0x708 PushV
	var_1548_int = var_1411_int; // 0x709 Mov
	var_1549_string = "pers_unosha"; // 0x70a MovS
	var_1550_string = "unosha.xml"; // 0x70b MovS
	var_1551_int = 1; // 0x70c MovI
	func_453(var_1548_int, var_1549_string, var_1550_string, var_1551_int); // 0x70d NEW_2
	var_1552_int = 0; var_1553_string = ""; var_1554_string = ""; var_1555_int = 0; // 0x70f PushV
	var_1552_int = var_1411_int; // 0x710 Mov
	var_1553_string = "pers_unosha"; // 0x711 MovS
	var_1554_string = "unosha2.xml"; // 0x712 MovS
	var_1555_int = 1; // 0x713 MovI
	func_453(var_1552_int, var_1553_string, var_1554_string, var_1555_int); // 0x714 NEW_2
	var_1556_int = 0; var_1557_string = ""; var_1558_string = ""; var_1559_int = 0; // 0x716 PushV
	var_1556_int = var_1411_int; // 0x717 Mov
	var_1557_string = "pers_alkash"; // 0x718 MovS
	var_1558_string = "alkash.xml"; // 0x719 MovS
	var_1559_int = 1; // 0x71a MovI
	func_453(var_1556_int, var_1557_string, var_1558_string, var_1559_int); // 0x71b NEW_2
	var_1560_int = 1; // 0x71d PushI
	var_1561_int = var_1412_int + var_1560_int; // 0x71e Add
	var_1562_int = 3; // 0x71f PushI
	var_1563_bool = var_1561_int >= var_1562_int; // 0x720 GE
	if(var_1563_bool == 0) goto Label_1833; // 0x721 JumpB
	var_1564_int = 0; var_1565_string = ""; var_1566_string = ""; var_1567_int = 0; // 0x722 PushV
	var_1564_int = var_1411_int; // 0x723 Mov
	var_1565_string = "pers_dohodyaga"; // 0x724 MovS
	var_1566_string = "dohodyaga.xml"; // 0x725 MovS
	var_1567_int = 1; // 0x726 MovI
	func_453(var_1564_int, var_1565_string, var_1566_string, var_1567_int); // 0x727 NEW_2
}


func_7720(var_4428_bool)
{
	var_4429_object = Obj(); var_4430_object = Obj(); // 0x1e28 PushV
	var_4431_string = "arena_light"; // 0x1e29 PushS
	FindActor(var_4430_object, var_4431_string); // 0x1e2a Func
	Switch(var_4428_bool); // 0x1e2c ObjFunc
	return 2; // 0x1e2e Return
}


func_11816(var_5442_bool)
{
	var_5445_int = 0; var_5446_string = ""; // 0x2e29 PushV
	var_5446_string = "b8DankoVisit"; // 0x2e2a MovS
	func_106(var_5445_int, var_5446_string); // 0x2e2b NEW_2
	var_5447_int = 0; // 0x2e2d PushI
	var_5448_bool = var_5445_int != var_5447_int; // 0x2e2e Neq
	if(var_5448_bool == 0) goto Label_11826; // 0x2e2f JumpB
	var_5442_bool = 1; // 0x2e30 MovB
	return 0; // 0x2e31 Return
	
Label_11826:
	var_5442_bool = 0; // 0x2e32 MovB
	return 0; // 0x2e33 Return
}


func_9772(var_6054_int, var_6055_float)
{
	var_6056_int = 0; var_6057_int = 0; var_6058_int = 0; var_6059_float = 0; // 0x262d PushV
	var_6057_int = 531053; // 0x262e MovI
	var_6058_int = 531052; // 0x262f MovI
	var_6059_float = var_6055_float; // 0x2630 Mov
	func_12022(var_6056_int, var_6057_int, var_6058_int, var_6059_float); // 0x2631 NEW_2
	var_6054_int = var_6056_int; // 0x2632 Mov
	return 0; // 0x2634 Return
}


func_7728()
{
	var_4180_object = Obj(); var_4181_bool = 0; var_4182_cvector = CVector(0,0,0); var_4183_cvector = CVector(0,0,0); var_4184_int = 0; var_4185_object = Obj(); var_4186_object = Obj(); var_4187_bool = 0; var_4188_cvector = CVector(0,0,0); var_4189_cvector = CVector(0,0,0); var_4190_int = 0; var_4191_object = Obj(); // 0x1e30 PushV
	var_4192_string = "Setting arena..."; // 0x1e31 PushS
	Trace(var_4192_string); // 0x1e32 Func
	var_4193_object = GlobalVars[11]; // 0x1e34 PushGE
	var_4194_bool = var_4193_object == 0; // 0x1e35 NullEq
	if(var_4194_bool == 0) goto Label_7790; // 0x1e36 JumpB
	GetMainOutdoorScene(var_4186_object); // 0x1e37 Func
	var_4195_string = "pt_arena_manager"; // 0x1e39 PushS
	GetLocator(var_4195_string, var_4187_bool, var_4188_cvector, var_4189_cvector); // 0x1e3a ObjFunc
	var_4196_bool = var_4187_bool == 0; // 0x1e3c Not
	if(var_4196_bool == 0) goto Label_7746; // 0x1e3d JumpB
	var_4197_string = "Locator doesn't exist for arena manager"; // 0x1e3e PushS
	Trace(var_4197_string); // 0x1e3f Func
	goto Label_7755; // 0x1e41 Jump
	
Label_7755:
	var_4190_int = 0; // 0x1e4b MovI
	
Label_7756:
	var_4198_int = 6; // 0x1e4c PushI
	var_4199_bool = var_4190_int < var_4198_int; // 0x1e4d LT
	if(var_4199_bool == 0) goto Label_7785; // 0x1e4e JumpB
	var_4200_string = "pt_arena_torch"; // 0x1e4f PushS
	var_4201_int = 1; // 0x1e50 PushI
	var_4202_int = var_4190_int + var_4201_int; // 0x1e51 Add
	var_4203_int = var_4200_string + var_4202_int; // 0x1e52 Add
	GetLocator(var_4203_int, var_4187_bool, var_4188_cvector, var_4189_cvector); // 0x1e53 ObjFunc
	var_4204_bool = var_4187_bool == 0; // 0x1e55 Not
	if(var_4204_bool == 0) goto Label_7774; // 0x1e56 JumpB
	var_4205_string = "Locator doesn't exist for arena torch "; // 0x1e57 PushS
	var_4206_int = 1; // 0x1e58 PushI
	var_4207_int = var_4190_int + var_4206_int; // 0x1e59 Add
	var_4208_int = var_4205_string + var_4207_int; // 0x1e5a Add
	Trace(var_4208_int); // 0x1e5b Func
	goto Label_7782; // 0x1e5d Jump
	
Label_7782:
	var_4209_int = 1; // 0x1e66 PushI
	var_4190_int = var_4190_int + var_4209_int; // 0x1e67 Add2
	goto Label_7756; // 0x1e68 Jump
	
Label_7774:
	var_4210_string = "scripted"; // 0x1e5e PushS
	var_4211_string = "torch.xml"; // 0x1e5f PushS
	AddActorByType(var_4191_object, var_4210_string, var_4186_object, var_4188_cvector, var_4189_cvector, var_4211_string); // 0x1e60 Func
	var_4212_object = GlobalVars[12]; // 0x1e62 PushGE
	add(var_4191_object); // 0x1e63 ObjFunc
	var_4191_object = 0; // 0x1e65 SetNull
	
Label_7785:
	var_4213_bool = 0; // 0x1e69 PushV
	var_4213_bool = 1; // 0x1e6a MovB
	func_7720(var_4213_bool); // 0x1e6b NEW_2
	var_4186_object = 0; // 0x1e6d SetNull
	
Label_7790:
	return 12; // 0x1e6e Return
	
Label_7746:
	var_4217_object = GlobalVars[11]; // 0x1e42 PushGE
	var_4218_object = Obj(); var_4219_object = Obj(); var_4220_cvector = CVector(0,0,0); var_4221_cvector = CVector(0,0,0); // 0x1e43 PushV
	var_4219_object = var_4186_object; // 0x1e44 Mov
	var_4220_cvector = var_4188_cvector; // 0x1e45 Mov
	var_4221_cvector = var_4189_cvector; // 0x1e46 Mov
	func_14644(var_4219_object, var_4220_cvector, var_4221_cvector); // 0x1e47 NEW_2
	var_4217_object = var_4218_object; // 0x1e48 Mov
	GlobalVars[11] = var_4217_object; // 0x1e4a PopGE
}


func_11828(var_5618_bool, var_5619_object)
{
	var_5621_bool = 0; var_5622_object = Obj(); // 0x2e35 PushV
	var_5622_object = var_5619_object; // 0x2e36 Mov
	func_11922(var_5622_object); // 0x2e37 NEW_2
	if(var_5621_bool == 0) goto Label_11836; // 0x2e39 JumpB
	var_5618_bool = 1; // 0x2e3a MovB
	return 0; // 0x2e3b Return
	
Label_11836:
	var_5618_bool = 0; // 0x2e3c MovB
	return 0; // 0x2e3d Return
}


func_9781(var_5208_int, var_5209_float)
{
	var_5210_int = 0; var_5211_int = 0; var_5212_int = 0; var_5213_float = 0; // 0x2636 PushV
	var_5211_int = 529844; // 0x2637 MovI
	var_5212_int = 529843; // 0x2638 MovI
	var_5213_float = var_5209_float; // 0x2639 Mov
	func_12022(var_5210_int, var_5211_int, var_5212_int, var_5213_float); // 0x263a NEW_2
	var_5208_int = var_5210_int; // 0x263b Mov
	return 0; // 0x263d Return
}


func_572(var_565_int, var_567_object, var_568_object, var_569_object)
{
	var_570_int = 0; var_571_bool = 0; // 0x23d PushV
	var_570_int = var_565_int; // 0x23e Mov
	var_571_bool = 1; // 0x23f MovB
	func_492(var_570_int, var_571_bool); // 0x240 NEW_2
	var_598_object = Obj(); // 0x242 PushV
	var_598_object = var_567_object; // 0x243 Mov
	func_213(var_598_object); // 0x244 NEW_2
	var_609_object = Obj(); // 0x246 PushV
	var_609_object = var_568_object; // 0x247 Mov
	func_213(var_609_object); // 0x248 NEW_2
	var_610_object = Obj(); // 0x24a PushV
	var_610_object = var_569_object; // 0x24b Mov
	func_213(var_610_object); // 0x24c NEW_2
	return 0; // 0x24e Return
}


func_9790(var_5113_int, var_5114_float)
{
	var_5115_int = 0; var_5116_int = 0; var_5117_int = 0; var_5118_float = 0; // 0x263f PushV
	var_5116_int = 518218; // 0x2640 MovI
	var_5117_int = 518217; // 0x2641 MovI
	var_5118_float = var_5114_float; // 0x2642 Mov
	func_12022(var_5115_int, var_5116_int, var_5117_int, var_5118_float); // 0x2643 NEW_2
	var_5113_int = var_5115_int; // 0x2644 Mov
	return 0; // 0x2646 Return
}


func_11838(var_5288_bool)
{
	var_5291_int = 0; var_5292_string = ""; // 0x2e3f PushV
	var_5292_string = "b4q01"; // 0x2e40 MovS
	func_106(var_5291_int, var_5292_string); // 0x2e41 NEW_2
	var_5293_int = 0; // 0x2e43 PushI
	var_5294_bool = var_5291_int == var_5293_int; // 0x2e44 Eq
	if(var_5294_bool == 0) goto Label_11848; // 0x2e45 JumpB
	var_5288_bool = 1; // 0x2e46 MovB
	return 0; // 0x2e47 Return
	
Label_11848:
	var_5288_bool = 0; // 0x2e48 MovB
	return 0; // 0x2e49 Return
}


func_6726(var_2932_int, var_2933_int, var_2934_object, var_2935_object, var_2936_object, var_2937_object)
{
	var_2938_int = 0; // 0x1a47 PushI
	var_2939_bool = var_2933_int == var_2938_int; // 0x1a48 Eq
	if(var_2939_bool == 0) goto Label_6766; // 0x1a49 JumpB
	var_2940_int = 0; var_2941_bool = 0; // 0x1a4a PushV
	var_2940_int = 12; // 0x1a4b MovI
	var_2941_bool = 1; // 0x1a4c MovB
	func_746(var_2940_int, var_2941_bool); // 0x1a4d NEW_2
	var_2942_int = 0; var_2943_bool = 0; var_2944_int = 0; // 0x1a4f PushV
	var_2942_int = 12; // 0x1a50 MovI
	var_2943_bool = 1; // 0x1a51 MovB
	var_2944_int = 1; // 0x1a52 MovI
	func_763(var_2942_int, var_2943_bool, var_2944_int); // 0x1a53 NEW_2
	var_2945_int = 0; var_2946_int = 0; var_2947_object = Obj(); var_2948_object = Obj(); var_2949_object = Obj(); // 0x1a55 PushV
	var_2945_int = 12; // 0x1a56 MovI
	var_2946_int = var_2932_int; // 0x1a57 Mov
	var_2947_object = var_2934_object; // 0x1a58 Mov
	var_2948_object = var_2935_object; // 0x1a59 Mov
	var_2949_object = var_2936_object; // 0x1a5a Mov
	func_591(var_2945_int, var_2946_int, var_2947_object, var_2948_object, var_2949_object); // 0x1a5b NEW_2
	var_2950_object = Obj(); var_2951_int = 0; // 0x1a5d PushV
	var_2950_object = var_2937_object; // 0x1a5e Mov
	var_2951_int = 1; // 0x1a5f MovI
	func_255(var_2951_int); // 0x1a60 NEW_2
	var_2952_int = 0; var_2953_bool = 0; var_2954_int = 0; // 0x1a62 PushV
	var_2952_int = 12; // 0x1a63 MovI
	var_2953_bool = 1; // 0x1a64 MovB
	var_2954_int = 4; // 0x1a65 MovI
	func_820(var_2952_int, var_2953_bool, var_2954_int); // 0x1a66 NEW_2
	var_2955_int = 0; var_2956_bool = 0; var_2957_int = 0; // 0x1a68 PushV
	var_2955_int = 12; // 0x1a69 MovI
	var_2956_bool = 0; // 0x1a6a MovB
	var_2957_int = 4; // 0x1a6b MovI
	func_882(var_2955_int, var_2956_bool, var_2957_int); // 0x1a6c NEW_2
	
Label_6766:
	var_2958_int = 0; var_2959_bool = 0; // 0x1a6e PushV
	var_2958_int = 12; // 0x1a6f MovI
	var_2959_bool = 0; // 0x1a70 MovB
	func_729(var_2958_int, var_2959_bool); // 0x1a71 NEW_2
	var_2960_int = 0; var_2961_int = 0; var_2962_int = 0; // 0x1a73 PushV
	var_2960_int = 12; // 0x1a74 MovI
	var_2961_int = var_2932_int; // 0x1a75 Mov
	var_2962_int = var_2933_int; // 0x1a76 Mov
	func_2714(var_2960_int, var_2961_int, var_2962_int); // 0x1a77 NEW_2
	return 0; // 0x1a79 Return
}


func_9799(var_5129_int, var_5130_float)
{
	var_5131_int = 0; var_5132_int = 0; var_5133_int = 0; var_5134_float = 0; // 0x2648 PushV
	var_5132_int = 518220; // 0x2649 MovI
	var_5133_int = 518219; // 0x264a MovI
	var_5134_float = var_5130_float; // 0x264b Mov
	func_12022(var_5131_int, var_5132_int, var_5133_int, var_5134_float); // 0x264c NEW_2
	var_5129_int = var_5131_int; // 0x264d Mov
	return 0; // 0x264f Return
}


func_5705(var_2661_int, var_2662_int, var_2663_object, var_2664_object, var_2665_object, var_2666_object)
{
	var_2667_int = 0; // 0x164a PushI
	var_2668_bool = var_2662_int == var_2667_int; // 0x164b Eq
	if(var_2668_bool == 0) goto Label_5745; // 0x164c JumpB
	var_2669_int = 0; var_2670_bool = 0; // 0x164d PushV
	var_2669_int = 7; // 0x164e MovI
	var_2670_bool = 1; // 0x164f MovB
	func_746(var_2669_int, var_2670_bool); // 0x1650 NEW_2
	var_2671_int = 0; var_2672_bool = 0; var_2673_int = 0; // 0x1652 PushV
	var_2671_int = 7; // 0x1653 MovI
	var_2672_bool = 1; // 0x1654 MovB
	var_2673_int = 1; // 0x1655 MovI
	func_763(var_2671_int, var_2672_bool, var_2673_int); // 0x1656 NEW_2
	var_2674_int = 0; var_2675_int = 0; var_2676_object = Obj(); var_2677_object = Obj(); var_2678_object = Obj(); // 0x1658 PushV
	var_2674_int = 7; // 0x1659 MovI
	var_2675_int = var_2661_int; // 0x165a Mov
	var_2676_object = var_2663_object; // 0x165b Mov
	var_2677_object = var_2664_object; // 0x165c Mov
	var_2678_object = var_2665_object; // 0x165d Mov
	func_591(var_2674_int, var_2675_int, var_2676_object, var_2677_object, var_2678_object); // 0x165e NEW_2
	var_2679_object = Obj(); var_2680_int = 0; // 0x1660 PushV
	var_2679_object = var_2666_object; // 0x1661 Mov
	var_2680_int = 1; // 0x1662 MovI
	func_255(var_2680_int); // 0x1663 NEW_2
	var_2681_int = 0; var_2682_bool = 0; var_2683_int = 0; // 0x1665 PushV
	var_2681_int = 7; // 0x1666 MovI
	var_2682_bool = 1; // 0x1667 MovB
	var_2683_int = 6; // 0x1668 MovI
	func_820(var_2681_int, var_2682_bool, var_2683_int); // 0x1669 NEW_2
	var_2684_int = 0; var_2685_bool = 0; var_2686_int = 0; // 0x166b PushV
	var_2684_int = 7; // 0x166c MovI
	var_2685_bool = 0; // 0x166d MovB
	var_2686_int = 6; // 0x166e MovI
	func_882(var_2684_int, var_2685_bool, var_2686_int); // 0x166f NEW_2
	
Label_5745:
	var_2687_int = 0; var_2688_bool = 0; // 0x1671 PushV
	var_2687_int = 7; // 0x1672 MovI
	var_2688_bool = 0; // 0x1673 MovB
	func_729(var_2687_int, var_2688_bool); // 0x1674 NEW_2
	var_2689_int = 0; var_2690_int = 0; var_2691_int = 0; // 0x1676 PushV
	var_2689_int = 7; // 0x1677 MovI
	var_2690_int = var_2661_int; // 0x1678 Mov
	var_2691_int = var_2662_int; // 0x1679 Mov
	func_2714(var_2689_int, var_2690_int, var_2691_int); // 0x167a NEW_2
	return 0; // 0x167c Return
}


func_11850(var_5327_bool)
{
	var_5330_int = 0; var_5331_string = ""; // 0x2e4b PushV
	var_5331_string = "b5q01"; // 0x2e4c MovS
	func_106(var_5330_int, var_5331_string); // 0x2e4d NEW_2
	var_5332_int = 0; // 0x2e4f PushI
	var_5333_bool = var_5330_int == var_5332_int; // 0x2e50 Eq
	if(var_5333_bool == 0) goto Label_11860; // 0x2e51 JumpB
	var_5327_bool = 1; // 0x2e52 MovB
	return 0; // 0x2e53 Return
	
Label_11860:
	var_5327_bool = 0; // 0x2e54 MovB
	return 0; // 0x2e55 Return
}


func_591(var_2017_int, var_2018_int, var_2019_object, var_2020_object, var_2021_object)
{
	var_2022_int = 0; var_2023_bool = 0; // 0x250 PushV
	var_2022_int = var_2017_int; // 0x251 Mov
	var_2023_bool = 0; // 0x252 MovB
	func_492(var_2022_int, var_2023_bool); // 0x253 NEW_2
	var_2024_object = Obj(); // 0x255 PushV
	var_2024_object = var_2019_object; // 0x256 Mov
	func_213(var_2024_object); // 0x257 NEW_2
	var_2025_object = Obj(); // 0x259 PushV
	var_2025_object = var_2020_object; // 0x25a Mov
	func_213(var_2025_object); // 0x25b NEW_2
	var_2026_object = Obj(); // 0x25d PushV
	var_2026_object = var_2021_object; // 0x25e Mov
	func_213(var_2026_object); // 0x25f NEW_2
	var_2027_int = 8; // 0x261 PushI
	var_2028_bool = var_2018_int < var_2027_int; // 0x262 LT
	if(var_2028_bool == 0) goto Label_635; // 0x263 JumpB
	var_2029_string = ""; var_2030_object = Obj(); var_2031_string = ""; var_2032_string = ""; // 0x264 PushV
	var_2033_string = "pt_blockpost"; // 0x265 PushS
	var_2034_int = 1; // 0x266 PushI
	var_2035_int = var_2017_int + var_2034_int; // 0x267 Add
	var_2036_int = var_2033_string + var_2035_int; // 0x268 Add
	var_2037_string = "_1_"; // 0x269 PushS
	var_2029_string = var_2036_int + var_2037_string; // 0x26a Add2
	var_2030_object = var_2019_object; // 0x26b Mov
	var_2031_string = "pers_patrool"; // 0x26c MovS
	var_2032_string = "patrol_stat.xml"; // 0x26d MovS
	func_526(var_2030_object, var_2031_string, var_2032_string); // 0x26e NEW_2
	var_2055_string = ""; var_2056_object = Obj(); // 0x270 PushV
	var_2057_string = "pt_fog"; // 0x271 PushS
	var_2058_int = 1; // 0x272 PushI
	var_2059_int = var_2017_int + var_2058_int; // 0x273 Add
	var_2060_int = var_2057_string + var_2059_int; // 0x274 Add
	var_2061_string = "_"; // 0x275 PushS
	var_2055_string = var_2060_int + var_2061_string; // 0x276 Add2
	var_2056_object = var_2021_object; // 0x277 Mov
	func_548(var_2056_object); // 0x278 NEW_2
	goto Label_669; // 0x27a Jump
	
Label_669:
	return 0; // 0x29d Return
	
Label_635:
	var_2082_string = ""; var_2083_object = Obj(); var_2084_string = ""; var_2085_string = ""; // 0x27b PushV
	var_2086_string = "pt_blockpost"; // 0x27c PushS
	var_2087_int = 1; // 0x27d PushI
	var_2088_int = var_2017_int + var_2087_int; // 0x27e Add
	var_2089_int = var_2086_string + var_2088_int; // 0x27f Add
	var_2090_string = "_1_"; // 0x280 PushS
	var_2082_string = var_2089_int + var_2090_string; // 0x281 Add2
	var_2083_object = var_2019_object; // 0x282 Mov
	var_2084_string = "pers_soldat"; // 0x283 MovS
	var_2085_string = "soldier.xml"; // 0x284 MovS
	func_526(var_2083_object, var_2084_string, var_2085_string); // 0x285 NEW_2
	var_2091_string = ""; var_2092_object = Obj(); var_2093_string = ""; var_2094_string = ""; // 0x287 PushV
	var_2095_string = "pt_blockpost"; // 0x288 PushS
	var_2096_int = 1; // 0x289 PushI
	var_2097_int = var_2017_int + var_2096_int; // 0x28a Add
	var_2098_int = var_2095_string + var_2097_int; // 0x28b Add
	var_2099_string = "_2_"; // 0x28c PushS
	var_2091_string = var_2098_int + var_2099_string; // 0x28d Add2
	var_2092_object = var_2020_object; // 0x28e Mov
	var_2093_string = "pers_sanitar"; // 0x28f MovS
	var_2094_string = "sanitar_stat.xml"; // 0x290 MovS
	func_526(var_2092_object, var_2093_string, var_2094_string); // 0x291 NEW_2
	var_2100_string = ""; var_2101_object = Obj(); // 0x293 PushV
	var_2102_string = "pt_fog"; // 0x294 PushS
	var_2103_int = 1; // 0x295 PushI
	var_2104_int = var_2017_int + var_2103_int; // 0x296 Add
	var_2105_int = var_2102_string + var_2104_int; // 0x297 Add
	var_2106_string = "_"; // 0x298 PushS
	var_2100_string = var_2105_int + var_2106_string; // 0x299 Add2
	var_2101_object = var_2021_object; // 0x29a Mov
	func_548(var_2101_object); // 0x29b NEW_2
}


func_9808(var_5240_int, var_5241_float)
{
	var_5242_int = 0; var_5243_int = 0; var_5244_int = 0; var_5245_float = 0; // 0x2651 PushV
	var_5243_int = 529846; // 0x2652 MovI
	var_5244_int = 529845; // 0x2653 MovI
	var_5245_float = var_5241_float; // 0x2654 Mov
	func_12022(var_5242_int, var_5243_int, var_5244_int, var_5245_float); // 0x2655 NEW_2
	var_5240_int = var_5242_int; // 0x2656 Mov
	return 0; // 0x2658 Return
}


func_4690()
{
	var_79_string = "dt_house1_union2_05l"; // 0x1253 PushS
	add(var_79_string); // 0x1254 ObjFunc
	var_80_string = "dt_house1_union2_05r"; // 0x1256 PushS
	add(var_80_string); // 0x1257 ObjFunc
	var_81_string = "dt_house2_01"; // 0x1259 PushS
	add(var_81_string); // 0x125a ObjFunc
	var_82_string = "dt_house2_02"; // 0x125c PushS
	add(var_82_string); // 0x125d ObjFunc
	var_83_string = "dt_house2_03"; // 0x125f PushS
	add(var_83_string); // 0x1260 ObjFunc
	var_84_string = "dt_house2_04"; // 0x1262 PushS
	add(var_84_string); // 0x1263 ObjFunc
	var_85_string = "dt_house2_05"; // 0x1265 PushS
	add(var_85_string); // 0x1266 ObjFunc
	var_86_string = "dt_house3_10_i2"; // 0x1268 PushS
	add(var_86_string); // 0x1269 ObjFunc
	var_87_string = "dt_house3_10"; // 0x126b PushS
	add(var_87_string); // 0x126c ObjFunc
	var_88_string = "dt_house3_11_i2"; // 0x126e PushS
	add(var_88_string); // 0x126f ObjFunc
	var_89_string = "dt_house3_11"; // 0x1271 PushS
	add(var_89_string); // 0x1272 ObjFunc
	var_90_string = "dt_house3_12_i2"; // 0x1274 PushS
	add(var_90_string); // 0x1275 ObjFunc
	var_91_string = "dt_house3_12"; // 0x1277 PushS
	add(var_91_string); // 0x1278 ObjFunc
	var_92_string = "dt_house_1_06"; // 0x127a PushS
	add(var_92_string); // 0x127b ObjFunc
	var_93_string = "dt_house3_07_i2"; // 0x127d PushS
	add(var_93_string); // 0x127e ObjFunc
	var_94_string = "dt_house3_07"; // 0x1280 PushS
	add(var_94_string); // 0x1281 ObjFunc
	return 0; // 0x1283 Return
}


func_11862(var_5106_bool)
{
	var_5109_int = 0; var_5110_string = ""; // 0x2e57 PushV
	var_5110_string = "b2q01"; // 0x2e58 MovS
	func_106(var_5109_int, var_5110_string); // 0x2e59 NEW_2
	var_5111_int = 0; // 0x2e5b PushI
	var_5112_bool = var_5109_int == var_5111_int; // 0x2e5c Eq
	if(var_5112_bool == 0) goto Label_11872; // 0x2e5d JumpB
	var_5106_bool = 1; // 0x2e5e MovB
	return 0; // 0x2e5f Return
	
Label_11872:
	var_5106_bool = 0; // 0x2e60 MovB
	return 0; // 0x2e61 Return
}


func_9817(var_5153_int, var_5154_float)
{
	var_5155_int = 0; var_5156_int = 0; var_5157_int = 0; var_5158_float = 0; // 0x265a PushV
	var_5156_int = 520462; // 0x265b MovI
	var_5157_int = 520461; // 0x265c MovI
	var_5158_float = var_5154_float; // 0x265d Mov
	func_12022(var_5155_int, var_5156_int, var_5157_int, var_5158_float); // 0x265e NEW_2
	var_5153_int = var_5155_int; // 0x265f Mov
	return 0; // 0x2661 Return
}


func_10849()
{
	var_5034_object = Obj(); var_5035_object = Obj(); var_5036_object = Obj(); var_5037_object = Obj(); // 0x2a61 PushV
	var_5038_object = Obj(); // 0x2a62 PushV
	func_12030(var_5038_object); // 0x2a63 NEW_2
	var_5036_object = var_5038_object; // 0x2a64 Mov
	var_5039_string = "b7q01AglajaGotoStarshina"; // 0x2a66 PushS
	FindMark(var_5037_object, var_5039_string); // 0x2a67 ObjFunc
	var_5040_object = var_5037_object; // 0x2a69 Push
	if(var_5040_object == 0) goto Label_10861; // 0x2a6a JumpB
	Remove(); // 0x2a6b ObjFunc
	
Label_10861:
	var_5041_string = "b7q01BirdmaskGotoMat"; // 0x2a6d PushS
	FindMark(var_5037_object, var_5041_string); // 0x2a6e ObjFunc
	var_5042_object = var_5037_object; // 0x2a70 Push
	if(var_5042_object == 0) goto Label_10868; // 0x2a71 JumpB
	Remove(); // 0x2a72 ObjFunc
	
Label_10868:
	var_5043_string = "b7q01DankoGotoSobor"; // 0x2a74 PushS
	FindMark(var_5037_object, var_5043_string); // 0x2a75 ObjFunc
	var_5044_object = var_5037_object; // 0x2a77 Push
	if(var_5044_object == 0) goto Label_10875; // 0x2a78 JumpB
	Remove(); // 0x2a79 ObjFunc
	
Label_10875:
	var_5045_string = "b7q01MatGotoPrison"; // 0x2a7b PushS
	FindMark(var_5037_object, var_5045_string); // 0x2a7c ObjFunc
	var_5046_object = var_5037_object; // 0x2a7e Push
	if(var_5046_object == 0) goto Label_10882; // 0x2a7f JumpB
	Remove(); // 0x2a80 ObjFunc
	
Label_10882:
	var_5047_string = "b7q01PatrolGotoGorbun"; // 0x2a82 PushS
	FindMark(var_5037_object, var_5047_string); // 0x2a83 ObjFunc
	var_5048_object = var_5037_object; // 0x2a85 Push
	if(var_5048_object == 0) goto Label_10889; // 0x2a86 JumpB
	Remove(); // 0x2a87 ObjFunc
	
Label_10889:
	var_5049_string = "b7q01ViktorGotoSobor"; // 0x2a89 PushS
	FindMark(var_5037_object, var_5049_string); // 0x2a8a ObjFunc
	var_5050_object = var_5037_object; // 0x2a8c Push
	if(var_5050_object == 0) goto Label_10896; // 0x2a8d JumpB
	Remove(); // 0x2a8e ObjFunc
	
Label_10896:
	var_5051_string = "b7q01WastedGotoViktor"; // 0x2a90 PushS
	FindMark(var_5037_object, var_5051_string); // 0x2a91 ObjFunc
	var_5052_object = var_5037_object; // 0x2a93 Push
	if(var_5052_object == 0) goto Label_10903; // 0x2a94 JumpB
	Remove(); // 0x2a95 ObjFunc
	
Label_10903:
	var_5053_string = "b7q03AglajaGotoTheater"; // 0x2a97 PushS
	FindMark(var_5037_object, var_5053_string); // 0x2a98 ObjFunc
	var_5054_object = var_5037_object; // 0x2a9a Push
	if(var_5054_object == 0) goto Label_10910; // 0x2a9b JumpB
	Remove(); // 0x2a9c ObjFunc
	
Label_10910:
	var_5055_bool = 0; var_5056_int = 0; // 0x2a9e PushV
	var_5056_int = 253; // 0x2a9f MovI
	func_12005(var_5055_bool, var_5056_int); // 0x2aa0 NEW_2
	var_5057_bool = 0; var_5058_int = 0; // 0x2aa2 PushV
	var_5058_int = 270; // 0x2aa3 MovI
	func_12005(var_5057_bool, var_5058_int); // 0x2aa4 NEW_2
	var_5059_bool = 0; var_5060_int = 0; // 0x2aa6 PushV
	var_5060_int = 280; // 0x2aa7 MovI
	func_12005(var_5059_bool, var_5060_int); // 0x2aa8 NEW_2
	return 4; // 0x2aaa Return
}


func_9826(var_4970_int, var_4971_float)
{
	var_4972_int = 0; var_4973_int = 0; var_4974_int = 0; var_4975_float = 0; // 0x2663 PushV
	var_4973_int = 529842; // 0x2664 MovI
	var_4974_int = 529841; // 0x2665 MovI
	var_4975_float = var_4971_float; // 0x2666 Mov
	func_12022(var_4972_int, var_4973_int, var_4974_int, var_4975_float); // 0x2667 NEW_2
	var_4970_int = var_4972_int; // 0x2668 Mov
	return 0; // 0x266a Return
}


func_11874(var_5145_bool)
{
	var_5148_int = 0; var_5149_string = ""; // 0x2e63 PushV
	var_5149_string = "b2MladVladBurahHomeTalk"; // 0x2e64 MovS
	func_106(var_5148_int, var_5149_string); // 0x2e65 NEW_2
	var_5150_int = 1; // 0x2e67 PushI
	var_5151_bool = var_5148_int == var_5150_int; // 0x2e68 Eq
	if(var_5151_bool == 0) goto Label_11884; // 0x2e69 JumpB
	var_5145_bool = 1; // 0x2e6a MovB
	return 0; // 0x2e6b Return
	
Label_11884:
	var_5145_bool = 0; // 0x2e6c MovB
	return 0; // 0x2e6d Return
}


func_9835(var_4986_int, var_4987_float)
{
	var_4988_int = 0; var_4989_int = 0; var_4990_int = 0; var_4991_float = 0; // 0x266c PushV
	var_4989_int = 519684; // 0x266d MovI
	var_4990_int = 519683; // 0x266e MovI
	var_4991_float = var_4987_float; // 0x266f Mov
	func_12022(var_4988_int, var_4989_int, var_4990_int, var_4991_float); // 0x2670 NEW_2
	var_4986_int = var_4988_int; // 0x2671 Mov
	return 0; // 0x2673 Return
}


func_11886(var_5201_bool)
{
	var_5204_int = 0; var_5205_string = ""; // 0x2e6f PushV
	var_5205_string = "b2q01"; // 0x2e70 MovS
	func_106(var_5204_int, var_5205_string); // 0x2e71 NEW_2
	var_5206_int = 1000; // 0x2e73 PushI
	var_5207_bool = var_5204_int == var_5206_int; // 0x2e74 Eq
	if(var_5207_bool == 0) goto Label_11896; // 0x2e75 JumpB
	var_5201_bool = 1; // 0x2e76 MovB
	return 0; // 0x2e77 Return
	
Label_11896:
	var_5201_bool = 0; // 0x2e78 MovB
	return 0; // 0x2e79 Return
}


func_7791()
{
	var_4462_int = 0; var_4463_int = 0; var_4464_object = Obj(); var_4465_int = 0; var_4466_int = 0; var_4467_object = Obj(); // 0x1e6f PushV
	var_4468_string = "Cleaning arena..."; // 0x1e70 PushS
	Trace(var_4468_string); // 0x1e71 Func
	var_4469_object = GlobalVars[11]; // 0x1e73 PushGE
	var_4470_bool = var_4469_object != 0; // 0x1e74 NullNeq
	if(var_4470_bool == 0) goto Label_7824; // 0x1e75 JumpB
	var_4471_object = GlobalVars[11]; // 0x1e76 PushGE
	Remove(); // 0x1e77 ObjFunc
	var_4472_object = GlobalVars[12]; // 0x1e79 PushGE
	size(var_4465_int); // 0x1e7a ObjFunc
	var_4466_int = 0; // 0x1e7c MovI
	
Label_7805:
	var_4473_bool = var_4466_int < var_4465_int; // 0x1e7d LT
	if(var_4473_bool == 0) goto Label_7817; // 0x1e7e JumpB
	var_4474_object = GlobalVars[12]; // 0x1e7f PushGE
	get(var_4467_object, var_4466_int); // 0x1e80 ObjFunc
	var_4475_string = "remove"; // 0x1e82 PushS
	Trigger(var_4467_object, var_4475_string); // 0x1e83 Func
	var_4467_object = 0; // 0x1e85 SetNull
	var_4476_int = 1; // 0x1e86 PushI
	var_4466_int = var_4466_int + var_4476_int; // 0x1e87 Add2
	goto Label_7805; // 0x1e88 Jump
	
Label_7817:
	var_4477_object = GlobalVars[12]; // 0x1e89 PushGE
	clear(); // 0x1e8a ObjFunc
	var_4478_bool = 0; // 0x1e8c PushV
	var_4478_bool = 0; // 0x1e8d MovB
	func_7720(var_4478_bool); // 0x1e8e NEW_2
	
Label_7824:
	return 6; // 0x1e90 Return
}


func_9844(var_5232_int, var_5233_float)
{
	var_5234_int = 0; var_5235_int = 0; var_5236_int = 0; var_5237_float = 0; // 0x2675 PushV
	var_5235_int = 529848; // 0x2676 MovI
	var_5236_int = 529847; // 0x2677 MovI
	var_5237_float = var_5233_float; // 0x2678 Mov
	func_12022(var_5234_int, var_5235_int, var_5236_int, var_5237_float); // 0x2679 NEW_2
	var_5232_int = var_5234_int; // 0x267a Mov
	return 0; // 0x267c Return
}


func_6778(var_4062_int, var_4063_int, var_4064_object, var_4065_object, var_4066_object, var_4067_object)
{
	var_4068_int = 0; // 0x1a7b PushI
	var_4069_bool = var_4063_int == var_4068_int; // 0x1a7c Eq
	if(var_4069_bool == 0) goto Label_6818; // 0x1a7d JumpB
	var_4070_int = 0; var_4071_bool = 0; // 0x1a7e PushV
	var_4070_int = 12; // 0x1a7f MovI
	var_4071_bool = 0; // 0x1a80 MovB
	func_746(var_4070_int, var_4071_bool); // 0x1a81 NEW_2
	var_4072_int = 0; var_4073_bool = 0; var_4074_int = 0; // 0x1a83 PushV
	var_4072_int = 12; // 0x1a84 MovI
	var_4073_bool = 0; // 0x1a85 MovB
	var_4074_int = 1; // 0x1a86 MovI
	func_763(var_4072_int, var_4073_bool, var_4074_int); // 0x1a87 NEW_2
	var_4075_int = 0; var_4076_int = 0; var_4077_object = Obj(); var_4078_object = Obj(); var_4079_object = Obj(); // 0x1a89 PushV
	var_4075_int = 12; // 0x1a8a MovI
	var_4076_int = var_4062_int; // 0x1a8b Mov
	var_4077_object = var_4064_object; // 0x1a8c Mov
	var_4078_object = var_4065_object; // 0x1a8d Mov
	var_4079_object = var_4066_object; // 0x1a8e Mov
	func_670(var_4075_int, var_4076_int, var_4077_object, var_4078_object, var_4079_object); // 0x1a8f NEW_2
	var_4080_object = Obj(); var_4081_int = 0; // 0x1a91 PushV
	var_4080_object = var_4067_object; // 0x1a92 Mov
	var_4081_int = 2; // 0x1a93 MovI
	func_255(var_4081_int); // 0x1a94 NEW_2
	var_4082_int = 0; var_4083_bool = 0; var_4084_int = 0; // 0x1a96 PushV
	var_4082_int = 12; // 0x1a97 MovI
	var_4083_bool = 0; // 0x1a98 MovB
	var_4084_int = 4; // 0x1a99 MovI
	func_820(var_4082_int, var_4083_bool, var_4084_int); // 0x1a9a NEW_2
	var_4085_int = 0; var_4086_bool = 0; var_4087_int = 0; // 0x1a9c PushV
	var_4085_int = 12; // 0x1a9d MovI
	var_4086_bool = 1; // 0x1a9e MovB
	var_4087_int = 4; // 0x1a9f MovI
	func_882(var_4085_int, var_4086_bool, var_4087_int); // 0x1aa0 NEW_2
	
Label_6818:
	var_4088_int = 0; var_4089_bool = 0; // 0x1aa2 PushV
	var_4088_int = 12; // 0x1aa3 MovI
	var_4089_bool = 0; // 0x1aa4 MovB
	func_729(var_4088_int, var_4089_bool); // 0x1aa5 NEW_2
	var_4090_int = 0; var_4091_int = 0; var_4092_int = 0; // 0x1aa7 PushV
	var_4090_int = 12; // 0x1aa8 MovI
	var_4091_int = var_4062_int; // 0x1aa9 Mov
	var_4092_int = var_4063_int; // 0x1aaa Mov
	func_3609(var_4090_int, var_4091_int, var_4092_int); // 0x1aab NEW_2
	return 0; // 0x1aad Return
}


func_11898(var_5121_bool)
{
	var_5124_int = 0; var_5125_string = ""; // 0x2e7b PushV
	var_5125_string = "b2DankoTalk"; // 0x2e7c MovS
	func_106(var_5124_int, var_5125_string); // 0x2e7d NEW_2
	var_5126_int = 1; // 0x2e7f PushI
	var_5127_bool = var_5124_int == var_5126_int; // 0x2e80 Eq
	if(var_5127_bool == 0) goto Label_11908; // 0x2e81 JumpB
	var_5121_bool = 1; // 0x2e82 MovB
	return 0; // 0x2e83 Return
	
Label_11908:
	var_5121_bool = 0; // 0x2e84 MovB
	return 0; // 0x2e85 Return
}


func_5757(var_3787_int, var_3788_int, var_3789_object, var_3790_object, var_3791_object, var_3792_object)
{
	var_3793_int = 0; // 0x167e PushI
	var_3794_bool = var_3788_int == var_3793_int; // 0x167f Eq
	if(var_3794_bool == 0) goto Label_5797; // 0x1680 JumpB
	var_3795_int = 0; var_3796_bool = 0; // 0x1681 PushV
	var_3795_int = 7; // 0x1682 MovI
	var_3796_bool = 0; // 0x1683 MovB
	func_746(var_3795_int, var_3796_bool); // 0x1684 NEW_2
	var_3797_int = 0; var_3798_bool = 0; var_3799_int = 0; // 0x1686 PushV
	var_3797_int = 7; // 0x1687 MovI
	var_3798_bool = 0; // 0x1688 MovB
	var_3799_int = 1; // 0x1689 MovI
	func_763(var_3797_int, var_3798_bool, var_3799_int); // 0x168a NEW_2
	var_3800_int = 0; var_3801_int = 0; var_3802_object = Obj(); var_3803_object = Obj(); var_3804_object = Obj(); // 0x168c PushV
	var_3800_int = 7; // 0x168d MovI
	var_3801_int = var_3787_int; // 0x168e Mov
	var_3802_object = var_3789_object; // 0x168f Mov
	var_3803_object = var_3790_object; // 0x1690 Mov
	var_3804_object = var_3791_object; // 0x1691 Mov
	func_670(var_3800_int, var_3801_int, var_3802_object, var_3803_object, var_3804_object); // 0x1692 NEW_2
	var_3805_object = Obj(); var_3806_int = 0; // 0x1694 PushV
	var_3805_object = var_3792_object; // 0x1695 Mov
	var_3806_int = 2; // 0x1696 MovI
	func_255(var_3806_int); // 0x1697 NEW_2
	var_3807_int = 0; var_3808_bool = 0; var_3809_int = 0; // 0x1699 PushV
	var_3807_int = 7; // 0x169a MovI
	var_3808_bool = 0; // 0x169b MovB
	var_3809_int = 6; // 0x169c MovI
	func_820(var_3807_int, var_3808_bool, var_3809_int); // 0x169d NEW_2
	var_3810_int = 0; var_3811_bool = 0; var_3812_int = 0; // 0x169f PushV
	var_3810_int = 7; // 0x16a0 MovI
	var_3811_bool = 1; // 0x16a1 MovB
	var_3812_int = 6; // 0x16a2 MovI
	func_882(var_3810_int, var_3811_bool, var_3812_int); // 0x16a3 NEW_2
	
Label_5797:
	var_3813_int = 0; var_3814_bool = 0; // 0x16a5 PushV
	var_3813_int = 7; // 0x16a6 MovI
	var_3814_bool = 0; // 0x16a7 MovB
	func_729(var_3813_int, var_3814_bool); // 0x16a8 NEW_2
	var_3815_int = 0; var_3816_int = 0; var_3817_int = 0; // 0x16aa PushV
	var_3815_int = 7; // 0x16ab MovI
	var_3816_int = var_3787_int; // 0x16ac Mov
	var_3817_int = var_3788_int; // 0x16ad Mov
	func_3609(var_3815_int, var_3816_int, var_3817_int); // 0x16ae NEW_2
	return 0; // 0x16b0 Return
}


func_9853(var_5821_int, var_5822_float)
{
	var_5823_int = 0; var_5824_int = 0; var_5825_int = 0; var_5826_float = 0; // 0x267e PushV
	var_5824_int = 530678; // 0x267f MovI
	var_5825_int = 530677; // 0x2680 MovI
	var_5826_float = var_5822_float; // 0x2681 Mov
	func_12022(var_5823_int, var_5824_int, var_5825_int, var_5826_float); // 0x2682 NEW_2
	var_5821_int = var_5823_int; // 0x2683 Mov
	return 0; // 0x2685 Return
}


func_4740(var_1028_int, var_1029_int, var_1030_object, var_1031_object, var_1032_object, var_1033_object)
{
	var_1034_int = 0; // 0x1285 PushI
	var_1035_bool = var_1029_int == var_1034_int; // 0x1286 Eq
	if(var_1035_bool == 0) goto Label_4780; // 0x1287 JumpB
	var_1036_int = 0; var_1037_bool = 0; // 0x1288 PushV
	var_1036_int = 2; // 0x1289 MovI
	var_1037_bool = 0; // 0x128a MovB
	func_746(var_1036_int, var_1037_bool); // 0x128b NEW_2
	var_1038_int = 0; var_1039_bool = 0; var_1040_int = 0; // 0x128d PushV
	var_1038_int = 2; // 0x128e MovI
	var_1039_bool = 0; // 0x128f MovB
	var_1040_int = 1; // 0x1290 MovI
	func_763(var_1038_int, var_1039_bool, var_1040_int); // 0x1291 NEW_2
	var_1041_int = 0; var_1042_int = 0; var_1043_object = Obj(); var_1044_object = Obj(); var_1045_object = Obj(); // 0x1293 PushV
	var_1041_int = 2; // 0x1294 MovI
	var_1042_int = var_1028_int; // 0x1295 Mov
	var_1043_object = var_1030_object; // 0x1296 Mov
	var_1044_object = var_1031_object; // 0x1297 Mov
	var_1045_object = var_1032_object; // 0x1298 Mov
	func_572(var_1042_int, var_1043_object, var_1044_object, var_1045_object); // 0x1299 NEW_2
	var_1046_object = Obj(); var_1047_int = 0; // 0x129b PushV
	var_1046_object = var_1033_object; // 0x129c Mov
	var_1047_int = 0; // 0x129d MovI
	func_255(var_1047_int); // 0x129e NEW_2
	var_1048_int = 0; var_1049_bool = 0; var_1050_int = 0; // 0x12a0 PushV
	var_1048_int = 2; // 0x12a1 MovI
	var_1049_bool = 0; // 0x12a2 MovB
	var_1050_int = 5; // 0x12a3 MovI
	func_820(var_1048_int, var_1049_bool, var_1050_int); // 0x12a4 NEW_2
	var_1051_int = 0; var_1052_bool = 0; var_1053_int = 0; // 0x12a6 PushV
	var_1051_int = 2; // 0x12a7 MovI
	var_1052_bool = 0; // 0x12a8 MovB
	var_1053_int = 5; // 0x12a9 MovI
	func_882(var_1051_int, var_1052_bool, var_1053_int); // 0x12aa NEW_2
	
Label_4780:
	var_1054_int = 0; var_1055_int = 0; // 0x12ac PushV
	var_1054_int = 2; // 0x12ad MovI
	var_1055_int = var_1029_int; // 0x12ae Mov
	func_1000(var_1054_int, var_1055_int); // 0x12af NEW_2
	var_1056_int = 0; var_1057_int = 0; var_1058_int = 0; // 0x12b1 PushV
	var_1056_int = 2; // 0x12b2 MovI
	var_1057_int = var_1028_int; // 0x12b3 Mov
	var_1058_int = var_1029_int; // 0x12b4 Mov
	func_1847(var_1056_int, var_1057_int, var_1058_int); // 0x12b5 NEW_2
	return 0; // 0x12b7 Return
}


func_11910(var_5373_bool)
{
	var_5376_int = 0; var_5377_string = ""; // 0x2e87 PushV
	var_5377_string = "b7q01"; // 0x2e88 MovS
	func_106(var_5376_int, var_5377_string); // 0x2e89 NEW_2
	var_5378_int = 0; // 0x2e8b PushI
	var_5379_bool = var_5376_int == var_5378_int; // 0x2e8c Eq
	if(var_5379_bool == 0) goto Label_11920; // 0x2e8d JumpB
	var_5373_bool = 1; // 0x2e8e MovB
	return 0; // 0x2e8f Return
	
Label_11920:
	var_5373_bool = 0; // 0x2e90 MovB
	return 0; // 0x2e91 Return
}


func_9862(var_6012_int, var_6013_float)
{
	var_6014_int = 0; var_6015_int = 0; var_6016_int = 0; var_6017_float = 0; // 0x2687 PushV
	var_6015_int = 530680; // 0x2688 MovI
	var_6016_int = 530679; // 0x2689 MovI
	var_6017_float = var_6013_float; // 0x268a Mov
	func_12022(var_6014_int, var_6015_int, var_6016_int, var_6017_float); // 0x268b NEW_2
	var_6012_int = var_6014_int; // 0x268c Mov
	return 0; // 0x268e Return
}


func_8845(var_500_int, var_501_int, var_502_int)
{
	var_503_object = Obj(); var_504_object = Obj(); var_505_object = Obj(); var_506_object = Obj(); var_507_object = Obj(); var_508_object = Obj(); var_509_object = Obj(); var_510_object = Obj(); // 0x228d PushV
	var_511_object = GlobalVars[8]; // 0x228e PushGE
	get(var_507_object, var_500_int); // 0x228f ObjFunc
	var_512_object = GlobalVars[9]; // 0x2291 PushGE
	get(var_508_object, var_500_int); // 0x2292 ObjFunc
	var_513_object = GlobalVars[10]; // 0x2294 PushGE
	get(var_509_object, var_500_int); // 0x2295 ObjFunc
	var_514_object = GlobalVars[13]; // 0x2297 PushGE
	get(var_510_object, var_500_int); // 0x2298 ObjFunc
	var_515_int = 0; // 0x229a PushI
	var_516_bool = var_500_int == var_515_int; // 0x229b Eq
	if(var_516_bool == 0) goto Label_8871; // 0x229c JumpB
	var_517_int = 0; var_518_int = 0; var_519_object = Obj(); var_520_object = Obj(); var_521_object = Obj(); var_522_object = Obj(); // 0x229d PushV
	var_517_int = var_501_int; // 0x229e Mov
	var_518_int = var_502_int; // 0x229f Mov
	var_519_object = var_507_object; // 0x22a0 Mov
	var_520_object = var_508_object; // 0x22a1 Mov
	var_521_object = var_509_object; // 0x22a2 Mov
	var_522_object = var_510_object; // 0x22a3 Mov
	func_4337(var_517_int, var_518_int, var_519_object, var_520_object, var_521_object, var_522_object); // 0x22a4 NEW_2
	goto Label_9065; // 0x22a6 Jump
	
Label_9065:
	return 8; // 0x2369 Return
	
Label_8871:
	var_883_int = 1; // 0x22a7 PushI
	var_884_bool = var_500_int == var_883_int; // 0x22a8 Eq
	if(var_884_bool == 0) goto Label_8884; // 0x22a9 JumpB
	var_885_int = 0; var_886_int = 0; var_887_object = Obj(); var_888_object = Obj(); var_889_object = Obj(); var_890_object = Obj(); // 0x22aa PushV
	var_885_int = var_501_int; // 0x22ab Mov
	var_886_int = var_502_int; // 0x22ac Mov
	var_887_object = var_507_object; // 0x22ad Mov
	var_888_object = var_508_object; // 0x22ae Mov
	var_889_object = var_509_object; // 0x22af Mov
	var_890_object = var_510_object; // 0x22b0 Mov
	func_4534(var_885_int, var_886_int, var_887_object, var_888_object, var_889_object, var_890_object); // 0x22b1 NEW_2
	goto Label_9065; // 0x22b3 Jump
	
Label_8884:
	var_1026_int = 2; // 0x22b4 PushI
	var_1027_bool = var_500_int == var_1026_int; // 0x22b5 Eq
	if(var_1027_bool == 0) goto Label_8897; // 0x22b6 JumpB
	var_1028_int = 0; var_1029_int = 0; var_1030_object = Obj(); var_1031_object = Obj(); var_1032_object = Obj(); var_1033_object = Obj(); // 0x22b7 PushV
	var_1028_int = var_501_int; // 0x22b8 Mov
	var_1029_int = var_502_int; // 0x22b9 Mov
	var_1030_object = var_507_object; // 0x22ba Mov
	var_1031_object = var_508_object; // 0x22bb Mov
	var_1032_object = var_509_object; // 0x22bc Mov
	var_1033_object = var_510_object; // 0x22bd Mov
	func_4740(var_1028_int, var_1029_int, var_1030_object, var_1031_object, var_1032_object, var_1033_object); // 0x22be NEW_2
	goto Label_9065; // 0x22c0 Jump
	
Label_8897:
	var_1245_int = 3; // 0x22c1 PushI
	var_1246_bool = var_500_int == var_1245_int; // 0x22c2 Eq
	if(var_1246_bool == 0) goto Label_8910; // 0x22c3 JumpB
	var_1247_int = 0; var_1248_int = 0; var_1249_object = Obj(); var_1250_object = Obj(); var_1251_object = Obj(); var_1252_object = Obj(); // 0x22c4 PushV
	var_1247_int = var_501_int; // 0x22c5 Mov
	var_1248_int = var_502_int; // 0x22c6 Mov
	var_1249_object = var_507_object; // 0x22c7 Mov
	var_1250_object = var_508_object; // 0x22c8 Mov
	var_1251_object = var_509_object; // 0x22c9 Mov
	var_1252_object = var_510_object; // 0x22ca Mov
	func_4970(var_1247_int, var_1248_int, var_1249_object, var_1250_object, var_1251_object, var_1252_object); // 0x22cb NEW_2
	goto Label_9065; // 0x22cd Jump
	
Label_8910:
	var_1293_int = 4; // 0x22ce PushI
	var_1294_bool = var_500_int == var_1293_int; // 0x22cf Eq
	if(var_1294_bool == 0) goto Label_8923; // 0x22d0 JumpB
	var_1295_int = 0; var_1296_int = 0; var_1297_object = Obj(); var_1298_object = Obj(); var_1299_object = Obj(); var_1300_object = Obj(); // 0x22d1 PushV
	var_1295_int = var_501_int; // 0x22d2 Mov
	var_1296_int = var_502_int; // 0x22d3 Mov
	var_1297_object = var_507_object; // 0x22d4 Mov
	var_1298_object = var_508_object; // 0x22d5 Mov
	var_1299_object = var_509_object; // 0x22d6 Mov
	var_1300_object = var_510_object; // 0x22d7 Mov
	func_5188(var_1295_int, var_1296_int, var_1297_object, var_1298_object, var_1299_object, var_1300_object); // 0x22d8 NEW_2
	goto Label_9065; // 0x22da Jump
	
Label_8923:
	var_1338_int = 5; // 0x22db PushI
	var_1339_bool = var_500_int == var_1338_int; // 0x22dc Eq
	if(var_1339_bool == 0) goto Label_8936; // 0x22dd JumpB
	var_1340_int = 0; var_1341_int = 0; var_1342_object = Obj(); var_1343_object = Obj(); var_1344_object = Obj(); var_1345_object = Obj(); // 0x22de PushV
	var_1340_int = var_501_int; // 0x22df Mov
	var_1341_int = var_502_int; // 0x22e0 Mov
	var_1342_object = var_507_object; // 0x22e1 Mov
	var_1343_object = var_508_object; // 0x22e2 Mov
	var_1344_object = var_509_object; // 0x22e3 Mov
	var_1345_object = var_510_object; // 0x22e4 Mov
	func_5430(var_1340_int, var_1341_int, var_1342_object, var_1343_object, var_1344_object, var_1345_object); // 0x22e5 NEW_2
	goto Label_9065; // 0x22e7 Jump
	
Label_8936:
	var_1371_int = 6; // 0x22e8 PushI
	var_1372_bool = var_500_int == var_1371_int; // 0x22e9 Eq
	if(var_1372_bool == 0) goto Label_8949; // 0x22ea JumpB
	var_1373_int = 0; var_1374_int = 0; var_1375_object = Obj(); var_1376_object = Obj(); var_1377_object = Obj(); var_1378_object = Obj(); // 0x22eb PushV
	var_1373_int = var_501_int; // 0x22ec Mov
	var_1374_int = var_502_int; // 0x22ed Mov
	var_1375_object = var_507_object; // 0x22ee Mov
	var_1376_object = var_508_object; // 0x22ef Mov
	var_1377_object = var_509_object; // 0x22f0 Mov
	var_1378_object = var_510_object; // 0x22f1 Mov
	func_5588(var_1378_object); // 0x22f2 NEW_2
	goto Label_9065; // 0x22f4 Jump
	
Label_8949:
	var_1381_int = 7; // 0x22f5 PushI
	var_1382_bool = var_500_int == var_1381_int; // 0x22f6 Eq
	if(var_1382_bool == 0) goto Label_8962; // 0x22f7 JumpB
	var_1383_int = 0; var_1384_int = 0; var_1385_object = Obj(); var_1386_object = Obj(); var_1387_object = Obj(); var_1388_object = Obj(); // 0x22f8 PushV
	var_1383_int = var_501_int; // 0x22f9 Mov
	var_1384_int = var_502_int; // 0x22fa Mov
	var_1385_object = var_507_object; // 0x22fb Mov
	var_1386_object = var_508_object; // 0x22fc Mov
	var_1387_object = var_509_object; // 0x22fd Mov
	var_1388_object = var_510_object; // 0x22fe Mov
	func_5653(var_1383_int, var_1384_int, var_1385_object, var_1386_object, var_1387_object, var_1388_object); // 0x22ff NEW_2
	goto Label_9065; // 0x2301 Jump
	
Label_8962:
	var_1568_int = 8; // 0x2302 PushI
	var_1569_bool = var_500_int == var_1568_int; // 0x2303 Eq
	if(var_1569_bool == 0) goto Label_8975; // 0x2304 JumpB
	var_1570_int = 0; var_1571_int = 0; var_1572_object = Obj(); var_1573_object = Obj(); var_1574_object = Obj(); var_1575_object = Obj(); // 0x2305 PushV
	var_1570_int = var_501_int; // 0x2306 Mov
	var_1571_int = var_502_int; // 0x2307 Mov
	var_1572_object = var_507_object; // 0x2308 Mov
	var_1573_object = var_508_object; // 0x2309 Mov
	var_1574_object = var_509_object; // 0x230a Mov
	var_1575_object = var_510_object; // 0x230b Mov
	func_5853(var_1570_int, var_1571_int, var_1572_object, var_1573_object, var_1574_object, var_1575_object); // 0x230c NEW_2
	goto Label_9065; // 0x230e Jump
	
Label_8975:
	var_1601_int = 9; // 0x230f PushI
	var_1602_bool = var_500_int == var_1601_int; // 0x2310 Eq
	if(var_1602_bool == 0) goto Label_8988; // 0x2311 JumpB
	var_1603_int = 0; var_1604_int = 0; var_1605_object = Obj(); var_1606_object = Obj(); var_1607_object = Obj(); var_1608_object = Obj(); // 0x2312 PushV
	var_1603_int = var_501_int; // 0x2313 Mov
	var_1604_int = var_502_int; // 0x2314 Mov
	var_1605_object = var_507_object; // 0x2315 Mov
	var_1606_object = var_508_object; // 0x2316 Mov
	var_1607_object = var_509_object; // 0x2317 Mov
	var_1608_object = var_510_object; // 0x2318 Mov
	func_6056(var_1603_int, var_1604_int, var_1605_object, var_1606_object, var_1607_object, var_1608_object); // 0x2319 NEW_2
	goto Label_9065; // 0x231b Jump
	
Label_8988:
	var_1634_int = 10; // 0x231c PushI
	var_1635_bool = var_500_int == var_1634_int; // 0x231d Eq
	if(var_1635_bool == 0) goto Label_9001; // 0x231e JumpB
	var_1636_int = 0; var_1637_int = 0; var_1638_object = Obj(); var_1639_object = Obj(); var_1640_object = Obj(); var_1641_object = Obj(); // 0x231f PushV
	var_1636_int = var_501_int; // 0x2320 Mov
	var_1637_int = var_502_int; // 0x2321 Mov
	var_1638_object = var_507_object; // 0x2322 Mov
	var_1639_object = var_508_object; // 0x2323 Mov
	var_1640_object = var_509_object; // 0x2324 Mov
	var_1641_object = var_510_object; // 0x2325 Mov
	func_6265(var_1636_int, var_1637_int, var_1638_object, var_1639_object, var_1640_object, var_1641_object); // 0x2326 NEW_2
	goto Label_9065; // 0x2328 Jump
	
Label_9001:
	var_1667_int = 11; // 0x2329 PushI
	var_1668_bool = var_500_int == var_1667_int; // 0x232a Eq
	if(var_1668_bool == 0) goto Label_9014; // 0x232b JumpB
	var_1669_int = 0; var_1670_int = 0; var_1671_object = Obj(); var_1672_object = Obj(); var_1673_object = Obj(); var_1674_object = Obj(); // 0x232c PushV
	var_1669_int = var_501_int; // 0x232d Mov
	var_1670_int = var_502_int; // 0x232e Mov
	var_1671_object = var_507_object; // 0x232f Mov
	var_1672_object = var_508_object; // 0x2330 Mov
	var_1673_object = var_509_object; // 0x2331 Mov
	var_1674_object = var_510_object; // 0x2332 Mov
	func_6477(var_1669_int, var_1670_int, var_1671_object, var_1672_object, var_1673_object, var_1674_object); // 0x2333 NEW_2
	goto Label_9065; // 0x2335 Jump
	
Label_9014:
	var_1700_int = 12; // 0x2336 PushI
	var_1701_bool = var_500_int == var_1700_int; // 0x2337 Eq
	if(var_1701_bool == 0) goto Label_9027; // 0x2338 JumpB
	var_1702_int = 0; var_1703_int = 0; var_1704_object = Obj(); var_1705_object = Obj(); var_1706_object = Obj(); var_1707_object = Obj(); // 0x2339 PushV
	var_1702_int = var_501_int; // 0x233a Mov
	var_1703_int = var_502_int; // 0x233b Mov
	var_1704_object = var_507_object; // 0x233c Mov
	var_1705_object = var_508_object; // 0x233d Mov
	var_1706_object = var_509_object; // 0x233e Mov
	var_1707_object = var_510_object; // 0x233f Mov
	func_6674(var_1702_int, var_1703_int, var_1704_object, var_1705_object, var_1706_object, var_1707_object); // 0x2340 NEW_2
	goto Label_9065; // 0x2342 Jump
	
Label_9027:
	var_1733_int = 13; // 0x2343 PushI
	var_1734_bool = var_500_int == var_1733_int; // 0x2344 Eq
	if(var_1734_bool == 0) goto Label_9040; // 0x2345 JumpB
	var_1735_int = 0; var_1736_int = 0; var_1737_object = Obj(); var_1738_object = Obj(); var_1739_object = Obj(); var_1740_object = Obj(); // 0x2346 PushV
	var_1735_int = var_501_int; // 0x2347 Mov
	var_1736_int = var_502_int; // 0x2348 Mov
	var_1737_object = var_507_object; // 0x2349 Mov
	var_1738_object = var_508_object; // 0x234a Mov
	var_1739_object = var_509_object; // 0x234b Mov
	var_1740_object = var_510_object; // 0x234c Mov
	func_6877(var_1735_int, var_1736_int, var_1737_object, var_1738_object, var_1739_object, var_1740_object); // 0x234d NEW_2
	goto Label_9065; // 0x234f Jump
	
Label_9040:
	var_1766_int = 14; // 0x2350 PushI
	var_1767_bool = var_500_int == var_1766_int; // 0x2351 Eq
	if(var_1767_bool == 0) goto Label_9053; // 0x2352 JumpB
	var_1768_int = 0; var_1769_int = 0; var_1770_object = Obj(); var_1771_object = Obj(); var_1772_object = Obj(); var_1773_object = Obj(); // 0x2353 PushV
	var_1768_int = var_501_int; // 0x2354 Mov
	var_1769_int = var_502_int; // 0x2355 Mov
	var_1770_object = var_507_object; // 0x2356 Mov
	var_1771_object = var_508_object; // 0x2357 Mov
	var_1772_object = var_509_object; // 0x2358 Mov
	var_1773_object = var_510_object; // 0x2359 Mov
	func_7077(var_1768_int, var_1769_int, var_1770_object, var_1771_object, var_1772_object, var_1773_object); // 0x235a NEW_2
	goto Label_9065; // 0x235c Jump
	
Label_9053:
	var_1944_int = 15; // 0x235d PushI
	var_1945_bool = var_500_int == var_1944_int; // 0x235e Eq
	if(var_1945_bool == 0) goto Label_9065; // 0x235f JumpB
	var_1946_int = 0; var_1947_int = 0; var_1948_object = Obj(); var_1949_object = Obj(); var_1950_object = Obj(); var_1951_object = Obj(); // 0x2360 PushV
	var_1946_int = var_501_int; // 0x2361 Mov
	var_1947_int = var_502_int; // 0x2362 Mov
	var_1948_object = var_507_object; // 0x2363 Mov
	var_1949_object = var_508_object; // 0x2364 Mov
	var_1950_object = var_509_object; // 0x2365 Mov
	var_1951_object = var_510_object; // 0x2366 Mov
	func_7259(var_1946_int, var_1947_int, var_1948_object, var_1949_object, var_1950_object, var_1951_object); // 0x2367 NEW_2
}


func_9871(var_5248_int, var_5249_float)
{
	var_5250_int = 0; var_5251_int = 0; var_5252_int = 0; var_5253_float = 0; // 0x2690 PushV
	var_5251_int = 529852; // 0x2691 MovI
	var_5252_int = 529851; // 0x2692 MovI
	var_5253_float = var_5249_float; // 0x2693 Mov
	func_12022(var_5250_int, var_5251_int, var_5252_int, var_5253_float); // 0x2694 NEW_2
	var_5248_int = var_5250_int; // 0x2695 Mov
	return 0; // 0x2697 Return
}


func_7825()
{
	var_321_object = Obj(); var_322_int = 0; var_323_object = Obj(); var_324_int = 0; // 0x1e91 PushV
	GetMainOutdoorScene(var_323_object); // 0x1e92 Func
	var_324_int = 1; // 0x1e94 MovI
	
Label_7829:
	var_325_int = 17; // 0x1e95 PushI
	var_326_bool = var_324_int <= var_325_int; // 0x1e96 LE
	if(var_326_bool == 0) goto Label_7846; // 0x1e97 JumpB
	var_327_object = GlobalVars[15]; // 0x1e98 PushGE
	var_328_object = Obj(); var_329_object = Obj(); var_330_string = ""; var_331_string = ""; var_332_string = ""; // 0x1e99 PushV
	var_329_object = var_323_object; // 0x1e9a Mov
	var_333_string = "pt_bull"; // 0x1e9b PushS
	var_330_string = var_333_string + var_324_int; // 0x1e9c Add2
	var_331_string = "pers_bull"; // 0x1e9d MovS
	var_332_string = "bull.xml"; // 0x1e9e MovS
	func_133(var_329_object, var_330_string, var_331_string, var_332_string); // 0x1e9f NEW_2
	add(var_328_object); // 0x1ea1 ObjFunc
	var_347_int = 1; // 0x1ea3 PushI
	var_324_int = var_324_int + var_347_int; // 0x1ea4 Add2
	goto Label_7829; // 0x1ea5 Jump
	
Label_7846:
	return 4; // 0x1ea6 Return
}


func_11922(var_5621_bool)
{
	var_5621_bool = 0; // 0x2e93 MovB
	return 0; // 0x2e94 Return
}


func_11925()
{
	var_4689_object = Obj(); var_4690_object = Obj(); // 0x2e95 PushV
	var_4691_int = 562; // 0x2e96 PushI
	var_4692_int = 0; // 0x2e97 PushI
	var_4693_int = 530576; // 0x2e98 PushI
	CreateDiaryEntry(var_4690_object, var_4691_int, var_4692_int, var_4693_int); // 0x2e99 Func
	var_4694_bool = 0; var_4695_object = Obj(); var_4696_int = 0; // 0x2e9b PushV
	var_4695_object = var_4690_object; // 0x2e9c Mov
	var_4696_int = -1; // 0x2e9d MovI
	func_11977(var_4694_bool, var_4695_object, var_4696_int); // 0x2e9e NEW_2
	return 2; // 0x2ea0 Return
}


func_9880(var_5749_int, var_5750_float)
{
	var_5751_int = 0; var_5752_int = 0; var_5753_int = 0; var_5754_float = 0; // 0x2699 PushV
	var_5752_int = 530601; // 0x269a MovI
	var_5753_int = 530600; // 0x269b MovI
	var_5754_float = var_5750_float; // 0x269c Mov
	func_12022(var_5751_int, var_5752_int, var_5753_int, var_5754_float); // 0x269d NEW_2
	var_5749_int = var_5751_int; // 0x269e Mov
	return 0; // 0x26a0 Return
}


func_2714(var_2689_int, var_2690_int, var_2691_int)
{
	var_2692_int = 0; var_2693_int = 0; var_2694_int = 0; var_2695_int = 0; // 0xa9a PushV
	var_2696_bool = 0; // 0xa9b PushV
	var_2696_bool = 0; // 0xa9c MovB
	var_2697_int = 8; // 0xa9d PushI
	var_2698_bool = var_2691_int > var_2697_int; // 0xa9e GT
	if(var_2698_bool == 0) goto Label_2724; // 0xa9f JumpB
	var_2699_int = 21; // 0xaa0 PushI
	var_2700_bool = var_2691_int < var_2699_int; // 0xaa1 LT
	if(var_2700_bool == 0) goto Label_2724; // 0xaa2 JumpB
	var_2696_bool = 1; // 0xaa3 MovB
	
Label_2724:
	if(var_2696_bool == 0) goto Label_2779; // 0xaa4 JumpB
	var_2701_int = 0; var_2702_string = ""; var_2703_string = ""; var_2704_int = 0; // 0xaa5 PushV
	var_2701_int = var_2689_int; // 0xaa6 Mov
	var_2702_string = "pers_vaxxabit"; // 0xaa7 MovS
	var_2703_string = "vaxxabit_d.xml"; // 0xaa8 MovS
	var_2704_int = 6; // 0xaa9 MovI
	func_453(var_2701_int, var_2702_string, var_2703_string, var_2704_int); // 0xaaa NEW_2
	var_2705_int = 0; var_2706_string = ""; var_2707_string = ""; var_2708_int = 0; // 0xaac PushV
	var_2705_int = var_2689_int; // 0xaad Mov
	var_2706_string = "pers_vaxxabitka"; // 0xaae MovS
	var_2707_string = "vaxxabitka_d.xml"; // 0xaaf MovS
	var_2708_int = 5; // 0xab0 MovI
	func_453(var_2705_int, var_2706_string, var_2707_string, var_2708_int); // 0xab1 NEW_2
	var_2709_int = 0; var_2710_string = ""; var_2711_string = ""; var_2712_int = 0; // 0xab3 PushV
	var_2709_int = var_2689_int; // 0xab4 Mov
	var_2710_string = "pers_rat_big"; // 0xab5 MovS
	var_2711_string = "rat_big.xml"; // 0xab6 MovS
	var_2712_int = 2; // 0xab7 MovI
	func_453(var_2709_int, var_2710_string, var_2711_string, var_2712_int); // 0xab8 NEW_2
	var_2713_int = 0; var_2714_string = ""; var_2715_string = ""; var_2716_int = 0; // 0xaba PushV
	var_2713_int = var_2689_int; // 0xabb Mov
	var_2714_string = "fog"; // 0xabc MovS
	var_2715_string = "fog.xml"; // 0xabd MovS
	var_2716_int = 6; // 0xabe MovI
	func_479(var_2713_int, var_2714_string, var_2715_string, var_2716_int); // 0xabf NEW_2
	var_2717_int = 5; // 0xac1 PushI
	var_2718_bool = var_2690_int >= var_2717_int; // 0xac2 GE
	if(var_2718_bool == 0) goto Label_2763; // 0xac3 JumpB
	var_2719_int = 0; var_2720_string = ""; var_2721_string = ""; var_2722_int = 0; // 0xac4 PushV
	var_2719_int = var_2689_int; // 0xac5 Mov
	var_2720_string = "fog"; // 0xac6 MovS
	var_2721_string = "fog_hunter.xml"; // 0xac7 MovS
	var_2722_int = 2; // 0xac8 MovI
	func_479(var_2719_int, var_2720_string, var_2721_string, var_2722_int); // 0xac9 NEW_2
	
Label_2763:
	var_2723_int = 1; // 0xacb PushI
	var_2724_float = 0; var_2725_int = 0; // 0xacc PushV
	var_2725_int = var_2690_int; // 0xacd Mov
	func_1205(var_2724_float, var_2725_int); // 0xace NEW_2
	var_2694_int = var_2723_int * var_2724_float; // 0xad0 Mult2
	var_2726_int = var_2694_int; // 0xad1 Push
	if(var_2726_int == 0) goto Label_2778; // 0xad2 JumpB
	var_2727_int = 0; var_2728_string = ""; var_2729_string = ""; var_2730_int = 0; // 0xad3 PushV
	var_2727_int = var_2689_int; // 0xad4 Mov
	var_2728_string = "pers_bomber"; // 0xad5 MovS
	var_2729_string = "bomber.xml"; // 0xad6 MovS
	var_2730_int = var_2694_int; // 0xad7 Mov
	func_453(var_2727_int, var_2728_string, var_2729_string, var_2730_int); // 0xad8 NEW_2
	
Label_2778:
	goto Label_2832; // 0xada Jump
	
Label_2832:
	var_2731_int = 0; var_2732_string = ""; var_2733_string = ""; var_2734_int = 0; var_2735_int = 0; var_2736_int = 0; // 0xb10 PushV
	var_2731_int = var_2689_int; // 0xb11 Mov
	var_2732_string = "pers_worker"; // 0xb12 MovS
	var_2733_string = "agony1_man.xml"; // 0xb13 MovS
	var_2734_int = 2; // 0xb14 MovI
	var_2735_int = 4; // 0xb15 MovI
	var_2736_int = 4; // 0xb16 MovI
	func_466(var_2731_int, var_2732_string, var_2733_string, var_2734_int, var_2735_int, var_2736_int); // 0xb17 NEW_2
	var_2737_int = 0; var_2738_string = ""; var_2739_string = ""; var_2740_int = 0; var_2741_int = 0; var_2742_int = 0; // 0xb19 PushV
	var_2737_int = var_2689_int; // 0xb1a Mov
	var_2738_string = "pers_unosha"; // 0xb1b MovS
	var_2739_string = "agony1_man.xml"; // 0xb1c MovS
	var_2740_int = 2; // 0xb1d MovI
	var_2741_int = 4; // 0xb1e MovI
	var_2742_int = 4; // 0xb1f MovI
	func_466(var_2737_int, var_2738_string, var_2739_string, var_2740_int, var_2741_int, var_2742_int); // 0xb20 NEW_2
	var_2743_int = 0; var_2744_string = ""; var_2745_string = ""; var_2746_int = 0; var_2747_int = 0; var_2748_int = 0; // 0xb22 PushV
	var_2743_int = var_2689_int; // 0xb23 Mov
	var_2744_string = "pers_woman"; // 0xb24 MovS
	var_2745_string = "agony1_woman.xml"; // 0xb25 MovS
	var_2746_int = 2; // 0xb26 MovI
	var_2747_int = 4; // 0xb27 MovI
	var_2748_int = 4; // 0xb28 MovI
	func_466(var_2743_int, var_2744_string, var_2745_string, var_2746_int, var_2747_int, var_2748_int); // 0xb29 NEW_2
	var_2749_int = 0; var_2750_string = ""; var_2751_string = ""; var_2752_int = 0; var_2753_int = 0; var_2754_int = 0; // 0xb2b PushV
	var_2749_int = var_2689_int; // 0xb2c Mov
	var_2750_string = "pers_wasted_girl"; // 0xb2d MovS
	var_2751_string = "agony1_woman.xml"; // 0xb2e MovS
	var_2752_int = 2; // 0xb2f MovI
	var_2753_int = 4; // 0xb30 MovI
	var_2754_int = 4; // 0xb31 MovI
	func_466(var_2749_int, var_2750_string, var_2751_string, var_2752_int, var_2753_int, var_2754_int); // 0xb32 NEW_2
	var_2755_bool = 0; var_2756_int = 0; var_2757_int = 0; // 0xb34 PushV
	var_2756_int = var_2690_int; // 0xb35 Mov
	var_2757_int = var_2691_int; // 0xb36 Mov
	func_1295(var_2755_bool, var_2756_int, var_2757_int); // 0xb37 NEW_2
	if(var_2755_bool == 0) goto Label_2881; // 0xb39 JumpB
	var_2758_int = 0; var_2759_string = ""; var_2760_string = ""; var_2761_int = 0; // 0xb3a PushV
	var_2758_int = var_2689_int; // 0xb3b Mov
	var_2759_string = "pers_soldat"; // 0xb3c MovS
	var_2760_string = "soldier_marauder.xml"; // 0xb3d MovS
	var_2761_int = 2; // 0xb3e MovI
	func_453(var_2758_int, var_2759_string, var_2760_string, var_2761_int); // 0xb3f NEW_2
	
Label_2881:
	var_2762_bool = 0; var_2763_int = 0; // 0xb41 PushV
	var_2763_int = var_2690_int; // 0xb42 Mov
	func_1322(var_2762_bool, var_2763_int); // 0xb43 NEW_2
	if(var_2762_bool == 0) goto Label_2893; // 0xb45 JumpB
	var_2764_int = 0; var_2765_string = ""; var_2766_string = ""; var_2767_int = 0; // 0xb46 PushV
	var_2764_int = var_2689_int; // 0xb47 Mov
	var_2765_string = "pers_sanitar"; // 0xb48 MovS
	var_2766_string = "sanitar.xml"; // 0xb49 MovS
	var_2767_int = 1; // 0xb4a MovI
	func_453(var_2764_int, var_2765_string, var_2766_string, var_2767_int); // 0xb4b NEW_2
	
Label_2893:
	return 4; // 0xb4d Return
	
Label_2779:
	var_2768_int = 0; var_2769_string = ""; var_2770_string = ""; var_2771_int = 0; // 0xadb PushV
	var_2768_int = var_2689_int; // 0xadc Mov
	var_2769_string = "pers_vaxxabit"; // 0xadd MovS
	var_2770_string = "vaxxabit_d.xml"; // 0xade MovS
	var_2771_int = 4; // 0xadf MovI
	func_453(var_2768_int, var_2769_string, var_2770_string, var_2771_int); // 0xae0 NEW_2
	var_2772_int = 0; var_2773_string = ""; var_2774_string = ""; var_2775_int = 0; // 0xae2 PushV
	var_2772_int = var_2689_int; // 0xae3 Mov
	var_2773_string = "pers_vaxxabitka"; // 0xae4 MovS
	var_2774_string = "vaxxabitka_d.xml"; // 0xae5 MovS
	var_2775_int = 4; // 0xae6 MovI
	func_453(var_2772_int, var_2773_string, var_2774_string, var_2775_int); // 0xae7 NEW_2
	var_2776_int = 0; var_2777_string = ""; var_2778_string = ""; var_2779_int = 0; // 0xae9 PushV
	var_2776_int = var_2689_int; // 0xaea Mov
	var_2777_string = "pers_rat_big"; // 0xaeb MovS
	var_2778_string = "rat_big.xml"; // 0xaec MovS
	var_2779_int = 3; // 0xaed MovI
	func_453(var_2776_int, var_2777_string, var_2778_string, var_2779_int); // 0xaee NEW_2
	var_2780_int = 0; var_2781_string = ""; var_2782_string = ""; var_2783_int = 0; // 0xaf0 PushV
	var_2780_int = var_2689_int; // 0xaf1 Mov
	var_2781_string = "fog"; // 0xaf2 MovS
	var_2782_string = "fog.xml"; // 0xaf3 MovS
	var_2783_int = 6; // 0xaf4 MovI
	func_479(var_2780_int, var_2781_string, var_2782_string, var_2783_int); // 0xaf5 NEW_2
	var_2784_int = 5; // 0xaf7 PushI
	var_2785_bool = var_2690_int >= var_2784_int; // 0xaf8 GE
	if(var_2785_bool == 0) goto Label_2817; // 0xaf9 JumpB
	var_2786_int = 0; var_2787_string = ""; var_2788_string = ""; var_2789_int = 0; // 0xafa PushV
	var_2786_int = var_2689_int; // 0xafb Mov
	var_2787_string = "fog"; // 0xafc MovS
	var_2788_string = "fog_hunter.xml"; // 0xafd MovS
	var_2789_int = 2; // 0xafe MovI
	func_479(var_2786_int, var_2787_string, var_2788_string, var_2789_int); // 0xaff NEW_2
	
Label_2817:
	var_2790_int = 1; // 0xb01 PushI
	var_2791_float = 0; var_2792_int = 0; // 0xb02 PushV
	var_2792_int = var_2690_int; // 0xb03 Mov
	func_1205(var_2791_float, var_2792_int); // 0xb04 NEW_2
	var_2695_int = var_2790_int * var_2791_float; // 0xb06 Mult2
	var_2793_int = var_2695_int; // 0xb07 Push
	if(var_2793_int == 0) goto Label_2832; // 0xb08 JumpB
	var_2794_int = 0; var_2795_string = ""; var_2796_string = ""; var_2797_int = 0; // 0xb09 PushV
	var_2794_int = var_2689_int; // 0xb0a Mov
	var_2795_string = "pers_bomber"; // 0xb0b MovS
	var_2796_string = "bomber.xml"; // 0xb0c MovS
	var_2797_int = var_2695_int; // 0xb0d Mov
	func_453(var_2794_int, var_2795_string, var_2796_string, var_2797_int); // 0xb0e NEW_2
}


func_670(var_3198_int, var_3199_int, var_3200_object, var_3201_object, var_3202_object)
{
	var_3203_int = 0; var_3204_bool = 0; // 0x29f PushV
	var_3203_int = var_3198_int; // 0x2a0 Mov
	var_3204_bool = 0; // 0x2a1 MovB
	func_492(var_3203_int, var_3204_bool); // 0x2a2 NEW_2
	var_3205_object = Obj(); // 0x2a4 PushV
	var_3205_object = var_3200_object; // 0x2a5 Mov
	func_213(var_3205_object); // 0x2a6 NEW_2
	var_3206_object = Obj(); // 0x2a8 PushV
	var_3206_object = var_3201_object; // 0x2a9 Mov
	func_213(var_3206_object); // 0x2aa NEW_2
	var_3207_object = Obj(); // 0x2ac PushV
	var_3207_object = var_3202_object; // 0x2ad Mov
	func_213(var_3207_object); // 0x2ae NEW_2
	var_3208_int = 8; // 0x2b0 PushI
	var_3209_bool = var_3199_int < var_3208_int; // 0x2b1 LT
	if(var_3209_bool == 0) goto Label_704; // 0x2b2 JumpB
	var_3210_string = ""; var_3211_object = Obj(); var_3212_string = ""; var_3213_string = ""; // 0x2b3 PushV
	var_3214_string = "pt_blockpost"; // 0x2b4 PushS
	var_3215_int = 1; // 0x2b5 PushI
	var_3216_int = var_3198_int + var_3215_int; // 0x2b6 Add
	var_3217_int = var_3214_string + var_3216_int; // 0x2b7 Add
	var_3218_string = "_1_"; // 0x2b8 PushS
	var_3210_string = var_3217_int + var_3218_string; // 0x2b9 Add2
	var_3211_object = var_3200_object; // 0x2ba Mov
	var_3212_string = "pers_patrool"; // 0x2bb MovS
	var_3213_string = "patrol_stat.xml"; // 0x2bc MovS
	func_526(var_3211_object, var_3212_string, var_3213_string); // 0x2bd NEW_2
	goto Label_728; // 0x2bf Jump
	
Label_728:
	return 0; // 0x2d8 Return
	
Label_704:
	var_3219_string = ""; var_3220_object = Obj(); var_3221_string = ""; var_3222_string = ""; // 0x2c0 PushV
	var_3223_string = "pt_blockpost"; // 0x2c1 PushS
	var_3224_int = 1; // 0x2c2 PushI
	var_3225_int = var_3198_int + var_3224_int; // 0x2c3 Add
	var_3226_int = var_3223_string + var_3225_int; // 0x2c4 Add
	var_3227_string = "_1_"; // 0x2c5 PushS
	var_3219_string = var_3226_int + var_3227_string; // 0x2c6 Add2
	var_3220_object = var_3200_object; // 0x2c7 Mov
	var_3221_string = "pers_soldat"; // 0x2c8 MovS
	var_3222_string = "soldier.xml"; // 0x2c9 MovS
	func_526(var_3220_object, var_3221_string, var_3222_string); // 0x2ca NEW_2
	var_3228_string = ""; var_3229_object = Obj(); var_3230_string = ""; var_3231_string = ""; // 0x2cc PushV
	var_3232_string = "pt_blockpost"; // 0x2cd PushS
	var_3233_int = 1; // 0x2ce PushI
	var_3234_int = var_3198_int + var_3233_int; // 0x2cf Add
	var_3235_int = var_3232_string + var_3234_int; // 0x2d0 Add
	var_3236_string = "_2_"; // 0x2d1 PushS
	var_3228_string = var_3235_int + var_3236_string; // 0x2d2 Add2
	var_3229_object = var_3201_object; // 0x2d3 Mov
	var_3230_string = "pers_sanitar"; // 0x2d4 MovS
	var_3231_string = "sanitar_stat.xml"; // 0x2d5 MovS
	func_526(var_3229_object, var_3230_string, var_3231_string); // 0x2d6 NEW_2
}


func_9889(var_6192_int, var_6193_float)
{
	var_6194_int = 0; var_6195_int = 0; var_6196_int = 0; var_6197_float = 0; // 0x26a2 PushV
	var_6195_int = 533050; // 0x26a3 MovI
	var_6196_int = 533049; // 0x26a4 MovI
	var_6197_float = var_6193_float; // 0x26a5 Mov
	func_12022(var_6194_int, var_6195_int, var_6196_int, var_6197_float); // 0x26a6 NEW_2
	var_6192_int = var_6194_int; // 0x26a7 Mov
	return 0; // 0x26a9 Return
}


func_11938()
{
	var_5920_object = Obj(); var_5921_object = Obj(); // 0x2ea2 PushV
	var_5922_int = 564; // 0x2ea3 PushI
	var_5923_int = 0; // 0x2ea4 PushI
	var_5924_int = 530578; // 0x2ea5 PushI
	CreateDiaryEntry(var_5921_object, var_5922_int, var_5923_int, var_5924_int); // 0x2ea6 Func
	var_5925_bool = 0; var_5926_object = Obj(); var_5927_int = 0; // 0x2ea8 PushV
	var_5926_object = var_5921_object; // 0x2ea9 Mov
	var_5927_int = -1; // 0x2eaa MovI
	func_11977(var_5925_bool, var_5926_object, var_5927_int); // 0x2eab NEW_2
	return 2; // 0x2ead Return
}


func_7848()
{
	var_4376_object = Obj(); // 0x1ea8 PushV
	var_4377_object = GlobalVars[15]; // 0x1ea9 PushGE
	var_4376_object = var_4377_object; // 0x1eaa Mov
	func_213(var_4376_object); // 0x1eac NEW_2
	return 0; // 0x1eae Return
}


func_9898(var_5216_int, var_5217_float)
{
	var_5218_int = 0; var_5219_int = 0; var_5220_int = 0; var_5221_float = 0; // 0x26ab PushV
	var_5219_int = 529850; // 0x26ac MovI
	var_5220_int = 529849; // 0x26ad MovI
	var_5221_float = var_5217_float; // 0x26ae Mov
	func_12022(var_5218_int, var_5219_int, var_5220_int, var_5221_float); // 0x26af NEW_2
	var_5216_int = var_5218_int; // 0x26b0 Mov
	return 0; // 0x26b2 Return
}


func_10925()
{
	var_5936_object = Obj(); var_5937_object = Obj(); var_5938_object = Obj(); var_5939_object = Obj(); // 0x2aad PushV
	var_5940_object = Obj(); // 0x2aae PushV
	func_12030(var_5940_object); // 0x2aaf NEW_2
	var_5938_object = var_5940_object; // 0x2ab0 Mov
	var_5941_string = "b8q01GrifGotoKlara"; // 0x2ab2 PushS
	FindMark(var_5939_object, var_5941_string); // 0x2ab3 ObjFunc
	var_5942_object = var_5939_object; // 0x2ab5 Push
	if(var_5942_object == 0) goto Label_10937; // 0x2ab6 JumpB
	Remove(); // 0x2ab7 ObjFunc
	
Label_10937:
	var_5943_string = "b8q01KapellaGotoKlara"; // 0x2ab9 PushS
	FindMark(var_5939_object, var_5943_string); // 0x2aba ObjFunc
	var_5944_object = var_5939_object; // 0x2abc Push
	if(var_5944_object == 0) goto Label_10944; // 0x2abd JumpB
	Remove(); // 0x2abe ObjFunc
	
Label_10944:
	var_5945_string = "b8q01NotkinGotoKlara"; // 0x2ac0 PushS
	FindMark(var_5939_object, var_5945_string); // 0x2ac1 ObjFunc
	var_5946_object = var_5939_object; // 0x2ac3 Push
	if(var_5946_object == 0) goto Label_10951; // 0x2ac4 JumpB
	Remove(); // 0x2ac5 ObjFunc
	
Label_10951:
	var_5947_string = "b8q03GeorgGotoKaterina"; // 0x2ac7 PushS
	FindMark(var_5939_object, var_5947_string); // 0x2ac8 ObjFunc
	var_5948_object = var_5939_object; // 0x2aca Push
	if(var_5948_object == 0) goto Label_10958; // 0x2acb JumpB
	Remove(); // 0x2acc ObjFunc
	
Label_10958:
	var_5949_string = "b8q03KaterinaGotoMat"; // 0x2ace PushS
	FindMark(var_5939_object, var_5949_string); // 0x2acf ObjFunc
	var_5950_object = var_5939_object; // 0x2ad1 Push
	if(var_5950_object == 0) goto Label_10965; // 0x2ad2 JumpB
	Remove(); // 0x2ad3 ObjFunc
	
Label_10965:
	var_5951_bool = 0; var_5952_int = 0; // 0x2ad5 PushV
	var_5952_int = 293; // 0x2ad6 MovI
	func_12005(var_5951_bool, var_5952_int); // 0x2ad7 NEW_2
	var_5953_bool = 0; var_5954_int = 0; // 0x2ad9 PushV
	var_5954_int = 284; // 0x2ada MovI
	func_12005(var_5953_bool, var_5954_int); // 0x2adb NEW_2
	var_5955_bool = 0; var_5956_int = 0; // 0x2add PushV
	var_5956_int = 575; // 0x2ade MovI
	func_12005(var_5955_bool, var_5956_int); // 0x2adf NEW_2
	return 4; // 0x2ae1 Return
}


func_6830()
{
	var_280_string = "r7_house2_01"; // 0x1aaf PushS
	add(var_280_string); // 0x1ab0 ObjFunc
	var_281_string = "r7_house2_02"; // 0x1ab2 PushS
	add(var_281_string); // 0x1ab3 ObjFunc
	var_282_string = "r7_house2_03"; // 0x1ab5 PushS
	add(var_282_string); // 0x1ab6 ObjFunc
	var_283_string = "r7_house2_04"; // 0x1ab8 PushS
	add(var_283_string); // 0x1ab9 ObjFunc
	var_284_string = "r7_house3_03_i2"; // 0x1abb PushS
	add(var_284_string); // 0x1abc ObjFunc
	var_285_string = "r7_house3_03"; // 0x1abe PushS
	add(var_285_string); // 0x1abf ObjFunc
	var_286_string = "r7_house3_04_i2"; // 0x1ac1 PushS
	add(var_286_string); // 0x1ac2 ObjFunc
	var_287_string = "r7_house3_04"; // 0x1ac4 PushS
	add(var_287_string); // 0x1ac5 ObjFunc
	var_288_string = "r7_house3_05_i2"; // 0x1ac7 PushS
	add(var_288_string); // 0x1ac8 ObjFunc
	var_289_string = "r7_house3_05"; // 0x1aca PushS
	add(var_289_string); // 0x1acb ObjFunc
	var_290_string = "r7_house3_06_i2"; // 0x1acd PushS
	add(var_290_string); // 0x1ace ObjFunc
	var_291_string = "r7_house3_01_i2"; // 0x1ad0 PushS
	add(var_291_string); // 0x1ad1 ObjFunc
	var_292_string = "r7_house3_01"; // 0x1ad3 PushS
	add(var_292_string); // 0x1ad4 ObjFunc
	var_293_string = "r7_house3_02_i2"; // 0x1ad6 PushS
	add(var_293_string); // 0x1ad7 ObjFunc
	var_294_string = "r7_house3_02"; // 0x1ad9 PushS
	add(var_294_string); // 0x1ada ObjFunc
	return 0; // 0x1adc Return
}


func_7855()
{
	var_19_int = 0; var_20_object = Obj(); var_21_object = Obj(); var_22_int = 0; var_23_bool = 0; var_24_int = 0; var_25_bool = 0; var_26_int = 0; var_27_bool = 0; var_28_object = Obj(); var_29_int = 0; var_30_object = Obj(); var_31_object = Obj(); var_32_int = 0; var_33_bool = 0; var_34_int = 0; var_35_bool = 0; var_36_int = 0; var_37_bool = 0; var_38_object = Obj(); // 0x1eaf PushV
	var_39_object = GlobalVars[15]; // 0x1eb0 PushGE
	var_40_object = Obj(); // 0x1eb1 PushV
	func_100(var_40_object); // 0x1eb2 NEW_2
	var_39_object = var_40_object; // 0x1eb3 Mov
	GlobalVars[15] = var_39_object; // 0x1eb5 PopGE
	var_43_object = GlobalVars[13]; // 0x1eb6 PushGE
	var_44_object = Obj(); // 0x1eb7 PushV
	func_100(var_44_object); // 0x1eb8 NEW_2
	var_43_object = var_44_object; // 0x1eb9 Mov
	GlobalVars[13] = var_43_object; // 0x1ebb PopGE
	var_45_object = GlobalVars[8]; // 0x1ebc PushGE
	var_46_object = Obj(); // 0x1ebd PushV
	func_100(var_46_object); // 0x1ebe NEW_2
	var_45_object = var_46_object; // 0x1ebf Mov
	GlobalVars[8] = var_45_object; // 0x1ec1 PopGE
	var_47_object = GlobalVars[9]; // 0x1ec2 PushGE
	var_48_object = Obj(); // 0x1ec3 PushV
	func_100(var_48_object); // 0x1ec4 NEW_2
	var_47_object = var_48_object; // 0x1ec5 Mov
	GlobalVars[9] = var_47_object; // 0x1ec7 PopGE
	var_49_object = GlobalVars[10]; // 0x1ec8 PushGE
	var_50_object = Obj(); // 0x1ec9 PushV
	func_100(var_50_object); // 0x1eca NEW_2
	var_49_object = var_50_object; // 0x1ecb Mov
	GlobalVars[10] = var_49_object; // 0x1ecd PopGE
	var_29_int = 0; // 0x1ece MovI
	
Label_7887:
	var_51_int = 16; // 0x1ecf PushI
	var_52_bool = var_29_int < var_51_int; // 0x1ed0 LT
	if(var_52_bool == 0) goto Label_7911; // 0x1ed1 JumpB
	var_53_object = GlobalVars[8]; // 0x1ed2 PushGE
	var_54_object = Obj(); // 0x1ed3 PushV
	func_100(var_54_object); // 0x1ed4 NEW_2
	add(var_54_object); // 0x1ed6 ObjFunc
	var_55_object = GlobalVars[9]; // 0x1ed8 PushGE
	var_56_object = Obj(); // 0x1ed9 PushV
	func_100(var_56_object); // 0x1eda NEW_2
	add(var_56_object); // 0x1edc ObjFunc
	var_57_object = GlobalVars[10]; // 0x1ede PushGE
	var_58_object = Obj(); // 0x1edf PushV
	func_100(var_58_object); // 0x1ee0 NEW_2
	add(var_58_object); // 0x1ee2 ObjFunc
	var_59_int = 1; // 0x1ee4 PushI
	var_29_int = var_29_int + var_59_int; // 0x1ee5 Add2
	goto Label_7887; // 0x1ee6 Jump
	
Label_7911:
	CreateStringVector(var_30_object); // 0x1ee7 Func
	var_60_object = GlobalVars[13]; // 0x1ee9 PushGE
	add(var_30_object); // 0x1eea ObjFunc
	var_61_object = Obj(); // 0x1eec PushV
	var_61_object = var_30_object; // 0x1eed Mov
	func_4335(); // 0x1eee NEW_2
	CreateStringVector(var_30_object); // 0x1ef0 Func
	var_62_object = GlobalVars[13]; // 0x1ef2 PushGE
	add(var_30_object); // 0x1ef3 ObjFunc
	var_63_object = Obj(); // 0x1ef5 PushV
	var_63_object = var_30_object; // 0x1ef6 Mov
	func_4493(); // 0x1ef7 NEW_2
	CreateStringVector(var_30_object); // 0x1ef9 Func
	var_77_object = GlobalVars[13]; // 0x1efb PushGE
	add(var_30_object); // 0x1efc ObjFunc
	var_78_object = Obj(); // 0x1efe PushV
	var_78_object = var_30_object; // 0x1eff Mov
	func_4690(); // 0x1f00 NEW_2
	CreateStringVector(var_30_object); // 0x1f02 Func
	var_95_object = GlobalVars[13]; // 0x1f04 PushGE
	add(var_30_object); // 0x1f05 ObjFunc
	var_96_object = Obj(); // 0x1f07 PushV
	var_96_object = var_30_object; // 0x1f08 Mov
	func_4896(); // 0x1f09 NEW_2
	CreateStringVector(var_30_object); // 0x1f0b Func
	var_121_object = GlobalVars[13]; // 0x1f0d PushGE
	add(var_30_object); // 0x1f0e ObjFunc
	var_122_object = Obj(); // 0x1f10 PushV
	var_122_object = var_30_object; // 0x1f11 Mov
	func_5126(); // 0x1f12 NEW_2
	CreateStringVector(var_30_object); // 0x1f14 Func
	var_143_object = GlobalVars[13]; // 0x1f16 PushGE
	add(var_30_object); // 0x1f17 ObjFunc
	var_144_object = Obj(); // 0x1f19 PushV
	var_144_object = var_30_object; // 0x1f1a Mov
	func_5344(); // 0x1f1b NEW_2
	CreateStringVector(var_30_object); // 0x1f1d Func
	var_173_object = GlobalVars[13]; // 0x1f1f PushGE
	add(var_30_object); // 0x1f20 ObjFunc
	var_174_object = Obj(); // 0x1f22 PushV
	var_174_object = var_30_object; // 0x1f23 Mov
	func_5586(); // 0x1f24 NEW_2
	CreateStringVector(var_30_object); // 0x1f26 Func
	var_175_object = GlobalVars[13]; // 0x1f28 PushGE
	add(var_30_object); // 0x1f29 ObjFunc
	var_176_object = Obj(); // 0x1f2b PushV
	var_176_object = var_30_object; // 0x1f2c Mov
	func_5609(); // 0x1f2d NEW_2
	CreateStringVector(var_30_object); // 0x1f2f Func
	var_191_object = GlobalVars[13]; // 0x1f31 PushGE
	add(var_30_object); // 0x1f32 ObjFunc
	var_192_object = Obj(); // 0x1f34 PushV
	var_192_object = var_30_object; // 0x1f35 Mov
	func_5809(); // 0x1f36 NEW_2
	CreateStringVector(var_30_object); // 0x1f38 Func
	var_207_object = GlobalVars[13]; // 0x1f3a PushGE
	add(var_30_object); // 0x1f3b ObjFunc
	var_208_object = Obj(); // 0x1f3d PushV
	var_208_object = var_30_object; // 0x1f3e Mov
	func_6009(); // 0x1f3f NEW_2
	CreateStringVector(var_30_object); // 0x1f41 Func
	var_224_object = GlobalVars[13]; // 0x1f43 PushGE
	add(var_30_object); // 0x1f44 ObjFunc
	var_225_object = Obj(); // 0x1f46 PushV
	var_225_object = var_30_object; // 0x1f47 Mov
	func_6212(); // 0x1f48 NEW_2
	CreateStringVector(var_30_object); // 0x1f4a Func
	var_243_object = GlobalVars[13]; // 0x1f4c PushGE
	add(var_30_object); // 0x1f4d ObjFunc
	var_244_object = Obj(); // 0x1f4f PushV
	var_244_object = var_30_object; // 0x1f50 Mov
	func_6421(); // 0x1f51 NEW_2
	CreateStringVector(var_30_object); // 0x1f53 Func
	var_263_object = GlobalVars[13]; // 0x1f55 PushGE
	add(var_30_object); // 0x1f56 ObjFunc
	var_264_object = Obj(); // 0x1f58 PushV
	var_264_object = var_30_object; // 0x1f59 Mov
	func_6633(); // 0x1f5a NEW_2
	CreateStringVector(var_30_object); // 0x1f5c Func
	var_278_object = GlobalVars[13]; // 0x1f5e PushGE
	add(var_30_object); // 0x1f5f ObjFunc
	var_279_object = Obj(); // 0x1f61 PushV
	var_279_object = var_30_object; // 0x1f62 Mov
	func_6830(); // 0x1f63 NEW_2
	CreateStringVector(var_30_object); // 0x1f65 Func
	var_295_object = GlobalVars[13]; // 0x1f67 PushGE
	add(var_30_object); // 0x1f68 ObjFunc
	var_296_object = Obj(); // 0x1f6a PushV
	var_296_object = var_30_object; // 0x1f6b Mov
	func_7033(); // 0x1f6c NEW_2
	CreateStringVector(var_30_object); // 0x1f6e Func
	var_311_object = GlobalVars[13]; // 0x1f70 PushGE
	add(var_30_object); // 0x1f71 ObjFunc
	var_312_object = Obj(); // 0x1f73 PushV
	var_312_object = var_30_object; // 0x1f74 Mov
	func_7233(); // 0x1f75 NEW_2
	func_7825(); // 0x1f78 NEW_2
	GetMainOutdoorScene(var_31_object); // 0x1f7a Func
	var_348_object = GlobalVars[6]; // 0x1f7c PushGE
	var_349_object = Obj(); // 0x1f7d PushV
	func_100(var_349_object); // 0x1f7e NEW_2
	var_348_object = var_349_object; // 0x1f7f Mov
	GlobalVars[6] = var_348_object; // 0x1f81 PopGE
	var_32_int = 0; // 0x1f82 MovI
	
Label_8067:
	var_350_string = "pt_plant"; // 0x1f83 PushS
	var_351_int = 1; // 0x1f84 PushI
	var_352_int = var_32_int + var_351_int; // 0x1f85 Add
	var_353_int = var_350_string + var_352_int; // 0x1f86 Add
	GetLocator(var_353_int, var_33_bool); // 0x1f87 ObjFunc
	var_354_bool = var_33_bool == 0; // 0x1f89 Not
	if(var_354_bool == 0) goto Label_8076; // 0x1f8a JumpB
	goto Label_8079; // 0x1f8b Jump
	
Label_8079:
	var_355_object = GlobalVars[6]; // 0x1f8f PushGE
	resize(var_32_int); // 0x1f90 ObjFunc
	var_356_string = "Total plants: "; // 0x1f92 PushS
	var_357_int = var_356_string + var_32_int; // 0x1f93 Add
	Trace(var_357_int); // 0x1f94 Func
	var_358_object = GlobalVars[7]; // 0x1f96 PushGE
	var_359_object = Obj(); // 0x1f97 PushV
	func_100(var_359_object); // 0x1f98 NEW_2
	var_358_object = var_359_object; // 0x1f99 Mov
	GlobalVars[7] = var_358_object; // 0x1f9b PopGE
	var_34_int = 0; // 0x1f9c MovI
	
Label_8093:
	var_360_string = "pt_grave_supply"; // 0x1f9d PushS
	var_361_int = 1; // 0x1f9e PushI
	var_362_int = var_34_int + var_361_int; // 0x1f9f Add
	var_363_int = var_360_string + var_362_int; // 0x1fa0 Add
	GetLocator(var_363_int, var_35_bool); // 0x1fa1 ObjFunc
	var_364_bool = var_35_bool == 0; // 0x1fa3 Not
	if(var_364_bool == 0) goto Label_8102; // 0x1fa4 JumpB
	goto Label_8105; // 0x1fa5 Jump
	
Label_8105:
	var_365_object = GlobalVars[7]; // 0x1fa9 PushGE
	resize(var_34_int); // 0x1faa ObjFunc
	var_366_string = "Total grave supplies: "; // 0x1fac PushS
	var_367_int = var_366_string + var_34_int; // 0x1fad Add
	Trace(var_367_int); // 0x1fae Func
	var_368_object = GlobalVars[14]; // 0x1fb0 PushGE
	var_369_object = Obj(); // 0x1fb1 PushV
	func_100(var_369_object); // 0x1fb2 NEW_2
	var_368_object = var_369_object; // 0x1fb3 Mov
	GlobalVars[14] = var_368_object; // 0x1fb5 PopGE
	var_36_int = 0; // 0x1fb6 MovI
	
Label_8119:
	var_370_string = "pt_bonfire"; // 0x1fb7 PushS
	var_371_int = 1; // 0x1fb8 PushI
	var_372_int = var_36_int + var_371_int; // 0x1fb9 Add
	var_373_int = var_370_string + var_372_int; // 0x1fba Add
	GetLocator(var_373_int, var_37_bool); // 0x1fbb ObjFunc
	var_374_bool = var_37_bool == 0; // 0x1fbd Not
	if(var_374_bool == 0) goto Label_8128; // 0x1fbe JumpB
	goto Label_8140; // 0x1fbf Jump
	
Label_8140:
	var_375_string = "Total bonfires: "; // 0x1fcc PushS
	var_376_int = var_375_string + var_36_int; // 0x1fcd Add
	Trace(var_376_int); // 0x1fce Func
	return 20; // 0x1fd0 Return
	
Label_8128:
	var_38_object = 0; // 0x1fc0 SetNull
	var_377_object = GlobalVars[14]; // 0x1fc1 PushGE
	add(var_38_object); // 0x1fc2 ObjFunc
	var_378_int = 0; // 0x1fc4 PushV
	var_378_int = var_36_int; // 0x1fc5 Mov
	func_7632(var_378_int); // 0x1fc6 NEW_2
	var_38_object = 0; // 0x1fc8 SetNull
	var_413_int = 1; // 0x1fc9 PushI
	var_36_int = var_36_int + var_413_int; // 0x1fca Add2
	goto Label_8119; // 0x1fcb Jump
	
Label_8102:
	var_414_int = 1; // 0x1fa6 PushI
	var_34_int = var_34_int + var_414_int; // 0x1fa7 Add2
	goto Label_8093; // 0x1fa8 Jump
	
Label_8076:
	var_415_int = 1; // 0x1f8c PushI
	var_32_int = var_32_int + var_415_int; // 0x1f8d Add2
	goto Label_8067; // 0x1f8e Jump
}


func_11951()
{
	var_4832_object = Obj(); var_4833_object = Obj(); // 0x2eaf PushV
	var_4834_int = 565; // 0x2eb0 PushI
	var_4835_int = 0; // 0x2eb1 PushI
	var_4836_int = 530579; // 0x2eb2 PushI
	CreateDiaryEntry(var_4833_object, var_4834_int, var_4835_int, var_4836_int); // 0x2eb3 Func
	var_4837_bool = 0; var_4838_object = Obj(); var_4839_int = 0; // 0x2eb5 PushV
	var_4838_object = var_4833_object; // 0x2eb6 Mov
	var_4839_int = -1; // 0x2eb7 MovI
	func_11977(var_4837_bool, var_4838_object, var_4839_int); // 0x2eb8 NEW_2
	return 2; // 0x2eba Return
}


func_5809()
{
	var_193_string = "r2_house_2_01"; // 0x16b2 PushS
	add(var_193_string); // 0x16b3 ObjFunc
	var_194_string = "r2_house_2_02"; // 0x16b5 PushS
	add(var_194_string); // 0x16b6 ObjFunc
	var_195_string = "r2_house_2_03"; // 0x16b8 PushS
	add(var_195_string); // 0x16b9 ObjFunc
	var_196_string = "r2_house7_02"; // 0x16bb PushS
	add(var_196_string); // 0x16bc ObjFunc
	var_197_string = "r2_house01_01"; // 0x16be PushS
	add(var_197_string); // 0x16bf ObjFunc
	var_198_string = "r2_house7_01"; // 0x16c1 PushS
	add(var_198_string); // 0x16c2 ObjFunc
	var_199_string = "r2_house3_01_i2"; // 0x16c4 PushS
	add(var_199_string); // 0x16c5 ObjFunc
	var_200_string = "r2_house3_01"; // 0x16c7 PushS
	add(var_200_string); // 0x16c8 ObjFunc
	var_201_string = "r2_house3_02_i2"; // 0x16ca PushS
	add(var_201_string); // 0x16cb ObjFunc
	var_202_string = "r2_house3_02"; // 0x16cd PushS
	add(var_202_string); // 0x16ce ObjFunc
	var_203_string = "r2_house3_03_i2"; // 0x16d0 PushS
	add(var_203_string); // 0x16d1 ObjFunc
	var_204_string = "r2_house3_03"; // 0x16d3 PushS
	add(var_204_string); // 0x16d4 ObjFunc
	var_205_string = "r3_house7_01"; // 0x16d6 PushS
	add(var_205_string); // 0x16d7 ObjFunc
	var_206_string = "r3_house7_02"; // 0x16d9 PushS
	add(var_206_string); // 0x16da ObjFunc
	return 0; // 0x16dc Return
}


func_9907(var_5295_int, var_5296_float)
{
	var_5297_int = 0; var_5298_int = 0; var_5299_int = 0; var_5300_float = 0; // 0x26b4 PushV
	var_5298_int = 529862; // 0x26b5 MovI
	var_5299_int = 529861; // 0x26b6 MovI
	var_5300_float = var_5296_float; // 0x26b7 Mov
	func_12022(var_5297_int, var_5298_int, var_5299_int, var_5300_float); // 0x26b8 NEW_2
	var_5295_int = var_5297_int; // 0x26b9 Mov
	return 0; // 0x26bb Return
}


func_4792(var_2406_int, var_2407_int, var_2408_object, var_2409_object, var_2410_object, var_2411_object)
{
	var_2412_int = 0; // 0x12b9 PushI
	var_2413_bool = var_2407_int == var_2412_int; // 0x12ba Eq
	if(var_2413_bool == 0) goto Label_4832; // 0x12bb JumpB
	var_2414_int = 0; var_2415_bool = 0; // 0x12bc PushV
	var_2414_int = 2; // 0x12bd MovI
	var_2415_bool = 1; // 0x12be MovB
	func_746(var_2414_int, var_2415_bool); // 0x12bf NEW_2
	var_2416_int = 0; var_2417_bool = 0; var_2418_int = 0; // 0x12c1 PushV
	var_2416_int = 2; // 0x12c2 MovI
	var_2417_bool = 1; // 0x12c3 MovB
	var_2418_int = 1; // 0x12c4 MovI
	func_763(var_2416_int, var_2417_bool, var_2418_int); // 0x12c5 NEW_2
	var_2419_int = 0; var_2420_int = 0; var_2421_object = Obj(); var_2422_object = Obj(); var_2423_object = Obj(); // 0x12c7 PushV
	var_2419_int = 2; // 0x12c8 MovI
	var_2420_int = var_2406_int; // 0x12c9 Mov
	var_2421_object = var_2408_object; // 0x12ca Mov
	var_2422_object = var_2409_object; // 0x12cb Mov
	var_2423_object = var_2410_object; // 0x12cc Mov
	func_591(var_2419_int, var_2420_int, var_2421_object, var_2422_object, var_2423_object); // 0x12cd NEW_2
	var_2424_object = Obj(); var_2425_int = 0; // 0x12cf PushV
	var_2424_object = var_2411_object; // 0x12d0 Mov
	var_2425_int = 1; // 0x12d1 MovI
	func_255(var_2425_int); // 0x12d2 NEW_2
	var_2426_int = 0; var_2427_bool = 0; var_2428_int = 0; // 0x12d4 PushV
	var_2426_int = 2; // 0x12d5 MovI
	var_2427_bool = 1; // 0x12d6 MovB
	var_2428_int = 5; // 0x12d7 MovI
	func_820(var_2426_int, var_2427_bool, var_2428_int); // 0x12d8 NEW_2
	var_2429_int = 0; var_2430_bool = 0; var_2431_int = 0; // 0x12da PushV
	var_2429_int = 2; // 0x12db MovI
	var_2430_bool = 0; // 0x12dc MovB
	var_2431_int = 5; // 0x12dd MovI
	func_882(var_2429_int, var_2430_bool, var_2431_int); // 0x12de NEW_2
	
Label_4832:
	var_2432_int = 0; var_2433_bool = 0; // 0x12e0 PushV
	var_2432_int = 2; // 0x12e1 MovI
	var_2433_bool = 0; // 0x12e2 MovB
	func_729(var_2432_int, var_2433_bool); // 0x12e3 NEW_2
	var_2434_int = 0; var_2435_int = 0; var_2436_int = 0; // 0x12e5 PushV
	var_2434_int = 2; // 0x12e6 MovI
	var_2435_int = var_2406_int; // 0x12e7 Mov
	var_2436_int = var_2407_int; // 0x12e8 Mov
	func_2894(var_2434_int, var_2435_int, var_2436_int); // 0x12e9 NEW_2
	return 0; // 0x12eb Return
}


func_11964(var_4703_object)
{
	var_4704_object = Obj(); var_4705_object = Obj(); // 0x2ebc PushV
	GetDiaryRoot(var_4705_object); // 0x2ebd Func
	var_4706_bool = var_4705_object == 0; // 0x2ebf Not
	if(var_4706_bool == 0) goto Label_11974; // 0x2ec0 JumpB
	var_4707_string = "Can't retrieve diary root"; // 0x2ec1 PushS
	Trace(var_4707_string); // 0x2ec2 Func
	var_4703_object = 0; // 0x2ec4 MovB
	return 2; // 0x2ec5 Return
	
Label_11974:
	var_4703_object = var_4705_object; // 0x2ec6 Mov
	return 2; // 0x2ec7 Return
}


func_9916(var_5319_int, var_5320_float)
{
	var_5321_int = 0; var_5322_int = 0; var_5323_int = 0; var_5324_float = 0; // 0x26bd PushV
	var_5322_int = 529866; // 0x26be MovI
	var_5323_int = 529865; // 0x26bf MovI
	var_5324_float = var_5320_float; // 0x26c0 Mov
	func_12022(var_5321_int, var_5322_int, var_5323_int, var_5324_float); // 0x26c1 NEW_2
	var_5319_int = var_5321_int; // 0x26c2 Mov
	return 0; // 0x26c4 Return
}


func_9925(var_5256_int, var_5257_float)
{
	var_5258_int = 0; var_5259_int = 0; var_5260_int = 0; var_5261_float = 0; // 0x26c6 PushV
	var_5259_int = 529854; // 0x26c7 MovI
	var_5260_int = 529853; // 0x26c8 MovI
	var_5261_float = var_5257_float; // 0x26c9 Mov
	func_12022(var_5258_int, var_5259_int, var_5260_int, var_5261_float); // 0x26ca NEW_2
	var_5256_int = var_5258_int; // 0x26cb Mov
	return 0; // 0x26cd Return
}


func_11977(var_4694_bool, var_4695_object, var_4696_int)
{
	var_4697_object = Obj(); var_4698_object = Obj(); var_4699_int = 0; var_4700_object = Obj(); var_4701_object = Obj(); var_4702_int = 0; // 0x2ec9 PushV
	var_4703_object = Obj(); // 0x2eca PushV
	func_11964(var_4703_object); // 0x2ecb NEW_2
	var_4700_object = var_4703_object; // 0x2ecc Mov
	Find(var_4696_int, var_4701_object); // 0x2ece ObjFunc
	var_4708_bool = var_4701_object == 0; // 0x2ed0 Not
	if(var_4708_bool == 0) goto Label_11992; // 0x2ed1 JumpB
	var_4709_string = "Can't find diary parent with id: "; // 0x2ed2 PushS
	var_4710_int = var_4709_string + var_4696_int; // 0x2ed3 Add
	Trace(var_4710_int); // 0x2ed4 Func
	var_4694_bool = 0; // 0x2ed6 MovB
	return 6; // 0x2ed7 Return
	
Label_11992:
	AddChild(var_4695_object); // 0x2ed8 ObjFunc
	var_4711_int = 7; // 0x2eda PushI
	SendWorldWndMessage(var_4711_int); // 0x2edb Func
	GetCategory(var_4702_int); // 0x2edd ObjFunc
	SetDiarySection(var_4702_int); // 0x2edf Func
	var_4694_bool = 0; // 0x2ee1 MovB
	return 6; // 0x2ee2 Return
}


func_9934(var_5311_int, var_5312_float)
{
	var_5313_int = 0; var_5314_int = 0; var_5315_int = 0; var_5316_float = 0; // 0x26cf PushV
	var_5314_int = 529864; // 0x26d0 MovI
	var_5315_int = 529863; // 0x26d1 MovI
	var_5316_float = var_5312_float; // 0x26d2 Mov
	func_12022(var_5313_int, var_5314_int, var_5315_int, var_5316_float); // 0x26d3 NEW_2
	var_5311_int = var_5313_int; // 0x26d4 Mov
	return 0; // 0x26d6 Return
}


func_3797(var_3563_int, var_3564_int, var_3565_int)
{
	var_3566_int = 0; var_3567_int = 0; var_3568_int = 0; var_3569_int = 0; var_3570_int = 0; var_3571_int = 0; var_3572_int = 0; var_3573_int = 0; // 0xed5 PushV
	var_3574_bool = 0; // 0xed6 PushV
	var_3574_bool = 0; // 0xed7 MovB
	var_3575_int = 8; // 0xed8 PushI
	var_3576_bool = var_3565_int > var_3575_int; // 0xed9 GT
	if(var_3576_bool == 0) goto Label_3807; // 0xeda JumpB
	var_3577_int = 21; // 0xedb PushI
	var_3578_bool = var_3565_int < var_3577_int; // 0xedc LT
	if(var_3578_bool == 0) goto Label_3807; // 0xedd JumpB
	var_3574_bool = 1; // 0xede MovB
	
Label_3807:
	if(var_3574_bool == 0) goto Label_3884; // 0xedf JumpB
	var_3579_int = 0; var_3580_string = ""; var_3581_string = ""; var_3582_int = 0; // 0xee0 PushV
	var_3579_int = var_3563_int; // 0xee1 Mov
	var_3580_string = "pers_rat"; // 0xee2 MovS
	var_3581_string = "rat.xml"; // 0xee3 MovS
	var_3582_int = 2; // 0xee4 MovI
	func_453(var_3579_int, var_3580_string, var_3581_string, var_3582_int); // 0xee5 NEW_2
	var_3583_int = 0; var_3584_string = ""; var_3585_string = ""; var_3586_int = 0; // 0xee7 PushV
	var_3583_int = var_3563_int; // 0xee8 Mov
	var_3584_string = "pers_alkash"; // 0xee9 MovS
	var_3585_string = "alkash.xml"; // 0xeea MovS
	var_3586_int = 2; // 0xeeb MovI
	func_453(var_3583_int, var_3584_string, var_3585_string, var_3586_int); // 0xeec NEW_2
	var_3587_int = 0; var_3588_string = ""; var_3589_string = ""; var_3590_int = 0; // 0xeee PushV
	var_3587_int = var_3563_int; // 0xeef Mov
	var_3588_string = "pers_dohodyaga"; // 0xef0 MovS
	var_3589_string = "dohodyaga.xml"; // 0xef1 MovS
	var_3590_int = 1; // 0xef2 MovI
	func_453(var_3587_int, var_3588_string, var_3589_string, var_3590_int); // 0xef3 NEW_2
	var_3591_int = 2; // 0xef5 PushI
	var_3592_float = 0; var_3593_int = 0; // 0xef6 PushV
	var_3593_int = var_3564_int; // 0xef7 Mov
	func_1115(var_3592_float, var_3593_int); // 0xef8 NEW_2
	var_3570_int = var_3591_int * var_3592_float; // 0xefa Mult2
	var_3594_int = var_3570_int; // 0xefb Push
	if(var_3594_int == 0) goto Label_3844; // 0xefc JumpB
	var_3595_int = 0; var_3596_string = ""; var_3597_string = ""; var_3598_int = 0; // 0xefd PushV
	var_3595_int = var_3563_int; // 0xefe Mov
	var_3596_string = "pers_grabitel"; // 0xeff MovS
	var_3597_string = "grabitel.xml"; // 0xf00 MovS
	var_3598_int = var_3570_int; // 0xf01 Mov
	func_453(var_3595_int, var_3596_string, var_3597_string, var_3598_int); // 0xf02 NEW_2
	
Label_3844:
	var_3599_int = 1; // 0xf04 PushI
	var_3600_int = var_3564_int + var_3599_int; // 0xf05 Add
	var_3601_int = 2; // 0xf06 PushI
	var_3602_bool = var_3600_int >= var_3601_int; // 0xf07 GE
	if(var_3602_bool == 0) goto Label_3868; // 0xf08 JumpB
	var_3603_int = 0; var_3604_string = ""; var_3605_string = ""; var_3606_int = 0; // 0xf09 PushV
	var_3603_int = var_3563_int; // 0xf0a Mov
	var_3604_string = "pers_patrool"; // 0xf0b MovS
	var_3605_string = "patrol.xml"; // 0xf0c MovS
	var_3606_int = 2; // 0xf0d MovI
	func_453(var_3603_int, var_3604_string, var_3605_string, var_3606_int); // 0xf0e NEW_2
	var_3607_bool = 0; var_3608_int = 0; // 0xf10 PushV
	var_3608_int = var_3564_int; // 0xf11 Mov
	func_1322(var_3607_bool, var_3608_int); // 0xf12 NEW_2
	if(var_3607_bool == 0) goto Label_3868; // 0xf14 JumpB
	var_3609_int = 0; var_3610_string = ""; var_3611_string = ""; var_3612_int = 0; // 0xf15 PushV
	var_3609_int = var_3563_int; // 0xf16 Mov
	var_3610_string = "pers_soldat_hand"; // 0xf17 MovS
	var_3611_string = "soldier_patrol.xml"; // 0xf18 MovS
	var_3612_int = 1; // 0xf19 MovI
	func_453(var_3609_int, var_3610_string, var_3611_string, var_3612_int); // 0xf1a NEW_2
	
Label_3868:
	var_3613_int = 1; // 0xf1c PushI
	var_3614_float = 0; var_3615_int = 0; // 0xf1d PushV
	var_3615_int = var_3564_int; // 0xf1e Mov
	func_1205(var_3614_float, var_3615_int); // 0xf1f NEW_2
	var_3571_int = var_3613_int * var_3614_float; // 0xf21 Mult2
	var_3616_int = var_3571_int; // 0xf22 Push
	if(var_3616_int == 0) goto Label_3883; // 0xf23 JumpB
	var_3617_int = 0; var_3618_string = ""; var_3619_string = ""; var_3620_int = 0; // 0xf24 PushV
	var_3617_int = var_3563_int; // 0xf25 Mov
	var_3618_string = "pers_bomber"; // 0xf26 MovS
	var_3619_string = "bomber.xml"; // 0xf27 MovS
	var_3620_int = var_3571_int; // 0xf28 Mov
	func_453(var_3617_int, var_3618_string, var_3619_string, var_3620_int); // 0xf29 NEW_2
	
Label_3883:
	goto Label_3959; // 0xf2b Jump
	
Label_3959:
	var_3621_bool = 0; var_3622_int = 0; var_3623_int = 0; // 0xf77 PushV
	var_3622_int = var_3564_int; // 0xf78 Mov
	var_3623_int = var_3565_int; // 0xf79 Mov
	func_1295(var_3621_bool, var_3622_int, var_3623_int); // 0xf7a NEW_2
	if(var_3621_bool == 0) goto Label_3972; // 0xf7c JumpB
	var_3624_int = 0; var_3625_string = ""; var_3626_string = ""; var_3627_int = 0; // 0xf7d PushV
	var_3624_int = var_3563_int; // 0xf7e Mov
	var_3625_string = "pers_soldat"; // 0xf7f MovS
	var_3626_string = "soldier_marauder.xml"; // 0xf80 MovS
	var_3627_int = 2; // 0xf81 MovI
	func_453(var_3624_int, var_3625_string, var_3626_string, var_3627_int); // 0xf82 NEW_2
	
Label_3972:
	var_3628_bool = 0; var_3629_int = 0; // 0xf84 PushV
	var_3629_int = var_3564_int; // 0xf85 Mov
	func_1322(var_3628_bool, var_3629_int); // 0xf86 NEW_2
	if(var_3628_bool == 0) goto Label_3984; // 0xf88 JumpB
	var_3630_int = 0; var_3631_string = ""; var_3632_string = ""; var_3633_int = 0; // 0xf89 PushV
	var_3630_int = var_3563_int; // 0xf8a Mov
	var_3631_string = "pers_sanitar"; // 0xf8b MovS
	var_3632_string = "sanitar.xml"; // 0xf8c MovS
	var_3633_int = 1; // 0xf8d MovI
	func_453(var_3630_int, var_3631_string, var_3632_string, var_3633_int); // 0xf8e NEW_2
	
Label_3984:
	return 8; // 0xf90 Return
	
Label_3884:
	var_3634_int = 0; var_3635_string = ""; var_3636_string = ""; var_3637_int = 0; // 0xf2c PushV
	var_3634_int = var_3563_int; // 0xf2d Mov
	var_3635_string = "pers_rat"; // 0xf2e MovS
	var_3636_string = "rat.xml"; // 0xf2f MovS
	var_3637_int = 4; // 0xf30 MovI
	func_453(var_3634_int, var_3635_string, var_3636_string, var_3637_int); // 0xf31 NEW_2
	var_3638_int = 0; var_3639_string = ""; var_3640_string = ""; var_3641_int = 0; // 0xf33 PushV
	var_3638_int = var_3563_int; // 0xf34 Mov
	var_3639_string = "pers_alkash"; // 0xf35 MovS
	var_3640_string = "alkash.xml"; // 0xf36 MovS
	var_3641_int = 1; // 0xf37 MovI
	func_453(var_3638_int, var_3639_string, var_3640_string, var_3641_int); // 0xf38 NEW_2
	var_3642_int = 0; var_3643_string = ""; var_3644_string = ""; var_3645_int = 0; // 0xf3a PushV
	var_3642_int = var_3563_int; // 0xf3b Mov
	var_3643_string = "pers_dohodyaga"; // 0xf3c MovS
	var_3644_string = "dohodyaga.xml"; // 0xf3d MovS
	var_3645_int = 1; // 0xf3e MovI
	func_453(var_3642_int, var_3643_string, var_3644_string, var_3645_int); // 0xf3f NEW_2
	var_3646_int = 3; // 0xf41 PushI
	var_3647_float = 0; var_3648_int = 0; // 0xf42 PushV
	var_3648_int = var_3564_int; // 0xf43 Mov
	func_1115(var_3647_float, var_3648_int); // 0xf44 NEW_2
	var_3572_int = var_3646_int * var_3647_float; // 0xf46 Mult2
	var_3649_int = var_3572_int; // 0xf47 Push
	if(var_3649_int == 0) goto Label_3920; // 0xf48 JumpB
	var_3650_int = 0; var_3651_string = ""; var_3652_string = ""; var_3653_int = 0; // 0xf49 PushV
	var_3650_int = var_3563_int; // 0xf4a Mov
	var_3651_string = "pers_grabitel"; // 0xf4b MovS
	var_3652_string = "grabitel.xml"; // 0xf4c MovS
	var_3653_int = var_3572_int; // 0xf4d Mov
	func_453(var_3650_int, var_3651_string, var_3652_string, var_3653_int); // 0xf4e NEW_2
	
Label_3920:
	var_3654_int = 1; // 0xf50 PushI
	var_3655_int = var_3564_int + var_3654_int; // 0xf51 Add
	var_3656_int = 2; // 0xf52 PushI
	var_3657_bool = var_3655_int >= var_3656_int; // 0xf53 GE
	if(var_3657_bool == 0) goto Label_3944; // 0xf54 JumpB
	var_3658_int = 0; var_3659_string = ""; var_3660_string = ""; var_3661_int = 0; // 0xf55 PushV
	var_3658_int = var_3563_int; // 0xf56 Mov
	var_3659_string = "pers_patrool"; // 0xf57 MovS
	var_3660_string = "patrol.xml"; // 0xf58 MovS
	var_3661_int = 1; // 0xf59 MovI
	func_453(var_3658_int, var_3659_string, var_3660_string, var_3661_int); // 0xf5a NEW_2
	var_3662_bool = 0; var_3663_int = 0; // 0xf5c PushV
	var_3663_int = var_3564_int; // 0xf5d Mov
	func_1322(var_3662_bool, var_3663_int); // 0xf5e NEW_2
	if(var_3662_bool == 0) goto Label_3944; // 0xf60 JumpB
	var_3664_int = 0; var_3665_string = ""; var_3666_string = ""; var_3667_int = 0; // 0xf61 PushV
	var_3664_int = var_3563_int; // 0xf62 Mov
	var_3665_string = "pers_soldat_hand"; // 0xf63 MovS
	var_3666_string = "soldier_patrol.xml"; // 0xf64 MovS
	var_3667_int = 1; // 0xf65 MovI
	func_453(var_3664_int, var_3665_string, var_3666_string, var_3667_int); // 0xf66 NEW_2
	
Label_3944:
	var_3668_int = 1; // 0xf68 PushI
	var_3669_float = 0; var_3670_int = 0; // 0xf69 PushV
	var_3670_int = var_3564_int; // 0xf6a Mov
	func_1205(var_3669_float, var_3670_int); // 0xf6b NEW_2
	var_3573_int = var_3668_int * var_3669_float; // 0xf6d Mult2
	var_3671_int = var_3573_int; // 0xf6e Push
	if(var_3671_int == 0) goto Label_3959; // 0xf6f JumpB
	var_3672_int = 0; var_3673_string = ""; var_3674_string = ""; var_3675_int = 0; // 0xf70 PushV
	var_3672_int = var_3563_int; // 0xf71 Mov
	var_3673_string = "pers_bomber"; // 0xf72 MovS
	var_3674_string = "bomber.xml"; // 0xf73 MovS
	var_3675_int = var_3573_int; // 0xf74 Mov
	func_453(var_3672_int, var_3673_string, var_3674_string, var_3675_int); // 0xf75 NEW_2
}


func_9943(var_6082_int, var_6083_float)
{
	var_6084_int = 0; var_6085_int = 0; var_6086_int = 0; var_6087_float = 0; // 0x26d8 PushV
	var_6085_int = 531085; // 0x26d9 MovI
	var_6086_int = 531084; // 0x26da MovI
	var_6087_float = var_6083_float; // 0x26db Mov
	func_12022(var_6084_int, var_6085_int, var_6086_int, var_6087_float); // 0x26dc NEW_2
	var_6082_int = var_6084_int; // 0x26dd Mov
	return 0; // 0x26df Return
}


func_729(var_736_int, var_737_bool)
{
	var_738_object = Obj(); var_739_int = 0; var_740_object = Obj(); var_741_int = 0; // 0x2d9 PushV
	GetMainOutdoorScene(var_740_object); // 0x2da Func
	var_742_bool = var_740_object == 0; // 0x2dc NullEq
	if(var_742_bool == 0) goto Label_738; // 0x2dd JumpB
	var_743_string = "City manager: Can't find main outdoor scene"; // 0x2de PushS
	Trace(var_743_string); // 0x2df Func
	return 4; // 0x2e1 Return
	
Label_738:
	var_744_int = 1; // 0x2e2 PushI
	var_741_int = var_736_int + var_744_int; // 0x2e3 Add2
	var_745_int = 100; // 0x2e4 PushI
	var_746_bool = 1; // 0x2e5 PushB
	EnableSubsets(var_741_int, var_745_int, var_737_bool, var_746_bool); // 0x2e6 ObjFunc
	return 4; // 0x2e8 Return
}


func_6877(var_1735_int, var_1736_int, var_1737_object, var_1738_object, var_1739_object, var_1740_object)
{
	var_1741_int = 0; // 0x1ade PushI
	var_1742_bool = var_1736_int == var_1741_int; // 0x1adf Eq
	if(var_1742_bool == 0) goto Label_6917; // 0x1ae0 JumpB
	var_1743_int = 0; var_1744_bool = 0; // 0x1ae1 PushV
	var_1743_int = 13; // 0x1ae2 MovI
	var_1744_bool = 0; // 0x1ae3 MovB
	func_746(var_1743_int, var_1744_bool); // 0x1ae4 NEW_2
	var_1745_int = 0; var_1746_bool = 0; var_1747_int = 0; // 0x1ae6 PushV
	var_1745_int = 13; // 0x1ae7 MovI
	var_1746_bool = 0; // 0x1ae8 MovB
	var_1747_int = 1; // 0x1ae9 MovI
	func_763(var_1745_int, var_1746_bool, var_1747_int); // 0x1aea NEW_2
	var_1748_int = 0; var_1749_int = 0; var_1750_object = Obj(); var_1751_object = Obj(); var_1752_object = Obj(); // 0x1aec PushV
	var_1748_int = 13; // 0x1aed MovI
	var_1749_int = var_1735_int; // 0x1aee Mov
	var_1750_object = var_1737_object; // 0x1aef Mov
	var_1751_object = var_1738_object; // 0x1af0 Mov
	var_1752_object = var_1739_object; // 0x1af1 Mov
	func_572(var_1749_int, var_1750_object, var_1751_object, var_1752_object); // 0x1af2 NEW_2
	var_1753_object = Obj(); var_1754_int = 0; // 0x1af4 PushV
	var_1753_object = var_1740_object; // 0x1af5 Mov
	var_1754_int = 0; // 0x1af6 MovI
	func_255(var_1754_int); // 0x1af7 NEW_2
	var_1755_int = 0; var_1756_bool = 0; var_1757_int = 0; // 0x1af9 PushV
	var_1755_int = 13; // 0x1afa MovI
	var_1756_bool = 0; // 0x1afb MovB
	var_1757_int = 4; // 0x1afc MovI
	func_820(var_1755_int, var_1756_bool, var_1757_int); // 0x1afd NEW_2
	var_1758_int = 0; var_1759_bool = 0; var_1760_int = 0; // 0x1aff PushV
	var_1758_int = 13; // 0x1b00 MovI
	var_1759_bool = 0; // 0x1b01 MovB
	var_1760_int = 4; // 0x1b02 MovI
	func_882(var_1758_int, var_1759_bool, var_1760_int); // 0x1b03 NEW_2
	
Label_6917:
	var_1761_int = 0; var_1762_int = 0; // 0x1b05 PushV
	var_1761_int = 13; // 0x1b06 MovI
	var_1762_int = var_1736_int; // 0x1b07 Mov
	func_1000(var_1761_int, var_1762_int); // 0x1b08 NEW_2
	var_1763_int = 0; var_1764_int = 0; var_1765_int = 0; // 0x1b0a PushV
	var_1763_int = 13; // 0x1b0b MovI
	var_1764_int = var_1735_int; // 0x1b0c Mov
	var_1765_int = var_1736_int; // 0x1b0d Mov
	func_1574(var_1763_int, var_1764_int, var_1765_int); // 0x1b0e NEW_2
	return 0; // 0x1b10 Return
}


func_5853(var_1570_int, var_1571_int, var_1572_object, var_1573_object, var_1574_object, var_1575_object)
{
	var_1576_int = 0; // 0x16de PushI
	var_1577_bool = var_1571_int == var_1576_int; // 0x16df Eq
	if(var_1577_bool == 0) goto Label_5893; // 0x16e0 JumpB
	var_1578_int = 0; var_1579_bool = 0; // 0x16e1 PushV
	var_1578_int = 8; // 0x16e2 MovI
	var_1579_bool = 0; // 0x16e3 MovB
	func_746(var_1578_int, var_1579_bool); // 0x16e4 NEW_2
	var_1580_int = 0; var_1581_bool = 0; var_1582_int = 0; // 0x16e6 PushV
	var_1580_int = 8; // 0x16e7 MovI
	var_1581_bool = 0; // 0x16e8 MovB
	var_1582_int = 1; // 0x16e9 MovI
	func_763(var_1580_int, var_1581_bool, var_1582_int); // 0x16ea NEW_2
	var_1583_int = 0; var_1584_int = 0; var_1585_object = Obj(); var_1586_object = Obj(); var_1587_object = Obj(); // 0x16ec PushV
	var_1583_int = 8; // 0x16ed MovI
	var_1584_int = var_1570_int; // 0x16ee Mov
	var_1585_object = var_1572_object; // 0x16ef Mov
	var_1586_object = var_1573_object; // 0x16f0 Mov
	var_1587_object = var_1574_object; // 0x16f1 Mov
	func_572(var_1584_int, var_1585_object, var_1586_object, var_1587_object); // 0x16f2 NEW_2
	var_1588_object = Obj(); var_1589_int = 0; // 0x16f4 PushV
	var_1588_object = var_1575_object; // 0x16f5 Mov
	var_1589_int = 0; // 0x16f6 MovI
	func_255(var_1589_int); // 0x16f7 NEW_2
	var_1590_int = 0; var_1591_bool = 0; var_1592_int = 0; // 0x16f9 PushV
	var_1590_int = 8; // 0x16fa MovI
	var_1591_bool = 0; // 0x16fb MovB
	var_1592_int = 4; // 0x16fc MovI
	func_820(var_1590_int, var_1591_bool, var_1592_int); // 0x16fd NEW_2
	var_1593_int = 0; var_1594_bool = 0; var_1595_int = 0; // 0x16ff PushV
	var_1593_int = 8; // 0x1700 MovI
	var_1594_bool = 0; // 0x1701 MovB
	var_1595_int = 4; // 0x1702 MovI
	func_882(var_1593_int, var_1594_bool, var_1595_int); // 0x1703 NEW_2
	
Label_5893:
	var_1596_int = 0; var_1597_int = 0; // 0x1705 PushV
	var_1596_int = 8; // 0x1706 MovI
	var_1597_int = var_1571_int; // 0x1707 Mov
	func_933(var_1596_int, var_1597_int); // 0x1708 NEW_2
	var_1598_int = 0; var_1599_int = 0; var_1600_int = 0; // 0x170a PushV
	var_1598_int = 8; // 0x170b MovI
	var_1599_int = var_1570_int; // 0x170c Mov
	var_1600_int = var_1571_int; // 0x170d Mov
	func_1574(var_1598_int, var_1599_int, var_1600_int); // 0x170e NEW_2
	return 0; // 0x1710 Return
}


func_9952(var_6200_int, var_6201_float)
{
	var_6202_int = 0; var_6203_int = 0; var_6204_int = 0; var_6205_float = 0; // 0x26e1 PushV
	var_6203_int = 538402; // 0x26e2 MovI
	var_6204_int = 538401; // 0x26e3 MovI
	var_6205_float = var_6201_float; // 0x26e4 Mov
	func_12022(var_6202_int, var_6203_int, var_6204_int, var_6205_float); // 0x26e5 NEW_2
	var_6200_int = var_6202_int; // 0x26e6 Mov
	return 0; // 0x26e8 Return
}


func_10980()
{
	var_5978_object = Obj(); var_5979_object = Obj(); var_5980_object = Obj(); var_5981_object = Obj(); // 0x2ae4 PushV
	var_5982_object = Obj(); // 0x2ae5 PushV
	func_12030(var_5982_object); // 0x2ae6 NEW_2
	var_5980_object = var_5982_object; // 0x2ae7 Mov
	var_5983_string = "b9q01MDobermanGotoFactory"; // 0x2ae9 PushS
	FindMark(var_5981_object, var_5983_string); // 0x2aea ObjFunc
	var_5984_object = var_5981_object; // 0x2aec Push
	if(var_5984_object == 0) goto Label_10992; // 0x2aed JumpB
	Remove(); // 0x2aee ObjFunc
	
Label_10992:
	var_5985_string = "b9q03Bonfire1"; // 0x2af0 PushS
	FindMark(var_5981_object, var_5985_string); // 0x2af1 ObjFunc
	var_5986_object = var_5981_object; // 0x2af3 Push
	if(var_5986_object == 0) goto Label_10999; // 0x2af4 JumpB
	Remove(); // 0x2af5 ObjFunc
	
Label_10999:
	var_5987_string = "b9q03Bonfire2"; // 0x2af7 PushS
	FindMark(var_5981_object, var_5987_string); // 0x2af8 ObjFunc
	var_5988_object = var_5981_object; // 0x2afa Push
	if(var_5988_object == 0) goto Label_11006; // 0x2afb JumpB
	Remove(); // 0x2afc ObjFunc
	
Label_11006:
	var_5989_string = "b9q03Bonfire3"; // 0x2afe PushS
	FindMark(var_5981_object, var_5989_string); // 0x2aff ObjFunc
	var_5990_object = var_5981_object; // 0x2b01 Push
	if(var_5990_object == 0) goto Label_11013; // 0x2b02 JumpB
	Remove(); // 0x2b03 ObjFunc
	
Label_11013:
	var_5991_string = "b9q03Bonfire4"; // 0x2b05 PushS
	FindMark(var_5981_object, var_5991_string); // 0x2b06 ObjFunc
	var_5992_object = var_5981_object; // 0x2b08 Push
	if(var_5992_object == 0) goto Label_11020; // 0x2b09 JumpB
	Remove(); // 0x2b0a ObjFunc
	
Label_11020:
	var_5993_string = "b9q03DobermanGotoFollower"; // 0x2b0c PushS
	FindMark(var_5981_object, var_5993_string); // 0x2b0d ObjFunc
	var_5994_object = var_5981_object; // 0x2b0f Push
	if(var_5994_object == 0) goto Label_11027; // 0x2b10 JumpB
	Remove(); // 0x2b11 ObjFunc
	
Label_11027:
	var_5995_string = "b9q03KapellaGotoSpi4ka"; // 0x2b13 PushS
	FindMark(var_5981_object, var_5995_string); // 0x2b14 ObjFunc
	var_5996_object = var_5981_object; // 0x2b16 Push
	if(var_5996_object == 0) goto Label_11034; // 0x2b17 JumpB
	Remove(); // 0x2b18 ObjFunc
	
Label_11034:
	var_5997_string = "b9q01BlockGotoBoiny"; // 0x2b1a PushS
	FindMark(var_5981_object, var_5997_string); // 0x2b1b ObjFunc
	var_5998_object = var_5981_object; // 0x2b1d Push
	if(var_5998_object == 0) goto Label_11041; // 0x2b1e JumpB
	Remove(); // 0x2b1f ObjFunc
	
Label_11041:
	var_5999_string = "b9Block"; // 0x2b21 PushS
	FindMark(var_5981_object, var_5999_string); // 0x2b22 ObjFunc
	var_6000_object = var_5981_object; // 0x2b24 Push
	if(var_6000_object == 0) goto Label_11048; // 0x2b25 JumpB
	Remove(); // 0x2b26 ObjFunc
	
Label_11048:
	var_6001_bool = 0; var_6002_int = 0; // 0x2b28 PushV
	var_6002_int = 297; // 0x2b29 MovI
	func_12005(var_6001_bool, var_6002_int); // 0x2b2a NEW_2
	var_6003_bool = 0; var_6004_int = 0; // 0x2b2c PushV
	var_6004_int = 532; // 0x2b2d MovI
	func_12005(var_6003_bool, var_6004_int); // 0x2b2e NEW_2
	return 4; // 0x2b30 Return
}


func_12005(var_4604_bool, var_4605_int)
{
	var_4606_object = Obj(); var_4607_object = Obj(); var_4608_object = Obj(); var_4609_object = Obj(); // 0x2ee5 PushV
	var_4610_object = Obj(); // 0x2ee6 PushV
	func_11964(var_4610_object); // 0x2ee7 NEW_2
	var_4608_object = var_4610_object; // 0x2ee8 Mov
	Find(var_4605_int, var_4609_object); // 0x2eea ObjFunc
	var_4615_bool = var_4609_object == 0; // 0x2eec Not
	if(var_4615_bool == 0) goto Label_12016; // 0x2eed JumpB
	var_4604_bool = 0; // 0x2eee MovB
	return 4; // 0x2eef Return
	
Label_12016:
	Remove(); // 0x2ef0 ObjFunc
	var_4604_bool = 1; // 0x2ef2 MovB
	return 4; // 0x2ef3 Return
}


func_9961(var_5334_int, var_5335_float)
{
	var_5336_int = 0; var_5337_int = 0; var_5338_int = 0; var_5339_float = 0; // 0x26ea PushV
	var_5337_int = 529868; // 0x26eb MovI
	var_5338_int = 529867; // 0x26ec MovI
	var_5339_float = var_5335_float; // 0x26ed Mov
	func_12022(var_5336_int, var_5337_int, var_5338_int, var_5339_float); // 0x26ee NEW_2
	var_5334_int = var_5336_int; // 0x26ef Mov
	return 0; // 0x26f1 Return
}


func_746(var_451_int, var_452_bool)
{
	var_453_object = Obj(); var_454_int = 0; var_455_object = Obj(); var_456_int = 0; // 0x2ea PushV
	GetMainOutdoorScene(var_455_object); // 0x2eb Func
	var_457_bool = var_455_object == 0; // 0x2ed NullEq
	if(var_457_bool == 0) goto Label_755; // 0x2ee JumpB
	var_458_string = "City manager: Can't find main outdoor scene"; // 0x2ef PushS
	Trace(var_458_string); // 0x2f0 Func
	return 4; // 0x2f2 Return
	
Label_755:
	var_459_int = 1; // 0x2f3 PushI
	var_456_int = var_451_int + var_459_int; // 0x2f4 Add2
	var_460_int = 200; // 0x2f5 PushI
	var_461_bool = 0; // 0x2f6 PushB
	EnableSubsets(var_456_int, var_460_int, var_452_bool, var_461_bool); // 0x2f7 ObjFunc
	return 4; // 0x2f9 Return
}


func_4844(var_3535_int, var_3536_int, var_3537_object, var_3538_object, var_3539_object, var_3540_object)
{
	var_3541_int = 0; // 0x12ed PushI
	var_3542_bool = var_3536_int == var_3541_int; // 0x12ee Eq
	if(var_3542_bool == 0) goto Label_4884; // 0x12ef JumpB
	var_3543_int = 0; var_3544_bool = 0; // 0x12f0 PushV
	var_3543_int = 2; // 0x12f1 MovI
	var_3544_bool = 0; // 0x12f2 MovB
	func_746(var_3543_int, var_3544_bool); // 0x12f3 NEW_2
	var_3545_int = 0; var_3546_bool = 0; var_3547_int = 0; // 0x12f5 PushV
	var_3545_int = 2; // 0x12f6 MovI
	var_3546_bool = 0; // 0x12f7 MovB
	var_3547_int = 1; // 0x12f8 MovI
	func_763(var_3545_int, var_3546_bool, var_3547_int); // 0x12f9 NEW_2
	var_3548_int = 0; var_3549_int = 0; var_3550_object = Obj(); var_3551_object = Obj(); var_3552_object = Obj(); // 0x12fb PushV
	var_3548_int = 2; // 0x12fc MovI
	var_3549_int = var_3535_int; // 0x12fd Mov
	var_3550_object = var_3537_object; // 0x12fe Mov
	var_3551_object = var_3538_object; // 0x12ff Mov
	var_3552_object = var_3539_object; // 0x1300 Mov
	func_670(var_3548_int, var_3549_int, var_3550_object, var_3551_object, var_3552_object); // 0x1301 NEW_2
	var_3553_object = Obj(); var_3554_int = 0; // 0x1303 PushV
	var_3553_object = var_3540_object; // 0x1304 Mov
	var_3554_int = 2; // 0x1305 MovI
	func_255(var_3554_int); // 0x1306 NEW_2
	var_3555_int = 0; var_3556_bool = 0; var_3557_int = 0; // 0x1308 PushV
	var_3555_int = 2; // 0x1309 MovI
	var_3556_bool = 0; // 0x130a MovB
	var_3557_int = 5; // 0x130b MovI
	func_820(var_3555_int, var_3556_bool, var_3557_int); // 0x130c NEW_2
	var_3558_int = 0; var_3559_bool = 0; var_3560_int = 0; // 0x130e PushV
	var_3558_int = 2; // 0x130f MovI
	var_3559_bool = 1; // 0x1310 MovB
	var_3560_int = 5; // 0x1311 MovI
	func_882(var_3558_int, var_3559_bool, var_3560_int); // 0x1312 NEW_2
	
Label_4884:
	var_3561_int = 0; var_3562_bool = 0; // 0x1314 PushV
	var_3561_int = 2; // 0x1315 MovI
	var_3562_bool = 0; // 0x1316 MovB
	func_729(var_3561_int, var_3562_bool); // 0x1317 NEW_2
	var_3563_int = 0; var_3564_int = 0; var_3565_int = 0; // 0x1319 PushV
	var_3563_int = 2; // 0x131a MovI
	var_3564_int = var_3535_int; // 0x131b Mov
	var_3565_int = var_3536_int; // 0x131c Mov
	func_3797(var_3563_int, var_3564_int, var_3565_int); // 0x131d NEW_2
	return 0; // 0x131f Return
}


func_9970(var_5342_int, var_5343_float)
{
	var_5344_int = 0; var_5345_int = 0; var_5346_int = 0; var_5347_float = 0; // 0x26f3 PushV
	var_5345_int = 529870; // 0x26f4 MovI
	var_5346_int = 529869; // 0x26f5 MovI
	var_5347_float = var_5343_float; // 0x26f6 Mov
	func_12022(var_5344_int, var_5345_int, var_5346_int, var_5347_float); // 0x26f7 NEW_2
	var_5342_int = var_5344_int; // 0x26f8 Mov
	return 0; // 0x26fa Return
}


func_12022(var_4756_int, var_4757_int, var_4758_int, var_4759_float)
{
	var_4760_int = 0; var_4761_int = 0; // 0x2ef6 PushV
	AddMessage(var_4757_int, var_4758_int, var_4759_float, var_4761_int); // 0x2ef7 Func
	var_4762_int = 6; // 0x2ef9 PushI
	SendWorldWndMessage(var_4762_int); // 0x2efa Func
	var_4756_int = var_4761_int; // 0x2efc Mov
	return 2; // 0x2efd Return
}


func_763(var_527_int, var_528_bool, var_529_int)
{
	var_530_string = ""; var_531_object = Obj(); var_532_int = 0; var_533_string = ""; var_534_object = Obj(); var_535_int = 0; var_536_object = Obj(); var_537_string = ""; var_538_object = Obj(); var_539_int = 0; var_540_string = ""; var_541_object = Obj(); var_542_int = 0; var_543_object = Obj(); // 0x2fb PushV
	var_544_string = "street_rags"; // 0x2fc PushS
	var_545_int = 1; // 0x2fd PushI
	var_546_int = var_527_int + var_545_int; // 0x2fe Add
	var_537_string = var_544_string + var_546_int; // 0x2ff Add2
	var_547_bool = var_528_bool; // 0x300 Push
	if(var_547_bool == 0) goto Label_803; // 0x301 JumpB
	GetMainOutdoorScene(var_538_object); // 0x302 Func
	var_548_bool = var_538_object == 0; // 0x304 NullEq
	if(var_548_bool == 0) goto Label_778; // 0x305 JumpB
	var_549_string = "City manager: Can't find main outdoor scene"; // 0x306 PushS
	Trace(var_549_string); // 0x307 Func
	return 14; // 0x309 Return
	
Label_778:
	var_539_int = 1; // 0x30a MovI
	
Label_779:
	var_550_bool = var_539_int <= var_529_int; // 0x30b LE
	if(var_550_bool == 0) goto Label_801; // 0x30c JumpB
	var_551_string = "_"; // 0x30d PushS
	var_552_int = var_537_string + var_551_string; // 0x30e Add
	var_540_string = var_552_int + var_539_int; // 0x30f Add2
	FindActor(var_541_object, var_540_string); // 0x310 Func
	var_553_bool = var_541_object == 0; // 0x312 Not
	if(var_553_bool == 0) goto Label_794; // 0x313 JumpB
	var_554_cvector = CVector(0.0, 0.0, 0.0); // 0x314 PushVec
	var_555_cvector = CVector(0.0, 0.0, 1.0); // 0x315 PushVec
	var_556_string = "do_invis.xml"; // 0x316 PushS
	AddActor(var_541_object, var_540_string, var_538_object, var_554_cvector, var_555_cvector, var_556_string); // 0x317 Func
	goto Label_797; // 0x319 Jump
	
Label_797:
	var_541_object = 0; // 0x31d SetNull
	var_557_int = 1; // 0x31e PushI
	var_539_int = var_539_int + var_557_int; // 0x31f Add2
	goto Label_779; // 0x320 Jump
	
Label_794:
	var_558_bool = 0; // 0x31a PushB
	RemoveOnUnload(var_558_bool); // 0x31b ObjFunc
	
Label_801:
	var_538_object = 0; // 0x321 SetNull
	goto Label_819; // 0x322 Jump
	
Label_819:
	return 14; // 0x333 Return
	
Label_803:
	var_542_int = 1; // 0x323 MovI
	
Label_804:
	var_559_bool = var_542_int <= var_529_int; // 0x324 LE
	if(var_559_bool == 0) goto Label_819; // 0x325 JumpB
	var_560_string = "_"; // 0x326 PushS
	var_561_int = var_537_string + var_560_string; // 0x327 Add
	var_562_int = var_561_int + var_542_int; // 0x328 Add
	FindActor(var_543_object, var_562_int); // 0x329 Func
	var_563_object = var_543_object; // 0x32b Push
	if(var_563_object == 0) goto Label_815; // 0x32c JumpB
	RemoveOnUnload(); // 0x32d ObjFunc
	
Label_815:
	var_543_object = 0; // 0x32f SetNull
	var_564_int = 1; // 0x330 PushI
	var_542_int = var_542_int + var_564_int; // 0x331 Add2
	goto Label_804; // 0x332 Jump
}


func_9979(var_5264_int, var_5265_float)
{
	var_5266_int = 0; var_5267_int = 0; var_5268_int = 0; var_5269_float = 0; // 0x26fc PushV
	var_5267_int = 529856; // 0x26fd MovI
	var_5268_int = 529855; // 0x26fe MovI
	var_5269_float = var_5265_float; // 0x26ff Mov
	func_12022(var_5266_int, var_5267_int, var_5268_int, var_5269_float); // 0x2700 NEW_2
	var_5264_int = var_5266_int; // 0x2701 Mov
	return 0; // 0x2703 Return
}


func_12030(var_4661_object)
{
	var_4662_object = Obj(); var_4663_object = Obj(); var_4664_object = Obj(); var_4665_object = Obj(); // 0x2efe PushV
	GetMainOutdoorScene(var_4664_object); // 0x2eff Func
	var_4666_bool = var_4664_object == 0; // 0x2f01 NullEq
	if(var_4666_bool == 0) goto Label_12041; // 0x2f02 JumpB
	var_4667_string = "Can't find main outdoor scene"; // 0x2f03 PushS
	Trace(var_4667_string); // 0x2f04 Func
	var_4665_object = 0; // 0x2f06 SetNull
	var_4661_object = var_4665_object; // 0x2f07 Mov
	return 4; // 0x2f08 Return
	
Label_12041:
	GetMap(var_4665_object); // 0x2f09 ObjFunc
	var_4661_object = var_4665_object; // 0x2f0b Mov
	return 4; // 0x2f0c Return
}


func_9988(var_5813_int, var_5814_float)
{
	var_5815_int = 0; var_5816_int = 0; var_5817_int = 0; var_5818_float = 0; // 0x2705 PushV
	var_5816_int = 530813; // 0x2706 MovI
	var_5817_int = 530812; // 0x2707 MovI
	var_5818_float = var_5814_float; // 0x2708 Mov
	func_12022(var_5815_int, var_5816_int, var_5817_int, var_5818_float); // 0x2709 NEW_2
	var_5813_int = var_5815_int; // 0x270a Mov
	return 0; // 0x270c Return
}


func_9997(var_5522_int, var_5523_float)
{
	var_5524_int = 0; var_5525_int = 0; var_5526_int = 0; var_5527_float = 0; // 0x270e PushV
	var_5525_int = 530183; // 0x270f MovI
	var_5526_int = 530182; // 0x2710 MovI
	var_5527_float = var_5523_float; // 0x2711 Mov
	func_12022(var_5524_int, var_5525_int, var_5526_int, var_5527_float); // 0x2712 NEW_2
	var_5522_int = var_5524_int; // 0x2713 Mov
	return 0; // 0x2715 Return
}


func_12047(var_795_int)
{
	var_796_int = 0; var_797_int = 0; // 0x2f0f PushV
	var_798_string = "branch"; // 0x2f10 PushS
	GetVariable(var_798_string, var_797_int); // 0x2f11 Func
	var_795_int = var_797_int; // 0x2f13 Mov
	return 2; // 0x2f14 Return
}


func_6929(var_2965_int, var_2966_int, var_2967_object, var_2968_object, var_2969_object, var_2970_object)
{
	var_2971_int = 0; // 0x1b12 PushI
	var_2972_bool = var_2966_int == var_2971_int; // 0x1b13 Eq
	if(var_2972_bool == 0) goto Label_6969; // 0x1b14 JumpB
	var_2973_int = 0; var_2974_bool = 0; // 0x1b15 PushV
	var_2973_int = 13; // 0x1b16 MovI
	var_2974_bool = 1; // 0x1b17 MovB
	func_746(var_2973_int, var_2974_bool); // 0x1b18 NEW_2
	var_2975_int = 0; var_2976_bool = 0; var_2977_int = 0; // 0x1b1a PushV
	var_2975_int = 13; // 0x1b1b MovI
	var_2976_bool = 1; // 0x1b1c MovB
	var_2977_int = 1; // 0x1b1d MovI
	func_763(var_2975_int, var_2976_bool, var_2977_int); // 0x1b1e NEW_2
	var_2978_int = 0; var_2979_int = 0; var_2980_object = Obj(); var_2981_object = Obj(); var_2982_object = Obj(); // 0x1b20 PushV
	var_2978_int = 13; // 0x1b21 MovI
	var_2979_int = var_2965_int; // 0x1b22 Mov
	var_2980_object = var_2967_object; // 0x1b23 Mov
	var_2981_object = var_2968_object; // 0x1b24 Mov
	var_2982_object = var_2969_object; // 0x1b25 Mov
	func_591(var_2978_int, var_2979_int, var_2980_object, var_2981_object, var_2982_object); // 0x1b26 NEW_2
	var_2983_object = Obj(); var_2984_int = 0; // 0x1b28 PushV
	var_2983_object = var_2970_object; // 0x1b29 Mov
	var_2984_int = 1; // 0x1b2a MovI
	func_255(var_2984_int); // 0x1b2b NEW_2
	var_2985_int = 0; var_2986_bool = 0; var_2987_int = 0; // 0x1b2d PushV
	var_2985_int = 13; // 0x1b2e MovI
	var_2986_bool = 1; // 0x1b2f MovB
	var_2987_int = 4; // 0x1b30 MovI
	func_820(var_2985_int, var_2986_bool, var_2987_int); // 0x1b31 NEW_2
	var_2988_int = 0; var_2989_bool = 0; var_2990_int = 0; // 0x1b33 PushV
	var_2988_int = 13; // 0x1b34 MovI
	var_2989_bool = 0; // 0x1b35 MovB
	var_2990_int = 4; // 0x1b36 MovI
	func_882(var_2988_int, var_2989_bool, var_2990_int); // 0x1b37 NEW_2
	
Label_6969:
	var_2991_int = 0; var_2992_bool = 0; // 0x1b39 PushV
	var_2991_int = 13; // 0x1b3a MovI
	var_2992_bool = 0; // 0x1b3b MovB
	func_729(var_2991_int, var_2992_bool); // 0x1b3c NEW_2
	var_2993_int = 0; var_2994_int = 0; var_2995_int = 0; // 0x1b3e PushV
	var_2993_int = 13; // 0x1b3f MovI
	var_2994_int = var_2965_int; // 0x1b40 Mov
	var_2995_int = var_2966_int; // 0x1b41 Mov
	func_2714(var_2993_int, var_2994_int, var_2995_int); // 0x1b42 NEW_2
	return 0; // 0x1b44 Return
}


func_5905(var_2800_int, var_2801_int, var_2802_object, var_2803_object, var_2804_object, var_2805_object)
{
	var_2806_int = 0; // 0x1712 PushI
	var_2807_bool = var_2801_int == var_2806_int; // 0x1713 Eq
	if(var_2807_bool == 0) goto Label_5945; // 0x1714 JumpB
	var_2808_int = 0; var_2809_bool = 0; // 0x1715 PushV
	var_2808_int = 8; // 0x1716 MovI
	var_2809_bool = 1; // 0x1717 MovB
	func_746(var_2808_int, var_2809_bool); // 0x1718 NEW_2
	var_2810_int = 0; var_2811_bool = 0; var_2812_int = 0; // 0x171a PushV
	var_2810_int = 8; // 0x171b MovI
	var_2811_bool = 1; // 0x171c MovB
	var_2812_int = 1; // 0x171d MovI
	func_763(var_2810_int, var_2811_bool, var_2812_int); // 0x171e NEW_2
	var_2813_int = 0; var_2814_int = 0; var_2815_object = Obj(); var_2816_object = Obj(); var_2817_object = Obj(); // 0x1720 PushV
	var_2813_int = 8; // 0x1721 MovI
	var_2814_int = var_2800_int; // 0x1722 Mov
	var_2815_object = var_2802_object; // 0x1723 Mov
	var_2816_object = var_2803_object; // 0x1724 Mov
	var_2817_object = var_2804_object; // 0x1725 Mov
	func_591(var_2813_int, var_2814_int, var_2815_object, var_2816_object, var_2817_object); // 0x1726 NEW_2
	var_2818_object = Obj(); var_2819_int = 0; // 0x1728 PushV
	var_2818_object = var_2805_object; // 0x1729 Mov
	var_2819_int = 1; // 0x172a MovI
	func_255(var_2819_int); // 0x172b NEW_2
	var_2820_int = 0; var_2821_bool = 0; var_2822_int = 0; // 0x172d PushV
	var_2820_int = 8; // 0x172e MovI
	var_2821_bool = 1; // 0x172f MovB
	var_2822_int = 4; // 0x1730 MovI
	func_820(var_2820_int, var_2821_bool, var_2822_int); // 0x1731 NEW_2
	var_2823_int = 0; var_2824_bool = 0; var_2825_int = 0; // 0x1733 PushV
	var_2823_int = 8; // 0x1734 MovI
	var_2824_bool = 0; // 0x1735 MovB
	var_2825_int = 4; // 0x1736 MovI
	func_882(var_2823_int, var_2824_bool, var_2825_int); // 0x1737 NEW_2
	
Label_5945:
	var_2826_int = 0; var_2827_bool = 0; // 0x1739 PushV
	var_2826_int = 8; // 0x173a MovI
	var_2827_bool = 0; // 0x173b MovB
	func_729(var_2826_int, var_2827_bool); // 0x173c NEW_2
	var_2828_int = 0; var_2829_int = 0; var_2830_int = 0; // 0x173e PushV
	var_2828_int = 8; // 0x173f MovI
	var_2829_int = var_2800_int; // 0x1740 Mov
	var_2830_int = var_2801_int; // 0x1741 Mov
	func_2714(var_2828_int, var_2829_int, var_2830_int); // 0x1742 NEW_2
	return 0; // 0x1744 Return
}


func_12053(var_4097_bool, var_4098_int)
{
	var_4100_int = 0; var_4101_int = 0; var_4102_int = 0; var_4103_int = 0; var_4104_int = 0; var_4105_int = 0; var_4106_int = 0; var_4107_int = 0; // 0x2f15 PushV
	var_4108_bool = 0; // 0x2f16 PushV
	var_4108_bool = 0; // 0x2f17 MovB
	var_4109_int = 42000; // 0x2f18 PushI
	var_4110_bool = var_4098_int > var_4109_int; // 0x2f19 GT
	if(var_4110_bool == 0) goto Label_12063; // 0x2f1a JumpB
	var_4111_int = 42288; // 0x2f1b PushI
	var_4112_bool = var_4098_int < var_4111_int; // 0x2f1c LT
	if(var_4112_bool == 0) goto Label_12063; // 0x2f1d JumpB
	var_4108_bool = 1; // 0x2f1e MovB
	
Label_12063:
	if(var_4108_bool == 0) goto Label_12080; // 0x2f1f JumpB
	var_4113_int = 42000; // 0x2f20 PushI
	var_4114_int = var_4098_int - var_4113_int; // 0x2f21 Sub
	var_4115_int = 24; // 0x2f22 PushI
	var_4104_int = var_4114_int / var_4114_int; // 0x2f23 Div2
	var_4116_int = 42000; // 0x2f24 PushI
	var_4117_int = var_4098_int - var_4116_int; // 0x2f25 Sub
	var_4118_int = 24; // 0x2f26 PushI
	var_4105_int = var_4117_int % var_4118_int; // 0x2f27 Mod2
	var_4119_int = 0; var_4120_int = 0; // 0x2f28 PushV
	var_4121_int = 1; // 0x2f29 PushI
	var_4119_int = var_4104_int + var_4121_int; // 0x2f2a Add2
	var_4120_int = var_4105_int; // 0x2f2b Mov
	func_8219(var_4119_int, var_4120_int); // 0x2f2c NEW_2
	var_4097_bool = 1; // 0x2f2e MovB
	return 8; // 0x2f2f Return
	
Label_12080:
	var_4146_bool = 0; // 0x2f30 PushV
	var_4146_bool = 0; // 0x2f31 MovB
	var_4147_int = 40000; // 0x2f32 PushI
	var_4148_bool = var_4098_int > var_4147_int; // 0x2f33 GT
	if(var_4148_bool == 0) goto Label_12089; // 0x2f34 JumpB
	var_4149_int = 40288; // 0x2f35 PushI
	var_4150_bool = var_4098_int < var_4149_int; // 0x2f36 LT
	if(var_4150_bool == 0) goto Label_12089; // 0x2f37 JumpB
	var_4146_bool = 1; // 0x2f38 MovB
	
Label_12089:
	if(var_4146_bool == 0) goto Label_12112; // 0x2f39 JumpB
	var_4151_int = 40000; // 0x2f3a PushI
	var_4152_int = var_4098_int - var_4151_int; // 0x2f3b Sub
	var_4153_int = 24; // 0x2f3c PushI
	var_4106_int = var_4152_int / var_4152_int; // 0x2f3d Div2
	var_4154_int = 40000; // 0x2f3e PushI
	var_4155_int = var_4098_int - var_4154_int; // 0x2f3f Sub
	var_4156_int = 24; // 0x2f40 PushI
	var_4107_int = var_4155_int % var_4156_int; // 0x2f41 Mod2
	var_4157_int = 0; var_4158_int = 0; // 0x2f42 PushV
	var_4159_int = 1; // 0x2f43 PushI
	var_4157_int = var_4106_int + var_4159_int; // 0x2f44 Add2
	var_4158_int = var_4107_int; // 0x2f45 Mov
	func_8264(var_4157_int, var_4158_int); // 0x2f46 NEW_2
	var_4479_int = 0; var_4480_int = 0; // 0x2f48 PushV
	var_4481_int = 1; // 0x2f49 PushI
	var_4479_int = var_4106_int + var_4481_int; // 0x2f4a Add2
	var_4480_int = var_4107_int; // 0x2f4b Mov
	func_14378(var_4479_int, var_4480_int); // 0x2f4c NEW_2
	var_4097_bool = 1; // 0x2f4e MovB
	return 8; // 0x2f4f Return
	
Label_12112:
	var_4097_bool = 0; // 0x2f50 MovB
	return 8; // 0x2f51 Return
}


func_10006(var_5897_int, var_5898_float)
{
	var_5899_int = 0; var_5900_int = 0; var_5901_int = 0; var_5902_float = 0; // 0x2717 PushV
	var_5900_int = 530855; // 0x2718 MovI
	var_5901_int = 530854; // 0x2719 MovI
	var_5902_float = var_5898_float; // 0x271a Mov
	func_12022(var_5899_int, var_5900_int, var_5901_int, var_5902_float); // 0x271b NEW_2
	var_5897_int = var_5899_int; // 0x271c Mov
	return 0; // 0x271e Return
}


func_10015(var_5357_int, var_5358_float)
{
	var_5359_int = 0; var_5360_int = 0; var_5361_int = 0; var_5362_float = 0; // 0x2720 PushV
	var_5360_int = 529874; // 0x2721 MovI
	var_5361_int = 529873; // 0x2722 MovI
	var_5362_float = var_5358_float; // 0x2723 Mov
	func_12022(var_5359_int, var_5360_int, var_5361_int, var_5362_float); // 0x2724 NEW_2
	var_5357_int = var_5359_int; // 0x2725 Mov
	return 0; // 0x2727 Return
}


func_4896()
{
	var_97_string = "house5_02"; // 0x1321 PushS
	add(var_97_string); // 0x1322 ObjFunc
	var_98_string = "dt_house1_union2_03l"; // 0x1324 PushS
	add(var_98_string); // 0x1325 ObjFunc
	var_99_string = "dt_house1_union2_03r"; // 0x1327 PushS
	add(var_99_string); // 0x1328 ObjFunc
	var_100_string = "dt_house1_union2_01l"; // 0x132a PushS
	add(var_100_string); // 0x132b ObjFunc
	var_101_string = "dt_house1_union2_01r"; // 0x132d PushS
	add(var_101_string); // 0x132e ObjFunc
	var_102_string = "house5_unoinl"; // 0x1330 PushS
	add(var_102_string); // 0x1331 ObjFunc
	var_103_string = "house5_unoinr"; // 0x1333 PushS
	add(var_103_string); // 0x1334 ObjFunc
	var_104_string = "dt_house_1_01"; // 0x1336 PushS
	add(var_104_string); // 0x1337 ObjFunc
	var_105_string = "house5_05"; // 0x1339 PushS
	add(var_105_string); // 0x133a ObjFunc
	var_106_string = "house5_06"; // 0x133c PushS
	add(var_106_string); // 0x133d ObjFunc
	var_107_string = "dt_house_1_02"; // 0x133f PushS
	add(var_107_string); // 0x1340 ObjFunc
	var_108_string = "house5_unoin_solid01l"; // 0x1342 PushS
	add(var_108_string); // 0x1343 ObjFunc
	var_109_string = "house5_unoin_solid01r"; // 0x1345 PushS
	add(var_109_string); // 0x1346 ObjFunc
	var_110_string = "house5_03"; // 0x1348 PushS
	add(var_110_string); // 0x1349 ObjFunc
	var_111_string = "house5_04"; // 0x134b PushS
	add(var_111_string); // 0x134c ObjFunc
	var_112_string = "house1_se_02l"; // 0x134e PushS
	add(var_112_string); // 0x134f ObjFunc
	var_113_string = "house1_se_02r"; // 0x1351 PushS
	add(var_113_string); // 0x1352 ObjFunc
	var_114_string = "dt_house3_01_i2"; // 0x1354 PushS
	add(var_114_string); // 0x1355 ObjFunc
	var_115_string = "dt_house3_02_i2"; // 0x1357 PushS
	add(var_115_string); // 0x1358 ObjFunc
	var_116_string = "dt_house3_02"; // 0x135a PushS
	add(var_116_string); // 0x135b ObjFunc
	var_117_string = "dt_house3_03_i2"; // 0x135d PushS
	add(var_117_string); // 0x135e ObjFunc
	var_118_string = "dt_house3_03"; // 0x1360 PushS
	add(var_118_string); // 0x1361 ObjFunc
	var_119_string = "dt_house3_04_i2"; // 0x1363 PushS
	add(var_119_string); // 0x1364 ObjFunc
	var_120_string = "house5_21"; // 0x1366 PushS
	add(var_120_string); // 0x1367 ObjFunc
	return 0; // 0x1369 Return
}


func_10024(var_5365_int, var_5366_float)
{
	var_5367_int = 0; var_5368_int = 0; var_5369_int = 0; var_5370_float = 0; // 0x2729 PushV
	var_5368_int = 529872; // 0x272a MovI
	var_5369_int = 529871; // 0x272b MovI
	var_5370_float = var_5366_float; // 0x272c Mov
	func_12022(var_5367_int, var_5368_int, var_5369_int, var_5370_float); // 0x272d NEW_2
	var_5365_int = var_5367_int; // 0x272e Mov
	return 0; // 0x2730 Return
}


func_10033(var_5272_int, var_5273_float)
{
	var_5274_int = 0; var_5275_int = 0; var_5276_int = 0; var_5277_float = 0; // 0x2732 PushV
	var_5275_int = 529858; // 0x2733 MovI
	var_5276_int = 529857; // 0x2734 MovI
	var_5277_float = var_5273_float; // 0x2735 Mov
	func_12022(var_5274_int, var_5275_int, var_5276_int, var_5277_float); // 0x2736 NEW_2
	var_5272_int = var_5274_int; // 0x2737 Mov
	return 0; // 0x2739 Return
}


func_11059()
{
	var_4761_object = Obj(); var_4762_object = Obj(); var_4763_object = Obj(); var_4764_object = Obj(); // 0x2b33 PushV
	var_4765_object = Obj(); // 0x2b34 PushV
	func_12030(var_4765_object); // 0x2b35 NEW_2
	var_4763_object = var_4765_object; // 0x2b36 Mov
	var_4766_string = "b10q04GirlGotoKapella"; // 0x2b38 PushS
	FindMark(var_4764_object, var_4766_string); // 0x2b39 ObjFunc
	var_4767_object = var_4764_object; // 0x2b3b Push
	if(var_4767_object == 0) goto Label_11071; // 0x2b3c JumpB
	Remove(); // 0x2b3d ObjFunc
	
Label_11071:
	var_4768_string = "b10q04MatGotoMorlok"; // 0x2b3f PushS
	FindMark(var_4764_object, var_4768_string); // 0x2b40 ObjFunc
	var_4769_object = var_4764_object; // 0x2b42 Push
	if(var_4769_object == 0) goto Label_11078; // 0x2b43 JumpB
	Remove(); // 0x2b44 ObjFunc
	
Label_11078:
	var_4770_string = "b10q04BlockGotoOfficer"; // 0x2b46 PushS
	FindMark(var_4764_object, var_4770_string); // 0x2b47 ObjFunc
	var_4771_object = var_4764_object; // 0x2b49 Push
	if(var_4771_object == 0) goto Label_11085; // 0x2b4a JumpB
	Remove(); // 0x2b4b ObjFunc
	
Label_11085:
	var_4772_string = "b10q04KapellaGotoBlock"; // 0x2b4d PushS
	FindMark(var_4764_object, var_4772_string); // 0x2b4e ObjFunc
	var_4773_object = var_4764_object; // 0x2b50 Push
	if(var_4773_object == 0) goto Label_11092; // 0x2b51 JumpB
	Remove(); // 0x2b52 ObjFunc
	
Label_11092:
	var_4774_string = "b10q04MorlokGotoLaska"; // 0x2b54 PushS
	FindMark(var_4764_object, var_4774_string); // 0x2b55 ObjFunc
	var_4775_object = var_4764_object; // 0x2b57 Push
	if(var_4775_object == 0) goto Label_11099; // 0x2b58 JumpB
	Remove(); // 0x2b59 ObjFunc
	
Label_11099:
	var_4776_string = "b10q04MorlokGotoMishka"; // 0x2b5b PushS
	FindMark(var_4764_object, var_4776_string); // 0x2b5c ObjFunc
	var_4777_object = var_4764_object; // 0x2b5e Push
	if(var_4777_object == 0) goto Label_11106; // 0x2b5f JumpB
	Remove(); // 0x2b60 ObjFunc
	
Label_11106:
	var_4778_string = "b10q04MorlokGotoNotkin"; // 0x2b62 PushS
	FindMark(var_4764_object, var_4778_string); // 0x2b63 ObjFunc
	var_4779_object = var_4764_object; // 0x2b65 Push
	if(var_4779_object == 0) goto Label_11113; // 0x2b66 JumpB
	Remove(); // 0x2b67 ObjFunc
	
Label_11113:
	var_4780_string = "b10q04MorlokGotoSpi4ka"; // 0x2b69 PushS
	FindMark(var_4764_object, var_4780_string); // 0x2b6a ObjFunc
	var_4781_object = var_4764_object; // 0x2b6c Push
	if(var_4781_object == 0) goto Label_11120; // 0x2b6d JumpB
	Remove(); // 0x2b6e ObjFunc
	
Label_11120:
	var_4782_string = "b10q03KapellaGotoMishka"; // 0x2b70 PushS
	FindMark(var_4764_object, var_4782_string); // 0x2b71 ObjFunc
	var_4783_object = var_4764_object; // 0x2b73 Push
	if(var_4783_object == 0) goto Label_11127; // 0x2b74 JumpB
	Remove(); // 0x2b75 ObjFunc
	
Label_11127:
	var_4784_string = "b10q03MishkaGotoDoll"; // 0x2b77 PushS
	FindMark(var_4764_object, var_4784_string); // 0x2b78 ObjFunc
	var_4785_object = var_4764_object; // 0x2b7a Push
	if(var_4785_object == 0) goto Label_11134; // 0x2b7b JumpB
	Remove(); // 0x2b7c ObjFunc
	
Label_11134:
	var_4786_string = "b10q01StarshinaGotoKurgan"; // 0x2b7e PushS
	FindMark(var_4764_object, var_4786_string); // 0x2b7f ObjFunc
	var_4787_object = var_4764_object; // 0x2b81 Push
	if(var_4787_object == 0) goto Label_11141; // 0x2b82 JumpB
	Remove(); // 0x2b83 ObjFunc
	
Label_11141:
	var_4788_bool = 0; var_4789_int = 0; // 0x2b85 PushV
	var_4789_int = 305; // 0x2b86 MovI
	func_12005(var_4788_bool, var_4789_int); // 0x2b87 NEW_2
	var_4790_bool = 0; var_4791_int = 0; // 0x2b89 PushV
	var_4791_int = 545; // 0x2b8a MovI
	func_12005(var_4790_bool, var_4791_int); // 0x2b8b NEW_2
	var_4792_bool = 0; var_4793_int = 0; // 0x2b8d PushV
	var_4793_int = 594; // 0x2b8e MovI
	func_12005(var_4792_bool, var_4793_int); // 0x2b8f NEW_2
	return 4; // 0x2b91 Return
}


func_820(var_638_int, var_639_bool, var_640_int)
{
	var_641_string = ""; var_642_object = Obj(); var_643_int = 0; var_644_string = ""; var_645_object = Obj(); var_646_int = 0; var_647_string = ""; var_648_object = Obj(); var_649_string = ""; var_650_object = Obj(); var_651_int = 0; var_652_string = ""; var_653_object = Obj(); var_654_int = 0; var_655_string = ""; var_656_object = Obj(); // 0x334 PushV
	var_657_string = "dr_mark"; // 0x335 PushS
	var_658_int = 1; // 0x336 PushI
	var_659_int = var_638_int + var_658_int; // 0x337 Add
	var_649_string = var_657_string + var_659_int; // 0x338 Add2
	var_660_bool = var_639_bool; // 0x339 Push
	if(var_660_bool == 0) goto Label_862; // 0x33a JumpB
	GetMainOutdoorScene(var_650_object); // 0x33b Func
	var_661_bool = var_650_object == 0; // 0x33d NullEq
	if(var_661_bool == 0) goto Label_835; // 0x33e JumpB
	var_662_string = "City manager: Can't find main outdoor scene"; // 0x33f PushS
	Trace(var_662_string); // 0x340 Func
	return 16; // 0x342 Return
	
Label_835:
	var_651_int = 1; // 0x343 MovI
	
Label_836:
	var_663_bool = var_651_int <= var_640_int; // 0x344 LE
	if(var_663_bool == 0) goto Label_860; // 0x345 JumpB
	var_664_string = "_"; // 0x346 PushS
	var_665_int = var_649_string + var_664_string; // 0x347 Add
	var_652_string = var_665_int + var_651_int; // 0x348 Add2
	FindActor(var_653_object, var_652_string); // 0x349 Func
	var_666_bool = var_653_object == 0; // 0x34b Not
	if(var_666_bool == 0) goto Label_851; // 0x34c JumpB
	var_667_cvector = CVector(0.0, 0.0, 0.0); // 0x34d PushVec
	var_668_cvector = CVector(0.0, 0.0, 1.0); // 0x34e PushVec
	var_669_string = "disease_object.xml"; // 0x34f PushS
	AddActor(var_653_object, var_652_string, var_650_object, var_667_cvector, var_668_cvector, var_669_string); // 0x350 Func
	goto Label_856; // 0x352 Jump
	
Label_856:
	var_653_object = 0; // 0x358 SetNull
	var_670_int = 1; // 0x359 PushI
	var_651_int = var_651_int + var_670_int; // 0x35a Add2
	goto Label_836; // 0x35b Jump
	
Label_851:
	var_671_bool = 0; var_672_string = ""; var_673_string = ""; // 0x353 PushV
	var_672_string = var_652_string; // 0x354 Mov
	var_673_string = "restore"; // 0x355 MovS
	func_189(var_671_bool, var_672_string, var_673_string); // 0x356 NEW_2
	
Label_860:
	var_650_object = 0; // 0x35c SetNull
	goto Label_881; // 0x35d Jump
	
Label_881:
	return 16; // 0x371 Return
	
Label_862:
	var_654_int = 1; // 0x35e MovI
	
Label_863:
	var_677_bool = var_654_int <= var_640_int; // 0x35f LE
	if(var_677_bool == 0) goto Label_881; // 0x360 JumpB
	var_678_string = "_"; // 0x361 PushS
	var_679_int = var_649_string + var_678_string; // 0x362 Add
	var_655_string = var_679_int + var_654_int; // 0x363 Add2
	FindActor(var_656_object, var_655_string); // 0x364 Func
	var_680_object = var_656_object; // 0x366 Push
	if(var_680_object == 0) goto Label_877; // 0x367 JumpB
	var_681_bool = 0; var_682_string = ""; var_683_string = ""; // 0x368 PushV
	var_682_string = var_655_string; // 0x369 Mov
	var_683_string = "cleanup"; // 0x36a MovS
	func_189(var_681_bool, var_682_string, var_683_string); // 0x36b NEW_2
	
Label_877:
	var_656_object = 0; // 0x36d SetNull
	var_684_int = 1; // 0x36e PushI
	var_654_int = var_654_int + var_684_int; // 0x36f Add2
	goto Label_863; // 0x370 Jump
}


func_1847(var_1056_int, var_1057_int, var_1058_int)
{
	var_1059_int = 0; var_1060_int = 0; // 0x737 PushV
	var_1061_int = 1; // 0x738 PushI
	var_1062_int = var_1057_int + var_1061_int; // 0x739 Add
	var_1063_int = 12; // 0x73a PushI
	var_1064_bool = var_1062_int == var_1063_int; // 0x73b Eq
	if(var_1064_bool == 0) goto Label_1854; // 0x73c JumpB
	return 2; // 0x73d Return
	
Label_1854:
	var_1065_bool = 0; // 0x73e PushV
	var_1065_bool = 0; // 0x73f MovB
	var_1066_bool = 0; // 0x740 PushV
	var_1066_bool = 1; // 0x741 MovB
	var_1067_int = 7; // 0x742 PushI
	var_1068_bool = var_1058_int < var_1067_int; // 0x743 LT
	if(var_1068_bool == 0) goto Label_1865; // 0x744 JumpB
	var_1069_int = 21; // 0x745 PushI
	var_1070_bool = var_1058_int > var_1069_int; // 0x746 GT
	if(var_1070_bool == 0) goto Label_1865; // 0x747 JumpB
	var_1066_bool = 0; // 0x748 MovB
	
Label_1865:
	if(var_1066_bool == 0) goto Label_1870; // 0x749 JumpB
	var_1071_int = 0; // 0x74a PushI
	var_1072_bool = var_1057_int != var_1071_int; // 0x74b Neq
	if(var_1072_bool == 0) goto Label_1870; // 0x74c JumpB
	var_1065_bool = 1; // 0x74d MovB
	
Label_1870:
	if(var_1065_bool == 0) goto Label_1885; // 0x74e JumpB
	var_1073_float = 0; var_1074_int = 0; // 0x74f PushV
	var_1074_int = var_1057_int; // 0x750 Mov
	func_1091(var_1073_float, var_1074_int); // 0x751 NEW_2
	var_1060_int = var_1073_float; // 0x752 Mov
	var_1075_int = var_1060_int; // 0x754 Push
	if(var_1075_int == 0) goto Label_1885; // 0x755 JumpB
	var_1076_int = 0; var_1077_string = ""; var_1078_string = ""; var_1079_int = 0; // 0x756 PushV
	var_1076_int = var_1056_int; // 0x757 Mov
	var_1077_string = "pers_grabitel"; // 0x758 MovS
	var_1078_string = "grabitel.xml"; // 0x759 MovS
	var_1079_int = var_1060_int; // 0x75a Mov
	func_453(var_1076_int, var_1077_string, var_1078_string, var_1079_int); // 0x75b NEW_2
	
Label_1885:
	var_1080_bool = 0; var_1081_int = 0; var_1082_int = 0; // 0x75d PushV
	var_1081_int = var_1057_int; // 0x75e Mov
	var_1082_int = var_1058_int; // 0x75f Mov
	func_1060(var_1080_bool, var_1081_int, var_1082_int); // 0x760 NEW_2
	if(var_1080_bool == 0) goto Label_1948; // 0x762 JumpB
	var_1083_int = 0; var_1084_string = ""; var_1085_string = ""; var_1086_int = 0; // 0x763 PushV
	var_1083_int = var_1056_int; // 0x764 Mov
	var_1084_string = "pers_unosha"; // 0x765 MovS
	var_1085_string = "unosha_attacker.xml"; // 0x766 MovS
	var_1086_int = 1; // 0x767 MovI
	func_453(var_1083_int, var_1084_string, var_1085_string, var_1086_int); // 0x768 NEW_2
	var_1087_int = 0; var_1088_string = ""; var_1089_string = ""; var_1090_int = 0; // 0x76a PushV
	var_1087_int = var_1056_int; // 0x76b Mov
	var_1088_string = "pers_unosha"; // 0x76c MovS
	var_1089_string = "unosha2_attacker.xml"; // 0x76d MovS
	var_1090_int = 1; // 0x76e MovI
	func_453(var_1087_int, var_1088_string, var_1089_string, var_1090_int); // 0x76f NEW_2
	var_1091_int = 0; var_1092_string = ""; var_1093_string = ""; var_1094_int = 0; // 0x771 PushV
	var_1091_int = var_1056_int; // 0x772 Mov
	var_1092_string = "pers_worker"; // 0x773 MovS
	var_1093_string = "worker_attacker.xml"; // 0x774 MovS
	var_1094_int = 1; // 0x775 MovI
	func_453(var_1091_int, var_1092_string, var_1093_string, var_1094_int); // 0x776 NEW_2
	var_1095_int = 0; var_1096_string = ""; var_1097_string = ""; var_1098_int = 0; // 0x778 PushV
	var_1095_int = var_1056_int; // 0x779 Mov
	var_1096_string = "pers_worker"; // 0x77a MovS
	var_1097_string = "worker2_attacker.xml"; // 0x77b MovS
	var_1098_int = 1; // 0x77c MovI
	func_453(var_1095_int, var_1096_string, var_1097_string, var_1098_int); // 0x77d NEW_2
	var_1099_int = 0; var_1100_string = ""; var_1101_string = ""; var_1102_int = 0; // 0x77f PushV
	var_1099_int = var_1056_int; // 0x780 Mov
	var_1100_string = "pers_woman"; // 0x781 MovS
	var_1101_string = "woman.xml"; // 0x782 MovS
	var_1102_int = 1; // 0x783 MovI
	func_453(var_1099_int, var_1100_string, var_1101_string, var_1102_int); // 0x784 NEW_2
	var_1103_int = 0; var_1104_string = ""; var_1105_string = ""; var_1106_int = 0; // 0x786 PushV
	var_1103_int = var_1056_int; // 0x787 Mov
	var_1104_string = "pers_alkash"; // 0x788 MovS
	var_1105_string = "alkash.xml"; // 0x789 MovS
	var_1106_int = 1; // 0x78a MovI
	func_453(var_1103_int, var_1104_string, var_1105_string, var_1106_int); // 0x78b NEW_2
	var_1107_int = 0; var_1108_string = ""; var_1109_string = ""; var_1110_int = 0; // 0x78d PushV
	var_1107_int = var_1056_int; // 0x78e Mov
	var_1108_string = "pers_girl"; // 0x78f MovS
	var_1109_string = "girl.xml"; // 0x790 MovS
	var_1110_int = 1; // 0x791 MovI
	func_453(var_1107_int, var_1108_string, var_1109_string, var_1110_int); // 0x792 NEW_2
	var_1111_int = 0; var_1112_string = ""; var_1113_string = ""; var_1114_int = 0; // 0x794 PushV
	var_1111_int = var_1056_int; // 0x795 Mov
	var_1112_string = "pers_girl"; // 0x796 MovS
	var_1113_string = "girl2.xml"; // 0x797 MovS
	var_1114_int = 1; // 0x798 MovI
	func_453(var_1111_int, var_1112_string, var_1113_string, var_1114_int); // 0x799 NEW_2
	goto Label_2105; // 0x79b Jump
	
Label_2105:
	var_1115_bool = 0; // 0x839 PushV
	var_1115_bool = 0; // 0x83a MovB
	var_1116_bool = 0; // 0x83b PushV
	var_1116_bool = 0; // 0x83c MovB
	var_1117_int = 0; // 0x83d PushI
	var_1118_bool = var_1057_int == var_1117_int; // 0x83e Eq
	if(var_1118_bool == 0) goto Label_2116; // 0x83f JumpB
	var_1119_int = 12; // 0x840 PushI
	var_1120_bool = var_1058_int > var_1119_int; // 0x841 GT
	if(var_1120_bool == 0) goto Label_2116; // 0x842 JumpB
	var_1116_bool = 1; // 0x843 MovB
	
Label_2116:
	if(var_1116_bool == 0) goto Label_2121; // 0x844 JumpB
	var_1121_int = 22; // 0x845 PushI
	var_1122_bool = var_1058_int < var_1121_int; // 0x846 LT
	if(var_1122_bool == 0) goto Label_2121; // 0x847 JumpB
	var_1115_bool = 1; // 0x848 MovB
	
Label_2121:
	if(var_1115_bool == 0) goto Label_2129; // 0x849 JumpB
	var_1123_int = 0; var_1124_string = ""; var_1125_string = ""; var_1126_int = 0; // 0x84a PushV
	var_1123_int = var_1056_int; // 0x84b Mov
	var_1124_string = "pers_woman"; // 0x84c MovS
	var_1125_string = "woman_killme.xml"; // 0x84d MovS
	var_1126_int = 1; // 0x84e MovI
	func_453(var_1123_int, var_1124_string, var_1125_string, var_1126_int); // 0x84f NEW_2
	
Label_2129:
	var_1127_bool = 0; var_1128_int = 0; var_1129_int = 0; // 0x851 PushV
	var_1128_int = var_1057_int; // 0x852 Mov
	var_1129_int = var_1058_int; // 0x853 Mov
	func_1295(var_1127_bool, var_1128_int, var_1129_int); // 0x854 NEW_2
	if(var_1127_bool == 0) goto Label_2142; // 0x856 JumpB
	var_1134_int = 0; var_1135_string = ""; var_1136_string = ""; var_1137_int = 0; // 0x857 PushV
	var_1134_int = var_1056_int; // 0x858 Mov
	var_1135_string = "pers_soldat"; // 0x859 MovS
	var_1136_string = "soldier_marauder.xml"; // 0x85a MovS
	var_1137_int = 2; // 0x85b MovI
	func_453(var_1134_int, var_1135_string, var_1136_string, var_1137_int); // 0x85c NEW_2
	
Label_2142:
	var_1138_bool = 0; var_1139_int = 0; var_1140_int = 0; // 0x85e PushV
	var_1139_int = var_1057_int; // 0x85f Mov
	var_1140_int = var_1058_int; // 0x860 Mov
	func_1305(var_1138_bool, var_1139_int, var_1140_int); // 0x861 NEW_2
	if(var_1138_bool == 0) goto Label_2155; // 0x863 JumpB
	var_1148_int = 0; var_1149_string = ""; var_1150_string = ""; var_1151_int = 0; // 0x864 PushV
	var_1148_int = var_1056_int; // 0x865 Mov
	var_1149_string = "pers_nudegirl"; // 0x866 MovS
	var_1150_string = "nudegirl.xml"; // 0x867 MovS
	var_1151_int = 1; // 0x868 MovI
	func_453(var_1148_int, var_1149_string, var_1150_string, var_1151_int); // 0x869 NEW_2
	
Label_2155:
	return 2; // 0x86b Return
	
Label_1948:
	var_1152_bool = 0; // 0x79c PushV
	var_1152_bool = 0; // 0x79d MovB
	var_1153_int = 8; // 0x79e PushI
	var_1154_bool = var_1058_int > var_1153_int; // 0x79f GT
	if(var_1154_bool == 0) goto Label_1957; // 0x7a0 JumpB
	var_1155_int = 21; // 0x7a1 PushI
	var_1156_bool = var_1058_int < var_1155_int; // 0x7a2 LT
	if(var_1156_bool == 0) goto Label_1957; // 0x7a3 JumpB
	var_1152_bool = 1; // 0x7a4 MovB
	
Label_1957:
	if(var_1152_bool == 0) goto Label_2039; // 0x7a5 JumpB
	var_1157_int = 0; var_1158_string = ""; var_1159_string = ""; var_1160_int = 0; // 0x7a6 PushV
	var_1157_int = var_1056_int; // 0x7a7 Mov
	var_1158_string = "pers_woman"; // 0x7a8 MovS
	var_1159_string = "woman.xml"; // 0x7a9 MovS
	var_1160_int = 1; // 0x7aa MovI
	func_453(var_1157_int, var_1158_string, var_1159_string, var_1160_int); // 0x7ab NEW_2
	var_1161_int = 0; var_1162_string = ""; var_1163_string = ""; var_1164_int = 0; // 0x7ad PushV
	var_1161_int = var_1056_int; // 0x7ae Mov
	var_1162_string = "pers_unosha"; // 0x7af MovS
	var_1163_string = "unosha.xml"; // 0x7b0 MovS
	var_1164_int = 1; // 0x7b1 MovI
	func_453(var_1161_int, var_1162_string, var_1163_string, var_1164_int); // 0x7b2 NEW_2
	var_1165_int = 0; var_1166_string = ""; var_1167_string = ""; var_1168_int = 0; // 0x7b4 PushV
	var_1165_int = var_1056_int; // 0x7b5 Mov
	var_1166_string = "pers_unosha"; // 0x7b6 MovS
	var_1167_string = "unosha2.xml"; // 0x7b7 MovS
	var_1168_int = 1; // 0x7b8 MovI
	func_453(var_1165_int, var_1166_string, var_1167_string, var_1168_int); // 0x7b9 NEW_2
	var_1169_int = 0; var_1170_string = ""; var_1171_string = ""; var_1172_int = 0; // 0x7bb PushV
	var_1169_int = var_1056_int; // 0x7bc Mov
	var_1170_string = "pers_worker"; // 0x7bd MovS
	var_1171_string = "worker.xml"; // 0x7be MovS
	var_1172_int = 1; // 0x7bf MovI
	func_453(var_1169_int, var_1170_string, var_1171_string, var_1172_int); // 0x7c0 NEW_2
	var_1173_int = 0; var_1174_string = ""; var_1175_string = ""; var_1176_int = 0; // 0x7c2 PushV
	var_1173_int = var_1056_int; // 0x7c3 Mov
	var_1174_string = "pers_worker"; // 0x7c4 MovS
	var_1175_string = "worker2.xml"; // 0x7c5 MovS
	var_1176_int = 1; // 0x7c6 MovI
	func_453(var_1173_int, var_1174_string, var_1175_string, var_1176_int); // 0x7c7 NEW_2
	var_1177_int = 0; var_1178_string = ""; var_1179_string = ""; var_1180_int = 0; // 0x7c9 PushV
	var_1177_int = var_1056_int; // 0x7ca Mov
	var_1178_string = "pers_alkash"; // 0x7cb MovS
	var_1179_string = "alkash.xml"; // 0x7cc MovS
	var_1180_int = 1; // 0x7cd MovI
	func_453(var_1177_int, var_1178_string, var_1179_string, var_1180_int); // 0x7ce NEW_2
	var_1181_int = 0; var_1182_string = ""; var_1183_string = ""; var_1184_int = 0; // 0x7d0 PushV
	var_1181_int = var_1056_int; // 0x7d1 Mov
	var_1182_string = "pers_girl"; // 0x7d2 MovS
	var_1183_string = "girl.xml"; // 0x7d3 MovS
	var_1184_int = 1; // 0x7d4 MovI
	func_453(var_1181_int, var_1182_string, var_1183_string, var_1184_int); // 0x7d5 NEW_2
	var_1185_int = 0; var_1186_string = ""; var_1187_string = ""; var_1188_int = 0; // 0x7d7 PushV
	var_1185_int = var_1056_int; // 0x7d8 Mov
	var_1186_string = "pers_girl"; // 0x7d9 MovS
	var_1187_string = "girl2.xml"; // 0x7da MovS
	var_1188_int = 1; // 0x7db MovI
	func_453(var_1185_int, var_1186_string, var_1187_string, var_1188_int); // 0x7dc NEW_2
	var_1189_int = 1; // 0x7de PushI
	var_1190_int = var_1057_int + var_1189_int; // 0x7df Add
	var_1191_int = 3; // 0x7e0 PushI
	var_1192_bool = var_1190_int >= var_1191_int; // 0x7e1 GE
	if(var_1192_bool == 0) goto Label_2026; // 0x7e2 JumpB
	var_1193_int = 0; var_1194_string = ""; var_1195_string = ""; var_1196_int = 0; // 0x7e3 PushV
	var_1193_int = var_1056_int; // 0x7e4 Mov
	var_1194_string = "pers_dohodyaga"; // 0x7e5 MovS
	var_1195_string = "dohodyaga.xml"; // 0x7e6 MovS
	var_1196_int = 1; // 0x7e7 MovI
	func_453(var_1193_int, var_1194_string, var_1195_string, var_1196_int); // 0x7e8 NEW_2
	
Label_2026:
	var_1197_int = 1; // 0x7ea PushI
	var_1198_int = var_1057_int + var_1197_int; // 0x7eb Add
	var_1199_int = 7; // 0x7ec PushI
	var_1200_bool = var_1198_int >= var_1199_int; // 0x7ed GE
	if(var_1200_bool == 0) goto Label_2038; // 0x7ee JumpB
	var_1201_int = 0; var_1202_string = ""; var_1203_string = ""; var_1204_int = 0; // 0x7ef PushV
	var_1201_int = var_1056_int; // 0x7f0 Mov
	var_1202_string = "pers_butcher"; // 0x7f1 MovS
	var_1203_string = "butcher.xml"; // 0x7f2 MovS
	var_1204_int = 2; // 0x7f3 MovI
	func_453(var_1201_int, var_1202_string, var_1203_string, var_1204_int); // 0x7f4 NEW_2
	
Label_2038:
	goto Label_2105; // 0x7f6 Jump
	
Label_2039:
	var_1205_int = 0; var_1206_string = ""; var_1207_string = ""; var_1208_int = 0; // 0x7f7 PushV
	var_1205_int = var_1056_int; // 0x7f8 Mov
	var_1206_string = "pers_woman"; // 0x7f9 MovS
	var_1207_string = "woman.xml"; // 0x7fa MovS
	var_1208_int = 1; // 0x7fb MovI
	func_453(var_1205_int, var_1206_string, var_1207_string, var_1208_int); // 0x7fc NEW_2
	var_1209_int = 0; var_1210_string = ""; var_1211_string = ""; var_1212_int = 0; // 0x7fe PushV
	var_1209_int = var_1056_int; // 0x7ff Mov
	var_1210_string = "pers_unosha"; // 0x800 MovS
	var_1211_string = "unosha.xml"; // 0x801 MovS
	var_1212_int = 1; // 0x802 MovI
	func_453(var_1209_int, var_1210_string, var_1211_string, var_1212_int); // 0x803 NEW_2
	var_1213_int = 0; var_1214_string = ""; var_1215_string = ""; var_1216_int = 0; // 0x805 PushV
	var_1213_int = var_1056_int; // 0x806 Mov
	var_1214_string = "pers_unosha"; // 0x807 MovS
	var_1215_string = "unosha2.xml"; // 0x808 MovS
	var_1216_int = 1; // 0x809 MovI
	func_453(var_1213_int, var_1214_string, var_1215_string, var_1216_int); // 0x80a NEW_2
	var_1217_int = 0; var_1218_string = ""; var_1219_string = ""; var_1220_int = 0; // 0x80c PushV
	var_1217_int = var_1056_int; // 0x80d Mov
	var_1218_string = "pers_worker"; // 0x80e MovS
	var_1219_string = "worker.xml"; // 0x80f MovS
	var_1220_int = 1; // 0x810 MovI
	func_453(var_1217_int, var_1218_string, var_1219_string, var_1220_int); // 0x811 NEW_2
	var_1221_int = 0; var_1222_string = ""; var_1223_string = ""; var_1224_int = 0; // 0x813 PushV
	var_1221_int = var_1056_int; // 0x814 Mov
	var_1222_string = "pers_worker"; // 0x815 MovS
	var_1223_string = "worker2.xml"; // 0x816 MovS
	var_1224_int = 1; // 0x817 MovI
	func_453(var_1221_int, var_1222_string, var_1223_string, var_1224_int); // 0x818 NEW_2
	var_1225_int = 0; var_1226_string = ""; var_1227_string = ""; var_1228_int = 0; // 0x81a PushV
	var_1225_int = var_1056_int; // 0x81b Mov
	var_1226_string = "pers_alkash"; // 0x81c MovS
	var_1227_string = "alkash.xml"; // 0x81d MovS
	var_1228_int = 1; // 0x81e MovI
	func_453(var_1225_int, var_1226_string, var_1227_string, var_1228_int); // 0x81f NEW_2
	var_1229_int = 1; // 0x821 PushI
	var_1230_int = var_1057_int + var_1229_int; // 0x822 Add
	var_1231_int = 3; // 0x823 PushI
	var_1232_bool = var_1230_int >= var_1231_int; // 0x824 GE
	if(var_1232_bool == 0) goto Label_2093; // 0x825 JumpB
	var_1233_int = 0; var_1234_string = ""; var_1235_string = ""; var_1236_int = 0; // 0x826 PushV
	var_1233_int = var_1056_int; // 0x827 Mov
	var_1234_string = "pers_dohodyaga"; // 0x828 MovS
	var_1235_string = "dohodyaga.xml"; // 0x829 MovS
	var_1236_int = 1; // 0x82a MovI
	func_453(var_1233_int, var_1234_string, var_1235_string, var_1236_int); // 0x82b NEW_2
	
Label_2093:
	var_1237_int = 1; // 0x82d PushI
	var_1238_int = var_1057_int + var_1237_int; // 0x82e Add
	var_1239_int = 7; // 0x82f PushI
	var_1240_bool = var_1238_int >= var_1239_int; // 0x830 GE
	if(var_1240_bool == 0) goto Label_2105; // 0x831 JumpB
	var_1241_int = 0; var_1242_string = ""; var_1243_string = ""; var_1244_int = 0; // 0x832 PushV
	var_1241_int = var_1056_int; // 0x833 Mov
	var_1242_string = "pers_butcher"; // 0x834 MovS
	var_1243_string = "butcher.xml"; // 0x835 MovS
	var_1244_int = 3; // 0x836 MovI
	func_453(var_1241_int, var_1242_string, var_1243_string, var_1244_int); // 0x837 NEW_2
}


func_10042(var_5797_int, var_5798_float)
{
	var_5799_int = 0; var_5800_int = 0; var_5801_int = 0; var_5802_float = 0; // 0x273b PushV
	var_5800_int = 530666; // 0x273c MovI
	var_5801_int = 530665; // 0x273d MovI
	var_5802_float = var_5798_float; // 0x273e Mov
	func_12022(var_5799_int, var_5800_int, var_5801_int, var_5802_float); // 0x273f NEW_2
	var_5797_int = var_5799_int; // 0x2740 Mov
	return 0; // 0x2742 Return
}


func_10051(var_5418_int, var_5419_float)
{
	var_5420_int = 0; var_5421_int = 0; var_5422_int = 0; var_5423_float = 0; // 0x2744 PushV
	var_5421_int = 529878; // 0x2745 MovI
	var_5422_int = 529877; // 0x2746 MovI
	var_5423_float = var_5419_float; // 0x2747 Mov
	func_12022(var_5420_int, var_5421_int, var_5422_int, var_5423_float); // 0x2748 NEW_2
	var_5418_int = var_5420_int; // 0x2749 Mov
	return 0; // 0x274b Return
}


func_6981(var_4095_int, var_4096_int, var_4097_object, var_4098_object, var_4099_object, var_4100_object)
{
	var_4101_int = 0; // 0x1b46 PushI
	var_4102_bool = var_4096_int == var_4101_int; // 0x1b47 Eq
	if(var_4102_bool == 0) goto Label_7021; // 0x1b48 JumpB
	var_4103_int = 0; var_4104_bool = 0; // 0x1b49 PushV
	var_4103_int = 13; // 0x1b4a MovI
	var_4104_bool = 0; // 0x1b4b MovB
	func_746(var_4103_int, var_4104_bool); // 0x1b4c NEW_2
	var_4105_int = 0; var_4106_bool = 0; var_4107_int = 0; // 0x1b4e PushV
	var_4105_int = 13; // 0x1b4f MovI
	var_4106_bool = 0; // 0x1b50 MovB
	var_4107_int = 1; // 0x1b51 MovI
	func_763(var_4105_int, var_4106_bool, var_4107_int); // 0x1b52 NEW_2
	var_4108_int = 0; var_4109_int = 0; var_4110_object = Obj(); var_4111_object = Obj(); var_4112_object = Obj(); // 0x1b54 PushV
	var_4108_int = 13; // 0x1b55 MovI
	var_4109_int = var_4095_int; // 0x1b56 Mov
	var_4110_object = var_4097_object; // 0x1b57 Mov
	var_4111_object = var_4098_object; // 0x1b58 Mov
	var_4112_object = var_4099_object; // 0x1b59 Mov
	func_670(var_4108_int, var_4109_int, var_4110_object, var_4111_object, var_4112_object); // 0x1b5a NEW_2
	var_4113_object = Obj(); var_4114_int = 0; // 0x1b5c PushV
	var_4113_object = var_4100_object; // 0x1b5d Mov
	var_4114_int = 2; // 0x1b5e MovI
	func_255(var_4114_int); // 0x1b5f NEW_2
	var_4115_int = 0; var_4116_bool = 0; var_4117_int = 0; // 0x1b61 PushV
	var_4115_int = 13; // 0x1b62 MovI
	var_4116_bool = 0; // 0x1b63 MovB
	var_4117_int = 4; // 0x1b64 MovI
	func_820(var_4115_int, var_4116_bool, var_4117_int); // 0x1b65 NEW_2
	var_4118_int = 0; var_4119_bool = 0; var_4120_int = 0; // 0x1b67 PushV
	var_4118_int = 13; // 0x1b68 MovI
	var_4119_bool = 1; // 0x1b69 MovB
	var_4120_int = 4; // 0x1b6a MovI
	func_882(var_4118_int, var_4119_bool, var_4120_int); // 0x1b6b NEW_2
	
Label_7021:
	var_4121_int = 0; var_4122_bool = 0; // 0x1b6d PushV
	var_4121_int = 13; // 0x1b6e MovI
	var_4122_bool = 0; // 0x1b6f MovB
	func_729(var_4121_int, var_4122_bool); // 0x1b70 NEW_2
	var_4123_int = 0; var_4124_int = 0; var_4125_int = 0; // 0x1b72 PushV
	var_4123_int = 13; // 0x1b73 MovI
	var_4124_int = var_4095_int; // 0x1b74 Mov
	var_4125_int = var_4096_int; // 0x1b75 Mov
	func_3609(var_4123_int, var_4124_int, var_4125_int); // 0x1b76 NEW_2
	return 0; // 0x1b78 Return
}


func_5957(var_3930_int, var_3931_int, var_3932_object, var_3933_object, var_3934_object, var_3935_object)
{
	var_3936_int = 0; // 0x1746 PushI
	var_3937_bool = var_3931_int == var_3936_int; // 0x1747 Eq
	if(var_3937_bool == 0) goto Label_5997; // 0x1748 JumpB
	var_3938_int = 0; var_3939_bool = 0; // 0x1749 PushV
	var_3938_int = 8; // 0x174a MovI
	var_3939_bool = 0; // 0x174b MovB
	func_746(var_3938_int, var_3939_bool); // 0x174c NEW_2
	var_3940_int = 0; var_3941_bool = 0; var_3942_int = 0; // 0x174e PushV
	var_3940_int = 8; // 0x174f MovI
	var_3941_bool = 0; // 0x1750 MovB
	var_3942_int = 1; // 0x1751 MovI
	func_763(var_3940_int, var_3941_bool, var_3942_int); // 0x1752 NEW_2
	var_3943_int = 0; var_3944_int = 0; var_3945_object = Obj(); var_3946_object = Obj(); var_3947_object = Obj(); // 0x1754 PushV
	var_3943_int = 8; // 0x1755 MovI
	var_3944_int = var_3930_int; // 0x1756 Mov
	var_3945_object = var_3932_object; // 0x1757 Mov
	var_3946_object = var_3933_object; // 0x1758 Mov
	var_3947_object = var_3934_object; // 0x1759 Mov
	func_670(var_3943_int, var_3944_int, var_3945_object, var_3946_object, var_3947_object); // 0x175a NEW_2
	var_3948_object = Obj(); var_3949_int = 0; // 0x175c PushV
	var_3948_object = var_3935_object; // 0x175d Mov
	var_3949_int = 2; // 0x175e MovI
	func_255(var_3949_int); // 0x175f NEW_2
	var_3950_int = 0; var_3951_bool = 0; var_3952_int = 0; // 0x1761 PushV
	var_3950_int = 8; // 0x1762 MovI
	var_3951_bool = 0; // 0x1763 MovB
	var_3952_int = 4; // 0x1764 MovI
	func_820(var_3950_int, var_3951_bool, var_3952_int); // 0x1765 NEW_2
	var_3953_int = 0; var_3954_bool = 0; var_3955_int = 0; // 0x1767 PushV
	var_3953_int = 8; // 0x1768 MovI
	var_3954_bool = 1; // 0x1769 MovB
	var_3955_int = 4; // 0x176a MovI
	func_882(var_3953_int, var_3954_bool, var_3955_int); // 0x176b NEW_2
	
Label_5997:
	var_3956_int = 0; var_3957_bool = 0; // 0x176d PushV
	var_3956_int = 8; // 0x176e MovI
	var_3957_bool = 0; // 0x176f MovB
	func_729(var_3956_int, var_3957_bool); // 0x1770 NEW_2
	var_3958_int = 0; var_3959_int = 0; var_3960_int = 0; // 0x1772 PushV
	var_3958_int = 8; // 0x1773 MovI
	var_3959_int = var_3930_int; // 0x1774 Mov
	var_3960_int = var_3931_int; // 0x1775 Mov
	func_3609(var_3958_int, var_3959_int, var_3960_int); // 0x1776 NEW_2
	return 0; // 0x1778 Return
}


func_10060(var_5380_int, var_5381_float)
{
	var_5382_int = 0; var_5383_int = 0; var_5384_int = 0; var_5385_float = 0; // 0x274d PushV
	var_5383_int = 520962; // 0x274e MovI
	var_5384_int = 520961; // 0x274f MovI
	var_5385_float = var_5381_float; // 0x2750 Mov
	func_12022(var_5382_int, var_5383_int, var_5384_int, var_5385_float); // 0x2751 NEW_2
	var_5380_int = var_5382_int; // 0x2752 Mov
	return 0; // 0x2754 Return
}


func_2894(var_2434_int, var_2435_int, var_2436_int)
{
	var_2437_int = 0; var_2438_int = 0; var_2439_int = 0; var_2440_int = 0; // 0xb4e PushV
	var_2441_bool = 0; // 0xb4f PushV
	var_2441_bool = 0; // 0xb50 MovB
	var_2442_int = 8; // 0xb51 PushI
	var_2443_bool = var_2436_int > var_2442_int; // 0xb52 GT
	if(var_2443_bool == 0) goto Label_2904; // 0xb53 JumpB
	var_2444_int = 21; // 0xb54 PushI
	var_2445_bool = var_2436_int < var_2444_int; // 0xb55 LT
	if(var_2445_bool == 0) goto Label_2904; // 0xb56 JumpB
	var_2441_bool = 1; // 0xb57 MovB
	
Label_2904:
	if(var_2441_bool == 0) goto Label_2959; // 0xb58 JumpB
	var_2446_int = 0; var_2447_string = ""; var_2448_string = ""; var_2449_int = 0; // 0xb59 PushV
	var_2446_int = var_2434_int; // 0xb5a Mov
	var_2447_string = "pers_vaxxabit"; // 0xb5b MovS
	var_2448_string = "vaxxabit_d.xml"; // 0xb5c MovS
	var_2449_int = 6; // 0xb5d MovI
	func_453(var_2446_int, var_2447_string, var_2448_string, var_2449_int); // 0xb5e NEW_2
	var_2450_int = 0; var_2451_string = ""; var_2452_string = ""; var_2453_int = 0; // 0xb60 PushV
	var_2450_int = var_2434_int; // 0xb61 Mov
	var_2451_string = "pers_vaxxabitka"; // 0xb62 MovS
	var_2452_string = "vaxxabitka_d.xml"; // 0xb63 MovS
	var_2453_int = 6; // 0xb64 MovI
	func_453(var_2450_int, var_2451_string, var_2452_string, var_2453_int); // 0xb65 NEW_2
	var_2454_int = 0; var_2455_string = ""; var_2456_string = ""; var_2457_int = 0; // 0xb67 PushV
	var_2454_int = var_2434_int; // 0xb68 Mov
	var_2455_string = "pers_rat_big"; // 0xb69 MovS
	var_2456_string = "rat_big.xml"; // 0xb6a MovS
	var_2457_int = 2; // 0xb6b MovI
	func_453(var_2454_int, var_2455_string, var_2456_string, var_2457_int); // 0xb6c NEW_2
	var_2458_int = 0; var_2459_string = ""; var_2460_string = ""; var_2461_int = 0; // 0xb6e PushV
	var_2458_int = var_2434_int; // 0xb6f Mov
	var_2459_string = "fog"; // 0xb70 MovS
	var_2460_string = "fog.xml"; // 0xb71 MovS
	var_2461_int = 6; // 0xb72 MovI
	func_479(var_2458_int, var_2459_string, var_2460_string, var_2461_int); // 0xb73 NEW_2
	var_2462_int = 5; // 0xb75 PushI
	var_2463_bool = var_2435_int >= var_2462_int; // 0xb76 GE
	if(var_2463_bool == 0) goto Label_2943; // 0xb77 JumpB
	var_2464_int = 0; var_2465_string = ""; var_2466_string = ""; var_2467_int = 0; // 0xb78 PushV
	var_2464_int = var_2434_int; // 0xb79 Mov
	var_2465_string = "fog"; // 0xb7a MovS
	var_2466_string = "fog_hunter.xml"; // 0xb7b MovS
	var_2467_int = 2; // 0xb7c MovI
	func_479(var_2464_int, var_2465_string, var_2466_string, var_2467_int); // 0xb7d NEW_2
	
Label_2943:
	var_2468_int = 1; // 0xb7f PushI
	var_2469_float = 0; var_2470_int = 0; // 0xb80 PushV
	var_2470_int = var_2435_int; // 0xb81 Mov
	func_1205(var_2469_float, var_2470_int); // 0xb82 NEW_2
	var_2439_int = var_2468_int * var_2469_float; // 0xb84 Mult2
	var_2471_int = var_2439_int; // 0xb85 Push
	if(var_2471_int == 0) goto Label_2958; // 0xb86 JumpB
	var_2472_int = 0; var_2473_string = ""; var_2474_string = ""; var_2475_int = 0; // 0xb87 PushV
	var_2472_int = var_2434_int; // 0xb88 Mov
	var_2473_string = "pers_bomber"; // 0xb89 MovS
	var_2474_string = "bomber.xml"; // 0xb8a MovS
	var_2475_int = var_2439_int; // 0xb8b Mov
	func_453(var_2472_int, var_2473_string, var_2474_string, var_2475_int); // 0xb8c NEW_2
	
Label_2958:
	goto Label_3012; // 0xb8e Jump
	
Label_3012:
	var_2476_int = 0; var_2477_string = ""; var_2478_string = ""; var_2479_int = 0; var_2480_int = 0; var_2481_int = 0; // 0xbc4 PushV
	var_2476_int = var_2434_int; // 0xbc5 Mov
	var_2477_string = "pers_worker"; // 0xbc6 MovS
	var_2478_string = "agony1_man.xml"; // 0xbc7 MovS
	var_2479_int = 2; // 0xbc8 MovI
	var_2480_int = 4; // 0xbc9 MovI
	var_2481_int = 4; // 0xbca MovI
	func_466(var_2476_int, var_2477_string, var_2478_string, var_2479_int, var_2480_int, var_2481_int); // 0xbcb NEW_2
	var_2482_int = 0; var_2483_string = ""; var_2484_string = ""; var_2485_int = 0; var_2486_int = 0; var_2487_int = 0; // 0xbcd PushV
	var_2482_int = var_2434_int; // 0xbce Mov
	var_2483_string = "pers_unosha"; // 0xbcf MovS
	var_2484_string = "agony1_man.xml"; // 0xbd0 MovS
	var_2485_int = 2; // 0xbd1 MovI
	var_2486_int = 4; // 0xbd2 MovI
	var_2487_int = 4; // 0xbd3 MovI
	func_466(var_2482_int, var_2483_string, var_2484_string, var_2485_int, var_2486_int, var_2487_int); // 0xbd4 NEW_2
	var_2488_int = 0; var_2489_string = ""; var_2490_string = ""; var_2491_int = 0; var_2492_int = 0; var_2493_int = 0; // 0xbd6 PushV
	var_2488_int = var_2434_int; // 0xbd7 Mov
	var_2489_string = "pers_woman"; // 0xbd8 MovS
	var_2490_string = "agony1_woman.xml"; // 0xbd9 MovS
	var_2491_int = 2; // 0xbda MovI
	var_2492_int = 4; // 0xbdb MovI
	var_2493_int = 4; // 0xbdc MovI
	func_466(var_2488_int, var_2489_string, var_2490_string, var_2491_int, var_2492_int, var_2493_int); // 0xbdd NEW_2
	var_2494_int = 0; var_2495_string = ""; var_2496_string = ""; var_2497_int = 0; var_2498_int = 0; var_2499_int = 0; // 0xbdf PushV
	var_2494_int = var_2434_int; // 0xbe0 Mov
	var_2495_string = "pers_wasted_girl"; // 0xbe1 MovS
	var_2496_string = "agony1_woman.xml"; // 0xbe2 MovS
	var_2497_int = 2; // 0xbe3 MovI
	var_2498_int = 4; // 0xbe4 MovI
	var_2499_int = 4; // 0xbe5 MovI
	func_466(var_2494_int, var_2495_string, var_2496_string, var_2497_int, var_2498_int, var_2499_int); // 0xbe6 NEW_2
	var_2500_bool = 0; var_2501_int = 0; var_2502_int = 0; // 0xbe8 PushV
	var_2501_int = var_2435_int; // 0xbe9 Mov
	var_2502_int = var_2436_int; // 0xbea Mov
	func_1295(var_2500_bool, var_2501_int, var_2502_int); // 0xbeb NEW_2
	if(var_2500_bool == 0) goto Label_3061; // 0xbed JumpB
	var_2503_int = 0; var_2504_string = ""; var_2505_string = ""; var_2506_int = 0; // 0xbee PushV
	var_2503_int = var_2434_int; // 0xbef Mov
	var_2504_string = "pers_soldat"; // 0xbf0 MovS
	var_2505_string = "soldier_marauder.xml"; // 0xbf1 MovS
	var_2506_int = 2; // 0xbf2 MovI
	func_453(var_2503_int, var_2504_string, var_2505_string, var_2506_int); // 0xbf3 NEW_2
	
Label_3061:
	var_2507_bool = 0; var_2508_int = 0; var_2509_int = 0; // 0xbf5 PushV
	var_2508_int = var_2435_int; // 0xbf6 Mov
	var_2509_int = var_2436_int; // 0xbf7 Mov
	func_1305(var_2507_bool, var_2508_int, var_2509_int); // 0xbf8 NEW_2
	if(var_2507_bool == 0) goto Label_3074; // 0xbfa JumpB
	var_2510_int = 0; var_2511_string = ""; var_2512_string = ""; var_2513_int = 0; // 0xbfb PushV
	var_2510_int = var_2434_int; // 0xbfc Mov
	var_2511_string = "pers_nudegirl"; // 0xbfd MovS
	var_2512_string = "nudegirl.xml"; // 0xbfe MovS
	var_2513_int = 1; // 0xbff MovI
	func_453(var_2510_int, var_2511_string, var_2512_string, var_2513_int); // 0xc00 NEW_2
	
Label_3074:
	var_2514_bool = 0; var_2515_int = 0; // 0xc02 PushV
	var_2515_int = var_2435_int; // 0xc03 Mov
	func_1322(var_2514_bool, var_2515_int); // 0xc04 NEW_2
	if(var_2514_bool == 0) goto Label_3086; // 0xc06 JumpB
	var_2516_int = 0; var_2517_string = ""; var_2518_string = ""; var_2519_int = 0; // 0xc07 PushV
	var_2516_int = var_2434_int; // 0xc08 Mov
	var_2517_string = "pers_sanitar"; // 0xc09 MovS
	var_2518_string = "sanitar.xml"; // 0xc0a MovS
	var_2519_int = 1; // 0xc0b MovI
	func_453(var_2516_int, var_2517_string, var_2518_string, var_2519_int); // 0xc0c NEW_2
	
Label_3086:
	return 4; // 0xc0e Return
	
Label_2959:
	var_2520_int = 0; var_2521_string = ""; var_2522_string = ""; var_2523_int = 0; // 0xb8f PushV
	var_2520_int = var_2434_int; // 0xb90 Mov
	var_2521_string = "pers_vaxxabit"; // 0xb91 MovS
	var_2522_string = "vaxxabit_d.xml"; // 0xb92 MovS
	var_2523_int = 5; // 0xb93 MovI
	func_453(var_2520_int, var_2521_string, var_2522_string, var_2523_int); // 0xb94 NEW_2
	var_2524_int = 0; var_2525_string = ""; var_2526_string = ""; var_2527_int = 0; // 0xb96 PushV
	var_2524_int = var_2434_int; // 0xb97 Mov
	var_2525_string = "pers_vaxxabitka"; // 0xb98 MovS
	var_2526_string = "vaxxabitka_d.xml"; // 0xb99 MovS
	var_2527_int = 5; // 0xb9a MovI
	func_453(var_2524_int, var_2525_string, var_2526_string, var_2527_int); // 0xb9b NEW_2
	var_2528_int = 0; var_2529_string = ""; var_2530_string = ""; var_2531_int = 0; // 0xb9d PushV
	var_2528_int = var_2434_int; // 0xb9e Mov
	var_2529_string = "pers_rat_big"; // 0xb9f MovS
	var_2530_string = "rat_big.xml"; // 0xba0 MovS
	var_2531_int = 3; // 0xba1 MovI
	func_453(var_2528_int, var_2529_string, var_2530_string, var_2531_int); // 0xba2 NEW_2
	var_2532_int = 0; var_2533_string = ""; var_2534_string = ""; var_2535_int = 0; // 0xba4 PushV
	var_2532_int = var_2434_int; // 0xba5 Mov
	var_2533_string = "fog"; // 0xba6 MovS
	var_2534_string = "fog.xml"; // 0xba7 MovS
	var_2535_int = 6; // 0xba8 MovI
	func_479(var_2532_int, var_2533_string, var_2534_string, var_2535_int); // 0xba9 NEW_2
	var_2536_int = 5; // 0xbab PushI
	var_2537_bool = var_2435_int >= var_2536_int; // 0xbac GE
	if(var_2537_bool == 0) goto Label_2997; // 0xbad JumpB
	var_2538_int = 0; var_2539_string = ""; var_2540_string = ""; var_2541_int = 0; // 0xbae PushV
	var_2538_int = var_2434_int; // 0xbaf Mov
	var_2539_string = "fog"; // 0xbb0 MovS
	var_2540_string = "fog_hunter.xml"; // 0xbb1 MovS
	var_2541_int = 2; // 0xbb2 MovI
	func_479(var_2538_int, var_2539_string, var_2540_string, var_2541_int); // 0xbb3 NEW_2
	
Label_2997:
	var_2542_int = 1; // 0xbb5 PushI
	var_2543_float = 0; var_2544_int = 0; // 0xbb6 PushV
	var_2544_int = var_2435_int; // 0xbb7 Mov
	func_1205(var_2543_float, var_2544_int); // 0xbb8 NEW_2
	var_2440_int = var_2542_int * var_2543_float; // 0xbba Mult2
	var_2545_int = var_2440_int; // 0xbbb Push
	if(var_2545_int == 0) goto Label_3012; // 0xbbc JumpB
	var_2546_int = 0; var_2547_string = ""; var_2548_string = ""; var_2549_int = 0; // 0xbbd PushV
	var_2546_int = var_2434_int; // 0xbbe Mov
	var_2547_string = "pers_bomber"; // 0xbbf MovS
	var_2548_string = "bomber.xml"; // 0xbc0 MovS
	var_2549_int = var_2440_int; // 0xbc1 Mov
	func_453(var_2546_int, var_2547_string, var_2548_string, var_2549_int); // 0xbc2 NEW_2
}


func_12114()
{
	var_4364_float = 0; var_4365_int = 0; var_4366_float = 0; var_4367_float = 0; var_4368_int = 0; var_4369_float = 0; // 0x2f52 PushV
	GetGameTime(var_4367_float); // 0x2f53 Func
	var_4368_int = 1; // 0x2f55 MovI
	
Label_12118:
	var_4370_int = 288; // 0x2f56 PushI
	var_4371_bool = var_4368_int < var_4370_int; // 0x2f57 LT
	if(var_4371_bool == 0) goto Label_12142; // 0x2f58 JumpB
	var_4372_float = 1.0; // 0x2f59 PushF
	var_4369_float = var_4372_float * var_4368_int; // 0x2f5a Mult2
	var_4373_bool = var_4369_float < var_4367_float; // 0x2f5b LT
	if(var_4373_bool == 0) goto Label_12126; // 0x2f5c JumpB
	goto Label_12139; // 0x2f5d Jump
	
Label_12139:
	var_4374_int = 1; // 0x2f6b PushI
	var_4368_int = var_4368_int + var_4374_int; // 0x2f6c Add2
	goto Label_12118; // 0x2f6d Jump
	
Label_12126:
	var_4375_int = 40000; // 0x2f5e PushI
	var_4376_int = var_4375_int + var_4368_int; // 0x2f5f Add
	SetTimeEvent(var_4376_int, var_4369_float); // 0x2f60 Func
	var_4377_float = 0.00333; // 0x2f62 PushF
	var_4369_float = var_4369_float - var_4377_float; // 0x2f63 Sub2
	var_4378_bool = var_4369_float < var_4367_float; // 0x2f64 LT
	if(var_4378_bool == 0) goto Label_12135; // 0x2f65 JumpB
	goto Label_12139; // 0x2f66 Jump
	
Label_12135:
	var_4379_int = 42000; // 0x2f67 PushI
	var_4380_int = var_4379_int + var_4368_int; // 0x2f68 Add
	SetTimeEvent(var_4380_int, var_4369_float); // 0x2f69 Func
	
Label_12142:
	func_8147(); // 0x2f6f NEW_2
	func_14334(); // 0x2f72 NEW_2
	return 6; // 0x2f74 Return
}


func_10069(var_5280_int, var_5281_float)
{
	var_5282_int = 0; var_5283_int = 0; var_5284_int = 0; var_5285_float = 0; // 0x2756 PushV
	var_5283_int = 529860; // 0x2757 MovI
	var_5284_int = 529859; // 0x2758 MovI
	var_5285_float = var_5281_float; // 0x2759 Mov
	func_12022(var_5282_int, var_5283_int, var_5284_int, var_5285_float); // 0x275a NEW_2
	var_5280_int = var_5282_int; // 0x275b Mov
	return 0; // 0x275d Return
}


func_10078(var_5395_int, var_5396_float)
{
	var_5397_int = 0; var_5398_int = 0; var_5399_int = 0; var_5400_float = 0; // 0x275f PushV
	var_5398_int = 520964; // 0x2760 MovI
	var_5399_int = 520963; // 0x2761 MovI
	var_5400_float = var_5396_float; // 0x2762 Mov
	func_12022(var_5397_int, var_5398_int, var_5399_int, var_5400_float); // 0x2763 NEW_2
	var_5395_int = var_5397_int; // 0x2764 Mov
	return 0; // 0x2766 Return
}


func_10087(var_5403_int, var_5404_float)
{
	var_5405_int = 0; var_5406_int = 0; var_5407_int = 0; var_5408_float = 0; // 0x2768 PushV
	var_5406_int = 529876; // 0x2769 MovI
	var_5407_int = 529875; // 0x276a MovI
	var_5408_float = var_5404_float; // 0x276b Mov
	func_12022(var_5405_int, var_5406_int, var_5407_int, var_5408_float); // 0x276c NEW_2
	var_5403_int = var_5405_int; // 0x276d Mov
	return 0; // 0x276f Return
}


func_4970(var_1247_int, var_1248_int, var_1249_object, var_1250_object, var_1251_object, var_1252_object)
{
	var_1253_int = 0; // 0x136b PushI
	var_1254_bool = var_1248_int == var_1253_int; // 0x136c Eq
	if(var_1254_bool == 0) goto Label_5010; // 0x136d JumpB
	var_1255_int = 0; var_1256_bool = 0; // 0x136e PushV
	var_1255_int = 3; // 0x136f MovI
	var_1256_bool = 0; // 0x1370 MovB
	func_746(var_1255_int, var_1256_bool); // 0x1371 NEW_2
	var_1257_int = 0; var_1258_bool = 0; var_1259_int = 0; // 0x1373 PushV
	var_1257_int = 3; // 0x1374 MovI
	var_1258_bool = 0; // 0x1375 MovB
	var_1259_int = 1; // 0x1376 MovI
	func_763(var_1257_int, var_1258_bool, var_1259_int); // 0x1377 NEW_2
	var_1260_int = 0; var_1261_int = 0; var_1262_object = Obj(); var_1263_object = Obj(); var_1264_object = Obj(); // 0x1379 PushV
	var_1260_int = 3; // 0x137a MovI
	var_1261_int = var_1247_int; // 0x137b Mov
	var_1262_object = var_1249_object; // 0x137c Mov
	var_1263_object = var_1250_object; // 0x137d Mov
	var_1264_object = var_1251_object; // 0x137e Mov
	func_572(var_1261_int, var_1262_object, var_1263_object, var_1264_object); // 0x137f NEW_2
	var_1265_object = Obj(); var_1266_int = 0; // 0x1381 PushV
	var_1265_object = var_1252_object; // 0x1382 Mov
	var_1266_int = 0; // 0x1383 MovI
	func_255(var_1266_int); // 0x1384 NEW_2
	var_1267_int = 0; var_1268_bool = 0; var_1269_int = 0; // 0x1386 PushV
	var_1267_int = 3; // 0x1387 MovI
	var_1268_bool = 0; // 0x1388 MovB
	var_1269_int = 7; // 0x1389 MovI
	func_820(var_1267_int, var_1268_bool, var_1269_int); // 0x138a NEW_2
	var_1270_int = 0; var_1271_bool = 0; var_1272_int = 0; // 0x138c PushV
	var_1270_int = 3; // 0x138d MovI
	var_1271_bool = 0; // 0x138e MovB
	var_1272_int = 7; // 0x138f MovI
	func_882(var_1270_int, var_1271_bool, var_1272_int); // 0x1390 NEW_2
	
Label_5010:
	var_1273_int = 0; var_1274_int = 0; // 0x1392 PushV
	var_1273_int = 3; // 0x1393 MovI
	var_1274_int = var_1248_int; // 0x1394 Mov
	func_933(var_1273_int, var_1274_int); // 0x1395 NEW_2
	var_1290_int = 0; var_1291_int = 0; var_1292_int = 0; // 0x1397 PushV
	var_1290_int = 3; // 0x1398 MovI
	var_1291_int = var_1247_int; // 0x1399 Mov
	var_1292_int = var_1248_int; // 0x139a Mov
	func_1847(var_1290_int, var_1291_int, var_1292_int); // 0x139b NEW_2
	return 0; // 0x139d Return
}


func_9070(var_1987_int, var_1988_int, var_1989_int)
{
	var_1990_object = Obj(); var_1991_object = Obj(); var_1992_object = Obj(); var_1993_object = Obj(); var_1994_object = Obj(); var_1995_object = Obj(); var_1996_object = Obj(); var_1997_object = Obj(); // 0x236e PushV
	var_1998_object = GlobalVars[8]; // 0x236f PushGE
	get(var_1994_object, var_1987_int); // 0x2370 ObjFunc
	var_1999_object = GlobalVars[9]; // 0x2372 PushGE
	get(var_1995_object, var_1987_int); // 0x2373 ObjFunc
	var_2000_object = GlobalVars[10]; // 0x2375 PushGE
	get(var_1996_object, var_1987_int); // 0x2376 ObjFunc
	var_2001_object = GlobalVars[13]; // 0x2378 PushGE
	get(var_1997_object, var_1987_int); // 0x2379 ObjFunc
	var_2002_int = 0; // 0x237b PushI
	var_2003_bool = var_1987_int == var_2002_int; // 0x237c Eq
	if(var_2003_bool == 0) goto Label_9096; // 0x237d JumpB
	var_2004_int = 0; var_2005_int = 0; var_2006_object = Obj(); var_2007_object = Obj(); var_2008_object = Obj(); var_2009_object = Obj(); // 0x237e PushV
	var_2004_int = var_1988_int; // 0x237f Mov
	var_2005_int = var_1989_int; // 0x2380 Mov
	var_2006_object = var_1994_object; // 0x2381 Mov
	var_2007_object = var_1995_object; // 0x2382 Mov
	var_2008_object = var_1996_object; // 0x2383 Mov
	var_2009_object = var_1997_object; // 0x2384 Mov
	func_4389(var_2004_int, var_2005_int, var_2006_object, var_2007_object, var_2008_object, var_2009_object); // 0x2385 NEW_2
	goto Label_9290; // 0x2387 Jump
	
Label_9290:
	return 8; // 0x244a Return
	
Label_9096:
	var_2272_int = 1; // 0x2388 PushI
	var_2273_bool = var_1987_int == var_2272_int; // 0x2389 Eq
	if(var_2273_bool == 0) goto Label_9109; // 0x238a JumpB
	var_2274_int = 0; var_2275_int = 0; var_2276_object = Obj(); var_2277_object = Obj(); var_2278_object = Obj(); var_2279_object = Obj(); // 0x238b PushV
	var_2274_int = var_1988_int; // 0x238c Mov
	var_2275_int = var_1989_int; // 0x238d Mov
	var_2276_object = var_1994_object; // 0x238e Mov
	var_2277_object = var_1995_object; // 0x238f Mov
	var_2278_object = var_1996_object; // 0x2390 Mov
	var_2279_object = var_1997_object; // 0x2391 Mov
	func_4586(var_2274_int, var_2275_int, var_2276_object, var_2277_object, var_2278_object, var_2279_object); // 0x2392 NEW_2
	goto Label_9290; // 0x2394 Jump
	
Label_9109:
	var_2404_int = 2; // 0x2395 PushI
	var_2405_bool = var_1987_int == var_2404_int; // 0x2396 Eq
	if(var_2405_bool == 0) goto Label_9122; // 0x2397 JumpB
	var_2406_int = 0; var_2407_int = 0; var_2408_object = Obj(); var_2409_object = Obj(); var_2410_object = Obj(); var_2411_object = Obj(); // 0x2398 PushV
	var_2406_int = var_1988_int; // 0x2399 Mov
	var_2407_int = var_1989_int; // 0x239a Mov
	var_2408_object = var_1994_object; // 0x239b Mov
	var_2409_object = var_1995_object; // 0x239c Mov
	var_2410_object = var_1996_object; // 0x239d Mov
	var_2411_object = var_1997_object; // 0x239e Mov
	func_4792(var_2406_int, var_2407_int, var_2408_object, var_2409_object, var_2410_object, var_2411_object); // 0x239f NEW_2
	goto Label_9290; // 0x23a1 Jump
	
Label_9122:
	var_2550_int = 3; // 0x23a2 PushI
	var_2551_bool = var_1987_int == var_2550_int; // 0x23a3 Eq
	if(var_2551_bool == 0) goto Label_9135; // 0x23a4 JumpB
	var_2552_int = 0; var_2553_int = 0; var_2554_object = Obj(); var_2555_object = Obj(); var_2556_object = Obj(); var_2557_object = Obj(); // 0x23a5 PushV
	var_2552_int = var_1988_int; // 0x23a6 Mov
	var_2553_int = var_1989_int; // 0x23a7 Mov
	var_2554_object = var_1994_object; // 0x23a8 Mov
	var_2555_object = var_1995_object; // 0x23a9 Mov
	var_2556_object = var_1996_object; // 0x23aa Mov
	var_2557_object = var_1997_object; // 0x23ab Mov
	func_5022(var_2552_int, var_2553_int, var_2554_object, var_2555_object, var_2556_object, var_2557_object); // 0x23ac NEW_2
	goto Label_9290; // 0x23ae Jump
	
Label_9135:
	var_2583_int = 4; // 0x23af PushI
	var_2584_bool = var_1987_int == var_2583_int; // 0x23b0 Eq
	if(var_2584_bool == 0) goto Label_9148; // 0x23b1 JumpB
	var_2585_int = 0; var_2586_int = 0; var_2587_object = Obj(); var_2588_object = Obj(); var_2589_object = Obj(); var_2590_object = Obj(); // 0x23b2 PushV
	var_2585_int = var_1988_int; // 0x23b3 Mov
	var_2586_int = var_1989_int; // 0x23b4 Mov
	var_2587_object = var_1994_object; // 0x23b5 Mov
	var_2588_object = var_1995_object; // 0x23b6 Mov
	var_2589_object = var_1996_object; // 0x23b7 Mov
	var_2590_object = var_1997_object; // 0x23b8 Mov
	func_5240(var_2585_int, var_2586_int, var_2587_object, var_2588_object, var_2589_object, var_2590_object); // 0x23b9 NEW_2
	goto Label_9290; // 0x23bb Jump
	
Label_9148:
	var_2616_int = 5; // 0x23bc PushI
	var_2617_bool = var_1987_int == var_2616_int; // 0x23bd Eq
	if(var_2617_bool == 0) goto Label_9161; // 0x23be JumpB
	var_2618_int = 0; var_2619_int = 0; var_2620_object = Obj(); var_2621_object = Obj(); var_2622_object = Obj(); var_2623_object = Obj(); // 0x23bf PushV
	var_2618_int = var_1988_int; // 0x23c0 Mov
	var_2619_int = var_1989_int; // 0x23c1 Mov
	var_2620_object = var_1994_object; // 0x23c2 Mov
	var_2621_object = var_1995_object; // 0x23c3 Mov
	var_2622_object = var_1996_object; // 0x23c4 Mov
	var_2623_object = var_1997_object; // 0x23c5 Mov
	func_5482(var_2618_int, var_2619_int, var_2620_object, var_2621_object, var_2622_object, var_2623_object); // 0x23c6 NEW_2
	goto Label_9290; // 0x23c8 Jump
	
Label_9161:
	var_2649_int = 6; // 0x23c9 PushI
	var_2650_bool = var_1987_int == var_2649_int; // 0x23ca Eq
	if(var_2650_bool == 0) goto Label_9174; // 0x23cb JumpB
	var_2651_int = 0; var_2652_int = 0; var_2653_object = Obj(); var_2654_object = Obj(); var_2655_object = Obj(); var_2656_object = Obj(); // 0x23cc PushV
	var_2651_int = var_1988_int; // 0x23cd Mov
	var_2652_int = var_1989_int; // 0x23ce Mov
	var_2653_object = var_1994_object; // 0x23cf Mov
	var_2654_object = var_1995_object; // 0x23d0 Mov
	var_2655_object = var_1996_object; // 0x23d1 Mov
	var_2656_object = var_1997_object; // 0x23d2 Mov
	func_5595(); // 0x23d3 NEW_2
	goto Label_9290; // 0x23d5 Jump
	
Label_9174:
	var_2659_int = 7; // 0x23d6 PushI
	var_2660_bool = var_1987_int == var_2659_int; // 0x23d7 Eq
	if(var_2660_bool == 0) goto Label_9187; // 0x23d8 JumpB
	var_2661_int = 0; var_2662_int = 0; var_2663_object = Obj(); var_2664_object = Obj(); var_2665_object = Obj(); var_2666_object = Obj(); // 0x23d9 PushV
	var_2661_int = var_1988_int; // 0x23da Mov
	var_2662_int = var_1989_int; // 0x23db Mov
	var_2663_object = var_1994_object; // 0x23dc Mov
	var_2664_object = var_1995_object; // 0x23dd Mov
	var_2665_object = var_1996_object; // 0x23de Mov
	var_2666_object = var_1997_object; // 0x23df Mov
	func_5705(var_2661_int, var_2662_int, var_2663_object, var_2664_object, var_2665_object, var_2666_object); // 0x23e0 NEW_2
	goto Label_9290; // 0x23e2 Jump
	
Label_9187:
	var_2798_int = 8; // 0x23e3 PushI
	var_2799_bool = var_1987_int == var_2798_int; // 0x23e4 Eq
	if(var_2799_bool == 0) goto Label_9200; // 0x23e5 JumpB
	var_2800_int = 0; var_2801_int = 0; var_2802_object = Obj(); var_2803_object = Obj(); var_2804_object = Obj(); var_2805_object = Obj(); // 0x23e6 PushV
	var_2800_int = var_1988_int; // 0x23e7 Mov
	var_2801_int = var_1989_int; // 0x23e8 Mov
	var_2802_object = var_1994_object; // 0x23e9 Mov
	var_2803_object = var_1995_object; // 0x23ea Mov
	var_2804_object = var_1996_object; // 0x23eb Mov
	var_2805_object = var_1997_object; // 0x23ec Mov
	func_5905(var_2800_int, var_2801_int, var_2802_object, var_2803_object, var_2804_object, var_2805_object); // 0x23ed NEW_2
	goto Label_9290; // 0x23ef Jump
	
Label_9200:
	var_2831_int = 9; // 0x23f0 PushI
	var_2832_bool = var_1987_int == var_2831_int; // 0x23f1 Eq
	if(var_2832_bool == 0) goto Label_9213; // 0x23f2 JumpB
	var_2833_int = 0; var_2834_int = 0; var_2835_object = Obj(); var_2836_object = Obj(); var_2837_object = Obj(); var_2838_object = Obj(); // 0x23f3 PushV
	var_2833_int = var_1988_int; // 0x23f4 Mov
	var_2834_int = var_1989_int; // 0x23f5 Mov
	var_2835_object = var_1994_object; // 0x23f6 Mov
	var_2836_object = var_1995_object; // 0x23f7 Mov
	var_2837_object = var_1996_object; // 0x23f8 Mov
	var_2838_object = var_1997_object; // 0x23f9 Mov
	func_6108(var_2833_int, var_2834_int, var_2835_object, var_2836_object, var_2837_object, var_2838_object); // 0x23fa NEW_2
	goto Label_9290; // 0x23fc Jump
	
Label_9213:
	var_2864_int = 10; // 0x23fd PushI
	var_2865_bool = var_1987_int == var_2864_int; // 0x23fe Eq
	if(var_2865_bool == 0) goto Label_9226; // 0x23ff JumpB
	var_2866_int = 0; var_2867_int = 0; var_2868_object = Obj(); var_2869_object = Obj(); var_2870_object = Obj(); var_2871_object = Obj(); // 0x2400 PushV
	var_2866_int = var_1988_int; // 0x2401 Mov
	var_2867_int = var_1989_int; // 0x2402 Mov
	var_2868_object = var_1994_object; // 0x2403 Mov
	var_2869_object = var_1995_object; // 0x2404 Mov
	var_2870_object = var_1996_object; // 0x2405 Mov
	var_2871_object = var_1997_object; // 0x2406 Mov
	func_6317(var_2866_int, var_2867_int, var_2868_object, var_2869_object, var_2870_object, var_2871_object); // 0x2407 NEW_2
	goto Label_9290; // 0x2409 Jump
	
Label_9226:
	var_2897_int = 11; // 0x240a PushI
	var_2898_bool = var_1987_int == var_2897_int; // 0x240b Eq
	if(var_2898_bool == 0) goto Label_9239; // 0x240c JumpB
	var_2899_int = 0; var_2900_int = 0; var_2901_object = Obj(); var_2902_object = Obj(); var_2903_object = Obj(); var_2904_object = Obj(); // 0x240d PushV
	var_2899_int = var_1988_int; // 0x240e Mov
	var_2900_int = var_1989_int; // 0x240f Mov
	var_2901_object = var_1994_object; // 0x2410 Mov
	var_2902_object = var_1995_object; // 0x2411 Mov
	var_2903_object = var_1996_object; // 0x2412 Mov
	var_2904_object = var_1997_object; // 0x2413 Mov
	func_6529(var_2899_int, var_2900_int, var_2901_object, var_2902_object, var_2903_object, var_2904_object); // 0x2414 NEW_2
	goto Label_9290; // 0x2416 Jump
	
Label_9239:
	var_2930_int = 12; // 0x2417 PushI
	var_2931_bool = var_1987_int == var_2930_int; // 0x2418 Eq
	if(var_2931_bool == 0) goto Label_9252; // 0x2419 JumpB
	var_2932_int = 0; var_2933_int = 0; var_2934_object = Obj(); var_2935_object = Obj(); var_2936_object = Obj(); var_2937_object = Obj(); // 0x241a PushV
	var_2932_int = var_1988_int; // 0x241b Mov
	var_2933_int = var_1989_int; // 0x241c Mov
	var_2934_object = var_1994_object; // 0x241d Mov
	var_2935_object = var_1995_object; // 0x241e Mov
	var_2936_object = var_1996_object; // 0x241f Mov
	var_2937_object = var_1997_object; // 0x2420 Mov
	func_6726(var_2932_int, var_2933_int, var_2934_object, var_2935_object, var_2936_object, var_2937_object); // 0x2421 NEW_2
	goto Label_9290; // 0x2423 Jump
	
Label_9252:
	var_2963_int = 13; // 0x2424 PushI
	var_2964_bool = var_1987_int == var_2963_int; // 0x2425 Eq
	if(var_2964_bool == 0) goto Label_9265; // 0x2426 JumpB
	var_2965_int = 0; var_2966_int = 0; var_2967_object = Obj(); var_2968_object = Obj(); var_2969_object = Obj(); var_2970_object = Obj(); // 0x2427 PushV
	var_2965_int = var_1988_int; // 0x2428 Mov
	var_2966_int = var_1989_int; // 0x2429 Mov
	var_2967_object = var_1994_object; // 0x242a Mov
	var_2968_object = var_1995_object; // 0x242b Mov
	var_2969_object = var_1996_object; // 0x242c Mov
	var_2970_object = var_1997_object; // 0x242d Mov
	func_6929(var_2965_int, var_2966_int, var_2967_object, var_2968_object, var_2969_object, var_2970_object); // 0x242e NEW_2
	goto Label_9290; // 0x2430 Jump
	
Label_9265:
	var_2996_int = 14; // 0x2431 PushI
	var_2997_bool = var_1987_int == var_2996_int; // 0x2432 Eq
	if(var_2997_bool == 0) goto Label_9278; // 0x2433 JumpB
	var_2998_int = 0; var_2999_int = 0; var_3000_object = Obj(); var_3001_object = Obj(); var_3002_object = Obj(); var_3003_object = Obj(); // 0x2434 PushV
	var_2998_int = var_1988_int; // 0x2435 Mov
	var_2999_int = var_1989_int; // 0x2436 Mov
	var_3000_object = var_1994_object; // 0x2437 Mov
	var_3001_object = var_1995_object; // 0x2438 Mov
	var_3002_object = var_1996_object; // 0x2439 Mov
	var_3003_object = var_1997_object; // 0x243a Mov
	func_7129(var_2998_int, var_2999_int, var_3000_object, var_3001_object, var_3002_object, var_3003_object); // 0x243b NEW_2
	goto Label_9290; // 0x243d Jump
	
Label_9278:
	var_3135_int = 15; // 0x243e PushI
	var_3136_bool = var_1987_int == var_3135_int; // 0x243f Eq
	if(var_3136_bool == 0) goto Label_9290; // 0x2440 JumpB
	var_3137_int = 0; var_3138_int = 0; var_3139_object = Obj(); var_3140_object = Obj(); var_3141_object = Obj(); var_3142_object = Obj(); // 0x2441 PushV
	var_3137_int = var_1988_int; // 0x2442 Mov
	var_3138_int = var_1989_int; // 0x2443 Mov
	var_3139_object = var_1994_object; // 0x2444 Mov
	var_3140_object = var_1995_object; // 0x2445 Mov
	var_3141_object = var_1996_object; // 0x2446 Mov
	var_3142_object = var_1997_object; // 0x2447 Mov
	func_7311(var_3137_int, var_3138_int, var_3139_object, var_3140_object, var_3141_object, var_3142_object); // 0x2448 NEW_2
}


func_10096(var_5426_int, var_5427_float)
{
	var_5428_int = 0; var_5429_int = 0; var_5430_int = 0; var_5431_float = 0; // 0x2771 PushV
	var_5429_int = 521369; // 0x2772 MovI
	var_5430_int = 521368; // 0x2773 MovI
	var_5431_float = var_5427_float; // 0x2774 Mov
	func_12022(var_5428_int, var_5429_int, var_5430_int, var_5431_float); // 0x2775 NEW_2
	var_5426_int = var_5428_int; // 0x2776 Mov
	return 0; // 0x2778 Return
}


func_882(var_685_int, var_686_bool, var_687_int)
{
	var_688_string = ""; var_689_object = Obj(); var_690_object = Obj(); var_691_int = 0; var_692_string = ""; var_693_object = Obj(); var_694_string = ""; var_695_object = Obj(); var_696_object = Obj(); var_697_int = 0; var_698_string = ""; var_699_object = Obj(); // 0x372 PushV
	var_700_string = "dr_mark"; // 0x373 PushS
	var_701_int = 1; // 0x374 PushI
	var_702_int = var_685_int + var_701_int; // 0x375 Add
	var_694_string = var_700_string + var_702_int; // 0x376 Add2
	var_703_string = "br_"; // 0x377 PushS
	var_704_int = 1; // 0x378 PushI
	var_705_int = var_685_int + var_704_int; // 0x379 Add
	var_706_int = var_703_string + var_705_int; // 0x37a Add
	FindActor(var_695_object, var_706_int); // 0x37b Func
	var_707_bool = var_686_bool; // 0x37d Push
	if(var_707_bool == 0) goto Label_908; // 0x37e JumpB
	var_708_bool = var_695_object == 0; // 0x37f Not
	if(var_708_bool == 0) goto Label_907; // 0x380 JumpB
	GetMainOutdoorScene(var_696_object); // 0x381 Func
	var_709_string = "br_"; // 0x383 PushS
	var_710_int = 1; // 0x384 PushI
	var_711_int = var_685_int + var_710_int; // 0x385 Add
	var_712_int = var_709_string + var_711_int; // 0x386 Add
	var_713_cvector = CVector(0.0, 0.0, 0.0); // 0x387 PushVec
	AddActor(var_695_object, var_712_int, var_696_object, var_713_cvector); // 0x388 Func
	var_696_object = 0; // 0x38a SetNull
	
Label_907:
	goto Label_912; // 0x38b Jump
	
Label_912:
	var_697_int = 1; // 0x390 MovI
	
Label_913:
	var_714_bool = var_697_int <= var_687_int; // 0x391 LE
	if(var_714_bool == 0) goto Label_931; // 0x392 JumpB
	var_715_string = "_"; // 0x393 PushS
	var_716_int = var_694_string + var_715_string; // 0x394 Add
	var_698_string = var_716_int + var_697_int; // 0x395 Add2
	FindActor(var_699_object, var_698_string); // 0x396 Func
	var_717_object = var_699_object; // 0x398 Push
	if(var_717_object == 0) goto Label_927; // 0x399 JumpB
	var_718_bool = 0; var_719_string = ""; var_720_string = ""; // 0x39a PushV
	var_719_string = var_698_string; // 0x39b Mov
	var_720_string = "cleanup"; // 0x39c MovS
	func_189(var_718_bool, var_719_string, var_720_string); // 0x39d NEW_2
	
Label_927:
	var_699_object = 0; // 0x39f SetNull
	var_721_int = 1; // 0x3a0 PushI
	var_697_int = var_697_int + var_721_int; // 0x3a1 Add2
	goto Label_913; // 0x3a2 Jump
	
Label_931:
	return 12; // 0x3a3 Return
	
Label_908:
	var_722_object = var_695_object; // 0x38c Push
	if(var_722_object == 0) goto Label_912; // 0x38d JumpB
	RemoveActor(var_695_object); // 0x38e Func
}


func_12149(var_4539_int, var_4540_float)
{
	var_4541_int = 0; var_4542_int = 0; // 0x2f75 PushV
	var_4543_int = 45058; // 0x2f76 PushI
	var_4544_bool = var_4539_int == var_4543_int; // 0x2f77 Eq
	if(var_4544_bool == 0) goto Label_12175; // 0x2f78 JumpB
	var_4545_object = Obj(); var_4546_object = Obj(); // 0x2f79 PushV
	var_4547_object = GlobalVars[16]; // 0x2f7a PushGE
	var_4545_object = var_4547_object; // 0x2f7b Mov
	var_4548_object = GlobalVars[16]; // 0x2f7d PushGE
	var_4546_object = var_4548_object; // 0x2f7e Mov
	func_10325(); // 0x2f80 NEW_2
	var_4624_bool = 0; var_4625_string = ""; var_4626_string = ""; // 0x2f82 PushV
	var_4625_string = "quest_b1_01"; // 0x2f83 MovS
	var_4626_string = "cleanup"; // 0x2f84 MovS
	func_189(var_4624_bool, var_4625_string, var_4626_string); // 0x2f85 NEW_2
	var_4627_object = Obj(); var_4628_string = ""; // 0x2f87 PushV
	var_4628_string = "quest_b2_01"; // 0x2f88 MovS
	func_111(var_4627_object, var_4628_string); // 0x2f89 NEW_2
	var_4635_object = Obj(); var_4636_string = ""; // 0x2f8b PushV
	var_4636_string = "quest_b2_03"; // 0x2f8c MovS
	func_111(var_4635_object, var_4636_string); // 0x2f8d NEW_2
	
Label_12175:
	var_4637_int = 45060; // 0x2f8f PushI
	var_4638_bool = var_4539_int == var_4637_int; // 0x2f90 Eq
	if(var_4638_bool == 0) goto Label_12196; // 0x2f91 JumpB
	var_4639_object = Obj(); var_4640_object = Obj(); // 0x2f92 PushV
	var_4641_object = GlobalVars[16]; // 0x2f93 PushGE
	var_4639_object = var_4641_object; // 0x2f94 Mov
	var_4642_object = GlobalVars[16]; // 0x2f96 PushGE
	var_4640_object = var_4642_object; // 0x2f97 Mov
	func_10615(); // 0x2f99 NEW_2
	var_4672_bool = 0; var_4673_string = ""; var_4674_string = ""; // 0x2f9b PushV
	var_4673_string = "quest_b3_01"; // 0x2f9c MovS
	var_4674_string = "cleanup"; // 0x2f9d MovS
	func_189(var_4672_bool, var_4673_string, var_4674_string); // 0x2f9e NEW_2
	var_4675_object = Obj(); var_4676_string = ""; // 0x2fa0 PushV
	var_4676_string = "quest_b4_01"; // 0x2fa1 MovS
	func_122(var_4675_object, var_4676_string); // 0x2fa2 NEW_2
	
Label_12196:
	var_4683_int = 45068; // 0x2fa4 PushI
	var_4684_bool = var_4539_int == var_4683_int; // 0x2fa5 Eq
	if(var_4684_bool == 0) goto Label_12213; // 0x2fa6 JumpB
	var_4685_object = Obj(); var_4686_object = Obj(); // 0x2fa7 PushV
	var_4687_object = GlobalVars[16]; // 0x2fa8 PushGE
	var_4685_object = var_4687_object; // 0x2fa9 Mov
	var_4688_object = GlobalVars[16]; // 0x2fab PushGE
	var_4686_object = var_4688_object; // 0x2fac Mov
	func_11464(); // 0x2fae NEW_2
	var_4699_bool = 0; var_4700_string = ""; var_4701_string = ""; // 0x2fb0 PushV
	var_4700_string = "quest_b1_01"; // 0x2fb1 MovS
	var_4701_string = "remove_whitemask"; // 0x2fb2 MovS
	func_189(var_4699_bool, var_4700_string, var_4701_string); // 0x2fb3 NEW_2
	
Label_12213:
	var_4702_int = 45069; // 0x2fb5 PushI
	var_4703_bool = var_4539_int == var_4702_int; // 0x2fb6 Eq
	if(var_4703_bool == 0) goto Label_12225; // 0x2fb7 JumpB
	var_4704_object = Obj(); var_4705_object = Obj(); // 0x2fb8 PushV
	var_4706_object = GlobalVars[16]; // 0x2fb9 PushGE
	var_4704_object = var_4706_object; // 0x2fba Mov
	var_4707_object = GlobalVars[16]; // 0x2fbc PushGE
	var_4705_object = var_4707_object; // 0x2fbd Mov
	func_11485(); // 0x2fbf NEW_2
	
Label_12225:
	var_4710_int = 45072; // 0x2fc1 PushI
	var_4711_bool = var_4539_int == var_4710_int; // 0x2fc2 Eq
	if(var_4711_bool == 0) goto Label_12246; // 0x2fc3 JumpB
	var_4712_object = Obj(); var_4713_object = Obj(); // 0x2fc4 PushV
	var_4714_object = GlobalVars[16]; // 0x2fc5 PushGE
	var_4712_object = var_4714_object; // 0x2fc6 Mov
	var_4715_object = GlobalVars[16]; // 0x2fc8 PushGE
	var_4713_object = var_4715_object; // 0x2fc9 Mov
	func_10221(); // 0x2fcb NEW_2
	var_4718_object = Obj(); var_4719_object = Obj(); // 0x2fcd PushV
	var_4720_object = GlobalVars[16]; // 0x2fce PushGE
	var_4718_object = var_4720_object; // 0x2fcf Mov
	var_4721_object = GlobalVars[16]; // 0x2fd1 PushGE
	var_4719_object = var_4721_object; // 0x2fd2 Mov
	func_10235(); // 0x2fd4 NEW_2
	
Label_12246:
	var_4724_int = 45073; // 0x2fd6 PushI
	var_4725_bool = var_4539_int == var_4724_int; // 0x2fd7 Eq
	if(var_4725_bool == 0) goto Label_12258; // 0x2fd8 JumpB
	var_4726_object = Obj(); var_4727_object = Obj(); // 0x2fd9 PushV
	var_4728_object = GlobalVars[16]; // 0x2fda PushGE
	var_4726_object = var_4728_object; // 0x2fdb Mov
	var_4729_object = GlobalVars[16]; // 0x2fdd PushGE
	var_4727_object = var_4729_object; // 0x2fde Mov
	func_10244(); // 0x2fe0 NEW_2
	
Label_12258:
	var_4730_int = 45070; // 0x2fe2 PushI
	var_4731_bool = var_4539_int == var_4730_int; // 0x2fe3 Eq
	if(var_4731_bool == 0) goto Label_12270; // 0x2fe4 JumpB
	var_4732_object = Obj(); var_4733_object = Obj(); // 0x2fe5 PushV
	var_4734_object = GlobalVars[16]; // 0x2fe6 PushGE
	var_4732_object = var_4734_object; // 0x2fe7 Mov
	var_4735_object = GlobalVars[16]; // 0x2fe9 PushGE
	var_4733_object = var_4735_object; // 0x2fea Mov
	func_10193(); // 0x2fec NEW_2
	
Label_12270:
	var_4738_int = 45071; // 0x2fee PushI
	var_4739_bool = var_4539_int == var_4738_int; // 0x2fef Eq
	if(var_4739_bool == 0) goto Label_12282; // 0x2ff0 JumpB
	var_4740_object = Obj(); var_4741_object = Obj(); // 0x2ff1 PushV
	var_4742_object = GlobalVars[16]; // 0x2ff2 PushGE
	var_4740_object = var_4742_object; // 0x2ff3 Mov
	var_4743_object = GlobalVars[16]; // 0x2ff5 PushGE
	var_4741_object = var_4743_object; // 0x2ff6 Mov
	func_10207(); // 0x2ff8 NEW_2
	
Label_12282:
	var_4755_int = 45086; // 0x2ffa PushI
	var_4756_bool = var_4539_int == var_4755_int; // 0x2ffb Eq
	if(var_4756_bool == 0) goto Label_12303; // 0x2ffc JumpB
	var_4757_object = Obj(); var_4758_object = Obj(); // 0x2ffd PushV
	var_4759_object = GlobalVars[16]; // 0x2ffe PushGE
	var_4757_object = var_4759_object; // 0x2fff Mov
	var_4760_object = GlobalVars[16]; // 0x3001 PushGE
	var_4758_object = var_4760_object; // 0x3002 Mov
	func_11059(); // 0x3004 NEW_2
	var_4794_bool = 0; var_4795_string = ""; var_4796_string = ""; // 0x3006 PushV
	var_4795_string = "quest_b10_01"; // 0x3007 MovS
	var_4796_string = "cleanup"; // 0x3008 MovS
	func_189(var_4794_bool, var_4795_string, var_4796_string); // 0x3009 NEW_2
	var_4797_object = Obj(); var_4798_string = ""; // 0x300b PushV
	var_4798_string = "quest_b11_01"; // 0x300c MovS
	func_122(var_4797_object, var_4798_string); // 0x300d NEW_2
	
Label_12303:
	var_4799_int = 45087; // 0x300f PushI
	var_4800_bool = var_4539_int == var_4799_int; // 0x3010 Eq
	if(var_4800_bool == 0) goto Label_12333; // 0x3011 JumpB
	var_4801_object = Obj(); var_4802_object = Obj(); // 0x3012 PushV
	var_4803_object = GlobalVars[16]; // 0x3013 PushGE
	var_4801_object = var_4803_object; // 0x3014 Mov
	var_4804_object = GlobalVars[16]; // 0x3016 PushGE
	var_4802_object = var_4804_object; // 0x3017 Mov
	func_11156(); // 0x3019 NEW_2
	var_4820_object = Obj(); var_4821_object = Obj(); // 0x301b PushV
	var_4822_object = GlobalVars[16]; // 0x301c PushGE
	var_4820_object = var_4822_object; // 0x301d Mov
	var_4823_object = GlobalVars[16]; // 0x301f PushGE
	var_4821_object = var_4823_object; // 0x3020 Mov
	func_11219(); // 0x3022 NEW_2
	var_4857_bool = 0; var_4858_string = ""; var_4859_string = ""; // 0x3024 PushV
	var_4858_string = "quest_b11_01"; // 0x3025 MovS
	var_4859_string = "cleanup"; // 0x3026 MovS
	func_189(var_4857_bool, var_4858_string, var_4859_string); // 0x3027 NEW_2
	var_4860_object = Obj(); var_4861_string = ""; // 0x3029 PushV
	var_4861_string = "quest_b12_01"; // 0x302a MovS
	func_111(var_4860_object, var_4861_string); // 0x302b NEW_2
	
Label_12333:
	var_4862_int = 45088; // 0x302d PushI
	var_4863_bool = var_4539_int == var_4862_int; // 0x302e Eq
	if(var_4863_bool == 0) goto Label_12348; // 0x302f JumpB
	var_4864_bool = 0; var_4865_object = Obj(); // 0x3030 PushV
	var_4866_object = GlobalVars[16]; // 0x3031 PushGE
	var_4865_object = var_4866_object; // 0x3032 Mov
	func_11528(var_4865_object); // 0x3034 NEW_2
	var_4871_bool = var_4864_bool == 0; // 0x3036 Not
	if(var_4871_bool == 0) goto Label_12348; // 0x3037 JumpB
	var_4872_int = 0; var_4873_float = 0; // 0x3038 PushV
	var_4873_float = var_4540_float; // 0x3039 Mov
	func_9610(var_4872_int, var_4873_float); // 0x303a NEW_2
	
Label_12348:
	var_4881_int = 45089; // 0x303c PushI
	var_4882_bool = var_4539_int == var_4881_int; // 0x303d Eq
	if(var_4882_bool == 0) goto Label_12362; // 0x303e JumpB
	var_4883_bool = 0; var_4884_object = Obj(); // 0x303f PushV
	var_4885_object = GlobalVars[16]; // 0x3040 PushGE
	var_4884_object = var_4885_object; // 0x3041 Mov
	func_11540(var_4884_object); // 0x3043 NEW_2
	if(var_4883_bool == 0) goto Label_12362; // 0x3045 JumpB
	var_4890_int = 0; var_4891_float = 0; // 0x3046 PushV
	var_4891_float = var_4540_float; // 0x3047 Mov
	func_9664(var_4890_int, var_4891_float); // 0x3048 NEW_2
	
Label_12362:
	var_4896_int = 45090; // 0x304a PushI
	var_4897_bool = var_4539_int == var_4896_int; // 0x304b Eq
	if(var_4897_bool == 0) goto Label_12377; // 0x304c JumpB
	var_4898_bool = 0; var_4899_object = Obj(); // 0x304d PushV
	var_4900_object = GlobalVars[16]; // 0x304e PushGE
	var_4899_object = var_4900_object; // 0x304f Mov
	func_11552(var_4899_object); // 0x3051 NEW_2
	var_4905_bool = var_4898_bool == 0; // 0x3053 Not
	if(var_4905_bool == 0) goto Label_12377; // 0x3054 JumpB
	var_4906_int = 0; var_4907_float = 0; // 0x3055 PushV
	var_4907_float = var_4540_float; // 0x3056 Mov
	func_9709(var_4906_int, var_4907_float); // 0x3057 NEW_2
	
Label_12377:
	var_4912_int = 45091; // 0x3059 PushI
	var_4913_bool = var_4539_int == var_4912_int; // 0x305a Eq
	if(var_4913_bool == 0) goto Label_12392; // 0x305b JumpB
	var_4914_bool = 0; var_4915_object = Obj(); // 0x305c PushV
	var_4916_object = GlobalVars[16]; // 0x305d PushGE
	var_4915_object = var_4916_object; // 0x305e Mov
	func_11564(var_4915_object); // 0x3060 NEW_2
	var_4921_bool = var_4914_bool == 0; // 0x3062 Not
	if(var_4921_bool == 0) goto Label_12392; // 0x3063 JumpB
	var_4922_int = 0; var_4923_float = 0; // 0x3064 PushV
	var_4923_float = var_4540_float; // 0x3065 Mov
	func_9718(var_4922_int, var_4923_float); // 0x3066 NEW_2
	
Label_12392:
	var_4928_int = 45092; // 0x3068 PushI
	var_4929_bool = var_4539_int == var_4928_int; // 0x3069 Eq
	if(var_4929_bool == 0) goto Label_12407; // 0x306a JumpB
	var_4930_bool = 0; var_4931_object = Obj(); // 0x306b PushV
	var_4932_object = GlobalVars[16]; // 0x306c PushGE
	var_4931_object = var_4932_object; // 0x306d Mov
	func_11576(var_4931_object); // 0x306f NEW_2
	var_4937_bool = var_4930_bool == 0; // 0x3071 Not
	if(var_4937_bool == 0) goto Label_12407; // 0x3072 JumpB
	var_4938_int = 0; var_4939_float = 0; // 0x3073 PushV
	var_4939_float = var_4540_float; // 0x3074 Mov
	func_9727(var_4938_int, var_4939_float); // 0x3075 NEW_2
	
Label_12407:
	var_4944_int = 45093; // 0x3077 PushI
	var_4945_bool = var_4539_int == var_4944_int; // 0x3078 Eq
	if(var_4945_bool == 0) goto Label_12414; // 0x3079 JumpB
	var_4946_int = 0; var_4947_float = 0; // 0x307a PushV
	var_4947_float = var_4540_float; // 0x307b Mov
	func_9700(var_4946_int, var_4947_float); // 0x307c NEW_2
	
Label_12414:
	var_4952_int = 45111; // 0x307e PushI
	var_4953_bool = var_4539_int == var_4952_int; // 0x307f Eq
	if(var_4953_bool == 0) goto Label_12421; // 0x3080 JumpB
	var_4954_int = 0; var_4955_float = 0; // 0x3081 PushV
	var_4955_float = var_4540_float; // 0x3082 Mov
	func_9763(var_4954_int, var_4955_float); // 0x3083 NEW_2
	
Label_12421:
	var_4960_int = 45112; // 0x3085 PushI
	var_4961_bool = var_4539_int == var_4960_int; // 0x3086 Eq
	if(var_4961_bool == 0) goto Label_12428; // 0x3087 JumpB
	var_4962_int = 0; var_4963_float = 0; // 0x3088 PushV
	var_4963_float = var_4540_float; // 0x3089 Mov
	func_9745(var_4962_int, var_4963_float); // 0x308a NEW_2
	
Label_12428:
	var_4968_int = 45113; // 0x308c PushI
	var_4969_bool = var_4539_int == var_4968_int; // 0x308d Eq
	if(var_4969_bool == 0) goto Label_12435; // 0x308e JumpB
	var_4970_int = 0; var_4971_float = 0; // 0x308f PushV
	var_4971_float = var_4540_float; // 0x3090 Mov
	func_9826(var_4970_int, var_4971_float); // 0x3091 NEW_2
	
Label_12435:
	var_4976_int = 45067; // 0x3093 PushI
	var_4977_bool = var_4539_int == var_4976_int; // 0x3094 Eq
	if(var_4977_bool == 0) goto Label_12450; // 0x3095 JumpB
	var_4978_bool = 0; var_4979_object = Obj(); // 0x3096 PushV
	var_4980_object = GlobalVars[16]; // 0x3097 PushGE
	var_4979_object = var_4980_object; // 0x3098 Mov
	func_11780(var_4979_object); // 0x309a NEW_2
	var_4985_bool = var_4978_bool == 0; // 0x309c Not
	if(var_4985_bool == 0) goto Label_12450; // 0x309d JumpB
	var_4986_int = 0; var_4987_float = 0; // 0x309e PushV
	var_4987_float = var_4540_float; // 0x309f Mov
	func_9835(var_4986_int, var_4987_float); // 0x30a0 NEW_2
	
Label_12450:
	var_4992_int = 45066; // 0x30a2 PushI
	var_4993_bool = var_4539_int == var_4992_int; // 0x30a3 Eq
	if(var_4993_bool == 0) goto Label_12471; // 0x30a4 JumpB
	var_4994_object = Obj(); var_4995_object = Obj(); // 0x30a5 PushV
	var_4996_object = GlobalVars[16]; // 0x30a6 PushGE
	var_4994_object = var_4996_object; // 0x30a7 Mov
	var_4997_object = GlobalVars[16]; // 0x30a9 PushGE
	var_4995_object = var_4997_object; // 0x30aa Mov
	func_10743(); // 0x30ac NEW_2
	var_5015_bool = 0; var_5016_string = ""; var_5017_string = ""; // 0x30ae PushV
	var_5016_string = "quest_b5_01"; // 0x30af MovS
	var_5017_string = "cleanup"; // 0x30b0 MovS
	func_189(var_5015_bool, var_5016_string, var_5017_string); // 0x30b1 NEW_2
	var_5018_object = Obj(); var_5019_string = ""; // 0x30b3 PushV
	var_5019_string = "quest_b6_01"; // 0x30b4 MovS
	func_111(var_5018_object, var_5019_string); // 0x30b5 NEW_2
	
Label_12471:
	var_5020_int = 45079; // 0x30b7 PushI
	var_5021_bool = var_4539_int == var_5020_int; // 0x30b8 Eq
	if(var_5021_bool == 0) goto Label_12483; // 0x30b9 JumpB
	var_5022_object = Obj(); var_5023_object = Obj(); // 0x30ba PushV
	var_5024_object = GlobalVars[16]; // 0x30bb PushGE
	var_5022_object = var_5024_object; // 0x30bc Mov
	var_5025_object = GlobalVars[16]; // 0x30be PushGE
	var_5023_object = var_5025_object; // 0x30bf Mov
	func_11450(); // 0x30c1 NEW_2
	
Label_12483:
	var_5028_int = 45080; // 0x30c3 PushI
	var_5029_bool = var_4539_int == var_5028_int; // 0x30c4 Eq
	if(var_5029_bool == 0) goto Label_12508; // 0x30c5 JumpB
	var_5030_object = Obj(); var_5031_object = Obj(); // 0x30c6 PushV
	var_5032_object = GlobalVars[16]; // 0x30c7 PushGE
	var_5030_object = var_5032_object; // 0x30c8 Mov
	var_5033_object = GlobalVars[16]; // 0x30ca PushGE
	var_5031_object = var_5033_object; // 0x30cb Mov
	func_10849(); // 0x30cd NEW_2
	var_5061_bool = 0; var_5062_string = ""; var_5063_string = ""; // 0x30cf PushV
	var_5062_string = "quest_b7_01"; // 0x30d0 MovS
	var_5063_string = "cleanup"; // 0x30d1 MovS
	func_189(var_5061_bool, var_5062_string, var_5063_string); // 0x30d2 NEW_2
	var_5064_object = Obj(); var_5065_string = ""; // 0x30d4 PushV
	var_5065_string = "quest_b8_01"; // 0x30d5 MovS
	func_111(var_5064_object, var_5065_string); // 0x30d6 NEW_2
	var_5066_object = Obj(); var_5067_string = ""; // 0x30d8 PushV
	var_5067_string = "quest_b8_03"; // 0x30d9 MovS
	func_111(var_5066_object, var_5067_string); // 0x30da NEW_2
	
Label_12508:
	var_5068_int = 45065; // 0x30dc PushI
	var_5069_bool = var_4539_int == var_5068_int; // 0x30dd Eq
	if(var_5069_bool == 0) goto Label_12529; // 0x30de JumpB
	var_5070_object = Obj(); var_5071_object = Obj(); // 0x30df PushV
	var_5072_object = GlobalVars[16]; // 0x30e0 PushGE
	var_5070_object = var_5072_object; // 0x30e1 Mov
	var_5073_object = GlobalVars[16]; // 0x30e3 PushGE
	var_5071_object = var_5073_object; // 0x30e4 Mov
	func_10695(); // 0x30e6 NEW_2
	var_5093_bool = 0; var_5094_string = ""; var_5095_string = ""; // 0x30e8 PushV
	var_5094_string = "quest_b4_01"; // 0x30e9 MovS
	var_5095_string = "cleanup"; // 0x30ea MovS
	func_189(var_5093_bool, var_5094_string, var_5095_string); // 0x30eb NEW_2
	var_5096_object = Obj(); var_5097_string = ""; // 0x30ed PushV
	var_5097_string = "quest_b5_01"; // 0x30ee MovS
	func_111(var_5096_object, var_5097_string); // 0x30ef NEW_2
	
Label_12529:
	var_5098_int = 45062; // 0x30f1 PushI
	var_5099_bool = var_4539_int == var_5098_int; // 0x30f2 Eq
	if(var_5099_bool == 0) goto Label_12535; // 0x30f3 JumpB
	var_5100_string = "army.wmv"; // 0x30f4 PushS
	QueuePlayMovie(var_5100_string); // 0x30f5 Func
	
Label_12535:
	var_5101_int = 45061; // 0x30f7 PushI
	var_5102_bool = var_4539_int == var_5101_int; // 0x30f8 Eq
	if(var_5102_bool == 0) goto Label_12541; // 0x30f9 JumpB
	var_5103_string = "aglaja.wmv"; // 0x30fa PushS
	QueuePlayMovie(var_5103_string); // 0x30fb Func
	
Label_12541:
	var_5104_int = 45076; // 0x30fd PushI
	var_5105_bool = var_4539_int == var_5104_int; // 0x30fe Eq
	if(var_5105_bool == 0) goto Label_12555; // 0x30ff JumpB
	var_5106_bool = 0; var_5107_object = Obj(); // 0x3100 PushV
	var_5108_object = GlobalVars[16]; // 0x3101 PushGE
	var_5107_object = var_5108_object; // 0x3102 Mov
	func_11862(var_5107_object); // 0x3104 NEW_2
	if(var_5106_bool == 0) goto Label_12555; // 0x3106 JumpB
	var_5113_int = 0; var_5114_float = 0; // 0x3107 PushV
	var_5114_float = var_4540_float; // 0x3108 Mov
	func_9790(var_5113_int, var_5114_float); // 0x3109 NEW_2
	
Label_12555:
	var_5119_int = 45077; // 0x310b PushI
	var_5120_bool = var_4539_int == var_5119_int; // 0x310c Eq
	if(var_5120_bool == 0) goto Label_12570; // 0x310d JumpB
	var_5121_bool = 0; var_5122_object = Obj(); // 0x310e PushV
	var_5123_object = GlobalVars[16]; // 0x310f PushGE
	var_5122_object = var_5123_object; // 0x3110 Mov
	func_11898(var_5122_object); // 0x3112 NEW_2
	var_5128_bool = var_5121_bool == 0; // 0x3114 Not
	if(var_5128_bool == 0) goto Label_12570; // 0x3115 JumpB
	var_5129_int = 0; var_5130_float = 0; // 0x3116 PushV
	var_5130_float = var_4540_float; // 0x3117 Mov
	func_9799(var_5129_int, var_5130_float); // 0x3118 NEW_2
	
Label_12570:
	var_5135_int = 45074; // 0x311a PushI
	var_5136_bool = var_4539_int == var_5135_int; // 0x311b Eq
	if(var_5136_bool == 0) goto Label_12582; // 0x311c JumpB
	var_5137_object = Obj(); var_5138_object = Obj(); // 0x311d PushV
	var_5139_object = GlobalVars[16]; // 0x311e PushGE
	var_5137_object = var_5139_object; // 0x311f Mov
	var_5140_object = GlobalVars[16]; // 0x3121 PushGE
	var_5138_object = var_5140_object; // 0x3122 Mov
	func_10253(); // 0x3124 NEW_2
	
Label_12582:
	var_5143_int = 45075; // 0x3126 PushI
	var_5144_bool = var_4539_int == var_5143_int; // 0x3127 Eq
	if(var_5144_bool == 0) goto Label_12597; // 0x3128 JumpB
	var_5145_bool = 0; var_5146_object = Obj(); // 0x3129 PushV
	var_5147_object = GlobalVars[16]; // 0x312a PushGE
	var_5146_object = var_5147_object; // 0x312b Mov
	func_11874(var_5146_object); // 0x312d NEW_2
	var_5152_bool = var_5145_bool == 0; // 0x312f Not
	if(var_5152_bool == 0) goto Label_12597; // 0x3130 JumpB
	var_5153_int = 0; var_5154_float = 0; // 0x3131 PushV
	var_5154_float = var_4540_float; // 0x3132 Mov
	func_9817(var_5153_int, var_5154_float); // 0x3133 NEW_2
	
Label_12597:
	var_5159_int = 45078; // 0x3135 PushI
	var_5160_bool = var_4539_int == var_5159_int; // 0x3136 Eq
	if(var_5160_bool == 0) goto Label_12627; // 0x3137 JumpB
	var_5161_object = Obj(); var_5162_object = Obj(); // 0x3138 PushV
	var_5163_object = GlobalVars[16]; // 0x3139 PushGE
	var_5161_object = var_5163_object; // 0x313a Mov
	var_5164_object = GlobalVars[16]; // 0x313c PushGE
	var_5162_object = var_5164_object; // 0x313d Mov
	func_11420(); // 0x313f NEW_2
	var_5167_object = Obj(); var_5168_object = Obj(); // 0x3141 PushV
	var_5169_object = GlobalVars[16]; // 0x3142 PushGE
	var_5167_object = var_5169_object; // 0x3143 Mov
	var_5170_object = GlobalVars[16]; // 0x3145 PushGE
	var_5168_object = var_5170_object; // 0x3146 Mov
	func_10787(); // 0x3148 NEW_2
	var_5194_bool = 0; var_5195_string = ""; var_5196_string = ""; // 0x314a PushV
	var_5195_string = "quest_b6_01"; // 0x314b MovS
	var_5196_string = "cleanup"; // 0x314c MovS
	func_189(var_5194_bool, var_5195_string, var_5196_string); // 0x314d NEW_2
	var_5197_object = Obj(); var_5198_string = ""; // 0x314f PushV
	var_5198_string = "quest_b7_01"; // 0x3150 MovS
	func_111(var_5197_object, var_5198_string); // 0x3151 NEW_2
	
Label_12627:
	var_5199_int = 45114; // 0x3153 PushI
	var_5200_bool = var_4539_int == var_5199_int; // 0x3154 Eq
	if(var_5200_bool == 0) goto Label_12641; // 0x3155 JumpB
	var_5201_bool = 0; var_5202_object = Obj(); // 0x3156 PushV
	var_5203_object = GlobalVars[16]; // 0x3157 PushGE
	var_5202_object = var_5203_object; // 0x3158 Mov
	func_11886(var_5202_object); // 0x315a NEW_2
	if(var_5201_bool == 0) goto Label_12641; // 0x315c JumpB
	var_5208_int = 0; var_5209_float = 0; // 0x315d PushV
	var_5209_float = var_4540_float; // 0x315e Mov
	func_9781(var_5208_int, var_5209_float); // 0x315f NEW_2
	
Label_12641:
	var_5214_int = 45115; // 0x3161 PushI
	var_5215_bool = var_4539_int == var_5214_int; // 0x3162 Eq
	if(var_5215_bool == 0) goto Label_12648; // 0x3163 JumpB
	var_5216_int = 0; var_5217_float = 0; // 0x3164 PushV
	var_5217_float = var_4540_float; // 0x3165 Mov
	func_9898(var_5216_int, var_5217_float); // 0x3166 NEW_2
	
Label_12648:
	var_5222_int = 45116; // 0x3168 PushI
	var_5223_bool = var_4539_int == var_5222_int; // 0x3169 Eq
	if(var_5223_bool == 0) goto Label_12663; // 0x316a JumpB
	var_5224_bool = 0; var_5225_object = Obj(); // 0x316b PushV
	var_5226_object = GlobalVars[16]; // 0x316c PushGE
	var_5225_object = var_5226_object; // 0x316d Mov
	func_11792(var_5225_object); // 0x316f NEW_2
	var_5231_bool = var_5224_bool == 0; // 0x3171 Not
	if(var_5231_bool == 0) goto Label_12663; // 0x3172 JumpB
	var_5232_int = 0; var_5233_float = 0; // 0x3173 PushV
	var_5233_float = var_4540_float; // 0x3174 Mov
	func_9844(var_5232_int, var_5233_float); // 0x3175 NEW_2
	
Label_12663:
	var_5238_int = 45117; // 0x3177 PushI
	var_5239_bool = var_4539_int == var_5238_int; // 0x3178 Eq
	if(var_5239_bool == 0) goto Label_12670; // 0x3179 JumpB
	var_5240_int = 0; var_5241_float = 0; // 0x317a PushV
	var_5241_float = var_4540_float; // 0x317b Mov
	func_9808(var_5240_int, var_5241_float); // 0x317c NEW_2
	
Label_12670:
	var_5246_int = 45118; // 0x317e PushI
	var_5247_bool = var_4539_int == var_5246_int; // 0x317f Eq
	if(var_5247_bool == 0) goto Label_12677; // 0x3180 JumpB
	var_5248_int = 0; var_5249_float = 0; // 0x3181 PushV
	var_5249_float = var_4540_float; // 0x3182 Mov
	func_9871(var_5248_int, var_5249_float); // 0x3183 NEW_2
	
Label_12677:
	var_5254_int = 45119; // 0x3185 PushI
	var_5255_bool = var_4539_int == var_5254_int; // 0x3186 Eq
	if(var_5255_bool == 0) goto Label_12684; // 0x3187 JumpB
	var_5256_int = 0; var_5257_float = 0; // 0x3188 PushV
	var_5257_float = var_4540_float; // 0x3189 Mov
	func_9925(var_5256_int, var_5257_float); // 0x318a NEW_2
	
Label_12684:
	var_5262_int = 45120; // 0x318c PushI
	var_5263_bool = var_4539_int == var_5262_int; // 0x318d Eq
	if(var_5263_bool == 0) goto Label_12691; // 0x318e JumpB
	var_5264_int = 0; var_5265_float = 0; // 0x318f PushV
	var_5265_float = var_4540_float; // 0x3190 Mov
	func_9979(var_5264_int, var_5265_float); // 0x3191 NEW_2
	
Label_12691:
	var_5270_int = 45121; // 0x3193 PushI
	var_5271_bool = var_4539_int == var_5270_int; // 0x3194 Eq
	if(var_5271_bool == 0) goto Label_12698; // 0x3195 JumpB
	var_5272_int = 0; var_5273_float = 0; // 0x3196 PushV
	var_5273_float = var_4540_float; // 0x3197 Mov
	func_10033(var_5272_int, var_5273_float); // 0x3198 NEW_2
	
Label_12698:
	var_5278_int = 45122; // 0x319a PushI
	var_5279_bool = var_4539_int == var_5278_int; // 0x319b Eq
	if(var_5279_bool == 0) goto Label_12705; // 0x319c JumpB
	var_5280_int = 0; var_5281_float = 0; // 0x319d PushV
	var_5281_float = var_4540_float; // 0x319e Mov
	func_10069(var_5280_int, var_5281_float); // 0x319f NEW_2
	
Label_12705:
	var_5286_int = 45123; // 0x31a1 PushI
	var_5287_bool = var_4539_int == var_5286_int; // 0x31a2 Eq
	if(var_5287_bool == 0) goto Label_12719; // 0x31a3 JumpB
	var_5288_bool = 0; var_5289_object = Obj(); // 0x31a4 PushV
	var_5290_object = GlobalVars[16]; // 0x31a5 PushGE
	var_5289_object = var_5290_object; // 0x31a6 Mov
	func_11838(var_5289_object); // 0x31a8 NEW_2
	if(var_5288_bool == 0) goto Label_12719; // 0x31aa JumpB
	var_5295_int = 0; var_5296_float = 0; // 0x31ab PushV
	var_5296_float = var_4540_float; // 0x31ac Mov
	func_9907(var_5295_int, var_5296_float); // 0x31ad NEW_2
	
Label_12719:
	var_5301_int = 45124; // 0x31af PushI
	var_5302_bool = var_4539_int == var_5301_int; // 0x31b0 Eq
	if(var_5302_bool == 0) goto Label_12734; // 0x31b1 JumpB
	var_5303_bool = 0; var_5304_object = Obj(); // 0x31b2 PushV
	var_5305_object = GlobalVars[16]; // 0x31b3 PushGE
	var_5304_object = var_5305_object; // 0x31b4 Mov
	func_11588(var_5304_object); // 0x31b6 NEW_2
	var_5310_bool = var_5303_bool == 0; // 0x31b8 Not
	if(var_5310_bool == 0) goto Label_12734; // 0x31b9 JumpB
	var_5311_int = 0; var_5312_float = 0; // 0x31ba PushV
	var_5312_float = var_4540_float; // 0x31bb Mov
	func_9934(var_5311_int, var_5312_float); // 0x31bc NEW_2
	
Label_12734:
	var_5317_int = 45125; // 0x31be PushI
	var_5318_bool = var_4539_int == var_5317_int; // 0x31bf Eq
	if(var_5318_bool == 0) goto Label_12741; // 0x31c0 JumpB
	var_5319_int = 0; var_5320_float = 0; // 0x31c1 PushV
	var_5320_float = var_4540_float; // 0x31c2 Mov
	func_9916(var_5319_int, var_5320_float); // 0x31c3 NEW_2
	
Label_12741:
	var_5325_int = 45126; // 0x31c5 PushI
	var_5326_bool = var_4539_int == var_5325_int; // 0x31c6 Eq
	if(var_5326_bool == 0) goto Label_12755; // 0x31c7 JumpB
	var_5327_bool = 0; var_5328_object = Obj(); // 0x31c8 PushV
	var_5329_object = GlobalVars[16]; // 0x31c9 PushGE
	var_5328_object = var_5329_object; // 0x31ca Mov
	func_11850(var_5328_object); // 0x31cc NEW_2
	if(var_5327_bool == 0) goto Label_12755; // 0x31ce JumpB
	var_5334_int = 0; var_5335_float = 0; // 0x31cf PushV
	var_5335_float = var_4540_float; // 0x31d0 Mov
	func_9961(var_5334_int, var_5335_float); // 0x31d1 NEW_2
	
Label_12755:
	var_5340_int = 45127; // 0x31d3 PushI
	var_5341_bool = var_4539_int == var_5340_int; // 0x31d4 Eq
	if(var_5341_bool == 0) goto Label_12762; // 0x31d5 JumpB
	var_5342_int = 0; var_5343_float = 0; // 0x31d6 PushV
	var_5343_float = var_4540_float; // 0x31d7 Mov
	func_9970(var_5342_int, var_5343_float); // 0x31d8 NEW_2
	
Label_12762:
	var_5348_int = 45128; // 0x31da PushI
	var_5349_bool = var_4539_int == var_5348_int; // 0x31db Eq
	if(var_5349_bool == 0) goto Label_12776; // 0x31dc JumpB
	var_5350_bool = 0; var_5351_object = Obj(); // 0x31dd PushV
	var_5352_object = GlobalVars[16]; // 0x31de PushGE
	var_5351_object = var_5352_object; // 0x31df Mov
	func_11600(var_5351_object); // 0x31e1 NEW_2
	if(var_5350_bool == 0) goto Label_12776; // 0x31e3 JumpB
	var_5357_int = 0; var_5358_float = 0; // 0x31e4 PushV
	var_5358_float = var_4540_float; // 0x31e5 Mov
	func_10015(var_5357_int, var_5358_float); // 0x31e6 NEW_2
	
Label_12776:
	var_5363_int = 45129; // 0x31e8 PushI
	var_5364_bool = var_4539_int == var_5363_int; // 0x31e9 Eq
	if(var_5364_bool == 0) goto Label_12783; // 0x31ea JumpB
	var_5365_int = 0; var_5366_float = 0; // 0x31eb PushV
	var_5366_float = var_4540_float; // 0x31ec Mov
	func_10024(var_5365_int, var_5366_float); // 0x31ed NEW_2
	
Label_12783:
	var_5371_int = 45130; // 0x31ef PushI
	var_5372_bool = var_4539_int == var_5371_int; // 0x31f0 Eq
	if(var_5372_bool == 0) goto Label_12797; // 0x31f1 JumpB
	var_5373_bool = 0; var_5374_object = Obj(); // 0x31f2 PushV
	var_5375_object = GlobalVars[16]; // 0x31f3 PushGE
	var_5374_object = var_5375_object; // 0x31f4 Mov
	func_11910(var_5374_object); // 0x31f6 NEW_2
	if(var_5373_bool == 0) goto Label_12797; // 0x31f8 JumpB
	var_5380_int = 0; var_5381_float = 0; // 0x31f9 PushV
	var_5381_float = var_4540_float; // 0x31fa Mov
	func_10060(var_5380_int, var_5381_float); // 0x31fb NEW_2
	
Label_12797:
	var_5386_int = 45131; // 0x31fd PushI
	var_5387_bool = var_4539_int == var_5386_int; // 0x31fe Eq
	if(var_5387_bool == 0) goto Label_12811; // 0x31ff JumpB
	var_5388_bool = 0; var_5389_object = Obj(); // 0x3200 PushV
	var_5390_object = GlobalVars[16]; // 0x3201 PushGE
	var_5389_object = var_5390_object; // 0x3202 Mov
	func_11492(var_5389_object); // 0x3204 NEW_2
	if(var_5388_bool == 0) goto Label_12811; // 0x3206 JumpB
	var_5395_int = 0; var_5396_float = 0; // 0x3207 PushV
	var_5396_float = var_4540_float; // 0x3208 Mov
	func_10078(var_5395_int, var_5396_float); // 0x3209 NEW_2
	
Label_12811:
	var_5401_int = 45132; // 0x320b PushI
	var_5402_bool = var_4539_int == var_5401_int; // 0x320c Eq
	if(var_5402_bool == 0) goto Label_12818; // 0x320d JumpB
	var_5403_int = 0; var_5404_float = 0; // 0x320e PushV
	var_5404_float = var_4540_float; // 0x320f Mov
	func_10087(var_5403_int, var_5404_float); // 0x3210 NEW_2
	
Label_12818:
	var_5409_int = 45133; // 0x3212 PushI
	var_5410_bool = var_4539_int == var_5409_int; // 0x3213 Eq
	if(var_5410_bool == 0) goto Label_12832; // 0x3214 JumpB
	var_5411_bool = 0; var_5412_object = Obj(); // 0x3215 PushV
	var_5413_object = GlobalVars[16]; // 0x3216 PushGE
	var_5412_object = var_5413_object; // 0x3217 Mov
	func_11504(var_5412_object); // 0x3219 NEW_2
	if(var_5411_bool == 0) goto Label_12832; // 0x321b JumpB
	var_5418_int = 0; var_5419_float = 0; // 0x321c PushV
	var_5419_float = var_4540_float; // 0x321d Mov
	func_10051(var_5418_int, var_5419_float); // 0x321e NEW_2
	
Label_12832:
	var_5424_int = 45134; // 0x3220 PushI
	var_5425_bool = var_4539_int == var_5424_int; // 0x3221 Eq
	if(var_5425_bool == 0) goto Label_12839; // 0x3222 JumpB
	var_5426_int = 0; var_5427_float = 0; // 0x3223 PushV
	var_5427_float = var_4540_float; // 0x3224 Mov
	func_10096(var_5426_int, var_5427_float); // 0x3225 NEW_2
	
Label_12839:
	var_5432_int = 45135; // 0x3227 PushI
	var_5433_bool = var_4539_int == var_5432_int; // 0x3228 Eq
	if(var_5433_bool == 0) goto Label_12865; // 0x3229 JumpB
	var_5434_bool = 0; // 0x322a PushV
	var_5434_bool = 0; // 0x322b MovB
	var_5435_bool = 0; var_5436_object = Obj(); // 0x322c PushV
	var_5437_object = GlobalVars[16]; // 0x322d PushGE
	var_5436_object = var_5437_object; // 0x322e Mov
	func_11516(var_5436_object); // 0x3230 NEW_2
	if(var_5435_bool == 0) goto Label_12860; // 0x3232 JumpB
	var_5442_bool = 0; var_5443_object = Obj(); // 0x3233 PushV
	var_5444_object = GlobalVars[16]; // 0x3234 PushGE
	var_5443_object = var_5444_object; // 0x3235 Mov
	func_11816(var_5443_object); // 0x3237 NEW_2
	var_5449_bool = var_5442_bool == 0; // 0x3239 Not
	if(var_5449_bool == 0) goto Label_12860; // 0x323a JumpB
	var_5434_bool = 1; // 0x323b MovB
	
Label_12860:
	if(var_5434_bool == 0) goto Label_12865; // 0x323c JumpB
	var_5450_int = 0; var_5451_float = 0; // 0x323d PushV
	var_5451_float = var_4540_float; // 0x323e Mov
	func_10105(var_5450_int, var_5451_float); // 0x323f NEW_2
	
Label_12865:
	var_5456_int = 45136; // 0x3241 PushI
	var_5457_bool = var_4539_int == var_5456_int; // 0x3242 Eq
	if(var_5457_bool == 0) goto Label_12872; // 0x3243 JumpB
	var_5458_int = 0; var_5459_float = 0; // 0x3244 PushV
	var_5459_float = var_4540_float; // 0x3245 Mov
	func_10132(var_5458_int, var_5459_float); // 0x3246 NEW_2
	
Label_12872:
	var_5464_int = 45137; // 0x3248 PushI
	var_5465_bool = var_4539_int == var_5464_int; // 0x3249 Eq
	if(var_5465_bool == 0) goto Label_12879; // 0x324a JumpB
	var_5466_int = 0; var_5467_float = 0; // 0x324b PushV
	var_5467_float = var_4540_float; // 0x324c Mov
	func_10159(var_5466_int, var_5467_float); // 0x324d NEW_2
	
Label_12879:
	var_5472_int = 45138; // 0x324f PushI
	var_5473_bool = var_4539_int == var_5472_int; // 0x3250 Eq
	if(var_5473_bool == 0) goto Label_12886; // 0x3251 JumpB
	var_5474_int = 0; var_5475_float = 0; // 0x3252 PushV
	var_5475_float = var_4540_float; // 0x3253 Mov
	func_10141(var_5474_int, var_5475_float); // 0x3254 NEW_2
	
Label_12886:
	var_5480_int = 45139; // 0x3256 PushI
	var_5481_bool = var_4539_int == var_5480_int; // 0x3257 Eq
	if(var_5481_bool == 0) goto Label_12893; // 0x3258 JumpB
	var_5482_int = 0; var_5483_float = 0; // 0x3259 PushV
	var_5483_float = var_4540_float; // 0x325a Mov
	func_9601(var_5482_int, var_5483_float); // 0x325b NEW_2
	
Label_12893:
	var_5488_int = 45140; // 0x325d PushI
	var_5489_bool = var_4539_int == var_5488_int; // 0x325e Eq
	if(var_5489_bool == 0) goto Label_12900; // 0x325f JumpB
	var_5490_int = 0; var_5491_float = 0; // 0x3260 PushV
	var_5491_float = var_4540_float; // 0x3261 Mov
	func_9646(var_5490_int, var_5491_float); // 0x3262 NEW_2
	
Label_12900:
	var_5496_int = 45141; // 0x3264 PushI
	var_5497_bool = var_4539_int == var_5496_int; // 0x3265 Eq
	if(var_5497_bool == 0) goto Label_12907; // 0x3266 JumpB
	var_5498_int = 0; var_5499_float = 0; // 0x3267 PushV
	var_5499_float = var_4540_float; // 0x3268 Mov
	func_9673(var_5498_int, var_5499_float); // 0x3269 NEW_2
	
Label_12907:
	var_5504_int = 45142; // 0x326b PushI
	var_5505_bool = var_4539_int == var_5504_int; // 0x326c Eq
	if(var_5505_bool == 0) goto Label_12914; // 0x326d JumpB
	var_5506_int = 0; var_5507_float = 0; // 0x326e PushV
	var_5507_float = var_4540_float; // 0x326f Mov
	func_9637(var_5506_int, var_5507_float); // 0x3270 NEW_2
	
Label_12914:
	var_5512_int = 45143; // 0x3272 PushI
	var_5513_bool = var_4539_int == var_5512_int; // 0x3273 Eq
	if(var_5513_bool == 0) goto Label_12921; // 0x3274 JumpB
	var_5514_int = 0; var_5515_float = 0; // 0x3275 PushV
	var_5515_float = var_4540_float; // 0x3276 Mov
	func_9655(var_5514_int, var_5515_float); // 0x3277 NEW_2
	
Label_12921:
	var_5520_int = 45144; // 0x3279 PushI
	var_5521_bool = var_4539_int == var_5520_int; // 0x327a Eq
	if(var_5521_bool == 0) goto Label_12928; // 0x327b JumpB
	var_5522_int = 0; var_5523_float = 0; // 0x327c PushV
	var_5523_float = var_4540_float; // 0x327d Mov
	func_9997(var_5522_int, var_5523_float); // 0x327e NEW_2
	
Label_12928:
	var_5528_int = 45262; // 0x3280 PushI
	var_5529_bool = var_4539_int == var_5528_int; // 0x3281 Eq
	if(var_5529_bool == 0) goto Label_12940; // 0x3282 JumpB
	var_5530_object = Obj(); var_5531_object = Obj(); // 0x3283 PushV
	var_5532_object = GlobalVars[16]; // 0x3284 PushGE
	var_5530_object = var_5532_object; // 0x3285 Mov
	var_5533_object = GlobalVars[16]; // 0x3287 PushGE
	var_5531_object = var_5533_object; // 0x3288 Mov
	func_11328(); // 0x328a NEW_2
	
Label_12940:
	var_5542_int = 45263; // 0x328c PushI
	var_5543_bool = var_4539_int == var_5542_int; // 0x328d Eq
	if(var_5543_bool == 0) goto Label_12952; // 0x328e JumpB
	var_5544_object = Obj(); var_5545_object = Obj(); // 0x328f PushV
	var_5546_object = GlobalVars[16]; // 0x3290 PushGE
	var_5544_object = var_5546_object; // 0x3291 Mov
	var_5547_object = GlobalVars[16]; // 0x3293 PushGE
	var_5545_object = var_5547_object; // 0x3294 Mov
	func_11345(); // 0x3296 NEW_2
	
Label_12952:
	var_5556_int = 45147; // 0x3298 PushI
	var_5557_bool = var_4539_int == var_5556_int; // 0x3299 Eq
	if(var_5557_bool == 0) goto Label_12990; // 0x329a JumpB
	var_5558_bool = 0; // 0x329b PushV
	var_5558_bool = 0; // 0x329c MovB
	var_5559_bool = 0; // 0x329d PushV
	var_5559_bool = 0; // 0x329e MovB
	var_5560_bool = 0; var_5561_object = Obj(); // 0x329f PushV
	var_5562_object = GlobalVars[16]; // 0x32a0 PushGE
	var_5561_object = var_5562_object; // 0x32a1 Mov
	func_11612(var_5561_object); // 0x32a3 NEW_2
	var_5567_bool = var_5560_bool == 0; // 0x32a5 Not
	if(var_5567_bool == 0) goto Label_12975; // 0x32a6 JumpB
	var_5568_bool = 0; var_5569_object = Obj(); // 0x32a7 PushV
	var_5570_object = GlobalVars[16]; // 0x32a8 PushGE
	var_5569_object = var_5570_object; // 0x32a9 Mov
	func_11624(var_5569_object); // 0x32ab NEW_2
	if(var_5568_bool == 0) goto Label_12975; // 0x32ad JumpB
	var_5559_bool = 1; // 0x32ae MovB
	
Label_12975:
	if(var_5559_bool == 0) goto Label_12985; // 0x32af JumpB
	var_5575_bool = 0; var_5576_object = Obj(); // 0x32b0 PushV
	var_5577_object = GlobalVars[16]; // 0x32b1 PushGE
	var_5576_object = var_5577_object; // 0x32b2 Mov
	func_11636(var_5576_object); // 0x32b4 NEW_2
	var_5582_bool = var_5575_bool == 0; // 0x32b6 Not
	if(var_5582_bool == 0) goto Label_12985; // 0x32b7 JumpB
	var_5558_bool = 1; // 0x32b8 MovB
	
Label_12985:
	if(var_5558_bool == 0) goto Label_12990; // 0x32b9 JumpB
	var_5583_int = 0; var_5584_float = 0; // 0x32ba PushV
	var_5584_float = var_4540_float; // 0x32bb Mov
	func_10168(var_5583_int, var_5584_float); // 0x32bc NEW_2
	
Label_12990:
	var_5589_int = 45148; // 0x32be PushI
	var_5590_bool = var_4539_int == var_5589_int; // 0x32bf Eq
	if(var_5590_bool == 0) goto Label_12997; // 0x32c0 JumpB
	var_5591_object = Obj(); var_5592_string = ""; // 0x32c1 PushV
	var_5592_string = "quest_b9_03"; // 0x32c2 MovS
	func_122(var_5591_object, var_5592_string); // 0x32c3 NEW_2
	
Label_12997:
	var_5593_int = 45149; // 0x32c5 PushI
	var_5594_bool = var_4539_int == var_5593_int; // 0x32c6 Eq
	if(var_5594_bool == 0) goto Label_13004; // 0x32c7 JumpB
	var_5595_object = Obj(); var_5596_string = ""; // 0x32c8 PushV
	var_5596_string = "quest_b10_04"; // 0x32c9 MovS
	func_111(var_5595_object, var_5596_string); // 0x32ca NEW_2
	
Label_13004:
	var_5597_int = 45150; // 0x32cc PushI
	var_5598_bool = var_4539_int == var_5597_int; // 0x32cd Eq
	if(var_5598_bool == 0) goto Label_13011; // 0x32ce JumpB
	var_5599_object = Obj(); var_5600_string = ""; // 0x32cf PushV
	var_5600_string = "quest_b11_04"; // 0x32d0 MovS
	func_111(var_5599_object, var_5600_string); // 0x32d1 NEW_2
	
Label_13011:
	var_5601_int = 45151; // 0x32d3 PushI
	var_5602_bool = var_4539_int == var_5601_int; // 0x32d4 Eq
	if(var_5602_bool == 0) goto Label_13025; // 0x32d5 JumpB
	var_5603_bool = 0; var_5604_object = Obj(); // 0x32d6 PushV
	var_5605_object = GlobalVars[16]; // 0x32d7 PushGE
	var_5604_object = var_5605_object; // 0x32d8 Mov
	func_11648(var_5604_object); // 0x32da NEW_2
	if(var_5603_bool == 0) goto Label_13025; // 0x32dc JumpB
	var_5610_int = 0; var_5611_float = 0; // 0x32dd PushV
	var_5611_float = var_4540_float; // 0x32de Mov
	func_9682(var_5610_int, var_5611_float); // 0x32df NEW_2
	
Label_13025:
	var_5616_int = 45152; // 0x32e1 PushI
	var_5617_bool = var_4539_int == var_5616_int; // 0x32e2 Eq
	if(var_5617_bool == 0) goto Label_13039; // 0x32e3 JumpB
	var_5618_bool = 0; var_5619_object = Obj(); // 0x32e4 PushV
	var_5620_object = GlobalVars[16]; // 0x32e5 PushGE
	var_5619_object = var_5620_object; // 0x32e6 Mov
	func_11828(var_5618_bool, var_5619_object); // 0x32e8 NEW_2
	if(var_5618_bool == 0) goto Label_13039; // 0x32ea JumpB
	var_5623_int = 0; var_5624_float = 0; // 0x32eb PushV
	var_5624_float = var_4540_float; // 0x32ec Mov
	func_9529(var_5623_int, var_5624_float); // 0x32ed NEW_2
	
Label_13039:
	var_5629_int = 45153; // 0x32ef PushI
	var_5630_bool = var_4539_int == var_5629_int; // 0x32f0 Eq
	if(var_5630_bool == 0) goto Label_13053; // 0x32f1 JumpB
	var_5631_bool = 0; var_5632_object = Obj(); // 0x32f2 PushV
	var_5633_object = GlobalVars[16]; // 0x32f3 PushGE
	var_5632_object = var_5633_object; // 0x32f4 Mov
	func_11828(var_5631_bool, var_5632_object); // 0x32f6 NEW_2
	if(var_5631_bool == 0) goto Label_13053; // 0x32f8 JumpB
	var_5634_int = 0; var_5635_float = 0; // 0x32f9 PushV
	var_5635_float = var_4540_float; // 0x32fa Mov
	func_9538(var_5634_int, var_5635_float); // 0x32fb NEW_2
	
Label_13053:
	var_5640_int = 45154; // 0x32fd PushI
	var_5641_bool = var_4539_int == var_5640_int; // 0x32fe Eq
	if(var_5641_bool == 0) goto Label_13067; // 0x32ff JumpB
	var_5642_bool = 0; var_5643_object = Obj(); // 0x3300 PushV
	var_5644_object = GlobalVars[16]; // 0x3301 PushGE
	var_5643_object = var_5644_object; // 0x3302 Mov
	func_11828(var_5642_bool, var_5643_object); // 0x3304 NEW_2
	if(var_5642_bool == 0) goto Label_13067; // 0x3306 JumpB
	var_5645_int = 0; var_5646_float = 0; // 0x3307 PushV
	var_5646_float = var_4540_float; // 0x3308 Mov
	func_9547(var_5645_int, var_5646_float); // 0x3309 NEW_2
	
Label_13067:
	var_5651_int = 45155; // 0x330b PushI
	var_5652_bool = var_4539_int == var_5651_int; // 0x330c Eq
	if(var_5652_bool == 0) goto Label_13081; // 0x330d JumpB
	var_5653_bool = 0; var_5654_object = Obj(); // 0x330e PushV
	var_5655_object = GlobalVars[16]; // 0x330f PushGE
	var_5654_object = var_5655_object; // 0x3310 Mov
	func_11828(var_5653_bool, var_5654_object); // 0x3312 NEW_2
	if(var_5653_bool == 0) goto Label_13081; // 0x3314 JumpB
	var_5656_int = 0; var_5657_float = 0; // 0x3315 PushV
	var_5657_float = var_4540_float; // 0x3316 Mov
	func_9556(var_5656_int, var_5657_float); // 0x3317 NEW_2
	
Label_13081:
	var_5662_int = 45156; // 0x3319 PushI
	var_5663_bool = var_4539_int == var_5662_int; // 0x331a Eq
	if(var_5663_bool == 0) goto Label_13095; // 0x331b JumpB
	var_5664_bool = 0; var_5665_object = Obj(); // 0x331c PushV
	var_5666_object = GlobalVars[16]; // 0x331d PushGE
	var_5665_object = var_5666_object; // 0x331e Mov
	func_11828(var_5664_bool, var_5665_object); // 0x3320 NEW_2
	if(var_5664_bool == 0) goto Label_13095; // 0x3322 JumpB
	var_5667_int = 0; var_5668_float = 0; // 0x3323 PushV
	var_5668_float = var_4540_float; // 0x3324 Mov
	func_9565(var_5667_int, var_5668_float); // 0x3325 NEW_2
	
Label_13095:
	var_5673_int = 45157; // 0x3327 PushI
	var_5674_bool = var_4539_int == var_5673_int; // 0x3328 Eq
	if(var_5674_bool == 0) goto Label_13109; // 0x3329 JumpB
	var_5675_bool = 0; var_5676_object = Obj(); // 0x332a PushV
	var_5677_object = GlobalVars[16]; // 0x332b PushGE
	var_5676_object = var_5677_object; // 0x332c Mov
	func_11828(var_5675_bool, var_5676_object); // 0x332e NEW_2
	if(var_5675_bool == 0) goto Label_13109; // 0x3330 JumpB
	var_5678_int = 0; var_5679_float = 0; // 0x3331 PushV
	var_5679_float = var_4540_float; // 0x3332 Mov
	func_9574(var_5678_int, var_5679_float); // 0x3333 NEW_2
	
Label_13109:
	var_5684_int = 45158; // 0x3335 PushI
	var_5685_bool = var_4539_int == var_5684_int; // 0x3336 Eq
	if(var_5685_bool == 0) goto Label_13123; // 0x3337 JumpB
	var_5686_bool = 0; var_5687_object = Obj(); // 0x3338 PushV
	var_5688_object = GlobalVars[16]; // 0x3339 PushGE
	var_5687_object = var_5688_object; // 0x333a Mov
	func_11828(var_5686_bool, var_5687_object); // 0x333c NEW_2
	if(var_5686_bool == 0) goto Label_13123; // 0x333e JumpB
	var_5689_int = 0; var_5690_float = 0; // 0x333f PushV
	var_5690_float = var_4540_float; // 0x3340 Mov
	func_9583(var_5689_int, var_5690_float); // 0x3341 NEW_2
	
Label_13123:
	var_5695_int = 45159; // 0x3343 PushI
	var_5696_bool = var_4539_int == var_5695_int; // 0x3344 Eq
	if(var_5696_bool == 0) goto Label_13137; // 0x3345 JumpB
	var_5697_bool = 0; var_5698_object = Obj(); // 0x3346 PushV
	var_5699_object = GlobalVars[16]; // 0x3347 PushGE
	var_5698_object = var_5699_object; // 0x3348 Mov
	func_11828(var_5697_bool, var_5698_object); // 0x334a NEW_2
	if(var_5697_bool == 0) goto Label_13137; // 0x334c JumpB
	var_5700_int = 0; var_5701_float = 0; // 0x334d PushV
	var_5701_float = var_4540_float; // 0x334e Mov
	func_9592(var_5700_int, var_5701_float); // 0x334f NEW_2
	
Label_13137:
	var_5706_int = 45160; // 0x3351 PushI
	var_5707_bool = var_4539_int == var_5706_int; // 0x3352 Eq
	if(var_5707_bool == 0) goto Label_13151; // 0x3353 JumpB
	var_5708_bool = 0; var_5709_object = Obj(); // 0x3354 PushV
	var_5710_object = GlobalVars[16]; // 0x3355 PushGE
	var_5709_object = var_5710_object; // 0x3356 Mov
	func_11828(var_5708_bool, var_5709_object); // 0x3358 NEW_2
	if(var_5708_bool == 0) goto Label_13151; // 0x335a JumpB
	var_5711_int = 0; var_5712_float = 0; // 0x335b PushV
	var_5712_float = var_4540_float; // 0x335c Mov
	func_9628(var_5711_int, var_5712_float); // 0x335d NEW_2
	
Label_13151:
	var_5717_int = 45161; // 0x335f PushI
	var_5718_bool = var_4539_int == var_5717_int; // 0x3360 Eq
	if(var_5718_bool == 0) goto Label_13165; // 0x3361 JumpB
	var_5719_bool = 0; var_5720_object = Obj(); // 0x3362 PushV
	var_5721_object = GlobalVars[16]; // 0x3363 PushGE
	var_5720_object = var_5721_object; // 0x3364 Mov
	func_11828(var_5719_bool, var_5720_object); // 0x3366 NEW_2
	if(var_5719_bool == 0) goto Label_13165; // 0x3368 JumpB
	var_5722_int = 0; var_5723_float = 0; // 0x3369 PushV
	var_5723_float = var_4540_float; // 0x336a Mov
	func_9691(var_5722_int, var_5723_float); // 0x336b NEW_2
	
Label_13165:
	var_5728_int = 45162; // 0x336d PushI
	var_5729_bool = var_4539_int == var_5728_int; // 0x336e Eq
	if(var_5729_bool == 0) goto Label_13179; // 0x336f JumpB
	var_5730_bool = 0; var_5731_object = Obj(); // 0x3370 PushV
	var_5732_object = GlobalVars[16]; // 0x3371 PushGE
	var_5731_object = var_5732_object; // 0x3372 Mov
	func_11828(var_5730_bool, var_5731_object); // 0x3374 NEW_2
	if(var_5730_bool == 0) goto Label_13179; // 0x3376 JumpB
	var_5733_int = 0; var_5734_float = 0; // 0x3377 PushV
	var_5734_float = var_4540_float; // 0x3378 Mov
	func_9736(var_5733_int, var_5734_float); // 0x3379 NEW_2
	
Label_13179:
	var_5739_int = 45185; // 0x337b PushI
	var_5740_bool = var_4539_int == var_5739_int; // 0x337c Eq
	if(var_5740_bool == 0) goto Label_13194; // 0x337d JumpB
	var_5741_bool = 0; var_5742_object = Obj(); // 0x337e PushV
	var_5743_object = GlobalVars[16]; // 0x337f PushGE
	var_5742_object = var_5743_object; // 0x3380 Mov
	func_11660(var_5742_object); // 0x3382 NEW_2
	var_5748_bool = var_5741_bool == 0; // 0x3384 Not
	if(var_5748_bool == 0) goto Label_13194; // 0x3385 JumpB
	var_5749_int = 0; var_5750_float = 0; // 0x3386 PushV
	var_5750_float = var_4540_float; // 0x3387 Mov
	func_9880(var_5749_int, var_5750_float); // 0x3388 NEW_2
	
Label_13194:
	var_5755_int = 45186; // 0x338a PushI
	var_5756_bool = var_4539_int == var_5755_int; // 0x338b Eq
	if(var_5756_bool == 0) goto Label_13209; // 0x338c JumpB
	var_5757_bool = 0; var_5758_object = Obj(); // 0x338d PushV
	var_5759_object = GlobalVars[16]; // 0x338e PushGE
	var_5758_object = var_5759_object; // 0x338f Mov
	func_11672(var_5758_object); // 0x3391 NEW_2
	var_5764_bool = var_5757_bool == 0; // 0x3393 Not
	if(var_5764_bool == 0) goto Label_13209; // 0x3394 JumpB
	var_5765_int = 0; var_5766_float = 0; // 0x3395 PushV
	var_5766_float = var_4540_float; // 0x3396 Mov
	func_10123(var_5765_int, var_5766_float); // 0x3397 NEW_2
	
Label_13209:
	var_5771_int = 45187; // 0x3399 PushI
	var_5772_bool = var_4539_int == var_5771_int; // 0x339a Eq
	if(var_5772_bool == 0) goto Label_13224; // 0x339b JumpB
	var_5773_bool = 0; var_5774_object = Obj(); // 0x339c PushV
	var_5775_object = GlobalVars[16]; // 0x339d PushGE
	var_5774_object = var_5775_object; // 0x339e Mov
	func_11684(var_5774_object); // 0x33a0 NEW_2
	var_5780_bool = var_5773_bool == 0; // 0x33a2 Not
	if(var_5780_bool == 0) goto Label_13224; // 0x33a3 JumpB
	var_5781_int = 0; var_5782_float = 0; // 0x33a4 PushV
	var_5782_float = var_4540_float; // 0x33a5 Mov
	func_9619(var_5781_int, var_5782_float); // 0x33a6 NEW_2
	
Label_13224:
	var_5787_int = 45188; // 0x33a8 PushI
	var_5788_bool = var_4539_int == var_5787_int; // 0x33a9 Eq
	if(var_5788_bool == 0) goto Label_13239; // 0x33aa JumpB
	var_5789_bool = 0; var_5790_object = Obj(); // 0x33ab PushV
	var_5791_object = GlobalVars[16]; // 0x33ac PushGE
	var_5790_object = var_5791_object; // 0x33ad Mov
	func_11696(var_5790_object); // 0x33af NEW_2
	var_5796_bool = var_5789_bool == 0; // 0x33b1 Not
	if(var_5796_bool == 0) goto Label_13239; // 0x33b2 JumpB
	var_5797_int = 0; var_5798_float = 0; // 0x33b3 PushV
	var_5798_float = var_4540_float; // 0x33b4 Mov
	func_10042(var_5797_int, var_5798_float); // 0x33b5 NEW_2
	
Label_13239:
	var_5803_int = 45189; // 0x33b7 PushI
	var_5804_bool = var_4539_int == var_5803_int; // 0x33b8 Eq
	if(var_5804_bool == 0) goto Label_13254; // 0x33b9 JumpB
	var_5805_bool = 0; var_5806_object = Obj(); // 0x33ba PushV
	var_5807_object = GlobalVars[16]; // 0x33bb PushGE
	var_5806_object = var_5807_object; // 0x33bc Mov
	func_11756(var_5806_object); // 0x33be NEW_2
	var_5812_bool = var_5805_bool == 0; // 0x33c0 Not
	if(var_5812_bool == 0) goto Label_13254; // 0x33c1 JumpB
	var_5813_int = 0; var_5814_float = 0; // 0x33c2 PushV
	var_5814_float = var_4540_float; // 0x33c3 Mov
	func_9988(var_5813_int, var_5814_float); // 0x33c4 NEW_2
	
Label_13254:
	var_5819_int = 45190; // 0x33c6 PushI
	var_5820_bool = var_4539_int == var_5819_int; // 0x33c7 Eq
	if(var_5820_bool == 0) goto Label_13261; // 0x33c8 JumpB
	var_5821_int = 0; var_5822_float = 0; // 0x33c9 PushV
	var_5822_float = var_4540_float; // 0x33ca Mov
	func_9853(var_5821_int, var_5822_float); // 0x33cb NEW_2
	
Label_13261:
	var_5827_int = 45059; // 0x33cd PushI
	var_5828_bool = var_4539_int == var_5827_int; // 0x33ce Eq
	if(var_5828_bool == 0) goto Label_13291; // 0x33cf JumpB
	var_5829_object = Obj(); var_5830_object = Obj(); // 0x33d0 PushV
	var_5831_object = GlobalVars[16]; // 0x33d1 PushGE
	var_5829_object = var_5831_object; // 0x33d2 Mov
	var_5832_object = GlobalVars[16]; // 0x33d4 PushGE
	var_5830_object = var_5832_object; // 0x33d5 Mov
	func_11478(); // 0x33d7 NEW_2
	var_5835_object = Obj(); var_5836_object = Obj(); // 0x33d9 PushV
	var_5837_object = GlobalVars[16]; // 0x33da PushGE
	var_5835_object = var_5837_object; // 0x33db Mov
	var_5838_object = GlobalVars[16]; // 0x33dd PushGE
	var_5836_object = var_5838_object; // 0x33de Mov
	func_10507(); // 0x33e0 NEW_2
	var_5876_bool = 0; var_5877_string = ""; var_5878_string = ""; // 0x33e2 PushV
	var_5877_string = "quest_b2_01"; // 0x33e3 MovS
	var_5878_string = "cleanup"; // 0x33e4 MovS
	func_189(var_5876_bool, var_5877_string, var_5878_string); // 0x33e5 NEW_2
	var_5879_object = Obj(); var_5880_string = ""; // 0x33e7 PushV
	var_5880_string = "quest_b3_01"; // 0x33e8 MovS
	func_111(var_5879_object, var_5880_string); // 0x33e9 NEW_2
	
Label_13291:
	var_5881_int = 45081; // 0x33eb PushI
	var_5882_bool = var_4539_int == var_5881_int; // 0x33ec Eq
	if(var_5882_bool == 0) goto Label_13303; // 0x33ed JumpB
	var_5883_object = Obj(); var_5884_object = Obj(); // 0x33ee PushV
	var_5885_object = GlobalVars[16]; // 0x33ef PushGE
	var_5883_object = var_5885_object; // 0x33f0 Mov
	var_5886_object = GlobalVars[16]; // 0x33f2 PushGE
	var_5884_object = var_5886_object; // 0x33f3 Mov
	func_10283(); // 0x33f5 NEW_2
	
Label_13303:
	var_5889_int = 45082; // 0x33f7 PushI
	var_5890_bool = var_4539_int == var_5889_int; // 0x33f8 Eq
	if(var_5890_bool == 0) goto Label_13328; // 0x33f9 JumpB
	var_5891_object = Obj(); var_5892_object = Obj(); // 0x33fa PushV
	var_5893_object = GlobalVars[16]; // 0x33fb PushGE
	var_5891_object = var_5893_object; // 0x33fc Mov
	var_5894_object = GlobalVars[16]; // 0x33fe PushGE
	var_5892_object = var_5894_object; // 0x33ff Mov
	func_10297(); // 0x3401 NEW_2
	var_5897_int = 0; var_5898_float = 0; // 0x3403 PushV
	var_5898_float = var_4540_float; // 0x3404 Mov
	func_10006(var_5897_int, var_5898_float); // 0x3405 NEW_2
	var_5903_object = Obj(); var_5904_string = ""; // 0x3407 PushV
	var_5904_string = "quest_b6_02"; // 0x3408 MovS
	func_111(var_5903_object, var_5904_string); // 0x3409 NEW_2
	var_5905_bool = 0; var_5906_string = ""; var_5907_string = ""; // 0x340b PushV
	var_5906_string = "quest_b6_02"; // 0x340c MovS
	var_5907_string = "place_klara"; // 0x340d MovS
	func_189(var_5905_bool, var_5906_string, var_5907_string); // 0x340e NEW_2
	
Label_13328:
	var_5908_int = 45083; // 0x3410 PushI
	var_5909_bool = var_4539_int == var_5908_int; // 0x3411 Eq
	if(var_5909_bool == 0) goto Label_13358; // 0x3412 JumpB
	var_5910_object = Obj(); var_5911_object = Obj(); // 0x3413 PushV
	var_5912_object = GlobalVars[16]; // 0x3414 PushGE
	var_5910_object = var_5912_object; // 0x3415 Mov
	var_5913_object = GlobalVars[16]; // 0x3417 PushGE
	var_5911_object = var_5913_object; // 0x3418 Mov
	func_11195(); // 0x341a NEW_2
	var_5932_object = Obj(); var_5933_object = Obj(); // 0x341c PushV
	var_5934_object = GlobalVars[16]; // 0x341d PushGE
	var_5932_object = var_5934_object; // 0x341e Mov
	var_5935_object = GlobalVars[16]; // 0x3420 PushGE
	var_5933_object = var_5935_object; // 0x3421 Mov
	func_10925(); // 0x3423 NEW_2
	var_5957_bool = 0; var_5958_string = ""; var_5959_string = ""; // 0x3425 PushV
	var_5958_string = "quest_b8_01"; // 0x3426 MovS
	var_5959_string = "cleanup"; // 0x3427 MovS
	func_189(var_5957_bool, var_5958_string, var_5959_string); // 0x3428 NEW_2
	var_5960_object = Obj(); var_5961_string = ""; // 0x342a PushV
	var_5961_string = "quest_b9_01"; // 0x342b MovS
	func_122(var_5960_object, var_5961_string); // 0x342c NEW_2
	
Label_13358:
	var_5962_int = 45084; // 0x342e PushI
	var_5963_bool = var_4539_int == var_5962_int; // 0x342f Eq
	if(var_5963_bool == 0) goto Label_13386; // 0x3430 JumpB
	var_5964_string = "b8q03MladVladIsVictim"; // 0x3431 PushS
	GetVariable(var_5964_string, var_4542_int); // 0x3432 Func
	var_5965_int = 0; // 0x3434 PushI
	var_5966_bool = var_4542_int != var_5965_int; // 0x3435 Neq
	if(var_5966_bool == 0) goto Label_13377; // 0x3436 JumpB
	var_5967_bool = 0; var_5968_string = ""; var_5969_string = ""; var_5970_string = ""; // 0x3437 PushV
	var_5968_string = "volonteers_danko"; // 0x3438 MovS
	var_5969_string = "kill"; // 0x3439 MovS
	var_5970_string = "mladvlad"; // 0x343a MovS
	func_201(var_5967_bool, var_5968_string, var_5969_string, var_5970_string); // 0x343b NEW_2
	var_5971_string = "Mlad Vlad is dead"; // 0x343d PushS
	Trace(var_5971_string); // 0x343e Func
	goto Label_13386; // 0x3440 Jump
	
Label_13386:
	var_5972_int = 45085; // 0x344a PushI
	var_5973_bool = var_4539_int == var_5972_int; // 0x344b Eq
	if(var_5973_bool == 0) goto Label_13407; // 0x344c JumpB
	var_5974_object = Obj(); var_5975_object = Obj(); // 0x344d PushV
	var_5976_object = GlobalVars[16]; // 0x344e PushGE
	var_5974_object = var_5976_object; // 0x344f Mov
	var_5977_object = GlobalVars[16]; // 0x3451 PushGE
	var_5975_object = var_5977_object; // 0x3452 Mov
	func_10980(); // 0x3454 NEW_2
	var_6005_bool = 0; var_6006_string = ""; var_6007_string = ""; // 0x3456 PushV
	var_6006_string = "quest_b9_01"; // 0x3457 MovS
	var_6007_string = "cleanup"; // 0x3458 MovS
	func_189(var_6005_bool, var_6006_string, var_6007_string); // 0x3459 NEW_2
	var_6008_object = Obj(); var_6009_string = ""; // 0x345b PushV
	var_6009_string = "quest_b10_01"; // 0x345c MovS
	func_111(var_6008_object, var_6009_string); // 0x345d NEW_2
	
Label_13407:
	var_6010_int = 45191; // 0x345f PushI
	var_6011_bool = var_4539_int == var_6010_int; // 0x3460 Eq
	if(var_6011_bool == 0) goto Label_13414; // 0x3461 JumpB
	var_6012_int = 0; var_6013_float = 0; // 0x3462 PushV
	var_6013_float = var_4540_float; // 0x3463 Mov
	func_9862(var_6012_int, var_6013_float); // 0x3464 NEW_2
	
Label_13414:
	var_6018_int = 45192; // 0x3466 PushI
	var_6019_bool = var_4539_int == var_6018_int; // 0x3467 Eq
	if(var_6019_bool == 0) goto Label_13426; // 0x3468 JumpB
	var_6020_object = Obj(); var_6021_object = Obj(); // 0x3469 PushV
	var_6022_object = GlobalVars[16]; // 0x346a PushGE
	var_6020_object = var_6022_object; // 0x346b Mov
	var_6023_object = GlobalVars[16]; // 0x346d PushGE
	var_6021_object = var_6023_object; // 0x346e Mov
	func_10290(); // 0x3470 NEW_2
	
Label_13426:
	var_6026_int = 45193; // 0x3472 PushI
	var_6027_bool = var_4539_int == var_6026_int; // 0x3473 Eq
	if(var_6027_bool == 0) goto Label_13433; // 0x3474 JumpB
	var_6028_object = Obj(); var_6029_string = ""; // 0x3475 PushV
	var_6029_string = "quest_b1_05"; // 0x3476 MovS
	func_111(var_6028_object, var_6029_string); // 0x3477 NEW_2
	
Label_13433:
	var_6030_int = 45194; // 0x3479 PushI
	var_6031_bool = var_4539_int == var_6030_int; // 0x347a Eq
	if(var_6031_bool == 0) goto Label_13457; // 0x347b JumpB
	var_6032_bool = 0; var_6033_object = Obj(); // 0x347c PushV
	var_6034_object = GlobalVars[16]; // 0x347d PushGE
	var_6033_object = var_6034_object; // 0x347e Mov
	func_11708(var_6033_object); // 0x3480 NEW_2
	var_6039_bool = var_6032_bool == 0; // 0x3482 Not
	if(var_6039_bool == 0) goto Label_13457; // 0x3483 JumpB
	var_6040_object = Obj(); var_6041_object = Obj(); // 0x3484 PushV
	var_6042_object = GlobalVars[16]; // 0x3485 PushGE
	var_6040_object = var_6042_object; // 0x3486 Mov
	var_6043_object = GlobalVars[16]; // 0x3488 PushGE
	var_6041_object = var_6043_object; // 0x3489 Mov
	func_11279(); // 0x348b NEW_2
	var_6054_int = 0; var_6055_float = 0; // 0x348d PushV
	var_6055_float = var_4540_float; // 0x348e Mov
	func_9772(var_6054_int, var_6055_float); // 0x348f NEW_2
	
Label_13457:
	var_6060_int = 45195; // 0x3491 PushI
	var_6061_bool = var_4539_int == var_6060_int; // 0x3492 Eq
	if(var_6061_bool == 0) goto Label_13481; // 0x3493 JumpB
	var_6062_bool = 0; var_6063_object = Obj(); // 0x3494 PushV
	var_6064_object = GlobalVars[16]; // 0x3495 PushGE
	var_6063_object = var_6064_object; // 0x3496 Mov
	func_11720(var_6063_object); // 0x3498 NEW_2
	var_6069_bool = var_6062_bool == 0; // 0x349a Not
	if(var_6069_bool == 0) goto Label_13481; // 0x349b JumpB
	var_6070_object = Obj(); var_6071_object = Obj(); // 0x349c PushV
	var_6072_object = GlobalVars[16]; // 0x349d PushGE
	var_6070_object = var_6072_object; // 0x349e Mov
	var_6073_object = GlobalVars[16]; // 0x34a0 PushGE
	var_6071_object = var_6073_object; // 0x34a1 Mov
	func_11247(); // 0x34a3 NEW_2
	var_6082_int = 0; var_6083_float = 0; // 0x34a5 PushV
	var_6083_float = var_4540_float; // 0x34a6 Mov
	func_9943(var_6082_int, var_6083_float); // 0x34a7 NEW_2
	
Label_13481:
	var_6088_int = 45196; // 0x34a9 PushI
	var_6089_bool = var_4539_int == var_6088_int; // 0x34aa Eq
	if(var_6089_bool == 0) goto Label_13496; // 0x34ab JumpB
	var_6090_bool = 0; var_6091_object = Obj(); // 0x34ac PushV
	var_6092_object = GlobalVars[16]; // 0x34ad PushGE
	var_6091_object = var_6092_object; // 0x34ae Mov
	func_11732(var_6091_object); // 0x34b0 NEW_2
	var_6097_bool = var_6090_bool == 0; // 0x34b2 Not
	if(var_6097_bool == 0) goto Label_13496; // 0x34b3 JumpB
	var_6098_int = 0; var_6099_float = 0; // 0x34b4 PushV
	var_6099_float = var_4540_float; // 0x34b5 Mov
	func_9520(var_6098_int, var_6099_float); // 0x34b6 NEW_2
	
Label_13496:
	var_6104_int = 45197; // 0x34b8 PushI
	var_6105_bool = var_4539_int == var_6104_int; // 0x34b9 Eq
	if(var_6105_bool == 0) goto Label_13520; // 0x34ba JumpB
	var_6106_bool = 0; var_6107_object = Obj(); // 0x34bb PushV
	var_6108_object = GlobalVars[16]; // 0x34bc PushGE
	var_6107_object = var_6108_object; // 0x34bd Mov
	func_11744(var_6107_object); // 0x34bf NEW_2
	var_6113_bool = var_6106_bool == 0; // 0x34c1 Not
	if(var_6113_bool == 0) goto Label_13520; // 0x34c2 JumpB
	var_6114_object = Obj(); var_6115_object = Obj(); // 0x34c3 PushV
	var_6116_object = GlobalVars[16]; // 0x34c4 PushGE
	var_6114_object = var_6116_object; // 0x34c5 Mov
	var_6117_object = GlobalVars[16]; // 0x34c7 PushGE
	var_6115_object = var_6117_object; // 0x34c8 Mov
	func_11263(); // 0x34ca NEW_2
	var_6126_int = 0; var_6127_float = 0; // 0x34cc PushV
	var_6127_float = var_4540_float; // 0x34cd Mov
	func_10150(var_6126_int, var_6127_float); // 0x34ce NEW_2
	
Label_13520:
	var_6132_int = 45198; // 0x34d0 PushI
	var_6133_bool = var_4539_int == var_6132_int; // 0x34d1 Eq
	if(var_6133_bool == 0) goto Label_13540; // 0x34d2 JumpB
	var_6134_bool = 0; var_6135_object = Obj(); // 0x34d3 PushV
	var_6136_object = GlobalVars[16]; // 0x34d4 PushGE
	var_6135_object = var_6136_object; // 0x34d5 Mov
	func_11768(var_6135_object); // 0x34d7 NEW_2
	var_6141_bool = var_6134_bool == 0; // 0x34d9 Not
	if(var_6141_bool == 0) goto Label_13540; // 0x34da JumpB
	var_6142_object = Obj(); var_6143_object = Obj(); // 0x34db PushV
	var_6144_object = GlobalVars[16]; // 0x34dc PushGE
	var_6142_object = var_6144_object; // 0x34dd Mov
	var_6145_object = GlobalVars[16]; // 0x34df PushGE
	var_6143_object = var_6145_object; // 0x34e0 Mov
	func_11427(); // 0x34e2 NEW_2
	
Label_13540:
	var_6182_int = 45234; // 0x34e4 PushI
	var_6183_bool = var_4539_int == var_6182_int; // 0x34e5 Eq
	if(var_6183_bool == 0) goto Label_13555; // 0x34e6 JumpB
	var_6184_bool = 0; var_6185_object = Obj(); // 0x34e7 PushV
	var_6186_object = GlobalVars[16]; // 0x34e8 PushGE
	var_6185_object = var_6186_object; // 0x34e9 Mov
	func_11804(var_6185_object); // 0x34eb NEW_2
	var_6191_bool = var_6184_bool == 0; // 0x34ed Not
	if(var_6191_bool == 0) goto Label_13555; // 0x34ee JumpB
	var_6192_int = 0; var_6193_float = 0; // 0x34ef PushV
	var_6193_float = var_4540_float; // 0x34f0 Mov
	func_9889(var_6192_int, var_6193_float); // 0x34f1 NEW_2
	
Label_13555:
	var_6198_int = 45235; // 0x34f3 PushI
	var_6199_bool = var_4539_int == var_6198_int; // 0x34f4 Eq
	if(var_6199_bool == 0) goto Label_13562; // 0x34f5 JumpB
	var_6200_int = 0; var_6201_float = 0; // 0x34f6 PushV
	var_6201_float = var_4540_float; // 0x34f7 Mov
	func_9952(var_6200_int, var_6201_float); // 0x34f8 NEW_2
	
Label_13562:
	var_6206_int = 45237; // 0x34fa PushI
	var_6207_bool = var_4539_int == var_6206_int; // 0x34fb Eq
	if(var_6207_bool == 0) goto Label_13578; // 0x34fc JumpB
	var_6208_object = Obj(); var_6209_object = Obj(); // 0x34fd PushV
	var_6210_object = GlobalVars[16]; // 0x34fe PushGE
	var_6208_object = var_6210_object; // 0x34ff Mov
	var_6211_object = GlobalVars[16]; // 0x3501 PushGE
	var_6209_object = var_6211_object; // 0x3502 Mov
	func_11316(); // 0x3504 NEW_2
	var_6214_int = 0; var_6215_float = 0; // 0x3506 PushV
	var_6215_float = var_4540_float; // 0x3507 Mov
	func_10114(var_6214_int, var_6215_float); // 0x3508 NEW_2
	
Label_13578:
	var_6220_int = 45238; // 0x350a PushI
	var_6221_bool = var_4539_int == var_6220_int; // 0x350b Eq
	if(var_6221_bool == 0) goto Label_13594; // 0x350c JumpB
	var_6222_object = Obj(); var_6223_object = Obj(); // 0x350d PushV
	var_6224_object = GlobalVars[16]; // 0x350e PushGE
	var_6222_object = var_6224_object; // 0x350f Mov
	var_6225_object = GlobalVars[16]; // 0x3511 PushGE
	var_6223_object = var_6225_object; // 0x3512 Mov
	func_11322(); // 0x3514 NEW_2
	var_6228_int = 0; var_6229_float = 0; // 0x3516 PushV
	var_6229_float = var_4540_float; // 0x3517 Mov
	func_10177(var_6228_int, var_6229_float); // 0x3518 NEW_2
	
Label_13594:
	var_6234_int = 45264; // 0x351a PushI
	var_6235_bool = var_4539_int == var_6234_int; // 0x351b Eq
	if(var_6235_bool == 0) goto Label_13606; // 0x351c JumpB
	var_6236_object = Obj(); var_6237_object = Obj(); // 0x351d PushV
	var_6238_object = GlobalVars[16]; // 0x351e PushGE
	var_6236_object = var_6238_object; // 0x351f Mov
	var_6239_object = GlobalVars[16]; // 0x3521 PushGE
	var_6237_object = var_6239_object; // 0x3522 Mov
	func_11362(); // 0x3524 NEW_2
	
Label_13606:
	var_6248_int = 45265; // 0x3526 PushI
	var_6249_bool = var_4539_int == var_6248_int; // 0x3527 Eq
	if(var_6249_bool == 0) goto Label_13618; // 0x3528 JumpB
	var_6250_object = Obj(); var_6251_object = Obj(); // 0x3529 PushV
	var_6252_object = GlobalVars[16]; // 0x352a PushGE
	var_6250_object = var_6252_object; // 0x352b Mov
	var_6253_object = GlobalVars[16]; // 0x352d PushGE
	var_6251_object = var_6253_object; // 0x352e Mov
	func_11379(); // 0x3530 NEW_2
	
Label_13618:
	var_6262_int = 45266; // 0x3532 PushI
	var_6263_bool = var_4539_int == var_6262_int; // 0x3533 Eq
	if(var_6263_bool == 0) goto Label_13630; // 0x3534 JumpB
	var_6264_object = Obj(); var_6265_object = Obj(); // 0x3535 PushV
	var_6266_object = GlobalVars[16]; // 0x3536 PushGE
	var_6264_object = var_6266_object; // 0x3537 Mov
	var_6267_object = GlobalVars[16]; // 0x3539 PushGE
	var_6265_object = var_6267_object; // 0x353a Mov
	func_11396(); // 0x353c NEW_2
	
Label_13630:
	return 2; // 0x353e Return
	
Label_13377:
	var_6276_bool = 0; var_6277_string = ""; var_6278_string = ""; var_6279_string = ""; // 0x3441 PushV
	var_6277_string = "volonteers_danko"; // 0x3442 MovS
	var_6278_string = "kill"; // 0x3443 MovS
	var_6279_string = "bigvlad"; // 0x3444 MovS
	func_201(var_6276_bool, var_6277_string, var_6278_string, var_6279_string); // 0x3445 NEW_2
	var_6280_string = "Big Vlad is dead"; // 0x3447 PushS
	Trace(var_6280_string); // 0x3448 Func
}


func_7033()
{
	var_297_string = "lc_house7_02"; // 0x1b7a PushS
	add(var_297_string); // 0x1b7b ObjFunc
	var_298_string = "lc_house7_03"; // 0x1b7d PushS
	add(var_298_string); // 0x1b7e ObjFunc
	var_299_string = "lc_house7_04"; // 0x1b80 PushS
	add(var_299_string); // 0x1b81 ObjFunc
	var_300_string = "lc_house7_05"; // 0x1b83 PushS
	add(var_300_string); // 0x1b84 ObjFunc
	var_301_string = "lc_house7_06"; // 0x1b86 PushS
	add(var_301_string); // 0x1b87 ObjFunc
	var_302_string = "lc_house7_07"; // 0x1b89 PushS
	add(var_302_string); // 0x1b8a ObjFunc
	var_303_string = "lc_House6_02"; // 0x1b8c PushS
	add(var_303_string); // 0x1b8d ObjFunc
	var_304_string = "lc_house7_01"; // 0x1b8f PushS
	add(var_304_string); // 0x1b90 ObjFunc
	var_305_string = "lc_house_2_02"; // 0x1b92 PushS
	add(var_305_string); // 0x1b93 ObjFunc
	var_306_string = "lc_House6_01"; // 0x1b95 PushS
	add(var_306_string); // 0x1b96 ObjFunc
	var_307_string = "lc_house3_03_i2"; // 0x1b98 PushS
	add(var_307_string); // 0x1b99 ObjFunc
	var_308_string = "lc_house3_03"; // 0x1b9b PushS
	add(var_308_string); // 0x1b9c ObjFunc
	var_309_string = "lc_House6_03"; // 0x1b9e PushS
	add(var_309_string); // 0x1b9f ObjFunc
	var_310_string = "lc_House6_04"; // 0x1ba1 PushS
	add(var_310_string); // 0x1ba2 ObjFunc
	return 0; // 0x1ba4 Return
}


func_6009()
{
	var_209_string = "r3_house_2_02"; // 0x177a PushS
	add(var_209_string); // 0x177b ObjFunc
	var_210_string = "r3_house3_02_i2"; // 0x177d PushS
	add(var_210_string); // 0x177e ObjFunc
	var_211_string = "r3_house3_02"; // 0x1780 PushS
	add(var_211_string); // 0x1781 ObjFunc
	var_212_string = "r3_house4_05_i2"; // 0x1783 PushS
	add(var_212_string); // 0x1784 ObjFunc
	var_213_string = "r3_house4_05"; // 0x1786 PushS
	add(var_213_string); // 0x1787 ObjFunc
	var_214_string = "r3_house4_03_i2"; // 0x1789 PushS
	add(var_214_string); // 0x178a ObjFunc
	var_215_string = "r3_house4_04_i2"; // 0x178c PushS
	add(var_215_string); // 0x178d ObjFunc
	var_216_string = "r3_house4_04"; // 0x178f PushS
	add(var_216_string); // 0x1790 ObjFunc
	var_217_string = "r3_house4_01_i2"; // 0x1792 PushS
	add(var_217_string); // 0x1793 ObjFunc
	var_218_string = "r3_house4_01"; // 0x1795 PushS
	add(var_218_string); // 0x1796 ObjFunc
	var_219_string = "r3_house_2_01"; // 0x1798 PushS
	add(var_219_string); // 0x1799 ObjFunc
	var_220_string = "r3_house4_02_i2"; // 0x179b PushS
	add(var_220_string); // 0x179c ObjFunc
	var_221_string = "r3_house4_02"; // 0x179e PushS
	add(var_221_string); // 0x179f ObjFunc
	var_222_string = "r3_house3_01_i2"; // 0x17a1 PushS
	add(var_222_string); // 0x17a2 ObjFunc
	var_223_string = "r3_house3_01"; // 0x17a4 PushS
	add(var_223_string); // 0x17a5 ObjFunc
	return 0; // 0x17a7 Return
}


func_10105(var_5450_int, var_5451_float)
{
	var_5452_int = 0; var_5453_int = 0; var_5454_int = 0; var_5455_float = 0; // 0x277a PushV
	var_5453_int = 521371; // 0x277b MovI
	var_5454_int = 521370; // 0x277c MovI
	var_5455_float = var_5451_float; // 0x277d Mov
	func_12022(var_5452_int, var_5453_int, var_5454_int, var_5455_float); // 0x277e NEW_2
	var_5450_int = var_5452_int; // 0x277f Mov
	return 0; // 0x2781 Return
}


func_10114(var_6214_int, var_6215_float)
{
	var_6216_int = 0; var_6217_int = 0; var_6218_int = 0; var_6219_float = 0; // 0x2783 PushV
	var_6217_int = 533052; // 0x2784 MovI
	var_6218_int = 533051; // 0x2785 MovI
	var_6219_float = var_6215_float; // 0x2786 Mov
	func_12022(var_6216_int, var_6217_int, var_6218_int, var_6219_float); // 0x2787 NEW_2
	var_6214_int = var_6216_int; // 0x2788 Mov
	return 0; // 0x278a Return
}


func_10123(var_5765_int, var_5766_float)
{
	var_5767_int = 0; var_5768_int = 0; var_5769_int = 0; var_5770_float = 0; // 0x278c PushV
	var_5768_int = 530654; // 0x278d MovI
	var_5769_int = 530653; // 0x278e MovI
	var_5770_float = var_5766_float; // 0x278f Mov
	func_12022(var_5767_int, var_5768_int, var_5769_int, var_5770_float); // 0x2790 NEW_2
	var_5765_int = var_5767_int; // 0x2791 Mov
	return 0; // 0x2793 Return
}


func_3985(var_3247_int, var_3248_int, var_3249_int)
{
	var_3250_int = 0; var_3251_int = 0; var_3252_int = 0; var_3253_int = 0; var_3254_int = 0; var_3255_int = 0; var_3256_int = 0; var_3257_int = 0; // 0xf91 PushV
	var_3258_bool = 0; // 0xf92 PushV
	var_3258_bool = 0; // 0xf93 MovB
	var_3259_int = 8; // 0xf94 PushI
	var_3260_bool = var_3249_int > var_3259_int; // 0xf95 GT
	if(var_3260_bool == 0) goto Label_3995; // 0xf96 JumpB
	var_3261_int = 21; // 0xf97 PushI
	var_3262_bool = var_3249_int < var_3261_int; // 0xf98 LT
	if(var_3262_bool == 0) goto Label_3995; // 0xf99 JumpB
	var_3258_bool = 1; // 0xf9a MovB
	
Label_3995:
	if(var_3258_bool == 0) goto Label_4072; // 0xf9b JumpB
	var_3263_int = 0; var_3264_string = ""; var_3265_string = ""; var_3266_int = 0; // 0xf9c PushV
	var_3263_int = var_3247_int; // 0xf9d Mov
	var_3264_string = "pers_rat"; // 0xf9e MovS
	var_3265_string = "rat.xml"; // 0xf9f MovS
	var_3266_int = 4; // 0xfa0 MovI
	func_453(var_3263_int, var_3264_string, var_3265_string, var_3266_int); // 0xfa1 NEW_2
	var_3267_int = 0; var_3268_string = ""; var_3269_string = ""; var_3270_int = 0; // 0xfa3 PushV
	var_3267_int = var_3247_int; // 0xfa4 Mov
	var_3268_string = "pers_alkash"; // 0xfa5 MovS
	var_3269_string = "alkash.xml"; // 0xfa6 MovS
	var_3270_int = 2; // 0xfa7 MovI
	func_453(var_3267_int, var_3268_string, var_3269_string, var_3270_int); // 0xfa8 NEW_2
	var_3271_int = 0; var_3272_string = ""; var_3273_string = ""; var_3274_int = 0; // 0xfaa PushV
	var_3271_int = var_3247_int; // 0xfab Mov
	var_3272_string = "pers_dohodyaga"; // 0xfac MovS
	var_3273_string = "dohodyaga.xml"; // 0xfad MovS
	var_3274_int = 1; // 0xfae MovI
	func_453(var_3271_int, var_3272_string, var_3273_string, var_3274_int); // 0xfaf NEW_2
	var_3275_int = 2; // 0xfb1 PushI
	var_3276_float = 0; var_3277_int = 0; // 0xfb2 PushV
	var_3277_int = var_3248_int; // 0xfb3 Mov
	func_1115(var_3276_float, var_3277_int); // 0xfb4 NEW_2
	var_3254_int = var_3275_int * var_3276_float; // 0xfb6 Mult2
	var_3322_int = var_3254_int; // 0xfb7 Push
	if(var_3322_int == 0) goto Label_4032; // 0xfb8 JumpB
	var_3323_int = 0; var_3324_string = ""; var_3325_string = ""; var_3326_int = 0; // 0xfb9 PushV
	var_3323_int = var_3247_int; // 0xfba Mov
	var_3324_string = "pers_grabitel"; // 0xfbb MovS
	var_3325_string = "grabitel.xml"; // 0xfbc MovS
	var_3326_int = var_3254_int; // 0xfbd Mov
	func_453(var_3323_int, var_3324_string, var_3325_string, var_3326_int); // 0xfbe NEW_2
	
Label_4032:
	var_3327_int = 1; // 0xfc0 PushI
	var_3328_int = var_3248_int + var_3327_int; // 0xfc1 Add
	var_3329_int = 2; // 0xfc2 PushI
	var_3330_bool = var_3328_int >= var_3329_int; // 0xfc3 GE
	if(var_3330_bool == 0) goto Label_4056; // 0xfc4 JumpB
	var_3331_int = 0; var_3332_string = ""; var_3333_string = ""; var_3334_int = 0; // 0xfc5 PushV
	var_3331_int = var_3247_int; // 0xfc6 Mov
	var_3332_string = "pers_patrool"; // 0xfc7 MovS
	var_3333_string = "patrol.xml"; // 0xfc8 MovS
	var_3334_int = 2; // 0xfc9 MovI
	func_453(var_3331_int, var_3332_string, var_3333_string, var_3334_int); // 0xfca NEW_2
	var_3335_bool = 0; var_3336_int = 0; // 0xfcc PushV
	var_3336_int = var_3248_int; // 0xfcd Mov
	func_1322(var_3335_bool, var_3336_int); // 0xfce NEW_2
	if(var_3335_bool == 0) goto Label_4056; // 0xfd0 JumpB
	var_3337_int = 0; var_3338_string = ""; var_3339_string = ""; var_3340_int = 0; // 0xfd1 PushV
	var_3337_int = var_3247_int; // 0xfd2 Mov
	var_3338_string = "pers_soldat_hand"; // 0xfd3 MovS
	var_3339_string = "soldier_patrol.xml"; // 0xfd4 MovS
	var_3340_int = 1; // 0xfd5 MovI
	func_453(var_3337_int, var_3338_string, var_3339_string, var_3340_int); // 0xfd6 NEW_2
	
Label_4056:
	var_3341_int = 1; // 0xfd8 PushI
	var_3342_float = 0; var_3343_int = 0; // 0xfd9 PushV
	var_3343_int = var_3248_int; // 0xfda Mov
	func_1205(var_3342_float, var_3343_int); // 0xfdb NEW_2
	var_3255_int = var_3341_int * var_3342_float; // 0xfdd Mult2
	var_3344_int = var_3255_int; // 0xfde Push
	if(var_3344_int == 0) goto Label_4071; // 0xfdf JumpB
	var_3345_int = 0; var_3346_string = ""; var_3347_string = ""; var_3348_int = 0; // 0xfe0 PushV
	var_3345_int = var_3247_int; // 0xfe1 Mov
	var_3346_string = "pers_bomber"; // 0xfe2 MovS
	var_3347_string = "bomber.xml"; // 0xfe3 MovS
	var_3348_int = var_3255_int; // 0xfe4 Mov
	func_453(var_3345_int, var_3346_string, var_3347_string, var_3348_int); // 0xfe5 NEW_2
	
Label_4071:
	goto Label_4147; // 0xfe7 Jump
	
Label_4147:
	var_3349_bool = 0; var_3350_int = 0; // 0x1033 PushV
	var_3350_int = var_3248_int; // 0x1034 Mov
	func_1322(var_3349_bool, var_3350_int); // 0x1035 NEW_2
	if(var_3349_bool == 0) goto Label_4159; // 0x1037 JumpB
	var_3351_int = 0; var_3352_string = ""; var_3353_string = ""; var_3354_int = 0; // 0x1038 PushV
	var_3351_int = var_3247_int; // 0x1039 Mov
	var_3352_string = "pers_sanitar"; // 0x103a MovS
	var_3353_string = "sanitar.xml"; // 0x103b MovS
	var_3354_int = 1; // 0x103c MovI
	func_453(var_3351_int, var_3352_string, var_3353_string, var_3354_int); // 0x103d NEW_2
	
Label_4159:
	return 8; // 0x103f Return
	
Label_4072:
	var_3355_int = 0; var_3356_string = ""; var_3357_string = ""; var_3358_int = 0; // 0xfe8 PushV
	var_3355_int = var_3247_int; // 0xfe9 Mov
	var_3356_string = "pers_rat"; // 0xfea MovS
	var_3357_string = "rat.xml"; // 0xfeb MovS
	var_3358_int = 7; // 0xfec MovI
	func_453(var_3355_int, var_3356_string, var_3357_string, var_3358_int); // 0xfed NEW_2
	var_3359_int = 0; var_3360_string = ""; var_3361_string = ""; var_3362_int = 0; // 0xfef PushV
	var_3359_int = var_3247_int; // 0xff0 Mov
	var_3360_string = "pers_alkash"; // 0xff1 MovS
	var_3361_string = "alkash.xml"; // 0xff2 MovS
	var_3362_int = 1; // 0xff3 MovI
	func_453(var_3359_int, var_3360_string, var_3361_string, var_3362_int); // 0xff4 NEW_2
	var_3363_int = 0; var_3364_string = ""; var_3365_string = ""; var_3366_int = 0; // 0xff6 PushV
	var_3363_int = var_3247_int; // 0xff7 Mov
	var_3364_string = "pers_dohodyaga"; // 0xff8 MovS
	var_3365_string = "dohodyaga.xml"; // 0xff9 MovS
	var_3366_int = 1; // 0xffa MovI
	func_453(var_3363_int, var_3364_string, var_3365_string, var_3366_int); // 0xffb NEW_2
	var_3367_int = 2; // 0xffd PushI
	var_3368_float = 0; var_3369_int = 0; // 0xffe PushV
	var_3369_int = var_3248_int; // 0xfff Mov
	func_1115(var_3368_float, var_3369_int); // 0x1000 NEW_2
	var_3256_int = var_3367_int * var_3368_float; // 0x1002 Mult2
	var_3370_int = var_3256_int; // 0x1003 Push
	if(var_3370_int == 0) goto Label_4108; // 0x1004 JumpB
	var_3371_int = 0; var_3372_string = ""; var_3373_string = ""; var_3374_int = 0; // 0x1005 PushV
	var_3371_int = var_3247_int; // 0x1006 Mov
	var_3372_string = "pers_grabitel"; // 0x1007 MovS
	var_3373_string = "grabitel.xml"; // 0x1008 MovS
	var_3374_int = var_3256_int; // 0x1009 Mov
	func_453(var_3371_int, var_3372_string, var_3373_string, var_3374_int); // 0x100a NEW_2
	
Label_4108:
	var_3375_int = 1; // 0x100c PushI
	var_3376_int = var_3248_int + var_3375_int; // 0x100d Add
	var_3377_int = 2; // 0x100e PushI
	var_3378_bool = var_3376_int >= var_3377_int; // 0x100f GE
	if(var_3378_bool == 0) goto Label_4132; // 0x1010 JumpB
	var_3379_int = 0; var_3380_string = ""; var_3381_string = ""; var_3382_int = 0; // 0x1011 PushV
	var_3379_int = var_3247_int; // 0x1012 Mov
	var_3380_string = "pers_patrool"; // 0x1013 MovS
	var_3381_string = "patrol.xml"; // 0x1014 MovS
	var_3382_int = 1; // 0x1015 MovI
	func_453(var_3379_int, var_3380_string, var_3381_string, var_3382_int); // 0x1016 NEW_2
	var_3383_bool = 0; var_3384_int = 0; // 0x1018 PushV
	var_3384_int = var_3248_int; // 0x1019 Mov
	func_1322(var_3383_bool, var_3384_int); // 0x101a NEW_2
	if(var_3383_bool == 0) goto Label_4132; // 0x101c JumpB
	var_3385_int = 0; var_3386_string = ""; var_3387_string = ""; var_3388_int = 0; // 0x101d PushV
	var_3385_int = var_3247_int; // 0x101e Mov
	var_3386_string = "pers_soldat_hand"; // 0x101f MovS
	var_3387_string = "soldier_patrol.xml"; // 0x1020 MovS
	var_3388_int = 1; // 0x1021 MovI
	func_453(var_3385_int, var_3386_string, var_3387_string, var_3388_int); // 0x1022 NEW_2
	
Label_4132:
	var_3389_int = 1; // 0x1024 PushI
	var_3390_float = 0; var_3391_int = 0; // 0x1025 PushV
	var_3391_int = var_3248_int; // 0x1026 Mov
	func_1205(var_3390_float, var_3391_int); // 0x1027 NEW_2
	var_3257_int = var_3389_int * var_3390_float; // 0x1029 Mult2
	var_3392_int = var_3257_int; // 0x102a Push
	if(var_3392_int == 0) goto Label_4147; // 0x102b JumpB
	var_3393_int = 0; var_3394_string = ""; var_3395_string = ""; var_3396_int = 0; // 0x102c PushV
	var_3393_int = var_3247_int; // 0x102d Mov
	var_3394_string = "pers_bomber"; // 0x102e MovS
	var_3395_string = "bomber.xml"; // 0x102f MovS
	var_3396_int = var_3257_int; // 0x1030 Mov
	func_453(var_3393_int, var_3394_string, var_3395_string, var_3396_int); // 0x1031 NEW_2
}


func_11156()
{
	var_4805_object = Obj(); var_4806_object = Obj(); var_4807_object = Obj(); var_4808_object = Obj(); // 0x2b94 PushV
	var_4809_object = Obj(); // 0x2b95 PushV
	func_12030(var_4809_object); // 0x2b96 NEW_2
	var_4807_object = var_4809_object; // 0x2b97 Mov
	var_4810_string = "b11q04NotkinGotoSanitar"; // 0x2b99 PushS
	FindMark(var_4808_object, var_4810_string); // 0x2b9a ObjFunc
	var_4811_object = var_4808_object; // 0x2b9c Push
	if(var_4811_object == 0) goto Label_11168; // 0x2b9d JumpB
	Remove(); // 0x2b9e ObjFunc
	
Label_11168:
	var_4812_string = "b11q04SanitarGotoOfficer"; // 0x2ba0 PushS
	FindMark(var_4808_object, var_4812_string); // 0x2ba1 ObjFunc
	var_4813_object = var_4808_object; // 0x2ba3 Push
	if(var_4813_object == 0) goto Label_11175; // 0x2ba4 JumpB
	Remove(); // 0x2ba5 ObjFunc
	
Label_11175:
	var_4814_bool = 0; var_4815_int = 0; // 0x2ba7 PushV
	var_4815_int = 313; // 0x2ba8 MovI
	func_12005(var_4814_bool, var_4815_int); // 0x2ba9 NEW_2
	var_4816_bool = 0; var_4817_int = 0; // 0x2bab PushV
	var_4817_int = 551; // 0x2bac MovI
	func_12005(var_4816_bool, var_4817_int); // 0x2bad NEW_2
	var_4818_bool = 0; var_4819_int = 0; // 0x2baf PushV
	var_4819_int = 598; // 0x2bb0 MovI
	func_12005(var_4818_bool, var_4819_int); // 0x2bb1 NEW_2
	return 4; // 0x2bb3 Return
}


func_10132(var_5458_int, var_5459_float)
{
	var_5460_int = 0; var_5461_int = 0; var_5462_int = 0; var_5463_float = 0; // 0x2795 PushV
	var_5461_int = 529880; // 0x2796 MovI
	var_5462_int = 529879; // 0x2797 MovI
	var_5463_float = var_5459_float; // 0x2798 Mov
	func_12022(var_5460_int, var_5461_int, var_5462_int, var_5463_float); // 0x2799 NEW_2
	var_5458_int = var_5460_int; // 0x279a Mov
	return 0; // 0x279c Return
}


func_10141(var_5474_int, var_5475_float)
{
	var_5476_int = 0; var_5477_int = 0; var_5478_int = 0; var_5479_float = 0; // 0x279e PushV
	var_5477_int = 529882; // 0x279f MovI
	var_5478_int = 529881; // 0x27a0 MovI
	var_5479_float = var_5475_float; // 0x27a1 Mov
	func_12022(var_5476_int, var_5477_int, var_5478_int, var_5479_float); // 0x27a2 NEW_2
	var_5474_int = var_5476_int; // 0x27a3 Mov
	return 0; // 0x27a5 Return
}


func_5022(var_2552_int, var_2553_int, var_2554_object, var_2555_object, var_2556_object, var_2557_object)
{
	var_2558_int = 0; // 0x139f PushI
	var_2559_bool = var_2553_int == var_2558_int; // 0x13a0 Eq
	if(var_2559_bool == 0) goto Label_5062; // 0x13a1 JumpB
	var_2560_int = 0; var_2561_bool = 0; // 0x13a2 PushV
	var_2560_int = 3; // 0x13a3 MovI
	var_2561_bool = 1; // 0x13a4 MovB
	func_746(var_2560_int, var_2561_bool); // 0x13a5 NEW_2
	var_2562_int = 0; var_2563_bool = 0; var_2564_int = 0; // 0x13a7 PushV
	var_2562_int = 3; // 0x13a8 MovI
	var_2563_bool = 1; // 0x13a9 MovB
	var_2564_int = 1; // 0x13aa MovI
	func_763(var_2562_int, var_2563_bool, var_2564_int); // 0x13ab NEW_2
	var_2565_int = 0; var_2566_int = 0; var_2567_object = Obj(); var_2568_object = Obj(); var_2569_object = Obj(); // 0x13ad PushV
	var_2565_int = 3; // 0x13ae MovI
	var_2566_int = var_2552_int; // 0x13af Mov
	var_2567_object = var_2554_object; // 0x13b0 Mov
	var_2568_object = var_2555_object; // 0x13b1 Mov
	var_2569_object = var_2556_object; // 0x13b2 Mov
	func_591(var_2565_int, var_2566_int, var_2567_object, var_2568_object, var_2569_object); // 0x13b3 NEW_2
	var_2570_object = Obj(); var_2571_int = 0; // 0x13b5 PushV
	var_2570_object = var_2557_object; // 0x13b6 Mov
	var_2571_int = 1; // 0x13b7 MovI
	func_255(var_2571_int); // 0x13b8 NEW_2
	var_2572_int = 0; var_2573_bool = 0; var_2574_int = 0; // 0x13ba PushV
	var_2572_int = 3; // 0x13bb MovI
	var_2573_bool = 1; // 0x13bc MovB
	var_2574_int = 7; // 0x13bd MovI
	func_820(var_2572_int, var_2573_bool, var_2574_int); // 0x13be NEW_2
	var_2575_int = 0; var_2576_bool = 0; var_2577_int = 0; // 0x13c0 PushV
	var_2575_int = 3; // 0x13c1 MovI
	var_2576_bool = 0; // 0x13c2 MovB
	var_2577_int = 7; // 0x13c3 MovI
	func_882(var_2575_int, var_2576_bool, var_2577_int); // 0x13c4 NEW_2
	
Label_5062:
	var_2578_int = 0; var_2579_bool = 0; // 0x13c6 PushV
	var_2578_int = 3; // 0x13c7 MovI
	var_2579_bool = 0; // 0x13c8 MovB
	func_729(var_2578_int, var_2579_bool); // 0x13c9 NEW_2
	var_2580_int = 0; var_2581_int = 0; var_2582_int = 0; // 0x13cb PushV
	var_2580_int = 3; // 0x13cc MovI
	var_2581_int = var_2552_int; // 0x13cd Mov
	var_2582_int = var_2553_int; // 0x13ce Mov
	func_2894(var_2580_int, var_2581_int, var_2582_int); // 0x13cf NEW_2
	return 0; // 0x13d1 Return
}


func_933(var_1273_int, var_1274_int)
{
	var_1275_bool = 0; // 0x3a6 PushV
	var_1275_bool = 1; // 0x3a7 MovB
	var_1276_bool = 0; // 0x3a8 PushV
	var_1276_bool = 1; // 0x3a9 MovB
	var_1277_int = 20; // 0x3aa PushI
	var_1278_bool = var_1274_int >= var_1277_int; // 0x3ab GE
	if(var_1278_bool == 0) goto Label_945; // 0x3ac JumpB
	var_1279_int = 2; // 0x3ad PushI
	var_1280_bool = var_1274_int < var_1279_int; // 0x3ae LT
	if(var_1280_bool == 0) goto Label_945; // 0x3af JumpB
	var_1276_bool = 0; // 0x3b0 MovB
	
Label_945:
	if(var_1276_bool == 0) goto Label_957; // 0x3b1 JumpB
	var_1281_bool = 0; // 0x3b2 PushV
	var_1281_bool = 0; // 0x3b3 MovB
	var_1282_int = 6; // 0x3b4 PushI
	var_1283_bool = var_1274_int >= var_1282_int; // 0x3b5 GE
	if(var_1283_bool == 0) goto Label_955; // 0x3b6 JumpB
	var_1284_int = 10; // 0x3b7 PushI
	var_1285_bool = var_1274_int < var_1284_int; // 0x3b8 LT
	if(var_1285_bool == 0) goto Label_955; // 0x3b9 JumpB
	var_1281_bool = 1; // 0x3ba MovB
	
Label_955:
	if(var_1281_bool == 0) goto Label_957; // 0x3bb JumpB
	var_1275_bool = 0; // 0x3bc MovB
	
Label_957:
	if(var_1275_bool == 0) goto Label_964; // 0x3bd JumpB
	var_1286_int = 0; var_1287_bool = 0; // 0x3be PushV
	var_1286_int = var_1273_int; // 0x3bf Mov
	var_1287_bool = 1; // 0x3c0 MovB
	func_729(var_1286_int, var_1287_bool); // 0x3c1 NEW_2
	goto Label_969; // 0x3c3 Jump
	
Label_969:
	return 0; // 0x3c9 Return
	
Label_964:
	var_1288_int = 0; var_1289_bool = 0; // 0x3c4 PushV
	var_1288_int = var_1273_int; // 0x3c5 Mov
	var_1289_bool = 0; // 0x3c6 MovB
	func_729(var_1288_int, var_1289_bool); // 0x3c7 NEW_2
}


func_7077(var_1768_int, var_1769_int, var_1770_object, var_1771_object, var_1772_object, var_1773_object)
{
	var_1774_int = 0; // 0x1ba6 PushI
	var_1775_bool = var_1769_int == var_1774_int; // 0x1ba7 Eq
	if(var_1775_bool == 0) goto Label_7117; // 0x1ba8 JumpB
	var_1776_int = 0; var_1777_bool = 0; // 0x1ba9 PushV
	var_1776_int = 14; // 0x1baa MovI
	var_1777_bool = 0; // 0x1bab MovB
	func_746(var_1776_int, var_1777_bool); // 0x1bac NEW_2
	var_1778_int = 0; var_1779_bool = 0; var_1780_int = 0; // 0x1bae PushV
	var_1778_int = 14; // 0x1baf MovI
	var_1779_bool = 0; // 0x1bb0 MovB
	var_1780_int = 1; // 0x1bb1 MovI
	func_763(var_1778_int, var_1779_bool, var_1780_int); // 0x1bb2 NEW_2
	var_1781_int = 0; var_1782_int = 0; var_1783_object = Obj(); var_1784_object = Obj(); var_1785_object = Obj(); // 0x1bb4 PushV
	var_1781_int = 14; // 0x1bb5 MovI
	var_1782_int = var_1768_int; // 0x1bb6 Mov
	var_1783_object = var_1770_object; // 0x1bb7 Mov
	var_1784_object = var_1771_object; // 0x1bb8 Mov
	var_1785_object = var_1772_object; // 0x1bb9 Mov
	func_572(var_1782_int, var_1783_object, var_1784_object, var_1785_object); // 0x1bba NEW_2
	var_1786_object = Obj(); var_1787_int = 0; // 0x1bbc PushV
	var_1786_object = var_1773_object; // 0x1bbd Mov
	var_1787_int = 0; // 0x1bbe MovI
	func_255(var_1787_int); // 0x1bbf NEW_2
	var_1788_int = 0; var_1789_bool = 0; var_1790_int = 0; // 0x1bc1 PushV
	var_1788_int = 14; // 0x1bc2 MovI
	var_1789_bool = 0; // 0x1bc3 MovB
	var_1790_int = 5; // 0x1bc4 MovI
	func_820(var_1788_int, var_1789_bool, var_1790_int); // 0x1bc5 NEW_2
	var_1791_int = 0; var_1792_bool = 0; var_1793_int = 0; // 0x1bc7 PushV
	var_1791_int = 14; // 0x1bc8 MovI
	var_1792_bool = 0; // 0x1bc9 MovB
	var_1793_int = 5; // 0x1bca MovI
	func_882(var_1791_int, var_1792_bool, var_1793_int); // 0x1bcb NEW_2
	
Label_7117:
	var_1794_int = 0; var_1795_int = 0; // 0x1bcd PushV
	var_1794_int = 14; // 0x1bce MovI
	var_1795_int = var_1769_int; // 0x1bcf Mov
	func_1037(var_1794_int, var_1795_int); // 0x1bd0 NEW_2
	var_1805_int = 0; var_1806_int = 0; var_1807_int = 0; // 0x1bd2 PushV
	var_1805_int = 14; // 0x1bd3 MovI
	var_1806_int = var_1768_int; // 0x1bd4 Mov
	var_1807_int = var_1769_int; // 0x1bd5 Mov
	func_1326(var_1805_int, var_1806_int, var_1807_int); // 0x1bd6 NEW_2
	return 0; // 0x1bd8 Return
}


func_10150(var_6126_int, var_6127_float)
{
	var_6128_int = 0; var_6129_int = 0; var_6130_int = 0; var_6131_float = 0; // 0x27a7 PushV
	var_6129_int = 531549; // 0x27a8 MovI
	var_6130_int = 531548; // 0x27a9 MovI
	var_6131_float = var_6127_float; // 0x27aa Mov
	func_12022(var_6128_int, var_6129_int, var_6130_int, var_6131_float); // 0x27ab NEW_2
	var_6126_int = var_6128_int; // 0x27ac Mov
	return 0; // 0x27ae Return
}


func_6056(var_1603_int, var_1604_int, var_1605_object, var_1606_object, var_1607_object, var_1608_object)
{
	var_1609_int = 0; // 0x17a9 PushI
	var_1610_bool = var_1604_int == var_1609_int; // 0x17aa Eq
	if(var_1610_bool == 0) goto Label_6096; // 0x17ab JumpB
	var_1611_int = 0; var_1612_bool = 0; // 0x17ac PushV
	var_1611_int = 9; // 0x17ad MovI
	var_1612_bool = 0; // 0x17ae MovB
	func_746(var_1611_int, var_1612_bool); // 0x17af NEW_2
	var_1613_int = 0; var_1614_bool = 0; var_1615_int = 0; // 0x17b1 PushV
	var_1613_int = 9; // 0x17b2 MovI
	var_1614_bool = 0; // 0x17b3 MovB
	var_1615_int = 1; // 0x17b4 MovI
	func_763(var_1613_int, var_1614_bool, var_1615_int); // 0x17b5 NEW_2
	var_1616_int = 0; var_1617_int = 0; var_1618_object = Obj(); var_1619_object = Obj(); var_1620_object = Obj(); // 0x17b7 PushV
	var_1616_int = 9; // 0x17b8 MovI
	var_1617_int = var_1603_int; // 0x17b9 Mov
	var_1618_object = var_1605_object; // 0x17ba Mov
	var_1619_object = var_1606_object; // 0x17bb Mov
	var_1620_object = var_1607_object; // 0x17bc Mov
	func_572(var_1617_int, var_1618_object, var_1619_object, var_1620_object); // 0x17bd NEW_2
	var_1621_object = Obj(); var_1622_int = 0; // 0x17bf PushV
	var_1621_object = var_1608_object; // 0x17c0 Mov
	var_1622_int = 0; // 0x17c1 MovI
	func_255(var_1622_int); // 0x17c2 NEW_2
	var_1623_int = 0; var_1624_bool = 0; var_1625_int = 0; // 0x17c4 PushV
	var_1623_int = 9; // 0x17c5 MovI
	var_1624_bool = 0; // 0x17c6 MovB
	var_1625_int = 7; // 0x17c7 MovI
	func_820(var_1623_int, var_1624_bool, var_1625_int); // 0x17c8 NEW_2
	var_1626_int = 0; var_1627_bool = 0; var_1628_int = 0; // 0x17ca PushV
	var_1626_int = 9; // 0x17cb MovI
	var_1627_bool = 0; // 0x17cc MovB
	var_1628_int = 7; // 0x17cd MovI
	func_882(var_1626_int, var_1627_bool, var_1628_int); // 0x17ce NEW_2
	
Label_6096:
	var_1629_int = 0; var_1630_int = 0; // 0x17d0 PushV
	var_1629_int = 9; // 0x17d1 MovI
	var_1630_int = var_1604_int; // 0x17d2 Mov
	func_1000(var_1629_int, var_1630_int); // 0x17d3 NEW_2
	var_1631_int = 0; var_1632_int = 0; var_1633_int = 0; // 0x17d5 PushV
	var_1631_int = 9; // 0x17d6 MovI
	var_1632_int = var_1603_int; // 0x17d7 Mov
	var_1633_int = var_1604_int; // 0x17d8 Mov
	func_1574(var_1631_int, var_1632_int, var_1633_int); // 0x17d9 NEW_2
	return 0; // 0x17db Return
}


func_10159(var_5466_int, var_5467_float)
{
	var_5468_int = 0; var_5469_int = 0; var_5470_int = 0; var_5471_float = 0; // 0x27b0 PushV
	var_5469_int = 529884; // 0x27b1 MovI
	var_5470_int = 529883; // 0x27b2 MovI
	var_5471_float = var_5467_float; // 0x27b3 Mov
	func_12022(var_5468_int, var_5469_int, var_5470_int, var_5471_float); // 0x27b4 NEW_2
	var_5466_int = var_5468_int; // 0x27b5 Mov
	return 0; // 0x27b7 Return
}


func_14260(var_6157_bool, var_6158_int)
{
	var_6159_int = 18; // 0x37b5 PushI
	add(var_6159_int); // 0x37b6 ObjFunc
	var_6160_int = 24; // 0x37b8 PushI
	add(var_6160_int); // 0x37b9 ObjFunc
	var_6161_int = 20; // 0x37bb PushI
	add(var_6161_int); // 0x37bc ObjFunc
	var_6162_int = 14; // 0x37be PushI
	add(var_6162_int); // 0x37bf ObjFunc
	var_6163_bool = 0; // 0x37c1 PushB
	var_6164_bool = var_6157_bool == var_6163_bool; // 0x37c2 Eq
	if(var_6164_bool == 0) goto Label_14286; // 0x37c3 JumpB
	var_6165_int = 10; // 0x37c4 PushI
	add(var_6165_int); // 0x37c5 ObjFunc
	var_6166_int = 17; // 0x37c7 PushI
	add(var_6166_int); // 0x37c8 ObjFunc
	var_6167_int = 8; // 0x37ca PushI
	add(var_6167_int); // 0x37cb ObjFunc
	goto Label_14292; // 0x37cd Jump
	
Label_14292:
	return 0; // 0x37d4 Return
	
Label_14286:
	var_6168_int = 1; // 0x37ce PushI
	var_6169_bool = var_6158_int != var_6168_int; // 0x37cf Neq
	if(var_6169_bool == 0) goto Label_14292; // 0x37d0 JumpB
	var_6170_int = 10; // 0x37d1 PushI
	add(var_6170_int); // 0x37d2 ObjFunc
}


func_11190()
{
	func_11925(); // 0x2bb8 NEW_2
	return 0; // 0x2bba Return
}


func_10168(var_5583_int, var_5584_float)
{
	var_5585_int = 0; var_5586_int = 0; var_5587_int = 0; var_5588_float = 0; // 0x27b9 PushV
	var_5586_int = 530276; // 0x27ba MovI
	var_5587_int = 530275; // 0x27bb MovI
	var_5588_float = var_5584_float; // 0x27bc Mov
	func_12022(var_5585_int, var_5586_int, var_5587_int, var_5588_float); // 0x27bd NEW_2
	var_5583_int = var_5585_int; // 0x27be Mov
	return 0; // 0x27c0 Return
}


func_11195()
{
	var_5914_int = 0; var_5915_string = ""; // 0x2bbc PushV
	var_5915_string = "B_Mission3"; // 0x2bbd MovS
	func_106(var_5914_int, var_5915_string); // 0x2bbe NEW_2
	var_5916_int = 0; // 0x2bc0 PushI
	var_5917_bool = var_5914_int == var_5916_int; // 0x2bc1 Eq
	if(var_5917_bool == 0) goto Label_11218; // 0x2bc2 JumpB
	var_5918_string = "B_Mission3"; // 0x2bc3 PushS
	var_5919_int = 1; // 0x2bc4 PushI
	SetVariable(var_5918_string, var_5919_int); // 0x2bc5 Func
	func_11938(); // 0x2bc8 NEW_2
	var_5928_bool = 0; var_5929_int = 0; // 0x2bca PushV
	var_5929_int = 562; // 0x2bcb MovI
	func_12005(var_5928_bool, var_5929_int); // 0x2bcc NEW_2
	var_5930_bool = 0; var_5931_int = 0; // 0x2bce PushV
	var_5931_int = 563; // 0x2bcf MovI
	func_12005(var_5930_bool, var_5931_int); // 0x2bd0 NEW_2
	
Label_11218:
	return 0; // 0x2bd2 Return
}


func_10177(var_6228_int, var_6229_float)
{
	var_6230_int = 0; var_6231_int = 0; var_6232_int = 0; var_6233_float = 0; // 0x27c2 PushV
	var_6231_int = 533054; // 0x27c3 MovI
	var_6232_int = 533053; // 0x27c4 MovI
	var_6233_float = var_6229_float; // 0x27c5 Mov
	func_12022(var_6230_int, var_6231_int, var_6232_int, var_6233_float); // 0x27c6 NEW_2
	var_6228_int = var_6230_int; // 0x27c7 Mov
	return 0; // 0x27c9 Return
}


func_970(var_1321_int, var_1322_int)
{
	var_1323_bool = 0; // 0x3cb PushV
	var_1323_bool = 1; // 0x3cc MovB
	var_1324_int = 20; // 0x3cd PushI
	var_1325_bool = var_1322_int >= var_1324_int; // 0x3ce GE
	if(var_1325_bool == 0) goto Label_987; // 0x3cf JumpB
	var_1326_bool = 0; // 0x3d0 PushV
	var_1326_bool = 0; // 0x3d1 MovB
	var_1327_int = 6; // 0x3d2 PushI
	var_1328_bool = var_1322_int >= var_1327_int; // 0x3d3 GE
	if(var_1328_bool == 0) goto Label_985; // 0x3d4 JumpB
	var_1329_int = 10; // 0x3d5 PushI
	var_1330_bool = var_1322_int < var_1329_int; // 0x3d6 LT
	if(var_1330_bool == 0) goto Label_985; // 0x3d7 JumpB
	var_1326_bool = 1; // 0x3d8 MovB
	
Label_985:
	if(var_1326_bool == 0) goto Label_987; // 0x3d9 JumpB
	var_1323_bool = 0; // 0x3da MovB
	
Label_987:
	if(var_1323_bool == 0) goto Label_994; // 0x3db JumpB
	var_1331_int = 0; var_1332_bool = 0; // 0x3dc PushV
	var_1331_int = var_1321_int; // 0x3dd Mov
	var_1332_bool = 1; // 0x3de MovB
	func_729(var_1331_int, var_1332_bool); // 0x3df NEW_2
	goto Label_999; // 0x3e1 Jump
	
Label_999:
	return 0; // 0x3e7 Return
	
Label_994:
	var_1333_int = 0; var_1334_bool = 0; // 0x3e2 PushV
	var_1333_int = var_1321_int; // 0x3e3 Mov
	var_1334_bool = 0; // 0x3e4 MovB
	func_729(var_1333_int, var_1334_bool); // 0x3e5 NEW_2
}


func_10186()
{
	var_4616_string = ""; var_4617_bool = 0; // 0x27cb PushV
	var_4616_string = "cot_lara@door1"; // 0x27cc MovS
	var_4617_bool = 1; // 0x27cd MovB
	func_151(var_4616_string, var_4617_bool); // 0x27ce NEW_2
	return 0; // 0x27d0 Return
}


func_10193()
{
	var_4736_string = ""; var_4737_bool = 0; // 0x27d2 PushV
	var_4736_string = "cot_lara@door1"; // 0x27d3 MovS
	var_4737_bool = 0; // 0x27d4 MovB
	func_151(var_4736_string, var_4737_bool); // 0x27d5 NEW_2
	return 0; // 0x27d7 Return
}


func_5074(var_3678_int, var_3679_int, var_3680_object, var_3681_object, var_3682_object, var_3683_object)
{
	var_3684_int = 0; // 0x13d3 PushI
	var_3685_bool = var_3679_int == var_3684_int; // 0x13d4 Eq
	if(var_3685_bool == 0) goto Label_5114; // 0x13d5 JumpB
	var_3686_int = 0; var_3687_bool = 0; // 0x13d6 PushV
	var_3686_int = 3; // 0x13d7 MovI
	var_3687_bool = 0; // 0x13d8 MovB
	func_746(var_3686_int, var_3687_bool); // 0x13d9 NEW_2
	var_3688_int = 0; var_3689_bool = 0; var_3690_int = 0; // 0x13db PushV
	var_3688_int = 3; // 0x13dc MovI
	var_3689_bool = 0; // 0x13dd MovB
	var_3690_int = 1; // 0x13de MovI
	func_763(var_3688_int, var_3689_bool, var_3690_int); // 0x13df NEW_2
	var_3691_int = 0; var_3692_int = 0; var_3693_object = Obj(); var_3694_object = Obj(); var_3695_object = Obj(); // 0x13e1 PushV
	var_3691_int = 3; // 0x13e2 MovI
	var_3692_int = var_3678_int; // 0x13e3 Mov
	var_3693_object = var_3680_object; // 0x13e4 Mov
	var_3694_object = var_3681_object; // 0x13e5 Mov
	var_3695_object = var_3682_object; // 0x13e6 Mov
	func_670(var_3691_int, var_3692_int, var_3693_object, var_3694_object, var_3695_object); // 0x13e7 NEW_2
	var_3696_object = Obj(); var_3697_int = 0; // 0x13e9 PushV
	var_3696_object = var_3683_object; // 0x13ea Mov
	var_3697_int = 2; // 0x13eb MovI
	func_255(var_3697_int); // 0x13ec NEW_2
	var_3698_int = 0; var_3699_bool = 0; var_3700_int = 0; // 0x13ee PushV
	var_3698_int = 3; // 0x13ef MovI
	var_3699_bool = 0; // 0x13f0 MovB
	var_3700_int = 7; // 0x13f1 MovI
	func_820(var_3698_int, var_3699_bool, var_3700_int); // 0x13f2 NEW_2
	var_3701_int = 0; var_3702_bool = 0; var_3703_int = 0; // 0x13f4 PushV
	var_3701_int = 3; // 0x13f5 MovI
	var_3702_bool = 1; // 0x13f6 MovB
	var_3703_int = 7; // 0x13f7 MovI
	func_882(var_3701_int, var_3702_bool, var_3703_int); // 0x13f8 NEW_2
	
Label_5114:
	var_3704_int = 0; var_3705_bool = 0; // 0x13fa PushV
	var_3704_int = 3; // 0x13fb MovI
	var_3705_bool = 0; // 0x13fc MovB
	func_729(var_3704_int, var_3705_bool); // 0x13fd NEW_2
	var_3706_int = 0; var_3707_int = 0; var_3708_int = 0; // 0x13ff PushV
	var_3706_int = 3; // 0x1400 MovI
	var_3707_int = var_3678_int; // 0x1401 Mov
	var_3708_int = var_3679_int; // 0x1402 Mov
	func_3797(var_3706_int, var_3707_int, var_3708_int); // 0x1403 NEW_2
	return 0; // 0x1405 Return
}


func_11219()
{
	var_4824_int = 0; var_4825_string = ""; // 0x2bd4 PushV
	var_4825_string = "B_Mission4"; // 0x2bd5 MovS
	func_106(var_4824_int, var_4825_string); // 0x2bd6 NEW_2
	var_4828_int = 0; // 0x2bd8 PushI
	var_4829_bool = var_4824_int == var_4828_int; // 0x2bd9 Eq
	if(var_4829_bool == 0) goto Label_11246; // 0x2bda JumpB
	var_4830_string = "B_Mission4"; // 0x2bdb PushS
	var_4831_int = 1; // 0x2bdc PushI
	SetVariable(var_4830_string, var_4831_int); // 0x2bdd Func
	func_11951(); // 0x2be0 NEW_2
	var_4851_bool = 0; var_4852_int = 0; // 0x2be2 PushV
	var_4852_int = 562; // 0x2be3 MovI
	func_12005(var_4851_bool, var_4852_int); // 0x2be4 NEW_2
	var_4853_bool = 0; var_4854_int = 0; // 0x2be6 PushV
	var_4854_int = 563; // 0x2be7 MovI
	func_12005(var_4853_bool, var_4854_int); // 0x2be8 NEW_2
	var_4855_bool = 0; var_4856_int = 0; // 0x2bea PushV
	var_4856_int = 564; // 0x2beb MovI
	func_12005(var_4855_bool, var_4856_int); // 0x2bec NEW_2
	
Label_11246:
	return 0; // 0x2bee Return
}


func_8147()
{
	var_4381_object = Obj(); var_4382_object = Obj(); // 0x1fd3 PushV
	GetMainOutdoorScene(var_4382_object); // 0x1fd4 Func
	var_4383_object = GlobalVars[0]; // 0x1fd6 PushGE
	var_4384_object = Obj(); var_4385_object = Obj(); var_4386_int = 0; // 0x1fd7 PushV
	var_4385_object = var_4382_object; // 0x1fd8 Mov
	var_4386_int = 1; // 0x1fd9 MovI
	func_7709(var_4384_object, var_4385_object, var_4386_int); // 0x1fda NEW_2
	var_4383_object = var_4384_object; // 0x1fdb Mov
	GlobalVars[0] = var_4383_object; // 0x1fdd PopGE
	var_4406_object = GlobalVars[1]; // 0x1fde PushGE
	var_4407_object = Obj(); var_4408_object = Obj(); var_4409_int = 0; // 0x1fdf PushV
	var_4408_object = var_4382_object; // 0x1fe0 Mov
	var_4409_int = 2; // 0x1fe1 MovI
	func_7709(var_4407_object, var_4408_object, var_4409_int); // 0x1fe2 NEW_2
	var_4406_object = var_4407_object; // 0x1fe3 Mov
	GlobalVars[1] = var_4406_object; // 0x1fe5 PopGE
	var_4410_object = GlobalVars[2]; // 0x1fe6 PushGE
	var_4411_object = Obj(); var_4412_object = Obj(); var_4413_int = 0; // 0x1fe7 PushV
	var_4412_object = var_4382_object; // 0x1fe8 Mov
	var_4413_int = 3; // 0x1fe9 MovI
	func_7709(var_4411_object, var_4412_object, var_4413_int); // 0x1fea NEW_2
	var_4410_object = var_4411_object; // 0x1feb Mov
	GlobalVars[2] = var_4410_object; // 0x1fed PopGE
	var_4414_object = GlobalVars[3]; // 0x1fee PushGE
	var_4415_object = Obj(); var_4416_object = Obj(); var_4417_int = 0; // 0x1fef PushV
	var_4416_object = var_4382_object; // 0x1ff0 Mov
	var_4417_int = 4; // 0x1ff1 MovI
	func_7709(var_4415_object, var_4416_object, var_4417_int); // 0x1ff2 NEW_2
	var_4414_object = var_4415_object; // 0x1ff3 Mov
	GlobalVars[3] = var_4414_object; // 0x1ff5 PopGE
	var_4418_object = GlobalVars[4]; // 0x1ff6 PushGE
	var_4419_object = Obj(); var_4420_object = Obj(); var_4421_int = 0; // 0x1ff7 PushV
	var_4420_object = var_4382_object; // 0x1ff8 Mov
	var_4421_int = 5; // 0x1ff9 MovI
	func_7709(var_4419_object, var_4420_object, var_4421_int); // 0x1ffa NEW_2
	var_4418_object = var_4419_object; // 0x1ffb Mov
	GlobalVars[4] = var_4418_object; // 0x1ffd PopGE
	var_4422_object = GlobalVars[5]; // 0x1ffe PushGE
	var_4423_object = Obj(); var_4424_object = Obj(); var_4425_int = 0; // 0x1fff PushV
	var_4424_object = var_4382_object; // 0x2000 Mov
	var_4425_int = 6; // 0x2001 MovI
	func_7709(var_4423_object, var_4424_object, var_4425_int); // 0x2002 NEW_2
	var_4422_object = var_4423_object; // 0x2003 Mov
	GlobalVars[5] = var_4422_object; // 0x2005 PopGE
	var_4426_object = GlobalVars[12]; // 0x2006 PushGE
	var_4427_object = Obj(); // 0x2007 PushV
	func_100(var_4427_object); // 0x2008 NEW_2
	var_4426_object = var_4427_object; // 0x2009 Mov
	GlobalVars[12] = var_4426_object; // 0x200b PopGE
	var_4428_bool = 0; // 0x200c PushV
	var_4428_bool = 0; // 0x200d MovB
	func_7720(var_4428_bool); // 0x200e NEW_2
	func_8442(); // 0x2011 NEW_2
	func_8517(); // 0x2014 NEW_2
	var_4525_int = 100; // 0x2016 PushI
	SendWorldWndMessage(var_4525_int); // 0x2017 Func
	return 2; // 0x2019 Return
}


func_14293(var_6172_int)
{
	var_6173_int = 0; var_6174_int = 0; // 0x37d5 PushV
	var_6175_string = "vol_"; // 0x37d6 PushS
	var_6176_int = var_6175_string + var_6172_int; // 0x37d7 Add
	GetVariable(var_6176_int, var_6174_int); // 0x37d8 Func
	var_6177_string = "vol_"; // 0x37da PushS
	var_6178_int = var_6177_string + var_6172_int; // 0x37db Add
	var_6179_int = 8; // 0x37dc PushI
	var_6180_int = var_6174_int | var_6179_int; // 0x37dd Or
	SetVariable(var_6178_int, var_6180_int); // 0x37de Func
	return 2; // 0x37e0 Return
}


func_10200()
{
	var_4622_string = ""; var_4623_bool = 0; // 0x27d9 PushV
	var_4622_string = "icot_eva_door"; // 0x27da MovS
	var_4623_bool = 1; // 0x27db MovB
	func_168(var_4622_string, var_4623_bool); // 0x27dc NEW_2
	return 0; // 0x27de Return
}


func_7129(var_2998_int, var_2999_int, var_3000_object, var_3001_object, var_3002_object, var_3003_object)
{
	var_3004_int = 0; // 0x1bda PushI
	var_3005_bool = var_2999_int == var_3004_int; // 0x1bdb Eq
	if(var_3005_bool == 0) goto Label_7169; // 0x1bdc JumpB
	var_3006_int = 0; var_3007_bool = 0; // 0x1bdd PushV
	var_3006_int = 14; // 0x1bde MovI
	var_3007_bool = 1; // 0x1bdf MovB
	func_746(var_3006_int, var_3007_bool); // 0x1be0 NEW_2
	var_3008_int = 0; var_3009_bool = 0; var_3010_int = 0; // 0x1be2 PushV
	var_3008_int = 14; // 0x1be3 MovI
	var_3009_bool = 1; // 0x1be4 MovB
	var_3010_int = 1; // 0x1be5 MovI
	func_763(var_3008_int, var_3009_bool, var_3010_int); // 0x1be6 NEW_2
	var_3011_int = 0; var_3012_int = 0; var_3013_object = Obj(); var_3014_object = Obj(); var_3015_object = Obj(); // 0x1be8 PushV
	var_3011_int = 14; // 0x1be9 MovI
	var_3012_int = var_2998_int; // 0x1bea Mov
	var_3013_object = var_3000_object; // 0x1beb Mov
	var_3014_object = var_3001_object; // 0x1bec Mov
	var_3015_object = var_3002_object; // 0x1bed Mov
	func_591(var_3011_int, var_3012_int, var_3013_object, var_3014_object, var_3015_object); // 0x1bee NEW_2
	var_3016_object = Obj(); var_3017_int = 0; // 0x1bf0 PushV
	var_3016_object = var_3003_object; // 0x1bf1 Mov
	var_3017_int = 1; // 0x1bf2 MovI
	func_255(var_3017_int); // 0x1bf3 NEW_2
	var_3018_int = 0; var_3019_bool = 0; var_3020_int = 0; // 0x1bf5 PushV
	var_3018_int = 14; // 0x1bf6 MovI
	var_3019_bool = 1; // 0x1bf7 MovB
	var_3020_int = 5; // 0x1bf8 MovI
	func_820(var_3018_int, var_3019_bool, var_3020_int); // 0x1bf9 NEW_2
	var_3021_int = 0; var_3022_bool = 0; var_3023_int = 0; // 0x1bfb PushV
	var_3021_int = 14; // 0x1bfc MovI
	var_3022_bool = 0; // 0x1bfd MovB
	var_3023_int = 5; // 0x1bfe MovI
	func_882(var_3021_int, var_3022_bool, var_3023_int); // 0x1bff NEW_2
	
Label_7169:
	var_3024_int = 0; var_3025_bool = 0; // 0x1c01 PushV
	var_3024_int = 14; // 0x1c02 MovI
	var_3025_bool = 0; // 0x1c03 MovB
	func_729(var_3024_int, var_3025_bool); // 0x1c04 NEW_2
	var_3026_int = 0; var_3027_int = 0; var_3028_int = 0; // 0x1c06 PushV
	var_3026_int = 14; // 0x1c07 MovI
	var_3027_int = var_2998_int; // 0x1c08 Mov
	var_3028_int = var_2999_int; // 0x1c09 Mov
	func_2534(var_3026_int, var_3027_int, var_3028_int); // 0x1c0a NEW_2
	return 0; // 0x1c0c Return
}


func_6108(var_2833_int, var_2834_int, var_2835_object, var_2836_object, var_2837_object, var_2838_object)
{
	var_2839_int = 0; // 0x17dd PushI
	var_2840_bool = var_2834_int == var_2839_int; // 0x17de Eq
	if(var_2840_bool == 0) goto Label_6148; // 0x17df JumpB
	var_2841_int = 0; var_2842_bool = 0; // 0x17e0 PushV
	var_2841_int = 9; // 0x17e1 MovI
	var_2842_bool = 1; // 0x17e2 MovB
	func_746(var_2841_int, var_2842_bool); // 0x17e3 NEW_2
	var_2843_int = 0; var_2844_bool = 0; var_2845_int = 0; // 0x17e5 PushV
	var_2843_int = 9; // 0x17e6 MovI
	var_2844_bool = 1; // 0x17e7 MovB
	var_2845_int = 1; // 0x17e8 MovI
	func_763(var_2843_int, var_2844_bool, var_2845_int); // 0x17e9 NEW_2
	var_2846_int = 0; var_2847_int = 0; var_2848_object = Obj(); var_2849_object = Obj(); var_2850_object = Obj(); // 0x17eb PushV
	var_2846_int = 9; // 0x17ec MovI
	var_2847_int = var_2833_int; // 0x17ed Mov
	var_2848_object = var_2835_object; // 0x17ee Mov
	var_2849_object = var_2836_object; // 0x17ef Mov
	var_2850_object = var_2837_object; // 0x17f0 Mov
	func_591(var_2846_int, var_2847_int, var_2848_object, var_2849_object, var_2850_object); // 0x17f1 NEW_2
	var_2851_object = Obj(); var_2852_int = 0; // 0x17f3 PushV
	var_2851_object = var_2838_object; // 0x17f4 Mov
	var_2852_int = 1; // 0x17f5 MovI
	func_255(var_2852_int); // 0x17f6 NEW_2
	var_2853_int = 0; var_2854_bool = 0; var_2855_int = 0; // 0x17f8 PushV
	var_2853_int = 9; // 0x17f9 MovI
	var_2854_bool = 1; // 0x17fa MovB
	var_2855_int = 7; // 0x17fb MovI
	func_820(var_2853_int, var_2854_bool, var_2855_int); // 0x17fc NEW_2
	var_2856_int = 0; var_2857_bool = 0; var_2858_int = 0; // 0x17fe PushV
	var_2856_int = 9; // 0x17ff MovI
	var_2857_bool = 0; // 0x1800 MovB
	var_2858_int = 7; // 0x1801 MovI
	func_882(var_2856_int, var_2857_bool, var_2858_int); // 0x1802 NEW_2
	
Label_6148:
	var_2859_int = 0; var_2860_bool = 0; // 0x1804 PushV
	var_2859_int = 9; // 0x1805 MovI
	var_2860_bool = 0; // 0x1806 MovB
	func_729(var_2859_int, var_2860_bool); // 0x1807 NEW_2
	var_2861_int = 0; var_2862_int = 0; var_2863_int = 0; // 0x1809 PushV
	var_2861_int = 9; // 0x180a MovI
	var_2862_int = var_2833_int; // 0x180b Mov
	var_2863_int = var_2834_int; // 0x180c Mov
	func_2714(var_2861_int, var_2862_int, var_2863_int); // 0x180d NEW_2
	return 0; // 0x180f Return
}


func_10207()
{
	var_4744_string = ""; var_4745_bool = 0; // 0x27e0 PushV
	var_4744_string = "icot_eva_door"; // 0x27e1 MovS
	var_4745_bool = 0; // 0x27e2 MovB
	func_168(var_4744_string, var_4745_bool); // 0x27e3 NEW_2
	return 0; // 0x27e5 Return
}


func_14305()
{
	var_6148_object = Obj(); var_6149_int = 0; var_6150_int = 0; var_6151_int = 0; var_6152_object = Obj(); var_6153_int = 0; var_6154_int = 0; var_6155_int = 0; // 0x37e1 PushV
	CreateIntVector(var_6152_object); // 0x37e2 Func
	var_6156_object = Obj(); var_6157_bool = 0; var_6158_int = 0; // 0x37e4 PushV
	var_6156_object = var_6152_object; // 0x37e5 Mov
	var_6157_bool = 0; // 0x37e6 MovB
	var_6158_int = -1; // 0x37e7 MovI
	func_14260(var_6157_bool, var_6158_int); // 0x37e8 NEW_2
	size(var_6153_int); // 0x37ea ObjFunc
	var_6154_int = 0; // 0x37ec MovI
	
Label_14317:
	var_6171_bool = var_6154_int < var_6153_int; // 0x37ed LT
	if(var_6171_bool == 0) goto Label_14328; // 0x37ee JumpB
	get(var_6155_int, var_6154_int); // 0x37ef ObjFunc
	var_6172_int = 0; // 0x37f1 PushV
	var_6172_int = var_6155_int; // 0x37f2 Mov
	func_14293(var_6172_int); // 0x37f3 NEW_2
	var_6181_int = 1; // 0x37f5 PushI
	var_6154_int = var_6154_int + var_6181_int; // 0x37f6 Add2
	goto Label_14317; // 0x37f7 Jump
	
Label_14328:
	return 8; // 0x37f8 Return
}


func_10214()
{
	var_4637_string = ""; var_4638_bool = 0; // 0x27e7 PushV
	var_4637_string = "cot_alexandr@door1"; // 0x27e8 MovS
	var_4638_bool = 1; // 0x27e9 MovB
	func_151(var_4637_string, var_4638_bool); // 0x27ea NEW_2
	return 0; // 0x27ec Return
}


func_1000(var_723_int, var_724_int)
{
	var_725_bool = 0; // 0x3e9 PushV
	var_725_bool = 1; // 0x3ea MovB
	var_726_bool = 0; // 0x3eb PushV
	var_726_bool = 1; // 0x3ec MovB
	var_727_int = 22; // 0x3ed PushI
	var_728_bool = var_724_int >= var_727_int; // 0x3ee GE
	if(var_728_bool == 0) goto Label_1012; // 0x3ef JumpB
	var_729_int = 4; // 0x3f0 PushI
	var_730_bool = var_724_int < var_729_int; // 0x3f1 LT
	if(var_730_bool == 0) goto Label_1012; // 0x3f2 JumpB
	var_726_bool = 0; // 0x3f3 MovB
	
Label_1012:
	if(var_726_bool == 0) goto Label_1024; // 0x3f4 JumpB
	var_731_bool = 0; // 0x3f5 PushV
	var_731_bool = 0; // 0x3f6 MovB
	var_732_int = 6; // 0x3f7 PushI
	var_733_bool = var_724_int >= var_732_int; // 0x3f8 GE
	if(var_733_bool == 0) goto Label_1022; // 0x3f9 JumpB
	var_734_int = 8; // 0x3fa PushI
	var_735_bool = var_724_int < var_734_int; // 0x3fb LT
	if(var_735_bool == 0) goto Label_1022; // 0x3fc JumpB
	var_731_bool = 1; // 0x3fd MovB
	
Label_1022:
	if(var_731_bool == 0) goto Label_1024; // 0x3fe JumpB
	var_725_bool = 0; // 0x3ff MovB
	
Label_1024:
	if(var_725_bool == 0) goto Label_1031; // 0x400 JumpB
	var_736_int = 0; var_737_bool = 0; // 0x401 PushV
	var_736_int = var_723_int; // 0x402 Mov
	var_737_bool = 1; // 0x403 MovB
	func_729(var_736_int, var_737_bool); // 0x404 NEW_2
	goto Label_1036; // 0x406 Jump
	
Label_1036:
	return 0; // 0x40c Return
	
Label_1031:
	var_747_int = 0; var_748_bool = 0; // 0x407 PushV
	var_747_int = var_723_int; // 0x408 Mov
	var_748_bool = 0; // 0x409 MovB
	func_729(var_747_int, var_748_bool); // 0x40a NEW_2
}


func_10221()
{
	var_4716_string = ""; var_4717_bool = 0; // 0x27ee PushV
	var_4716_string = "cot_alexandr@door1"; // 0x27ef MovS
	var_4717_bool = 0; // 0x27f0 MovB
	func_151(var_4716_string, var_4717_bool); // 0x27f1 NEW_2
	return 0; // 0x27f3 Return
}


func_11247()
{
	var_6074_object = Obj(); var_6075_object = Obj(); // 0x2bef PushV
	var_6076_object = Obj(); // 0x2bf0 PushV
	func_12030(var_6076_object); // 0x2bf1 NEW_2
	var_6075_object = var_6076_object; // 0x2bf2 Mov
	var_6077_string = "b4Spi4kaMapMark"; // 0x2bf4 PushS
	var_6078_string = "pt_map_spi4ka"; // 0x2bf5 PushS
	var_6079_int = 3; // 0x2bf6 PushI
	var_6080_int = 531086; // 0x2bf7 PushI
	var_6081_float = 0; // 0x2bf8 PushV
	func_234(var_6081_float); // 0x2bf9 NEW_2
	AddMark(var_6077_string, var_6078_string, var_6079_int, var_6080_int, var_6081_float); // 0x2bfb ObjFunc
	return 2; // 0x2bfd Return
}


func_10228()
{
	var_4643_string = ""; var_4644_bool = 0; // 0x27f5 PushV
	var_4643_string = "cot_katerina@door1"; // 0x27f6 MovS
	var_4644_bool = 1; // 0x27f7 MovB
	func_151(var_4643_string, var_4644_bool); // 0x27f8 NEW_2
	return 0; // 0x27fa Return
}


func_14330()
{
	func_14305(); // 0x37fb NEW_2
	return 0; // 0x37fd Return
}


func_10235()
{
	var_4722_string = ""; var_4723_bool = 0; // 0x27fc PushV
	var_4722_string = "cot_katerina@door1"; // 0x27fd MovS
	var_4723_bool = 0; // 0x27fe MovB
	func_151(var_4722_string, var_4723_bool); // 0x27ff NEW_2
	return 0; // 0x2801 Return
}


func_14334()
{
	var_4526_int = 0; // 0x37fe PushV
	var_4526_int = 7; // 0x37ff MovI
	func_7555(var_4526_int); // 0x3800 NEW_2
	return 0; // 0x3802 Return
}


func_11263()
{
	var_6118_object = Obj(); var_6119_object = Obj(); // 0x2bff PushV
	var_6120_object = Obj(); // 0x2c00 PushV
	func_12030(var_6120_object); // 0x2c01 NEW_2
	var_6119_object = var_6120_object; // 0x2c02 Mov
	var_6121_string = "b9Block"; // 0x2c04 PushS
	var_6122_string = "pt_map_uprava_admin"; // 0x2c05 PushS
	var_6123_int = 3; // 0x2c06 PushI
	var_6124_int = 531551; // 0x2c07 PushI
	var_6125_float = 0; // 0x2c08 PushV
	func_234(var_6125_float); // 0x2c09 NEW_2
	AddMark(var_6121_string, var_6122_string, var_6123_int, var_6124_int, var_6125_float); // 0x2c0b ObjFunc
	return 2; // 0x2c0d Return
}


