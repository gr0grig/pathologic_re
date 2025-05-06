task_0_event_5(var_0_object)
{
	var_1_int = 0; var_2_bool = 0; var_3_object = Obj(); var_4_int = 0; var_5_int = 0; var_6_int = 0; var_7_int = 0; var_8_int = 0; var_9_int = 0; var_10_int = 0; var_11_int = 0; var_12_int = 0; var_13_int = 0; var_14_int = 0; var_15_int = 0; var_16_int = 0; var_17_int = 0; var_18_bool = 0; var_19_object = Obj(); var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_int = 0; var_24_int = 0; var_25_int = 0; var_26_int = 0; var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_int = 0; var_31_int = 0; var_32_int = 0; // 0x8 PushV
	var_17_int = 0; // 0x9 MovI
	
Label_10:
	var_33_string = "pt_spawn"; // 0xa PushS
	var_34_int = 1; // 0xb PushI
	var_35_int = var_17_int + var_34_int; // 0xc Add
	var_36_int = var_33_string + var_35_int; // 0xd Add
	GetLocator(var_36_int, var_18_bool); // 0xe Func
	var_37_bool = var_18_bool == 0; // 0x10 Not
	if(var_37_bool == 0) goto Label_19; // 0x11 JumpB
	goto Label_22; // 0x12 Jump
	
Label_22:
	var_38_int = 22; // 0x16 PushI
	var_39_bool = var_17_int < var_38_int; // 0x17 LT
	if(var_39_bool == 0) goto Label_29; // 0x18 JumpB
	var_40_string = "Not enough spawn points"; // 0x19 PushS
	Trace(var_40_string); // 0x1a Func
	return 32; // 0x1c Return
	
Label_29:
	CreateIntVector(var_19_object); // 0x1d Func
	var_20_int = 1; // 0x1f MovI
	
Label_32:
	var_41_bool = var_20_int <= var_17_int; // 0x20 LE
	if(var_41_bool == 0) goto Label_39; // 0x21 JumpB
	add(var_20_int); // 0x22 ObjFunc
	var_42_int = 1; // 0x24 PushI
	var_20_int = var_20_int + var_42_int; // 0x25 Add2
	goto Label_32; // 0x26 Jump
	
Label_39:
	var_21_int = 0; // 0x27 MovI
	
Label_40:
	var_43_int = 6; // 0x28 PushI
	var_44_bool = var_21_int < var_43_int; // 0x29 LT
	if(var_44_bool == 0) goto Label_67; // 0x2a JumpB
	irand(var_22_int, var_17_int); // 0x2b Func
	get(var_23_int, var_22_int); // 0x2d ObjFunc
	remove(var_22_int); // 0x2f ObjFunc
	var_45_int = -1; // 0x31 PushI
	var_17_int = var_17_int + var_45_int; // 0x32 Add2
	var_46_object = Obj(); var_47_object = Obj(); var_48_string = ""; var_49_string = ""; var_50_string = ""; // 0x33 PushV
	var_51_object = Obj(); // 0x34 PushV
	func_158(var_51_object); // 0x35 NEW_2
	var_47_object = var_51_object; // 0x36 Mov
	var_54_string = "pt_spawn"; // 0x38 PushS
	var_48_string = var_54_string + var_23_int; // 0x39 Add2
	var_49_string = "pers_littleboy"; // 0x3a MovS
	var_50_string = "littleboy_mnogogrannik.xml"; // 0x3b MovS
	func_170(var_46_object, var_47_object, var_48_string, var_49_string, var_50_string); // 0x3c NEW_2
	add(var_46_object); // 0x3e TObjFunc
	var_68_int = 1; // 0x40 PushI
	var_21_int = var_21_int + var_68_int; // 0x41 Add2
	goto Label_40; // 0x42 Jump
	
Label_67:
	var_24_int = 0; // 0x43 MovI
	
Label_68:
	var_69_int = 6; // 0x44 PushI
	var_70_bool = var_24_int < var_69_int; // 0x45 LT
	if(var_70_bool == 0) goto Label_95; // 0x46 JumpB
	irand(var_25_int, var_17_int); // 0x47 Func
	get(var_26_int, var_25_int); // 0x49 ObjFunc
	remove(var_25_int); // 0x4b ObjFunc
	var_71_int = -1; // 0x4d PushI
	var_17_int = var_17_int + var_71_int; // 0x4e Add2
	var_72_object = Obj(); var_73_object = Obj(); var_74_string = ""; var_75_string = ""; var_76_string = ""; // 0x4f PushV
	var_77_object = Obj(); // 0x50 PushV
	func_158(var_77_object); // 0x51 NEW_2
	var_73_object = var_77_object; // 0x52 Mov
	var_78_string = "pt_spawn"; // 0x54 PushS
	var_74_string = var_78_string + var_26_int; // 0x55 Add2
	var_75_string = "pers_littlegirl"; // 0x56 MovS
	var_76_string = "littlegirl_mnogogrannik.xml"; // 0x57 MovS
	func_170(var_72_object, var_73_object, var_74_string, var_75_string, var_76_string); // 0x58 NEW_2
	add(var_72_object); // 0x5a TObjFunc
	var_79_int = 1; // 0x5c PushI
	var_24_int = var_24_int + var_79_int; // 0x5d Add2
	goto Label_68; // 0x5e Jump
	
Label_95:
	var_27_int = 0; // 0x5f MovI
	
Label_96:
	var_80_int = 5; // 0x60 PushI
	var_81_bool = var_27_int < var_80_int; // 0x61 LT
	if(var_81_bool == 0) goto Label_123; // 0x62 JumpB
	irand(var_28_int, var_17_int); // 0x63 Func
	get(var_29_int, var_28_int); // 0x65 ObjFunc
	remove(var_28_int); // 0x67 ObjFunc
	var_82_int = -1; // 0x69 PushI
	var_17_int = var_17_int + var_82_int; // 0x6a Add2
	var_83_object = Obj(); var_84_object = Obj(); var_85_string = ""; var_86_string = ""; var_87_string = ""; // 0x6b PushV
	var_88_object = Obj(); // 0x6c PushV
	func_158(var_88_object); // 0x6d NEW_2
	var_84_object = var_88_object; // 0x6e Mov
	var_89_string = "pt_spawn"; // 0x70 PushS
	var_85_string = var_89_string + var_29_int; // 0x71 Add2
	var_86_string = "pers_doberman"; // 0x72 MovS
	var_87_string = "boy_mnogogrannik.xml"; // 0x73 MovS
	func_170(var_83_object, var_84_object, var_85_string, var_86_string, var_87_string); // 0x74 NEW_2
	add(var_83_object); // 0x76 TObjFunc
	var_90_int = 1; // 0x78 PushI
	var_27_int = var_27_int + var_90_int; // 0x79 Add2
	goto Label_96; // 0x7a Jump
	
Label_123:
	var_30_int = 0; // 0x7b MovI
	
Label_124:
	var_91_int = 5; // 0x7c PushI
	var_92_bool = var_30_int < var_91_int; // 0x7d LT
	if(var_92_bool == 0) goto Label_151; // 0x7e JumpB
	irand(var_31_int, var_17_int); // 0x7f Func
	get(var_32_int, var_31_int); // 0x81 ObjFunc
	remove(var_31_int); // 0x83 ObjFunc
	var_93_int = -1; // 0x85 PushI
	var_17_int = var_17_int + var_93_int; // 0x86 Add2
	var_94_object = Obj(); var_95_object = Obj(); var_96_string = ""; var_97_string = ""; var_98_string = ""; // 0x87 PushV
	var_99_object = Obj(); // 0x88 PushV
	func_158(var_99_object); // 0x89 NEW_2
	var_95_object = var_99_object; // 0x8a Mov
	var_100_string = "pt_spawn"; // 0x8c PushS
	var_96_string = var_100_string + var_32_int; // 0x8d Add2
	var_97_string = "pers_girl"; // 0x8e MovS
	var_98_string = "girl_mnogogrannik.xml"; // 0x8f MovS
	func_170(var_94_object, var_95_object, var_96_string, var_97_string, var_98_string); // 0x90 NEW_2
	add(var_94_object); // 0x92 TObjFunc
	var_101_int = 1; // 0x94 PushI
	var_30_int = var_30_int + var_101_int; // 0x95 Add2
	goto Label_124; // 0x96 Jump
	
Label_151:
	return 32; // 0x97 Return
	
Label_19:
	var_102_int = 1; // 0x13 PushI
	var_17_int = var_17_int + var_102_int; // 0x14 Add2
	goto Label_10; // 0x15 Jump
}


task_0_event_6(var_0_object)
{
	var_1_object = Obj(); // 0x99 PushV
	var_1_object = var_0_object; // 0x9a MovT
	func_188(var_1_object); // 0x9b NEW_2
	return 0; // 0x9d Return
}


main(var_0_object)
{
	var_1_object = Obj(); // 0x0 PushV
	func_164(var_1_object); // 0x1 NEW_2
	var_0_object = var_1_object; // 0x2 TMov
	
Label_4:
	Hold(); // 0x4 Func
	goto Label_4; // 0x6 Jump
}


func_170(var_46_object, var_47_object, var_48_string, var_49_string, var_50_string)
{
	var_55_bool = 0; var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_object = Obj(); var_59_bool = 0; var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_object = Obj(); // 0xaa PushV
	GetLocator(var_48_string, var_59_bool, var_60_cvector, var_61_cvector); // 0xab ObjFunc
	var_63_bool = var_59_bool == 0; // 0xad Not
	if(var_63_bool == 0) goto Label_183; // 0xae JumpB
	var_64_string = "Locator "; // 0xaf PushS
	var_65_int = var_64_string + var_48_string; // 0xb0 Add
	var_66_string = " doesn't exist"; // 0xb1 PushS
	var_67_int = var_65_int + var_66_string; // 0xb2 Add
	Trace(var_67_int); // 0xb3 Func
	var_62_object = 0; // 0xb5 SetNull
	goto Label_185; // 0xb6 Jump
	
Label_185:
	var_46_object = var_62_object; // 0xb9 Mov
	return 8; // 0xba Return
	
Label_183:
	AddActor(var_62_object, var_49_string, var_47_object, var_60_cvector, var_61_cvector, var_50_string); // 0xb7 Func
}


func_188(var_1_object)
{
	var_2_int = 0; var_3_int = 0; var_4_object = Obj(); var_5_int = 0; var_6_int = 0; var_7_object = Obj(); // 0xbc PushV
	var_8_object = var_1_object; // 0xbd Push
	if(var_8_object == 0) goto Label_208; // 0xbe JumpB
	size(var_5_int); // 0xbf ObjFunc
	var_6_int = 0; // 0xc1 MovI
	
Label_194:
	var_9_bool = var_6_int < var_5_int; // 0xc2 LT
	if(var_9_bool == 0) goto Label_206; // 0xc3 JumpB
	get(var_7_object, var_6_int); // 0xc4 ObjFunc
	var_10_object = var_7_object; // 0xc6 Push
	if(var_10_object == 0) goto Label_202; // 0xc7 JumpB
	RemoveActor(var_7_object); // 0xc8 Func
	
Label_202:
	var_7_object = 0; // 0xca SetNull
	var_11_int = 1; // 0xcb PushI
	var_6_int = var_6_int + var_11_int; // 0xcc Add2
	goto Label_194; // 0xcd Jump
	
Label_206:
	clear(); // 0xce ObjFunc
	
Label_208:
	return 6; // 0xd0 Return
}


func_164(var_1_object)
{
	var_2_object = Obj(); var_3_object = Obj(); // 0xa4 PushV
	CreateObjectVector(var_3_object); // 0xa5 Func
	var_1_object = var_3_object; // 0xa7 Mov
	return 2; // 0xa8 Return
}


func_158(var_51_object)
{
	var_52_object = Obj(); var_53_object = Obj(); // 0x9e PushV
	self(var_53_object); // 0x9f Func
	var_51_object = var_53_object; // 0xa1 Mov
	return 2; // 0xa2 Return
}


