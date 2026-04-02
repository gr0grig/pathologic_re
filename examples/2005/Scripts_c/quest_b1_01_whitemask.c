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
			func_703();
			if(var_10_bool == 21088) {
				bool var_16_bool;
				func_804(var_1_object);
				if(var_16_bool != 0) {
					object var_24_object; object var_25_object;
					var_24_object = var_1_object;
					var_25_object = var_0_object;
					func_772();
					func_183(var_11_object, "Neutral");
					var_0_object->SetMessage(519919); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(519920, 21090, 21089); //@t
					var_0_object->AddReply(519929, 21099, 21098); //@t
					return 0;
				}
				bool var_47_bool;
				func_794(var_47_bool, var_1_object);
				if(!var_47_bool) { //@nz
					func_183(var_11_object, "Neutral");
					var_0_object->SetMessage(520031); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(520032, -1, 21216); //@t
					return 0;
				}
				bool var_64_bool;
				func_794(var_64_bool, var_1_object);
				if(var_64_bool != 0) {
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
				object var_83_object; object var_84_object;
				var_83_object = var_1_object;
				var_84_object = var_0_object;
				func_778();
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
			bool var_129_bool;
			func_746(var_129_bool);
			if(var_129_bool != 0)
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
					func_692(var_4_bool);
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
	int var_72_int;
	func_740(var_72_int);
	var_21_object->SetNPCName(var_72_int);
	int var_73_int;
	func_738(var_73_int);
	var_21_object->SetNPCDescription(var_73_int);
	string var_74_string;
	func_742(var_74_string);
	var_21_object->SetPhoto(var_74_string);
	string var_75_string;
	func_744(var_75_string);
	var_21_object->SetPhoto2(var_75_string);
	int var_76_int;
	func_844(var_76_int);
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
		var_160_bool = !var_24_bool; //@nz
		if(var_160_bool == 0) goto Label_63;
		@sync();
		var_21_object->IsDialogEnd(var_24_bool);
	}
	
Label_63:
	object var_161_object;
	var_15_object = var_161_object;
	func_662();
	@StopDialog(var_21_object);
	var_21_object->GetReturnValue(-1);
	int var_23_int = var_14_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_772(void)
{
	@SetVariable("oob1WhiteMask1", 1);
}


void func_778(void)
{
	object var_87_object;
	func_827(var_87_object);
	object var_86_object;
	var_87_object = var_86_object;
	float var_98_float;
	func_725(var_98_float);
	var_86_object->AddMark("b1BigVlad11Hours", "pt_map_bigvlad", 3, 524625, var_98_float);
}
EMIT "Stack[-1] = 0";


void func_662(void)
{
	bool var_163_bool;
	@CameraSwitchToNormal();
	bool var_164_bool;
	func_746(var_164_bool);
	if(var_164_bool != 0) {
	} else {
		@HasAnimationTrack(var_163_bool, "head");
		if(var_163_bool == 0) goto Label_678;
		@UnlookAsync("head");
	}
Label_678:
	
}


// @pe
void func_794(bool var_136_bool, object var_137_object)
{
	object var_139_object;
	var_137_object = var_139_object;
	func_816(var_139_object);
	bool var_138_bool;
	if(var_138_bool != 0) {
		var_136_bool = true;
		return 0;
	}
	var_136_bool = false;
}


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


// @pe
void func_804(bool var_92_bool)
{
	int var_94_int;
	func_720(var_94_int, "oob1WhiteMask1");
	if(var_94_int == 0) {
		var_92_bool = true;
		return 0;
	}
	var_92_bool = false;
}


void func_679(string var_125_string)
{
	float var_128_float; float var_129_float;
	@lshGetAnimTimes(var_125_string, var_128_float, var_129_float);
	@lshPlayAnimation(var_128_float, var_129_float, false);
}


void func_686(string var_108_string, bool var_109_bool)
{
	float var_114_float; float var_115_float;
	@lshGetAnimTimes(var_108_string, var_114_float, var_115_float);
	@lshPlayAnimation(var_114_float, var_115_float, var_109_bool);
}


// @pe
void func_816(bool var_138_bool)
{
	int var_140_int;
	func_730(var_140_int);
	if(var_140_int >= 11)
		var_138_bool = true;
	var_138_bool = false;
}


void func_692(object var_27_object)
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
void func_183(object var_2_object, string var_104_string)
{
	bool var_105_bool;
	func_746(var_105_bool);
	if(!var_105_bool) //@nz
		return 0;
	if(var_104_string == var_2_object)
		return 0;
	string var_108_string; bool var_109_bool;
	var_104_string = var_108_string;
	if(var_104_string == "")
		var_109_bool = false;
	else
		var_109_bool = true;
	func_686(var_108_string, var_109_bool);
	var_2_object = var_104_string;
	
}


void func_827(object var_87_object)
{
	object var_90_object; object var_91_object;
	@GetMainOutdoorScene(var_90_object);
	if(var_90_object == null) {
		@Trace("Can't find main outdoor scene");
		var_91_object = null;
		var_91_object = var_87_object;
	}
	var_90_object->GetMap(var_91_object);
	var_91_object = var_87_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


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


void func_703(void)
{
	bool var_13_bool;
	func_746(var_13_bool);
	if(var_13_bool != 0)
		@lshStopSpeech();
}


void func_576(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_581(float var_17_float, object var_18_object)
{
	cvector var_22_cvector;
	@GetPosition(var_22_cvector);
	cvector var_23_cvector;
	var_18_object->GetPosition(var_23_cvector);
	var_17_float = (var_23_cvector - var_22_cvector) | (var_23_cvector - var_22_cvector);
}


void func_710(cvector var_52_cvector, cvector var_53_cvector)
{
	float var_56_float = sqrt(var_53_cvector | var_53_cvector);
	if(var_56_float < 0.000001)
		var_52_cvector = [0.0, 0.0, 0.0];
	var_52_cvector = var_53_cvector / var_56_float;
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_85_object, object var_86_object)
{
	var_0_object = var_86_object;
	var_1_object = var_85_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_92_bool;
		func_804(var_1_object);
		if(var_92_bool != 0) {
			object var_100_object; object var_101_object;
			var_100_object = var_1_object;
			var_101_object = var_0_object;
			func_772();
			func_183(var_86_object, "Neutral");
			var_0_object->SetMessage(519919); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(519920, 21090, 21089); //@t
			var_0_object->AddReply(519929, 21099, 21098); //@t
		} else {
					bool var_136_bool;
					func_794(var_136_bool, var_1_object);
					var_147_bool = !var_136_bool; //@nz
					if(var_147_bool == 0) goto Label_131;
					func_183(var_86_object, "Neutral");
					var_0_object->SetMessage(520031); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(520032, -1, 21216); //@t
		}
	}
Label_153:
	for(;;) {
		bool var_123_bool;
		func_746(var_123_bool);
		if(var_123_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_679(var_2_object);
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
			bool var_153_bool;
			func_794(var_153_bool, var_1_object);
			if(var_153_bool != 0) {
			func_183(var_86_object, "Neutral");
			var_0_object->SetMessage(524628); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(524629, -1, 25969); //@t
			goto Label_153;
		}
		return 0;
	}
}
EMIT "GOTO 0x4e";


void func_844(int var_76_int)
{
	int var_78_int;
	@GetVariable("branch", var_78_int);
	if(var_78_int == 0) {
		var_76_int = 1;
		return 2;
	EMIT "GOTO 0x35b";
	}
	if(var_78_int == 1) {
		var_76_int = 2;
		return 2;
	}
	var_76_int = 3;
}


void func_589(bool var_12_bool)
{
	bool var_14_bool;
	@IsLoaded(var_14_bool);
	var_14_bool = var_12_bool;
}


void func_720(int var_94_int, string var_95_string)
{
	int var_97_int;
	@GetVariable(var_95_string, var_97_int);
	var_97_int = var_94_int;
}


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
	func_710(var_52_cvector, (var_41_cvector ^ [0.0, 1.0, 0.0]));
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
	func_746(var_67_bool);
	if(var_67_bool != 0) {
	} else {
		@HasAnimationTrack(var_45_bool, "head");
		if(var_45_bool == 0) goto Label_656;
		@LookAsyncCamera("head");
	}
Label_656:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_25_bool = true;
	
}


void func_725(float var_98_float)
{
	float var_100_float;
	@GetGameTime(var_100_float);
	var_100_float = var_98_float;
}


void func_730(int var_140_int)
{
	float var_142_float;
	@GetGameTime(var_142_float);
	int var_143_int;
	var_142_float = var_143_int;
	var_140_int = var_143_int % 24;
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


void func_738(int var_73_int)
{
	var_73_int = 515569;
}


void func_740(int var_72_int)
{
	var_72_int = 503354;
}


void func_742(string var_74_string)
{
	var_74_string = "ui/NPC_wmask.png";
}


void func_744(string var_75_string)
{
	var_75_string = "ui/NPC_wmask_b.png";
}


void func_746(bool var_67_bool)
{
	var_67_bool = false;
}


void func_748(string var_41_string, int var_42_int)
{
	string var_44_string = "idle";
	if(var_42_int != 0)
		var_44_string += var_42_int;
	var_44_string = var_41_string;
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
	func_755(var_35_int);
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
				func_748(var_57_string, var_58_int);
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


void func_755(int var_35_int)
{
	int var_38_int; bool var_39_bool;
	var_38_int = 0;
	
	for(;;) {
		string var_41_string; int var_42_int;
		var_38_int = var_42_int;
		func_748(var_41_string, var_42_int);
		@HasAnimation(var_39_bool, "all", var_41_string);
		if(!var_39_bool) //@nz
			break;
		var_38_int += 1;
	}
	var_38_int = var_35_int;
}


