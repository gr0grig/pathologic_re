// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, int var_7_int, int var_8_int, bool var_9_bool, bool var_10_bool, object var_11_object, bool var_12_bool)
	{
		if(1 != 0) {
			func_784();
			if(var_11_object == 43100) {
				func_132(var_12_bool, "Neutral");
				var_0_object->SetMessage(541007); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541008, 43102, 43101); //@t
				var_0_object->AddReply(541034, -1, 43128); //@t
				return 0;
			}
			if(var_11_object == 43102) {
				func_132(var_12_bool, "Neutral");
				var_0_object->SetMessage(541009); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541010, 43104, 43103); //@t
				var_0_object->AddReply(541031, 43126, 43125); //@t
				return 0;
			}
			if(var_11_object == 43126) {
				func_132(var_12_bool, "Neutral");
				var_0_object->SetMessage(541032); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541033, -1, 43127); //@t
				return 0;
			}
			if(var_11_object == 43104) {
				func_132(var_12_bool, "Neutral");
				var_0_object->SetMessage(541011); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541012, 43106, 43105); //@t
				var_0_object->AddReply(541030, 43106, 43123); //@t
				return 0;
			}
			if(var_11_object == 43106) {
				func_132(var_12_bool, "Neutral");
				var_0_object->SetMessage(541013); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541014, 43108, 43107); //@t
				return 0;
			}
			if(var_11_object == 43108) {
				func_132(var_12_bool, "Neutral");
				var_0_object->SetMessage(541015); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541016, 43110, 43109); //@t
				var_0_object->AddReply(541022, 43116, 43115); //@t
				return 0;
			}
			if(var_11_object == 43116) {
				func_132(var_12_bool, "Neutral");
				var_0_object->SetMessage(541023); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541024, 43118, 43117); //@t
				return 0;
			}
			if(var_11_object == 43118) {
				func_132(var_12_bool, "Neutral");
				var_0_object->SetMessage(541025); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541026, -1, 43119); //@t
				var_0_object->AddReply(541027, 43121, 43120); //@t
				return 0;
			}
			if(var_11_object == 43121) {
				func_132(var_12_bool, "Neutral");
				var_0_object->SetMessage(541028); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541029, -1, 43122); //@t
				return 0;
			}
			if(var_11_object == 43110) {
				func_132(var_12_bool, "Neutral");
				var_0_object->SetMessage(541017); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541018, 43112, 43111); //@t
				var_0_object->AddReply(541021, -1, 43114); //@t
				return 0;
			}
			if(var_11_object == 43112) {
				func_132(var_12_bool, "Neutral");
				var_0_object->SetMessage(541019); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541020, -1, 43113); //@t
				return 0;
			}
			var_3_string = true;
			bool var_121_bool;
			func_856(var_121_bool);
			if(var_121_bool != 0)
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
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool)
	{
		func_418((float)300, (float)100);
	}

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object)
	{
		func_562(var_10_bool, var_11_object);
		int var_15_int; object var_16_object;
		var_11_object = var_16_object;
		TaskCall(0);
		func_0(var_17_object, var_15_int, var_16_object);
		TaskReturn();
	}

	// @pe
	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, string var_11_string)
	{
		if(var_11_string == "cleanup")
			func_443(var_11_string);
	}

	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool)
	{
		@StopGroup0();
		@sync();
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool)
	{
		func_562(var_9_object, var_10_bool);
		bool var_14_bool = false;
		if(var_5_int != 0) {
			bool var_16_bool;
			func_495(var_16_bool);
			if(var_16_bool != 0)
				var_14_bool = true;
		}
		if(var_14_bool != 0) {
			object var_17_object;
			func_791(var_17_object);
			@RemoveActor(var_17_object);
		}
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, int var_11_int)
	{
		if(var_11_int == 10) {
			bool var_14_bool;
			func_524(var_9_object, var_10_bool, var_11_int, var_14_bool);
			if(var_14_bool != 0) {
				if(!var_2_object) { //@nz
					func_773(var_4_bool);
					var_2_object = true;
				}
			} else if(var_2_object != 0) {
				@UnlookAsync("head");
				var_2_object = false;
			}
		}
	
	}

}


void func_0(object var_0_object, int var_15_int, object var_16_object)
{
	var_0_object = var_16_object;
	bool var_26_bool; object var_27_object;
	var_16_object = var_27_object;
	func_675(var_26_bool, var_27_object, 130.0);
	if(!var_26_bool) { //@nz
		var_15_int = -2;
		return 8;
	}
	object var_22_object;
	@CreateDialog(var_22_object);
	int var_73_int;
	func_850(var_73_int);
	var_22_object->SetNPCName(var_73_int);
	int var_74_int;
	func_848(var_74_int);
	var_22_object->SetNPCDescription(var_74_int);
	string var_75_string;
	func_852(var_75_string);
	var_22_object->SetPhoto(var_75_string);
	string var_76_string;
	func_854(var_76_string);
	var_22_object->SetPhoto2(var_76_string);
	int var_77_int;
	func_831(var_77_int);
	var_22_object->SetPlayerName(var_77_int);
	bool var_23_bool;
	@IsOverrideActive(var_23_bool);
	if(var_23_bool != 0) {
		var_15_int = -2;
		return 8;
	}
	@DoDialog(var_22_object);
	object var_86_object; object var_87_object;
	var_16_object = var_86_object;
	var_22_object = var_87_object;
	TaskCall(1);
	func_74(var_88_object, var_89_object, var_90_string, var_91_bool, var_86_object, var_87_object);
	TaskReturn();
	bool var_25_bool;
	var_22_object->IsDialogEnd(var_25_bool);
	
	for(;;) {
		var_125_bool = !var_25_bool; //@nz
		if(var_125_bool == 0) goto Label_63;
		@sync();
		var_22_object->IsDialogEnd(var_25_bool);
	}
	
Label_63:
	object var_126_object;
	var_16_object = var_126_object;
	func_743();
	@StopDialog(var_22_object);
	var_22_object->GetReturnValue(-1);
	int var_24_int = var_15_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_132(object var_2_object, string var_93_string)
{
	bool var_94_bool;
	func_856(var_94_bool);
	if(!var_94_bool) //@nz
		return 0;
	if(var_93_string == var_2_object)
		return 0;
	string var_97_string; bool var_98_bool;
	var_93_string = var_97_string;
	if(var_93_string == "")
		var_98_bool = false;
	else
		var_98_bool = true;
	func_767(var_97_string, var_98_bool);
	var_2_object = var_93_string;
	
}


void func_773(object var_28_object)
{
	float var_31_float;
	var_28_object->GetEyesHeight(var_31_float);
	cvector var_32_cvector = [0.0, 0.0, 0.0];
	var_33_float = GetByIndex(var_32_cvector, 1);
	var_31_float = var_33_float;
	SetByIndex(var_32_cvector, 1) = var_33_float;
	@LookAsync(var_28_object, "head", var_32_cvector);
}


void func_524(object var_0_object, object var_1_object, bool var_4_bool, bool var_14_bool)
{
	if(var_4_bool == null)
		var_14_bool = false;
	float var_18_float;
	func_662(var_18_float, var_4_bool);
	float var_16_float = sqrt(var_18_float);
	if(var_2_object != 0)
		var_16_float -= var_1_object;
	var_14_bool = var_16_float < var_0_object;
}


void func_655(bool var_70_bool)
{
	var_70_bool = true;
}


void func_784(void)
{
	bool var_14_bool;
	func_856(var_14_bool);
	if(var_14_bool != 0)
		@lshStopSpeech();
}


void func_657(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_662(float var_18_float, object var_19_object)
{
	cvector var_23_cvector;
	@GetPosition(var_23_cvector);
	cvector var_24_cvector;
	var_19_object->GetPosition(var_24_cvector);
	var_18_float = (var_24_cvector - var_23_cvector) | (var_24_cvector - var_23_cvector);
}


void func_791(object var_17_object)
{
	object var_19_object;
	@self(var_19_object);
	var_19_object = var_17_object;
}
EMIT "Stack[-1] = 0";


void func_797(cvector var_53_cvector, cvector var_54_cvector)
{
	float var_57_float = sqrt(var_54_cvector | var_54_cvector);
	if(var_57_float < 0.000001)
		var_53_cvector = [0.0, 0.0, 0.0];
	var_53_cvector = var_54_cvector / var_57_float;
}


void func_670(bool var_15_bool)
{
	bool var_17_bool;
	@IsLoaded(var_17_bool);
	var_17_bool = var_15_bool;
}


void func_418(float var_11_float, float var_12_float)
{
	
Label_419:
	for(;;) {
		bool var_15_bool;
		func_670(var_15_bool);
		var_18_bool = !var_15_bool; //@nz
		if(var_18_bool == 0) goto Label_427;
		@Hold();
	}
	
Label_427:
	float var_14_float;
	@rand(var_14_float, 3);
	@Sleep(var_14_float + 3);
	float var_22_float; float var_23_float;
	float var_13_float;
	func_497(var_10_bool, var_22_float, var_23_float, var_13_float, var_14_float, var_22_float, var_23_float);
	@sync();
	goto Label_419;
}
EMIT "Return(); Pop(2)";


void func_675(bool var_26_bool, object var_27_object, float var_28_float)
{
	cvector var_39_cvector; bool var_46_bool;
	var_27_object->GetPosition(var_39_cvector);
	float var_38_float;
	var_27_object->GetEyesHeight(var_38_float);
	var_47_float = GetByIndex(var_39_cvector, 1);
	SetByIndex(var_39_cvector, 1) = (var_47_float + var_38_float);
	cvector var_40_cvector;
	@GetPosition(var_40_cvector);
	@GetEyesHeight(var_38_float);
	var_48_float = GetByIndex(var_40_cvector, 1);
	SetByIndex(var_40_cvector, 1) = (var_48_float + var_38_float);
	cvector var_41_cvector = var_39_cvector - var_40_cvector;
	var_49_float = GetByIndex(var_41_cvector, 1);
	SetByIndex(var_41_cvector, 1) = (float)0;
	var_51_float = sqrt(var_41_cvector | var_41_cvector);
	var_41_cvector /= var_51_float;
	cvector var_42_cvector = -var_41_cvector;
	cvector var_53_cvector;
	func_797(var_53_cvector, (var_42_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_43_cvector = ((var_41_cvector * var_28_float) + (var_53_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_45_bool;
	@IsOverrideActive(var_45_bool);
	if(var_45_bool != 0)
		var_26_bool = false;
	@StopWorld();
	@CameraTransit((var_40_cvector + var_43_cvector), var_42_cvector);
	var_66_float = GetByIndex(var_43_cvector, 0);
	var_67_float = GetByIndex(var_43_cvector, 2);
	@Rotate(var_66_float, var_67_float);
	bool var_68_bool;
	func_856(var_68_bool);
	if(var_68_bool != 0) {
	} else {
		@HasAnimationTrack(var_46_bool, "head");
		if(var_46_bool == 0) goto Label_737;
		@LookAsyncCamera("head");
	}
Label_737:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_26_bool = true;
	
}


void func_807(string var_51_string, int var_52_int)
{
	string var_54_string = "idle";
	if(var_52_int != 0)
		var_54_string += var_52_int;
	var_54_string = var_51_string;
}


void func_814(int var_45_int)
{
	int var_48_int; bool var_49_bool;
	var_48_int = 0;
	
	for(;;) {
		string var_51_string; int var_52_int;
		var_48_int = var_52_int;
		func_807(var_51_string, var_52_int);
		@HasAnimation(var_49_bool, "all", var_51_string);
		if(!var_49_bool) //@nz
			break;
		var_48_int += 1;
	}
	var_48_int = var_45_int;
}


// @pe
void func_562(object var_2_object, string var_3_string)
{
	func_657();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
}


void func_443(int var_5_int)
{
	var_5_int = true;
	bool var_15_bool;
	@IsLoaded(var_15_bool);
	bool var_16_bool = false;
	if(!var_15_bool) { //@nz
		bool var_18_bool;
		func_495(var_18_bool);
		if(var_18_bool != 0)
			var_16_bool = true;
	}
	if(var_16_bool != 0) {
		object var_19_object;
		func_791(var_19_object);
		@RemoveActor(var_19_object);
	}
}


void func_831(int var_77_int)
{
	int var_79_int;
	@GetVariable("branch", var_79_int);
	if(var_79_int == 0) {
		var_77_int = 1;
		return 2;
	EMIT "GOTO 0x34e";
	}
	if(var_79_int == 1) {
		var_77_int = 2;
		return 2;
	}
	var_77_int = 3;
}


void func_576(void)
{
	int var_38_int; int var_39_int; bool var_40_bool; float var_41_float; bool var_42_bool;
	@WaitForAnimEnd();
	bool var_43_bool;
	func_670(var_43_bool);
	if(!var_43_bool) //@nz
		return 14;
	int var_45_int;
	func_814(var_45_int);
	int var_36_int;
	var_45_int = var_36_int;
	int var_37_int = 0;
	
	for(;;) {
		bool var_58_bool = false;
		if(var_37_int < 5) {
			bool var_61_bool;
			func_670(var_61_bool);
			if(var_61_bool != 0)
				var_58_bool = true;
		}
		if(var_58_bool != 0) {
			@irand(var_38_int, 3);
			if(var_38_int == 0) {
				if(var_36_int == 0) goto Label_623;
				@irand(var_39_int, var_36_int);
				string var_67_string; int var_68_int;
				var_39_int = var_68_int;
				func_807(var_67_string, var_68_int);
				@PlayAnimation("all", var_67_string);
				@WaitForAnimEnd(var_40_bool);
				if(!var_40_bool) { //@nz
				} else {
			} else {
			if(var_38_int == 1) {
				@rand(var_41_float, 4);
				@Sleep((var_41_float + 1), var_42_bool);
				if(!var_42_bool) { //@nz
					goto Label_652;
				}
			} else if(var_37_int != 0) {
				goto Label_652;
			}
			}
					bool var_70_bool;
					func_655(var_70_bool);
					var_71_bool = !var_70_bool; //@nz
					if(var_71_bool == 0) goto Label_647;
			}
		}
	Label_652:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_647:
		@ResetAAS();
		var_37_int += 1;
	}
	
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_86_object, object var_87_object)
{
	var_0_object = var_87_object;
	var_1_object = var_86_object;
	var_3_string = false;
	if(1 != 0) {
		func_132(var_87_object, "Neutral");
		var_0_object->SetMessage(541007); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(541008, 43102, 43101); //@t
		var_0_object->AddReply(541034, -1, 43128); //@t
		goto Label_102;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_102:
	bool var_112_bool;
	func_856(var_112_bool);
	if(var_112_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_760(var_2_object);
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


void func_848(int var_74_int)
{
	var_74_int = 515571;
}


void func_850(int var_73_int)
{
	var_73_int = 504029;
}


void func_852(string var_75_string)
{
	var_75_string = "ui/NPC_bmask.png";
}


void func_854(string var_76_string)
{
	var_76_string = "ui/NPC_bmask_b.png";
}


void func_856(bool var_68_bool)
{
	var_68_bool = false;
}


void func_743(void)
{
	bool var_128_bool;
	@CameraSwitchToNormal();
	bool var_129_bool;
	func_856(var_129_bool);
	if(var_129_bool != 0) {
	} else {
		@HasAnimationTrack(var_128_bool, "head");
		if(var_128_bool == 0) goto Label_759;
		@UnlookAsync("head");
	}
Label_759:
	
}


void func_495(bool var_16_bool)
{
	var_16_bool = true;
}


// @pe
void func_497(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_22_float, float var_23_float)
{
	bool var_24_bool;
	func_670(var_24_bool);
	if(!var_24_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_22_float;
	var_1_object = var_23_float;
	@SetTimer(10, 1.0);
	func_576();
	if(!false) //@nz
		@KillTimer(10);
}


void func_760(string var_114_string)
{
	float var_117_float; float var_118_float;
	@lshGetAnimTimes(var_114_string, var_117_float, var_118_float);
	@lshPlayAnimation(var_117_float, var_118_float, false);
}


void func_767(string var_97_string, bool var_98_bool)
{
	float var_103_float; float var_104_float;
	@lshGetAnimTimes(var_97_string, var_103_float, var_104_float);
	@lshPlayAnimation(var_103_float, var_104_float, var_98_bool);
}


