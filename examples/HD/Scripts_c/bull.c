// @IMPORTS: Hold/0,StopGroup0/0,sync/0,RemoveEnvelope/0,RemoveRTEnvelope/0,irand/2,PlayAnimation/2,WaitForAnimEnd/0,StopAnimation/0,IsLoaded/1,IsExisting3DSound/2,Is3DSoundLoaded/2,GetEyesHeight/1,GetDirection/1,PlayGlobalSound/2,HasAnimation/3
// @STRINGS: W:all|W:idle
// @RUN_OP: 0xd
// @RUN_TASK: 1
// @TASK_0: vars= params=0
// @EVENT_5: op=0x8 vars=
// @TASK_1: vars= params=0
// @TASK_2: vars= params=0
// @EVENT_6: op=0x46 vars=
// @PE: 0x7e

task_0_event_5()
{
	StopGroup0();
	sync();
	return 0;
}


task_2_event_6()
{
	StopAnimation();
	return 0;
}


main()
{
	RemoveEnvelope();
	RemoveRTEnvelope();
	
Label_17:
	var_0_bool = 0;
	func_73(var_0_bool);
	var_3_bool = var_0_bool == 0; //@nz
	if(var_3_bool != 0) {
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	TaskCall(2);
	func_34();
	TaskReturn();
	goto Label_17;
}
EMIT "Return(); Pop(0)";


func_0()
{
	
Label_0:
	Hold();
	var_4_bool = 0;
	func_73(var_4_bool);
	var_5_bool = var_4_bool == 0; //@nz
	if(var_5_bool == 1) goto Label_0;
	return 0;
}


func_34()
{
	var_6_int = 0; var_7_int = 0; var_8_int = 0; var_9_string = ""; var_10_int = 0; var_11_int = 0; var_12_int = 0; var_13_string = "";
	irand(var_10_int, (int)3);
	var_15_bool = var_10_int == 0; //@nz
	if(var_15_bool != 0) {
		func_132((int)0);
		var_16_int = var_11_int;
		var_30_int = var_11_int;
		if(var_30_int != 0) {
			irand(var_12_int, var_11_int);
			var_31_string = ""; var_32_int = 0;
			var_12_int = var_32_int;
			func_126(var_31_string, var_32_int);
			var_31_string = var_13_string;
			PlayAnimation("all", var_13_string);
			var_37_string = "";
			var_13_string = var_37_string;
			func_78(var_37_string);
			WaitForAnimEnd();
		}
	} else {
		PlayAnimation("all", "idle");
		WaitForAnimEnd();
	}
	return 8;
	
}


func_132(var_16_int)
{
	var_17_int = 0; var_18_bool = 0; var_19_int = 0; var_20_bool = 0;
	var_19_int = 0;
	
Label_134:
	var_22_string = ""; var_23_int = 0;
	var_23_int = var_19_int + (int)1;
	func_119(var_22_string, var_23_int);
	HasAnimation(var_20_bool, "all", var_22_string);
	var_28_bool = var_20_bool == 0; //@nz
	if(var_28_bool != 0) {
	} else {
		var_19_int = var_19_int + (int)1;
		goto Label_134;
	}
	var_19_int = var_16_int;
	return 4;
	
}


func_73(var_0_bool)
{
	var_1_bool = 0; var_2_bool = 0;
	IsLoaded(var_2_bool);
	var_2_bool = var_0_bool;
	return 2;
}


func_78(var_37_string)
{
	var_38_bool = 0; var_39_int = 0; var_40_bool = 0; var_41_int = 0; var_42_bool = 0; var_43_float = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_bool = 0; var_51_float = 0; var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0);
	IsExisting3DSound(var_46_bool, var_37_string);
	var_54_bool = var_46_bool == 0; //@nz
	if(var_54_bool != 0) {
		var_47_int = 0;

	Label_84:
		var_56_int = var_47_int + (int)1;
		var_57_int = var_37_string + var_56_int;
		IsExisting3DSound(var_48_bool, var_57_int);
		var_58_bool = var_48_bool == 0; //@nz
		if(var_58_bool != 0) {
		} else {
			var_47_int = var_47_int + (int)1;
			goto Label_84;
		}
		var_59_bool = var_47_int == 0; //@nz
		if(var_59_bool != 0) {
			return 16;
		}
		irand(var_49_int, var_47_int);
		var_61_int = var_49_int + (int)1;
		var_37_string = var_37_string + var_61_int;
	}
	Is3DSoundLoaded(var_50_bool, var_37_string);
	var_62_bool = var_50_bool;
	if(var_62_bool != 0) {
		GetEyesHeight(var_51_float);
		GetDirection(var_52_cvector);
		var_53_cvector = var_52_cvector * (int)50;
		var_64_float = GetByIndex(var_53_cvector, 1);
		var_64_float = var_64_float + var_51_float;
		SetByIndex(var_53_cvector, 1) = var_64_float;
		PlayGlobalSound(var_37_string, var_53_cvector);
	}
	return 16;
	
}


func_119(var_22_string, var_23_int)
{
	var_25_string = ""; var_26_string = "";
	var_27_int = var_23_int;
	if(var_27_int != 0) {
		"idle" = "idle" + var_23_int;
	}
	var_26_string = var_22_string;
	return 2;
}


func_126(var_31_string, var_32_int)
{
	var_35_int = var_32_int + (int)1;
	var_31_string = "idle" + var_35_int;
	return 0;
}


