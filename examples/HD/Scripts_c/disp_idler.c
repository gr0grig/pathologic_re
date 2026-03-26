// @IMPORTS: Hold/0,rand/2,Sleep/1,IsLoaded/1,RemoveActor/1,StopGroup0/0,sync/0,WaitForAnimEnd/0,irand/2,PlayAnimation/2,WaitForAnimEnd/1,Sleep/2,ResetAAS/0,self/1,HasAnimation/3
// @STRINGS: W:cleanup|W:all|W:idle
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=bool params=0
// @EVENT_26: op=0x29 vars=string
// @EVENT_5: op=0x31 vars=
// @EVENT_6: op=0x36 vars=
// @PE: 0x29

task_0_event_26(var_0_bool, var_1_string)
{
	var_3_bool = var_1_string == "cleanup";
	if(var_3_bool != 0) {
		func_21(var_1_string);
	}
	return 0;
}


task_0_event_5(var_0_bool)
{
	StopGroup0();
	sync();
	return 0;
}


task_0_event_6(var_0_bool)
{
	var_1_bool = 0;
	var_1_bool = 0;
	var_2_bool = var_0_bool;
	if(var_2_bool != 0) {
		var_3_bool = 0;
		func_70(var_3_bool);
		if(var_3_bool != 0) {
			var_1_bool = 1;
		}
	}
	if(var_1_bool != 0) {
		var_4_object = Obj();
		func_158(var_4_object);
		RemoveActor(var_4_object);
	}
	return 0;
}


main(var_0_bool)
{
	var_1_float = 0; var_2_float = 0;
	
Label_1:
	var_3_bool = 0;
	func_153(var_3_bool);
	var_6_bool = var_3_bool == 0; //@nz
	if(var_6_bool != 0) {
		Hold();
		goto Label_1;
	}
	rand(var_2_float, (int)3);
	var_9_int = var_2_float + (int)3;
	Sleep(var_9_int);
	func_72();
	goto Label_1;
}
EMIT "Return(); Pop(2)";


func_164(var_32_string, var_33_int)
{
	var_34_string = ""; var_35_string = "";
	var_36_int = var_33_int;
	if(var_36_int != 0) {
		"idle" = "idle" + var_33_int;
	}
	var_35_string = var_32_string;
	return 2;
}


func_70(var_3_bool)
{
	var_3_bool = 1;
	return 0;
}


func_72()
{
	var_10_int = 0; var_11_int = 0; var_12_int = 0; var_13_int = 0; var_14_bool = 0; var_15_float = 0; var_16_bool = 0; var_17_int = 0; var_18_int = 0; var_19_int = 0; var_20_int = 0; var_21_bool = 0; var_22_float = 0; var_23_bool = 0;
	WaitForAnimEnd();
	var_24_bool = 0;
	func_153(var_24_bool);
	var_25_bool = var_24_bool == 0; //@nz
	if(var_25_bool != 0) {
		return 14;
	}
	func_171((int)0);
	var_26_int = var_17_int;
	var_18_int = 0;
	
Label_86:
	var_39_bool = 0;
	var_39_bool = 0;
	var_41_bool = var_18_int < (int)5;
	if(var_41_bool != 0) {
		var_42_bool = 0;
		func_153(var_42_bool);
		if(var_42_bool != 0) {
			var_39_bool = 1;
		}
	}
	if(var_39_bool != 0) {
		irand(var_19_int, (int)3);
		var_45_bool = var_19_int == (int)0;
		if(var_45_bool != 0) {
			var_46_int = var_17_int;
			if(var_46_int == 0) goto Label_119;
			irand(var_20_int, var_17_int);
			var_48_string = ""; var_49_int = 0;
			var_20_int = var_49_int;
			func_164(var_48_string, var_49_int);
			PlayAnimation("all", var_48_string);
			WaitForAnimEnd(var_21_bool);
			var_50_bool = var_21_bool == 0; //@nz
			if(var_50_bool != 0) {
			} else {
		} else {
				var_55_bool = var_19_int == (int)1;
				if(var_55_bool != 0) {
					rand(var_22_float, (int)4);
					var_58_int = var_22_float + (int)1;
					Sleep(var_58_int, var_23_bool);
					var_59_bool = var_23_bool == 0; //@nz
					if(var_59_bool != 0) {
						goto Label_148;
					}
					goto Label_137;
				}
				var_60_int = var_18_int;
				if(var_60_int == 0) goto Label_137;
				goto Label_148;
		}
		Label_137:
			var_51_bool = 0;
			func_151(var_51_bool);
			var_52_bool = var_51_bool == 0; //@nz
			if(var_52_bool != 0) {
				goto Label_148;
			}
			ResetAAS();
			var_18_int = var_18_int + (int)1;
			goto Label_86;

		}
	}
Label_148:
	ResetAAS();
	return 14;
	
}


func_171(var_26_int)
{
	var_27_int = 0; var_28_bool = 0; var_29_int = 0; var_30_bool = 0;
	var_29_int = 0;
	
Label_173:
	var_32_string = ""; var_33_int = 0;
	var_29_int = var_33_int;
	func_164(var_32_string, var_33_int);
	HasAnimation(var_30_bool, "all", var_32_string);
	var_37_bool = var_30_bool == 0; //@nz
	if(var_37_bool != 0) {
	} else {
		var_29_int = var_29_int + (int)1;
		goto Label_173;
	}
	var_29_int = var_26_int;
	return 4;
	
}


func_21(var_0_bool)
{
	var_4_bool = 0; var_5_bool = 0;
	var_0_bool = true;
	IsLoaded(var_5_bool);
	var_6_bool = 0;
	var_6_bool = 0;
	var_7_bool = var_5_bool == 0; //@nz
	if(var_7_bool != 0) {
		var_8_bool = 0;
		func_70(var_8_bool);
		if(var_8_bool != 0) {
			var_6_bool = 1;
		}
	}
	if(var_6_bool != 0) {
		var_9_object = Obj();
		func_158(var_9_object);
		RemoveActor(var_9_object);
	}
	return 2;
}


func_151(var_51_bool)
{
	var_51_bool = 1;
	return 0;
}


func_153(var_3_bool)
{
	var_4_bool = 0; var_5_bool = 0;
	IsLoaded(var_5_bool);
	var_5_bool = var_3_bool;
	return 2;
}


func_158(var_4_object)
{
	var_5_object = Obj(); var_6_object = Obj();
	self(var_6_object);
	var_6_object = var_4_object;
	return 2;
}
EMIT "Stack[-1] = 0";


