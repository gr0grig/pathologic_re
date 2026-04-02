// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, int var_7_int, int var_8_int, bool var_9_bool, bool var_10_bool, object var_11_object, bool var_12_bool, bool var_13_bool, bool var_14_bool)
	{
		if(1 != 0) {
			func_687();
			if(var_14_bool == 26698) {
				object var_19_object; object var_20_object;
				var_19_object = var_1_object;
				var_20_object = var_0_object;
				func_746();
			}
			if(var_14_bool == 41343) {
				object var_54_object; object var_55_object;
				var_54_object = var_1_object;
				var_55_object = var_0_object;
				func_746();
			}
			if(var_14_bool == 41344) {
				object var_58_object; object var_59_object;
				var_58_object = var_1_object;
				var_59_object = var_0_object;
				func_746();
			}
			if(var_13_bool == 26697) {
				func_132(var_14_bool, "Neutral");
				var_0_object->SetMessage(525329); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539404, 41334, 41333); //@t
				var_0_object->AddReply(539408, 41334, 41337); //@t
				return 0;
			}
			if(var_13_bool == 41334) {
				func_132(var_14_bool, "Neutral");
				var_0_object->SetMessage(539405); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539406, 41336, 41335); //@t
				var_0_object->AddReply(539409, 41336, 41339); //@t
				return 0;
			}
			if(var_13_bool == 41336) {
				func_132(var_14_bool, "Neutral");
				var_0_object->SetMessage(539407); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525330, -1, 26698); //@t
				var_0_object->AddReply(539410, 41342, 41341); //@t
				return 0;
			}
			if(var_13_bool == 41342) {
				func_132(var_14_bool, "Neutral");
				var_0_object->SetMessage(539411); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539412, -1, 41343); //@t
				var_0_object->AddReply(539413, -1, 41344); //@t
				return 0;
			}
			var_3_string = true;
			bool var_116_bool;
			func_839(var_116_bool);
			if(var_116_bool != 0)
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
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool, bool var_12_bool)
	{
		var_7_bool = false;
		func_311(var_12_bool, (float)300, (float)100);
	}

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool, bool var_12_bool, object var_13_object)
	{
		if(var_7_bool != 0)
			return 0;
		func_445(var_12_bool, var_13_object);
		int var_18_int; object var_19_object;
		var_13_object = var_19_object;
		TaskCall(0);
		func_0(var_20_object, var_18_int, var_19_object);
		TaskReturn();
		var_7_bool = true;
	}

	// @pe
	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool, bool var_12_bool, string var_13_string)
	{
		if(var_13_string == "cleanup")
			func_329(var_13_string);
	}

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool, bool var_12_bool)
	{
		if(var_6_int != 0)
			func_445(var_11_bool, var_12_bool);
		bool var_17_bool = false;
		if(var_5_int != 0) {
			bool var_19_bool;
			func_378(var_19_bool);
			if(var_19_bool != 0)
				var_17_bool = true;
		}
		if(var_17_bool != 0) {
			object var_20_object;
			func_694(var_20_object);
			@RemoveActor(var_20_object);
		}
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool, bool var_12_bool, int var_13_int)
	{
		if(var_13_int == 10) {
			bool var_16_bool;
			func_407(var_11_bool, var_12_bool, var_13_int, var_16_bool);
			if(var_16_bool != 0) {
				if(!var_2_object) { //@nz
					func_676(var_4_bool);
					var_2_object = true;
				}
			} else if(var_2_object != 0) {
				@UnlookAsync("head");
				var_2_object = false;
			}
		}
	
	}

}


void func_0(object var_0_object, int var_18_int, object var_19_object)
{
	var_0_object = var_19_object;
	bool var_29_bool; object var_30_object;
	var_19_object = var_30_object;
	func_558(var_29_bool, var_30_object, 70.0);
	if(!var_29_bool) { //@nz
		var_18_int = -2;
		return 8;
	}
	object var_25_object;
	@CreateDialog(var_25_object);
	int var_77_int;
	func_833(var_77_int);
	var_25_object->SetNPCName(var_77_int);
	int var_78_int;
	func_831(var_78_int);
	var_25_object->SetNPCDescription(var_78_int);
	string var_79_string;
	func_835(var_79_string);
	var_25_object->SetPhoto(var_79_string);
	string var_80_string;
	func_837(var_80_string);
	var_25_object->SetPhoto2(var_80_string);
	int var_81_int;
	func_814(var_81_int);
	var_25_object->SetPlayerName(var_81_int);
	bool var_26_bool;
	@IsOverrideActive(var_26_bool);
	if(var_26_bool != 0) {
		var_18_int = -2;
		return 8;
	}
	@DoDialog(var_25_object);
	object var_90_object; object var_91_object;
	var_19_object = var_90_object;
	var_25_object = var_91_object;
	TaskCall(1);
	func_74(var_92_object, var_93_object, var_94_string, var_95_bool, var_90_object, var_91_object);
	TaskReturn();
	bool var_28_bool;
	var_25_object->IsDialogEnd(var_28_bool);
	
	for(;;) {
		var_139_bool = !var_28_bool; //@nz
		if(var_139_bool == 0) goto Label_63;
		@sync();
		var_25_object->IsDialogEnd(var_28_bool);
	}
	
Label_63:
	object var_140_object;
	var_19_object = var_140_object;
	func_627();
	@StopDialog(var_25_object);
	var_25_object->GetReturnValue(-1);
	int var_27_int = var_18_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_132(object var_2_object, string var_97_string)
{
	bool var_98_bool;
	func_839(var_98_bool);
	if(!var_98_bool) //@nz
		return 0;
	if(var_97_string == var_2_object)
		return 0;
	string var_101_string; bool var_102_bool;
	var_97_string = var_101_string;
	if(var_97_string == "")
		var_102_bool = false;
	else
		var_102_bool = true;
	func_661(var_101_string, var_102_bool);
	var_2_object = var_97_string;
	
}


void func_773(object var_37_object)
{
	object var_39_object;
	@GetDiaryRoot(var_39_object);
	if(!var_39_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_37_object = false;
	}
	var_39_object = var_37_object;
}
EMIT "Stack[-1] = 0";


void func_645(string var_123_string)
{
	bool var_127_bool; float var_128_float; float var_129_float;
	@lshHasAnimation(var_127_bool, var_123_string);
	if(var_127_bool != 0) {
		@lshGetAnimTimes(var_123_string, var_128_float, var_129_float);
		@lshPlayAnimation(var_128_float, var_129_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_123_string);
	}
	
}


void func_786(bool var_28_bool, object var_29_object, int var_30_int)
{
	object var_37_object;
	func_773(var_37_object);
	object var_34_object;
	var_37_object = var_34_object;
	object var_35_object;
	var_34_object->Find(var_30_int, var_35_object);
	if(!var_35_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_30_int);
		var_28_bool = false;
	}
	var_35_object->AddChild(var_29_object);
	@SendWorldWndMessage(7);
	int var_36_int;
	var_29_object->GetCategory(var_36_int);
	@SetDiarySection(var_36_int);
	var_28_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_661(string var_101_string, bool var_102_bool)
{
	bool var_108_bool; float var_109_float; float var_110_float;
	@lshHasAnimation(var_108_bool, var_101_string);
	if(var_108_bool != 0) {
		@lshGetAnimTimes(var_101_string, var_109_float, var_110_float);
		@lshPlayAnimation(var_109_float, var_110_float, var_102_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_101_string);
	}
	
}


void func_407(object var_0_object, object var_1_object, bool var_4_bool, bool var_16_bool)
{
	if(var_4_bool == null)
		var_16_bool = false;
	float var_20_float;
	func_545(var_20_float, var_4_bool);
	float var_18_float = sqrt(var_20_float);
	if(var_2_object != 0)
		var_18_float -= var_1_object;
	var_16_bool = var_18_float < var_0_object;
}


void func_538(bool var_72_bool)
{
	var_72_bool = true;
}


void func_540(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_545(float var_20_float, object var_21_object)
{
	cvector var_25_cvector;
	@GetPosition(var_25_cvector);
	cvector var_26_cvector;
	var_21_object->GetPosition(var_26_cvector);
	var_20_float = (var_26_cvector - var_25_cvector) | (var_26_cvector - var_25_cvector);
}


void func_676(object var_30_object)
{
	float var_33_float;
	var_30_object->GetEyesHeight(var_33_float);
	cvector var_34_cvector = [0.0, 0.0, 0.0];
	var_35_float = GetByIndex(var_34_cvector, 1);
	var_33_float = var_35_float;
	SetByIndex(var_34_cvector, 1) = var_35_float;
	@LookAsync(var_30_object, "head", var_34_cvector);
}


void func_553(bool var_24_bool)
{
	bool var_26_bool;
	@IsLoaded(var_26_bool);
	var_26_bool = var_24_bool;
}


void func_558(bool var_29_bool, object var_30_object, float var_31_float)
{
	cvector var_42_cvector; bool var_49_bool;
	var_30_object->GetPosition(var_42_cvector);
	float var_41_float;
	var_30_object->GetEyesHeight(var_41_float);
	var_50_float = GetByIndex(var_42_cvector, 1);
	SetByIndex(var_42_cvector, 1) = (var_50_float + var_41_float);
	cvector var_43_cvector;
	@GetPosition(var_43_cvector);
	@GetEyesHeight(var_41_float);
	var_51_float = GetByIndex(var_43_cvector, 1);
	SetByIndex(var_43_cvector, 1) = (var_51_float + var_41_float);
	cvector var_44_cvector = var_42_cvector - var_43_cvector;
	var_52_float = GetByIndex(var_44_cvector, 1);
	SetByIndex(var_44_cvector, 1) = (float)0;
	var_54_float = sqrt(var_44_cvector | var_44_cvector);
	var_44_cvector /= var_54_float;
	cvector var_45_cvector = -var_44_cvector;
	cvector var_56_cvector;
	func_700(var_56_cvector, (var_45_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_46_cvector = ((var_44_cvector * var_31_float) + (var_56_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_48_bool;
	@IsOverrideActive(var_48_bool);
	if(var_48_bool != 0)
		var_29_bool = false;
	@StopWorld();
	@CameraTransit((var_43_cvector + var_46_cvector), var_45_cvector, true);
	var_70_float = GetByIndex(var_46_cvector, 0);
	var_71_float = GetByIndex(var_46_cvector, 2);
	@Rotate(var_70_float, var_71_float);
	bool var_72_bool;
	func_839(var_72_bool);
	if(var_72_bool != 0) {
	} else {
		@HasAnimationTrack(var_49_bool, "head");
		if(var_49_bool == 0) goto Label_621;
		@LookAsyncCamera("head");
	}
Label_621:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_29_bool = true;
	
}


void func_814(int var_81_int)
{
	int var_83_int;
	@GetVariable("branch", var_83_int);
	if(var_83_int == 0) {
		var_81_int = 1;
		return 2;
	EMIT "GOTO 0x33d";
	}
	if(var_83_int == 1) {
		var_81_int = 2;
		return 2;
	}
	var_81_int = 3;
}


void func_687(void)
{
	bool var_16_bool;
	func_839(var_16_bool);
	if(var_16_bool != 0)
		@lshStopSpeech();
}


void func_694(object var_20_object)
{
	object var_22_object;
	@self(var_22_object);
	var_22_object = var_20_object;
}
EMIT "Stack[-1] = 0";


void func_311(int var_6_int, float var_13_float, float var_14_float)
{
	float var_15_float; bool var_16_bool; float var_17_float; bool var_18_bool;
	var_6_int = false;
	
	for(;;) {
		@rand(var_17_float, 3);
		@Sleep((var_17_float + 3), var_18_bool);
		var_6_int = true;
		float var_22_float; float var_23_float;
		var_13_float = var_22_float;
		func_380(var_23_float, var_15_float, var_16_bool, var_17_float, var_18_bool, var_22_float, var_23_float);
		var_6_int = false;
	}
}
EMIT "Return(); Pop(4)";


void func_700(cvector var_56_cvector, cvector var_57_cvector)
{
	float var_60_float = sqrt(var_57_cvector | var_57_cvector);
	if(var_60_float < 0.000001)
		var_56_cvector = [0.0, 0.0, 0.0];
	var_56_cvector = var_57_cvector / var_60_float;
}


// @pe
void func_445(object var_2_object, string var_3_string)
{
	func_540();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
}


void func_831(int var_78_int)
{
	var_78_int = 515556;
}


void func_833(int var_77_int)
{
	var_77_int = 503341;
}


void func_835(string var_79_string)
{
	var_79_string = "ui/NPC_Citizen3.png";
}


void func_837(string var_80_string)
{
	var_80_string = "ui/NPC_Citizen3_b.png";
}


void func_710(bool var_46_bool, string var_47_string, string var_48_string)
{
	object var_50_object;
	@FindActor(var_50_object, var_47_string);
	if(var_50_object == null)
		var_46_bool = false;
	@Trigger(var_50_object, var_48_string);
	var_46_bool = true;
}
EMIT "Stack[-1] = 0";


void func_839(bool var_72_bool)
{
	var_72_bool = false;
}


void func_329(int var_5_int)
{
	var_5_int = true;
	bool var_16_bool = false;
	bool var_17_bool;
	func_553(var_17_bool);
	if(!var_17_bool) { //@nz
		bool var_21_bool;
		func_378(var_21_bool);
		if(var_21_bool != 0)
			var_16_bool = true;
	}
	if(var_16_bool != 0) {
		object var_22_object;
		func_694(var_22_object);
		@RemoveActor(var_22_object);
	}
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_90_object, object var_91_object)
{
	var_0_object = var_91_object;
	var_1_object = var_90_object;
	var_3_string = false;
	if(1 != 0) {
		func_132(var_91_object, "Neutral");
		var_0_object->SetMessage(525329); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(539404, 41334, 41333); //@t
		var_0_object->AddReply(539408, 41334, 41337); //@t
		goto Label_102;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_102:
	bool var_121_bool;
	func_839(var_121_bool);
	if(var_121_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_645(var_2_object);
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


void func_459(void)
{
	int var_40_int; int var_41_int; bool var_42_bool; float var_43_float; bool var_44_bool;
	@WaitForAnimEnd();
	bool var_45_bool;
	func_553(var_45_bool);
	if(!var_45_bool) //@nz
		return 14;
	int var_47_int;
	func_729(var_47_int);
	int var_38_int;
	var_47_int = var_38_int;
	int var_39_int = 0;
	
	for(;;) {
		bool var_60_bool = false;
		if(var_39_int < 5) {
			bool var_63_bool;
			func_553(var_63_bool);
			if(var_63_bool != 0)
				var_60_bool = true;
		}
		if(var_60_bool != 0) {
			@irand(var_40_int, 3);
			if(var_40_int == 0) {
				if(var_38_int == 0) goto Label_506;
				@irand(var_41_int, var_38_int);
				string var_69_string; int var_70_int;
				var_41_int = var_70_int;
				func_722(var_69_string, var_70_int);
				@PlayAnimation("all", var_69_string);
				@WaitForAnimEnd(var_42_bool);
				if(!var_42_bool) { //@nz
				} else {
			} else {
			if(var_40_int == 1) {
				@rand(var_43_float, 4);
				@Sleep((var_43_float + 1), var_44_bool);
				if(!var_44_bool) { //@nz
					goto Label_535;
				}
			} else if(var_39_int != 0) {
				goto Label_535;
			}
			}
					bool var_72_bool;
					func_538(var_72_bool);
					var_73_bool = !var_72_bool; //@nz
					if(var_73_bool == 0) goto Label_530;
			}
		}
	Label_535:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_530:
		@ResetAAS();
		var_39_int += 1;
	}
	
}


void func_722(string var_53_string, int var_54_int)
{
	string var_56_string = "idle";
	if(var_54_int != 0)
		var_56_string += var_54_int;
	var_56_string = var_53_string;
}


void func_729(int var_47_int)
{
	int var_50_int; bool var_51_bool;
	var_50_int = 0;
	
	for(;;) {
		string var_53_string; int var_54_int;
		var_50_int = var_54_int;
		func_722(var_53_string, var_54_int);
		@HasAnimation(var_51_bool, "all", var_53_string);
		if(!var_51_bool) //@nz
			break;
		var_50_int += 1;
	}
	var_50_int = var_47_int;
}


// @pe
void func_746(void)
{
	@SetVariable("k2q03", 2);
	func_760();
	bool var_46_bool;
	func_710(var_46_bool, "quest_k2_03", "place_danko");
}


void func_627(void)
{
	bool var_142_bool;
	@CameraSwitchToNormal(true);
	bool var_144_bool;
	func_839(var_144_bool);
	if(var_144_bool != 0) {
	} else {
		@HasAnimationTrack(var_142_bool, "head");
		if(var_142_bool == 0) goto Label_644;
		@UnlookAsync("head");
	}
Label_644:
	
}


void func_760(void)
{
	object var_24_object;
	@CreateDiaryEntry(var_24_object, 478, 2, 527794);
	bool var_28_bool; object var_29_object;
	var_24_object = var_29_object;
	func_786(var_28_bool, var_29_object, 476);
}
EMIT "Stack[-1] = 0";


void func_378(bool var_19_bool)
{
	var_19_bool = true;
}


// @pe
void func_380(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_22_float, float var_23_float)
{
	bool var_24_bool;
	func_553(var_24_bool);
	if(!var_24_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_22_float;
	var_1_object = var_23_float;
	@SetTimer(10, 1.0);
	func_459();
	if(!false) //@nz
		@KillTimer(10);
}


