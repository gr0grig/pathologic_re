task_0_event_15(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_int, var_11_int, var_12_float)
{
	var_13_int = 0; var_14_int = 0; // 0x5f PushV
	var_15_int = 5; // 0x60 PushI
	var_16_float = var_12_float * var_15_int; // 0x61 Mult
	var_17_int = 2; // 0x62 PushI
	var_14_int = var_16_float * var_17_int; // 0x63 Mult2
	var_0_int = var_0_int + var_14_int; // 0x64 Add2
	func_128(var_12_float, var_13_int, var_14_int); // 0x66 NEW_2
	func_149(var_13_int, var_14_int); // 0x69 NEW_2
	return 2; // 0x6b Return
}


task_0_event_0(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object)
{
	var_10_int = 0; var_11_object = Obj(); var_12_object = Obj(); var_13_object = Obj(); var_14_int = 0; var_15_int = 0; var_16_string = ""; var_17_string = ""; var_18_int = 0; var_19_int = 0; var_20_int = 0; var_21_object = Obj(); var_22_object = Obj(); var_23_object = Obj(); var_24_int = 0; var_25_int = 0; var_26_string = ""; var_27_string = ""; var_28_int = 0; var_29_int = 0; // 0x10c PushV
	var_20_int = var_0_int; // 0x10d MovT
	get(var_21_object, var_26_string); // 0x10e TObjFunc
	get(var_22_object, var_26_string); // 0x110 TObjFunc
	get(var_23_object, var_26_string); // 0x112 TObjFunc
	size(var_24_int); // 0x114 ObjFunc
	var_25_int = 0; // 0x116 MovI
	
Label_279:
	var_30_bool = var_25_int < var_24_int; // 0x117 LT
	if(var_30_bool == 0) goto Label_339; // 0x118 JumpB
	get(var_26_string, var_25_int); // 0x119 ObjFunc
	get(var_27_string, var_25_int); // 0x11b ObjFunc
	get(var_28_int, var_25_int); // 0x11d ObjFunc
	var_31_bool = var_28_int == var_6_int; // 0x11f Eq
	if(var_31_bool == 0) goto Label_297; // 0x120 JumpB
	var_32_string = "default"; // 0x121 PushS
	var_33_int = 0; // 0x122 PushI
	var_34_float = 1.0; // 0x123 PushF
	var_35_float = 1.0; // 0x124 PushF
	var_36_float = 1.0; // 0x125 PushF
	PrintInWidth(var_29_int, var_32_string, var_33_int, var_20_int, var_35_float, var_26_string, var_34_float, var_35_float, var_36_float); // 0x126 Func
	goto Label_304; // 0x128 Jump
	
Label_304:
	var_20_int = var_20_int + var_29_int; // 0x130 Add2
	var_37_bool = var_28_int == var_5_int; // 0x131 Eq
	if(var_37_bool == 0) goto Label_334; // 0x132 JumpB
	var_38_int = 5; // 0x133 PushI
	var_20_int = var_20_int + var_38_int; // 0x134 Add2
	var_39_bool = var_28_int == var_6_int; // 0x135 Eq
	if(var_39_bool == 0) goto Label_321; // 0x136 JumpB
	var_40_string = "default"; // 0x137 PushS
	var_41_int = 15; // 0x138 PushI
	var_42_int = 15; // 0x139 PushI
	var_43_int = var_2_int - var_42_int; // 0x13a Sub
	var_44_float = 0.804; // 0x13b PushF
	var_45_float = 0.804; // 0x13c PushF
	var_46_float = 0.804; // 0x13d PushF
	PrintInWidth(var_29_int, var_40_string, var_41_int, var_20_int, var_43_int, var_27_string, var_44_float, var_45_float, var_46_float); // 0x13e Func
	goto Label_330; // 0x140 Jump
	
Label_330:
	var_20_int = var_20_int + var_29_int; // 0x14a Add2
	var_47_int = 5; // 0x14b PushI
	var_20_int = var_20_int + var_47_int; // 0x14c Add2
	goto Label_336; // 0x14d Jump
	
Label_336:
	var_48_int = 1; // 0x150 PushI
	var_25_int = var_25_int + var_48_int; // 0x151 Add2
	goto Label_279; // 0x152 Jump
	
Label_321:
	var_49_string = "default"; // 0x141 PushS
	var_50_int = 15; // 0x142 PushI
	var_51_int = 15; // 0x143 PushI
	var_52_int = var_2_int - var_51_int; // 0x144 Sub
	var_53_float = 0.698; // 0x145 PushF
	var_54_float = 0.659; // 0x146 PushF
	var_55_float = 0.647; // 0x147 PushF
	PrintInWidth(var_29_int, var_49_string, var_50_int, var_20_int, var_52_int, var_27_string, var_53_float, var_54_float, var_55_float); // 0x148 Func
	
Label_334:
	var_56_int = 5; // 0x14e PushI
	var_20_int = var_20_int + var_56_int; // 0x14f Add2
	
Label_297:
	var_57_string = "default"; // 0x129 PushS
	var_58_int = 0; // 0x12a PushI
	var_59_float = 0.804; // 0x12b PushF
	var_60_float = 0.804; // 0x12c PushF
	var_61_float = 0.804; // 0x12d PushF
	PrintInWidth(var_29_int, var_57_string, var_58_int, var_20_int, var_60_float, var_26_string, var_59_float, var_60_float, var_61_float); // 0x12e Func
	
Label_339:
	return 20; // 0x153 Return
}


task_0_event_3(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_int, var_11_int)
{
	var_12_int = 0; var_13_int = 0; // 0x157 PushV
	var_14_int = 0; var_15_int = 0; // 0x158 PushV
	var_15_int = var_11_int; // 0x159 Mov
	func_211(var_11_int, var_12_int, var_13_int, var_14_int, var_15_int); // 0x15a NEW_2
	var_13_int = var_14_int; // 0x15b Mov
	var_51_int = -1; // 0x15d PushI
	var_52_bool = var_13_int == var_51_int; // 0x15e Eq
	if(var_52_bool == 0) goto Label_353; // 0x15f JumpB
	return 2; // 0x160 Return
	
Label_353:
	var_53_bool = var_13_int == var_5_int; // 0x161 Eq
	if(var_53_bool == 0) goto Label_357; // 0x162 JumpB
	var_5_int = -1; // 0x163 TMovI
	goto Label_358; // 0x164 Jump
	
Label_358:
	func_128(var_11_int, var_12_int, var_13_int); // 0x167 NEW_2
	func_149(var_12_int, var_13_int); // 0x16a NEW_2
	return 2; // 0x16c Return
	
Label_357:
	var_5_int = var_13_int; // 0x165 TMov
}


task_0_event_8(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_int, var_11_int)
{
	var_12_int = 0; var_13_int = 0; // 0x16e PushV
	var_13_int = var_11_int; // 0x16f Mov
	func_211(var_9_object, var_10_int, var_11_int, var_12_int, var_13_int); // 0x170 NEW_2
	var_6_int = var_12_int; // 0x171 TMov
	return 0; // 0x173 Return
}


task_0_event_10(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object)
{
	var_6_int = -1; // 0x174 TMovI
	return 0; // 0x175 Return
}


task_0_event_200(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_int, var_11_string, var_12_object)
{
	var_13_string = "scrollbar"; // 0x177 PushS
	var_14_bool = var_11_string == var_13_string; // 0x178 Eq
	if(var_14_bool == 0) goto Label_387; // 0x179 JumpB
	var_15_int = -var_1_int; // 0x17a Neg
	var_16_float = var_15_int * var_10_int; // 0x17b Mult
	var_17_int = 100; // 0x17c PushI
	var_0_int = var_16_float / var_16_float; // 0x17d Div2
	func_128(var_10_int, var_11_string, var_12_object); // 0x17f NEW_2
	return 0; // 0x181 Return
	
Label_387:
	var_55_string = "message"; // 0x183 PushS
	var_56_bool = var_11_string == var_55_string; // 0x184 Eq
	if(var_56_bool == 0) goto Label_417; // 0x185 JumpB
	var_57_int = 32768; // 0x186 PushI
	var_58_int = var_10_int & var_57_int; // 0x187 And
	if(var_58_int == 0) goto Label_396; // 0x188 JumpB
	var_59_int = 32767; // 0x189 PushI
	var_5_int = var_10_int & var_59_int; // 0x18a And2
	goto Label_417; // 0x18b Jump
	
Label_417:
	return 0; // 0x1a1 Return
	
Label_396:
	var_60_int = 1000; // 0x18c PushI
	var_61_bool = var_10_int == var_60_int; // 0x18d Eq
	if(var_61_bool == 0) goto Label_403; // 0x18e JumpB
	func_118(var_12_object); // 0x190 NEW_2
	goto Label_417; // 0x192 Jump
	
Label_403:
	var_73_int = 1001; // 0x193 PushI
	var_74_bool = var_10_int == var_73_int; // 0x194 Eq
	if(var_74_bool == 0) goto Label_410; // 0x195 JumpB
	func_108(var_12_object); // 0x197 NEW_2
	goto Label_417; // 0x199 Jump
	
Label_410:
	var_4_int = var_10_int; // 0x19a TMov
	func_128(var_10_int, var_11_string, var_12_object); // 0x19c NEW_2
	func_149(var_11_string, var_12_object); // 0x19f NEW_2
}


main(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object)
{
	var_10_int = 0; var_11_object = Obj(); var_12_int = 0; var_13_int = 0; var_14_float = 0; var_15_string = ""; var_16_string = ""; var_17_int = 0; var_18_int = 0; var_19_object = Obj(); var_20_object = Obj(); var_21_object = Obj(); var_22_int = 0; var_23_object = Obj(); var_24_int = 0; var_25_int = 0; var_26_float = 0; var_27_string = ""; var_28_string = ""; var_29_int = 0; var_30_int = 0; var_31_object = Obj(); var_32_object = Obj(); var_33_object = Obj(); // 0x0 PushV
	var_34_bool = 1; // 0x1 PushB
	SetOwnerDraw(var_34_bool); // 0x2 Func
	var_35_bool = 1; // 0x4 PushB
	EnableClipping(var_35_bool); // 0x5 Func
	GetWindowSize(var_32_object, var_31_object); // 0x7 Func
	var_0_int = 0; // 0x9 TMovI
	var_4_int = 0; // 0xa TMovI
	var_5_int = -1; // 0xb TMovI
	CreateObjectVector(var_27_string); // 0xc Func
	CreateObjectVector(var_26_float); // 0xe Func
	CreateObjectVector(var_25_int); // 0x10 Func
	var_22_int = 0; // 0x12 MovI
	
Label_19:
	var_36_int = 12; // 0x13 PushI
	var_37_bool = var_22_int < var_36_int; // 0x14 LT
	if(var_37_bool == 0) goto Label_38; // 0x15 JumpB
	CreateStringVector(var_23_object); // 0x16 Func
	add(var_23_object); // 0x18 TObjFunc
	CreateStringVector(var_23_object); // 0x1a Func
	add(var_23_object); // 0x1c TObjFunc
	CreateIntVector(var_23_object); // 0x1e Func
	add(var_23_object); // 0x20 TObjFunc
	var_23_object = 0; // 0x22 SetNull
	var_38_int = 1; // 0x23 PushI
	var_22_int = var_22_int + var_38_int; // 0x24 Add2
	goto Label_19; // 0x25 Jump
	
Label_38:
	GetMessageCount(var_24_int); // 0x26 Func
	var_39_int = var_24_int; // 0x28 Push
	if(var_39_int == 0) goto Label_86; // 0x29 JumpB
	var_40_int = 1; // 0x2a PushI
	var_25_int = var_24_int - var_40_int; // 0x2b Sub2
	
Label_44:
	var_41_int = 0; // 0x2c PushI
	var_42_bool = var_25_int >= var_41_int; // 0x2d GE
	if(var_42_bool == 0) goto Label_84; // 0x2e JumpB
	GetMessage(var_25_int, var_27_string, var_28_string, var_26_float); // 0x2f Func
	var_43_int = 24; // 0x31 PushI
	var_29_int = var_26_float / var_26_float; // 0x32 Div2
	var_44_int = 24; // 0x33 PushI
	var_45_float = var_29_int * var_44_int; // 0x34 Mult
	var_30_int = var_26_float - var_45_float; // 0x35 Sub2
	var_46_bool = 0; // 0x36 PushV
	var_46_bool = 0; // 0x37 MovB
	var_47_int = 7; // 0x38 PushI
	var_48_bool = var_30_int < var_47_int; // 0x39 LT
	if(var_48_bool == 0) goto Label_63; // 0x3a JumpB
	var_49_int = 0; // 0x3b PushI
	var_50_bool = var_29_int > var_49_int; // 0x3c GT
	if(var_50_bool == 0) goto Label_63; // 0x3d JumpB
	var_46_bool = 1; // 0x3e MovB
	
Label_63:
	if(var_46_bool == 0) goto Label_66; // 0x3f JumpB
	var_51_int = -1; // 0x40 PushI
	var_29_int = var_29_int + var_51_int; // 0x41 Add2
	
Label_66:
	get(var_31_object, var_29_int); // 0x42 TObjFunc
	get(var_32_object, var_29_int); // 0x44 TObjFunc
	get(var_33_object, var_29_int); // 0x46 TObjFunc
	add(var_27_string); // 0x48 ObjFunc
	add(var_28_string); // 0x4a ObjFunc
	add(var_25_int); // 0x4c ObjFunc
	var_33_object = 0; // 0x4e SetNull
	var_32_object = 0; // 0x4f SetNull
	var_31_object = 0; // 0x50 SetNull
	var_52_int = -1; // 0x51 PushI
	var_25_int = var_25_int + var_52_int; // 0x52 Add2
	goto Label_44; // 0x53 Jump
	
Label_84:
	var_53_int = 1; // 0x54 PushI
	var_5_int = var_24_int - var_53_int; // 0x55 Sub2
	
Label_86:
	func_128(var_31_object, var_32_object, var_33_object); // 0x57 NEW_2
	func_149(var_32_object, var_33_object); // 0x5a NEW_2
	ProcessEvents(); // 0x5c Func
	return 24; // 0x5e Return
}


func_128(var_0_int, var_1_int, var_3_int)
{
	var_54_int = 0; // 0x80 PushV
	func_165(var_32_object, var_33_object, var_54_int); // 0x81 NEW_2
	var_1_int = var_54_int; // 0x82 TMov
	var_1_int = var_1_int - var_3_int; // 0x84 Sub2
	var_85_int = 0; // 0x85 PushI
	var_86_bool = var_1_int < var_85_int; // 0x86 LT
	if(var_86_bool == 0) goto Label_139; // 0x87 JumpB
	var_1_int = 0; // 0x88 TMovI
	var_0_int = 0; // 0x89 TMovI
	goto Label_148; // 0x8a Jump
	
Label_148:
	return 0; // 0x94 Return
	
Label_139:
	var_87_int = -var_0_int; // 0x8b Neg
	var_88_bool = var_87_int > var_1_int; // 0x8c GT
	if(var_88_bool == 0) goto Label_144; // 0x8d JumpB
	var_0_int = -var_1_int; // 0x8e Neg2
	goto Label_148; // 0x8f Jump
	
Label_144:
	var_89_int = 0; // 0x90 PushI
	var_90_bool = var_0_int > var_89_int; // 0x91 GT
	if(var_90_bool == 0) goto Label_148; // 0x92 JumpB
	var_0_int = 0; // 0x93 TMovI
}


func_165(var_2_int, var_5_int, var_54_int)
{
	var_55_int = 0; var_56_object = Obj(); var_57_object = Obj(); var_58_object = Obj(); var_59_int = 0; var_60_int = 0; var_61_string = ""; var_62_string = ""; var_63_int = 0; var_64_int = 0; var_65_int = 0; var_66_object = Obj(); var_67_object = Obj(); var_68_object = Obj(); var_69_int = 0; var_70_int = 0; var_71_string = ""; var_72_string = ""; var_73_int = 0; var_74_int = 0; // 0xa5 PushV
	var_65_int = 0; // 0xa6 MovI
	get(var_66_object, var_71_string); // 0xa7 TObjFunc
	get(var_67_object, var_71_string); // 0xa9 TObjFunc
	get(var_68_object, var_71_string); // 0xab TObjFunc
	size(var_69_int); // 0xad ObjFunc
	var_70_int = 0; // 0xaf MovI
	
Label_176:
	var_75_bool = var_70_int < var_69_int; // 0xb0 LT
	if(var_75_bool == 0) goto Label_206; // 0xb1 JumpB
	get(var_71_string, var_70_int); // 0xb2 ObjFunc
	get(var_72_string, var_70_int); // 0xb4 ObjFunc
	get(var_73_int, var_70_int); // 0xb6 ObjFunc
	var_76_string = "default"; // 0xb8 PushS
	GetTextHeightInWidth(var_74_int, var_76_string, var_74_int, var_71_string); // 0xb9 Func
	var_65_int = var_65_int + var_74_int; // 0xbb Add2
	var_77_bool = var_73_int == var_5_int; // 0xbc Eq
	if(var_77_bool == 0) goto Label_201; // 0xbd JumpB
	var_78_int = 5; // 0xbe PushI
	var_65_int = var_65_int + var_78_int; // 0xbf Add2
	var_79_string = "default"; // 0xc0 PushS
	var_80_int = 15; // 0xc1 PushI
	var_81_int = var_2_int - var_80_int; // 0xc2 Sub
	GetTextHeightInWidth(var_74_int, var_79_string, var_81_int, var_72_string); // 0xc3 Func
	var_65_int = var_65_int + var_74_int; // 0xc5 Add2
	var_82_int = 5; // 0xc6 PushI
	var_65_int = var_65_int + var_82_int; // 0xc7 Add2
	goto Label_203; // 0xc8 Jump
	
Label_203:
	var_83_int = 1; // 0xcb PushI
	var_70_int = var_70_int + var_83_int; // 0xcc Add2
	goto Label_176; // 0xcd Jump
	
Label_201:
	var_84_int = 5; // 0xc9 PushI
	var_65_int = var_65_int + var_84_int; // 0xca Add2
	
Label_206:
	var_54_int = var_65_int; // 0xce Mov
	return 20; // 0xcf Return
}


func_108(var_0_int)
{
	var_75_int = 0; var_76_int = 0; // 0x6c PushV
	var_76_int = 20; // 0x6d MovI
	var_0_int = var_0_int + var_76_int; // 0x6e Add2
	func_128(var_12_object, var_75_int, var_76_int); // 0x70 NEW_2
	func_149(var_75_int, var_76_int); // 0x73 NEW_2
	return 2; // 0x75 Return
}


func_211(var_0_int, var_2_int, var_5_int, var_12_int, var_13_int)
{
	var_14_int = 0; var_15_object = Obj(); var_16_object = Obj(); var_17_object = Obj(); var_18_int = 0; var_19_int = 0; var_20_int = 0; var_21_string = ""; var_22_string = ""; var_23_int = 0; var_24_int = 0; var_25_int = 0; var_26_object = Obj(); var_27_object = Obj(); var_28_object = Obj(); var_29_int = 0; var_30_int = 0; var_31_int = 0; var_32_string = ""; var_33_string = ""; var_34_int = 0; var_35_int = 0; // 0xd3 PushV
	var_25_int = var_0_int; // 0xd4 MovT
	get(var_26_object, var_32_string); // 0xd5 TObjFunc
	get(var_27_object, var_32_string); // 0xd7 TObjFunc
	get(var_28_object, var_32_string); // 0xd9 TObjFunc
	size(var_29_int); // 0xdb ObjFunc
	var_30_int = 0; // 0xdd MovI
	
Label_222:
	var_36_bool = var_30_int < var_29_int; // 0xde LT
	if(var_36_bool == 0) goto Label_263; // 0xdf JumpB
	var_31_int = var_25_int; // 0xe0 Mov
	get(var_32_string, var_30_int); // 0xe1 ObjFunc
	get(var_33_string, var_30_int); // 0xe3 ObjFunc
	get(var_34_int, var_30_int); // 0xe5 ObjFunc
	var_37_string = "default"; // 0xe7 PushS
	GetTextHeightInWidth(var_35_int, var_37_string, var_35_int, var_32_string); // 0xe8 Func
	var_25_int = var_25_int + var_35_int; // 0xea Add2
	var_38_bool = var_34_int == var_5_int; // 0xeb Eq
	if(var_38_bool == 0) goto Label_248; // 0xec JumpB
	var_39_int = 5; // 0xed PushI
	var_25_int = var_25_int + var_39_int; // 0xee Add2
	var_40_string = "default"; // 0xef PushS
	var_41_int = 15; // 0xf0 PushI
	var_42_int = var_2_int - var_41_int; // 0xf1 Sub
	GetTextHeightInWidth(var_35_int, var_40_string, var_42_int, var_33_string); // 0xf2 Func
	var_25_int = var_25_int + var_35_int; // 0xf4 Add2
	var_43_int = 5; // 0xf5 PushI
	var_25_int = var_25_int + var_43_int; // 0xf6 Add2
	goto Label_250; // 0xf7 Jump
	
Label_250:
	var_44_bool = 0; // 0xfa PushV
	var_44_bool = 0; // 0xfb MovB
	var_45_bool = var_13_int > var_31_int; // 0xfc GT
	if(var_45_bool == 0) goto Label_257; // 0xfd JumpB
	var_46_bool = var_13_int < var_25_int; // 0xfe LT
	if(var_46_bool == 0) goto Label_257; // 0xff JumpB
	var_44_bool = 1; // 0x100 MovB
	
Label_257:
	if(var_44_bool == 0) goto Label_260; // 0x101 JumpB
	var_12_int = var_34_int; // 0x102 Mov
	return 22; // 0x103 Return
	
Label_260:
	var_47_int = 1; // 0x104 PushI
	var_30_int = var_30_int + var_47_int; // 0x105 Add2
	goto Label_222; // 0x106 Jump
	
Label_248:
	var_48_int = 5; // 0xf8 PushI
	var_25_int = var_25_int + var_48_int; // 0xf9 Add2
	
Label_263:
	var_12_int = -1; // 0x107 MovI
	return 22; // 0x108 Return
}


func_149(var_0_int, var_1_int)
{
	var_91_int = 0; // 0x95 PushI
	var_92_bool = var_1_int == var_91_int; // 0x96 Eq
	if(var_92_bool == 0) goto Label_157; // 0x97 JumpB
	var_93_int = 16384; // 0x98 PushI
	var_94_string = "scrollbar"; // 0x99 PushS
	SendMessage(var_93_int, var_94_string); // 0x9a Func
	goto Label_164; // 0x9c Jump
	
Label_164:
	return 0; // 0xa4 Return
	
Label_157:
	var_95_int = -var_0_int; // 0x9d Neg
	var_96_int = 100; // 0x9e PushI
	var_97_float = var_95_int * var_96_int; // 0x9f Mult
	var_98_float = var_97_float / var_1_int; // 0xa0 Div
	var_99_string = "scrollbar"; // 0xa1 PushS
	SendMessage(var_98_float, var_99_string); // 0xa2 Func
}


func_118(var_0_int)
{
	var_62_int = 0; var_63_int = 0; // 0x76 PushV
	var_63_int = -20; // 0x77 MovI
	var_0_int = var_0_int + var_63_int; // 0x78 Add2
	func_128(var_12_object, var_62_int, var_63_int); // 0x7a NEW_2
	func_149(var_62_int, var_63_int); // 0x7d NEW_2
	return 2; // 0x7f Return
}


