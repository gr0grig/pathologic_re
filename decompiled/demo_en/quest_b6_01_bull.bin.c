task_0_event_5()
{
	StopGroup0(); // 0x8 Func
	sync(); // 0xa Func
	return 0; // 0xc Return
}


task_1_event_6()
{
	func_212(); // 0x23 NEW_2
	return 0; // 0x25 Return
}


task_2_event_6()
{
	func_212(); // 0x3c NEW_2
	func_102(); // 0x3f NEW_2
	return 0; // 0x41 Return
}


event_26(var_0_string)
{
	var_1_bool = 0; var_2_bool = 0; // 0xbc PushV
	var_3_string = "cleanup"; // 0xbd PushS
	var_4_bool = var_0_string == var_3_string; // 0xbe Eq
	if(var_4_bool == 0) goto Label_205; // 0xbf JumpB
	var_5_bool = GlobalVars[1]; // 0xc0 PushGE
	var_5_bool = 1; // 0xc1 MovB
	GlobalVars[1] = var_5_bool; // 0xc2 PopGE
	IsLoaded(var_2_bool); // 0xc3 Func
	var_6_bool = var_2_bool == 0; // 0xc5 Not
	if(var_6_bool == 0) goto Label_204; // 0xc6 JumpB
	var_7_object = Obj(); // 0xc7 PushV
	func_151(var_7_object); // 0xc8 NEW_2
	RemoveActor(var_7_object); // 0xca Func
	
Label_204:
	goto Label_211; // 0xcc Jump
	
Label_211:
	return 2; // 0xd3 Return
	
Label_205:
	var_10_string = "restore"; // 0xcd PushS
	var_11_bool = var_0_string == var_10_string; // 0xce Eq
	if(var_11_bool == 0) goto Label_211; // 0xcf JumpB
	var_12_bool = GlobalVars[1]; // 0xd0 PushGE
	var_12_bool = 0; // 0xd1 MovB
	GlobalVars[1] = var_12_bool; // 0xd2 PopGE
}


event_6()
{
	var_0_bool = GlobalVars[1]; // 0xd4 PushGE
	if(var_0_bool == 0) goto Label_219; // 0xd5 JumpB
	var_1_object = Obj(); // 0xd6 PushV
	func_151(var_1_object); // 0xd7 NEW_2
	RemoveActor(var_1_object); // 0xd9 Func
	
Label_219:
	return 0; // 0xdb Return
}


event_32()
{
	var_0_object = GlobalVars[0]; // 0xdc PushGE
	if(var_0_object == 0) goto Label_225; // 0xdd JumpB
	var_1_object = GlobalVars[0]; // 0xde PushGE
	RemoveActor(var_1_object); // 0xdf Func
	
Label_225:
	return 0; // 0xe1 Return
}


main()
{
	func_20(); // 0xe NEW_2
	func_38(); // 0x11 NEW_2
	return 0; // 0x13 Return
}


func_0()
{
	
Label_0:
	Hold(); // 0x0 Func
	var_12_bool = 0; // 0x2 PushV
	func_105(var_12_bool); // 0x3 NEW_2
	var_13_bool = var_12_bool == 0; // 0x5 Not
	if(var_13_bool == 0) goto Label_0; // 0x6 JumpB
	return 0; // 0x7 Return
}


func_66()
{
	var_14_int = 0; var_15_int = 0; var_16_int = 0; var_17_string = ""; var_18_int = 0; var_19_int = 0; var_20_int = 0; var_21_string = ""; // 0x42 PushV
	var_22_int = 3; // 0x43 PushI
	irand(var_18_int, var_22_int); // 0x44 Func
	var_23_bool = var_18_int == 0; // 0x46 Not
	if(var_23_bool == 0) goto Label_95; // 0x47 JumpB
	var_24_int = 0; // 0x48 PushV
	func_170(var_24_int); // 0x49 NEW_2
	var_19_int = var_24_int; // 0x4a Mov
	var_38_int = var_19_int; // 0x4c Push
	if(var_38_int == 0) goto Label_94; // 0x4d JumpB
	irand(var_20_int, var_19_int); // 0x4e Func
	var_39_string = ""; var_40_int = 0; // 0x50 PushV
	var_40_int = var_20_int; // 0x51 Mov
	func_164(var_39_string, var_40_int); // 0x52 NEW_2
	var_21_string = var_39_string; // 0x53 Mov
	var_44_string = "all"; // 0x55 PushS
	PlayAnimation(var_44_string, var_21_string); // 0x56 Func
	var_45_string = ""; // 0x58 PushV
	var_45_string = var_21_string; // 0x59 Mov
	func_110(var_45_string); // 0x5a NEW_2
	WaitForAnimEnd(); // 0x5c Func
	
Label_94:
	goto Label_101; // 0x5e Jump
	
Label_101:
	return 8; // 0x65 Return
	
Label_95:
	var_74_string = "all"; // 0x5f PushS
	var_75_string = "idle"; // 0x60 PushS
	PlayAnimation(var_74_string, var_75_string); // 0x61 Func
	WaitForAnimEnd(); // 0x63 Func
}


func_164(var_39_string, var_40_int)
{
	var_41_string = "idle"; // 0xa5 PushS
	var_42_int = 1; // 0xa6 PushI
	var_43_int = var_40_int + var_42_int; // 0xa7 Add
	var_39_string = var_41_string + var_43_int; // 0xa8 Add2
	return 0; // 0xa9 Return
}


func_38()
{
	RemoveEnvelope(); // 0x26 Func
	RemoveRTEnvelope(); // 0x28 Func
	
Label_42:
	var_8_bool = 0; // 0x2a PushV
	func_105(var_8_bool); // 0x2b NEW_2
	var_11_bool = var_8_bool == 0; // 0x2d Not
	if(var_11_bool == 0) goto Label_52; // 0x2e JumpB
	TaskCall(0); // 0x30 TaskCall
	func_0(); // 0x31 NEW_2
	TaskReturn(); // 0x32 TaskReturn
	
Label_52:
	TaskCall(2); // 0x35 TaskCall
	func_66(); // 0x36 NEW_2
	TaskReturn(); // 0x37 TaskReturn
	goto Label_42; // 0x39 Jump
}


func_102()
{
	StopAnimation(); // 0x66 Func
	return 0; // 0x68 Return
}


func_105(var_8_bool)
{
	var_9_bool = 0; var_10_bool = 0; // 0x69 PushV
	IsLoaded(var_10_bool); // 0x6a Func
	var_8_bool = var_10_bool; // 0x6c Mov
	return 2; // 0x6d Return
}


func_170(var_24_int)
{
	var_25_int = 0; var_26_bool = 0; var_27_int = 0; var_28_bool = 0; // 0xaa PushV
	var_27_int = 0; // 0xab MovI
	
Label_172:
	var_29_string = "all"; // 0xac PushS
	var_30_string = ""; var_31_int = 0; // 0xad PushV
	var_32_int = 1; // 0xae PushI
	var_31_int = var_27_int + var_32_int; // 0xaf Add2
	func_157(var_30_string, var_31_int); // 0xb0 NEW_2
	HasAnimation(var_28_bool, var_29_string, var_30_string); // 0xb2 Func
	var_36_bool = var_28_bool == 0; // 0xb4 Not
	if(var_36_bool == 0) goto Label_183; // 0xb5 JumpB
	goto Label_186; // 0xb6 Jump
	
Label_186:
	var_24_int = var_27_int; // 0xba Mov
	return 4; // 0xbb Return
	
Label_183:
	var_37_int = 1; // 0xb7 PushI
	var_27_int = var_27_int + var_37_int; // 0xb8 Add2
	goto Label_172; // 0xb9 Jump
}


func_110(var_45_string)
{
	var_46_bool = 0; var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_bool = 0; var_51_float = 0; var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_bool = 0; var_55_int = 0; var_56_bool = 0; var_57_int = 0; var_58_bool = 0; var_59_float = 0; var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); // 0x6e PushV
	IsExisting3DSound(var_54_bool, var_45_string); // 0x6f Func
	var_62_bool = var_54_bool == 0; // 0x71 Not
	if(var_62_bool == 0) goto Label_135; // 0x72 JumpB
	var_55_int = 0; // 0x73 MovI
	
Label_116:
	var_63_int = 1; // 0x74 PushI
	var_64_int = var_55_int + var_63_int; // 0x75 Add
	var_65_int = var_45_string + var_64_int; // 0x76 Add
	IsExisting3DSound(var_56_bool, var_65_int); // 0x77 Func
	var_66_bool = var_56_bool == 0; // 0x79 Not
	if(var_66_bool == 0) goto Label_124; // 0x7a JumpB
	goto Label_127; // 0x7b Jump
	
Label_127:
	var_67_bool = var_55_int == 0; // 0x7f Not
	if(var_67_bool == 0) goto Label_130; // 0x80 JumpB
	return 16; // 0x81 Return
	
Label_130:
	irand(var_57_int, var_55_int); // 0x82 Func
	var_68_int = 1; // 0x84 PushI
	var_69_int = var_57_int + var_68_int; // 0x85 Add
	var_45_string = var_45_string + var_69_int; // 0x86 Add2
	
Label_135:
	Is3DSoundLoaded(var_58_bool, var_45_string); // 0x87 Func
	var_70_bool = var_58_bool; // 0x89 Push
	if(var_70_bool == 0) goto Label_150; // 0x8a JumpB
	GetEyesHeight(var_59_float); // 0x8b Func
	GetDirection(var_60_cvector); // 0x8d Func
	var_71_int = 50; // 0x8f PushI
	var_61_cvector = var_60_cvector * var_71_int; // 0x90 Mult2
	var_72_float = GetByIndex(var_61_cvector, 1); // 0x91 PushE
	var_72_float = var_72_float + var_59_float; // 0x92 Add2
	SetByIndex(var_61_cvector, 1) = var_72_float; // 0x93 PopE
	PlayGlobalSound(var_45_string, var_61_cvector); // 0x94 Func
	
Label_150:
	return 16; // 0x96 Return
	
Label_124:
	var_73_int = 1; // 0x7c PushI
	var_55_int = var_55_int + var_73_int; // 0x7d Add2
	goto Label_116; // 0x7e Jump
}


func_20()
{
	var_0_object = Obj(); var_1_object = Obj(); var_2_object = Obj(); var_3_object = Obj(); // 0x14 PushV
	GetScene(var_2_object); // 0x15 Func
	var_4_string = "b6q01_bull_envelope"; // 0x17 PushS
	var_5_cvector = CVector(0.0, 0.0, 0.0); // 0x18 PushVec
	var_6_cvector = CVector(0.0, 0.0, 1.0); // 0x19 PushVec
	AddActor(var_3_object, var_4_string, var_2_object, var_5_cvector, var_6_cvector); // 0x1a Func
	var_7_object = GlobalVars[0]; // 0x1c PushGE
	var_7_object = var_3_object; // 0x1d Mov
	GlobalVars[0] = var_7_object; // 0x1e PopGE
	return 4; // 0x1f Return
}


func_151(var_1_object)
{
	var_2_object = Obj(); var_3_object = Obj(); // 0x97 PushV
	self(var_3_object); // 0x98 Func
	var_1_object = var_3_object; // 0x9a Mov
	return 2; // 0x9b Return
}


func_157(var_30_string, var_31_int)
{
	var_33_string = ""; var_34_string = ""; // 0x9d PushV
	var_34_string = "idle"; // 0x9e MovS
	var_35_int = var_31_int; // 0x9f Push
	if(var_35_int == 0) goto Label_162; // 0xa0 JumpB
	var_34_string = var_34_string + var_31_int; // 0xa1 Add2
	
Label_162:
	var_30_string = var_34_string; // 0xa2 Mov
	return 2; // 0xa3 Return
}


