// @IMPORTS: Sleep/1,FindActor/2,SetTimer/2,KillTimer/1,UnlookAsync/1,WaitForAnimEnd/0,irand/2,PlayAnimation/2,WaitForAnimEnd/1,rand/2,Sleep/2,ResetAAS/0,GetPosition/1,IsLoaded/1,LookAsync/3,Trigger/2,HasAnimation/3
// @STRINGS: W:player|W:head|W:all|A:GetPosition|A:GetEyesHeight|W:idle|W:quest_d2_02|W:driver_unload
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=int,int,bool,bool,object params=0
// @EVENT_0: op=0xa vars=
// @EVENT_7: op=0x35 vars=int
// @STANDALONE_EVENT_6: op=0xd9 vars=
// @PE: 0xb,0x35

task_0_event_0(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object)
{
	return 0;
}


task_0_event_7(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_int)
{
	var_7_bool = var_5_int == (int)10;
	if(var_7_bool != 0) {
		var_8_bool = 0;
		func_38(var_3_bool, var_4_object, var_5_int, var_8_bool);
		if(var_8_bool != 0) {
			var_21_bool = var_2_bool == 0; //@nz
			if(var_21_bool != 0) {
				var_22_object = Obj();
				var_22_object = var_4_object;
				func_170(var_22_object);
				var_2_bool = true;
			}
		} else {
			var_29_bool = var_2_bool;
			if(var_29_bool == 0) goto Label_75;
			UnlookAsync("head");
			var_2_bool = false;
		}
	}
Label_75:
	return 0;
	
}


event_6(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object)
{
	var_5_bool = 0; var_6_string = ""; var_7_string = "";
	func_181(var_5_bool, "quest_d2_02", "driver_unload");
	return 0;
}


main(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object)
{
	
Label_0:
	var_5_float = 0; var_6_float = 0;
	func_11(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, (float)300, (float)100);
	Sleep((int)3);
	goto Label_0;
}
EMIT "Return(); Pop(0)";


func_193(var_36_string, var_37_int)
{
	var_38_string = ""; var_39_string = "";
	var_40_int = var_37_int;
	if(var_40_int != 0) {
		"idle" = "idle" + var_37_int;
	}
	var_39_string = var_36_string;
	return 2;
}


func_165(var_7_bool)
{
	var_8_bool = 0; var_9_bool = 0;
	IsLoaded(var_9_bool);
	var_9_bool = var_7_bool;
	return 2;
}


func_38(var_0_int, var_1_int, var_4_object, var_8_bool)
{
	var_9_float = 0; var_10_float = 0;
	var_11_bool = var_4_object == 0; //@ne
	if(var_11_bool != 0) {
		var_8_bool = 0;
		return 2;
	}
	var_12_float = 0; var_13_object = Obj();
	var_13_object = var_4_object;
	func_157(var_12_float, var_13_object);
	var_10_float = sqrt(var_12_float);
	var_20_bool = var_2_bool;
	if(var_20_bool != 0) {
		var_10_float = var_10_float - var_1_int;
	}
	var_8_bool = var_10_float < var_0_int;
	return 2;
}


func_200(var_30_int)
{
	var_31_int = 0; var_32_bool = 0; var_33_int = 0; var_34_bool = 0;
	var_33_int = 0;
	
Label_202:
	var_36_string = ""; var_37_int = 0;
	var_33_int = var_37_int;
	func_193(var_36_string, var_37_int);
	HasAnimation(var_34_bool, "all", var_36_string);
	var_41_bool = var_34_bool == 0; //@nz
	if(var_41_bool != 0) {
	} else {
		var_33_int = var_33_int + (int)1;
		goto Label_202;
	}
	var_33_int = var_30_int;
	return 4;
	
}


func_170(var_22_object)
{
	var_23_float = 0; var_24_cvector = CVector(0,0,0); var_25_float = 0; var_26_cvector = CVector(0,0,0);
	@@var_22_object:GetEyesHeight(var_25_float);
	var_26_cvector = CVector(0.0, 0.0, 0.0);
	var_27_float = GetByIndex(var_26_cvector, 1);
	var_25_float = var_27_float;
	SetByIndex(var_26_cvector, 1) = var_27_float;
	LookAsync(var_22_object, "head", var_26_cvector);
	return 4;
}


func_11(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_float, var_6_float)
{
	var_7_bool = 0;
	func_165(var_7_bool);
	var_10_bool = var_7_bool == 0; //@nz
	if(var_10_bool != 0) {
		return 0;
	}
	FindActor(var_4_object, "player");
	var_2_bool = false;
	var_3_bool = false;
	var_0_int = var_5_float;
	var_1_int = var_6_float;
	SetTimer((int)10, (float)1.0);
	func_76();
	var_65_bool = var_3_bool == 0; //@nz
	if(var_65_bool != 0) {
		KillTimer((int)10);
	}
	return 0;
}


func_76()
{
	var_14_int = 0; var_15_int = 0; var_16_int = 0; var_17_int = 0; var_18_bool = 0; var_19_float = 0; var_20_bool = 0; var_21_int = 0; var_22_int = 0; var_23_int = 0; var_24_int = 0; var_25_bool = 0; var_26_float = 0; var_27_bool = 0;
	WaitForAnimEnd();
	var_28_bool = 0;
	func_165(var_28_bool);
	var_29_bool = var_28_bool == 0; //@nz
	if(var_29_bool != 0) {
		return 14;
	}
	func_200((int)0);
	var_30_int = var_21_int;
	var_22_int = 0;
	
Label_90:
	var_43_bool = 0;
	var_43_bool = 0;
	var_45_bool = var_22_int < (int)5;
	if(var_45_bool != 0) {
		var_46_bool = 0;
		func_165(var_46_bool);
		if(var_46_bool != 0) {
			var_43_bool = 1;
		}
	}
	if(var_43_bool != 0) {
		irand(var_23_int, (int)3);
		var_49_bool = var_23_int == (int)0;
		if(var_49_bool != 0) {
			var_50_int = var_21_int;
			if(var_50_int == 0) goto Label_123;
			irand(var_24_int, var_21_int);
			var_52_string = ""; var_53_int = 0;
			var_24_int = var_53_int;
			func_193(var_52_string, var_53_int);
			PlayAnimation("all", var_52_string);
			WaitForAnimEnd(var_25_bool);
			var_54_bool = var_25_bool == 0; //@nz
			if(var_54_bool != 0) {
			} else {
		} else {
				var_59_bool = var_23_int == (int)1;
				if(var_59_bool != 0) {
					rand(var_26_float, (int)4);
					var_62_int = var_26_float + (int)1;
					Sleep(var_62_int, var_27_bool);
					var_63_bool = var_27_bool == 0; //@nz
					if(var_63_bool != 0) {
						goto Label_152;
					}
					goto Label_141;
				}
				var_64_int = var_22_int;
				if(var_64_int == 0) goto Label_141;
				goto Label_152;
		}
		Label_141:
			var_55_bool = 0;
			func_155(var_55_bool);
			var_56_bool = var_55_bool == 0; //@nz
			if(var_56_bool != 0) {
				goto Label_152;
			}
			ResetAAS();
			var_22_int = var_22_int + (int)1;
			goto Label_90;

		}
	}
Label_152:
	ResetAAS();
	return 14;
	
}


func_181(var_5_bool, var_6_string, var_7_string)
{
	var_8_object = Obj(); var_9_object = Obj();
	FindActor(var_9_object, var_6_string);
	var_10_bool = var_9_object == 0; //@ne
	if(var_10_bool != 0) {
		var_5_bool = 0;
		return 2;
	}
	Trigger(var_9_object, var_7_string);
	var_5_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_155(var_55_bool)
{
	var_55_bool = 1;
	return 0;
}


func_157(var_12_float, var_13_object)
{
	var_14_cvector = CVector(0,0,0); var_15_cvector = CVector(0,0,0); var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0);
	GetPosition(var_17_cvector);
	@@var_13_object:GetPosition(var_18_cvector);
	var_19_cvector = var_18_cvector - var_17_cvector;
	var_12_float = var_19_cvector | var_19_cvector;
	return 6;
}


