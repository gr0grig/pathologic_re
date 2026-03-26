// @IMPORTS: Hold/0,StopGroup0/0,RemoveEnvelope/0,RemoveRTEnvelope/0,irand/2,PlayAnimation/2,WaitForAnimEnd/0,StopAnimation/0,rand/2,Sleep/1,IsLoaded/1,HasAnimation/3
// @STRINGS: W:all|W:idle
// @RUN_OP: 0x6
// @RUN_TASK: 1
// @TASK_0: vars= params=0
// @EVENT_5: op=0x3 vars=
// @TASK_1: vars= params=0
// @TASK_2: vars= params=0
// @EVENT_6: op=0x47 vars=
// @TASK_3: vars= params=0
// @EVENT_6: op=0x53 vars=
// @PE: 0x62

task_0_event_5()
{
	StopGroup0();
	return 0;
}


task_2_event_6()
{
	StopAnimation();
	return 0;
}


task_3_event_6()
{
	StopGroup0();
	return 0;
}


main()
{
	var_0_int = 0; var_1_int = 0;
	RemoveEnvelope();
	RemoveRTEnvelope();
	
Label_11:
	var_2_bool = 0;
	func_86(var_2_bool);
	var_5_bool = var_2_bool == 0; //@nz
	if(var_5_bool != 0) {
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	irand(var_1_int, (int)3);
	var_8_bool = var_1_int == (int)0;
	if(var_8_bool != 0) {
		TaskCall(2);
		func_40();
		TaskReturn();
	} else {
		TaskCall(3);
		func_74();
		TaskReturn();
	}
	goto Label_11;
	
}
EMIT "Return(); Pop(2)";


func_0()
{
	Hold();
	return 0;
}


func_98(var_33_string, var_34_int)
{
	var_37_int = var_34_int + (int)1;
	var_33_string = "idle" + var_37_int;
	return 0;
}


func_40()
{
	var_9_int = 0; var_10_int = 0; var_11_int = 0; var_12_int = 0; var_13_int = 0; var_14_int = 0;
	irand(var_12_int, (int)3);
	var_16_bool = var_12_int == 0; //@nz
	if(var_16_bool != 0) {
		func_104((int)0);
		var_17_int = var_13_int;
		var_31_int = var_13_int;
		if(var_31_int != 0) {
			irand(var_14_int, var_13_int);
			var_33_string = ""; var_34_int = 0;
			var_14_int = var_34_int;
			func_98(var_33_string, var_34_int);
			PlayAnimation("all", var_33_string);
			WaitForAnimEnd();
		}
	} else {
		PlayAnimation("all", "idle");
		WaitForAnimEnd();
	}
	return 6;
	
}


func_104(var_17_int)
{
	var_18_int = 0; var_19_bool = 0; var_20_int = 0; var_21_bool = 0;
	var_20_int = 0;
	
Label_106:
	var_23_string = ""; var_24_int = 0;
	var_24_int = var_20_int + (int)1;
	func_91(var_23_string, var_24_int);
	HasAnimation(var_21_bool, "all", var_23_string);
	var_29_bool = var_21_bool == 0; //@nz
	if(var_29_bool != 0) {
	} else {
		var_20_int = var_20_int + (int)1;
		goto Label_106;
	}
	var_20_int = var_17_int;
	return 4;
	
}


func_74()
{
	var_40_float = 0; var_41_float = 0;
	rand(var_41_float, (int)3);
	var_44_int = var_41_float + (int)5;
	Sleep(var_44_int);
	return 2;
}


func_86(var_2_bool)
{
	var_3_bool = 0; var_4_bool = 0;
	IsLoaded(var_4_bool);
	var_4_bool = var_2_bool;
	return 2;
}


func_91(var_23_string, var_24_int)
{
	var_26_string = ""; var_27_string = "";
	var_28_int = var_24_int;
	if(var_28_int != 0) {
		"idle" = "idle" + var_24_int;
	}
	var_27_string = var_23_string;
	return 2;
}


