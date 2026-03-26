// @IMPORTS: IsLoaded/1,RemoveActor/1,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,lshStopAnimation/0,StopAsync/0,StopGroup0/0,IsOverrideActive/1,WaitForAnimEnd/0,Sleep/2,irand/2,PlayAnimation/2,WaitForAnimEnd/1,ResetAAS/0,StopAnimation/0,GetPosition/1,Rotate/3,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,HasAnimation/3
// @STRINGS: W:cleanup|W:restore|W:player|W:Neutral|W:all|A:GetPosition|W:c|A:HasProperty|A:GetProperty|W:Can't find lsh animation : |W:idle
// @GLOBALS: 0:object:
// @RUN_OP: 0x2
// @RUN_TASK: 0
// @TASK_0: vars=cvector,bool params=0
// @EVENT_26: op=0x6 vars=string
// @EVENT_6: op=0x1a vars=
// @EVENT_5: op=0x27 vars=
// @EVENT_7: op=0x70 vars=int
// @EVENT_45: op=0xb2 vars=bool
// @EVENT_0: op=0xbe vars=object
// @PE: 0x0,0x2,0x27,0x70,0x96,0xb2

task_0_event_26(var_0_cvector, var_1_bool, var_2_string)
{
	var_3_bool = 0; var_4_bool = 0;
	var_6_bool = var_2_string == "cleanup";
	if(var_6_bool != 0) {
		var_1_bool = true;
		IsLoaded(var_4_bool);
		var_7_bool = var_4_bool == 0; //@nz
		if(var_7_bool != 0) {
			var_8_object = Obj();
			func_395(var_8_object);
			RemoveActor(var_8_object);
		}
	} else {
		var_12_bool = var_2_string == "restore";
		if(var_12_bool == 0) goto Label_25;
		var_1_bool = false;
	}
Label_25:
	return 2;
	
}


task_0_event_6(var_0_cvector, var_1_bool)
{
	var_2_bool = var_1_bool;
	if(var_2_bool != 0) {
		var_3_object = Obj();
		func_395(var_3_object);
		RemoveActor(var_3_object);
		Hold();
	}
	func_150();
	return 0;
}


task_0_event_5(var_0_cvector, var_1_bool)
{
	func_165();
	return 0;
}


task_0_event_7(var_0_cvector, var_1_bool, var_2_int)
{
	var_4_bool = var_2_int == (int)10;
	if(var_4_bool != 0) {
		func_108();
		var_6_bool = 0;
		var_6_bool = 0;
		var_7_bool = 0;
		func_322(var_7_bool);
		if(var_7_bool != 0) {
			var_10_bool = 0;
			func_77(var_10_bool);
			if(var_10_bool != 0) {
				var_6_bool = 1;
			}
		}
		if(var_6_bool != 0) {
			var_27_bool = 0;
			func_57(var_27_bool);
			if(var_27_bool != 0) {
				var_46_bool = 0; var_47_object = Obj();
				func_395(Obj());
				var_48_object = var_47_object;
				func_327(var_46_bool, var_47_object);
			}
		} else {
			func_72(var_2_int);
			func_99();
		}
	}
	return 0;
	
}


task_0_event_45(var_0_cvector, var_1_bool, var_2_bool)
{
	var_3_bool = var_2_bool;
	if(var_3_bool != 0) {
		func_99();
	} else {
		var_9_string = "";
		func_364("Neutral");
	}
	return 0;
	
}


task_0_event_0(var_0_cvector, var_1_bool, var_2_object)
{
	var_3_bool = 0; var_4_bool = 0;
	IsOverrideActive(var_4_bool);
	var_5_bool = var_4_bool == 0; //@nz
	if(var_5_bool != 0) {
		EventDisable(0);
		func_290();
		var_6_bool = 0; var_7_object = Obj();
		var_2_object = var_7_object;
		func_313(var_6_bool, var_7_object);
		EventEnable(0);
		var_2_object = Obj();
		func_0();
		var_21_string = "";
		func_364("Neutral");
		func_108();
		func_99();
	}
	return 2;
}


main(var_0_cvector, var_1_bool)
{
	func_43(var_1_bool);
	return 0;
}


func_0()
{
	return 0;
}


func_395(var_48_object)
{
	var_49_object = Obj(); var_50_object = Obj();
	self(var_50_object);
	var_50_object = var_48_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_401(var_26_string, var_27_int)
{
	var_28_string = ""; var_29_string = "";
	var_30_int = var_27_int;
	if(var_30_int != 0) {
		"idle" = "idle" + var_27_int;
	}
	var_29_string = var_26_string;
	return 2;
}


func_150()
{
	func_290();
	func_108();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


func_408(var_20_int)
{
	var_21_int = 0; var_22_bool = 0; var_23_int = 0; var_24_bool = 0;
	var_23_int = 0;
	
Label_410:
	var_26_string = ""; var_27_int = 0;
	var_23_int = var_27_int;
	func_401(var_26_string, var_27_int);
	HasAnimation(var_24_bool, "all", var_26_string);
	var_31_bool = var_24_bool == 0; //@nz
	if(var_31_bool != 0) {
	} else {
		var_23_int = var_23_int + (int)1;
		goto Label_410;
	}
	var_23_int = var_20_int;
	return 4;
	
}


func_288(var_40_bool)
{
	var_40_bool = 1;
	return 0;
}


func_290()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_165()
{
	StopGroup0();
	func_108();
	var_3_string = "";
	func_364("Neutral");
	func_99();
	return 0;
}


func_295(var_17_float, var_18_object)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0);
	GetPosition(var_22_cvector);
	@@var_18_object:GetPosition(var_23_cvector);
	var_24_cvector = var_23_cvector - var_22_cvector;
	var_17_float = var_24_cvector | var_24_cvector;
	return 6;
}


func_425(var_76_bool)
{
	var_76_bool = 1;
	return 0;
}


func_43(var_0_cvector)
{
	var_2_bool = 0;
	func_322(var_2_bool);
	var_5_bool = var_2_bool == 0; //@nz
	if(var_5_bool != 0) {
		Hold();
	}
	GetDirection(var_0_cvector);
	
Label_52:
	func_219();
	goto Label_52;
}
EMIT "Return(); Pop(0)";


func_303(var_10_bool, var_11_cvector)
{
	var_12_cvector = CVector(0,0,0); var_13_cvector = CVector(0,0,0); var_14_bool = 0; var_15_cvector = CVector(0,0,0); var_16_cvector = CVector(0,0,0); var_17_bool = 0;
	GetPosition(var_15_cvector);
	var_16_cvector = var_11_cvector - var_15_cvector;
	var_18_float = GetByIndex(var_16_cvector, 0);
	var_19_float = GetByIndex(var_16_cvector, 2);
	Rotate(var_18_float, var_19_float, var_17_bool);
	var_17_bool = var_10_bool;
	return 6;
}


func_313(var_6_bool, var_7_object)
{
	var_8_cvector = CVector(0,0,0); var_9_cvector = CVector(0,0,0);
	@@var_7_object:GetPosition(var_9_cvector);
	var_10_bool = 0; var_11_cvector = CVector(0,0,0);
	var_9_cvector = var_11_cvector;
	func_303(var_10_bool, var_11_cvector);
	var_10_bool = var_6_bool;
	return 2;
}


func_57(var_27_bool)
{
	var_28_object = Obj(); var_29_object = Obj();
	FindActor(var_29_object, "player");
	var_31_bool = var_29_object == 0; //@nz
	if(var_31_bool != 0) {
		var_27_bool = 0;
		return 2;
	}
	var_32_bool = 0; var_33_object = Obj();
	var_29_object = var_33_object;
	func_313(var_32_bool, var_33_object);
	var_32_bool = var_27_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_322(var_2_bool)
{
	var_3_bool = 0; var_4_bool = 0;
	IsLoaded(var_4_bool);
	var_4_bool = var_2_bool;
	return 2;
}


func_327(var_46_bool, var_47_object)
{
	var_51_string = ""; var_52_int = 0; var_53_bool = 0; var_54_int = 0; var_55_string = ""; var_56_string = ""; var_57_int = 0; var_58_bool = 0; var_59_int = 0; var_60_string = "";
	var_56_string = "c";
	var_57_int = 0;
	
Label_330:
	if((int)1 != 0) {
		var_63_int = var_57_int + (int)1;
		var_64_int = var_56_string + var_63_int;
		@@var_47_object:HasProperty(var_64_int, var_58_bool);
		var_65_bool = var_58_bool == 0; //@nz
		if(var_65_bool != 0) {
		} else {
			var_57_int = var_57_int + (int)1;
			goto Label_330;
		}
	}
	var_66_bool = var_57_int == 0; //@nz
	if(var_66_bool != 0) {
		var_46_bool = 0;
		return 10;
	}
	var_59_int = 0;
	var_68_bool = var_57_int > (int)1;
	if(var_68_bool != 0) {
		irand(var_59_int, var_57_int);
	}
	var_70_int = var_59_int + (int)1;
	var_71_int = var_56_string + var_70_int;
	@@var_47_object:GetProperty(var_71_int, var_60_string);
	var_72_bool = 0; var_73_string = "";
	var_60_string = var_73_string;
	func_380(var_72_bool, var_73_string);
	var_72_bool = var_46_bool;
	return 10;
	
}


func_72(var_0_cvector)
{
	var_79_float = GetByIndex(var_0_cvector, 0);
	var_80_float = GetByIndex(var_0_cvector, 2);
	RotateAsync(var_79_float, var_80_float);
	return 0;
}


func_77(var_10_bool)
{
	var_11_object = Obj(); var_12_bool = 0; var_13_object = Obj(); var_14_bool = 0;
	FindActor(var_13_object, "player");
	var_16_bool = var_13_object == 0; //@nz
	if(var_16_bool != 0) {
		var_10_bool = 0;
		return 4;
	}
	var_17_float = 0; var_18_object = Obj();
	var_13_object = var_18_object;
	func_295(var_17_float, var_18_object);
	var_26_bool = var_17_float > (float)90000.0;
	if(var_26_bool != 0) {
		var_10_bool = 0;
		return 4;
	}
	CanSee(var_14_bool, var_13_object);
	var_14_bool = var_10_bool;
	return 4;
}
EMIT "Stack[-2] = 0";


func_219()
{
	var_6_int = 0; var_7_int = 0; var_8_bool = 0; var_9_int = 0; var_10_int = 0; var_11_bool = 0; var_12_int = 0; var_13_int = 0; var_14_bool = 0; var_15_int = 0; var_16_int = 0; var_17_bool = 0;
	WaitForAnimEnd();
	var_18_bool = 0;
	func_322(var_18_bool);
	var_19_bool = var_18_bool == 0; //@nz
	if(var_19_bool != 0) {
		return 12;
	}
	func_408((int)0);
	var_20_int = var_12_int;
	var_13_int = 0;
	
Label_233:
	var_33_bool = 0;
	var_33_bool = 0;
	var_35_bool = var_13_int < (int)5;
	if(var_35_bool != 0) {
		var_36_bool = 0;
		func_322(var_36_bool);
		if(var_36_bool != 0) {
			var_33_bool = 1;
		}
	}
	if(var_33_bool != 0) {
		var_37_bool = var_12_int == 0; //@nz
		if(var_37_bool != 0) {
			Sleep((int)3, var_14_bool);
			var_39_bool = var_14_bool == 0; //@nz
			if(var_39_bool != 0) {
			} else {
		} else {
				irand(var_15_int, var_12_int);
				irand(var_16_int, (int)5);
				var_45_bool = var_16_int != (int)0;
				if(var_45_bool != 0) {
					var_15_int = 0;
				}
				var_47_string = ""; var_48_int = 0;
				var_15_int = var_48_int;
				func_401(var_47_string, var_48_int);
				PlayAnimation("all", var_47_string);
				WaitForAnimEnd(var_17_bool);
				var_49_bool = var_17_bool == 0; //@nz
				if(var_49_bool == 0) goto Label_274;
				goto Label_285;
		}
		Label_274:
			var_40_bool = 0;
			func_288(var_40_bool);
			var_41_bool = var_40_bool == 0; //@nz
			if(var_41_bool != 0) {
				goto Label_285;
			}
			ResetAAS();
			var_13_int = var_13_int + (int)1;
			goto Label_233;

		}
	}
Label_285:
	ResetAAS();
	return 12;
	
}


func_99()
{
	var_33_float = 0; var_34_float = 0;
	rand(var_34_float, (int)8, (int)16);
	SetTimer((int)10, var_34_float);
	return 2;
}


func_108()
{
	KillTimer((int)10);
	return 0;
}


func_364(var_21_string)
{
	var_22_bool = 0; var_23_float = 0; var_24_float = 0; var_25_bool = 0; var_26_float = 0; var_27_float = 0;
	lshHasAnimation(var_25_bool, var_21_string);
	var_28_bool = var_25_bool;
	if(var_28_bool != 0) {
		lshGetAnimTimes(var_21_string, var_26_float, var_27_float);
		lshPlayAnimation(var_26_float, var_27_float, (bool)0);
	} else {
		var_31_int = "Can't find lsh animation : " + var_21_string;
		Trace(var_31_int);
	}
	return 6;
	
}


func_380(var_72_bool, var_73_string)
{
	var_74_bool = 0; var_75_bool = 0;
	var_76_bool = 0;
	func_425(var_76_bool);
	if(var_76_bool != 0) {
		lshHasSpeech(var_75_bool, var_73_string);
		var_77_bool = var_75_bool;
		if(var_77_bool != 0) {
			lshPlaySpeech(var_73_string);
			var_72_bool = 1;
			return 2;
		}
	}
	var_72_bool = 0;
	return 2;
}


