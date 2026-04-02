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
			func_532();
			if(var_7_bool == 24558) {
				object var_12_object; object var_13_object;
				var_12_object = var_1_object;
				var_13_object = var_0_object;
				func_594();
			}
			if(var_6_int == 23176) {
				func_137(var_7_bool, "Neutral");
				var_0_object->SetMessage(522006); //@t
				var_0_object->ClearReplies(); //@t
				bool var_31_bool;
				func_600(var_1_object);
				if(var_31_bool != 0)
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
			bool var_65_bool;
			func_592(var_65_bool);
			if(var_65_bool != 0)
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
			func_539(var_9_object);
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
	int var_65_int;
	func_586(var_65_int);
	var_14_object->SetNPCName(var_65_int);
	int var_66_int;
	func_584(var_66_int);
	var_14_object->SetNPCDescription(var_66_int);
	string var_67_string;
	func_588(var_67_string);
	var_14_object->SetPhoto(var_67_string);
	string var_68_string;
	func_590(var_68_string);
	var_14_object->SetPhoto2(var_68_string);
	int var_69_int;
	func_612(var_69_int);
	var_14_object->SetPlayerName(var_69_int);
	bool var_15_bool;
	@IsOverrideActive(var_15_bool);
	if(var_15_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	@DoDialog(var_14_object);
	object var_78_object; object var_79_object;
	var_8_object = var_78_object;
	var_14_object = var_79_object;
	TaskCall(1);
	func_74(var_80_object, var_81_object, var_82_string, var_83_bool, var_78_object, var_79_object);
	TaskReturn();
	bool var_17_bool;
	var_14_object->IsDialogEnd(var_17_bool);
	
	for(;;) {
		var_125_bool = !var_17_bool; //@nz
		if(var_125_bool == 0) goto Label_63;
		@sync();
		var_14_object->IsDialogEnd(var_17_bool);
	}
	
Label_63:
	object var_126_object;
	var_8_object = var_126_object;
	func_502();
	@StopDialog(var_14_object);
	var_14_object->GetReturnValue(-1);
	int var_16_int = var_7_int;
}
EMIT "Stack[-4] = 0";


void func_519(string var_114_string)
{
	float var_117_float; float var_118_float;
	@lshGetAnimTimes(var_114_string, var_117_float, var_118_float);
	@lshPlayAnimation(var_117_float, var_118_float, false);
}


// @pe
void func_137(object var_2_object, string var_85_string)
{
	bool var_86_bool;
	func_592(var_86_bool);
	if(!var_86_bool) //@nz
		return 0;
	if(var_85_string == var_2_object)
		return 0;
	string var_89_string; bool var_90_bool;
	var_85_string = var_89_string;
	if(var_85_string == "")
		var_90_bool = false;
	else
		var_90_bool = true;
	func_526(var_89_string, var_90_bool);
	var_2_object = var_85_string;
	
}


void func_526(string var_89_string, bool var_90_bool)
{
	float var_95_float; float var_96_float;
	@lshGetAnimTimes(var_89_string, var_95_float, var_96_float);
	@lshPlayAnimation(var_95_float, var_96_float, var_90_bool);
}


void func_532(void)
{
	bool var_9_bool;
	func_592(var_9_bool);
	if(var_9_bool != 0)
		@lshStopSpeech();
}


void func_539(object var_9_object)
{
	object var_11_object;
	@self(var_11_object);
	var_11_object = var_9_object;
}
EMIT "Stack[-1] = 0";


void func_545(cvector var_45_cvector, cvector var_46_cvector)
{
	float var_49_float = sqrt(var_46_cvector | var_46_cvector);
	if(var_49_float < 0.000001)
		var_45_cvector = [0.0, 0.0, 0.0];
	var_45_cvector = var_46_cvector / var_49_float;
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
		func_539(var_14_object);
		@RemoveActor(var_14_object);
	}
}


void func_422(bool var_56_bool)
{
	var_56_bool = true;
}


void func_424(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_555(int var_100_int, string var_101_string)
{
	int var_103_int;
	@GetVariable(var_101_string, var_103_int);
	var_103_int = var_100_int;
}


void func_429(bool var_8_bool)
{
	bool var_10_bool;
	@IsLoaded(var_10_bool);
	var_10_bool = var_8_bool;
}


void func_560(string var_37_string, int var_38_int)
{
	string var_40_string = "idle";
	if(var_38_int != 0)
		var_40_string += var_38_int;
	var_40_string = var_37_string;
}


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
	func_545(var_45_cvector, (var_34_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_35_cvector = ((var_33_cvector * var_20_float) + (var_45_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_37_bool;
	@IsOverrideActive(var_37_bool);
	if(var_37_bool != 0)
		var_18_bool = false;
	@StopWorld();
	@CameraTransit((var_32_cvector + var_35_cvector), var_34_cvector);
	var_58_float = GetByIndex(var_35_cvector, 0);
	var_59_float = GetByIndex(var_35_cvector, 2);
	@Rotate(var_58_float, var_59_float);
	bool var_60_bool;
	func_592(var_60_bool);
	if(var_60_bool != 0) {
	} else {
		@HasAnimationTrack(var_38_bool, "head");
		if(var_38_bool == 0) goto Label_496;
		@LookAsyncCamera("head");
	}
Label_496:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_18_bool = true;
	
}


void func_567(int var_31_int)
{
	int var_34_int; bool var_35_bool;
	var_34_int = 0;
	
	for(;;) {
		string var_37_string; int var_38_int;
		var_34_int = var_38_int;
		func_560(var_37_string, var_38_int);
		@HasAnimation(var_35_bool, "all", var_37_string);
		if(!var_35_bool) //@nz
			break;
		var_34_int += 1;
	}
	var_34_int = var_31_int;
}


void func_584(int var_66_int)
{
	var_66_int = 515571;
}


void func_586(int var_65_int)
{
	var_65_int = 504029;
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_78_object, object var_79_object)
{
	var_0_object = var_79_object;
	var_3_string = false;
	if(1 != 0) {
		func_137(var_79_object, "Neutral");
		var_0_object->SetMessage(522006); //@t
		var_0_object->ClearReplies(); //@t
		bool var_98_bool;
		func_600(var_78_object);
		if(var_98_bool != 0)
			var_0_object->AddReply(523342, 24559, 24558); //@t
		var_0_object->AddReply(522007, -1, 23177); //@t
		goto Label_107;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_107:
	bool var_112_bool;
	func_592(var_112_bool);
	if(var_112_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_519(var_2_object);
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


void func_588(string var_67_string)
{
	var_67_string = "ui/NPC_bmask.png";
}


void func_590(string var_68_string)
{
	var_68_string = "ui/NPC_bmask_b.png";
}


void func_592(bool var_60_bool)
{
	var_60_bool = false;
}


// @pe
void func_594(void)
{
	@SetVariable("oob11Birdmask1", 1);
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
	func_567(var_31_int);
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
				func_560(var_53_string, var_54_int);
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


// @pe
void func_600(bool var_98_bool)
{
	int var_100_int;
	func_555(var_100_int, "oob11Birdmask1");
	if(var_100_int == 0) {
		var_98_bool = true;
		return 0;
	}
	var_98_bool = false;
}


void func_612(int var_69_int)
{
	int var_71_int;
	@GetVariable("branch", var_71_int);
	if(var_71_int == 0) {
		var_69_int = 1;
		return 2;
	EMIT "GOTO 0x273";
	}
	if(var_71_int == 1) {
		var_69_int = 2;
		return 2;
	}
	var_69_int = 3;
}


void func_502(void)
{
	bool var_128_bool;
	@CameraSwitchToNormal();
	bool var_129_bool;
	func_592(var_129_bool);
	if(var_129_bool != 0) {
	} else {
		@HasAnimationTrack(var_128_bool, "head");
		if(var_128_bool == 0) goto Label_518;
		@UnlookAsync("head");
	}
Label_518:
	
}


