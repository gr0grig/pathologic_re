// @IMPORTS: Sleep/1,FindActor/2,GetSceneByName/2,Teleport/4,SetVariable/2,sync/0,RemoveActor/1,self/1,ModDarkenLevel/1,sync/1
// @STRINGS: W:player|W:cot_alexandr|W:pt_d3q01_teleport|A:GetLocator|W:d3q01
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0

main()
{
	var_0_object = Obj(); var_1_object = Obj(); var_2_cvector = CVector(0,0,0); var_3_cvector = CVector(0,0,0); var_4_bool = 0; var_5_object = Obj(); var_6_object = Obj(); var_7_cvector = CVector(0,0,0); var_8_cvector = CVector(0,0,0); var_9_bool = 0;
	Sleep((float)5.0);
	var_11_float = 0; var_12_float = 0; var_13_float = 0;
	func_49((float)0, (float)1, (float)3.0);
	FindActor(var_5_object, "player");
	var_26_object = var_5_object;
	if(var_26_object != 0) {
		GetSceneByName(var_6_object, "cot_alexandr");
		@@var_6_object:GetLocator("pt_d3q01_teleport", var_9_bool, var_7_cvector, var_8_cvector);
		Teleport(var_5_object, var_6_object, var_7_cvector, var_8_cvector);
		var_6_object = 0;
	}
	SetVariable("d3q01", (int)8);
	sync();
	var_31_float = 0; var_32_float = 0; var_33_float = 0;
	func_49((float)1, (float)0, (float)1.0);
	var_34_object = Obj();
	func_43(var_34_object);
	RemoveActor(var_34_object);
	return 10;
}
EMIT "Stack[-5] = 0";


func_49(var_11_float, var_12_float, var_13_float)
{
	var_14_bool = 0; var_15_float = 0; var_16_float = 0; var_17_bool = 0; var_18_float = 0; var_19_float = 0;
	var_17_bool = var_12_float > var_11_float;
	var_20_int = var_12_float - var_11_float;
	var_18_float = var_20_int / var_13_float;
	
Label_53:
	var_21_bool = var_17_bool;
	if(var_21_bool != 0) {
		var_22_bool = var_11_float < var_12_float;
	} else {
		var_24_bool = var_12_float < var_11_float;
	}
	if(var_22_bool != 0) {
		ModDarkenLevel(var_11_float);
		sync(var_19_float);
		var_23_float = var_19_float * var_18_float;
		var_11_float = var_11_float + var_23_float;
		goto Label_53;
	}
	ModDarkenLevel(var_12_float);
	return 6;
	
}


func_43(var_34_object)
{
	var_35_object = Obj(); var_36_object = Obj();
	self(var_36_object);
	var_36_object = var_34_object;
	return 2;
}
EMIT "Stack[-1] = 0";


