// @IMPORTS: FindActor/2,WaitForAnimEnd/0,irand/2,PlayAnimation/2,WaitForAnimEnd/1,UnlookAsync/1,Hold/0,GetPosition/1,IsLoaded/1,LookAsync/3,HasAnimation/3
// @STRINGS: W:player|W:all|W:head|A:GetPosition|A:GetEyesHeight|W:dance
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=bool,object params=0
// @EVENT_6: op=0x47 vars=

task_0_event_6(var_0_bool, var_1_object)
{
	
Label_71:
	Hold();
	goto Label_71;
}
EMIT "Return(); Pop(0)";


main(var_0_bool, var_1_object)
{
	var_2_object = Obj(); var_3_int = 0; var_4_int = 0; var_5_bool = 0; var_6_object = Obj(); var_7_int = 0; var_8_int = 0; var_9_bool = 0;
	FindActor(var_6_object, "player");
	var_0_bool = false;
	WaitForAnimEnd();
	var_11_bool = 0;
	func_83(var_11_bool);
	var_14_bool = var_11_bool == 0; //@nz
	if(var_14_bool != 0) {
		return 8;
	}
	func_99((int)0);
	var_15_int = var_7_int;
	
Label_17:
	var_28_int = var_7_int;
	if(var_28_int != 0) {
		irand(var_8_int, var_7_int);
		var_30_string = ""; var_31_int = 0;
		var_8_int = var_31_int;
		func_116(var_30_string, var_31_int);
		PlayAnimation("all", var_30_string);
		var_32_bool = 0;
		var_32_bool = 0;
		var_33_bool = 0; var_34_object = Obj();
		var_6_object = var_34_object;
		func_123(var_33_bool, var_34_object);
		if(var_33_bool != 0) {
			var_47_bool = var_0_bool == 0; //@nz
			if(var_47_bool != 0) {
				var_32_bool = 1;
			}
		}
		if(var_32_bool != 0) {
			var_0_bool = true;
			var_48_object = Obj();
			var_6_object = var_48_object;
			func_88(var_48_object);
		}
		WaitForAnimEnd(var_9_bool);
		var_55_bool = var_9_bool == 0; //@nz
		if(var_55_bool != 0) {
		} else {
			var_56_bool = 0;
			var_56_bool = 0;
			var_57_bool = 0; var_58_object = Obj();
			var_6_object = var_58_object;
			func_123(var_57_bool, var_58_object);
			var_59_bool = var_57_bool == 0; //@nz
			if(var_59_bool != 0) {
				var_60_bool = var_0_bool;
				if(var_60_bool != 0) {
					var_56_bool = 1;
				}
			}
			if(var_56_bool != 0) {
				UnlookAsync("head");
				var_0_bool = false;
			}
			goto Label_17;
		}
	}
Label_66:
	Hold();
	goto Label_66;
	
}
EMIT "Return(); Pop(8)";
EMIT "Stack[-4] = 0";


func_99(var_15_int)
{
	var_16_int = 0; var_17_bool = 0; var_18_int = 0; var_19_bool = 0;
	var_18_int = 0;
	
Label_101:
	var_21_string = ""; var_22_int = 0;
	var_18_int = var_22_int;
	func_116(var_21_string, var_22_int);
	HasAnimation(var_19_bool, "all", var_21_string);
	var_26_bool = var_19_bool == 0; //@nz
	if(var_26_bool != 0) {
	} else {
		var_18_int = var_18_int + (int)1;
		goto Label_101;
	}
	var_18_int = var_15_int;
	return 4;
	
}


func_75(var_38_float, var_39_object)
{
	var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0);
	GetPosition(var_43_cvector);
	@@var_39_object:GetPosition(var_44_cvector);
	var_45_cvector = var_44_cvector - var_43_cvector;
	var_38_float = var_45_cvector | var_45_cvector;
	return 6;
}


func_83(var_11_bool)
{
	var_12_bool = 0; var_13_bool = 0;
	IsLoaded(var_13_bool);
	var_13_bool = var_11_bool;
	return 2;
}


func_116(var_21_string, var_22_int)
{
	var_23_string = ""; var_24_string = "";
	var_25_int = var_22_int;
	if(var_25_int != 0) {
		"dance" = "dance" + var_22_int;
	}
	var_24_string = var_21_string;
	return 2;
}


func_88(var_48_object)
{
	var_49_float = 0; var_50_cvector = CVector(0,0,0); var_51_float = 0; var_52_cvector = CVector(0,0,0);
	@@var_48_object:GetEyesHeight(var_51_float);
	var_52_cvector = CVector(0.0, 0.0, 0.0);
	var_53_float = GetByIndex(var_52_cvector, 1);
	var_51_float = var_53_float;
	SetByIndex(var_52_cvector, 1) = var_53_float;
	LookAsync(var_48_object, "head", var_52_cvector);
	return 4;
}


func_123(var_33_bool, var_34_object)
{
	var_35_float = 0; var_36_float = 0;
	var_37_bool = var_34_object == 0; //@ne
	if(var_37_bool != 0) {
		var_33_bool = 0;
		return 2;
	}
	var_38_float = 0; var_39_object = Obj();
	var_34_object = var_39_object;
	func_75(var_38_float, var_39_object);
	var_36_float = sqrt(var_38_float);
	var_33_bool = var_36_float < (int)350;
	return 2;
}


