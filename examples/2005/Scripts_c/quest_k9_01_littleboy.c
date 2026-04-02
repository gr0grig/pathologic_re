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
			func_739();
			if(var_11_object == 31248) {
				bool var_17_bool;
				func_793(var_1_object);
				if(var_17_bool != 0) {
					object var_25_object; object var_26_object;
					var_25_object = var_1_object;
					var_26_object = var_0_object;
					func_767();
					object var_29_object; object var_30_object;
					var_29_object = var_1_object;
					var_30_object = var_0_object;
					func_773();
					func_162(var_12_bool, "Neutral");
					var_0_object->SetMessage(529790); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(529794, 31253, 31252); //@t
					return 0;
				}
				func_162(var_12_bool, "Neutral");
				var_0_object->SetMessage(529791); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529792, -1, 31250); //@t
				var_0_object->AddReply(529793, -1, 31251); //@t
				return 0;
			}
			if(var_11_object == 31253) {
				func_162(var_12_bool, "Neutral");
				var_0_object->SetMessage(529795); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529796, 31255, 31254); //@t
				return 0;
			}
			if(var_11_object == 31255) {
				func_162(var_12_bool, "Neutral");
				var_0_object->SetMessage(529797); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529798, 31257, 31256); //@t
				var_0_object->AddReply(529803, 31262, 31261); //@t
				return 0;
			}
			if(var_11_object == 31257) {
				func_162(var_12_bool, "Neutral");
				var_0_object->SetMessage(529799); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529800, 31259, 31258); //@t
				return 0;
			}
			if(var_11_object == 31259) {
				func_162(var_12_bool, "Neutral");
				var_0_object->SetMessage(529801); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529802, 31262, 31260); //@t
				return 0;
			}
			if(var_11_object == 31262) {
				func_162(var_12_bool, "Neutral");
				var_0_object->SetMessage(529804); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529805, -1, 31264); //@t
				var_0_object->AddReply(529806, -1, 31265); //@t
				return 0;
			}
			var_3_string = true;
			bool var_127_bool;
			func_884(var_127_bool);
			if(var_127_bool != 0)
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
		func_373((float)300, (float)100);
	}

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object)
	{
		func_517(var_10_bool, var_11_object);
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
			func_398(var_11_string);
	}

	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool)
	{
		@StopGroup0();
		@sync();
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool)
	{
		func_517(var_9_object, var_10_bool);
		bool var_14_bool = false;
		if(var_5_int != 0) {
			bool var_16_bool;
			func_450(var_16_bool);
			if(var_16_bool != 0)
				var_14_bool = true;
		}
		if(var_14_bool != 0) {
			object var_17_object;
			func_746(var_17_object);
			@RemoveActor(var_17_object);
		}
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, int var_11_int)
	{
		if(var_11_int == 10) {
			bool var_14_bool;
			func_479(var_9_object, var_10_bool, var_11_int, var_14_bool);
			if(var_14_bool != 0) {
				if(!var_2_object) { //@nz
					func_728(var_4_bool);
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
	func_630(var_26_bool, var_27_object, 70.0);
	if(!var_26_bool) { //@nz
		var_15_int = -2;
		return 8;
	}
	object var_22_object;
	@CreateDialog(var_22_object);
	int var_73_int;
	func_878(var_73_int);
	var_22_object->SetNPCName(var_73_int);
	int var_74_int;
	func_876(var_74_int);
	var_22_object->SetNPCDescription(var_74_int);
	string var_75_string;
	func_880(var_75_string);
	var_22_object->SetPhoto(var_75_string);
	string var_76_string;
	func_882(var_76_string);
	var_22_object->SetPhoto2(var_76_string);
	int var_77_int;
	func_859(var_77_int);
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
		var_175_bool = !var_25_bool; //@nz
		if(var_175_bool == 0) goto Label_63;
		@sync();
		var_22_object->IsDialogEnd(var_25_bool);
	}
	
Label_63:
	object var_176_object;
	var_16_object = var_176_object;
	func_698();
	@StopDialog(var_22_object);
	var_22_object->GetReturnValue(-1);
	int var_24_int = var_15_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_517(object var_2_object, string var_3_string)
{
	func_612();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
}


// @pe
void func_773(void)
{
	int var_107_int;
	func_762(var_107_int, "k9q01ChildTalk");
	if(var_107_int == 0) {
		@SetVariable("k9q01ChildTalk", 1);
		@SetVariable("k9q01", 7);
		func_805();
	}
}


void func_398(int var_5_int)
{
	var_5_int = true;
	bool var_15_bool;
	@IsLoaded(var_15_bool);
	bool var_16_bool = false;
	if(!var_15_bool) { //@nz
		bool var_18_bool;
		func_450(var_18_bool);
		if(var_18_bool != 0)
			var_16_bool = true;
	}
	if(var_16_bool != 0) {
		object var_19_object;
		func_746(var_19_object);
		@RemoveActor(var_19_object);
	}
}


void func_531(void)
{
	int var_38_int; int var_39_int; bool var_40_bool; float var_41_float; bool var_42_bool;
	@WaitForAnimEnd();
	bool var_43_bool;
	func_625(var_43_bool);
	if(!var_43_bool) //@nz
		return 14;
	int var_45_int;
	func_893(var_45_int);
	int var_36_int;
	var_45_int = var_36_int;
	int var_37_int = 0;
	
	for(;;) {
		bool var_58_bool = false;
		if(var_37_int < 5) {
			bool var_61_bool;
			func_625(var_61_bool);
			if(var_61_bool != 0)
				var_58_bool = true;
		}
		if(var_58_bool != 0) {
			@irand(var_38_int, 3);
			if(var_38_int == 0) {
				if(var_36_int == 0) goto Label_578;
				@irand(var_39_int, var_36_int);
				string var_67_string; int var_68_int;
				var_39_int = var_68_int;
				func_886(var_67_string, var_68_int);
				@PlayAnimation("all", var_67_string);
				@WaitForAnimEnd(var_40_bool);
				if(!var_40_bool) { //@nz
				} else {
			} else {
			if(var_38_int == 1) {
				@rand(var_41_float, 4);
				@Sleep((var_41_float + 1), var_42_bool);
				if(!var_42_bool) { //@nz
					goto Label_607;
				}
			} else if(var_37_int != 0) {
				goto Label_607;
			}
			}
					bool var_70_bool;
					func_610(var_70_bool);
					var_71_bool = !var_70_bool; //@nz
					if(var_71_bool == 0) goto Label_602;
			}
		}
	Label_607:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_602:
		@ResetAAS();
		var_37_int += 1;
	}
	
}


// @pe
void func_793(bool var_93_bool)
{
	int var_95_int;
	func_762(var_95_int, "ook9Littleboy1");
	if(var_95_int == 0) {
		var_93_bool = true;
		return 0;
	}
	var_93_bool = false;
}


// @pe
void func_162(object var_2_object, string var_138_string)
{
	bool var_139_bool;
	func_884(var_139_bool);
	if(!var_139_bool) //@nz
		return 0;
	if(var_138_string == var_2_object)
		return 0;
	string var_142_string; bool var_143_bool;
	var_138_string = var_142_string;
	if(var_138_string == "")
		var_143_bool = false;
	else
		var_143_bool = true;
	func_722(var_142_string, var_143_bool);
	var_2_object = var_138_string;
	
}


void func_805(void)
{
	object var_116_object;
	@CreateDiaryEntry(var_116_object, 524, 1, 529816);
	bool var_120_bool; object var_121_object;
	var_116_object = var_121_object;
	func_831(var_120_bool, var_121_object, 517);
}
EMIT "Stack[-1] = 0";


void func_818(object var_129_object)
{
	object var_131_object;
	@GetDiaryRoot(var_131_object);
	if(!var_131_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_129_object = false;
	}
	var_131_object = var_129_object;
}
EMIT "Stack[-1] = 0";


void func_698(void)
{
	bool var_178_bool;
	@CameraSwitchToNormal();
	bool var_179_bool;
	func_884(var_179_bool);
	if(var_179_bool != 0) {
	} else {
		@HasAnimationTrack(var_178_bool, "head");
		if(var_178_bool == 0) goto Label_714;
		@UnlookAsync("head");
	}
Label_714:
	
}


void func_831(bool var_120_bool, object var_121_object, int var_122_int)
{
	object var_129_object;
	func_818(var_129_object);
	object var_126_object;
	var_129_object = var_126_object;
	object var_127_object;
	var_126_object->Find(var_122_int, var_127_object);
	if(!var_127_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_122_int);
		var_120_bool = false;
	}
	var_127_object->AddChild(var_121_object);
	@SendWorldWndMessage(7);
	int var_128_int;
	var_121_object->GetCategory(var_128_int);
	@SetDiarySection(var_128_int);
	var_120_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_450(bool var_16_bool)
{
	var_16_bool = true;
}


// @pe
void func_452(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_22_float, float var_23_float)
{
	bool var_24_bool;
	func_625(var_24_bool);
	if(!var_24_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_22_float;
	var_1_object = var_23_float;
	@SetTimer(10, 1.0);
	func_531();
	if(!false) //@nz
		@KillTimer(10);
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_86_object, object var_87_object)
{
	var_0_object = var_87_object;
	var_1_object = var_86_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_93_bool;
		func_793(var_1_object);
		if(var_93_bool != 0) {
			object var_101_object; object var_102_object;
			var_101_object = var_1_object;
			var_102_object = var_0_object;
			func_767();
			object var_105_object; object var_106_object;
			var_105_object = var_1_object;
			var_106_object = var_0_object;
			func_773();
			func_162(var_87_object, "Neutral");
			var_0_object->SetMessage(529790); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(529794, 31253, 31252); //@t
		} else {
					func_162(var_87_object, "Neutral");
					var_0_object->SetMessage(529791); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(529792, -1, 31250); //@t
					var_0_object->AddReply(529793, -1, 31251); //@t
		}
	}
	for(;;) {
		bool var_154_bool;
		func_884(var_154_bool);
		if(var_154_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_715(var_2_object);
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
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4e";


void func_715(string var_156_string)
{
	float var_159_float; float var_160_float;
	@lshGetAnimTimes(var_156_string, var_159_float, var_160_float);
	@lshPlayAnimation(var_159_float, var_160_float, false);
}


void func_722(string var_142_string, bool var_143_bool)
{
	float var_148_float; float var_149_float;
	@lshGetAnimTimes(var_142_string, var_148_float, var_149_float);
	@lshPlayAnimation(var_148_float, var_149_float, var_143_bool);
}


void func_728(object var_28_object)
{
	float var_31_float;
	var_28_object->GetEyesHeight(var_31_float);
	cvector var_32_cvector = [0.0, 0.0, 0.0];
	var_33_float = GetByIndex(var_32_cvector, 1);
	var_31_float = var_33_float;
	SetByIndex(var_32_cvector, 1) = var_33_float;
	@LookAsync(var_28_object, "head", var_32_cvector);
}


void func_859(int var_77_int)
{
	int var_79_int;
	@GetVariable("branch", var_79_int);
	if(var_79_int == 0) {
		var_77_int = 1;
		return 2;
	EMIT "GOTO 0x36a";
	}
	if(var_79_int == 1) {
		var_77_int = 2;
		return 2;
	}
	var_77_int = 3;
}


void func_479(object var_0_object, object var_1_object, bool var_4_bool, bool var_14_bool)
{
	if(var_4_bool == null)
		var_14_bool = false;
	float var_18_float;
	func_617(var_18_float, var_4_bool);
	float var_16_float = sqrt(var_18_float);
	if(var_2_object != 0)
		var_16_float -= var_1_object;
	var_14_bool = var_16_float < var_0_object;
}


void func_610(bool var_70_bool)
{
	var_70_bool = true;
}


void func_739(void)
{
	bool var_14_bool;
	func_884(var_14_bool);
	if(var_14_bool != 0)
		@lshStopSpeech();
}


void func_612(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_617(float var_18_float, object var_19_object)
{
	cvector var_23_cvector;
	@GetPosition(var_23_cvector);
	cvector var_24_cvector;
	var_19_object->GetPosition(var_24_cvector);
	var_18_float = (var_24_cvector - var_23_cvector) | (var_24_cvector - var_23_cvector);
}


void func_746(object var_17_object)
{
	object var_19_object;
	@self(var_19_object);
	var_19_object = var_17_object;
}
EMIT "Stack[-1] = 0";


void func_876(int var_74_int)
{
	var_74_int = 515560;
}


void func_878(int var_73_int)
{
	var_73_int = 503345;
}


void func_880(string var_75_string)
{
	var_75_string = "ui/NPC_Citizen3.png";
}


void func_625(bool var_15_bool)
{
	bool var_17_bool;
	@IsLoaded(var_17_bool);
	var_17_bool = var_15_bool;
}


void func_882(string var_76_string)
{
	var_76_string = "ui/NPC_Citizen3_b.png";
}


void func_752(cvector var_53_cvector, cvector var_54_cvector)
{
	float var_57_float = sqrt(var_54_cvector | var_54_cvector);
	if(var_57_float < 0.000001)
		var_53_cvector = [0.0, 0.0, 0.0];
	var_53_cvector = var_54_cvector / var_57_float;
}


void func_884(bool var_68_bool)
{
	var_68_bool = false;
}


void func_373(float var_11_float, float var_12_float)
{
	
Label_374:
	for(;;) {
		bool var_15_bool;
		func_625(var_15_bool);
		var_18_bool = !var_15_bool; //@nz
		if(var_18_bool == 0) goto Label_382;
		@Hold();
	}
	
Label_382:
	float var_14_float;
	@rand(var_14_float, 3);
	@Sleep(var_14_float + 3);
	float var_22_float; float var_23_float;
	float var_13_float;
	func_452(var_10_bool, var_22_float, var_23_float, var_13_float, var_14_float, var_22_float, var_23_float);
	@sync();
	goto Label_374;
}
EMIT "Return(); Pop(2)";


void func_630(bool var_26_bool, object var_27_object, float var_28_float)
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
	func_752(var_53_cvector, (var_42_cvector ^ [0.0, 1.0, 0.0]));
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
	func_884(var_68_bool);
	if(var_68_bool != 0) {
	} else {
		@HasAnimationTrack(var_46_bool, "head");
		if(var_46_bool == 0) goto Label_692;
		@LookAsyncCamera("head");
	}
Label_692:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_26_bool = true;
	
}


void func_886(string var_51_string, int var_52_int)
{
	string var_54_string = "idle";
	if(var_52_int != 0)
		var_54_string += var_52_int;
	var_54_string = var_51_string;
}


void func_762(int var_95_int, string var_96_string)
{
	int var_98_int;
	@GetVariable(var_96_string, var_98_int);
	var_98_int = var_95_int;
}


void func_893(int var_45_int)
{
	int var_48_int; bool var_49_bool;
	var_48_int = 0;
	
	for(;;) {
		string var_51_string; int var_52_int;
		var_48_int = var_52_int;
		func_886(var_51_string, var_52_int);
		@HasAnimation(var_49_bool, "all", var_51_string);
		if(!var_49_bool) //@nz
			break;
		var_48_int += 1;
	}
	var_48_int = var_45_int;
}


// @pe
void func_767(void)
{
	@SetVariable("ook9Littleboy1", 1);
}


