// @IMPORTS: Sleep/1,rand/2,Sleep/2,RemoveActor/1,FindActor/2,SetTimer/2,KillTimer/1,UnlookAsync/1,WaitForAnimEnd/0,irand/2,PlayAnimation/2,WaitForAnimEnd/1,ResetAAS/0,StopAnimation/0,StopGroup0/0,GetPosition/1,IsLoaded/1,LookAsync/3,self/1,HasAnimation/3
// @STRINGS: W:cleanup|W:player|W:head|W:all|A:GetPosition|A:GetEyesHeight|W:idle
// @GLOBALS: 0:object:
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=int,int,bool,bool,object,bool,bool params=0
// @EVENT_26: op=0x30 vars=string
// @EVENT_6: op=0x38 vars=
// @EVENT_7: op=0x79 vars=int
// @PE: 0x30,0x4f,0x79,0x90

task_0_event_26(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_bool, var_7_string)
{
	var_9_bool = var_7_string == "cleanup";
	if(var_9_bool != 0) {
		func_28(var_7_string);
	}
	return 0;
}


task_0_event_6(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_bool)
{
	var_7_bool = var_6_bool;
	if(var_7_bool != 0) {
		func_144(var_5_bool, var_6_bool);
	}
	var_11_bool = 0;
	var_11_bool = 0;
	var_12_bool = var_5_bool;
	if(var_12_bool != 0) {
		var_13_bool = 0;
		func_77(var_13_bool);
		if(var_13_bool != 0) {
			var_11_bool = 1;
		}
	}
	if(var_11_bool != 0) {
		var_14_object = Obj();
		func_268(var_14_object);
		RemoveActor(var_14_object);
	}
	return 0;
}


task_0_event_7(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_bool, var_7_int)
{
	var_9_bool = var_7_int == (int)10;
	if(var_9_bool != 0) {
		var_10_bool = 0;
		func_106(var_5_bool, var_6_bool, var_7_int, var_10_bool);
		if(var_10_bool != 0) {
			var_23_bool = var_2_bool == 0; //@nz
			if(var_23_bool != 0) {
				var_24_object = Obj();
				var_24_object = var_4_object;
				func_257(var_24_object);
				var_2_bool = true;
			}
		} else {
			var_31_bool = var_2_bool;
			if(var_31_bool == 0) goto Label_143;
			UnlookAsync("head");
			var_2_bool = false;
		}
	}
Label_143:
	return 0;
	
}


main(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_bool)
{
	
Label_0:
	var_7_float = 0; var_8_float = 0;
	func_10(var_6_bool, (float)300, (float)100);
	Sleep((int)3);
	goto Label_0;
}
EMIT "Return(); Pop(0)";


func_257(var_24_object)
{
	var_25_float = 0; var_26_cvector = CVector(0,0,0); var_27_float = 0; var_28_cvector = CVector(0,0,0);
	@@var_24_object:GetEyesHeight(var_27_float);
	var_28_cvector = CVector(0.0, 0.0, 0.0);
	var_29_float = GetByIndex(var_28_cvector, 1);
	var_27_float = var_29_float;
	SetByIndex(var_28_cvector, 1) = var_29_float;
	LookAsync(var_24_object, "head", var_28_cvector);
	return 4;
}


func_10(var_6_bool, var_7_float, var_8_float)
{
	var_9_float = 0; var_10_bool = 0; var_11_float = 0; var_12_bool = 0;
	var_6_bool = false;
	
Label_12:
	rand(var_11_float, (int)3);
	var_15_int = var_11_float + (int)3;
	Sleep(var_15_int, var_12_bool);
	var_6_bool = true;
	var_16_float = 0; var_17_float = 0;
	var_7_float = var_16_float;
	var_8_float = var_17_float;
	func_79(var_8_float, var_9_float, var_10_bool, var_11_float, var_12_bool, var_16_float, var_17_float);
	var_6_bool = false;
	goto Label_12;
}
EMIT "Return(); Pop(4)";


func_106(var_0_int, var_1_int, var_4_object, var_10_bool)
{
	var_11_float = 0; var_12_float = 0;
	var_13_bool = var_4_object == 0; //@ne
	if(var_13_bool != 0) {
		var_10_bool = 0;
		return 2;
	}
	var_14_float = 0; var_15_object = Obj();
	var_15_object = var_4_object;
	func_244(var_14_float, var_15_object);
	var_12_float = sqrt(var_14_float);
	var_22_bool = var_2_bool;
	if(var_22_bool != 0) {
		var_12_float = var_12_float - var_1_int;
	}
	var_10_bool = var_12_float < var_0_int;
	return 2;
}


func_268(var_14_object)
{
	var_15_object = Obj(); var_16_object = Obj();
	self(var_16_object);
	var_16_object = var_14_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_77(var_13_bool)
{
	var_13_bool = 1;
	return 0;
}


func_237(var_66_bool)
{
	var_66_bool = 1;
	return 0;
}


func_79(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_16_float, var_17_float)
{
	var_18_bool = 0;
	func_252(var_18_bool);
	var_21_bool = var_18_bool == 0; //@nz
	if(var_21_bool != 0) {
		return 0;
	}
	FindActor(var_4_object, "player");
	var_2_bool = false;
	var_3_bool = false;
	var_0_int = var_16_float;
	var_1_int = var_17_float;
	SetTimer((int)10, (float)1.0);
	func_158();
	var_76_bool = var_3_bool == 0; //@nz
	if(var_76_bool != 0) {
		KillTimer((int)10);
	}
	return 0;
}


func_144(var_2_bool, var_3_bool)
{
	func_239();
	KillTimer((int)10);
	var_9_bool = var_2_bool;
	if(var_9_bool != 0) {
		UnlookAsync("head");
		var_2_bool = false;
	}
	var_3_bool = true;
	return 0;
}


func_239()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_274(var_47_string, var_48_int)
{
	var_49_string = ""; var_50_string = "";
	var_51_int = var_48_int;
	if(var_51_int != 0) {
		"idle" = "idle" + var_48_int;
	}
	var_50_string = var_47_string;
	return 2;
}


func_28(var_5_bool)
{
	var_5_bool = true;
	var_10_bool = 0;
	var_10_bool = 0;
	var_11_bool = 0;
	func_252(var_11_bool);
	var_14_bool = var_11_bool == 0; //@nz
	if(var_14_bool != 0) {
		var_15_bool = 0;
		func_77(var_15_bool);
		if(var_15_bool != 0) {
			var_10_bool = 1;
		}
	}
	if(var_10_bool != 0) {
		var_16_object = Obj();
		func_268(var_16_object);
		RemoveActor(var_16_object);
	}
	return 0;
}


func_244(var_14_float, var_15_object)
{
	var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0);
	GetPosition(var_19_cvector);
	@@var_15_object:GetPosition(var_20_cvector);
	var_21_cvector = var_20_cvector - var_19_cvector;
	var_14_float = var_21_cvector | var_21_cvector;
	return 6;
}


func_281(var_41_int)
{
	var_42_int = 0; var_43_bool = 0; var_44_int = 0; var_45_bool = 0;
	var_44_int = 0;
	
Label_283:
	var_47_string = ""; var_48_int = 0;
	var_44_int = var_48_int;
	func_274(var_47_string, var_48_int);
	HasAnimation(var_45_bool, "all", var_47_string);
	var_52_bool = var_45_bool == 0; //@nz
	if(var_52_bool != 0) {
	} else {
		var_44_int = var_44_int + (int)1;
		goto Label_283;
	}
	var_44_int = var_41_int;
	return 4;
	
}


func_252(var_18_bool)
{
	var_19_bool = 0; var_20_bool = 0;
	IsLoaded(var_20_bool);
	var_20_bool = var_18_bool;
	return 2;
}


func_158()
{
	var_25_int = 0; var_26_int = 0; var_27_int = 0; var_28_int = 0; var_29_bool = 0; var_30_float = 0; var_31_bool = 0; var_32_int = 0; var_33_int = 0; var_34_int = 0; var_35_int = 0; var_36_bool = 0; var_37_float = 0; var_38_bool = 0;
	WaitForAnimEnd();
	var_39_bool = 0;
	func_252(var_39_bool);
	var_40_bool = var_39_bool == 0; //@nz
	if(var_40_bool != 0) {
		return 14;
	}
	func_281((int)0);
	var_41_int = var_32_int;
	var_33_int = 0;
	
Label_172:
	var_54_bool = 0;
	var_54_bool = 0;
	var_56_bool = var_33_int < (int)5;
	if(var_56_bool != 0) {
		var_57_bool = 0;
		func_252(var_57_bool);
		if(var_57_bool != 0) {
			var_54_bool = 1;
		}
	}
	if(var_54_bool != 0) {
		irand(var_34_int, (int)3);
		var_60_bool = var_34_int == (int)0;
		if(var_60_bool != 0) {
			var_61_int = var_32_int;
			if(var_61_int == 0) goto Label_205;
			irand(var_35_int, var_32_int);
			var_63_string = ""; var_64_int = 0;
			var_35_int = var_64_int;
			func_274(var_63_string, var_64_int);
			PlayAnimation("all", var_63_string);
			WaitForAnimEnd(var_36_bool);
			var_65_bool = var_36_bool == 0; //@nz
			if(var_65_bool != 0) {
			} else {
		} else {
				var_70_bool = var_34_int == (int)1;
				if(var_70_bool != 0) {
					rand(var_37_float, (int)4);
					var_73_int = var_37_float + (int)1;
					Sleep(var_73_int, var_38_bool);
					var_74_bool = var_38_bool == 0; //@nz
					if(var_74_bool != 0) {
						goto Label_234;
					}
					goto Label_223;
				}
				var_75_int = var_33_int;
				if(var_75_int == 0) goto Label_223;
				goto Label_234;
		}
		Label_223:
			var_66_bool = 0;
			func_237(var_66_bool);
			var_67_bool = var_66_bool == 0; //@nz
			if(var_67_bool != 0) {
				goto Label_234;
			}
			ResetAAS();
			var_33_int = var_33_int + (int)1;
			goto Label_172;

		}
	}
Label_234:
	ResetAAS();
	return 14;
	
}


