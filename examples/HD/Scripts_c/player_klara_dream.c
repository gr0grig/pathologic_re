// @IMPORTS: Trace/1,GetGameTime/1,sync/0,HasProperty/2,GetProperty/2,FindActor/2,Trigger/2
// @STRINGS: W:dream effect inited|W:dream time|W:klara2_positioner|W:sleep_end|W:sleeping
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=float params=0
// @PE: 0x15

main(var_0_float)
{
	var_1_float = 0; var_2_float = 0; var_3_float = 0; var_4_float = 0; var_5_float = 0; var_6_float = 0;
	Trace("dream effect inited");
	GetGameTime(var_4_float);
	var_4_float = var_5_float;
	
Label_7:
	sync();
	GetGameTime(var_6_float);
	var_8_bool = var_6_float <= var_5_float;
	if(var_8_bool != 0) {
	} else {
		var_9_float = 0;
		var_9_float = var_6_float - var_5_float;
		func_21(var_6_float, var_9_float);
		var_6_float = var_5_float;
	}
	goto Label_7;
	
}
EMIT "Return(); Pop(6)";


func_57(var_22_bool, var_23_string, var_24_string)
{
	var_25_object = Obj(); var_26_object = Obj();
	FindActor(var_26_object, var_23_string);
	var_27_bool = var_26_object == 0; //@ne
	if(var_27_bool != 0) {
		var_22_bool = 0;
		return 2;
	}
	Trigger(var_26_object, var_24_string);
	var_22_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_44(var_10_bool)
{
	var_11_bool = 0; var_12_bool = 0; var_13_bool = 0; var_14_bool = 0;
	HasProperty("sleeping", var_13_bool);
	var_16_bool = var_13_bool == 0; //@nz
	if(var_16_bool != 0) {
		var_10_bool = 0;
		return 4;
	}
	GetProperty("sleeping", var_14_bool);
	var_14_bool = var_10_bool;
	return 4;
}


func_21(var_0_float, var_9_float)
{
	var_10_bool = 0;
	func_44(var_10_bool);
	if(var_10_bool != 0) {
		var_0_float = var_0_float + var_9_float;
	} else {
		var_19_bool = var_0_float > (float)4.0;
		if(var_19_bool == 0) goto Label_43;
		Trace("dream time");
		var_0_float = var_0_float - (float)4.0;
		sync();
		var_22_bool = 0; var_23_string = ""; var_24_string = "";
		func_57(var_22_bool, "klara2_positioner", "sleep_end");
	}
Label_43:
	return 0;
	
}


