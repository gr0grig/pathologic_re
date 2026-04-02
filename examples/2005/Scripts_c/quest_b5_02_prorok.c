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
			func_777();
			if(var_12_bool == 21373) {
				object var_17_object; object var_18_object;
				var_17_object = var_1_object;
				var_18_object = var_0_object;
				func_855();
			}
			if(var_12_bool == 21383) {
				object var_23_object; object var_24_object;
				var_23_object = var_1_object;
				var_24_object = var_0_object;
				func_841();
			}
			if(var_12_bool == 21386) {
				object var_58_object; object var_59_object;
				var_58_object = var_1_object;
				var_59_object = var_0_object;
				func_841();
			}
			if(var_11_object == 21372) {
				func_137(var_12_bool, "Neutral");
				var_0_object->SetMessage(520182); //@t
				var_0_object->ClearReplies(); //@t
				bool var_75_bool;
				func_861(var_1_object);
				if(var_75_bool != 0)
					var_0_object->AddReply(520183, 21374, 21373); //@t
				var_0_object->AddReply(520201, -1, 21393); //@t
				return 0;
			}
			if(var_11_object == 21374) {
				func_137(var_12_bool, "Neutral");
				var_0_object->SetMessage(520184); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520185, 21376, 21375); //@t
				var_0_object->AddReply(520198, 21390, 21389); //@t
				return 0;
			}
			if(var_11_object == 21390) {
				func_137(var_12_bool, "Neutral");
				var_0_object->SetMessage(520199); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528307, 29678, 29677); //@t
				var_0_object->AddReply(528309, -1, 29679); //@t
				return 0;
			}
			if(var_11_object == 29678) {
				func_137(var_12_bool, "Neutral");
				var_0_object->SetMessage(528308); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520200, 21376, 21391); //@t
				return 0;
			}
			if(var_11_object == 21376) {
				func_137(var_12_bool, "Neutral");
				var_0_object->SetMessage(520186); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520187, 21378, 21377); //@t
				var_0_object->AddReply(520197, 21378, 21387); //@t
				return 0;
			}
			if(var_11_object == 21378) {
				func_137(var_12_bool, "Neutral");
				var_0_object->SetMessage(520188); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520189, 21380, 21379); //@t
				var_0_object->AddReply(520194, 21385, 21384); //@t
				return 0;
			}
			if(var_11_object == 21385) {
				func_137(var_12_bool, "Neutral");
				var_0_object->SetMessage(520195); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520196, -1, 21386); //@t
				return 0;
			}
			if(var_11_object == 21380) {
				func_137(var_12_bool, "Neutral");
				var_0_object->SetMessage(520190); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520191, 21382, 21381); //@t
				return 0;
			}
			if(var_11_object == 21382) {
				func_137(var_12_bool, "Neutral");
				var_0_object->SetMessage(520192); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520193, -1, 21383); //@t
				return 0;
			}
			var_3_string = true;
			bool var_157_bool;
			func_952(var_157_bool);
			if(var_157_bool != 0)
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
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool)
	{
		func_411((float)300, (float)100);
	}

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object)
	{
		func_555(var_10_bool, var_11_object);
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
			func_436(var_11_string);
	}

	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool)
	{
		@StopGroup0();
		@sync();
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool)
	{
		func_555(var_9_object, var_10_bool);
		bool var_14_bool = false;
		if(var_5_int != 0) {
			bool var_16_bool;
			func_488(var_16_bool);
			if(var_16_bool != 0)
				var_14_bool = true;
		}
		if(var_14_bool != 0) {
			object var_17_object;
			func_784(var_17_object);
			@RemoveActor(var_17_object);
		}
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, int var_11_int)
	{
		if(var_11_int == 10) {
			bool var_14_bool;
			func_517(var_9_object, var_10_bool, var_11_int, var_14_bool);
			if(var_14_bool != 0) {
				if(!var_2_object) { //@nz
					func_766(var_4_bool);
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
	func_668(var_26_bool, var_27_object, 70.0);
	if(!var_26_bool) { //@nz
		var_15_int = -2;
		return 8;
	}
	object var_22_object;
	@CreateDialog(var_22_object);
	int var_73_int;
	func_946(var_73_int);
	var_22_object->SetNPCName(var_73_int);
	int var_74_int;
	func_944(var_74_int);
	var_22_object->SetNPCDescription(var_74_int);
	string var_75_string;
	func_948(var_75_string);
	var_22_object->SetPhoto(var_75_string);
	string var_76_string;
	func_950(var_76_string);
	var_22_object->SetPhoto2(var_76_string);
	int var_77_int;
	func_927(var_77_int);
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
		var_133_bool = !var_25_bool; //@nz
		if(var_133_bool == 0) goto Label_63;
		@sync();
		var_22_object->IsDialogEnd(var_25_bool);
	}
	
Label_63:
	object var_134_object;
	var_16_object = var_134_object;
	func_736();
	@StopDialog(var_22_object);
	var_22_object->GetReturnValue(-1);
	int var_24_int = var_15_int;
}
EMIT "Stack[-4] = 0";


void func_899(bool var_32_bool, object var_33_object, int var_34_int)
{
	object var_41_object;
	func_886(var_41_object);
	object var_38_object;
	var_41_object = var_38_object;
	object var_39_object;
	var_38_object->Find(var_34_int, var_39_object);
	if(!var_39_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_34_int);
		var_32_bool = false;
	}
	var_39_object->AddChild(var_33_object);
	@SendWorldWndMessage(7);
	int var_40_int;
	var_33_object->GetCategory(var_40_int);
	@SetDiarySection(var_40_int);
	var_32_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_517(object var_0_object, object var_1_object, bool var_4_bool, bool var_14_bool)
{
	if(var_4_bool == null)
		var_14_bool = false;
	float var_18_float;
	func_655(var_18_float, var_4_bool);
	float var_16_float = sqrt(var_18_float);
	if(var_2_object != 0)
		var_16_float -= var_1_object;
	var_14_bool = var_16_float < var_0_object;
}


void func_648(bool var_70_bool)
{
	var_70_bool = true;
}


// @pe
void func_137(object var_2_object, string var_93_string)
{
	bool var_94_bool;
	func_952(var_94_bool);
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
	func_760(var_97_string, var_98_bool);
	var_2_object = var_93_string;
	
}


void func_777(void)
{
	bool var_14_bool;
	func_952(var_14_bool);
	if(var_14_bool != 0)
		@lshStopSpeech();
}


void func_650(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_655(float var_18_float, object var_19_object)
{
	cvector var_23_cvector;
	@GetPosition(var_23_cvector);
	cvector var_24_cvector;
	var_19_object->GetPosition(var_24_cvector);
	var_18_float = (var_24_cvector - var_23_cvector) | (var_24_cvector - var_23_cvector);
}


void func_784(object var_17_object)
{
	object var_19_object;
	@self(var_19_object);
	var_19_object = var_17_object;
}
EMIT "Stack[-1] = 0";


void func_790(cvector var_53_cvector, cvector var_54_cvector)
{
	float var_57_float = sqrt(var_54_cvector | var_54_cvector);
	if(var_57_float < 0.000001)
		var_53_cvector = [0.0, 0.0, 0.0];
	var_53_cvector = var_54_cvector / var_57_float;
}


void func_663(bool var_15_bool)
{
	bool var_17_bool;
	@IsLoaded(var_17_bool);
	var_17_bool = var_15_bool;
}


void func_411(float var_11_float, float var_12_float)
{
	
Label_412:
	for(;;) {
		bool var_15_bool;
		func_663(var_15_bool);
		var_18_bool = !var_15_bool; //@nz
		if(var_18_bool == 0) goto Label_420;
		@Hold();
	}
	
Label_420:
	float var_14_float;
	@rand(var_14_float, 3);
	@Sleep(var_14_float + 3);
	float var_22_float; float var_23_float;
	float var_13_float;
	func_490(var_10_bool, var_22_float, var_23_float, var_13_float, var_14_float, var_22_float, var_23_float);
	@sync();
	goto Label_412;
}
EMIT "Return(); Pop(2)";


void func_668(bool var_26_bool, object var_27_object, float var_28_float)
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
	func_790(var_53_cvector, (var_42_cvector ^ [0.0, 1.0, 0.0]));
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
	func_952(var_68_bool);
	if(var_68_bool != 0) {
	} else {
		@HasAnimationTrack(var_46_bool, "head");
		if(var_46_bool == 0) goto Label_730;
		@LookAsyncCamera("head");
	}
Label_730:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_26_bool = true;
	
}


void func_927(int var_77_int)
{
	int var_79_int;
	@GetVariable("branch", var_79_int);
	if(var_79_int == 0) {
		var_77_int = 1;
		return 2;
	EMIT "GOTO 0x3ae";
	}
	if(var_79_int == 1) {
		var_77_int = 2;
		return 2;
	}
	var_77_int = 3;
}


void func_800(int var_108_int, string var_109_string)
{
	int var_111_int;
	@GetVariable(var_109_string, var_111_int);
	var_111_int = var_108_int;
}


void func_805(bool var_50_bool, string var_51_string, string var_52_string)
{
	object var_54_object;
	@FindActor(var_54_object, var_51_string);
	if(var_54_object == null)
		var_50_bool = false;
	@Trigger(var_54_object, var_52_string);
	var_50_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_555(object var_2_object, string var_3_string)
{
	func_650();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
}


void func_944(int var_74_int)
{
	var_74_int = 518716;
}


void func_817(string var_51_string, int var_52_int)
{
	string var_54_string = "idle";
	if(var_52_int != 0)
		var_54_string += var_52_int;
	var_54_string = var_51_string;
}


void func_946(int var_73_int)
{
	var_73_int = 518715;
}


void func_948(string var_75_string)
{
	var_75_string = "ui/NPC_Citizen3.png";
}


void func_436(int var_5_int)
{
	var_5_int = true;
	bool var_15_bool;
	@IsLoaded(var_15_bool);
	bool var_16_bool = false;
	if(!var_15_bool) { //@nz
		bool var_18_bool;
		func_488(var_18_bool);
		if(var_18_bool != 0)
			var_16_bool = true;
	}
	if(var_16_bool != 0) {
		object var_19_object;
		func_784(var_19_object);
		@RemoveActor(var_19_object);
	}
}


void func_950(string var_76_string)
{
	var_76_string = "ui/NPC_Citizen3_b.png";
}


void func_952(bool var_68_bool)
{
	var_68_bool = false;
}


void func_569(void)
{
	int var_38_int; int var_39_int; bool var_40_bool; float var_41_float; bool var_42_bool;
	@WaitForAnimEnd();
	bool var_43_bool;
	func_663(var_43_bool);
	if(!var_43_bool) //@nz
		return 14;
	int var_45_int;
	func_824(var_45_int);
	int var_36_int;
	var_45_int = var_36_int;
	int var_37_int = 0;
	
	for(;;) {
		bool var_58_bool = false;
		if(var_37_int < 5) {
			bool var_61_bool;
			func_663(var_61_bool);
			if(var_61_bool != 0)
				var_58_bool = true;
		}
		if(var_58_bool != 0) {
			@irand(var_38_int, 3);
			if(var_38_int == 0) {
				if(var_36_int == 0) goto Label_616;
				@irand(var_39_int, var_36_int);
				string var_67_string; int var_68_int;
				var_39_int = var_68_int;
				func_817(var_67_string, var_68_int);
				@PlayAnimation("all", var_67_string);
				@WaitForAnimEnd(var_40_bool);
				if(!var_40_bool) { //@nz
				} else {
			} else {
			if(var_38_int == 1) {
				@rand(var_41_float, 4);
				@Sleep((var_41_float + 1), var_42_bool);
				if(!var_42_bool) { //@nz
					goto Label_645;
				}
			} else if(var_37_int != 0) {
				goto Label_645;
			}
			}
					bool var_70_bool;
					func_648(var_70_bool);
					var_71_bool = !var_70_bool; //@nz
					if(var_71_bool == 0) goto Label_640;
			}
		}
	Label_645:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_640:
		@ResetAAS();
		var_37_int += 1;
	}
	
}


void func_824(int var_45_int)
{
	int var_48_int; bool var_49_bool;
	var_48_int = 0;
	
	for(;;) {
		string var_51_string; int var_52_int;
		var_48_int = var_52_int;
		func_817(var_51_string, var_52_int);
		@HasAnimation(var_49_bool, "all", var_51_string);
		if(!var_49_bool) //@nz
			break;
		var_48_int += 1;
	}
	var_48_int = var_45_int;
}


// @pe
void func_841(void)
{
	@SetVariable("b5q02", 2);
	func_873();
	bool var_50_bool;
	func_805(var_50_bool, "quest_b5_02", "remove_prophet");
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_86_object, object var_87_object)
{
	var_0_object = var_87_object;
	var_3_string = false;
	if(1 != 0) {
		func_137(var_87_object, "Neutral");
		var_0_object->SetMessage(520182); //@t
		var_0_object->ClearReplies(); //@t
		bool var_106_bool;
		func_861(var_86_object);
		if(var_106_bool != 0)
			var_0_object->AddReply(520183, 21374, 21373); //@t
		var_0_object->AddReply(520201, -1, 21393); //@t
		goto Label_107;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_107:
	bool var_120_bool;
	func_952(var_120_bool);
	if(var_120_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_753(var_2_object);
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


// @pe
void func_855(void)
{
	@SetVariable("oob5Prophet1", 1);
}


// @pe
void func_861(bool var_106_bool)
{
	int var_108_int;
	func_800(var_108_int, "oob5Prophet1");
	if(var_108_int == 0) {
		var_106_bool = true;
		return 0;
	}
	var_106_bool = false;
}


void func_736(void)
{
	bool var_136_bool;
	@CameraSwitchToNormal();
	bool var_137_bool;
	func_952(var_137_bool);
	if(var_137_bool != 0) {
	} else {
		@HasAnimationTrack(var_136_bool, "head");
		if(var_136_bool == 0) goto Label_752;
		@UnlookAsync("head");
	}
Label_752:
	
}


void func_488(bool var_16_bool)
{
	var_16_bool = true;
}


void func_873(void)
{
	object var_28_object;
	@CreateDiaryEntry(var_28_object, 251, 2, 520667);
	bool var_32_bool; object var_33_object;
	var_28_object = var_33_object;
	func_899(var_32_bool, var_33_object, 249);
}
EMIT "Stack[-1] = 0";


// @pe
void func_490(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_22_float, float var_23_float)
{
	bool var_24_bool;
	func_663(var_24_bool);
	if(!var_24_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_22_float;
	var_1_object = var_23_float;
	@SetTimer(10, 1.0);
	func_569();
	if(!false) //@nz
		@KillTimer(10);
}


void func_753(string var_122_string)
{
	float var_125_float; float var_126_float;
	@lshGetAnimTimes(var_122_string, var_125_float, var_126_float);
	@lshPlayAnimation(var_125_float, var_126_float, false);
}


void func_886(object var_41_object)
{
	object var_43_object;
	@GetDiaryRoot(var_43_object);
	if(!var_43_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_41_object = false;
	}
	var_43_object = var_41_object;
}
EMIT "Stack[-1] = 0";


void func_760(string var_97_string, bool var_98_bool)
{
	float var_103_float; float var_104_float;
	@lshGetAnimTimes(var_97_string, var_103_float, var_104_float);
	@lshPlayAnimation(var_103_float, var_104_float, var_98_bool);
}


void func_766(object var_28_object)
{
	float var_31_float;
	var_28_object->GetEyesHeight(var_31_float);
	cvector var_32_cvector = [0.0, 0.0, 0.0];
	var_33_float = GetByIndex(var_32_cvector, 1);
	var_31_float = var_33_float;
	SetByIndex(var_32_cvector, 1) = var_33_float;
	@LookAsync(var_28_object, "head", var_32_cvector);
}


