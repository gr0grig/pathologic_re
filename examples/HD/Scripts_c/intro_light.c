// @IMPORTS: Hold/0,GetColor/1,sync/1,SetColor/1
// @STRINGS: W:off
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_26: op=0x4 vars=string
// @TASK_1: vars= params=0
// @PE: 0x4

task_0_event_26(var_0_string)
{
	var_2_bool = var_0_string == "off";
	if(var_2_bool != 0) {
		TaskCall(1);
		func_14();
		TaskReturn();
	}
	return 0;
}


main()
{
	
Label_0:
	Hold();
	goto Label_0;
}
EMIT "Return(); Pop(0)";


func_14()
{
	var_3_cvector = CVector(0,0,0); var_4_float = 0; var_5_float = 0; var_6_float = 0; var_7_cvector = CVector(0,0,0); var_8_float = 0; var_9_float = 0; var_10_float = 0;
	GetColor(var_7_cvector);
	
Label_19:
	sync(var_10_float);
	var_11_float = var_10_float * (float)0.8999999761581421;
	(float)1 = (float)1 - var_11_float;
	var_13_bool = var_8_float <= (float)0.009999999776482582;
	if(var_13_bool != 0) {
	} else {
		var_16_float = var_7_cvector * var_8_float;
		SetColor(var_16_float);
		goto Label_19;
	}
	var_15_float = var_7_cvector * (float)0.009999999776482582;
	SetColor(var_15_float);
	return 8;
	
}


