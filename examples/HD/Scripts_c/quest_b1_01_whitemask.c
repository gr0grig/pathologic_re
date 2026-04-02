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
			func_723();
			if(var_10_bool == 21088) {
				bool var_16_bool;
				func_824(var_1_object);
				if(var_16_bool != 0) {
					object var_24_object; object var_25_object;
					var_24_object = var_1_object;
					var_25_object = var_0_object;
					func_792();
					func_183(var_11_object, "Neutral");
					var_0_object->SetMessage(519919); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(519920, 21090, 21089); //@t
					var_0_object->AddReply(519929, 21099, 21098); //@t
					return 0;
				}
				bool var_52_bool;
				func_814(var_52_bool, var_1_object);
				if(!var_52_bool) { //@nz
					func_183(var_11_object, "Neutral");
					var_0_object->SetMessage(520031); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(520032, -1, 21216); //@t
					return 0;
				}
				bool var_69_bool;
				func_814(var_69_bool, var_1_object);
				if(var_69_bool != 0) {
					func_183(var_11_object, "Neutral");
					var_0_object->SetMessage(524628); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(524629, -1, 25969); //@t
					return 0;
				}
			}
			if(var_10_bool == 21099) {
				func_183(var_11_object, "Neutral");
				var_0_object->SetMessage(519930); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519931, 21090, 21100); //@t
				var_0_object->AddReply(519932, 21090, 21102); //@t
				return 0;
			}
			if(var_10_bool == 21090) {
				object var_88_object; object var_89_object;
				var_88_object = var_1_object;
				var_89_object = var_0_object;
				func_798();
				func_183(var_11_object, "Neutral");
				var_0_object->SetMessage(519921); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519922, 21092, 21091); //@t
				var_0_object->AddReply(519928, -1, 21097); //@t
				return 0;
			}
			if(var_10_bool == 21092) {
				func_183(var_11_object, "Neutral");
				var_0_object->SetMessage(519923); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519924, 21094, 21093); //@t
				var_0_object->AddReply(519927, -1, 21096); //@t
				return 0;
			}
			if(var_10_bool == 21094) {
				func_183(var_11_object, "Neutral");
				var_0_object->SetMessage(519925); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(519926, -1, 21095); //@t
				var_0_object->AddReply(527022, -1, 28306); //@t
				return 0;
			}
			var_3_string = true;
			bool var_134_bool;
			func_766(var_134_bool);
			if(var_134_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xce";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object)
	{
	
		for(;;) {
			func_416(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, (float)300, (float)100);
			@Sleep(3);
		}
	}
	EMIT "Return(); Pop(0)";

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object)
	{
		func_481(var_9_object, var_10_object);
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
			func_443(var_8_bool, var_9_object, var_10_int, var_13_bool);
			if(var_13_bool != 0) {
				if(!var_2_object) { //@nz
					func_712(var_4_bool);
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
	func_594(var_25_bool, var_26_object, 70.0);
	if(!var_25_bool) { //@nz
		var_14_int = -2;
		return 8;
	}
	object var_21_object;
	@CreateDialog(var_21_object);
	int var_73_int;
	func_760(var_73_int);
	var_21_object->SetNPCName(var_73_int);
	int var_74_int;
	func_758(var_74_int);
	var_21_object->SetNPCDescription(var_74_int);
	string var_75_string;
	func_762(var_75_string);
	var_21_object->SetPhoto(var_75_string);
	string var_76_string;
	func_764(var_76_string);
	var_21_object->SetPhoto2(var_76_string);
	int var_77_int;
	func_864(var_77_int);
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
		var_171_bool = !var_24_bool; //@nz
		if(var_171_bool == 0) goto Label_63;
		@sync();
		var_21_object->IsDialogEnd(var_24_bool);
	}
	
Label_63:
	object var_172_object;
	var_15_object = var_172_object;
	func_663();
	@StopDialog(var_21_object);
	var_21_object->GetReturnValue(-1);
	int var_23_int = var_14_int;
}
EMIT "Stack[-4] = 0";


void func_768(string var_41_string, int var_42_int)
{
	string var_44_string = "idle";
	if(var_42_int != 0)
		var_44_string += var_42_int;
	var_44_string = var_41_string;
}


void func_775(int var_35_int)
{
	int var_38_int; bool var_39_bool;
	var_38_int = 0;
	
	for(;;) {
		string var_41_string; int var_42_int;
		var_38_int = var_42_int;
		func_768(var_41_string, var_42_int);
		@HasAnimation(var_39_bool, "all", var_41_string);
		if(!var_39_bool) //@nz
			break;
		var_38_int += 1;
	}
	var_38_int = var_35_int;
}


void func_663(void)
{
	bool var_174_bool;
	@CameraSwitchToNormal(true);
	bool var_176_bool;
	func_766(var_176_bool);
	if(var_176_bool != 0) {
	} else {
		@HasAnimationTrack(var_174_bool, "head");
		if(var_174_bool == 0) goto Label_680;
		@UnlookAsync("head");
	}
Label_680:
	
}


// @pe
void func_792(void)
{
	@SetVariable("oob1WhiteMask1", 1);
}


void func_798(void)
{
	object var_92_object;
	func_847(var_92_object);
	object var_91_object;
	var_92_object = var_91_object;
	float var_103_float;
	func_745(var_103_float);
	var_91_object->AddMark("b1BigVlad11Hours", "pt_map_bigvlad", 3, 524625, var_103_float);
}
EMIT "Stack[-1] = 0";


// @pe
void func_416(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_10_float, float var_11_float)
{
	bool var_12_bool;
	func_589(var_12_bool);
	if(!var_12_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_10_float;
	var_1_object = var_11_float;
	@SetTimer(10, 1.0);
	func_495();
	if(!false) //@nz
		@KillTimer(10);
}


void func_681(string var_131_string)
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
void func_814(bool var_147_bool, object var_148_object)
{
	object var_150_object;
	var_148_object = var_150_object;
	func_836(var_150_object);
	bool var_149_bool;
	if(var_149_bool != 0) {
		var_147_bool = true;
		return 0;
	}
	var_147_bool = false;
}


// @pe
void func_183(object var_2_object, string var_105_string)
{
	bool var_106_bool;
	func_766(var_106_bool);
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
	func_697(var_109_string, var_110_bool);
	var_2_object = var_105_string;
	
}


// @pe
void func_824(bool var_93_bool)
{
	int var_95_int;
	func_740(var_95_int, "oob1WhiteMask1");
	if(var_95_int == 0) {
		var_93_bool = true;
		return 0;
	}
	var_93_bool = false;
}


void func_697(string var_109_string, bool var_110_bool)
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


void func_443(object var_0_object, object var_1_object, bool var_4_bool, bool var_13_bool)
{
	if(var_4_bool == null)
		var_13_bool = false;
	float var_17_float;
	func_581(var_17_float, var_4_bool);
	float var_15_float = sqrt(var_17_float);
	if(var_2_object != 0)
		var_15_float -= var_1_object;
	var_13_bool = var_15_float < var_0_object;
}


void func_574(bool var_60_bool)
{
	var_60_bool = true;
}


void func_576(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_836(bool var_149_bool)
{
	int var_151_int;
	func_750(var_151_int);
	if(var_151_int >= 11)
		var_149_bool = true;
	var_149_bool = false;
}


void func_581(float var_17_float, object var_18_object)
{
	cvector var_22_cvector;
	@GetPosition(var_22_cvector);
	cvector var_23_cvector;
	var_18_object->GetPosition(var_23_cvector);
	var_17_float = (var_23_cvector - var_22_cvector) | (var_23_cvector - var_22_cvector);
}


void func_712(object var_27_object)
{
	float var_30_float;
	var_27_object->GetEyesHeight(var_30_float);
	cvector var_31_cvector = [0.0, 0.0, 0.0];
	var_32_float = GetByIndex(var_31_cvector, 1);
	var_30_float = var_32_float;
	SetByIndex(var_31_cvector, 1) = var_32_float;
	@LookAsync(var_27_object, "head", var_31_cvector);
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_86_object, object var_87_object)
{
	var_0_object = var_87_object;
	var_1_object = var_86_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_93_bool;
		func_824(var_1_object);
		if(var_93_bool != 0) {
			object var_101_object; object var_102_object;
			var_101_object = var_1_object;
			var_102_object = var_0_object;
			func_792();
			func_183(var_87_object, "Neutral");
			var_0_object->SetMessage(519919); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(519920, 21090, 21089); //@t
			var_0_object->AddReply(519929, 21099, 21098); //@t
		} else {
					bool var_147_bool;
					func_814(var_147_bool, var_1_object);
					var_158_bool = !var_147_bool; //@nz
					if(var_158_bool == 0) goto Label_131;
					func_183(var_87_object, "Neutral");
					var_0_object->SetMessage(520031); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(520032, -1, 21216); //@t
		}
	}
Label_153:
	for(;;) {
		bool var_129_bool;
		func_766(var_129_bool);
		if(var_129_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_681(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_182;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_182:
			}
			bool var_164_bool;
			func_814(var_164_bool, var_1_object);
			if(var_164_bool != 0) {
			func_183(var_87_object, "Neutral");
			var_0_object->SetMessage(524628); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(524629, -1, 25969); //@t
			goto Label_153;
		}
		return 0;
	}
}
EMIT "GOTO 0x4e";


void func_589(bool var_12_bool)
{
	bool var_14_bool;
	@IsLoaded(var_14_bool);
	var_14_bool = var_12_bool;
}


void func_847(object var_92_object)
{
	object var_95_object; object var_96_object;
	@GetMainOutdoorScene(var_95_object);
	if(var_95_object == null) {
		@Trace("Can't find main outdoor scene");
		var_96_object = null;
		var_96_object = var_92_object;
	}
	var_95_object->GetMap(var_96_object);
	var_96_object = var_92_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_594(bool var_25_bool, object var_26_object, float var_27_float)
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
	func_730(var_52_cvector, (var_41_cvector ^ [0.0, 1.0, 0.0]));
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
	func_766(var_68_bool);
	if(var_68_bool != 0) {
	} else {
		@HasAnimationTrack(var_45_bool, "head");
		if(var_45_bool == 0) goto Label_657;
		@LookAsyncCamera("head");
	}
Label_657:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_25_bool = true;
	
}


void func_723(void)
{
	bool var_13_bool;
	func_766(var_13_bool);
	if(var_13_bool != 0)
		@lshStopSpeech();
}


void func_730(cvector var_52_cvector, cvector var_53_cvector)
{
	float var_56_float = sqrt(var_53_cvector | var_53_cvector);
	if(var_56_float < 0.000001)
		var_52_cvector = [0.0, 0.0, 0.0];
	var_52_cvector = var_53_cvector / var_56_float;
}


void func_864(int var_77_int)
{
	int var_79_int;
	@GetVariable("branch", var_79_int);
	if(var_79_int == 0) {
		var_77_int = 1;
		return 2;
	EMIT "GOTO 0x36f";
	}
	if(var_79_int == 1) {
		var_77_int = 2;
		return 2;
	}
	var_77_int = 3;
}


// @pe
void func_481(object var_2_object, string var_3_string)
{
	func_576();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
}


void func_740(int var_95_int, string var_96_string)
{
	int var_98_int;
	@GetVariable(var_96_string, var_98_int);
	var_98_int = var_95_int;
}


void func_745(float var_103_float)
{
	float var_105_float;
	@GetGameTime(var_105_float);
	var_105_float = var_103_float;
}


void func_750(int var_151_int)
{
	float var_153_float;
	@GetGameTime(var_153_float);
	int var_154_int;
	var_153_float = var_154_int;
	var_151_int = var_154_int % 24;
}


void func_495(void)
{
	int var_28_int; int var_29_int; bool var_30_bool; float var_31_float; bool var_32_bool;
	@WaitForAnimEnd();
	bool var_33_bool;
	func_589(var_33_bool);
	if(!var_33_bool) //@nz
		return 14;
	int var_35_int;
	func_775(var_35_int);
	int var_26_int;
	var_35_int = var_26_int;
	int var_27_int = 0;
	
	for(;;) {
		bool var_48_bool = false;
		if(var_27_int < 5) {
			bool var_51_bool;
			func_589(var_51_bool);
			if(var_51_bool != 0)
				var_48_bool = true;
		}
		if(var_48_bool != 0) {
			@irand(var_28_int, 3);
			if(var_28_int == 0) {
				if(var_26_int == 0) goto Label_542;
				@irand(var_29_int, var_26_int);
				string var_57_string; int var_58_int;
				var_29_int = var_58_int;
				func_768(var_57_string, var_58_int);
				@PlayAnimation("all", var_57_string);
				@WaitForAnimEnd(var_30_bool);
				if(!var_30_bool) { //@nz
				} else {
			} else {
			if(var_28_int == 1) {
				@rand(var_31_float, 4);
				@Sleep((var_31_float + 1), var_32_bool);
				if(!var_32_bool) { //@nz
					goto Label_571;
				}
			} else if(var_27_int != 0) {
				goto Label_571;
			}
			}
					bool var_60_bool;
					func_574(var_60_bool);
					var_61_bool = !var_60_bool; //@nz
					if(var_61_bool == 0) goto Label_566;
			}
		}
	Label_571:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_566:
		@ResetAAS();
		var_27_int += 1;
	}
	
}


void func_758(int var_74_int)
{
	var_74_int = 515569;
}


void func_760(int var_73_int)
{
	var_73_int = 503354;
}


void func_762(string var_75_string)
{
	var_75_string = "ui/NPC_wmask.png";
}


void func_764(string var_76_string)
{
	var_76_string = "ui/NPC_wmask_b.png";
}


void func_766(bool var_68_bool)
{
	var_68_bool = false;
}


