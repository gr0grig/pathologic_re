// @IMPORTS: SetVisibility/1,SetTimeEvent/2,Hold/0,SetUsable/1,StopGroup0/0,PlaySound/1,Sleep/1
// @STRINGS: W:hunger|W:drink|W:HasProperty|A:HasProperty|A:GetProperty|A:SetProperty
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=bool params=0
// @EVENT_9: op=0x10 vars=int,float
// @EVENT_0: op=0x18 vars=object
// @PE: 0x10,0x18,0x4c

task_0_event_9(var_0_bool, var_1_int, var_2_float)
{
	var_4_bool = var_1_int == (int)0;
	if(var_4_bool != 0) {
		StopGroup0();
		var_0_bool = true;
	}
	return 0;
}


task_0_event_0(var_0_bool, var_1_object)
{
	EventDisable(0);
	var_2_bool = 0; var_3_object = Obj(); var_4_string = ""; var_5_float = 0; var_6_float = 0; var_7_float = 0;
	var_1_object = var_3_object;
	func_54(var_2_bool, var_3_object, "hunger", (float)-0.05000000074505806, (float)0, (float)1);
	PlaySound("drink");
	Sleep((int)1);
	EventEnable(0);
	return 0;
}


main(var_0_bool)
{
	SetVisibility((bool)1);
	SetTimeEvent((int)0, (int)24);
	var_0_bool = false;
	
Label_8:
	Hold();
	var_4_bool = var_0_bool == 0; //@nz
	if(var_4_bool == 1) goto Label_8;
	SetUsable((bool)0);
	return 0;
}


func_42(var_10_bool, var_11_object, var_12_string)
{
	var_13_bool = 0; var_14_bool = 0;
	var_17_bool = IsFuncExist(var_11_object, "HasProperty", (int)2);
	var_18_bool = var_17_bool == 0; //@nz
	if(var_18_bool != 0) {
		var_10_bool = 0;
		return 2;
	}
	@@var_11_object:HasProperty(var_12_string, var_14_bool);
	var_14_bool = var_10_bool;
	return 2;
}


func_76(var_20_float, var_21_float, var_22_float, var_23_float)
{
	var_24_bool = var_21_float < var_22_float;
	if(var_24_bool != 0) {
		var_22_float = var_20_float;
		return 0;
	}
	var_25_bool = var_21_float > var_23_float;
	if(var_25_bool != 0) {
		var_23_float = var_20_float;
		return 0;
	}
	var_21_float = var_20_float;
	return 0;
}


func_54(var_2_bool, var_3_object, var_4_string, var_5_float, var_6_float, var_7_float)
{
	var_8_float = 0; var_9_float = 0;
	var_10_bool = 0; var_11_object = Obj(); var_12_string = "";
	var_3_object = var_11_object;
	var_4_string = var_12_string;
	func_42(var_10_bool, var_11_object, var_12_string);
	var_19_bool = var_10_bool == 0; //@nz
	if(var_19_bool != 0) {
		var_2_bool = 0;
		return 2;
	}
	@@var_3_object:GetProperty(var_4_string, var_9_float);
	var_20_float = 0; var_21_float = 0; var_22_float = 0; var_23_float = 0;
	var_21_float = var_9_float + var_5_float;
	var_6_float = var_22_float;
	var_7_float = var_23_float;
	func_76(var_20_float, var_21_float, var_22_float, var_23_float);
	@@var_3_object:SetProperty(var_4_string, var_20_float);
	var_2_bool = 1;
	return 2;
}


