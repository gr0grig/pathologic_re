// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool)
	{
		if(1 != 0) {
			func_488();
			if(var_6_int == 22215) {
				func_132(var_7_bool, "Neutral");
				var_0_object->SetMessage(521002); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521003, -1, 22216); //@t
				var_0_object->AddReply(528489, -1, 29878); //@t
				return 0;
			}
			var_3_string = true;
			bool var_36_bool;
			func_560(var_36_bool);
			if(var_36_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x9b";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool)
	{
	
	Label_208:
		for(;;) {
			bool var_8_bool;
			func_365(var_8_bool);
			var_11_bool = !var_8_bool; //@nz
			if(var_11_bool == 0) goto Label_216;
			@Hold();
		}
	
	Label_216:
		float var_7_float;
		@rand(var_7_float, 3);
		@Sleep(var_7_float + 3);
		func_279();
		goto Label_208;
	}
	EMIT "Return(); Pop(2)";

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object)
	{
		func_360();
		int var_7_int; object var_8_object;
		var_6_object = var_8_object;
		TaskCall(0);
		func_0(var_9_object, var_7_int, var_8_object);
		TaskReturn();
	}

	// @pe
	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, string var_6_string)
	{
		if(var_6_string == "cleanup")
			func_228(var_6_string);
	}

	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool)
	{
		@StopGroup0();
		@sync();
	}

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool)
	{
		bool var_6_bool = false;
		if(var_0_object != 0) {
			bool var_8_bool;
			func_277(var_8_bool);
			if(var_8_bool != 0)
				var_6_bool = true;
		}
		if(var_6_bool != 0) {
			object var_9_object;
			func_495(var_9_object);
			@RemoveActor(var_9_object);
		}
	}

}


void func_0(object var_0_object, int var_7_int, object var_8_object)
{
	var_0_object = var_8_object;
	bool var_18_bool; object var_19_object;
	var_8_object = var_19_object;
	func_370(var_18_bool, var_19_object, 70.0);
	if(!var_18_bool) { //@nz
		var_7_int = -2;
		return 8;
	}
	object var_14_object;
	@CreateDialog(var_14_object);
	int var_66_int;
	func_554(var_66_int);
	var_14_object->SetNPCName(var_66_int);
	int var_67_int;
	func_552(var_67_int);
	var_14_object->SetNPCDescription(var_67_int);
	string var_68_string;
	func_556(var_68_string);
	var_14_object->SetPhoto(var_68_string);
	string var_69_string;
	func_558(var_69_string);
	var_14_object->SetPhoto2(var_69_string);
	int var_70_int;
	func_535(var_70_int);
	var_14_object->SetPlayerName(var_70_int);
	bool var_15_bool;
	@IsOverrideActive(var_15_bool);
	if(var_15_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	@DoDialog(var_14_object);
	object var_79_object; object var_80_object;
	var_8_object = var_79_object;
	var_14_object = var_80_object;
	TaskCall(1);
	func_74(var_81_object, var_82_object, var_83_string, var_84_bool, var_79_object, var_80_object);
	TaskReturn();
	bool var_17_bool;
	var_14_object->IsDialogEnd(var_17_bool);
	
	for(;;) {
		var_128_bool = !var_17_bool; //@nz
		if(var_128_bool == 0) goto Label_63;
		@sync();
		var_14_object->IsDialogEnd(var_17_bool);
	}
	
Label_63:
	object var_129_object;
	var_8_object = var_129_object;
	func_439();
	@StopDialog(var_14_object);
	var_14_object->GetReturnValue(-1);
	int var_16_int = var_7_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_132(object var_2_object, string var_86_string)
{
	bool var_87_bool;
	func_560(var_87_bool);
	if(!var_87_bool) //@nz
		return 0;
	if(var_86_string == var_2_object)
		return 0;
	string var_90_string; bool var_91_bool;
	var_86_string = var_90_string;
	if(var_86_string == "")
		var_91_bool = false;
	else
		var_91_bool = true;
	func_473(var_90_string, var_91_bool);
	var_2_object = var_86_string;
	
}


void func_518(int var_31_int)
{
	int var_34_int; bool var_35_bool;
	var_34_int = 0;
	
	for(;;) {
		string var_37_string; int var_38_int;
		var_34_int = var_38_int;
		func_511(var_37_string, var_38_int);
		@HasAnimation(var_35_bool, "all", var_37_string);
		if(!var_35_bool) //@nz
			break;
		var_34_int += 1;
	}
	var_34_int = var_31_int;
}


void func_277(bool var_8_bool)
{
	var_8_bool = true;
}


void func_535(int var_70_int)
{
	int var_72_int;
	@GetVariable("branch", var_72_int);
	if(var_72_int == 0) {
		var_70_int = 1;
		return 2;
	EMIT "GOTO 0x226";
	}
	if(var_72_int == 1) {
		var_70_int = 2;
		return 2;
	}
	var_70_int = 3;
}


void func_279(void)
{
	int var_24_int; int var_25_int; bool var_26_bool; float var_27_float; bool var_28_bool;
	@WaitForAnimEnd();
	bool var_29_bool;
	func_365(var_29_bool);
	if(!var_29_bool) //@nz
		return 14;
	int var_31_int;
	func_518(var_31_int);
	int var_22_int;
	var_31_int = var_22_int;
	int var_23_int = 0;
	
	for(;;) {
		bool var_44_bool = false;
		if(var_23_int < 5) {
			bool var_47_bool;
			func_365(var_47_bool);
			if(var_47_bool != 0)
				var_44_bool = true;
		}
		if(var_44_bool != 0) {
			@irand(var_24_int, 3);
			if(var_24_int == 0) {
				if(var_22_int == 0) goto Label_326;
				@irand(var_25_int, var_22_int);
				string var_53_string; int var_54_int;
				var_25_int = var_54_int;
				func_511(var_53_string, var_54_int);
				@PlayAnimation("all", var_53_string);
				@WaitForAnimEnd(var_26_bool);
				if(!var_26_bool) { //@nz
				} else {
			} else {
			if(var_24_int == 1) {
				@rand(var_27_float, 4);
				@Sleep((var_27_float + 1), var_28_bool);
				if(!var_28_bool) { //@nz
					goto Label_355;
				}
			} else if(var_23_int != 0) {
				goto Label_355;
			}
			}
					bool var_56_bool;
					func_358(var_56_bool);
					var_57_bool = !var_56_bool; //@nz
					if(var_57_bool == 0) goto Label_350;
			}
		}
	Label_355:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_350:
		@ResetAAS();
		var_23_int += 1;
	}
	
}


void func_552(int var_67_int)
{
	var_67_int = 515556;
}


void func_554(int var_66_int)
{
	var_66_int = 503341;
}


void func_556(string var_68_string)
{
	var_68_string = "ui/NPC_Citizen3.png";
}


void func_558(string var_69_string)
{
	var_69_string = "ui/NPC_Citizen3_b.png";
}


void func_560(bool var_61_bool)
{
	var_61_bool = false;
}


void func_439(void)
{
	bool var_131_bool;
	@CameraSwitchToNormal(true);
	bool var_133_bool;
	func_560(var_133_bool);
	if(var_133_bool != 0) {
	} else {
		@HasAnimationTrack(var_131_bool, "head");
		if(var_131_bool == 0) goto Label_456;
		@UnlookAsync("head");
	}
Label_456:
	
}


void func_457(string var_112_string)
{
	bool var_116_bool; float var_117_float; float var_118_float;
	@lshHasAnimation(var_116_bool, var_112_string);
	if(var_116_bool != 0) {
		@lshGetAnimTimes(var_112_string, var_117_float, var_118_float);
		@lshPlayAnimation(var_117_float, var_118_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_112_string);
	}
	
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_79_object, object var_80_object)
{
	var_0_object = var_80_object;
	var_1_object = var_79_object;
	var_3_string = false;
	if(1 != 0) {
		func_132(var_80_object, "Neutral");
		var_0_object->SetMessage(521002); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(521003, -1, 22216); //@t
		var_0_object->AddReply(528489, -1, 29878); //@t
		goto Label_102;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_102:
	bool var_110_bool;
	func_560(var_110_bool);
	if(var_110_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_457(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_131;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_131:
		return 0;

	}
	
}


void func_473(string var_90_string, bool var_91_bool)
{
	bool var_97_bool; float var_98_float; float var_99_float;
	@lshHasAnimation(var_97_bool, var_90_string);
	if(var_97_bool != 0) {
		@lshGetAnimTimes(var_90_string, var_98_float, var_99_float);
		@lshPlayAnimation(var_98_float, var_99_float, var_91_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_90_string);
	}
	
}


void func_228(object var_0_object)
{
	var_0_object = true;
	bool var_10_bool;
	@IsLoaded(var_10_bool);
	bool var_11_bool = false;
	if(!var_10_bool) { //@nz
		bool var_13_bool;
		func_277(var_13_bool);
		if(var_13_bool != 0)
			var_11_bool = true;
	}
	if(var_11_bool != 0) {
		object var_14_object;
		func_495(var_14_object);
		@RemoveActor(var_14_object);
	}
}


void func_358(bool var_56_bool)
{
	var_56_bool = true;
}


void func_488(void)
{
	bool var_9_bool;
	func_560(var_9_bool);
	if(var_9_bool != 0)
		@lshStopSpeech();
}


void func_360(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_365(bool var_8_bool)
{
	bool var_10_bool;
	@IsLoaded(var_10_bool);
	var_10_bool = var_8_bool;
}


void func_495(object var_9_object)
{
	object var_11_object;
	@self(var_11_object);
	var_11_object = var_9_object;
}
EMIT "Stack[-1] = 0";


void func_370(bool var_18_bool, object var_19_object, float var_20_float)
{
	cvector var_31_cvector; bool var_38_bool;
	var_19_object->GetPosition(var_31_cvector);
	float var_30_float;
	var_19_object->GetEyesHeight(var_30_float);
	var_39_float = GetByIndex(var_31_cvector, 1);
	SetByIndex(var_31_cvector, 1) = (var_39_float + var_30_float);
	cvector var_32_cvector;
	@GetPosition(var_32_cvector);
	@GetEyesHeight(var_30_float);
	var_40_float = GetByIndex(var_32_cvector, 1);
	SetByIndex(var_32_cvector, 1) = (var_40_float + var_30_float);
	cvector var_33_cvector = var_31_cvector - var_32_cvector;
	var_41_float = GetByIndex(var_33_cvector, 1);
	SetByIndex(var_33_cvector, 1) = (float)0;
	var_43_float = sqrt(var_33_cvector | var_33_cvector);
	var_33_cvector /= var_43_float;
	cvector var_34_cvector = -var_33_cvector;
	cvector var_45_cvector;
	func_501(var_45_cvector, (var_34_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_35_cvector = ((var_33_cvector * var_20_float) + (var_45_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_37_bool;
	@IsOverrideActive(var_37_bool);
	if(var_37_bool != 0)
		var_18_bool = false;
	@StopWorld();
	@CameraTransit((var_32_cvector + var_35_cvector), var_34_cvector, true);
	var_59_float = GetByIndex(var_35_cvector, 0);
	var_60_float = GetByIndex(var_35_cvector, 2);
	@Rotate(var_59_float, var_60_float);
	bool var_61_bool;
	func_560(var_61_bool);
	if(var_61_bool != 0) {
	} else {
		@HasAnimationTrack(var_38_bool, "head");
		if(var_38_bool == 0) goto Label_433;
		@LookAsyncCamera("head");
	}
Label_433:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_18_bool = true;
	
}


void func_501(cvector var_45_cvector, cvector var_46_cvector)
{
	float var_49_float = sqrt(var_46_cvector | var_46_cvector);
	if(var_49_float < 0.000001)
		var_45_cvector = [0.0, 0.0, 0.0];
	var_45_cvector = var_46_cvector / var_49_float;
}


void func_511(string var_37_string, int var_38_int)
{
	string var_40_string = "idle";
	if(var_38_int != 0)
		var_40_string += var_38_int;
	var_40_string = var_37_string;
}


