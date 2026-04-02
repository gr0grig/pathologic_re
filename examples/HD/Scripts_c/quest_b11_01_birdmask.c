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
			func_552();
			if(var_7_bool == 24558) {
				object var_12_object; object var_13_object;
				var_12_object = var_1_object;
				var_13_object = var_0_object;
				func_614();
			}
			if(var_6_int == 23176) {
				func_137(var_7_bool, "Neutral");
				var_0_object->SetMessage(522006); //@t
				var_0_object->ClearReplies(); //@t
				bool var_36_bool;
				func_620(var_1_object);
				if(var_36_bool != 0)
					var_0_object->AddReply(523342, 24559, 24558); //@t
				var_0_object->AddReply(522007, -1, 23177); //@t
				return 0;
			}
			if(var_6_int == 24559) {
				func_137(var_7_bool, "Neutral");
				var_0_object->SetMessage(523343); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523344, 24562, 24560); //@t
				var_0_object->AddReply(523345, -1, 24561); //@t
				return 0;
			}
			if(var_6_int == 24562) {
				func_137(var_7_bool, "Neutral");
				var_0_object->SetMessage(523346); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523347, -1, 24563); //@t
				var_0_object->AddReply(523348, -1, 24564); //@t
				return 0;
			}
			var_3_string = true;
			bool var_70_bool;
			func_612(var_70_bool);
			if(var_70_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xa0";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool)
	{
	
	Label_272:
		for(;;) {
			bool var_8_bool;
			func_429(var_8_bool);
			var_11_bool = !var_8_bool; //@nz
			if(var_11_bool == 0) goto Label_280;
			@Hold();
		}
	
	Label_280:
		float var_7_float;
		@rand(var_7_float, 3);
		@Sleep(var_7_float + 3);
		func_343();
		goto Label_272;
	}
	EMIT "Return(); Pop(2)";

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object)
	{
		func_424();
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
			func_292(var_6_string);
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
			func_341(var_8_bool);
			if(var_8_bool != 0)
				var_6_bool = true;
		}
		if(var_6_bool != 0) {
			object var_9_object;
			func_559(var_9_object);
			@RemoveActor(var_9_object);
		}
	}

}


void func_0(object var_0_object, int var_7_int, object var_8_object)
{
	var_0_object = var_8_object;
	bool var_18_bool; object var_19_object;
	var_8_object = var_19_object;
	func_434(var_18_bool, var_19_object, 130.0);
	if(!var_18_bool) { //@nz
		var_7_int = -2;
		return 8;
	}
	object var_14_object;
	@CreateDialog(var_14_object);
	int var_66_int;
	func_606(var_66_int);
	var_14_object->SetNPCName(var_66_int);
	int var_67_int;
	func_604(var_67_int);
	var_14_object->SetNPCDescription(var_67_int);
	string var_68_string;
	func_608(var_68_string);
	var_14_object->SetPhoto(var_68_string);
	string var_69_string;
	func_610(var_69_string);
	var_14_object->SetPhoto2(var_69_string);
	int var_70_int;
	func_632(var_70_int);
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
		var_136_bool = !var_17_bool; //@nz
		if(var_136_bool == 0) goto Label_63;
		@sync();
		var_14_object->IsDialogEnd(var_17_bool);
	}
	
Label_63:
	object var_137_object;
	var_8_object = var_137_object;
	func_503();
	@StopDialog(var_14_object);
	var_14_object->GetReturnValue(-1);
	int var_16_int = var_7_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_137(object var_2_object, string var_86_string)
{
	bool var_87_bool;
	func_612(var_87_bool);
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
	func_537(var_90_string, var_91_bool);
	var_2_object = var_86_string;
	
}


void func_521(string var_120_string)
{
	bool var_124_bool; float var_125_float; float var_126_float;
	@lshHasAnimation(var_124_bool, var_120_string);
	if(var_124_bool != 0) {
		@lshGetAnimTimes(var_120_string, var_125_float, var_126_float);
		@lshPlayAnimation(var_125_float, var_126_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_120_string);
	}
	
}


void func_537(string var_90_string, bool var_91_bool)
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


void func_292(object var_0_object)
{
	var_0_object = true;
	bool var_10_bool;
	@IsLoaded(var_10_bool);
	bool var_11_bool = false;
	if(!var_10_bool) { //@nz
		bool var_13_bool;
		func_341(var_13_bool);
		if(var_13_bool != 0)
			var_11_bool = true;
	}
	if(var_11_bool != 0) {
		object var_14_object;
		func_559(var_14_object);
		@RemoveActor(var_14_object);
	}
}


void func_422(bool var_56_bool)
{
	var_56_bool = true;
}


void func_552(void)
{
	bool var_9_bool;
	func_612(var_9_bool);
	if(var_9_bool != 0)
		@lshStopSpeech();
}


void func_424(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_429(bool var_8_bool)
{
	bool var_10_bool;
	@IsLoaded(var_10_bool);
	var_10_bool = var_8_bool;
}


void func_559(object var_9_object)
{
	object var_11_object;
	@self(var_11_object);
	var_11_object = var_9_object;
}
EMIT "Stack[-1] = 0";


void func_434(bool var_18_bool, object var_19_object, float var_20_float)
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
	func_565(var_45_cvector, (var_34_cvector ^ [0.0, 1.0, 0.0]));
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
	func_612(var_61_bool);
	if(var_61_bool != 0) {
	} else {
		@HasAnimationTrack(var_38_bool, "head");
		if(var_38_bool == 0) goto Label_497;
		@LookAsyncCamera("head");
	}
Label_497:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_18_bool = true;
	
}


void func_565(cvector var_45_cvector, cvector var_46_cvector)
{
	float var_49_float = sqrt(var_46_cvector | var_46_cvector);
	if(var_49_float < 0.000001)
		var_45_cvector = [0.0, 0.0, 0.0];
	var_45_cvector = var_46_cvector / var_49_float;
}


void func_575(int var_106_int, string var_107_string)
{
	int var_109_int;
	@GetVariable(var_107_string, var_109_int);
	var_109_int = var_106_int;
}


void func_580(string var_37_string, int var_38_int)
{
	string var_40_string = "idle";
	if(var_38_int != 0)
		var_40_string += var_38_int;
	var_40_string = var_37_string;
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_79_object, object var_80_object)
{
	var_0_object = var_80_object;
	var_3_string = false;
	if(1 != 0) {
		func_137(var_80_object, "Neutral");
		var_0_object->SetMessage(522006); //@t
		var_0_object->ClearReplies(); //@t
		bool var_104_bool;
		func_620(var_79_object);
		if(var_104_bool != 0)
			var_0_object->AddReply(523342, 24559, 24558); //@t
		var_0_object->AddReply(522007, -1, 23177); //@t
		goto Label_107;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_107:
	bool var_118_bool;
	func_612(var_118_bool);
	if(var_118_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_521(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_136;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_136:
		return 0;

	}
	
}


void func_587(int var_31_int)
{
	int var_34_int; bool var_35_bool;
	var_34_int = 0;
	
	for(;;) {
		string var_37_string; int var_38_int;
		var_34_int = var_38_int;
		func_580(var_37_string, var_38_int);
		@HasAnimation(var_35_bool, "all", var_37_string);
		if(!var_35_bool) //@nz
			break;
		var_34_int += 1;
	}
	var_34_int = var_31_int;
}


void func_341(bool var_8_bool)
{
	var_8_bool = true;
}


void func_343(void)
{
	int var_24_int; int var_25_int; bool var_26_bool; float var_27_float; bool var_28_bool;
	@WaitForAnimEnd();
	bool var_29_bool;
	func_429(var_29_bool);
	if(!var_29_bool) //@nz
		return 14;
	int var_31_int;
	func_587(var_31_int);
	int var_22_int;
	var_31_int = var_22_int;
	int var_23_int = 0;
	
	for(;;) {
		bool var_44_bool = false;
		if(var_23_int < 5) {
			bool var_47_bool;
			func_429(var_47_bool);
			if(var_47_bool != 0)
				var_44_bool = true;
		}
		if(var_44_bool != 0) {
			@irand(var_24_int, 3);
			if(var_24_int == 0) {
				if(var_22_int == 0) goto Label_390;
				@irand(var_25_int, var_22_int);
				string var_53_string; int var_54_int;
				var_25_int = var_54_int;
				func_580(var_53_string, var_54_int);
				@PlayAnimation("all", var_53_string);
				@WaitForAnimEnd(var_26_bool);
				if(!var_26_bool) { //@nz
				} else {
			} else {
			if(var_24_int == 1) {
				@rand(var_27_float, 4);
				@Sleep((var_27_float + 1), var_28_bool);
				if(!var_28_bool) { //@nz
					goto Label_419;
				}
			} else if(var_23_int != 0) {
				goto Label_419;
			}
			}
					bool var_56_bool;
					func_422(var_56_bool);
					var_57_bool = !var_56_bool; //@nz
					if(var_57_bool == 0) goto Label_414;
			}
		}
	Label_419:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_414:
		@ResetAAS();
		var_23_int += 1;
	}
	
}


void func_604(int var_67_int)
{
	var_67_int = 515571;
}


void func_606(int var_66_int)
{
	var_66_int = 504029;
}


void func_608(string var_68_string)
{
	var_68_string = "ui/NPC_bmask.png";
}


void func_610(string var_69_string)
{
	var_69_string = "ui/NPC_bmask_b.png";
}


void func_612(bool var_61_bool)
{
	var_61_bool = false;
}


// @pe
void func_614(void)
{
	@SetVariable("oob11Birdmask1", 1);
}


// @pe
void func_620(bool var_104_bool)
{
	int var_106_int;
	func_575(var_106_int, "oob11Birdmask1");
	if(var_106_int == 0) {
		var_104_bool = true;
		return 0;
	}
	var_104_bool = false;
}


void func_503(void)
{
	bool var_139_bool;
	@CameraSwitchToNormal(true);
	bool var_141_bool;
	func_612(var_141_bool);
	if(var_141_bool != 0) {
	} else {
		@HasAnimationTrack(var_139_bool, "head");
		if(var_139_bool == 0) goto Label_520;
		@UnlookAsync("head");
	}
Label_520:
	
}


void func_632(int var_70_int)
{
	int var_72_int;
	@GetVariable("branch", var_72_int);
	if(var_72_int == 0) {
		var_70_int = 1;
		return 2;
	EMIT "GOTO 0x287";
	}
	if(var_72_int == 1) {
		var_70_int = 2;
		return 2;
	}
	var_70_int = 3;
}


