task_0_event_26(var_0_string)
{
	var_1_string = "off"; // 0x5 PushS
	var_2_bool = var_0_string == var_1_string; // 0x6 Eq
	if(var_2_bool == 0) goto Label_13; // 0x7 JumpB
	TaskCall(1); // 0x9 TaskCall
	func_14(); // 0xa NEW_2
	TaskReturn(); // 0xb TaskReturn
	
Label_13:
	return 0; // 0xd Return
}


main()
{
	
Label_0:
	Hold(); // 0x0 Func
	goto Label_0; // 0x2 Jump
}


func_14()
{
	var_3_cvector = CVector(0,0,0); var_4_float = 0; var_5_float = 0; var_6_float = 0; var_7_cvector = CVector(0,0,0); var_8_float = 0; var_9_float = 0; var_10_float = 0; // 0xe PushV
	GetColor(var_7_cvector); // 0xf Func
	var_8_float = 1; // 0x11 MovI
	var_9_float = 0.9; // 0x12 MovF
	
Label_19:
	sync(var_10_float); // 0x13 Func
	var_11_float = var_10_float * var_9_float; // 0x15 Mult
	var_8_float = var_8_float - var_11_float; // 0x16 Sub2
	var_12_float = 0.01; // 0x17 PushF
	var_13_bool = var_8_float <= var_12_float; // 0x18 LE
	if(var_13_bool == 0) goto Label_27; // 0x19 JumpB
	goto Label_31; // 0x1a Jump
	
Label_31:
	var_14_float = 0.01; // 0x1f PushF
	var_15_float = var_7_cvector * var_14_float; // 0x20 Mult
	SetColor(var_15_float); // 0x21 Func
	return 8; // 0x23 Return
	
Label_27:
	var_16_float = var_7_cvector * var_8_float; // 0x1b Mult
	SetColor(var_16_float); // 0x1c Func
	goto Label_19; // 0x1e Jump
}


