// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool)
	{
		if(1 != 0) {
			func_421();
			if(var_7_bool == 15386) {
				func_132(var_8_bool, "Neutral");
				var_0_object->SetMessage(514172); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514173, -1, 15387); //@t
				var_0_object->AddReply(539615, -1, 41562); //@t
				return 0;
			}
			var_3_string = true;
			bool var_37_bool;
			func_487(var_37_bool);
			if(var_37_bool != 0)
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
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool)
	{
		var_1_object = false;
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, string var_7_string)
	{
		bool var_9_bool;
		if(var_7_string == "execute") {
			var_1_object = true;
			@PlayAnimation("all", "bdie");
			@WaitForAnimEnd(var_9_bool);
			if(var_9_bool != 0)
				@LockAnimationEnd("all", "bdie");
		} else {
			string var_17_string;
			var_7_string = var_17_string;
			func_257(var_9_bool, var_17_string);
		}
	
	}

	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool)
	{
		if(var_1_object != 0)
			@LockAnimationEnd("all", "bdie");
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object)
	{
		int var_9_int;
		@GetVariable("d11q02", var_9_int);
		bool var_11_bool = false;
		if(var_9_int == 2) {
			if(!var_1_object) //@nz
				var_11_bool = true;
		}
		if(var_11_bool != 0) {
			object var_15_object;
			var_7_object = var_15_object;
			func_196(var_15_object);
		}
	}

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool)
	{
		bool var_7_bool = false;
		if(var_0_object != 0) {
			bool var_9_bool;
			func_301(var_9_bool);
			if(var_9_bool != 0)
				var_7_bool = true;
		}
		if(var_7_bool != 0) {
			object var_10_object;
			func_428(var_10_object);
			@RemoveActor(var_10_object);
		}
	}

}


void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool)
{
	bool var_7_bool;
	func_444(var_7_bool, "quest_d11_02", "actor_unload");
}


void func_0(object var_0_object, int var_16_int, object var_17_object)
{
	var_0_object = var_17_object;
	bool var_27_bool; object var_28_object;
	var_17_object = var_28_object;
	func_303(var_27_bool, var_28_object, 70.0);
	if(!var_27_bool) { //@nz
		var_16_int = -2;
		return 8;
	}
	object var_23_object;
	@CreateDialog(var_23_object);
	int var_75_int;
	func_481(var_75_int);
	var_23_object->SetNPCName(var_75_int);
	int var_76_int;
	func_479(var_76_int);
	var_23_object->SetNPCDescription(var_76_int);
	string var_77_string;
	func_483(var_77_string);
	var_23_object->SetPhoto(var_77_string);
	string var_78_string;
	func_485(var_78_string);
	var_23_object->SetPhoto2(var_78_string);
	int var_79_int;
	func_462(var_79_int);
	var_23_object->SetPlayerName(var_79_int);
	bool var_24_bool;
	@IsOverrideActive(var_24_bool);
	if(var_24_bool != 0) {
		var_16_int = -2;
		return 8;
	}
	@DoDialog(var_23_object);
	object var_88_object; object var_89_object;
	var_17_object = var_88_object;
	var_23_object = var_89_object;
	TaskCall(1);
	func_74(var_90_object, var_91_object, var_92_string, var_93_bool, var_88_object, var_89_object);
	TaskReturn();
	bool var_26_bool;
	var_23_object->IsDialogEnd(var_26_bool);
	
	for(;;) {
		var_137_bool = !var_26_bool; //@nz
		if(var_137_bool == 0) goto Label_63;
		@sync();
		var_23_object->IsDialogEnd(var_26_bool);
	}
	
Label_63:
	object var_138_object;
	var_17_object = var_138_object;
	func_372();
	@StopDialog(var_23_object);
	var_23_object->GetReturnValue(-1);
	int var_25_int = var_16_int;
}
EMIT "Stack[-4] = 0";


void func_257(object var_0_object, string var_17_string)
{
	bool var_19_bool;
	if(var_17_string == "cleanup") {
		var_0_object = true;
		@IsLoaded(var_19_bool);
		bool var_22_bool = false;
		if(!var_19_bool) { //@nz
			bool var_24_bool;
			func_301(var_24_bool);
			if(var_24_bool != 0)
				var_22_bool = true;
		}
		if(var_22_bool != 0) {
			object var_25_object;
			func_428(var_25_object);
			@RemoveActor(var_25_object);
		}
	} else if(var_17_string == "restore") {
		var_0_object = false;
	}
	
}


// @pe
void func_132(object var_2_object, string var_95_string)
{
	bool var_96_bool;
	func_487(var_96_bool);
	if(!var_96_bool) //@nz
		return 0;
	if(var_95_string == var_2_object)
		return 0;
	string var_99_string; bool var_100_bool;
	var_95_string = var_99_string;
	if(var_95_string == "")
		var_100_bool = false;
	else
		var_100_bool = true;
	func_406(var_99_string, var_100_bool);
	var_2_object = var_95_string;
	
}


void func_390(string var_121_string)
{
	bool var_125_bool; float var_126_float; float var_127_float;
	@lshHasAnimation(var_125_bool, var_121_string);
	if(var_125_bool != 0) {
		@lshGetAnimTimes(var_121_string, var_126_float, var_127_float);
		@lshPlayAnimation(var_126_float, var_127_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_121_string);
	}
	
}


void func_406(string var_99_string, bool var_100_bool)
{
	bool var_106_bool; float var_107_float; float var_108_float;
	@lshHasAnimation(var_106_bool, var_99_string);
	if(var_106_bool != 0) {
		@lshGetAnimTimes(var_99_string, var_107_float, var_108_float);
		@lshPlayAnimation(var_107_float, var_108_float, var_100_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_99_string);
	}
	
}


void func_421(void)
{
	bool var_10_bool;
	func_487(var_10_bool);
	if(var_10_bool != 0)
		@lshStopSpeech();
}


void func_428(object var_10_object)
{
	object var_12_object;
	@self(var_12_object);
	var_12_object = var_10_object;
}
EMIT "Stack[-1] = 0";


void func_301(bool var_9_bool)
{
	var_9_bool = true;
}


void func_303(bool var_27_bool, object var_28_object, float var_29_float)
{
	cvector var_40_cvector; bool var_47_bool;
	var_28_object->GetPosition(var_40_cvector);
	float var_39_float;
	var_28_object->GetEyesHeight(var_39_float);
	var_48_float = GetByIndex(var_40_cvector, 1);
	SetByIndex(var_40_cvector, 1) = (var_48_float + var_39_float);
	cvector var_41_cvector;
	@GetPosition(var_41_cvector);
	@GetEyesHeight(var_39_float);
	var_49_float = GetByIndex(var_41_cvector, 1);
	SetByIndex(var_41_cvector, 1) = (var_49_float + var_39_float);
	cvector var_42_cvector = var_40_cvector - var_41_cvector;
	var_50_float = GetByIndex(var_42_cvector, 1);
	SetByIndex(var_42_cvector, 1) = (float)0;
	var_52_float = sqrt(var_42_cvector | var_42_cvector);
	var_42_cvector /= var_52_float;
	cvector var_43_cvector = -var_42_cvector;
	cvector var_54_cvector;
	func_434(var_54_cvector, (var_43_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_44_cvector = ((var_42_cvector * var_29_float) + (var_54_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_46_bool;
	@IsOverrideActive(var_46_bool);
	if(var_46_bool != 0)
		var_27_bool = false;
	@StopWorld();
	@CameraTransit((var_41_cvector + var_44_cvector), var_43_cvector, true);
	var_68_float = GetByIndex(var_44_cvector, 0);
	var_69_float = GetByIndex(var_44_cvector, 2);
	@Rotate(var_68_float, var_69_float);
	bool var_70_bool;
	func_487(var_70_bool);
	if(var_70_bool != 0) {
	} else {
		@HasAnimationTrack(var_47_bool, "head");
		if(var_47_bool == 0) goto Label_366;
		@LookAsyncCamera("head");
	}
Label_366:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_27_bool = true;
	
}


void func_434(cvector var_54_cvector, cvector var_55_cvector)
{
	float var_58_float = sqrt(var_55_cvector | var_55_cvector);
	if(var_58_float < 0.000001)
		var_54_cvector = [0.0, 0.0, 0.0];
	var_54_cvector = var_55_cvector / var_58_float;
}


void func_444(bool var_7_bool, string var_8_string, string var_9_string)
{
	object var_11_object;
	@FindActor(var_11_object, var_8_string);
	if(var_11_object == null)
		var_7_bool = false;
	@Trigger(var_11_object, var_9_string);
	var_7_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_196(object var_15_object)
{
	object var_17_object;
	var_15_object = var_17_object;
	TaskCall(0);
	int var_16_int;
	func_0(var_18_object, var_16_int, var_17_object);
	TaskReturn();
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_88_object, object var_89_object)
{
	var_0_object = var_89_object;
	var_1_object = var_88_object;
	var_3_string = false;
	if(1 != 0) {
		func_132(var_89_object, "Neutral");
		var_0_object->SetMessage(514172); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(514173, -1, 15387); //@t
		var_0_object->AddReply(539615, -1, 41562); //@t
		goto Label_102;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_102:
	bool var_119_bool;
	func_487(var_119_bool);
	if(var_119_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_390(var_2_object);
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


void func_462(int var_79_int)
{
	int var_81_int;
	@GetVariable("branch", var_81_int);
	if(var_81_int == 0) {
		var_79_int = 1;
		return 2;
	EMIT "GOTO 0x1dd";
	}
	if(var_81_int == 1) {
		var_79_int = 2;
		return 2;
	}
	var_79_int = 3;
}


void func_479(int var_76_int)
{
	var_76_int = 515568;
}


void func_481(int var_75_int)
{
	var_75_int = 503353;
}


void func_483(string var_77_string)
{
	var_77_string = "ui/NPC_Citizen1.png";
}


void func_485(string var_78_string)
{
	var_78_string = "ui/NPC_Citizen1_b.png";
}


void func_487(bool var_70_bool)
{
	var_70_bool = false;
}


void func_372(void)
{
	bool var_140_bool;
	@CameraSwitchToNormal(true);
	bool var_142_bool;
	func_487(var_142_bool);
	if(var_142_bool != 0) {
	} else {
		@HasAnimationTrack(var_140_bool, "head");
		if(var_140_bool == 0) goto Label_389;
		@UnlookAsync("head");
	}
Label_389:
	
}


