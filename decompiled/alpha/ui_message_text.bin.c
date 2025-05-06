task_0_event_0(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object)
{
	var_10_int = 0; var_11_object = Obj(); var_12_object = Obj(); var_13_object = Obj(); var_14_int = 0; var_15_int = 0; var_16_string = ""; var_17_string = ""; var_18_int = 0; var_19_int = 0; var_20_int = 0; var_21_object = Obj(); var_22_object = Obj(); var_23_object = Obj(); var_24_int = 0; var_25_int = 0; var_26_string = ""; var_27_string = ""; var_28_int = 0; var_29_int = 0; // 0xb5 PushV
	func_68(var_28_int, var_29_int); // 0xb7 Call
	var_20_int = var_0_int; // 0xb9 MovT
	get(var_21_object, var_26_string); // 0xba TObjFunc
	get(var_22_object, var_26_string); // 0xbc TObjFunc
	get(var_23_object, var_26_string); // 0xbe TObjFunc
	size(var_24_int); // 0xc0 ObjFunc
	var_25_int = 0; // 0xc2 MovI
	
Label_195:
	var_63_bool = var_25_int < var_24_int; // 0xc3 LT
	if(var_63_bool == 0) goto Label_255; // 0xc4 JumpB
	get(var_26_string, var_25_int); // 0xc5 ObjFunc
	get(var_27_string, var_25_int); // 0xc7 ObjFunc
	get(var_28_int, var_25_int); // 0xc9 ObjFunc
	var_64_bool = var_28_int == var_6_int; // 0xcb Eq
	if(var_64_bool == 0) goto Label_213; // 0xcc JumpB
	var_65_string = "default"; // 0xcd PushS
	var_66_int = 0; // 0xce PushI
	var_67_float = 1.0; // 0xcf PushF
	var_68_float = 1.0; // 0xd0 PushF
	var_69_float = 1.0; // 0xd1 PushF
	PrintInWidth(var_29_int, var_65_string, var_66_int, var_20_int, var_68_float, var_26_string, var_67_float, var_68_float, var_69_float); // 0xd2 Func
	goto Label_220; // 0xd4 Jump
	
Label_220:
	var_20_int = var_20_int + var_29_int; // 0xdc Add2
	var_70_bool = var_28_int == var_5_int; // 0xdd Eq
	if(var_70_bool == 0) goto Label_250; // 0xde JumpB
	var_71_int = 5; // 0xdf PushI
	var_20_int = var_20_int + var_71_int; // 0xe0 Add2
	var_72_bool = var_28_int == var_6_int; // 0xe1 Eq
	if(var_72_bool == 0) goto Label_237; // 0xe2 JumpB
	var_73_string = "default"; // 0xe3 PushS
	var_74_int = 15; // 0xe4 PushI
	var_75_int = 15; // 0xe5 PushI
	var_76_int = var_2_int - var_75_int; // 0xe6 Sub
	var_77_float = 0.804; // 0xe7 PushF
	var_78_float = 0.804; // 0xe8 PushF
	var_79_float = 0.804; // 0xe9 PushF
	PrintInWidth(var_29_int, var_73_string, var_74_int, var_20_int, var_76_int, var_27_string, var_77_float, var_78_float, var_79_float); // 0xea Func
	goto Label_246; // 0xec Jump
	
Label_246:
	var_20_int = var_20_int + var_29_int; // 0xf6 Add2
	var_80_int = 5; // 0xf7 PushI
	var_20_int = var_20_int + var_80_int; // 0xf8 Add2
	goto Label_252; // 0xf9 Jump
	
Label_252:
	var_81_int = 1; // 0xfc PushI
	var_25_int = var_25_int + var_81_int; // 0xfd Add2
	goto Label_195; // 0xfe Jump
	
Label_237:
	var_82_string = "default"; // 0xed PushS
	var_83_int = 15; // 0xee PushI
	var_84_int = 15; // 0xef PushI
	var_85_int = var_2_int - var_84_int; // 0xf0 Sub
	var_86_float = 0.698; // 0xf1 PushF
	var_87_float = 0.659; // 0xf2 PushF
	var_88_float = 0.647; // 0xf3 PushF
	PrintInWidth(var_29_int, var_82_string, var_83_int, var_20_int, var_85_int, var_27_string, var_86_float, var_87_float, var_88_float); // 0xf4 Func
	
Label_250:
	var_89_int = 5; // 0xfa PushI
	var_20_int = var_20_int + var_89_int; // 0xfb Add2
	
Label_213:
	var_90_string = "default"; // 0xd5 PushS
	var_91_int = 0; // 0xd6 PushI
	var_92_float = 0.804; // 0xd7 PushF
	var_93_float = 0.804; // 0xd8 PushF
	var_94_float = 0.804; // 0xd9 PushF
	PrintInWidth(var_29_int, var_90_string, var_91_int, var_20_int, var_93_float, var_26_string, var_92_float, var_93_float, var_94_float); // 0xda Func
	
Label_255:
	return 20; // 0xff Return
}


task_0_event_3(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_int, var_11_int)
{
	var_12_int = 0; var_13_int = 0; // 0x103 PushV
	var_14_int = 0; var_15_int = 0; // 0x104 PushV
	var_15_int = var_11_int; // 0x105 Mov
	func_124(var_11_int, var_12_int, var_13_int, var_14_int, var_15_int); // 0x106 Call
	var_13_int = var_14_int; // 0x107 Mov
	var_51_int = -1; // 0x109 PushI
	var_52_bool = var_13_int == var_51_int; // 0x10a Eq
	if(var_52_bool == 0) goto Label_269; // 0x10b JumpB
	return 2; // 0x10c Return
	
Label_269:
	var_53_bool = var_13_int == var_5_int; // 0x10d Eq
	if(var_53_bool == 0) goto Label_273; // 0x10e JumpB
	var_5_int = -1; // 0x10f TMovI
	goto Label_274; // 0x110 Jump
	
Label_274:
	func_68(var_12_int, var_13_int); // 0x113 Call
	return 2; // 0x115 Return
	
Label_273:
	var_5_int = var_13_int; // 0x111 TMov
}


task_0_event_8(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_int, var_11_int)
{
	var_12_int = 0; var_13_int = 0; // 0x117 PushV
	var_13_int = var_11_int; // 0x118 Mov
	func_124(var_9_object, var_10_int, var_11_int, var_12_int, var_13_int); // 0x119 Call
	var_6_int = var_12_int; // 0x11a TMov
	return 0; // 0x11c Return
}


task_0_event_10(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object)
{
	var_6_int = -1; // 0x11d TMovI
	return 0; // 0x11e Return
}


task_0_event_200(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_int, var_11_string, var_12_object)
{
	var_13_string = "scrollbar"; // 0x120 PushS
	var_14_bool = var_11_string == var_13_string; // 0x121 Eq
	if(var_14_bool == 0) goto Label_296; // 0x122 JumpB
	var_15_int = -var_1_int; // 0x123 Neg
	var_16_float = var_15_int * var_10_int; // 0x124 Mult
	var_17_int = 100; // 0x125 PushI
	var_0_int = var_16_float / var_16_float; // 0x126 Div2
	return 0; // 0x127 Return
	
Label_296:
	var_18_int = 32768; // 0x128 PushI
	var_19_int = var_10_int & var_18_int; // 0x129 And
	if(var_19_int == 0) goto Label_302; // 0x12a JumpB
	var_20_int = 32767; // 0x12b PushI
	var_5_int = var_10_int & var_20_int; // 0x12c And2
	goto Label_303; // 0x12d Jump
	
Label_303:
	return 0; // 0x12f Return
	
Label_302:
	var_4_int = var_10_int; // 0x12e TMov
}


main(var_0_int, var_1_int, var_2_int, var_3_int, var_4_int, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object)
{
	var_10_int = 0; var_11_object = Obj(); var_12_int = 0; var_13_int = 0; var_14_float = 0; var_15_string = ""; var_16_string = ""; var_17_int = 0; var_18_object = Obj(); var_19_object = Obj(); var_20_object = Obj(); var_21_int = 0; var_22_object = Obj(); var_23_int = 0; var_24_int = 0; var_25_float = 0; var_26_string = ""; var_27_string = ""; var_28_int = 0; var_29_object = Obj(); var_30_object = Obj(); var_31_object = Obj(); // 0x0 PushV
	var_32_bool = 1; // 0x1 PushB
	SetOwnerDraw(var_32_bool); // 0x2 Func
	var_33_bool = 1; // 0x4 PushB
	EnableClipping(var_33_bool); // 0x5 Func
	GetWindowSize(var_30_object, var_29_object); // 0x7 Func
	var_0_int = 0; // 0x9 TMovI
	var_4_int = 0; // 0xa TMovI
	var_5_int = -1; // 0xb TMovI
	CreateObjectVector(var_25_float); // 0xc Func
	CreateObjectVector(var_24_int); // 0xe Func
	CreateObjectVector(var_23_int); // 0x10 Func
	var_21_int = 0; // 0x12 MovI
	
Label_19:
	var_34_int = 12; // 0x13 PushI
	var_35_bool = var_21_int < var_34_int; // 0x14 LT
	if(var_35_bool == 0) goto Label_38; // 0x15 JumpB
	CreateStringVector(var_22_object); // 0x16 Func
	add(var_22_object); // 0x18 TObjFunc
	CreateStringVector(var_22_object); // 0x1a Func
	add(var_22_object); // 0x1c TObjFunc
	CreateIntVector(var_22_object); // 0x1e Func
	add(var_22_object); // 0x20 TObjFunc
	var_22_object = 0; // 0x22 SetNull
	var_36_int = 1; // 0x23 PushI
	var_21_int = var_21_int + var_36_int; // 0x24 Add2
	goto Label_19; // 0x25 Jump
	
Label_38:
	GetMessageCount(var_23_int); // 0x26 Func
	var_24_int = 0; // 0x28 MovI
	
Label_41:
	var_37_bool = var_24_int < var_23_int; // 0x29 LT
	if(var_37_bool == 0) goto Label_65; // 0x2a JumpB
	GetMessage(var_24_int, var_26_string, var_27_string, var_25_float); // 0x2b Func
	var_38_int = 24; // 0x2d PushI
	var_28_int = var_25_float / var_25_float; // 0x2e Div2
	get(var_29_object, var_28_int); // 0x2f TObjFunc
	get(var_30_object, var_28_int); // 0x31 TObjFunc
	get(var_31_object, var_28_int); // 0x33 TObjFunc
	add(var_26_string); // 0x35 ObjFunc
	add(var_27_string); // 0x37 ObjFunc
	add(var_24_int); // 0x39 ObjFunc
	var_31_object = 0; // 0x3b SetNull
	var_30_object = 0; // 0x3c SetNull
	var_29_object = 0; // 0x3d SetNull
	var_39_int = 1; // 0x3e PushI
	var_24_int = var_24_int + var_39_int; // 0x3f Add2
	goto Label_41; // 0x40 Jump
	
Label_65:
	ProcessEvents(); // 0x41 Func
	return 22; // 0x43 Return
}


func_124(var_0_int, var_2_int, var_5_int, var_12_int, var_13_int)
{
	var_14_int = 0; var_15_object = Obj(); var_16_object = Obj(); var_17_object = Obj(); var_18_int = 0; var_19_int = 0; var_20_int = 0; var_21_string = ""; var_22_string = ""; var_23_int = 0; var_24_int = 0; var_25_int = 0; var_26_object = Obj(); var_27_object = Obj(); var_28_object = Obj(); var_29_int = 0; var_30_int = 0; var_31_int = 0; var_32_string = ""; var_33_string = ""; var_34_int = 0; var_35_int = 0; // 0x7c PushV
	var_25_int = var_0_int; // 0x7d MovT
	get(var_26_object, var_32_string); // 0x7e TObjFunc
	get(var_27_object, var_32_string); // 0x80 TObjFunc
	get(var_28_object, var_32_string); // 0x82 TObjFunc
	size(var_29_int); // 0x84 ObjFunc
	var_30_int = 0; // 0x86 MovI
	
Label_135:
	var_36_bool = var_30_int < var_29_int; // 0x87 LT
	if(var_36_bool == 0) goto Label_176; // 0x88 JumpB
	var_31_int = var_25_int; // 0x89 Mov
	get(var_32_string, var_30_int); // 0x8a ObjFunc
	get(var_33_string, var_30_int); // 0x8c ObjFunc
	get(var_34_int, var_30_int); // 0x8e ObjFunc
	var_37_string = "default"; // 0x90 PushS
	GetTextHeightInWidth(var_35_int, var_37_string, var_35_int, var_32_string); // 0x91 Func
	var_25_int = var_25_int + var_35_int; // 0x93 Add2
	var_38_bool = var_34_int == var_5_int; // 0x94 Eq
	if(var_38_bool == 0) goto Label_161; // 0x95 JumpB
	var_39_int = 5; // 0x96 PushI
	var_25_int = var_25_int + var_39_int; // 0x97 Add2
	var_40_string = "default"; // 0x98 PushS
	var_41_int = 15; // 0x99 PushI
	var_42_int = var_2_int - var_41_int; // 0x9a Sub
	GetTextHeightInWidth(var_35_int, var_40_string, var_42_int, var_33_string); // 0x9b Func
	var_25_int = var_25_int + var_35_int; // 0x9d Add2
	var_43_int = 5; // 0x9e PushI
	var_25_int = var_25_int + var_43_int; // 0x9f Add2
	goto Label_163; // 0xa0 Jump
	
Label_163:
	var_44_bool = 0; // 0xa3 PushV
	var_44_bool = 0; // 0xa4 MovB
	var_45_bool = var_13_int > var_31_int; // 0xa5 GT
	if(var_45_bool == 0) goto Label_170; // 0xa6 JumpB
	var_46_bool = var_13_int < var_25_int; // 0xa7 LT
	if(var_46_bool == 0) goto Label_170; // 0xa8 JumpB
	var_44_bool = 1; // 0xa9 MovB
	
Label_170:
	if(var_44_bool == 0) goto Label_173; // 0xaa JumpB
	var_12_int = var_34_int; // 0xab Mov
	return 22; // 0xac Return
	
Label_173:
	var_47_int = 1; // 0xad PushI
	var_30_int = var_30_int + var_47_int; // 0xae Add2
	goto Label_135; // 0xaf Jump
	
Label_161:
	var_48_int = 5; // 0xa1 PushI
	var_25_int = var_25_int + var_48_int; // 0xa2 Add2
	
Label_176:
	var_12_int = -1; // 0xb0 MovI
	return 22; // 0xb1 Return
}


func_78(var_2_int, var_5_int, var_54_int)
{
	var_55_int = 0; var_56_object = Obj(); var_57_object = Obj(); var_58_object = Obj(); var_59_int = 0; var_60_int = 0; var_61_string = ""; var_62_string = ""; var_63_int = 0; var_64_int = 0; var_65_int = 0; var_66_object = Obj(); var_67_object = Obj(); var_68_object = Obj(); var_69_int = 0; var_70_int = 0; var_71_string = ""; var_72_string = ""; var_73_int = 0; var_74_int = 0; // 0x4e PushV
	var_65_int = 0; // 0x4f MovI
	get(var_66_object, var_71_string); // 0x50 TObjFunc
	get(var_67_object, var_71_string); // 0x52 TObjFunc
	get(var_68_object, var_71_string); // 0x54 TObjFunc
	size(var_69_int); // 0x56 ObjFunc
	var_70_int = 0; // 0x58 MovI
	
Label_89:
	var_75_bool = var_70_int < var_69_int; // 0x59 LT
	if(var_75_bool == 0) goto Label_119; // 0x5a JumpB
	get(var_71_string, var_70_int); // 0x5b ObjFunc
	get(var_72_string, var_70_int); // 0x5d ObjFunc
	get(var_73_int, var_70_int); // 0x5f ObjFunc
	var_76_string = "default"; // 0x61 PushS
	GetTextHeightInWidth(var_74_int, var_76_string, var_74_int, var_71_string); // 0x62 Func
	var_65_int = var_65_int + var_74_int; // 0x64 Add2
	var_77_bool = var_73_int == var_5_int; // 0x65 Eq
	if(var_77_bool == 0) goto Label_114; // 0x66 JumpB
	var_78_int = 5; // 0x67 PushI
	var_65_int = var_65_int + var_78_int; // 0x68 Add2
	var_79_string = "default"; // 0x69 PushS
	var_80_int = 15; // 0x6a PushI
	var_81_int = var_2_int - var_80_int; // 0x6b Sub
	GetTextHeightInWidth(var_74_int, var_79_string, var_81_int, var_72_string); // 0x6c Func
	var_65_int = var_65_int + var_74_int; // 0x6e Add2
	var_82_int = 5; // 0x6f PushI
	var_65_int = var_65_int + var_82_int; // 0x70 Add2
	goto Label_116; // 0x71 Jump
	
Label_116:
	var_83_int = 1; // 0x74 PushI
	var_70_int = var_70_int + var_83_int; // 0x75 Add2
	goto Label_89; // 0x76 Jump
	
Label_114:
	var_84_int = 5; // 0x72 PushI
	var_65_int = var_65_int + var_84_int; // 0x73 Add2
	
Label_119:
	var_54_int = var_65_int; // 0x77 Mov
	return 20; // 0x78 Return
}


func_68(var_1_int, var_3_int)
{
	var_54_int = 0; // 0x44 PushV
	func_78(var_12_int, var_13_int, var_54_int); // 0x45 Call
	var_1_int = var_54_int; // 0x46 TMov
	var_1_int = var_1_int - var_3_int; // 0x48 Sub2
	var_85_int = 0; // 0x49 PushI
	var_86_bool = var_1_int < var_85_int; // 0x4a LT
	if(var_86_bool == 0) goto Label_77; // 0x4b JumpB
	var_1_int = 0; // 0x4c TMovI
	
Label_77:
	return 0; // 0x4d Return
}


