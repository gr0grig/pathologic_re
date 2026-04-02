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
			func_626();
			if(var_11_object == 27648) {
				object var_16_object; object var_17_object;
				var_16_object = var_1_object;
				var_17_object = var_0_object;
				func_733();
				object var_43_object = var_1_object;
				func_742(var_0_object);
				object var_67_object; object var_68_object;
				var_67_object = var_1_object;
				var_68_object = var_0_object;
				func_753();
				object var_71_object = var_1_object;
				func_759(var_0_object);
			}
			if(var_10_bool == 27645) {
				func_151(var_11_object, "Neutral");
				var_0_object->SetMessage(526360); //@t
				var_0_object->ClearReplies(); //@t
				bool var_97_bool = false;
				bool var_98_bool;
				func_765(var_1_object);
				if(var_98_bool != 0) {
					bool var_106_bool;
					func_777(var_106_bool, var_1_object);
					if(var_106_bool != 0)
						var_97_bool = true;
				}
				if(var_97_bool != 0)
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
			bool var_141_bool;
			func_707(var_141_bool);
			if(var_141_bool != 0)
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
			func_319(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, (float)300, (float)100);
			@Sleep(3);
		}
	}
	EMIT "Return(); Pop(0)";

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object)
	{
		func_384(var_9_object, var_10_object);
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
			func_346(var_8_bool, var_9_object, var_10_int, var_13_bool);
			if(var_13_bool != 0) {
				if(!var_2_object) { //@nz
					func_615(var_4_bool);
					var_2_object = true;
				}
			} else if(var_2_object != 0) {
				@UnlookAsync("head");
				var_2_object = false;
			}
		}
	
	}

}


// @pe
void func_384(object var_2_object, string var_3_string)
{
	func_479();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
}


void func_0(object var_0_object, int var_14_int, object var_15_object)
{
	var_0_object = var_15_object;
	bool var_25_bool; object var_26_object;
	var_15_object = var_26_object;
	func_497(var_25_bool, var_26_object, 110.0);
	if(!var_25_bool) { //@nz
		var_14_int = -2;
		return 8;
	}
	object var_21_object;
	@CreateDialog(var_21_object);
	int var_73_int;
	func_701(var_73_int);
	var_21_object->SetNPCName(var_73_int);
	int var_74_int;
	func_699(var_74_int);
	var_21_object->SetNPCDescription(var_74_int);
	string var_75_string;
	func_703(var_75_string);
	var_21_object->SetPhoto(var_75_string);
	string var_76_string;
	func_705(var_76_string);
	var_21_object->SetPhoto2(var_76_string);
	int var_77_int;
	func_842(var_77_int);
	var_21_object->SetPlayerName(var_77_int);
	bool var_22_bool;
	@IsOverrideActive(var_22_bool);
	if(var_22_bool != 0) {
		var_14_int = -2;
		return 8;
	}
	@DoDialog(var_21_object);
	object var_86_object; object var_87_object;
	var_15_object = var_86_object;
	var_21_object = var_87_object;
	TaskCall(1);
	func_74(var_88_object, var_89_object, var_90_string, var_91_bool, var_86_object, var_87_object);
	TaskReturn();
	bool var_24_bool;
	var_21_object->IsDialogEnd(var_24_bool);
	
	for(;;) {
		var_156_bool = !var_24_bool; //@nz
		if(var_156_bool == 0) goto Label_63;
		@sync();
		var_21_object->IsDialogEnd(var_24_bool);
	}
	
Label_63:
	object var_157_object;
	var_15_object = var_157_object;
	func_566();
	@StopDialog(var_21_object);
	var_21_object->GetReturnValue(-1);
	int var_23_int = var_14_int;
}
EMIT "Stack[-4] = 0";


void func_643(int var_114_int, string var_115_string)
{
	int var_117_int;
	@GetVariable(var_115_string, var_117_int);
	var_117_int = var_114_int;
}


void func_648(int var_62_int, int var_63_int)
{
	object var_65_object;
	@CreateIntVector(var_65_object);
	var_65_object->add(var_62_int);
	var_65_object->add(var_63_int);
	@SendWorldWndMessage(3, var_65_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_777(bool var_120_bool, object var_121_object)
{
	object var_123_object;
	var_121_object = var_123_object;
	bool var_122_bool;
	func_692(var_122_bool, var_123_object, "Samopal");
	if(var_122_bool != 0) {
		var_120_bool = true;
		return 0;
	}
	var_120_bool = false;
}


void func_398(void)
{
	int var_28_int; int var_29_int; bool var_30_bool; float var_31_float; bool var_32_bool;
	@WaitForAnimEnd();
	bool var_33_bool;
	func_492(var_33_bool);
	if(!var_33_bool) //@nz
		return 14;
	int var_35_int;
	func_716(var_35_int);
	int var_26_int;
	var_35_int = var_26_int;
	int var_27_int = 0;
	
	for(;;) {
		bool var_48_bool = false;
		if(var_27_int < 5) {
			bool var_51_bool;
			func_492(var_51_bool);
			if(var_51_bool != 0)
				var_48_bool = true;
		}
		if(var_48_bool != 0) {
			@irand(var_28_int, 3);
			if(var_28_int == 0) {
				if(var_26_int == 0) goto Label_445;
				@irand(var_29_int, var_26_int);
				string var_57_string; int var_58_int;
				var_29_int = var_58_int;
				func_709(var_57_string, var_58_int);
				@PlayAnimation("all", var_57_string);
				@WaitForAnimEnd(var_30_bool);
				if(!var_30_bool) { //@nz
				} else {
			} else {
			if(var_28_int == 1) {
				@rand(var_31_float, 4);
				@Sleep((var_31_float + 1), var_32_bool);
				if(!var_32_bool) { //@nz
					goto Label_474;
				}
			} else if(var_27_int != 0) {
				goto Label_474;
			}
			}
					bool var_60_bool;
					func_477(var_60_bool);
					var_61_bool = !var_60_bool; //@nz
					if(var_61_bool == 0) goto Label_469;
			}
		}
	Label_474:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_469:
		@ResetAAS();
		var_27_int += 1;
	}
	
}


void func_660(object var_51_object, object var_52_object, int var_53_int)
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
		func_648(var_62_int, var_63_int);
	}
	
}


void func_788(void)
{
	object var_21_object;
	@CreateDiaryEntry(var_21_object, 432, 2, 526370);
	bool var_25_bool; object var_26_object;
	var_21_object = var_26_object;
	func_814(var_25_bool, var_26_object, 430);
}
EMIT "Stack[-1] = 0";


// @pe
void func_151(object var_2_object, string var_93_string)
{
	bool var_94_bool;
	func_707(var_94_bool);
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
	func_600(var_97_string, var_98_bool);
	var_2_object = var_93_string;
	
}


void func_801(object var_34_object)
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


void func_679(object var_46_object, string var_47_string, int var_48_int)
{
	object var_50_object;
	@CreateInvItem(var_50_object);
	var_50_object->SetItemName(var_47_string);
	object var_51_object; object var_52_object; int var_53_int;
	var_46_object = var_51_object;
	var_50_object = var_52_object;
	var_48_int = var_53_int;
	func_660(var_51_object, var_52_object, var_53_int);
}
EMIT "Stack[-1] = 0";


void func_814(bool var_25_bool, object var_26_object, int var_27_int)
{
	object var_34_object;
	func_801(var_34_object);
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


void func_692(bool var_122_bool, object var_123_object, string var_124_string)
{
	int var_127_int;
	@GetInvItemByName(var_127_int, var_124_string);
	bool var_128_bool;
	var_123_object->HasItem(var_127_int, var_128_bool);
	var_128_bool = var_122_bool;
}


void func_566(void)
{
	bool var_159_bool;
	@CameraSwitchToNormal(true);
	bool var_161_bool;
	func_707(var_161_bool);
	if(var_161_bool != 0) {
	} else {
		@HasAnimationTrack(var_159_bool, "head");
		if(var_159_bool == 0) goto Label_583;
		@UnlookAsync("head");
	}
Label_583:
	
}


void func_699(int var_74_int)
{
	var_74_int = 521048;
}


void func_701(int var_73_int)
{
	var_73_int = 521047;
}


// @pe
void func_319(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_10_float, float var_11_float)
{
	bool var_12_bool;
	func_492(var_12_bool);
	if(!var_12_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_10_float;
	var_1_object = var_11_float;
	@SetTimer(10, 1.0);
	func_398();
	if(!false) //@nz
		@KillTimer(10);
}


void func_703(string var_75_string)
{
	var_75_string = "ui/NPC_Morlok.png";
}


void func_705(string var_76_string)
{
	var_76_string = "ui/NPC_Morlok_b.png";
}


void func_707(bool var_68_bool)
{
	var_68_bool = false;
}


void func_709(string var_41_string, int var_42_int)
{
	string var_44_string = "idle";
	if(var_42_int != 0)
		var_44_string += var_42_int;
	var_44_string = var_41_string;
}


void func_584(string var_140_string)
{
	bool var_144_bool; float var_145_float; float var_146_float;
	@lshHasAnimation(var_144_bool, var_140_string);
	if(var_144_bool != 0) {
		@lshGetAnimTimes(var_140_string, var_145_float, var_146_float);
		@lshPlayAnimation(var_145_float, var_146_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_140_string);
	}
	
}


void func_842(int var_77_int)
{
	int var_79_int;
	@GetVariable("branch", var_79_int);
	if(var_79_int == 0) {
		var_77_int = 1;
		return 2;
	EMIT "GOTO 0x359";
	}
	if(var_79_int == 1) {
		var_77_int = 2;
		return 2;
	}
	var_77_int = 3;
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_86_object, object var_87_object)
{
	var_0_object = var_87_object;
	var_1_object = var_86_object;
	var_3_string = false;
	if(1 != 0) {
		func_151(var_87_object, "Neutral");
		var_0_object->SetMessage(526360); //@t
		var_0_object->ClearReplies(); //@t
		bool var_111_bool = false;
		bool var_112_bool;
		func_765(var_1_object);
		if(var_112_bool != 0) {
			bool var_120_bool;
			func_777(var_120_bool, var_1_object);
			if(var_120_bool != 0)
				var_111_bool = true;
		}
		if(var_111_bool != 0)
			var_0_object->AddReply(526361, 30084, 27646); //@t
		var_0_object->AddReply(526364, -1, 27649); //@t
		var_0_object->AddReply(528671, -1, 30083); //@t
		goto Label_121;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_121:
	bool var_138_bool;
	func_707(var_138_bool);
	if(var_138_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_584(var_2_object);
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


void func_716(int var_35_int)
{
	int var_38_int; bool var_39_bool;
	var_38_int = 0;
	
	for(;;) {
		string var_41_string; int var_42_int;
		var_38_int = var_42_int;
		func_709(var_41_string, var_42_int);
		@HasAnimation(var_39_bool, "all", var_41_string);
		if(!var_39_bool) //@nz
			break;
		var_38_int += 1;
	}
	var_38_int = var_35_int;
}


void func_600(string var_97_string, bool var_98_bool)
{
	bool var_104_bool; float var_105_float; float var_106_float;
	@lshHasAnimation(var_104_bool, var_97_string);
	if(var_104_bool != 0) {
		@lshGetAnimTimes(var_97_string, var_105_float, var_106_float);
		@lshPlayAnimation(var_105_float, var_106_float, var_98_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_97_string);
	}
	
}


void func_346(object var_0_object, object var_1_object, bool var_4_bool, bool var_13_bool)
{
	if(var_4_bool == null)
		var_13_bool = false;
	float var_17_float;
	func_484(var_17_float, var_4_bool);
	float var_15_float = sqrt(var_17_float);
	if(var_2_object != 0)
		var_15_float -= var_1_object;
	var_13_bool = var_15_float < var_0_object;
}


// @pe
void func_733(void)
{
	@SetVariable("k7q02", 2);
	func_788();
}


void func_477(bool var_60_bool)
{
	var_60_bool = true;
}


void func_479(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_484(float var_17_float, object var_18_object)
{
	cvector var_22_cvector;
	@GetPosition(var_22_cvector);
	cvector var_23_cvector;
	var_18_object->GetPosition(var_23_cvector);
	var_17_float = (var_23_cvector - var_22_cvector) | (var_23_cvector - var_22_cvector);
}


// @pe
void func_742(object var_43_object)
{
	@Trace("white plet 10 is given");
	object var_46_object;
	var_43_object = var_46_object;
	func_679(var_46_object, "grass_white_plet", 10);
}


void func_615(object var_27_object)
{
	float var_30_float;
	var_27_object->GetEyesHeight(var_30_float);
	cvector var_31_cvector = [0.0, 0.0, 0.0];
	var_32_float = GetByIndex(var_31_cvector, 1);
	var_30_float = var_32_float;
	SetByIndex(var_31_cvector, 1) = var_32_float;
	@LookAsync(var_27_object, "head", var_31_cvector);
}


void func_492(bool var_12_bool)
{
	bool var_14_bool;
	@IsLoaded(var_14_bool);
	var_14_bool = var_12_bool;
}


void func_497(bool var_25_bool, object var_26_object, float var_27_float)
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
	func_633(var_52_cvector, (var_41_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_42_cvector = ((var_40_cvector * var_27_float) + (var_52_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_44_bool;
	@IsOverrideActive(var_44_bool);
	if(var_44_bool != 0)
		var_25_bool = false;
	@StopWorld();
	@CameraTransit((var_39_cvector + var_42_cvector), var_41_cvector, true);
	var_66_float = GetByIndex(var_42_cvector, 0);
	var_67_float = GetByIndex(var_42_cvector, 2);
	@Rotate(var_66_float, var_67_float);
	bool var_68_bool;
	func_707(var_68_bool);
	if(var_68_bool != 0) {
	} else {
		@HasAnimationTrack(var_45_bool, "head");
		if(var_45_bool == 0) goto Label_560;
		@LookAsyncCamera("head");
	}
Label_560:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_25_bool = true;
	
}


void func_626(void)
{
	bool var_13_bool;
	func_707(var_13_bool);
	if(var_13_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_753(void)
{
	@TriggerWorld("playsound", "giveitem");
}


void func_759(object var_71_object)
{
	int var_74_int;
	var_71_object->RemoveItemByType(var_74_int, "Samopal", 1);
}


void func_633(cvector var_52_cvector, cvector var_53_cvector)
{
	float var_56_float = sqrt(var_53_cvector | var_53_cvector);
	if(var_56_float < 0.000001)
		var_52_cvector = [0.0, 0.0, 0.0];
	var_52_cvector = var_53_cvector / var_56_float;
}


// @pe
void func_765(bool var_112_bool)
{
	int var_114_int;
	func_643(var_114_int, "k7q02");
	if(var_114_int == 1)
		var_112_bool = true;
	var_112_bool = false;
}


