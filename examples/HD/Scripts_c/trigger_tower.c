// @IMPORTS: Hold/0,IsPlayerActor/2,PlaySound/1,irand/2,Sleep/2,StopGroup0/0,rand/1
// @STRINGS: W:sound1|W:sound2
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_23: op=0x4 vars=object
// @TASK_1: vars=object params=1
// @EVENT_6: op=0x2e vars=
// @EVENT_27: op=0x31 vars=object
// @PE: 0x31

task_0_event_23(var_0_object, var_1_object)
{
	var_2_bool = 0; var_3_bool = 0;
	IsPlayerActor(var_1_object, var_3_bool);
	var_4_bool = var_3_bool;
	if(var_4_bool != 0) {
		var_5_object = Obj();
		var_1_object = var_5_object;
		TaskCall(1);
		func_16(var_6_object, var_5_object);
		TaskReturn();
	}
	return 2;
}


task_1_event_6(var_0_object)
{
	StopGroup0();
	return 0;
}


task_1_event_27(var_0_object, var_1_object)
{
	var_2_bool = var_0_object == var_1_object;
	if(var_2_bool != 0) {
		StopGroup0();
	}
	return 0;
}


main(var_0_object)
{
	
Label_0:
	Hold();
	goto Label_0;
}
EMIT "Return(); Pop(0)";


func_16(var_0_object, var_5_object)
{
	var_7_int = 0; var_8_bool = 0; var_9_int = 0; var_10_bool = 0;
	var_0_object = var_5_object;
	
Label_18:
	var_11_bool = 0; var_12_float = 0;
	func_55(var_11_bool, (float)0.5);
	if(var_11_bool != 0) {
		var_15_string = "sound1";
	} else {
			var_22_string = "sound2";
	}
	PlaySound(var_15_string);
	irand(var_9_int, (int)15);
	var_18_int = var_9_int + (int)15;
	Sleep(var_18_int, var_10_bool);
	var_19_bool = 0;
	var_19_bool = 1;
	var_20_bool = var_10_bool == 0; //@nz
	if(var_20_bool != 1) {
		var_21_bool = var_0_object == 0; //@nz
		if(var_21_bool != 1) {
			var_19_bool = 0;
		}
	}
	if(var_19_bool != 0) {
	} else {
		goto Label_18;

	}
	return 4;
	
}


func_55(var_11_bool, var_12_float)
{
	var_13_float = 0; var_14_float = 0;
	rand(var_14_float);
	var_11_bool = var_14_float < var_12_float;
	return 2;
}


