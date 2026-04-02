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
			func_509();
			if(var_6_int == 22194) {
				func_132(var_7_bool, "Neutral");
				var_0_object->SetMessage(520981); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528480, 29869, 29868); //@t
				var_0_object->AddReply(528478, 29867, 29866); //@t
				return 0;
			}
			if(var_6_int == 29867) {
				func_132(var_7_bool, "Neutral");
				var_0_object->SetMessage(528479); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520982, -1, 22195); //@t
				var_0_object->AddReply(524075, -1, 25374); //@t
				return 0;
			}
			if(var_6_int == 29869) {
				func_132(var_7_bool, "Neutral");
				var_0_object->SetMessage(528481); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528482, 29867, 29870); //@t
				return 0;
			}
			var_3_string = true;
			bool var_48_bool;
			func_581(var_48_bool);
			if(var_48_bool != 0)
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
	
	Label_249:
		for(;;) {
			bool var_8_bool;
			func_406(var_8_bool);
			var_11_bool = !var_8_bool; //@nz
			if(var_11_bool == 0) goto Label_257;
			@Hold();
		}
	
	Label_257:
		float var_7_float;
		@rand(var_7_float, 3);
		@Sleep(var_7_float + 3);
		func_320();
		goto Label_249;
	}
	EMIT "Return(); Pop(2)";

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object)
	{
		func_401();
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
			func_269(var_6_string);
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
			func_318(var_8_bool);
			if(var_8_bool != 0)
				var_6_bool = true;
		}
		if(var_6_bool != 0) {
			object var_9_object;
			func_516(var_9_object);
			@RemoveActor(var_9_object);
		}
	}

}


void func_0(object var_0_object, int var_7_int, object var_8_object)
{
	var_0_object = var_8_object;
	bool var_18_bool; object var_19_object;
	var_8_object = var_19_object;
	func_411(var_18_bool, var_19_object, 70.0);
	if(!var_18_bool) { //@nz
		var_7_int = -2;
		return 8;
	}
	object var_14_object;
	@CreateDialog(var_14_object);
	int var_65_int;
	func_575(var_65_int);
	var_14_object->SetNPCName(var_65_int);
	int var_66_int;
	func_573(var_66_int);
	var_14_object->SetNPCDescription(var_66_int);
	string var_67_string;
	func_577(var_67_string);
	var_14_object->SetPhoto(var_67_string);
	string var_68_string;
	func_579(var_68_string);
	var_14_object->SetPhoto2(var_68_string);
	int var_69_int;
	func_556(var_69_int);
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
		var_117_bool = !var_17_bool; //@nz
		if(var_117_bool == 0) goto Label_63;
		@sync();
		var_14_object->IsDialogEnd(var_17_bool);
	}
	
Label_63:
	object var_118_object;
	var_8_object = var_118_object;
	func_479();
	@StopDialog(var_14_object);
	var_14_object->GetReturnValue(-1);
	int var_16_int = var_7_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_132(object var_2_object, string var_85_string)
{
	bool var_86_bool;
	func_581(var_86_bool);
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
	func_503(var_89_string, var_90_bool);
	var_2_object = var_85_string;
	
}


void func_516(object var_9_object)
{
	object var_11_object;
	@self(var_11_object);
	var_11_object = var_9_object;
}
EMIT "Stack[-1] = 0";


void func_522(cvector var_45_cvector, cvector var_46_cvector)
{
	float var_49_float = sqrt(var_46_cvector | var_46_cvector);
	if(var_49_float < 0.000001)
		var_45_cvector = [0.0, 0.0, 0.0];
	var_45_cvector = var_46_cvector / var_49_float;
}


void func_269(object var_0_object)
{
	var_0_object = true;
	bool var_10_bool;
	@IsLoaded(var_10_bool);
	bool var_11_bool = false;
	if(!var_10_bool) { //@nz
		bool var_13_bool;
		func_318(var_13_bool);
		if(var_13_bool != 0)
			var_11_bool = true;
	}
	if(var_11_bool != 0) {
		object var_14_object;
		func_516(var_14_object);
		@RemoveActor(var_14_object);
	}
}


void func_399(bool var_56_bool)
{
	var_56_bool = true;
}


void func_401(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_532(string var_37_string, int var_38_int)
{
	string var_40_string = "idle";
	if(var_38_int != 0)
		var_40_string += var_38_int;
	var_40_string = var_37_string;
}


void func_406(bool var_8_bool)
{
	bool var_10_bool;
	@IsLoaded(var_10_bool);
	var_10_bool = var_8_bool;
}


void func_411(bool var_18_bool, object var_19_object, float var_20_float)
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
	func_522(var_45_cvector, (var_34_cvector ^ [0.0, 1.0, 0.0]));
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
	func_581(var_60_bool);
	if(var_60_bool != 0) {
	} else {
		@HasAnimationTrack(var_38_bool, "head");
		if(var_38_bool == 0) goto Label_473;
		@LookAsyncCamera("head");
	}
Label_473:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_18_bool = true;
	
}


void func_539(int var_31_int)
{
	int var_34_int; bool var_35_bool;
	var_34_int = 0;
	
	for(;;) {
		string var_37_string; int var_38_int;
		var_34_int = var_38_int;
		func_532(var_37_string, var_38_int);
		@HasAnimation(var_35_bool, "all", var_37_string);
		if(!var_35_bool) //@nz
			break;
		var_34_int += 1;
	}
	var_34_int = var_31_int;
}


void func_556(int var_69_int)
{
	int var_71_int;
	@GetVariable("branch", var_71_int);
	if(var_71_int == 0) {
		var_69_int = 1;
		return 2;
	EMIT "GOTO 0x23b";
	}
	if(var_71_int == 1) {
		var_69_int = 2;
		return 2;
	}
	var_69_int = 3;
}


void func_573(int var_66_int)
{
	var_66_int = 515572;
}


void func_318(bool var_8_bool)
{
	var_8_bool = true;
}


void func_575(int var_65_int)
{
	var_65_int = 504031;
}


void func_320(void)
{
	int var_24_int; int var_25_int; bool var_26_bool; float var_27_float; bool var_28_bool;
	@WaitForAnimEnd();
	bool var_29_bool;
	func_406(var_29_bool);
	if(!var_29_bool) //@nz
		return 14;
	int var_31_int;
	func_539(var_31_int);
	int var_22_int;
	var_31_int = var_22_int;
	int var_23_int = 0;
	
	for(;;) {
		bool var_44_bool = false;
		if(var_23_int < 5) {
			bool var_47_bool;
			func_406(var_47_bool);
			if(var_47_bool != 0)
				var_44_bool = true;
		}
		if(var_44_bool != 0) {
			@irand(var_24_int, 3);
			if(var_24_int == 0) {
				if(var_22_int == 0) goto Label_367;
				@irand(var_25_int, var_22_int);
				string var_53_string; int var_54_int;
				var_25_int = var_54_int;
				func_532(var_53_string, var_54_int);
				@PlayAnimation("all", var_53_string);
				@WaitForAnimEnd(var_26_bool);
				if(!var_26_bool) { //@nz
				} else {
			} else {
			if(var_24_int == 1) {
				@rand(var_27_float, 4);
				@Sleep((var_27_float + 1), var_28_bool);
				if(!var_28_bool) { //@nz
					goto Label_396;
				}
			} else if(var_23_int != 0) {
				goto Label_396;
			}
			}
					bool var_56_bool;
					func_399(var_56_bool);
					var_57_bool = !var_56_bool; //@nz
					if(var_57_bool == 0) goto Label_391;
			}
		}
	Label_396:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_391:
		@ResetAAS();
		var_23_int += 1;
	}
	
}


void func_577(string var_67_string)
{
	var_67_string = "ui/NPC_Citizen2.png";
}


void func_579(string var_68_string)
{
	var_68_string = "ui/NPC_Citizen2_b.png";
}


void func_581(bool var_60_bool)
{
	var_60_bool = false;
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_78_object, object var_79_object)
{
	var_0_object = var_79_object;
	var_1_object = var_78_object;
	var_3_string = false;
	if(1 != 0) {
		func_132(var_79_object, "Neutral");
		var_0_object->SetMessage(520981); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(528480, 29869, 29868); //@t
		var_0_object->AddReply(528478, 29867, 29866); //@t
		goto Label_102;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_102:
	bool var_104_bool;
	func_581(var_104_bool);
	if(var_104_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_496(var_2_object);
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


void func_479(void)
{
	bool var_120_bool;
	@CameraSwitchToNormal();
	bool var_121_bool;
	func_581(var_121_bool);
	if(var_121_bool != 0) {
	} else {
		@HasAnimationTrack(var_120_bool, "head");
		if(var_120_bool == 0) goto Label_495;
		@UnlookAsync("head");
	}
Label_495:
	
}


void func_496(string var_106_string)
{
	float var_109_float; float var_110_float;
	@lshGetAnimTimes(var_106_string, var_109_float, var_110_float);
	@lshPlayAnimation(var_109_float, var_110_float, false);
}


void func_503(string var_89_string, bool var_90_bool)
{
	float var_95_float; float var_96_float;
	@lshGetAnimTimes(var_89_string, var_95_float, var_96_float);
	@lshPlayAnimation(var_95_float, var_96_float, var_90_bool);
}


void func_509(void)
{
	bool var_9_bool;
	func_581(var_9_bool);
	if(var_9_bool != 0)
		@lshStopSpeech();
}


