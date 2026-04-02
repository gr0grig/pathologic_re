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
			func_541();
			if(var_7_bool == 10626) {
				object var_12_object; object var_13_object;
				var_12_object = var_1_object;
				var_13_object = var_0_object;
				func_599();
				object var_30_object = var_1_object;
				func_615(var_0_object);
			}
			if(var_7_bool == 10627) {
				object var_58_object; object var_59_object;
				var_58_object = var_1_object;
				var_59_object = var_0_object;
				func_599();
				object var_60_object = var_1_object;
				func_615(var_0_object);
			}
			if(var_6_int == 10619) {
				func_137(var_7_bool, "Neutral");
				var_0_object->SetMessage(509650); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509651, 10621, 10620); //@t
				var_0_object->AddReply(509661, 10633, 10632); //@t
				var_0_object->AddReply(509665, 10625, 10638); //@t
				return 0;
			}
			if(var_6_int == 10633) {
				func_137(var_7_bool, "Neutral");
				var_0_object->SetMessage(509662); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509663, 10625, 10634); //@t
				var_0_object->AddReply(509664, 10621, 10636); //@t
				return 0;
			}
			if(var_6_int == 10621) {
				func_137(var_7_bool, "Neutral");
				var_0_object->SetMessage(509652); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509653, 10623, 10622); //@t
				var_0_object->AddReply(509660, 10625, 10630); //@t
				return 0;
			}
			if(var_6_int == 10623) {
				func_137(var_7_bool, "Neutral");
				var_0_object->SetMessage(509654); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509655, 10625, 10624); //@t
				var_0_object->AddReply(509659, 10625, 10628); //@t
				return 0;
			}
			if(var_6_int == 10625) {
				func_137(var_7_bool, "Neutral");
				var_0_object->SetMessage(509656); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509657, -1, 10626); //@t
				var_0_object->AddReply(509658, -1, 10627); //@t
				return 0;
			}
			var_3_string = true;
			bool var_126_bool;
			func_706(var_126_bool);
			if(var_126_bool != 0)
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
		var_0_object = false;
	
		for(;;) {
			@Sleep(3);
			func_352();
		}
	}
	EMIT "Return(); Pop(0)";

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object)
	{
		if(!actor) { //@nz
			actor = true;
			func_433();
			int var_8_int; object var_9_object;
			var_6_object = var_9_object;
			TaskCall(0);
			func_0(var_10_object, var_8_int, var_9_object);
			TaskReturn();
			bool var_129_bool;
			func_558(var_129_bool, "quest_d4_01", "birdmask_done");
		}
	}

}


void func_0(object var_0_object, int var_8_int, object var_9_object)
{
	var_0_object = var_9_object;
	bool var_19_bool; object var_20_object;
	var_9_object = var_20_object;
	func_443(var_19_bool, var_20_object, 130.0);
	if(!var_19_bool) { //@nz
		var_8_int = -2;
		return 8;
	}
	object var_15_object;
	@CreateDialog(var_15_object);
	int var_66_int;
	func_700(var_66_int);
	var_15_object->SetNPCName(var_66_int);
	int var_67_int;
	func_698(var_67_int);
	var_15_object->SetNPCDescription(var_67_int);
	string var_68_string;
	func_702(var_68_string);
	var_15_object->SetPhoto(var_68_string);
	string var_69_string;
	func_704(var_69_string);
	var_15_object->SetPhoto2(var_69_string);
	int var_70_int;
	func_681(var_70_int);
	var_15_object->SetPlayerName(var_70_int);
	bool var_16_bool;
	@IsOverrideActive(var_16_bool);
	if(var_16_bool != 0) {
		var_8_int = -2;
		return 8;
	}
	@DoDialog(var_15_object);
	object var_79_object; object var_80_object;
	var_9_object = var_79_object;
	var_15_object = var_80_object;
	TaskCall(1);
	func_74(var_81_object, var_82_object, var_83_string, var_84_bool, var_79_object, var_80_object);
	TaskReturn();
	bool var_18_bool;
	var_15_object->IsDialogEnd(var_18_bool);
	
	for(;;) {
		var_121_bool = !var_18_bool; //@nz
		if(var_121_bool == 0) goto Label_63;
		@sync();
		var_15_object->IsDialogEnd(var_18_bool);
	}
	
Label_63:
	object var_122_object;
	var_9_object = var_122_object;
	func_511();
	@StopDialog(var_15_object);
	var_15_object->GetReturnValue(-1);
	int var_17_int = var_8_int;
}
EMIT "Stack[-4] = 0";


void func_704(string var_69_string)
{
	var_69_string = "ui/NPC_bmask_b.png";
}


void func_706(bool var_61_bool)
{
	var_61_bool = false;
}


void func_582(int var_25_int)
{
	int var_28_int; bool var_29_bool;
	var_28_int = 0;
	
	for(;;) {
		string var_31_string; int var_32_int;
		var_28_int = var_32_int;
		func_575(var_31_string, var_32_int);
		@HasAnimation(var_29_bool, "all", var_31_string);
		if(!var_29_bool) //@nz
			break;
		var_28_int += 1;
	}
	var_28_int = var_25_int;
}


void func_648(object var_32_object, string var_33_string, float var_34_float)
{
	object var_42_object;
	@GetMainOutdoorScene(var_42_object);
	if(var_42_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_40_cvector;
	cvector var_41_cvector;
	bool var_43_bool;
	var_42_object->GetLocator(var_33_string, var_43_bool, var_40_cvector, var_41_cvector);
	if(!var_43_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_33_string) + " doesnt exist");
	var_42_object->GetMap(var_32_object);
	if(var_32_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_53_float = GetByIndex(var_40_cvector, 0);
	var_54_float = GetByIndex(var_40_cvector, 2);
	var_32_object->SetMapParams(var_53_float, var_54_float, var_34_float);
}
EMIT "Stack[-2] = 0";


// @pe
void func_137(object var_2_object, string var_86_string)
{
	bool var_87_bool;
	func_706(var_87_bool);
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
	func_535(var_90_string, var_91_bool);
	var_2_object = var_86_string;
	
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_79_object, object var_80_object)
{
	var_0_object = var_80_object;
	var_1_object = var_79_object;
	var_3_string = false;
	if(1 != 0) {
		func_137(var_80_object, "Neutral");
		var_0_object->SetMessage(509650); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(509651, 10621, 10620); //@t
		var_0_object->AddReply(509661, 10633, 10632); //@t
		var_0_object->AddReply(509665, 10625, 10638); //@t
		goto Label_107;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_107:
	bool var_108_bool;
	func_706(var_108_bool);
	if(var_108_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_528(var_2_object);
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


void func_511(void)
{
	bool var_124_bool;
	@CameraSwitchToNormal();
	bool var_125_bool;
	func_706(var_125_bool);
	if(var_125_bool != 0) {
	} else {
		@HasAnimationTrack(var_124_bool, "head");
		if(var_124_bool == 0) goto Label_527;
		@UnlookAsync("head");
	}
Label_527:
	
}


void func_528(string var_110_string)
{
	float var_113_float; float var_114_float;
	@lshGetAnimTimes(var_110_string, var_113_float, var_114_float);
	@lshPlayAnimation(var_113_float, var_114_float, false);
}


void func_535(string var_90_string, bool var_91_bool)
{
	float var_96_float; float var_97_float;
	@lshGetAnimTimes(var_90_string, var_96_float, var_97_float);
	@lshPlayAnimation(var_96_float, var_97_float, var_91_bool);
}


void func_599(void)
{
	object var_16_object;
	func_631(var_16_object);
	object var_15_object;
	var_16_object = var_15_object;
	float var_27_float;
	func_570(var_27_float);
	var_15_object->AddMark("d4q01Whitemask", "pt_d4q01_key1_region", 1, 511523, var_27_float);
}
EMIT "Stack[-1] = 0";


void func_541(void)
{
	bool var_9_bool;
	func_706(var_9_bool);
	if(var_9_bool != 0)
		@lshStopSpeech();
}


void func_352(void)
{
	int var_16_int; int var_17_int; bool var_18_bool; float var_19_float; bool var_20_bool;
	@WaitForAnimEnd();
	bool var_21_bool;
	func_438(var_21_bool);
	if(!var_21_bool) //@nz
		return 14;
	int var_25_int;
	func_582(var_25_int);
	int var_14_int;
	var_25_int = var_14_int;
	int var_15_int = 0;
	
	for(;;) {
		bool var_38_bool = false;
		if(var_15_int < 5) {
			bool var_41_bool;
			func_438(var_41_bool);
			if(var_41_bool != 0)
				var_38_bool = true;
		}
		if(var_38_bool != 0) {
			@irand(var_16_int, 3);
			if(var_16_int == 0) {
				if(var_14_int == 0) goto Label_399;
				@irand(var_17_int, var_14_int);
				string var_47_string; int var_48_int;
				var_17_int = var_48_int;
				func_575(var_47_string, var_48_int);
				@PlayAnimation("all", var_47_string);
				@WaitForAnimEnd(var_18_bool);
				if(!var_18_bool) { //@nz
				} else {
			} else {
			if(var_16_int == 1) {
				@rand(var_19_float, 4);
				@Sleep((var_19_float + 1), var_20_bool);
				if(!var_20_bool) { //@nz
					goto Label_428;
				}
			} else if(var_15_int != 0) {
				goto Label_428;
			}
			}
					bool var_50_bool;
					func_431(var_50_bool);
					var_51_bool = !var_50_bool; //@nz
					if(var_51_bool == 0) goto Label_423;
			}
		}
	Label_428:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_423:
		@ResetAAS();
		var_15_int += 1;
	}
	
}


void func_548(cvector var_46_cvector, cvector var_47_cvector)
{
	float var_50_float = sqrt(var_47_cvector | var_47_cvector);
	if(var_50_float < 0.000001)
		var_46_cvector = [0.0, 0.0, 0.0];
	var_46_cvector = var_47_cvector / var_50_float;
}


// @pe
void func_615(object var_31_object)
{
	object var_35_object;
	func_631(var_35_object);
	object var_32_object;
	var_35_object = var_32_object;
	func_648(var_32_object, "pt_d4q01_key1_region", (float)2);
	object var_55_object;
	func_631(var_55_object);
	var_31_object->ShowMap(var_55_object);
}


void func_681(int var_70_int)
{
	int var_72_int;
	@GetVariable("branch", var_72_int);
	if(var_72_int == 0) {
		var_70_int = 1;
		return 2;
	EMIT "GOTO 0x2b8";
	}
	if(var_72_int == 1) {
		var_70_int = 2;
		return 2;
	}
	var_70_int = 3;
}


void func_558(bool var_129_bool, string var_130_string, string var_131_string)
{
	object var_133_object;
	@FindActor(var_133_object, var_130_string);
	if(var_133_object == null)
		var_129_bool = false;
	@Trigger(var_133_object, var_131_string);
	var_129_bool = true;
}
EMIT "Stack[-1] = 0";


void func_431(bool var_50_bool)
{
	var_50_bool = true;
}


void func_433(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_438(bool var_21_bool)
{
	bool var_23_bool;
	@IsLoaded(var_23_bool);
	var_23_bool = var_21_bool;
}


void func_631(object var_16_object)
{
	object var_19_object; object var_20_object;
	@GetMainOutdoorScene(var_19_object);
	if(var_19_object == null) {
		@Trace("Can't find main outdoor scene");
		var_20_object = null;
		var_20_object = var_16_object;
	}
	var_19_object->GetMap(var_20_object);
	var_20_object = var_16_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_698(int var_67_int)
{
	var_67_int = 515571;
}


void func_570(float var_27_float)
{
	float var_29_float;
	@GetGameTime(var_29_float);
	var_29_float = var_27_float;
}


void func_443(bool var_19_bool, object var_20_object, float var_21_float)
{
	cvector var_32_cvector; bool var_39_bool;
	var_20_object->GetPosition(var_32_cvector);
	float var_31_float;
	var_20_object->GetEyesHeight(var_31_float);
	var_40_float = GetByIndex(var_32_cvector, 1);
	SetByIndex(var_32_cvector, 1) = (var_40_float + var_31_float);
	cvector var_33_cvector;
	@GetPosition(var_33_cvector);
	@GetEyesHeight(var_31_float);
	var_41_float = GetByIndex(var_33_cvector, 1);
	SetByIndex(var_33_cvector, 1) = (var_41_float + var_31_float);
	cvector var_34_cvector = var_32_cvector - var_33_cvector;
	var_42_float = GetByIndex(var_34_cvector, 1);
	SetByIndex(var_34_cvector, 1) = (float)0;
	var_44_float = sqrt(var_34_cvector | var_34_cvector);
	var_34_cvector /= var_44_float;
	cvector var_35_cvector = -var_34_cvector;
	cvector var_46_cvector;
	func_548(var_46_cvector, (var_35_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_36_cvector = ((var_34_cvector * var_21_float) + (var_46_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_38_bool;
	@IsOverrideActive(var_38_bool);
	if(var_38_bool != 0)
		var_19_bool = false;
	@StopWorld();
	@CameraTransit((var_33_cvector + var_36_cvector), var_35_cvector);
	var_59_float = GetByIndex(var_36_cvector, 0);
	var_60_float = GetByIndex(var_36_cvector, 2);
	@Rotate(var_59_float, var_60_float);
	bool var_61_bool;
	func_706(var_61_bool);
	if(var_61_bool != 0) {
	} else {
		@HasAnimationTrack(var_39_bool, "head");
		if(var_39_bool == 0) goto Label_505;
		@LookAsyncCamera("head");
	}
Label_505:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_19_bool = true;
	
}


void func_700(int var_66_int)
{
	var_66_int = 504029;
}


void func_702(string var_68_string)
{
	var_68_string = "ui/NPC_bmask.png";
}


void func_575(string var_31_string, int var_32_int)
{
	string var_34_string = "idle";
	if(var_32_int != 0)
		var_34_string += var_32_int;
	var_34_string = var_31_string;
}


