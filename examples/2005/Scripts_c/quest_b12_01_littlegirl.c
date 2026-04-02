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
			func_788();
			if(var_12_bool == 24105) {
				object var_17_object; object var_18_object;
				var_17_object = var_1_object;
				var_18_object = var_0_object;
				func_833();
			}
			if(var_12_bool == 24118) {
				object var_23_object; object var_24_object;
				var_23_object = var_1_object;
				var_24_object = var_0_object;
				func_839();
			}
			if(var_11_object == 24104) {
				object var_29_object; object var_30_object;
				var_29_object = var_1_object;
				var_30_object = var_0_object;
				func_845();
				object var_41_object; object var_42_object;
				var_41_object = var_1_object;
				var_42_object = var_0_object;
				func_884();
				object var_45_object; object var_46_object;
				var_45_object = var_1_object;
				var_46_object = var_0_object;
				func_852();
				func_162(var_12_bool, "Neutral");
				var_0_object->SetMessage(522914); //@t
				var_0_object->ClearReplies(); //@t
				bool var_105_bool;
				func_890(var_1_object);
				if(var_105_bool != 0)
					var_0_object->AddReply(522915, 37091, 24105); //@t
				bool var_114_bool;
				func_902(var_1_object);
				if(var_114_bool != 0)
					var_0_object->AddReply(522927, 24119, 24118); //@t
				var_0_object->AddReply(522926, -1, 24117); //@t
				return 0;
			}
			if(var_11_object == 24119) {
				func_162(var_12_bool, "Neutral");
				var_0_object->SetMessage(522928); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522929, -1, 24120); //@t
				var_0_object->AddReply(522930, -1, 24121); //@t
				return 0;
			}
			if(var_11_object == 37091) {
				func_162(var_12_bool, "Neutral");
				var_0_object->SetMessage(535411); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535412, 37093, 37092); //@t
				return 0;
			}
			if(var_11_object == 37093) {
				func_162(var_12_bool, "Neutral");
				var_0_object->SetMessage(535413); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535414, 24106, 37094); //@t
				var_0_object->AddReply(535415, -1, 37095); //@t
				return 0;
			}
			if(var_11_object == 24106) {
				func_162(var_12_bool, "Neutral");
				var_0_object->SetMessage(522916); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522917, 24108, 24107); //@t
				return 0;
			}
			if(var_11_object == 24108) {
				func_162(var_12_bool, "Neutral");
				var_0_object->SetMessage(522918); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522920, -1, 24110); //@t
				var_0_object->AddReply(522921, 24112, 24111); //@t
				var_0_object->AddReply(522925, 24112, 24115); //@t
				return 0;
			}
			if(var_11_object == 24112) {
				func_162(var_12_bool, "Neutral");
				var_0_object->SetMessage(522922); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522923, -1, 24113); //@t
				var_0_object->AddReply(522924, -1, 24114); //@t
				return 0;
			}
			var_3_string = true;
			bool var_183_bool;
			func_1010(var_183_bool);
			if(var_183_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xb9";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool)
	{
		func_422((float)300, (float)100);
	}

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object)
	{
		func_566(var_10_bool, var_11_object);
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
			func_447(var_11_string);
	}

	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool)
	{
		@StopGroup0();
		@sync();
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool)
	{
		func_566(var_9_object, var_10_bool);
		bool var_14_bool = false;
		if(var_5_int != 0) {
			bool var_16_bool;
			func_499(var_16_bool);
			if(var_16_bool != 0)
				var_14_bool = true;
		}
		if(var_14_bool != 0) {
			object var_17_object;
			func_795(var_17_object);
			@RemoveActor(var_17_object);
		}
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, int var_11_int)
	{
		if(var_11_int == 10) {
			bool var_14_bool;
			func_528(var_9_object, var_10_bool, var_11_int, var_14_bool);
			if(var_14_bool != 0) {
				if(!var_2_object) { //@nz
					func_777(var_4_bool);
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
	func_679(var_26_bool, var_27_object, 70.0);
	if(!var_26_bool) { //@nz
		var_15_int = -2;
		return 8;
	}
	object var_22_object;
	@CreateDialog(var_22_object);
	int var_73_int;
	func_1004(var_73_int);
	var_22_object->SetNPCName(var_73_int);
	int var_74_int;
	func_1002(var_74_int);
	var_22_object->SetNPCDescription(var_74_int);
	string var_75_string;
	func_1006(var_75_string);
	var_22_object->SetPhoto(var_75_string);
	string var_76_string;
	func_1008(var_76_string);
	var_22_object->SetPhoto2(var_76_string);
	int var_77_int;
	func_985(var_77_int);
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
		var_203_bool = !var_25_bool; //@nz
		if(var_203_bool == 0) goto Label_63;
		@sync();
		var_22_object->IsDialogEnd(var_25_bool);
	}
	
Label_63:
	object var_204_object;
	var_16_object = var_204_object;
	func_747();
	@StopDialog(var_22_object);
	var_22_object->GetReturnValue(-1);
	int var_24_int = var_15_int;
}
EMIT "Stack[-4] = 0";


void func_771(string var_160_string, bool var_161_bool)
{
	float var_166_float; float var_167_float;
	@lshGetAnimTimes(var_160_string, var_166_float, var_167_float);
	@lshPlayAnimation(var_166_float, var_167_float, var_161_bool);
}


// @pe
void func_902(bool var_178_bool)
{
	int var_180_int;
	func_811(var_180_int, "oob12Littlegirl2");
	if(var_180_int == 0) {
		var_178_bool = true;
		return 0;
	}
	var_178_bool = false;
}


void func_777(object var_28_object)
{
	float var_31_float;
	var_28_object->GetEyesHeight(var_31_float);
	cvector var_32_cvector = [0.0, 0.0, 0.0];
	var_33_float = GetByIndex(var_32_cvector, 1);
	var_31_float = var_33_float;
	SetByIndex(var_32_cvector, 1) = var_33_float;
	@LookAsync(var_28_object, "head", var_32_cvector);
}


void func_528(object var_0_object, object var_1_object, bool var_4_bool, bool var_14_bool)
{
	if(var_4_bool == null)
		var_14_bool = false;
	float var_18_float;
	func_666(var_18_float, var_4_bool);
	float var_16_float = sqrt(var_18_float);
	if(var_2_object != 0)
		var_16_float -= var_1_object;
	var_14_bool = var_16_float < var_0_object;
}


void func_914(void)
{
	object var_120_object;
	@CreateDiaryEntry(var_120_object, 566, 0, 530580);
	bool var_124_bool; object var_125_object;
	var_120_object = var_125_object;
	func_940(var_124_bool, var_125_object, -1);
}
EMIT "Stack[-1] = 0";


void func_659(bool var_70_bool)
{
	var_70_bool = true;
}


void func_788(void)
{
	bool var_14_bool;
	func_1010(var_14_bool);
	if(var_14_bool != 0)
		@lshStopSpeech();
}


void func_661(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_666(float var_18_float, object var_19_object)
{
	cvector var_23_cvector;
	@GetPosition(var_23_cvector);
	cvector var_24_cvector;
	var_19_object->GetPosition(var_24_cvector);
	var_18_float = (var_24_cvector - var_23_cvector) | (var_24_cvector - var_23_cvector);
}


void func_795(object var_17_object)
{
	object var_19_object;
	@self(var_19_object);
	var_19_object = var_17_object;
}
EMIT "Stack[-1] = 0";


void func_927(object var_133_object)
{
	object var_135_object;
	@GetDiaryRoot(var_135_object);
	if(!var_135_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_133_object = false;
	}
	var_135_object = var_133_object;
}
EMIT "Stack[-1] = 0";


void func_801(cvector var_53_cvector, cvector var_54_cvector)
{
	float var_57_float = sqrt(var_54_cvector | var_54_cvector);
	if(var_57_float < 0.000001)
		var_53_cvector = [0.0, 0.0, 0.0];
	var_53_cvector = var_54_cvector / var_57_float;
}


// @pe
void func_162(object var_2_object, string var_156_string)
{
	bool var_157_bool;
	func_1010(var_157_bool);
	if(!var_157_bool) //@nz
		return 0;
	if(var_156_string == var_2_object)
		return 0;
	string var_160_string; bool var_161_bool;
	var_156_string = var_160_string;
	if(var_156_string == "")
		var_161_bool = false;
	else
		var_161_bool = true;
	func_771(var_160_string, var_161_bool);
	var_2_object = var_156_string;
	
}


void func_674(bool var_15_bool)
{
	bool var_17_bool;
	@IsLoaded(var_17_bool);
	var_17_bool = var_15_bool;
}


void func_422(float var_11_float, float var_12_float)
{
	
Label_423:
	for(;;) {
		bool var_15_bool;
		func_674(var_15_bool);
		var_18_bool = !var_15_bool; //@nz
		if(var_18_bool == 0) goto Label_431;
		@Hold();
	}
	
Label_431:
	float var_14_float;
	@rand(var_14_float, 3);
	@Sleep(var_14_float + 3);
	float var_22_float; float var_23_float;
	float var_13_float;
	func_501(var_10_bool, var_22_float, var_23_float, var_13_float, var_14_float, var_22_float, var_23_float);
	@sync();
	goto Label_423;
}
EMIT "Return(); Pop(2)";


void func_679(bool var_26_bool, object var_27_object, float var_28_float)
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
	func_801(var_53_cvector, (var_42_cvector ^ [0.0, 1.0, 0.0]));
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
	func_1010(var_68_bool);
	if(var_68_bool != 0) {
	} else {
		@HasAnimationTrack(var_46_bool, "head");
		if(var_46_bool == 0) goto Label_741;
		@LookAsyncCamera("head");
	}
Label_741:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_26_bool = true;
	
}


void func_811(int var_111_int, string var_112_string)
{
	int var_114_int;
	@GetVariable(var_112_string, var_114_int);
	var_114_int = var_111_int;
}


void func_940(bool var_124_bool, object var_125_object, int var_126_int)
{
	object var_133_object;
	func_927(var_133_object);
	object var_130_object;
	var_133_object = var_130_object;
	object var_131_object;
	var_130_object->Find(var_126_int, var_131_object);
	if(!var_131_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_126_int);
		var_124_bool = false;
	}
	var_131_object->AddChild(var_125_object);
	@SendWorldWndMessage(7);
	int var_132_int;
	var_125_object->GetCategory(var_132_int);
	@SetDiarySection(var_132_int);
	var_124_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_816(string var_95_string, bool var_96_bool)
{
	object var_98_object;
	@FindActor(var_98_object, var_95_string);
	if(!var_98_object) //@nz
		@Trace(("Door " + var_95_string) + " not found");
	else
		var_98_object->SetProperty("locked", var_96_bool);
	
}
EMIT "Stack[-1] = 0";


// @pe
void func_566(object var_2_object, string var_3_string)
{
	func_661();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
}


void func_447(int var_5_int)
{
	var_5_int = true;
	bool var_15_bool;
	@IsLoaded(var_15_bool);
	bool var_16_bool = false;
	if(!var_15_bool) { //@nz
		bool var_18_bool;
		func_499(var_18_bool);
		if(var_18_bool != 0)
			var_16_bool = true;
	}
	if(var_16_bool != 0) {
		object var_19_object;
		func_795(var_19_object);
		@RemoveActor(var_19_object);
	}
}


// @pe
void func_833(void)
{
	@SetVariable("oob12Littlegirl1", 1);
}


void func_580(void)
{
	int var_38_int; int var_39_int; bool var_40_bool; float var_41_float; bool var_42_bool;
	@WaitForAnimEnd();
	bool var_43_bool;
	func_674(var_43_bool);
	if(!var_43_bool) //@nz
		return 14;
	int var_45_int;
	func_1019(var_45_int);
	int var_36_int;
	var_45_int = var_36_int;
	int var_37_int = 0;
	
	for(;;) {
		bool var_58_bool = false;
		if(var_37_int < 5) {
			bool var_61_bool;
			func_674(var_61_bool);
			if(var_61_bool != 0)
				var_58_bool = true;
		}
		if(var_58_bool != 0) {
			@irand(var_38_int, 3);
			if(var_38_int == 0) {
				if(var_36_int == 0) goto Label_627;
				@irand(var_39_int, var_36_int);
				string var_67_string; int var_68_int;
				var_39_int = var_68_int;
				func_1012(var_67_string, var_68_int);
				@PlayAnimation("all", var_67_string);
				@WaitForAnimEnd(var_40_bool);
				if(!var_40_bool) { //@nz
				} else {
			} else {
			if(var_38_int == 1) {
				@rand(var_41_float, 4);
				@Sleep((var_41_float + 1), var_42_bool);
				if(!var_42_bool) { //@nz
					goto Label_656;
				}
			} else if(var_37_int != 0) {
				goto Label_656;
			}
			}
					bool var_70_bool;
					func_659(var_70_bool);
					var_71_bool = !var_70_bool; //@nz
					if(var_71_bool == 0) goto Label_651;
			}
		}
	Label_656:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_651:
		@ResetAAS();
		var_37_int += 1;
	}
	
}


// @pe
void func_839(void)
{
	@SetVariable("oob12Littlegirl2", 1);
}


void func_968(bool var_142_bool, int var_143_int)
{
	object var_148_object;
	func_927(var_148_object);
	object var_146_object;
	var_148_object = var_146_object;
	object var_147_object;
	var_146_object->Find(var_143_int, var_147_object);
	if(!var_147_object) //@nz
		var_142_bool = false;
	var_147_object->Remove();
	var_142_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_86_object, object var_87_object)
{
	var_0_object = var_87_object;
	var_1_object = var_86_object;
	var_3_string = false;
	if(1 != 0) {
		object var_93_object; object var_94_object;
		var_93_object = var_1_object;
		var_94_object = var_0_object;
		func_845();
		object var_105_object; object var_106_object;
		var_105_object = var_1_object;
		var_106_object = var_0_object;
		func_884();
		object var_109_object; object var_110_object;
		var_109_object = var_1_object;
		var_110_object = var_0_object;
		func_852();
		func_162(var_87_object, "Neutral");
		var_0_object->SetMessage(522914); //@t
		var_0_object->ClearReplies(); //@t
		bool var_169_bool;
		func_890(var_1_object);
		if(var_169_bool != 0)
			var_0_object->AddReply(522915, 37091, 24105); //@t
		bool var_178_bool;
		func_902(var_1_object);
		if(var_178_bool != 0)
			var_0_object->AddReply(522927, 24119, 24118); //@t
		var_0_object->AddReply(522926, -1, 24117); //@t
		goto Label_132;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_132:
	bool var_190_bool;
	func_1010(var_190_bool);
	if(var_190_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_764(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_161;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_161:
		return 0;

	}
	
}


// @pe
void func_845(void)
{
	func_816("mnogogrannik@door2", false);
}


// @pe
void func_852(void)
{
	int var_111_int;
	func_811(var_111_int, "B_Mission5");
	if(var_111_int == 0) {
		@SetVariable("B_Mission5", 1);
		func_914();
		bool var_142_bool;
		func_968(var_142_bool, 562);
		bool var_150_bool;
		func_968(var_150_bool, 563);
		bool var_152_bool;
		func_968(var_152_bool, 564);
		bool var_154_bool;
		func_968(var_154_bool, 565);
	}
}


void func_985(int var_77_int)
{
	int var_79_int;
	@GetVariable("branch", var_79_int);
	if(var_79_int == 0) {
		var_77_int = 1;
		return 2;
	EMIT "GOTO 0x3e8";
	}
	if(var_79_int == 1) {
		var_77_int = 2;
		return 2;
	}
	var_77_int = 3;
}


void func_1002(int var_74_int)
{
	var_74_int = 515561;
}


void func_747(void)
{
	bool var_206_bool;
	@CameraSwitchToNormal();
	bool var_207_bool;
	func_1010(var_207_bool);
	if(var_207_bool != 0) {
	} else {
		@HasAnimationTrack(var_206_bool, "head");
		if(var_206_bool == 0) goto Label_763;
		@UnlookAsync("head");
	}
Label_763:
	
}


void func_1004(int var_73_int)
{
	var_73_int = 503346;
}


void func_1006(string var_75_string)
{
	var_75_string = "ui/NPC_Citizen1.png";
}


void func_1008(string var_76_string)
{
	var_76_string = "ui/NPC_Citizen1_b.png";
}


void func_1010(bool var_68_bool)
{
	var_68_bool = false;
}


void func_499(bool var_16_bool)
{
	var_16_bool = true;
}


// @pe
void func_884(void)
{
	@SetVariable("b12q01ChildsAreVisited", 1);
}


// @pe
void func_501(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_22_float, float var_23_float)
{
	bool var_24_bool;
	func_674(var_24_bool);
	if(!var_24_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_22_float;
	var_1_object = var_23_float;
	@SetTimer(10, 1.0);
	func_580();
	if(!false) //@nz
		@KillTimer(10);
}


void func_1012(string var_51_string, int var_52_int)
{
	string var_54_string = "idle";
	if(var_52_int != 0)
		var_54_string += var_52_int;
	var_54_string = var_51_string;
}


// @pe
void func_890(bool var_169_bool)
{
	int var_171_int;
	func_811(var_171_int, "oob12Littlegirl1");
	if(var_171_int == 0) {
		var_169_bool = true;
		return 0;
	}
	var_169_bool = false;
}


void func_1019(int var_45_int)
{
	int var_48_int; bool var_49_bool;
	var_48_int = 0;
	
	for(;;) {
		string var_51_string; int var_52_int;
		var_48_int = var_52_int;
		func_1012(var_51_string, var_52_int);
		@HasAnimation(var_49_bool, "all", var_51_string);
		if(!var_49_bool) //@nz
			break;
		var_48_int += 1;
	}
	var_48_int = var_45_int;
}


void func_764(string var_192_string)
{
	float var_195_float; float var_196_float;
	@lshGetAnimTimes(var_192_string, var_195_float, var_196_float);
	@lshPlayAnimation(var_195_float, var_196_float, false);
}


