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
			func_540();
			if(var_6_int == 15548) {
				bool var_12_bool;
				func_574(var_1_object);
				if(var_12_bool != 0) {
					object var_20_object; object var_21_object;
					var_20_object = var_1_object;
					var_21_object = var_0_object;
					func_568();
					func_141(var_7_bool, "Neutral");
					var_0_object->SetMessage(14326); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(14327, 15550, 15549); //@t
					return 0;
				}
				func_141(var_7_bool, "Neutral");
				var_0_object->SetMessage(14532); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14533, -1, 15764); //@t
				return 0;
			}
			if(var_6_int == 15550) {
				func_141(var_7_bool, "Neutral");
				var_0_object->SetMessage(14328); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14329, 15552, 15551); //@t
				return 0;
			}
			if(var_6_int == 15552) {
				func_141(var_7_bool, "Neutral");
				var_0_object->SetMessage(14330); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14331, 15554, 15553); //@t
				var_0_object->AddReply(14344, 15567, 15566); //@t
				return 0;
			}
			if(var_6_int == 15567) {
				func_141(var_7_bool, "Neutral");
				var_0_object->SetMessage(14345); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14346, 15569, 15568); //@t
				return 0;
			}
			if(var_6_int == 15569) {
				func_141(var_7_bool, "Neutral");
				var_0_object->SetMessage(14347); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14348, 15554, 15570); //@t
				return 0;
			}
			if(var_6_int == 15554) {
				func_141(var_7_bool, "Neutral");
				var_0_object->SetMessage(14332); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14333, 15556, 15555); //@t
				return 0;
			}
			if(var_6_int == 15556) {
				func_141(var_7_bool, "Neutral");
				var_0_object->SetMessage(14334); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14335, 15558, 15557); //@t
				return 0;
			}
			if(var_6_int == 15558) {
				func_141(var_7_bool, "Neutral");
				var_0_object->SetMessage(14336); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14337, 15560, 15559); //@t
				return 0;
			}
			if(var_6_int == 15560) {
				func_141(var_7_bool, "Neutral");
				var_0_object->SetMessage(14338); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14339, 15562, 15561); //@t
				return 0;
			}
			if(var_6_int == 15562) {
				func_141(var_7_bool, "Neutral");
				var_0_object->SetMessage(14340); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14341, 15564, 15563); //@t
				return 0;
			}
			if(var_6_int == 15564) {
				func_141(var_7_bool, "Neutral");
				var_0_object->SetMessage(14342); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14343, -1, 15565); //@t
				return 0;
			}
			var_3_string = true;
			bool var_121_bool;
			func_607(var_121_bool);
			if(var_121_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x9e";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool)
	{
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object)
	{
		object var_8_object;
		var_6_object = var_8_object;
		TaskCall(0);
		int var_7_int;
		func_0(var_9_object, var_7_int, var_8_object);
		TaskReturn();
	}

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, string var_6_string)
	{
		bool var_8_bool;
		if(var_6_string == "cleanup") {
			var_0_object = true;
			@IsLoaded(var_8_bool);
			bool var_11_bool = false;
			if(!var_8_bool) { //@nz
				bool var_13_bool;
				func_460(var_13_bool);
				if(var_13_bool != 0)
					var_11_bool = true;
			}
			if(var_11_bool != 0) {
				object var_14_object;
				func_547(var_14_object);
				@RemoveActor(var_14_object);
			}
		} else if(var_6_string == "restore") {
			var_0_object = false;
		}
	
	}

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool)
	{
		bool var_6_bool = false;
		if(var_0_object != 0) {
			bool var_8_bool;
			func_460(var_8_bool);
			if(var_8_bool != 0)
				var_6_bool = true;
		}
		if(var_6_bool != 0) {
			object var_9_object;
			func_547(var_9_object);
			@RemoveActor(var_9_object);
		}
	}

}


void func_0(object var_0_object, int var_7_int, object var_8_object)
{
	var_0_object = var_8_object;
	bool var_18_bool; object var_19_object;
	var_8_object = var_19_object;
	func_462(var_18_bool, var_19_object);
	if(!var_18_bool) { //@nz
		var_7_int = -2;
		return 8;
	}
	object var_14_object;
	@CreateDialog(var_14_object);
	int var_59_int;
	func_603(var_59_int);
	var_14_object->SetNPCName(var_59_int);
	string var_60_string;
	func_605(var_60_string);
	var_14_object->SetPhoto(var_60_string);
	int var_61_int;
	func_586(var_61_int);
	var_14_object->SetPlayerName(var_61_int);
	bool var_15_bool;
	@IsOverrideActive(var_15_bool);
	if(var_15_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	@DoDialog(var_14_object);
	object var_70_object; object var_71_object;
	var_8_object = var_70_object;
	var_14_object = var_71_object;
	TaskCall(1);
	func_63(var_72_object, var_73_object, var_74_string, var_75_bool, var_70_object, var_71_object);
	TaskReturn();
	bool var_17_bool;
	var_14_object->IsDialogEnd(var_17_bool);
	
	for(;;) {
		var_121_bool = !var_17_bool; //@nz
		if(var_121_bool == 0) goto Label_52;
		@sync();
		var_14_object->IsDialogEnd(var_17_bool);
	}
	
Label_52:
	object var_122_object;
	var_8_object = var_122_object;
	func_518();
	@StopDialog(var_14_object);
	var_14_object->GetReturnValue(-1);
	int var_16_int = var_7_int;
}
EMIT "Stack[-4] = 0";


void func_547(object var_9_object)
{
	object var_11_object;
	@self(var_11_object);
	var_11_object = var_9_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_518(void)
{
	@CameraSwitchToNormal();
}


void func_553(cvector var_43_cvector, cvector var_44_cvector)
{
	float var_47_float = sqrt(var_44_cvector | var_44_cvector);
	if(var_47_float < 0.000001)
		var_43_cvector = [0.0, 0.0, 0.0];
	var_43_cvector = var_44_cvector / var_47_float;
}


void func_586(int var_61_int)
{
	int var_63_int;
	@GetVariable("player", var_63_int);
	if(var_63_int == 0) {
		var_61_int = 200001;
		return 2;
	EMIT "GOTO 0x259";
	}
	if(var_63_int == 1) {
		var_61_int = 200002;
		return 2;
	}
	var_61_int = 200003;
}


void func_522(string var_93_string)
{
	@Trace("playing " + var_93_string);
	float var_96_float;
	float var_97_float;
	@lshGetAnimTimes(var_93_string, var_96_float, var_97_float);
	@lshPlayAnimation(var_96_float, var_97_float);
	@Trace("start: " + var_96_float);
	@Trace("end: " + var_97_float);
}


void func_460(bool var_8_bool)
{
	var_8_bool = true;
}


// @pe
void func_141(object var_2_object, string var_89_string)
{
	bool var_90_bool;
	func_607(var_90_bool);
	if(!var_90_bool) //@nz
		return 0;
	if(var_89_string == var_2_object)
		return 0;
	string var_93_string;
	func_522(var_93_string);
	var_2_object = var_93_string;
}


void func_462(bool var_18_bool, object var_19_object)
{
	cvector var_29_cvector;
	var_19_object->GetPosition(var_29_cvector);
	float var_28_float;
	var_19_object->GetEyesHeight(var_28_float);
	var_36_float = GetByIndex(var_29_cvector, 1);
	SetByIndex(var_29_cvector, 1) = (var_36_float + var_28_float);
	cvector var_30_cvector;
	@GetPosition(var_30_cvector);
	@GetEyesHeight(var_28_float);
	var_37_float = GetByIndex(var_30_cvector, 1);
	SetByIndex(var_30_cvector, 1) = (var_37_float + var_28_float);
	cvector var_31_cvector = var_29_cvector - var_30_cvector;
	var_38_float = GetByIndex(var_31_cvector, 1);
	SetByIndex(var_31_cvector, 1) = (float)0;
	var_40_float = sqrt(var_31_cvector | var_31_cvector);
	var_31_cvector /= var_40_float;
	cvector var_32_cvector = -var_31_cvector;
	cvector var_43_cvector;
	func_553(var_43_cvector, (var_32_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_33_cvector = ((var_31_cvector * 70) + (var_43_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_35_bool;
	@IsOverrideActive(var_35_bool);
	if(var_35_bool != 0)
		var_18_bool = false;
	@StopWorld();
	@CameraTransit((var_30_cvector + var_33_cvector), var_32_cvector);
	var_56_float = GetByIndex(var_33_cvector, 0);
	var_57_float = GetByIndex(var_33_cvector, 2);
	@Rotate(var_56_float, var_57_float);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_18_bool = true;
}


void func_607(bool var_90_bool)
{
	var_90_bool = true;
}


void func_563(int var_79_int, string var_80_string)
{
	int var_82_int;
	@GetVariable(var_80_string, var_82_int);
	var_82_int = var_79_int;
}


// @pe
void func_568(void)
{
	@SetVariable("ood11Burah1", 1);
}


void func_603(int var_59_int)
{
	var_59_int = 11961;
}


void func_540(void)
{
	bool var_9_bool;
	func_607(var_9_bool);
	if(var_9_bool != 0)
		@lshStopSpeech();
}


void func_605(string var_60_string)
{
	var_60_string = "ui/NPC_Burah.png";
}


// @pe
void func_574(bool var_77_bool)
{
	int var_79_int;
	func_563(var_79_int, "ood11Burah1");
	if(var_79_int == 0) {
		var_77_bool = true;
		return 0;
	}
	var_77_bool = false;
}


// @pe
void func_63(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_70_object, object var_71_object)
{
	var_0_object = var_71_object;
	var_1_object = var_70_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_77_bool;
		func_574(var_1_object);
		if(var_77_bool != 0) {
			object var_85_object; object var_86_object;
			var_85_object = var_1_object;
			var_86_object = var_0_object;
			func_568();
			func_141(var_71_object, "Neutral");
			var_0_object->SetMessage(14326); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(14327, 15550, 15549); //@t
		} else {
					func_141(var_71_object, "Neutral");
					var_0_object->SetMessage(14532); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(14533, -1, 15764); //@t
		}
	}
	for(;;) {
		bool var_108_bool;
		func_607(var_108_bool);
		if(var_108_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_522(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_140;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_140:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x43";


