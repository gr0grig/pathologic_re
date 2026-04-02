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
			func_348();
			if(var_7_bool == 15389) {
				func_116(var_8_bool, "Neutral");
				var_0_object->SetMessage(14175); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14176, -1, 15390); //@t
				return 0;
			}
			var_3_string = true;
			bool var_32_bool;
			func_410(var_32_bool);
			if(var_32_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x85";
	
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
			func_224(var_9_bool, var_17_string);
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
		if(var_9_int == 2) {
			object var_13_object;
			var_7_object = var_13_object;
			func_169(var_13_object);
		}
	}

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool)
	{
		bool var_7_bool = false;
		if(var_0_object != 0) {
			bool var_9_bool;
			func_268(var_9_bool);
			if(var_9_bool != 0)
				var_7_bool = true;
		}
		if(var_7_bool != 0) {
			object var_10_object;
			func_355(var_10_object);
			@RemoveActor(var_10_object);
		}
	}

}


void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool)
{
	bool var_7_bool;
	func_371(var_7_bool, "quest_d11_02", "actor_unload");
}


void func_0(object var_0_object, int var_14_int, object var_15_object)
{
	var_0_object = var_15_object;
	bool var_25_bool; object var_26_object;
	var_15_object = var_26_object;
	func_270(var_25_bool, var_26_object);
	if(!var_25_bool) { //@nz
		var_14_int = -2;
		return 8;
	}
	object var_21_object;
	@CreateDialog(var_21_object);
	int var_66_int;
	func_406(var_66_int);
	var_21_object->SetNPCName(var_66_int);
	string var_67_string;
	func_408(var_67_string);
	var_21_object->SetPhoto(var_67_string);
	int var_68_int;
	func_389(var_68_int);
	var_21_object->SetPlayerName(var_68_int);
	bool var_22_bool;
	@IsOverrideActive(var_22_bool);
	if(var_22_bool != 0) {
		var_14_int = -2;
		return 8;
	}
	@DoDialog(var_21_object);
	object var_77_object; object var_78_object;
	var_15_object = var_77_object;
	var_21_object = var_78_object;
	TaskCall(1);
	func_63(var_79_object, var_80_object, var_81_string, var_82_bool, var_77_object, var_78_object);
	TaskReturn();
	bool var_24_bool;
	var_21_object->IsDialogEnd(var_24_bool);
	
	for(;;) {
		var_111_bool = !var_24_bool; //@nz
		if(var_111_bool == 0) goto Label_52;
		@sync();
		var_21_object->IsDialogEnd(var_24_bool);
	}
	
Label_52:
	object var_112_object;
	var_15_object = var_112_object;
	func_326();
	@StopDialog(var_21_object);
	var_21_object->GetReturnValue(-1);
	int var_23_int = var_14_int;
}
EMIT "Stack[-4] = 0";


void func_224(object var_0_object, string var_17_string)
{
	bool var_19_bool;
	if(var_17_string == "cleanup") {
		var_0_object = true;
		@IsLoaded(var_19_bool);
		bool var_22_bool = false;
		if(!var_19_bool) { //@nz
			bool var_24_bool;
			func_268(var_24_bool);
			if(var_24_bool != 0)
				var_22_bool = true;
		}
		if(var_22_bool != 0) {
			object var_25_object;
			func_355(var_25_object);
			@RemoveActor(var_25_object);
		}
	} else if(var_17_string == "restore") {
		var_0_object = false;
	}
	
}


void func_355(object var_10_object)
{
	object var_12_object;
	@self(var_12_object);
	var_12_object = var_10_object;
}
EMIT "Stack[-1] = 0";


void func_389(int var_68_int)
{
	int var_70_int;
	@GetVariable("player", var_70_int);
	if(var_70_int == 0) {
		var_68_int = 200001;
		return 2;
	EMIT "GOTO 0x194";
	}
	if(var_70_int == 1) {
		var_68_int = 200002;
		return 2;
	}
	var_68_int = 200003;
}


// @pe
void func_326(void)
{
	@CameraSwitchToNormal();
}


// @pe
void func_169(object var_13_object)
{
	object var_15_object;
	var_13_object = var_15_object;
	TaskCall(0);
	int var_14_int;
	func_0(var_16_object, var_14_int, var_15_object);
	TaskReturn();
}


void func_330(string var_88_string)
{
	@Trace("playing " + var_88_string);
	float var_91_float;
	float var_92_float;
	@lshGetAnimTimes(var_88_string, var_91_float, var_92_float);
	@lshPlayAnimation(var_91_float, var_92_float);
	@Trace("start: " + var_91_float);
	@Trace("end: " + var_92_float);
}


void func_361(cvector var_50_cvector, cvector var_51_cvector)
{
	float var_54_float = sqrt(var_51_cvector | var_51_cvector);
	if(var_54_float < 0.000001)
		var_50_cvector = [0.0, 0.0, 0.0];
	var_50_cvector = var_51_cvector / var_54_float;
}


void func_268(bool var_9_bool)
{
	var_9_bool = true;
}


void func_270(bool var_25_bool, object var_26_object)
{
	cvector var_36_cvector;
	var_26_object->GetPosition(var_36_cvector);
	float var_35_float;
	var_26_object->GetEyesHeight(var_35_float);
	var_43_float = GetByIndex(var_36_cvector, 1);
	SetByIndex(var_36_cvector, 1) = (var_43_float + var_35_float);
	cvector var_37_cvector;
	@GetPosition(var_37_cvector);
	@GetEyesHeight(var_35_float);
	var_44_float = GetByIndex(var_37_cvector, 1);
	SetByIndex(var_37_cvector, 1) = (var_44_float + var_35_float);
	cvector var_38_cvector = var_36_cvector - var_37_cvector;
	var_45_float = GetByIndex(var_38_cvector, 1);
	SetByIndex(var_38_cvector, 1) = (float)0;
	var_47_float = sqrt(var_38_cvector | var_38_cvector);
	var_38_cvector /= var_47_float;
	cvector var_39_cvector = -var_38_cvector;
	cvector var_50_cvector;
	func_361(var_50_cvector, (var_39_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_40_cvector = ((var_38_cvector * 70) + (var_50_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_42_bool;
	@IsOverrideActive(var_42_bool);
	if(var_42_bool != 0)
		var_25_bool = false;
	@StopWorld();
	@CameraTransit((var_37_cvector + var_40_cvector), var_39_cvector);
	var_63_float = GetByIndex(var_40_cvector, 0);
	var_64_float = GetByIndex(var_40_cvector, 2);
	@Rotate(var_63_float, var_64_float);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_25_bool = true;
}


void func_371(bool var_7_bool, string var_8_string, string var_9_string)
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
void func_116(object var_2_object, string var_84_string)
{
	bool var_85_bool;
	func_410(var_85_bool);
	if(!var_85_bool) //@nz
		return 0;
	if(var_84_string == var_2_object)
		return 0;
	string var_88_string;
	func_330(var_88_string);
	var_2_object = var_88_string;
}


void func_406(int var_66_int)
{
	var_66_int = 3353;
}


void func_408(string var_67_string)
{
	var_67_string = "ui/NPC_None.png";
}


void func_410(bool var_85_bool)
{
	var_85_bool = false;
}


void func_348(void)
{
	bool var_10_bool;
	func_410(var_10_bool);
	if(var_10_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_63(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_77_object, object var_78_object)
{
	var_0_object = var_78_object;
	var_1_object = var_77_object;
	var_3_string = false;
	if(1 != 0) {
		func_116(var_78_object, "Neutral");
		var_0_object->SetMessage(14175); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(14176, -1, 15390); //@t
		goto Label_86;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x43";
	}
Label_86:
	bool var_103_bool;
	func_410(var_103_bool);
	if(var_103_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_330(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_115;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_115:
		return 0;

	}
	
}


