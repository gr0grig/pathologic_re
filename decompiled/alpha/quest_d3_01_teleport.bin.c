main()
{
	var_0_object = Obj(); var_1_object = Obj(); var_2_cvector = CVector(0,0,0); var_3_cvector = CVector(0,0,0); var_4_bool = 0; var_5_object = Obj(); var_6_object = Obj(); var_7_cvector = CVector(0,0,0); var_8_cvector = CVector(0,0,0); var_9_bool = 0; // 0x0 PushV
	var_10_float = 5.0; // 0x1 PushF
	Sleep(var_10_float); // 0x2 Func
	var_11_float = 0; var_12_float = 0; var_13_float = 0; // 0x4 PushV
	var_11_float = 0; // 0x5 MovI
	var_12_float = 1; // 0x6 MovI
	var_13_float = 3.0; // 0x7 MovF
	func_49(var_12_float, var_13_float); // 0x8 Call
	var_25_string = "player"; // 0xa PushS
	FindActor(var_5_object, var_25_string); // 0xb Func
	var_26_object = var_5_object; // 0xd Push
	if(var_26_object == 0) goto Label_24; // 0xe JumpB
	var_27_string = "cot_alexandr"; // 0xf PushS
	GetSceneByName(var_6_object, var_27_string); // 0x10 Func
	var_28_string = "pt_d3q01_teleport"; // 0x12 PushS
	GetLocator(var_28_string, var_9_bool, var_7_cvector, var_8_cvector); // 0x13 ObjFunc
	Teleport(var_5_object, var_6_object, var_7_cvector, var_8_cvector); // 0x15 Func
	var_6_object = 0; // 0x17 SetNull
	
Label_24:
	var_29_string = "d3q01"; // 0x18 PushS
	var_30_int = 8; // 0x19 PushI
	SetVariable(var_29_string, var_30_int); // 0x1a Func
	sync(); // 0x1c Func
	var_31_float = 0; var_32_float = 0; var_33_float = 0; // 0x1e PushV
	var_31_float = 1; // 0x1f MovI
	var_32_float = 0; // 0x20 MovI
	var_33_float = 1.0; // 0x21 MovF
	func_49(var_32_float, var_33_float); // 0x22 Call
	var_34_object = Obj(); // 0x24 PushV
	func_43(var_34_object); // 0x25 Call
	RemoveActor(var_34_object); // 0x27 Func
	return 10; // 0x29 Return
}


func_49(var_11_float, var_12_float)
{
	var_14_bool = 0; var_15_float = 0; var_16_float = 0; var_17_bool = 0; var_18_float = 0; var_19_float = 0; // 0x31 PushV
	var_17_bool = var_12_float > var_11_float; // 0x32 GT2
	var_20_int = var_12_float - var_11_float; // 0x33 Sub
	var_18_float = var_20_int / var_20_int; // 0x34 Div2
	
Label_53:
	var_21_bool = var_17_bool; // 0x35 Push
	if(var_21_bool == 0) goto Label_57; // 0x36 JumpB
	var_22_bool = var_11_float < var_12_float; // 0x37 LT
	goto Label_58; // 0x38 Jump
	
Label_58:
	if(var_22_bool == 0) goto Label_66; // 0x3a JumpB
	ModDarkenLevel(var_11_float); // 0x3b Func
	sync(var_19_float); // 0x3d Func
	var_23_float = var_19_float * var_18_float; // 0x3f Mult
	var_11_float = var_11_float + var_23_float; // 0x40 Add2
	goto Label_53; // 0x41 Jump
	
Label_66:
	ModDarkenLevel(var_12_float); // 0x42 Func
	return 6; // 0x44 Return
	
Label_57:
	var_24_bool = var_12_float < var_11_float; // 0x39 LT
}


func_43(var_34_object)
{
	var_35_object = Obj(); var_36_object = Obj(); // 0x2b PushV
	self(var_36_object); // 0x2c Func
	var_34_object = var_36_object; // 0x2e Mov
	return 2; // 0x2f Return
}


