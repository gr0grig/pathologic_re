// @IMPORTS: GetGameTime/1,SetTimeEvent/2,rand/2,Sleep/2,RemoveActor/1,FindActor/2,SetTimer/2,KillTimer/1,UnlookAsync/1,WaitForAnimEnd/0,irand/2,PlayAnimation/2,WaitForAnimEnd/1,ResetAAS/0,StopAnimation/0,StopGroup0/0,GetPosition/1,IsLoaded/1,LookAsync/3,self/1,HasAnimation/3
// @STRINGS: W:cleanup|W:player|W:head|W:all|A:GetPosition|A:GetEyesHeight|W:idle
// @GLOBALS: 0:object:
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=int,int,bool,bool,object,bool,bool params=0
// @EVENT_0: op=0x15 vars=object
// @EVENT_9: op=0x1a vars=int,float
// @EVENT_26: op=0x46 vars=string
// @EVENT_6: op=0x4e vars=
// @EVENT_7: op=0x8f vars=int
// @PE: 0x15,0x1a,0x46,0x65,0x8f,0xa6

task_0_event_0(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_bool, var_7_object)
{
	func_166(var_6_bool, var_7_object);
	return 0;
}


task_0_event_9(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_bool, var_7_int, var_8_float)
{
	var_9_string = "";
	var_9_string = "cleanup";
	func_70();
	return 0;
}


	task_0_event_26(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_bool, var_7_float, var_8_float, var_11_string)
	{
	var_12_string = "cleanup";
	var_13_bool = var_11_string == var_12_string;
	if(var_13_bool != 0) {
		func_50(var_11_string);
	}
	return 0;
	}


task_0_event_6(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_bool)
{
	var_7_bool = var_6_bool;
	if(var_7_bool != 0) {
		func_166(var_5_bool, var_6_bool);
	}
	var_11_bool = 0;
	var_11_bool = 0;
	var_12_bool = var_5_bool;
	if(var_12_bool != 0) {
		var_13_bool = 0;
		func_99(var_13_bool);
		if(var_13_bool != 0) {
			var_11_bool = 1;
		}
	}
	if(var_11_bool != 0) {
		var_14_object = Obj();
		func_290(var_14_object);
		RemoveActor(var_14_object);
	}
	return 0;
}


task_0_event_7(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_bool, var_7_int)
{
	var_9_bool = var_7_int == (int)10;
	if(var_9_bool != 0) {
		var_10_bool = 0;
		func_128(var_5_bool, var_6_bool, var_7_int, var_10_bool);
		if(var_10_bool != 0) {
			var_23_bool = var_2_bool == 0; //@nz
			if(var_23_bool != 0) {
				var_24_object = Obj();
				var_24_object = var_4_object;
				func_279(var_24_object);
				var_2_bool = true;
			}
		} else {
			var_31_bool = var_2_bool;
			if(var_31_bool == 0) goto Label_165;
			UnlookAsync("head");
			var_2_bool = false;
		}
	}
Label_165:
	return 0;
	
}


main(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_bool)
{
	var_7_float = 0; var_8_float = 0;
	GetGameTime(var_8_float);
	var_10_bool = var_8_float >= (int)24;
	if(var_10_bool != 0) {
		var_11_string = "";
		var_11_string = "cleanup";
		func_70();
	} else {
		SetTimeEvent((int)0, (int)24);
	}
	var_23_float = 0; var_24_float = 0;
	func_32(var_8_float, (float)300, (float)100);
	return 2;
	
}


func_32(var_6_bool, var_23_float, var_24_float)
{
	var_25_float = 0; var_26_bool = 0; var_27_float = 0; var_28_bool = 0;
	var_6_bool = false;
	
Label_34:
	rand(var_27_float, (int)3);
	var_31_int = var_27_float + (int)3;
	Sleep(var_31_int, var_28_bool);
	var_6_bool = true;
	var_32_float = 0; var_33_float = 0;
	var_23_float = var_32_float;
	var_24_float = var_33_float;
	func_101(var_24_float, var_25_float, var_26_bool, var_27_float, var_28_bool, var_32_float, var_33_float);
	var_6_bool = false;
	goto Label_34;
}
EMIT "Return(); Pop(4)";


func_128(var_0_int, var_1_int, var_4_object, var_10_bool)
{
	var_11_float = 0; var_12_float = 0;
	var_13_bool = var_4_object == 0; //@ne
	if(var_13_bool != 0) {
		var_10_bool = 0;
		return 2;
	}
	var_14_float = 0; var_15_object = Obj();
	var_15_object = var_4_object;
	func_266(var_14_float, var_15_object);
	var_12_float = sqrt(var_14_float);
	var_22_bool = var_2_bool;
	if(var_22_bool != 0) {
		var_12_float = var_12_float - var_1_int;
	}
	var_10_bool = var_12_float < var_0_int;
	return 2;
}


func_290(var_20_object)
{
	var_21_object = Obj(); var_22_object = Obj();
	self(var_22_object);
	var_22_object = var_20_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_99(var_19_bool)
{
	var_19_bool = 1;
	return 0;
}


func_259(var_80_bool)
{
	var_80_bool = 1;
	return 0;
}


func_101(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_32_float, var_33_float)
{
	var_34_bool = 0;
	func_274(var_34_bool);
	var_35_bool = var_34_bool == 0; //@nz
	if(var_35_bool != 0) {
		return 0;
	}
	FindActor(var_4_object, "player");
	var_2_bool = false;
	var_3_bool = false;
	var_0_int = var_32_float;
	var_1_int = var_33_float;
	SetTimer((int)10, (float)1.0);
	func_180();
	var_90_bool = var_3_bool == 0; //@nz
	if(var_90_bool != 0) {
		KillTimer((int)10);
	}
	return 0;
}


func_166(var_2_bool, var_3_bool)
{
	func_261();
	KillTimer((int)10);
	var_9_bool = var_2_bool;
	if(var_9_bool != 0) {
		UnlookAsync("head");
		var_2_bool = false;
	}
	var_3_bool = true;
	return 0;
}


func_261()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_296(var_61_string, var_62_int)
{
	var_63_string = ""; var_64_string = "";
	var_65_int = var_62_int;
	if(var_65_int != 0) {
		"idle" = "idle" + var_62_int;
	}
	var_64_string = var_61_string;
	return 2;
}


func_266(var_14_float, var_15_object)
{
	var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0);
	GetPosition(var_19_cvector);
	@@var_15_object:GetPosition(var_20_cvector);
	var_21_cvector = var_20_cvector - var_19_cvector;
	var_14_float = var_21_cvector | var_21_cvector;
	return 6;
}


func_303(var_55_int)
{
	var_56_int = 0; var_57_bool = 0; var_58_int = 0; var_59_bool = 0;
	var_58_int = 0;
	
Label_305:
	var_61_string = ""; var_62_int = 0;
	var_58_int = var_62_int;
	func_296(var_61_string, var_62_int);
	HasAnimation(var_59_bool, "all", var_61_string);
	var_66_bool = var_59_bool == 0; //@nz
	if(var_66_bool != 0) {
	} else {
		var_58_int = var_58_int + (int)1;
		goto Label_305;
	}
	var_58_int = var_55_int;
	return 4;
	
}


func_274(var_15_bool)
{
	var_16_bool = 0; var_17_bool = 0;
	IsLoaded(var_17_bool);
	var_17_bool = var_15_bool;
	return 2;
}


func_50(var_5_bool)
{
	var_5_bool = true;
	var_14_bool = 0;
	var_14_bool = 0;
	var_15_bool = 0;
	func_274(var_15_bool);
	var_18_bool = var_15_bool == 0; //@nz
	if(var_18_bool != 0) {
		var_19_bool = 0;
		func_99(var_19_bool);
		if(var_19_bool != 0) {
			var_14_bool = 1;
		}
	}
	if(var_14_bool != 0) {
		var_20_object = Obj();
		func_290(var_20_object);
		RemoveActor(var_20_object);
	}
	return 0;
}


func_180()
{
	var_39_int = 0; var_40_int = 0; var_41_int = 0; var_42_int = 0; var_43_bool = 0; var_44_float = 0; var_45_bool = 0; var_46_int = 0; var_47_int = 0; var_48_int = 0; var_49_int = 0; var_50_bool = 0; var_51_float = 0; var_52_bool = 0;
	WaitForAnimEnd();
	var_53_bool = 0;
	func_274(var_53_bool);
	var_54_bool = var_53_bool == 0; //@nz
	if(var_54_bool != 0) {
		return 14;
	}
	func_303((int)0);
	var_55_int = var_46_int;
	var_47_int = 0;
	
Label_194:
	var_68_bool = 0;
	var_68_bool = 0;
	var_70_bool = var_47_int < (int)5;
	if(var_70_bool != 0) {
		var_71_bool = 0;
		func_274(var_71_bool);
		if(var_71_bool != 0) {
			var_68_bool = 1;
		}
	}
	if(var_68_bool != 0) {
		irand(var_48_int, (int)3);
		var_74_bool = var_48_int == (int)0;
		if(var_74_bool != 0) {
			var_75_int = var_46_int;
			if(var_75_int == 0) goto Label_227;
			irand(var_49_int, var_46_int);
			var_77_string = ""; var_78_int = 0;
			var_49_int = var_78_int;
			func_296(var_77_string, var_78_int);
			PlayAnimation("all", var_77_string);
			WaitForAnimEnd(var_50_bool);
			var_79_bool = var_50_bool == 0; //@nz
			if(var_79_bool != 0) {
			} else {
		} else {
				var_84_bool = var_48_int == (int)1;
				if(var_84_bool != 0) {
					rand(var_51_float, (int)4);
					var_87_int = var_51_float + (int)1;
					Sleep(var_87_int, var_52_bool);
					var_88_bool = var_52_bool == 0; //@nz
					if(var_88_bool != 0) {
						goto Label_256;
					}
					goto Label_245;
				}
				var_89_int = var_47_int;
				if(var_89_int == 0) goto Label_245;
				goto Label_256;
		}
		Label_245:
			var_80_bool = 0;
			func_259(var_80_bool);
			var_81_bool = var_80_bool == 0; //@nz
			if(var_81_bool != 0) {
				goto Label_256;
			}
			ResetAAS();
			var_47_int = var_47_int + (int)1;
			goto Label_194;

		}
	}
Label_256:
	ResetAAS();
	return 14;
	
}


func_279(var_24_object)
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


