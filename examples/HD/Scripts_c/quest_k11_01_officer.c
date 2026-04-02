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
			func_705();
			if(var_11_object == 29394) {
				object var_16_object; object var_17_object;
				var_16_object = var_1_object;
				var_17_object = var_0_object;
				func_779();
			}
			if(var_10_bool == 29393) {
				bool var_51_bool;
				func_793(var_1_object);
				if(var_51_bool != 0) {
					object var_59_object; object var_60_object;
					var_59_object = var_1_object;
					var_60_object = var_0_object;
					func_773();
					func_162(var_11_object, "Neutral");
					var_0_object->SetMessage(528031); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(530252, 31642, 31641); //@t
					var_0_object->AddReply(530261, 31655, 31650); //@t
					return 0;
				}
				func_162(var_11_object, "Neutral");
				var_0_object->SetMessage(528033); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528034, -1, 29396); //@t
				var_0_object->AddReply(530257, -1, 31646); //@t
				return 0;
			}
			if(var_10_bool == 31655) {
				func_162(var_11_object, "Neutral");
				var_0_object->SetMessage(530267); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530268, 31644, 31656); //@t
				return 0;
			}
			if(var_10_bool == 31642) {
				func_162(var_11_object, "Neutral");
				var_0_object->SetMessage(530253); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530254, 31644, 31643); //@t
				return 0;
			}
			if(var_10_bool == 31644) {
				func_162(var_11_object, "Neutral");
				var_0_object->SetMessage(530255); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530256, 31647, 31645); //@t
				var_0_object->AddReply(530262, 31652, 31651); //@t
				return 0;
			}
			if(var_10_bool == 31652) {
				func_162(var_11_object, "Neutral");
				var_0_object->SetMessage(530263); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530264, 31647, 31653); //@t
				return 0;
			}
			if(var_10_bool == 31647) {
				func_162(var_11_object, "Neutral");
				var_0_object->SetMessage(530258); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530259, 31649, 31648); //@t
				return 0;
			}
			if(var_10_bool == 31649) {
				func_162(var_11_object, "Neutral");
				var_0_object->SetMessage(530260); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528032, -1, 29394); //@t
				return 0;
			}
			var_3_string = true;
			bool var_140_bool;
			func_747(var_140_bool);
			if(var_140_bool != 0)
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
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object)
	{
	
		for(;;) {
			func_398(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, (float)300, (float)100);
			@Sleep(3);
		}
	}
	EMIT "Return(); Pop(0)";

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object)
	{
		func_463(var_9_object, var_10_object);
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
			func_425(var_8_bool, var_9_object, var_10_int, var_13_bool);
			if(var_13_bool != 0) {
				if(!var_2_object) { //@nz
					func_694(var_4_bool);
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
	func_576(var_25_bool, var_26_object, 70.0);
	if(!var_25_bool) { //@nz
		var_14_int = -2;
		return 8;
	}
	object var_21_object;
	@CreateDialog(var_21_object);
	int var_73_int;
	func_741(var_73_int);
	var_21_object->SetNPCName(var_73_int);
	int var_74_int;
	func_739(var_74_int);
	var_21_object->SetNPCDescription(var_74_int);
	string var_75_string;
	func_743(var_75_string);
	var_21_object->SetPhoto(var_75_string);
	string var_76_string;
	func_745(var_76_string);
	var_21_object->SetPhoto2(var_76_string);
	int var_77_int;
	func_859(var_77_int);
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
		var_155_bool = !var_24_bool; //@nz
		if(var_155_bool == 0) goto Label_63;
		@sync();
		var_21_object->IsDialogEnd(var_24_bool);
	}
	
Label_63:
	object var_156_object;
	var_15_object = var_156_object;
	func_645();
	@StopDialog(var_21_object);
	var_21_object->GetReturnValue(-1);
	int var_23_int = var_14_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_773(void)
{
	@SetVariable("ook11Officer1", 1);
}


void func_645(void)
{
	bool var_158_bool;
	@CameraSwitchToNormal(true);
	bool var_160_bool;
	func_747(var_160_bool);
	if(var_160_bool != 0) {
	} else {
		@HasAnimationTrack(var_158_bool, "head");
		if(var_158_bool == 0) goto Label_662;
		@UnlookAsync("head");
	}
Label_662:
	
}


// @pe
void func_779(void)
{
	@SetVariable("k11q01", 3);
	func_805();
	bool var_43_bool;
	func_727(var_43_bool, "quest_k11_01", "init_house_petr");
}


// @pe
void func_398(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_10_float, float var_11_float)
{
	bool var_12_bool;
	func_571(var_12_bool);
	if(!var_12_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_10_float;
	var_1_object = var_11_float;
	@SetTimer(10, 1.0);
	func_477();
	if(!false) //@nz
		@KillTimer(10);
}


void func_663(string var_131_string)
{
	bool var_135_bool; float var_136_float; float var_137_float;
	@lshHasAnimation(var_135_bool, var_131_string);
	if(var_135_bool != 0) {
		@lshGetAnimTimes(var_131_string, var_136_float, var_137_float);
		@lshPlayAnimation(var_136_float, var_137_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_131_string);
	}
	
}


// @pe
void func_793(bool var_93_bool)
{
	int var_95_int;
	func_722(var_95_int, "ook11Officer1");
	if(var_95_int == 0) {
		var_93_bool = true;
		return 0;
	}
	var_93_bool = false;
}


// @pe
void func_162(object var_2_object, string var_105_string)
{
	bool var_106_bool;
	func_747(var_106_bool);
	if(!var_106_bool) //@nz
		return 0;
	if(var_105_string == var_2_object)
		return 0;
	string var_109_string; bool var_110_bool;
	var_105_string = var_109_string;
	if(var_105_string == "")
		var_110_bool = false;
	else
		var_110_bool = true;
	func_679(var_109_string, var_110_bool);
	var_2_object = var_105_string;
	
}


void func_805(void)
{
	object var_21_object;
	@CreateDiaryEntry(var_21_object, 486, 1, 528053);
	bool var_25_bool; object var_26_object;
	var_21_object = var_26_object;
	func_831(var_25_bool, var_26_object, 480);
}
EMIT "Stack[-1] = 0";


void func_679(string var_109_string, bool var_110_bool)
{
	bool var_116_bool; float var_117_float; float var_118_float;
	@lshHasAnimation(var_116_bool, var_109_string);
	if(var_116_bool != 0) {
		@lshGetAnimTimes(var_109_string, var_117_float, var_118_float);
		@lshPlayAnimation(var_117_float, var_118_float, var_110_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_109_string);
	}
	
}


void func_425(object var_0_object, object var_1_object, bool var_4_bool, bool var_13_bool)
{
	if(var_4_bool == null)
		var_13_bool = false;
	float var_17_float;
	func_563(var_17_float, var_4_bool);
	float var_15_float = sqrt(var_17_float);
	if(var_2_object != 0)
		var_15_float -= var_1_object;
	var_13_bool = var_15_float < var_0_object;
}


void func_556(bool var_60_bool)
{
	var_60_bool = true;
}


void func_558(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_818(object var_34_object)
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


void func_563(float var_17_float, object var_18_object)
{
	cvector var_22_cvector;
	@GetPosition(var_22_cvector);
	cvector var_23_cvector;
	var_18_object->GetPosition(var_23_cvector);
	var_17_float = (var_23_cvector - var_22_cvector) | (var_23_cvector - var_22_cvector);
}


void func_694(object var_27_object)
{
	float var_30_float;
	var_27_object->GetEyesHeight(var_30_float);
	cvector var_31_cvector = [0.0, 0.0, 0.0];
	var_32_float = GetByIndex(var_31_cvector, 1);
	var_30_float = var_32_float;
	SetByIndex(var_31_cvector, 1) = var_32_float;
	@LookAsync(var_27_object, "head", var_31_cvector);
}


void func_571(bool var_12_bool)
{
	bool var_14_bool;
	@IsLoaded(var_14_bool);
	var_14_bool = var_12_bool;
}


void func_831(bool var_25_bool, object var_26_object, int var_27_int)
{
	object var_34_object;
	func_818(var_34_object);
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


void func_576(bool var_25_bool, object var_26_object, float var_27_float)
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
	func_712(var_52_cvector, (var_41_cvector ^ [0.0, 1.0, 0.0]));
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
	func_747(var_68_bool);
	if(var_68_bool != 0) {
	} else {
		@HasAnimationTrack(var_45_bool, "head");
		if(var_45_bool == 0) goto Label_639;
		@LookAsyncCamera("head");
	}
Label_639:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_25_bool = true;
	
}


void func_705(void)
{
	bool var_13_bool;
	func_747(var_13_bool);
	if(var_13_bool != 0)
		@lshStopSpeech();
}


void func_712(cvector var_52_cvector, cvector var_53_cvector)
{
	float var_56_float = sqrt(var_53_cvector | var_53_cvector);
	if(var_56_float < 0.000001)
		var_52_cvector = [0.0, 0.0, 0.0];
	var_52_cvector = var_53_cvector / var_56_float;
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
			func_773();
			func_162(var_87_object, "Neutral");
			var_0_object->SetMessage(528031); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(530252, 31642, 31641); //@t
			var_0_object->AddReply(530261, 31655, 31650); //@t
		} else {
					func_162(var_87_object, "Neutral");
					var_0_object->SetMessage(528033); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(528034, -1, 29396); //@t
					var_0_object->AddReply(530257, -1, 31646); //@t
		}
	}
	for(;;) {
		bool var_129_bool;
		func_747(var_129_bool);
		if(var_129_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_663(var_2_object);
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


// @pe
void func_463(object var_2_object, string var_3_string)
{
	func_558();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
}


void func_722(int var_95_int, string var_96_string)
{
	int var_98_int;
	@GetVariable(var_96_string, var_98_int);
	var_98_int = var_95_int;
}


void func_727(bool var_43_bool, string var_44_string, string var_45_string)
{
	object var_47_object;
	@FindActor(var_47_object, var_44_string);
	if(var_47_object == null)
		var_43_bool = false;
	@Trigger(var_47_object, var_45_string);
	var_43_bool = true;
}
EMIT "Stack[-1] = 0";


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


void func_477(void)
{
	int var_28_int; int var_29_int; bool var_30_bool; float var_31_float; bool var_32_bool;
	@WaitForAnimEnd();
	bool var_33_bool;
	func_571(var_33_bool);
	if(!var_33_bool) //@nz
		return 14;
	int var_35_int;
	func_756(var_35_int);
	int var_26_int;
	var_35_int = var_26_int;
	int var_27_int = 0;
	
	for(;;) {
		bool var_48_bool = false;
		if(var_27_int < 5) {
			bool var_51_bool;
			func_571(var_51_bool);
			if(var_51_bool != 0)
				var_48_bool = true;
		}
		if(var_48_bool != 0) {
			@irand(var_28_int, 3);
			if(var_28_int == 0) {
				if(var_26_int == 0) goto Label_524;
				@irand(var_29_int, var_26_int);
				string var_57_string; int var_58_int;
				var_29_int = var_58_int;
				func_749(var_57_string, var_58_int);
				@PlayAnimation("all", var_57_string);
				@WaitForAnimEnd(var_30_bool);
				if(!var_30_bool) { //@nz
				} else {
			} else {
			if(var_28_int == 1) {
				@rand(var_31_float, 4);
				@Sleep((var_31_float + 1), var_32_bool);
				if(!var_32_bool) { //@nz
					goto Label_553;
				}
			} else if(var_27_int != 0) {
				goto Label_553;
			}
			}
					bool var_60_bool;
					func_556(var_60_bool);
					var_61_bool = !var_60_bool; //@nz
					if(var_61_bool == 0) goto Label_548;
			}
		}
	Label_553:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_548:
		@ResetAAS();
		var_27_int += 1;
	}
	
}


void func_739(int var_74_int)
{
	var_74_int = 515597;
}


void func_741(int var_73_int)
{
	var_73_int = 514841;
}


void func_743(string var_75_string)
{
	var_75_string = "ui/NPC_Citizen2.png";
}


void func_745(string var_76_string)
{
	var_76_string = "ui/NPC_Citizen2_b.png";
}


void func_747(bool var_68_bool)
{
	var_68_bool = false;
}


void func_749(string var_41_string, int var_42_int)
{
	string var_44_string = "idle";
	if(var_42_int != 0)
		var_44_string += var_42_int;
	var_44_string = var_41_string;
}


void func_756(int var_35_int)
{
	int var_38_int; bool var_39_bool;
	var_38_int = 0;
	
	for(;;) {
		string var_41_string; int var_42_int;
		var_38_int = var_42_int;
		func_749(var_41_string, var_42_int);
		@HasAnimation(var_39_bool, "all", var_41_string);
		if(!var_39_bool) //@nz
			break;
		var_38_int += 1;
	}
	var_38_int = var_35_int;
}


