// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, int var_7_int, int var_8_int, bool var_9_bool, bool var_10_bool, object var_11_object)
	{
		if(1 != 0) {
			func_601();
			if(var_11_object == 27648) {
				object var_16_object; object var_17_object;
				var_16_object = var_1_object;
				var_17_object = var_0_object;
				func_708();
				object var_43_object = var_1_object;
				func_717(var_0_object);
				object var_67_object; object var_68_object;
				var_67_object = var_1_object;
				var_68_object = var_0_object;
				func_728();
			}
			if(var_10_bool == 27645) {
				func_151(var_11_object, "Neutral");
				var_0_object->SetMessage(526360); //@t
				var_0_object->ClearReplies(); //@t
				bool var_86_bool = false;
				bool var_87_bool;
				func_734(var_1_object);
				if(var_87_bool != 0) {
					bool var_95_bool;
					func_746(var_95_bool, var_1_object);
					if(var_95_bool != 0)
						var_86_bool = true;
				}
				if(var_86_bool != 0)
					var_0_object->AddReply(526361, 30084, 27646); //@t
				var_0_object->AddReply(526364, -1, 27649); //@t
				var_0_object->AddReply(528671, -1, 30083); //@t
				return 0;
			}
			if(var_10_bool == 30084) {
				func_151(var_11_object, "Neutral");
				var_0_object->SetMessage(528672); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528673, 27647, 30085); //@t
				var_0_object->AddReply(528674, 27647, 30086); //@t
				return 0;
			}
			if(var_10_bool == 27647) {
				func_151(var_11_object, "Neutral");
				var_0_object->SetMessage(526362); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526363, -1, 27648); //@t
				return 0;
			}
			var_3_string = true;
			bool var_130_bool;
			func_682(var_130_bool);
			if(var_130_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xae";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object)
	{
	
		for(;;) {
			func_314(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, (float)300, (float)100);
			@Sleep(3);
		}
	}
	EMIT "Return(); Pop(0)";

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object)
	{
		func_379(var_9_object, var_10_object);
		int var_14_int; object var_15_object;
		var_10_object = var_15_object;
		TaskCall(0);
		func_0(var_16_object, var_14_int, var_15_object);
		TaskReturn();
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, int var_10_int)
	{
		if(var_10_int == 10) {
			bool var_13_bool;
			func_341(var_8_bool, var_9_object, var_10_int, var_13_bool);
			if(var_13_bool != 0) {
				if(!var_2_object) { //@nz
					func_590(var_4_bool);
					var_2_object = true;
				}
			} else if(var_2_object != 0) {
				@UnlookAsync("head");
				var_2_object = false;
			}
		}
	
	}

}


void func_0(object var_0_object, int var_14_int, object var_15_object)
{
	var_0_object = var_15_object;
	bool var_25_bool; object var_26_object;
	var_15_object = var_26_object;
	func_492(var_25_bool, var_26_object, 110.0);
	if(!var_25_bool) { //@nz
		var_14_int = -2;
		return 8;
	}
	object var_21_object;
	@CreateDialog(var_21_object);
	int var_72_int;
	func_676(var_72_int);
	var_21_object->SetNPCName(var_72_int);
	int var_73_int;
	func_674(var_73_int);
	var_21_object->SetNPCDescription(var_73_int);
	string var_74_string;
	func_678(var_74_string);
	var_21_object->SetPhoto(var_74_string);
	string var_75_string;
	func_680(var_75_string);
	var_21_object->SetPhoto2(var_75_string);
	int var_76_int;
	func_811(var_76_int);
	var_21_object->SetPlayerName(var_76_int);
	bool var_22_bool;
	@IsOverrideActive(var_22_bool);
	if(var_22_bool != 0) {
		var_14_int = -2;
		return 8;
	}
	@DoDialog(var_21_object);
	object var_85_object; object var_86_object;
	var_15_object = var_85_object;
	var_21_object = var_86_object;
	TaskCall(1);
	func_74(var_87_object, var_88_object, var_89_string, var_90_bool, var_85_object, var_86_object);
	TaskReturn();
	bool var_24_bool;
	var_21_object->IsDialogEnd(var_24_bool);
	
	for(;;) {
		var_145_bool = !var_24_bool; //@nz
		if(var_145_bool == 0) goto Label_63;
		@sync();
		var_21_object->IsDialogEnd(var_24_bool);
	}
	
Label_63:
	object var_146_object;
	var_15_object = var_146_object;
	func_560();
	@StopDialog(var_21_object);
	var_21_object->GetReturnValue(-1);
	int var_23_int = var_14_int;
}
EMIT "Stack[-4] = 0";


void func_770(object var_34_object)
{
	object var_36_object;
	@GetDiaryRoot(var_36_object);
	if(!var_36_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_34_object = false;
	}
	var_36_object = var_34_object;
}
EMIT "Stack[-1] = 0";


void func_393(void)
{
	int var_28_int; int var_29_int; bool var_30_bool; float var_31_float; bool var_32_bool;
	@WaitForAnimEnd();
	bool var_33_bool;
	func_487(var_33_bool);
	if(!var_33_bool) //@nz
		return 14;
	int var_35_int;
	func_691(var_35_int);
	int var_26_int;
	var_35_int = var_26_int;
	int var_27_int = 0;
	
	for(;;) {
		bool var_48_bool = false;
		if(var_27_int < 5) {
			bool var_51_bool;
			func_487(var_51_bool);
			if(var_51_bool != 0)
				var_48_bool = true;
		}
		if(var_48_bool != 0) {
			@irand(var_28_int, 3);
			if(var_28_int == 0) {
				if(var_26_int == 0) goto Label_440;
				@irand(var_29_int, var_26_int);
				string var_57_string; int var_58_int;
				var_29_int = var_58_int;
				func_684(var_57_string, var_58_int);
				@PlayAnimation("all", var_57_string);
				@WaitForAnimEnd(var_30_bool);
				if(!var_30_bool) { //@nz
				} else {
			} else {
			if(var_28_int == 1) {
				@rand(var_31_float, 4);
				@Sleep((var_31_float + 1), var_32_bool);
				if(!var_32_bool) { //@nz
					goto Label_469;
				}
			} else if(var_27_int != 0) {
				goto Label_469;
			}
			}
					bool var_60_bool;
					func_472(var_60_bool);
					var_61_bool = !var_60_bool; //@nz
					if(var_61_bool == 0) goto Label_464;
			}
		}
	Label_469:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_464:
		@ResetAAS();
		var_27_int += 1;
	}
	
}


void func_654(object var_46_object, string var_47_string, int var_48_int)
{
	object var_50_object;
	@CreateInvItem(var_50_object);
	var_50_object->SetItemName(var_47_string);
	object var_51_object; object var_52_object; int var_53_int;
	var_46_object = var_51_object;
	var_50_object = var_52_object;
	var_48_int = var_53_int;
	func_635(var_51_object, var_52_object, var_53_int);
}
EMIT "Stack[-1] = 0";


void func_783(bool var_25_bool, object var_26_object, int var_27_int)
{
	object var_34_object;
	func_770(var_34_object);
	object var_31_object;
	var_34_object = var_31_object;
	object var_32_object;
	var_31_object->Find(var_27_int, var_32_object);
	if(!var_32_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_27_int);
		var_25_bool = false;
	}
	var_32_object->AddChild(var_26_object);
	@SendWorldWndMessage(7);
	int var_33_int;
	var_26_object->GetCategory(var_33_int);
	@SetDiarySection(var_33_int);
	var_25_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void func_151(object var_2_object, string var_92_string)
{
	bool var_93_bool;
	func_682(var_93_bool);
	if(!var_93_bool) //@nz
		return 0;
	if(var_92_string == var_2_object)
		return 0;
	string var_96_string; bool var_97_bool;
	var_92_string = var_96_string;
	if(var_92_string == "")
		var_97_bool = false;
	else
		var_97_bool = true;
	func_584(var_96_string, var_97_bool);
	var_2_object = var_92_string;
	
}


void func_667(bool var_116_bool, object var_117_object, string var_118_string)
{
	int var_121_int;
	@GetInvItemByName(var_121_int, var_118_string);
	bool var_122_bool;
	var_117_object->HasItem(var_121_int, var_122_bool);
	var_122_bool = var_116_bool;
}


void func_674(int var_73_int)
{
	var_73_int = 521048;
}


void func_676(int var_72_int)
{
	var_72_int = 521047;
}


void func_678(string var_74_string)
{
	var_74_string = "ui/NPC_Citizen2.png";
}


void func_680(string var_75_string)
{
	var_75_string = "ui/NPC_Citizen2_b.png";
}


void func_682(bool var_67_bool)
{
	var_67_bool = false;
}


void func_811(int var_76_int)
{
	int var_78_int;
	@GetVariable("branch", var_78_int);
	if(var_78_int == 0) {
		var_76_int = 1;
		return 2;
	EMIT "GOTO 0x33a";
	}
	if(var_78_int == 1) {
		var_76_int = 2;
		return 2;
	}
	var_76_int = 3;
}


void func_684(string var_41_string, int var_42_int)
{
	string var_44_string = "idle";
	if(var_42_int != 0)
		var_44_string += var_42_int;
	var_44_string = var_41_string;
}


void func_560(void)
{
	bool var_148_bool;
	@CameraSwitchToNormal();
	bool var_149_bool;
	func_682(var_149_bool);
	if(var_149_bool != 0) {
	} else {
		@HasAnimationTrack(var_148_bool, "head");
		if(var_148_bool == 0) goto Label_576;
		@UnlookAsync("head");
	}
Label_576:
	
}


void func_691(int var_35_int)
{
	int var_38_int; bool var_39_bool;
	var_38_int = 0;
	
	for(;;) {
		string var_41_string; int var_42_int;
		var_38_int = var_42_int;
		func_684(var_41_string, var_42_int);
		@HasAnimation(var_39_bool, "all", var_41_string);
		if(!var_39_bool) //@nz
			break;
		var_38_int += 1;
	}
	var_38_int = var_35_int;
}


// @pe
void func_314(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_10_float, float var_11_float)
{
	bool var_12_bool;
	func_487(var_12_bool);
	if(!var_12_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_10_float;
	var_1_object = var_11_float;
	@SetTimer(10, 1.0);
	func_393();
	if(!false) //@nz
		@KillTimer(10);
}


void func_577(string var_134_string)
{
	float var_137_float; float var_138_float;
	@lshGetAnimTimes(var_134_string, var_137_float, var_138_float);
	@lshPlayAnimation(var_137_float, var_138_float, false);
}


// @pe
void func_708(void)
{
	@SetVariable("k7q02", 2);
	func_757();
}


void func_584(string var_96_string, bool var_97_bool)
{
	float var_102_float; float var_103_float;
	@lshGetAnimTimes(var_96_string, var_102_float, var_103_float);
	@lshPlayAnimation(var_102_float, var_103_float, var_97_bool);
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_85_object, object var_86_object)
{
	var_0_object = var_86_object;
	var_1_object = var_85_object;
	var_3_string = false;
	if(1 != 0) {
		func_151(var_86_object, "Neutral");
		var_0_object->SetMessage(526360); //@t
		var_0_object->ClearReplies(); //@t
		bool var_105_bool = false;
		bool var_106_bool;
		func_734(var_1_object);
		if(var_106_bool != 0) {
			bool var_114_bool;
			func_746(var_114_bool, var_1_object);
			if(var_114_bool != 0)
				var_105_bool = true;
		}
		if(var_105_bool != 0)
			var_0_object->AddReply(526361, 30084, 27646); //@t
		var_0_object->AddReply(526364, -1, 27649); //@t
		var_0_object->AddReply(528671, -1, 30083); //@t
		goto Label_121;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_121:
	bool var_132_bool;
	func_682(var_132_bool);
	if(var_132_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_577(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_150;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_150:
		return 0;

	}
	
}


// @pe
void func_717(object var_43_object)
{
	@Trace("white plet 10 is given");
	object var_46_object;
	var_43_object = var_46_object;
	func_654(var_46_object, "grass_white_plet", 10);
}


void func_590(object var_27_object)
{
	float var_30_float;
	var_27_object->GetEyesHeight(var_30_float);
	cvector var_31_cvector = [0.0, 0.0, 0.0];
	var_32_float = GetByIndex(var_31_cvector, 1);
	var_30_float = var_32_float;
	SetByIndex(var_31_cvector, 1) = var_32_float;
	@LookAsync(var_27_object, "head", var_31_cvector);
}


void func_341(object var_0_object, object var_1_object, bool var_4_bool, bool var_13_bool)
{
	if(var_4_bool == null)
		var_13_bool = false;
	float var_17_float;
	func_479(var_17_float, var_4_bool);
	float var_15_float = sqrt(var_17_float);
	if(var_2_object != 0)
		var_15_float -= var_1_object;
	var_13_bool = var_15_float < var_0_object;
}


// @pe
void func_728(void)
{
	@TriggerWorld("playsound", "giveitem");
}


void func_601(void)
{
	bool var_13_bool;
	func_682(var_13_bool);
	if(var_13_bool != 0)
		@lshStopSpeech();
}


void func_474(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_472(bool var_60_bool)
{
	var_60_bool = true;
}


// @pe
void func_734(bool var_106_bool)
{
	int var_108_int;
	func_618(var_108_int, "k7q02");
	if(var_108_int == 1)
		var_106_bool = true;
	var_106_bool = false;
}


void func_479(float var_17_float, object var_18_object)
{
	cvector var_22_cvector;
	@GetPosition(var_22_cvector);
	cvector var_23_cvector;
	var_18_object->GetPosition(var_23_cvector);
	var_17_float = (var_23_cvector - var_22_cvector) | (var_23_cvector - var_22_cvector);
}


void func_608(cvector var_52_cvector, cvector var_53_cvector)
{
	float var_56_float = sqrt(var_53_cvector | var_53_cvector);
	if(var_56_float < 0.000001)
		var_52_cvector = [0.0, 0.0, 0.0];
	var_52_cvector = var_53_cvector / var_56_float;
}


void func_487(bool var_12_bool)
{
	bool var_14_bool;
	@IsLoaded(var_14_bool);
	var_14_bool = var_12_bool;
}


// @pe
void func_746(bool var_114_bool, object var_115_object)
{
	object var_117_object;
	var_115_object = var_117_object;
	bool var_116_bool;
	func_667(var_116_bool, var_117_object, "Samopal");
	if(var_116_bool != 0) {
		var_114_bool = true;
		return 0;
	}
	var_114_bool = false;
}


void func_618(int var_108_int, string var_109_string)
{
	int var_111_int;
	@GetVariable(var_109_string, var_111_int);
	var_111_int = var_108_int;
}


void func_492(bool var_25_bool, object var_26_object, float var_27_float)
{
	cvector var_38_cvector; bool var_45_bool;
	var_26_object->GetPosition(var_38_cvector);
	float var_37_float;
	var_26_object->GetEyesHeight(var_37_float);
	var_46_float = GetByIndex(var_38_cvector, 1);
	SetByIndex(var_38_cvector, 1) = (var_46_float + var_37_float);
	cvector var_39_cvector;
	@GetPosition(var_39_cvector);
	@GetEyesHeight(var_37_float);
	var_47_float = GetByIndex(var_39_cvector, 1);
	SetByIndex(var_39_cvector, 1) = (var_47_float + var_37_float);
	cvector var_40_cvector = var_38_cvector - var_39_cvector;
	var_48_float = GetByIndex(var_40_cvector, 1);
	SetByIndex(var_40_cvector, 1) = (float)0;
	var_50_float = sqrt(var_40_cvector | var_40_cvector);
	var_40_cvector /= var_50_float;
	cvector var_41_cvector = -var_40_cvector;
	cvector var_52_cvector;
	func_608(var_52_cvector, (var_41_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_42_cvector = ((var_40_cvector * var_27_float) + (var_52_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_44_bool;
	@IsOverrideActive(var_44_bool);
	if(var_44_bool != 0)
		var_25_bool = false;
	@StopWorld();
	@CameraTransit((var_39_cvector + var_42_cvector), var_41_cvector);
	var_65_float = GetByIndex(var_42_cvector, 0);
	var_66_float = GetByIndex(var_42_cvector, 2);
	@Rotate(var_65_float, var_66_float);
	bool var_67_bool;
	func_682(var_67_bool);
	if(var_67_bool != 0) {
	} else {
		@HasAnimationTrack(var_45_bool, "head");
		if(var_45_bool == 0) goto Label_554;
		@LookAsyncCamera("head");
	}
Label_554:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_25_bool = true;
	
}


void func_623(int var_62_int, int var_63_int)
{
	object var_65_object;
	@CreateIntVector(var_65_object);
	var_65_object->add(var_62_int);
	var_65_object->add(var_63_int);
	@SendWorldWndMessage(3, var_65_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_379(object var_2_object, string var_3_string)
{
	func_474();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
}


void func_757(void)
{
	object var_21_object;
	@CreateDiaryEntry(var_21_object, 432, 2, 526370);
	bool var_25_bool; object var_26_object;
	var_21_object = var_26_object;
	func_783(var_25_bool, var_26_object, 430);
}
EMIT "Stack[-1] = 0";


void func_635(object var_51_object, object var_52_object, int var_53_int)
{
	int var_57_int;
	var_52_object->GetItemID(var_57_int);
	int var_58_int;
	@GetInvItemProperty(var_58_int, var_57_int, "Category");
	bool var_59_bool;
	var_51_object->AddItem(var_59_bool, var_52_object, var_58_int, var_53_int);
	if(!var_59_bool) { //@nz
		var_51_object->DropItems(var_52_object, var_53_int);
	} else {
		int var_62_int; int var_63_int;
		var_57_int = var_62_int;
		var_53_int = var_63_int;
		func_623(var_62_int, var_63_int);
	}
	
}


