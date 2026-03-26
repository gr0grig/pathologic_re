// @IMPORTS: Sleep/1,FindActor/2,SetTimer/2,KillTimer/1,UnlookAsync/1,WaitForAnimEnd/0,irand/2,PlayAnimation/2,WaitForAnimEnd/1,rand/2,Sleep/2,ResetAAS/0,GetPosition/1,IsLoaded/1,LookAsync/3,HasAnimation/3
// @STRINGS: W:player|W:head|W:all|A:GetPosition|A:GetEyesHeight|W:idle
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=int,int,bool,bool,object params=0
// @EVENT_7: op=0x34 vars=int
// @PE: 0xa,0x34

task_0_event_7(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_int)
{
	var_7_bool = var_5_int == (int)10;
	if(var_7_bool != 0) {
		var_8_bool = 0;
		func_37(var_3_bool, var_4_object, var_5_int, var_8_bool);
		if(var_8_bool != 0) {
			var_21_bool = var_2_bool == 0; //@nz
			if(var_21_bool != 0) {
				var_22_object = Obj();
				var_22_object = var_4_object;
				func_169(var_22_object);
				var_2_bool = true;
			}
		} else {
			var_29_bool = var_2_bool;
			if(var_29_bool == 0) goto Label_74;
			UnlookAsync("head");
			var_2_bool = false;
		}
	}
Label_74:
	return 0;
	
}


main(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object)
{
	
Label_0:
	Sleep((int)1);
	var_6_float = 0; var_7_float = 0;
	func_10(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, (float)300, (float)100);
	goto Label_0;
}
EMIT "Return(); Pop(0)";


func_164(var_8_bool)
{
	var_9_bool = 0; var_10_bool = 0;
	IsLoaded(var_10_bool);
	var_10_bool = var_8_bool;
	return 2;
}


func_37(var_0_int, var_1_int, var_4_object, var_8_bool)
{
	var_9_float = 0; var_10_float = 0;
	var_11_bool = var_4_object == 0; //@ne
	if(var_11_bool != 0) {
		var_8_bool = 0;
		return 2;
	}
	var_12_float = 0; var_13_object = Obj();
	var_13_object = var_4_object;
	func_156(var_12_float, var_13_object);
	var_10_float = sqrt(var_12_float);
	var_20_bool = var_2_bool;
	if(var_20_bool != 0) {
		var_10_float = var_10_float - var_1_int;
	}
	var_8_bool = var_10_float < var_0_int;
	return 2;
}


func_169(var_22_object)
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


func_10(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_6_float, var_7_float)
{
	var_8_bool = 0;
	func_164(var_8_bool);
	var_11_bool = var_8_bool == 0; //@nz
	if(var_11_bool != 0) {
		return 0;
	}
	FindActor(var_4_object, "player");
	var_2_bool = false;
	var_3_bool = false;
	var_0_int = var_6_float;
	var_1_int = var_7_float;
	SetTimer((int)10, (float)1.0);
	func_75();
	var_66_bool = var_3_bool == 0; //@nz
	if(var_66_bool != 0) {
		KillTimer((int)10);
	}
	return 0;
}


func_75()
{
	var_15_int = 0; var_16_int = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_float = 0; var_21_bool = 0; var_22_int = 0; var_23_int = 0; var_24_int = 0; var_25_int = 0; var_26_bool = 0; var_27_float = 0; var_28_bool = 0;
	WaitForAnimEnd();
	var_29_bool = 0;
	func_164(var_29_bool);
	var_30_bool = var_29_bool == 0; //@nz
	if(var_30_bool != 0) {
		return 14;
	}
	func_187((int)0);
	var_31_int = var_22_int;
	var_23_int = 0;
	
Label_89:
	var_44_bool = 0;
	var_44_bool = 0;
	var_46_bool = var_23_int < (int)5;
	if(var_46_bool != 0) {
		var_47_bool = 0;
		func_164(var_47_bool);
		if(var_47_bool != 0) {
			var_44_bool = 1;
		}
	}
	if(var_44_bool != 0) {
		irand(var_24_int, (int)3);
		var_50_bool = var_24_int == (int)0;
		if(var_50_bool != 0) {
			var_51_int = var_22_int;
			if(var_51_int == 0) goto Label_122;
			irand(var_25_int, var_22_int);
			var_53_string = ""; var_54_int = 0;
			var_25_int = var_54_int;
			func_180(var_53_string, var_54_int);
			PlayAnimation("all", var_53_string);
			WaitForAnimEnd(var_26_bool);
			var_55_bool = var_26_bool == 0; //@nz
			if(var_55_bool != 0) {
			} else {
		} else {
				var_60_bool = var_24_int == (int)1;
				if(var_60_bool != 0) {
					rand(var_27_float, (int)4);
					var_63_int = var_27_float + (int)1;
					Sleep(var_63_int, var_28_bool);
					var_64_bool = var_28_bool == 0; //@nz
					if(var_64_bool != 0) {
						goto Label_151;
					}
					goto Label_140;
				}
				var_65_int = var_23_int;
				if(var_65_int == 0) goto Label_140;
				goto Label_151;
		}
		Label_140:
			var_56_bool = 0;
			func_154(var_56_bool);
			var_57_bool = var_56_bool == 0; //@nz
			if(var_57_bool != 0) {
				goto Label_151;
			}
			ResetAAS();
			var_23_int = var_23_int + (int)1;
			goto Label_89;

		}
	}
Label_151:
	ResetAAS();
	return 14;
	
}


func_180(var_37_string, var_38_int)
{
	var_39_string = ""; var_40_string = "";
	var_41_int = var_38_int;
	if(var_41_int != 0) {
		"idle" = "idle" + var_38_int;
	}
	var_40_string = var_37_string;
	return 2;
}


func_154(var_56_bool)
{
	var_56_bool = 1;
	return 0;
}


func_187(var_31_int)
{
	var_32_int = 0; var_33_bool = 0; var_34_int = 0; var_35_bool = 0;
	var_34_int = 0;
	
Label_189:
	var_37_string = ""; var_38_int = 0;
	var_34_int = var_38_int;
	func_180(var_37_string, var_38_int);
	HasAnimation(var_35_bool, "all", var_37_string);
	var_42_bool = var_35_bool == 0; //@nz
	if(var_42_bool != 0) {
	} else {
		var_34_int = var_34_int + (int)1;
		goto Label_189;
	}
	var_34_int = var_31_int;
	return 4;
	
}


func_156(var_12_float, var_13_object)
{
	var_14_cvector = CVector(0,0,0); var_15_cvector = CVector(0,0,0); var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0);
	GetPosition(var_17_cvector);
	@@var_13_object:GetPosition(var_18_cvector);
	var_19_cvector = var_18_cvector - var_17_cvector;
	var_12_float = var_19_cvector | var_19_cvector;
	return 6;
}


