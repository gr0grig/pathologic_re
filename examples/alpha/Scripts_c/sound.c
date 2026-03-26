// @IMPORTS: Hold/0,StopGroup0/0,GetProperty/2,SetTimer/2,Trace/1,WaitFor3DSoundToLoad/1,PlayLoopedGlobalSound/5,KillTimer/1,GetPosition/1,FindActor/2,IsLoaded/1,self/1
// @STRINGS: W:distance|W:mindistance|W:Null player|W:stopped|A:Stop|W:started|W:envsound|W:Sound was not found|A:FadeIn|A:GetPosition|W:HasProperty|A:HasProperty
// @RUN_OP: 0x6
// @RUN_TASK: 1
// @TASK_0: vars= params=0
// @EVENT_5: op=0x3 vars=
// @TASK_1: vars=object,float,float params=0
// @EVENT_7: op=0x38 vars=int
// @EVENT_6: op=0x7d vars=

task_0_event_5(var_0_object, var_1_float, var_2_float)
{
	StopGroup0();
	return 0;
}


task_1_event_7(var_0_object, var_1_float, var_2_float, var_3_int)
{
	var_4_object = Obj(); var_5_cvector = CVector(0,0,0); var_6_cvector = CVector(0,0,0); var_7_cvector = CVector(0,0,0); var_8_float = 0; var_9_object = Obj(); var_10_cvector = CVector(0,0,0); var_11_cvector = CVector(0,0,0); var_12_cvector = CVector(0,0,0); var_13_float = 0;
	func_148(Obj());
	var_14_object = var_9_object;
	var_18_bool = var_9_object == 0; //@ne
	if(var_18_bool != 0) {
		Trace("Null player");
		return 10;
	}
	var_20_cvector = CVector(0,0,0); var_21_object = Obj();
	var_9_object = var_21_object;
	func_143(var_20_cvector, var_21_object);
	var_20_cvector = var_10_cvector;
	func_138(CVector(0,0,0));
	var_24_cvector = var_11_cvector;
	var_12_cvector = var_10_cvector - var_11_cvector;
	var_13_float = var_12_cvector | var_12_cvector;
	var_27_bool = 0;
	var_27_bool = 0;
	var_28_bool = var_0_object != 0; //@nn
	if(var_28_bool != 0) {
		var_29_bool = var_13_float > var_1_float;
		if(var_29_bool != 0) {
			var_27_bool = 1;
		}
	}
	if(var_27_bool != 0) {
		Trace("stopped");
		@@@var_0_object:Stop();
		var_0_object = 0;
		return 10;
	}
	var_31_bool = 0;
	var_31_bool = 0;
	var_32_bool = var_0_object == 0; //@ne
	if(var_32_bool != 0) {
		var_33_bool = var_13_float < var_1_float;
		if(var_33_bool != 0) {
			var_31_bool = 1;
		}
	}
	if(var_31_bool != 0) {
		EventDisable(7);
		Trace("started");
		WaitFor3DSoundToLoad("envsound");
		PlayLoopedGlobalSound(var_0_object, "envsound", CVector(0.0, 0.0, 0.0), (float)0.0, var_2_float);
		var_39_bool = var_0_object == 0; //@ne
		if(var_39_bool != 0) {
			Trace("Sound was not found");
		} else {
			@@@var_0_object:FadeIn((float)0.5);
		}
		EventEnable(7);
	}
	return 10;
	
}
EMIT "Stack[-5] = 0";


task_1_event_6(var_0_object, var_1_float, var_2_float)
{
	KillTimer((int)101);
	TaskCall(0);
	func_0();
	TaskReturn();
	SetTimer((int)101, (float)1.0);
	return 0;
}


main(var_0_object, var_1_float, var_2_float)
{
	var_0_object = 0;
	var_3_bool = 0;
	func_167(var_3_bool);
	var_6_bool = var_3_bool == 0; //@nz
	if(var_6_bool != 0) {
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	var_7_bool = 0; var_8_object = Obj(); var_9_string = "";
	func_172(Obj());
	var_10_object = var_8_object;
	func_155(var_7_bool, var_8_object, "distance");
	var_19_bool = var_7_bool == 0; //@nz
	if(var_19_bool != 0) {
		var_1_float = 250000;
	} else {
			GetProperty("distance", var_1_float);
			var_1_float = var_1_float * var_1_float;
	}
	var_20_bool = 0; var_21_object = Obj(); var_22_string = "";
	func_172(Obj());
	var_23_object = var_21_object;
	func_155(var_20_bool, var_21_object, "mindistance");
	var_24_bool = var_20_bool == 0; //@nz
	if(var_24_bool != 0) {
	} else {
		GetProperty("mindistance", (float)100);

	}
	SetTimer((int)101, (float)1.0);
	
Label_52:
	Hold();
	goto Label_52;
	
}
EMIT "Return(); Pop(0)";


func_0()
{
	Hold();
	return 0;
}


func_167(var_3_bool)
{
	var_4_bool = 0; var_5_bool = 0;
	IsLoaded(var_5_bool);
	var_5_bool = var_3_bool;
	return 2;
}


func_138(var_24_cvector)
{
	var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0);
	GetPosition(var_26_cvector);
	var_26_cvector = var_24_cvector;
	return 2;
}


func_172(var_10_object)
{
	var_11_object = Obj(); var_12_object = Obj();
	self(var_12_object);
	var_12_object = var_10_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_143(var_20_cvector, var_21_object)
{
	var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0);
	@@var_21_object:GetPosition(var_23_cvector);
	var_23_cvector = var_20_cvector;
	return 2;
}


func_148(var_14_object)
{
	var_15_object = Obj(); var_16_object = Obj();
	FindActor(var_16_object, "player");
	var_16_object = var_14_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_155(var_7_bool, var_8_object, var_9_string)
{
	var_13_bool = 0; var_14_bool = 0;
	var_17_bool = IsFuncExist(var_8_object, "HasProperty", (int)2);
	var_18_bool = var_17_bool == 0; //@nz
	if(var_18_bool != 0) {
		var_7_bool = 0;
		return 2;
	}
	@@var_8_object:HasProperty(var_9_string, var_14_bool);
	var_14_bool = var_7_bool;
	return 2;
}


