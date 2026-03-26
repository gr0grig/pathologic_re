// @IMPORTS: sync/1,Trace/1,HasProperty/2,GetProperty/2,SetProperty/2,CreateFloatVector/1,RumblePlay/2,SendWorldWndMessage/2
// @STRINGS: W:health|A:add
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=bool params=0
// @PE: 0x2c

main(var_0_bool)
{
	var_1_float = 0; var_2_float = 0;
	
Label_1:
	sync(var_2_float);
	var_3_int = -var_2_float;
	var_5_float = var_3_int / (float)4.0;
	Trace(var_5_float);
	var_6_bool = 0; var_7_string = ""; var_8_float = 0; var_9_float = 0; var_10_float = 0;
	var_11_int = -var_2_float;
	var_8_float = var_11_int / (float)2.0;
	func_25(var_6_bool, "health", var_8_float, (float)0, (float)1);
	var_24_float = 0;
	var_25_int = -var_2_float;
	var_24_float = var_25_int / (float)3.0;
	func_55(var_24_float);
	goto Label_1;
}
EMIT "Return(); Pop(2)";


func_25(var_6_bool, var_7_string, var_8_float, var_9_float, var_10_float)
{
	var_13_bool = 0; var_14_float = 0; var_15_bool = 0; var_16_float = 0;
	HasProperty(var_7_string, var_15_bool);
	var_17_bool = var_15_bool == 0; //@nz
	if(var_17_bool != 0) {
		var_6_bool = 0;
		return 4;
	}
	GetProperty(var_7_string, var_16_float);
	var_18_float = 0; var_19_float = 0; var_20_float = 0; var_21_float = 0;
	var_19_float = var_16_float + var_8_float;
	var_9_float = var_20_float;
	var_10_float = var_21_float;
	func_44(var_18_float, var_19_float, var_20_float, var_21_float);
	SetProperty(var_7_string, var_18_float);
	var_6_bool = 1;
	return 4;
}


func_44(var_18_float, var_19_float, var_20_float, var_21_float)
{
	var_22_bool = var_19_float < var_20_float;
	if(var_22_bool != 0) {
		var_20_float = var_18_float;
		return 0;
	}
	var_23_bool = var_19_float > var_21_float;
	if(var_23_bool != 0) {
		var_21_float = var_18_float;
		return 0;
	}
	var_19_float = var_18_float;
	return 0;
}


func_55(var_24_float)
{
	var_27_object = Obj(); var_28_object = Obj();
	CreateFloatVector(var_28_object);
	@@var_28_object:add(var_24_float);
	var_30_bool = var_24_float < (int)0;
	if(var_30_bool != 0) {
		RumblePlay((float)0.699999988079071, (int)500);
	}
	SendWorldWndMessage((int)15, var_28_object);
	return 2;
}
EMIT "Stack[-1] = 0";


