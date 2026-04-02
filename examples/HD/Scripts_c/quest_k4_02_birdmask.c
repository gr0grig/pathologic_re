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
			func_833();
			if(var_11_object == 27064) {
				object var_16_object; object var_17_object;
				var_16_object = var_1_object;
				var_17_object = var_0_object;
				func_994();
				object var_43_object = var_1_object;
				func_1020(var_0_object);
				object var_83_object = var_1_object;
				func_1010(var_0_object);
			}
			if(var_11_object == 43039) {
				object var_106_object; object var_107_object;
				var_106_object = var_1_object;
				var_107_object = var_0_object;
				func_994();
			}
			if(var_11_object == 27080) {
				object var_110_object; object var_111_object;
				var_110_object = var_1_object;
				var_111_object = var_0_object;
				func_988();
			}
			if(var_11_object == 27082) {
				object var_116_object; object var_117_object;
				var_116_object = var_1_object;
				var_117_object = var_0_object;
				func_1003();
			}
			if(var_10_bool == 27061) {
				bool var_126_bool = false;
				bool var_127_bool;
				func_1027(var_1_object);
				if(var_127_bool != 0) {
					bool var_135_bool;
					func_1063(var_1_object);
					if(!var_135_bool) //@nz
						var_126_bool = true;
				}
				if(var_126_bool != 0) {
					func_181(var_11_object, "Neutral");
					var_0_object->SetMessage(525749); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(525750, 27063, 27062); //@t
					var_0_object->AddReply(540951, 43036, 43035); //@t
					return 0;
				}
				func_181(var_11_object, "Neutral");
				var_0_object->SetMessage(525753); //@t
				var_0_object->ClearReplies(); //@t
				bool var_168_bool = false;
				bool var_169_bool;
				func_1039(var_1_object);
				if(var_169_bool != 0) {
					bool var_175_bool;
					func_1051(var_1_object);
					if(var_175_bool != 0)
						var_168_bool = true;
				}
				if(var_168_bool != 0)
					var_0_object->AddReply(525768, 27081, 27080); //@t
				var_0_object->AddReply(525754, -1, 27066); //@t
				return 0;
			}
			if(var_10_bool == 27081) {
				func_181(var_11_object, "Neutral");
				var_0_object->SetMessage(525769); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525770, -1, 27082); //@t
				return 0;
			}
			if(var_10_bool == 43036) {
				func_181(var_11_object, "Neutral");
				var_0_object->SetMessage(540952); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540953, 27063, 43037); //@t
				var_0_object->AddReply(542080, 44374, 44373); //@t
				return 0;
			}
			if(var_10_bool == 44374) {
				func_181(var_11_object, "Neutral");
				var_0_object->SetMessage(542081); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542082, 44377, 44375); //@t
				var_0_object->AddReply(542083, 44377, 44376); //@t
				return 0;
			}
			if(var_10_bool == 44377) {
				func_181(var_11_object, "Neutral");
				var_0_object->SetMessage(542084); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542085, 27063, 44379); //@t
				return 0;
			}
			if(var_10_bool == 27063) {
				func_181(var_11_object, "Neutral");
				var_0_object->SetMessage(525751); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529230, 30685, 30684); //@t
				return 0;
			}
			if(var_10_bool == 30685) {
				func_181(var_11_object, "Neutral");
				var_0_object->SetMessage(529231); //@t
				var_0_object->ClearReplies(); //@t
				bool var_232_bool;
				func_1075(var_232_bool, var_1_object);
				if(var_232_bool != 0)
					var_0_object->AddReply(525752, -1, 27064); //@t
				var_0_object->AddReply(540954, -1, 43039); //@t
				return 0;
			}
			var_3_string = true;
			bool var_247_bool;
			func_962(var_247_bool);
			if(var_247_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xcc";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object)
	{
	
		for(;;) {
			func_485(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, (float)300, (float)100);
			@Sleep(3);
		}
	}
	EMIT "Return(); Pop(0)";

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object)
	{
		func_550(var_9_object, var_10_object);
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
			func_512(var_8_bool, var_9_object, var_10_int, var_13_bool);
			if(var_13_bool != 0) {
				if(!var_2_object) { //@nz
					func_822(var_4_bool);
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
	func_704(var_25_bool, var_26_object, 130.0);
	if(!var_25_bool) { //@nz
		var_14_int = -2;
		return 8;
	}
	object var_21_object;
	@CreateDialog(var_21_object);
	int var_73_int;
	func_956(var_73_int);
	var_21_object->SetNPCName(var_73_int);
	int var_74_int;
	func_954(var_74_int);
	var_21_object->SetNPCDescription(var_74_int);
	string var_75_string;
	func_958(var_75_string);
	var_21_object->SetPhoto(var_75_string);
	string var_76_string;
	func_960(var_76_string);
	var_21_object->SetPhoto2(var_76_string);
	int var_77_int;
	func_1150(var_77_int);
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
		var_172_bool = !var_24_bool; //@nz
		if(var_172_bool == 0) goto Label_63;
		@sync();
		var_21_object->IsDialogEnd(var_24_bool);
	}
	
Label_63:
	object var_173_object;
	var_15_object = var_173_object;
	func_773();
	@StopDialog(var_21_object);
	var_21_object->GetReturnValue(-1);
	int var_23_int = var_14_int;
}
EMIT "Stack[-4] = 0";


void func_512(object var_0_object, object var_1_object, bool var_4_bool, bool var_13_bool)
{
	if(var_4_bool == null)
		var_13_bool = false;
	float var_17_float;
	func_650(var_17_float, var_4_bool);
	float var_15_float = sqrt(var_17_float);
	if(var_2_object != 0)
		var_15_float -= var_1_object;
	var_13_bool = var_15_float < var_0_object;
}


// @pe
void func_897(bool var_45_bool, object var_46_object, float var_47_float)
{
	if(!var_46_object) { //@nz
		var_45_bool = false;
		return 0;
	}
	if(var_47_float > 0) {
		@SendWorldWndMessage(8);
	} else if(var_47_float < 0) {
			@SendWorldWndMessage(9);
	}
	for(;;) {
		float var_52_float;
		var_47_float = var_52_float;
		func_932(var_52_float);
		bool var_56_bool; object var_57_object; float var_59_float;
		var_46_object = var_57_object;
		var_47_float = var_59_float;
		func_670(var_56_bool, var_57_object, "reputation", var_59_float, (float)0, (float)1);
		var_45_bool = true;
		return 0;

	}
	
	var_45_bool = false;
}


// @pe
void func_1027(bool var_94_bool)
{
	int var_96_int;
	func_861(var_96_int, "k4q02");
	if(var_96_int == 1)
		var_94_bool = true;
	var_94_bool = false;
}


void func_643(bool var_60_bool)
{
	var_60_bool = true;
}


void func_773(void)
{
	bool var_175_bool;
	@CameraSwitchToNormal(true);
	bool var_177_bool;
	func_962(var_177_bool);
	if(var_177_bool != 0) {
	} else {
		@HasAnimationTrack(var_175_bool, "head");
		if(var_175_bool == 0) goto Label_790;
		@UnlookAsync("head");
	}
Label_790:
	
}


void func_645(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_650(float var_17_float, object var_18_object)
{
	cvector var_22_cvector;
	@GetPosition(var_22_cvector);
	cvector var_23_cvector;
	var_18_object->GetPosition(var_23_cvector);
	var_17_float = (var_23_cvector - var_22_cvector) | (var_23_cvector - var_22_cvector);
}


// @pe
void func_1039(bool var_154_bool)
{
	int var_156_int;
	func_861(var_156_int, "k4q02");
	if(var_156_int == 2)
		var_154_bool = true;
	var_154_bool = false;
}


void func_658(bool var_64_bool, object var_65_object, string var_66_string)
{
	var_71_bool = IsFuncExist(var_65_object, "HasProperty", 2);
	if(!var_71_bool) { //@nz
		var_64_bool = false;
		return 2;
	}
	bool var_68_bool;
	var_65_object->HasProperty(var_66_string, var_68_bool);
	var_68_bool = var_64_bool;
}


void func_791(string var_135_string)
{
	bool var_139_bool; float var_140_float; float var_141_float;
	@lshHasAnimation(var_139_bool, var_135_string);
	if(var_139_bool != 0) {
		@lshGetAnimTimes(var_135_string, var_140_float, var_141_float);
		@lshPlayAnimation(var_140_float, var_141_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_135_string);
	}
	
}


// @pe
void func_1051(bool var_160_bool)
{
	int var_162_int;
	func_861(var_162_int, "ook4BirdmaskTheater1");
	if(var_162_int == 0) {
		var_160_bool = true;
		return 0;
	}
	var_160_bool = false;
}


void func_670(bool var_56_bool, object var_57_object, string var_58_string, float var_59_float, float var_60_float, float var_61_float)
{
	object var_65_object;
	var_57_object = var_65_object;
	string var_66_string;
	var_58_string = var_66_string;
	bool var_64_bool;
	func_658(var_64_bool, var_65_object, var_66_string);
	if(!var_64_bool) //@nz
		var_56_bool = false;
	float var_63_float;
	var_57_object->GetProperty(var_58_string, var_63_float);
	float var_74_float; float var_76_float; float var_77_float;
	var_60_float = var_76_float;
	var_61_float = var_77_float;
	func_850(var_74_float, (var_63_float + var_59_float), var_76_float, var_77_float);
	var_57_object->SetProperty(var_58_string, var_74_float);
	var_56_bool = true;
}


void func_932(float var_52_float)
{
	object var_54_object;
	@CreateFloatVector(var_54_object);
	var_54_object->add(var_52_float);
	@SendWorldWndMessage(16, var_54_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_550(object var_2_object, string var_3_string)
{
	func_645();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
}


// @pe
void func_1063(bool var_102_bool)
{
	int var_104_int;
	func_861(var_104_int, "k4q02BirdmaskGotoMaria");
	if(var_104_int != 0) {
		var_102_bool = true;
		return 0;
	}
	var_102_bool = false;
}


void func_807(string var_113_string, bool var_114_bool)
{
	bool var_120_bool; float var_121_float; float var_122_float;
	@lshHasAnimation(var_120_bool, var_113_string);
	if(var_120_bool != 0) {
		@lshGetAnimTimes(var_113_string, var_121_float, var_122_float);
		@lshPlayAnimation(var_121_float, var_122_float, var_114_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_113_string);
	}
	
}


void func_942(bool var_118_bool, string var_119_string, string var_120_string)
{
	object var_122_object;
	@FindActor(var_122_object, var_119_string);
	if(var_122_object == null)
		var_118_bool = false;
	@Trigger(var_122_object, var_120_string);
	var_118_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1075(bool var_232_bool, object var_233_object)
{
	object var_235_object;
	var_233_object = var_235_object;
	bool var_234_bool;
	func_1085(var_234_bool, var_235_object);
	if(var_234_bool != 0) {
		var_232_bool = true;
		return 0;
	}
	var_232_bool = false;
}


void func_564(void)
{
	int var_28_int; int var_29_int; bool var_30_bool; float var_31_float; bool var_32_bool;
	@WaitForAnimEnd();
	bool var_33_bool;
	func_699(var_33_bool);
	if(!var_33_bool) //@nz
		return 14;
	int var_35_int;
	func_971(var_35_int);
	int var_26_int;
	var_35_int = var_26_int;
	int var_27_int = 0;
	
	for(;;) {
		bool var_48_bool = false;
		if(var_27_int < 5) {
			bool var_51_bool;
			func_699(var_51_bool);
			if(var_51_bool != 0)
				var_48_bool = true;
		}
		if(var_48_bool != 0) {
			@irand(var_28_int, 3);
			if(var_28_int == 0) {
				if(var_26_int == 0) goto Label_611;
				@irand(var_29_int, var_26_int);
				string var_57_string; int var_58_int;
				var_29_int = var_58_int;
				func_964(var_57_string, var_58_int);
				@PlayAnimation("all", var_57_string);
				@WaitForAnimEnd(var_30_bool);
				if(!var_30_bool) { //@nz
				} else {
			} else {
			if(var_28_int == 1) {
				@rand(var_31_float, 4);
				@Sleep((var_31_float + 1), var_32_bool);
				if(!var_32_bool) { //@nz
					goto Label_640;
				}
			} else if(var_27_int != 0) {
				goto Label_640;
			}
			}
					bool var_60_bool;
					func_643(var_60_bool);
					var_61_bool = !var_60_bool; //@nz
					if(var_61_bool == 0) goto Label_635;
			}
		}
	Label_640:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_635:
		@ResetAAS();
		var_27_int += 1;
	}
	
}


// @pe
void func_181(object var_2_object, string var_109_string)
{
	bool var_110_bool;
	func_962(var_110_bool);
	if(!var_110_bool) //@nz
		return 0;
	if(var_109_string == var_2_object)
		return 0;
	string var_113_string; bool var_114_bool;
	var_109_string = var_113_string;
	if(var_109_string == "")
		var_114_bool = false;
	else
		var_114_bool = true;
	func_807(var_113_string, var_114_bool);
	var_2_object = var_109_string;
	
}


void func_822(object var_27_object)
{
	float var_30_float;
	var_27_object->GetEyesHeight(var_30_float);
	cvector var_31_cvector = [0.0, 0.0, 0.0];
	var_32_float = GetByIndex(var_31_cvector, 1);
	var_30_float = var_32_float;
	SetByIndex(var_31_cvector, 1) = var_32_float;
	@LookAsync(var_27_object, "head", var_31_cvector);
}


void func_692(object var_90_object, string var_91_string, int var_92_int)
{
	int var_94_int;
	var_90_object->GetProperty(var_91_string, var_94_int);
	var_90_object->SetProperty(var_91_string, (var_94_int + var_92_int));
}


void func_954(int var_74_int)
{
	var_74_int = 515571;
}


void func_699(bool var_12_bool)
{
	bool var_14_bool;
	@IsLoaded(var_14_bool);
	var_14_bool = var_12_bool;
}


void func_956(int var_73_int)
{
	var_73_int = 504029;
}


void func_1085(bool var_234_bool, object var_235_object)
{
	float var_237_float;
	var_235_object->GetProperty("money", var_237_float);
	if(var_237_float >= 500)
		var_234_bool = true;
	var_234_bool = false;
}


void func_958(string var_75_string)
{
	var_75_string = "ui/NPC_bmask.png";
}


void func_704(bool var_25_bool, object var_26_object, float var_27_float)
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
	func_840(var_52_cvector, (var_41_cvector ^ [0.0, 1.0, 0.0]));
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
	func_962(var_68_bool);
	if(var_68_bool != 0) {
	} else {
		@HasAnimationTrack(var_45_bool, "head");
		if(var_45_bool == 0) goto Label_767;
		@LookAsyncCamera("head");
	}
Label_767:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_25_bool = true;
	
}


void func_960(string var_76_string)
{
	var_76_string = "ui/NPC_bmask_b.png";
}


void func_962(bool var_68_bool)
{
	var_68_bool = false;
}


void func_833(void)
{
	bool var_13_bool;
	func_962(var_13_bool);
	if(var_13_bool != 0)
		@lshStopSpeech();
}


void func_964(string var_41_string, int var_42_int)
{
	string var_44_string = "idle";
	if(var_42_int != 0)
		var_44_string += var_42_int;
	var_44_string = var_41_string;
}


void func_840(cvector var_52_cvector, cvector var_53_cvector)
{
	float var_56_float = sqrt(var_53_cvector | var_53_cvector);
	if(var_56_float < 0.000001)
		var_52_cvector = [0.0, 0.0, 0.0];
	var_52_cvector = var_53_cvector / var_56_float;
}


void func_1096(void)
{
	object var_21_object;
	@CreateDiaryEntry(var_21_object, 380, 2, 525786);
	bool var_25_bool; object var_26_object;
	var_21_object = var_26_object;
	func_1122(var_25_bool, var_26_object, 378);
}
EMIT "Stack[-1] = 0";


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_86_object, object var_87_object)
{
	var_0_object = var_87_object;
	var_1_object = var_86_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_93_bool = false;
		bool var_94_bool;
		func_1027(var_1_object);
		if(var_94_bool != 0) {
			bool var_102_bool;
			func_1063(var_1_object);
			if(!var_102_bool) //@nz
				var_93_bool = true;
		}
		if(var_93_bool != 0) {
			func_181(var_87_object, "Neutral");
			var_0_object->SetMessage(525749); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(525750, 27063, 27062); //@t
			var_0_object->AddReply(540951, 43036, 43035); //@t
		} else {
					func_181(var_87_object, "Neutral");
					var_0_object->SetMessage(525753); //@t
					var_0_object->ClearReplies(); //@t
					bool var_153_bool = false;
					bool var_154_bool;
					func_1039(var_1_object);
					if(var_154_bool != 0) {
						bool var_160_bool;
						func_1051(var_1_object);
						if(var_160_bool != 0)
							var_153_bool = true;
					}
					if(var_153_bool != 0)
						var_0_object->AddReply(525768, 27081, 27080); //@t
					var_0_object->AddReply(525754, -1, 27066); //@t
		}
	}
	for(;;) {
		bool var_133_bool;
		func_962(var_133_bool);
		if(var_133_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_791(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_180;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_180:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4e";


void func_971(int var_35_int)
{
	int var_38_int; bool var_39_bool;
	var_38_int = 0;
	
	for(;;) {
		string var_41_string; int var_42_int;
		var_38_int = var_42_int;
		func_964(var_41_string, var_42_int);
		@HasAnimation(var_39_bool, "all", var_41_string);
		if(!var_39_bool) //@nz
			break;
		var_38_int += 1;
	}
	var_38_int = var_35_int;
}


// @pe
void func_850(float var_74_float, float var_75_float, float var_76_float, float var_77_float)
{
	if(var_75_float < var_76_float) {
		var_76_float = var_74_float;
		return 0;
	}
	if(var_75_float > var_77_float) {
		var_77_float = var_74_float;
		return 0;
	}
	var_75_float = var_74_float;
}


void func_1109(object var_34_object)
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


// @pe
void func_988(void)
{
	@SetVariable("ook4BirdmaskTheater1", 1);
}


void func_861(int var_96_int, string var_97_string)
{
	int var_99_int;
	@GetVariable(var_97_string, var_99_int);
	var_99_int = var_96_int;
}


// @pe
void func_994(void)
{
	@SetVariable("k4q02BirdmaskGotoMaria", 1);
	func_1096();
}


void func_866(int var_99_int, int var_100_int)
{
	object var_102_object;
	@CreateIntVector(var_102_object);
	var_102_object->add(var_99_int);
	var_102_object->add(var_100_int);
	@SendWorldWndMessage(3, var_102_object);
}
EMIT "Stack[-1] = 0";


void func_1122(bool var_25_bool, object var_26_object, int var_27_int)
{
	object var_34_object;
	func_1109(var_34_object);
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
void func_485(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_10_float, float var_11_float)
{
	bool var_12_bool;
	func_699(var_12_bool);
	if(!var_12_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_10_float;
	var_1_object = var_11_float;
	@SetTimer(10, 1.0);
	func_564();
	if(!false) //@nz
		@KillTimer(10);
}


// @pe
void func_1003(void)
{
	bool var_118_bool;
	func_942(var_118_bool, "quest_k4_02", "init_theater");
}


void func_878(object var_86_object, int var_87_int)
{
	int var_89_int;
	object var_90_object;
	var_86_object = var_90_object;
	int var_92_int;
	func_692(var_90_object, "money", var_92_int);
	if(var_92_int > 0) {
		@GetInvItemByName(var_89_int, "Money");
		int var_99_int; int var_100_int;
		var_89_int = var_99_int;
		var_87_int = var_100_int;
		func_866(var_99_int, var_100_int);
	}
}


// @pe
void func_1010(object var_83_object)
{
	@Trace("money 500 removed");
	object var_86_object;
	var_83_object = var_86_object;
	func_878(var_86_object, -500);
}


// @pe
void func_1020(object var_43_object)
{
	object var_46_object;
	var_43_object = var_46_object;
	bool var_45_bool;
	func_897(var_45_bool, var_46_object, 0.1);
}


void func_1150(int var_77_int)
{
	int var_79_int;
	@GetVariable("branch", var_79_int);
	if(var_79_int == 0) {
		var_77_int = 1;
		return 2;
	EMIT "GOTO 0x48d";
	}
	if(var_79_int == 1) {
		var_77_int = 2;
		return 2;
	}
	var_77_int = 3;
}


