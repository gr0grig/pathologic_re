// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, int var_7_int, int var_8_int, bool var_9_bool, bool var_10_bool, object var_11_object, bool var_12_bool, bool var_13_bool)
	{
		if(1 != 0) {
			func_787();
			if(var_13_bool == 21373) {
				object var_18_object; object var_19_object;
				var_18_object = var_1_object;
				var_19_object = var_0_object;
				func_865();
			}
			if(var_13_bool == 21383) {
				object var_24_object; object var_25_object;
				var_24_object = var_1_object;
				var_25_object = var_0_object;
				func_851();
			}
			if(var_13_bool == 21386) {
				object var_59_object; object var_60_object;
				var_59_object = var_1_object;
				var_60_object = var_0_object;
				func_851();
			}
			if(var_12_bool == 21372) {
				func_137(var_13_bool, "Neutral");
				var_0_object->SetMessage(520182); //@t
				var_0_object->ClearReplies(); //@t
				bool var_81_bool;
				func_871(var_1_object);
				if(var_81_bool != 0)
					var_0_object->AddReply(520183, 21374, 21373); //@t
				var_0_object->AddReply(520201, -1, 21393); //@t
				return 0;
			}
			if(var_12_bool == 21374) {
				func_137(var_13_bool, "Neutral");
				var_0_object->SetMessage(520184); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520185, 21376, 21375); //@t
				var_0_object->AddReply(520198, 21390, 21389); //@t
				return 0;
			}
			if(var_12_bool == 21390) {
				func_137(var_13_bool, "Neutral");
				var_0_object->SetMessage(520199); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528307, 29678, 29677); //@t
				var_0_object->AddReply(528309, 21376, 29679); //@t
				return 0;
			}
			if(var_12_bool == 29678) {
				func_137(var_13_bool, "Neutral");
				var_0_object->SetMessage(528308); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520200, 21376, 21391); //@t
				return 0;
			}
			if(var_12_bool == 21376) {
				func_137(var_13_bool, "Neutral");
				var_0_object->SetMessage(520186); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520187, 21378, 21377); //@t
				var_0_object->AddReply(520197, 21378, 21387); //@t
				return 0;
			}
			if(var_12_bool == 21378) {
				func_137(var_13_bool, "Neutral");
				var_0_object->SetMessage(520188); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520189, 21380, 21379); //@t
				var_0_object->AddReply(520194, 21385, 21384); //@t
				return 0;
			}
			if(var_12_bool == 21385) {
				func_137(var_13_bool, "Neutral");
				var_0_object->SetMessage(520195); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520196, -1, 21386); //@t
				return 0;
			}
			if(var_12_bool == 21380) {
				func_137(var_13_bool, "Neutral");
				var_0_object->SetMessage(520190); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520191, 21382, 21381); //@t
				return 0;
			}
			if(var_12_bool == 21382) {
				func_137(var_13_bool, "Neutral");
				var_0_object->SetMessage(520192); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520193, -1, 21383); //@t
				return 0;
			}
			var_3_string = true;
			bool var_163_bool;
			func_962(var_163_bool);
			if(var_163_bool != 0)
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
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool)
	{
		func_411(var_11_bool, (float)300, (float)100);
	}

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool, object var_12_object)
	{
		func_545(var_11_bool, var_12_object);
		int var_16_int; object var_17_object;
		var_12_object = var_17_object;
		TaskCall(0);
		func_0(var_18_object, var_16_int, var_17_object);
		TaskReturn();
	}

	// @pe
	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool, string var_12_string)
	{
		if(var_12_string == "cleanup")
			func_429(var_12_string);
	}

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool)
	{
		if(var_6_int != 0)
			func_545(var_10_bool, var_11_bool);
		bool var_16_bool = false;
		if(var_5_int != 0) {
			bool var_18_bool;
			func_478(var_18_bool);
			if(var_18_bool != 0)
				var_16_bool = true;
		}
		if(var_16_bool != 0) {
			object var_19_object;
			func_794(var_19_object);
			@RemoveActor(var_19_object);
		}
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool, int var_12_int)
	{
		if(var_12_int == 10) {
			bool var_15_bool;
			func_507(var_10_bool, var_11_bool, var_12_int, var_15_bool);
			if(var_15_bool != 0) {
				if(!var_2_object) { //@nz
					func_776(var_4_bool);
					var_2_object = true;
				}
			} else if(var_2_object != 0) {
				@UnlookAsync("head");
				var_2_object = false;
			}
		}
	
	}

}


void func_0(object var_0_object, int var_16_int, object var_17_object)
{
	var_0_object = var_17_object;
	bool var_27_bool; object var_28_object;
	var_17_object = var_28_object;
	func_658(var_27_bool, var_28_object, 70.0);
	if(!var_27_bool) { //@nz
		var_16_int = -2;
		return 8;
	}
	object var_23_object;
	@CreateDialog(var_23_object);
	int var_75_int;
	func_956(var_75_int);
	var_23_object->SetNPCName(var_75_int);
	int var_76_int;
	func_954(var_76_int);
	var_23_object->SetNPCDescription(var_76_int);
	string var_77_string;
	func_958(var_77_string);
	var_23_object->SetPhoto(var_77_string);
	string var_78_string;
	func_960(var_78_string);
	var_23_object->SetPhoto2(var_78_string);
	int var_79_int;
	func_937(var_79_int);
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
		var_145_bool = !var_26_bool; //@nz
		if(var_145_bool == 0) goto Label_63;
		@sync();
		var_23_object->IsDialogEnd(var_26_bool);
	}
	
Label_63:
	object var_146_object;
	var_17_object = var_146_object;
	func_727();
	@StopDialog(var_23_object);
	var_23_object->GetReturnValue(-1);
	int var_25_int = var_16_int;
}
EMIT "Stack[-4] = 0";


void func_896(object var_42_object)
{
	object var_44_object;
	@GetDiaryRoot(var_44_object);
	if(!var_44_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_42_object = false;
	}
	var_44_object = var_42_object;
}
EMIT "Stack[-1] = 0";


void func_640(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_645(float var_19_float, object var_20_object)
{
	cvector var_24_cvector;
	@GetPosition(var_24_cvector);
	cvector var_25_cvector;
	var_20_object->GetPosition(var_25_cvector);
	var_19_float = (var_25_cvector - var_24_cvector) | (var_25_cvector - var_24_cvector);
}


void func_776(object var_29_object)
{
	float var_32_float;
	var_29_object->GetEyesHeight(var_32_float);
	cvector var_33_cvector = [0.0, 0.0, 0.0];
	var_34_float = GetByIndex(var_33_cvector, 1);
	var_32_float = var_34_float;
	SetByIndex(var_33_cvector, 1) = var_34_float;
	@LookAsync(var_29_object, "head", var_33_cvector);
}


// @pe
void func_137(object var_2_object, string var_95_string)
{
	bool var_96_bool;
	func_962(var_96_bool);
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
	func_761(var_99_string, var_100_bool);
	var_2_object = var_95_string;
	
}


void func_653(bool var_23_bool)
{
	bool var_25_bool;
	@IsLoaded(var_25_bool);
	var_25_bool = var_23_bool;
}


void func_909(bool var_33_bool, object var_34_object, int var_35_int)
{
	object var_42_object;
	func_896(var_42_object);
	object var_39_object;
	var_42_object = var_39_object;
	object var_40_object;
	var_39_object->Find(var_35_int, var_40_object);
	if(!var_40_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_35_int);
		var_33_bool = false;
	}
	var_40_object->AddChild(var_34_object);
	@SendWorldWndMessage(7);
	int var_41_int;
	var_34_object->GetCategory(var_41_int);
	@SetDiarySection(var_41_int);
	var_33_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_658(bool var_27_bool, object var_28_object, float var_29_float)
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
	func_800(var_54_cvector, (var_43_cvector ^ [0.0, 1.0, 0.0]));
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
	func_962(var_70_bool);
	if(var_70_bool != 0) {
	} else {
		@HasAnimationTrack(var_47_bool, "head");
		if(var_47_bool == 0) goto Label_721;
		@LookAsyncCamera("head");
	}
Label_721:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_27_bool = true;
	
}


void func_787(void)
{
	bool var_15_bool;
	func_962(var_15_bool);
	if(var_15_bool != 0)
		@lshStopSpeech();
}


void func_794(object var_19_object)
{
	object var_21_object;
	@self(var_21_object);
	var_21_object = var_19_object;
}
EMIT "Stack[-1] = 0";


void func_411(int var_6_int, float var_12_float, float var_13_float)
{
	float var_14_float; bool var_15_bool; float var_16_float; bool var_17_bool;
	var_6_int = false;
	
	for(;;) {
		@rand(var_16_float, 3);
		@Sleep((var_16_float + 3), var_17_bool);
		var_6_int = true;
		float var_21_float; float var_22_float;
		var_12_float = var_21_float;
		func_480(var_22_float, var_14_float, var_15_bool, var_16_float, var_17_bool, var_21_float, var_22_float);
		var_6_int = false;
	}
}
EMIT "Return(); Pop(4)";


void func_800(cvector var_54_cvector, cvector var_55_cvector)
{
	float var_58_float = sqrt(var_55_cvector | var_55_cvector);
	if(var_58_float < 0.000001)
		var_54_cvector = [0.0, 0.0, 0.0];
	var_54_cvector = var_55_cvector / var_58_float;
}


// @pe
void func_545(object var_2_object, string var_3_string)
{
	func_640();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
}


void func_937(int var_79_int)
{
	int var_81_int;
	@GetVariable("branch", var_81_int);
	if(var_81_int == 0) {
		var_79_int = 1;
		return 2;
	EMIT "GOTO 0x3b8";
	}
	if(var_81_int == 1) {
		var_79_int = 2;
		return 2;
	}
	var_79_int = 3;
}


void func_810(int var_115_int, string var_116_string)
{
	int var_118_int;
	@GetVariable(var_116_string, var_118_int);
	var_118_int = var_115_int;
}


void func_429(int var_5_int)
{
	var_5_int = true;
	bool var_15_bool = false;
	bool var_16_bool;
	func_653(var_16_bool);
	if(!var_16_bool) { //@nz
		bool var_20_bool;
		func_478(var_20_bool);
		if(var_20_bool != 0)
			var_15_bool = true;
	}
	if(var_15_bool != 0) {
		object var_21_object;
		func_794(var_21_object);
		@RemoveActor(var_21_object);
	}
}


void func_559(void)
{
	int var_39_int; int var_40_int; bool var_41_bool; float var_42_float; bool var_43_bool;
	@WaitForAnimEnd();
	bool var_44_bool;
	func_653(var_44_bool);
	if(!var_44_bool) //@nz
		return 14;
	int var_46_int;
	func_834(var_46_int);
	int var_37_int;
	var_46_int = var_37_int;
	int var_38_int = 0;
	
	for(;;) {
		bool var_59_bool = false;
		if(var_38_int < 5) {
			bool var_62_bool;
			func_653(var_62_bool);
			if(var_62_bool != 0)
				var_59_bool = true;
		}
		if(var_59_bool != 0) {
			@irand(var_39_int, 3);
			if(var_39_int == 0) {
				if(var_37_int == 0) goto Label_606;
				@irand(var_40_int, var_37_int);
				string var_68_string; int var_69_int;
				var_40_int = var_69_int;
				func_827(var_68_string, var_69_int);
				@PlayAnimation("all", var_68_string);
				@WaitForAnimEnd(var_41_bool);
				if(!var_41_bool) { //@nz
				} else {
			} else {
			if(var_39_int == 1) {
				@rand(var_42_float, 4);
				@Sleep((var_42_float + 1), var_43_bool);
				if(!var_43_bool) { //@nz
					goto Label_635;
				}
			} else if(var_38_int != 0) {
				goto Label_635;
			}
			}
					bool var_71_bool;
					func_638(var_71_bool);
					var_72_bool = !var_71_bool; //@nz
					if(var_72_bool == 0) goto Label_630;
			}
		}
	Label_635:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_630:
		@ResetAAS();
		var_38_int += 1;
	}
	
}


void func_815(bool var_51_bool, string var_52_string, string var_53_string)
{
	object var_55_object;
	@FindActor(var_55_object, var_52_string);
	if(var_55_object == null)
		var_51_bool = false;
	@Trigger(var_55_object, var_53_string);
	var_51_bool = true;
}
EMIT "Stack[-1] = 0";


void func_954(int var_76_int)
{
	var_76_int = 518716;
}


void func_827(string var_52_string, int var_53_int)
{
	string var_55_string = "idle";
	if(var_53_int != 0)
		var_55_string += var_53_int;
	var_55_string = var_52_string;
}


void func_956(int var_75_int)
{
	var_75_int = 518715;
}


void func_958(string var_77_string)
{
	var_77_string = "ui/NPC_Prophet.png";
}


void func_960(string var_78_string)
{
	var_78_string = "ui/NPC_Prophet_b.png";
}


void func_962(bool var_70_bool)
{
	var_70_bool = false;
}


void func_834(int var_46_int)
{
	int var_49_int; bool var_50_bool;
	var_49_int = 0;
	
	for(;;) {
		string var_52_string; int var_53_int;
		var_49_int = var_53_int;
		func_827(var_52_string, var_53_int);
		@HasAnimation(var_50_bool, "all", var_52_string);
		if(!var_50_bool) //@nz
			break;
		var_49_int += 1;
	}
	var_49_int = var_46_int;
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_88_object, object var_89_object)
{
	var_0_object = var_89_object;
	var_3_string = false;
	if(1 != 0) {
		func_137(var_89_object, "Neutral");
		var_0_object->SetMessage(520182); //@t
		var_0_object->ClearReplies(); //@t
		bool var_113_bool;
		func_871(var_88_object);
		if(var_113_bool != 0)
			var_0_object->AddReply(520183, 21374, 21373); //@t
		var_0_object->AddReply(520201, -1, 21393); //@t
		goto Label_107;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_107:
	bool var_127_bool;
	func_962(var_127_bool);
	if(var_127_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_745(var_2_object);
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
void func_851(void)
{
	@SetVariable("b5q02", 2);
	func_883();
	bool var_51_bool;
	func_815(var_51_bool, "quest_b5_02", "remove_prophet");
}


void func_727(void)
{
	bool var_148_bool;
	@CameraSwitchToNormal(true);
	bool var_150_bool;
	func_962(var_150_bool);
	if(var_150_bool != 0) {
	} else {
		@HasAnimationTrack(var_148_bool, "head");
		if(var_148_bool == 0) goto Label_744;
		@UnlookAsync("head");
	}
Label_744:
	
}


void func_478(bool var_18_bool)
{
	var_18_bool = true;
}


// @pe
void func_480(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_21_float, float var_22_float)
{
	bool var_23_bool;
	func_653(var_23_bool);
	if(!var_23_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_21_float;
	var_1_object = var_22_float;
	@SetTimer(10, 1.0);
	func_559();
	if(!false) //@nz
		@KillTimer(10);
}


// @pe
void func_865(void)
{
	@SetVariable("oob5Prophet1", 1);
}


// @pe
void func_871(bool var_113_bool)
{
	int var_115_int;
	func_810(var_115_int, "oob5Prophet1");
	if(var_115_int == 0) {
		var_113_bool = true;
		return 0;
	}
	var_113_bool = false;
}


void func_745(string var_129_string)
{
	bool var_133_bool; float var_134_float; float var_135_float;
	@lshHasAnimation(var_133_bool, var_129_string);
	if(var_133_bool != 0) {
		@lshGetAnimTimes(var_129_string, var_134_float, var_135_float);
		@lshPlayAnimation(var_134_float, var_135_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_129_string);
	}
	
}


void func_883(void)
{
	object var_29_object;
	@CreateDiaryEntry(var_29_object, 251, 2, 520667);
	bool var_33_bool; object var_34_object;
	var_29_object = var_34_object;
	func_909(var_33_bool, var_34_object, 249);
}
EMIT "Stack[-1] = 0";


void func_761(string var_99_string, bool var_100_bool)
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


void func_507(object var_0_object, object var_1_object, bool var_4_bool, bool var_15_bool)
{
	if(var_4_bool == null)
		var_15_bool = false;
	float var_19_float;
	func_645(var_19_float, var_4_bool);
	float var_17_float = sqrt(var_19_float);
	if(var_2_object != 0)
		var_17_float -= var_1_object;
	var_15_bool = var_17_float < var_0_object;
}


void func_638(bool var_71_bool)
{
	var_71_bool = true;
}


