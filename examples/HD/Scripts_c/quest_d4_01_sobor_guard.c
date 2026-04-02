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
			func_727();
			if(var_11_object == 38055) {
				object var_16_object; object var_17_object;
				var_16_object = var_1_object;
				var_17_object = var_0_object;
				func_773();
			}
			if(var_11_object == 38069) {
				object var_22_object; object var_23_object;
				var_22_object = var_1_object;
				var_23_object = var_0_object;
				func_779();
			}
			if(var_10_bool == 38054) {
				bool var_28_bool = false;
				bool var_29_bool;
				func_785(var_1_object);
				if(var_29_bool != 0) {
					bool var_37_bool;
					func_797(var_1_object);
					if(!var_37_bool) //@nz
						var_28_bool = true;
				}
				if(var_28_bool != 0) {
					func_182(var_11_object, "Neutral");
					var_0_object->SetMessage(536270); //@t
					var_0_object->ClearReplies(); //@t
					bool var_62_bool;
					func_809(var_1_object);
					if(var_62_bool != 0)
						var_0_object->AddReply(536271, 38074, 38055); //@t
					var_0_object->AddReply(536289, -1, 38073); //@t
					return 0;
				}
				func_182(var_11_object, "Neutral");
				var_0_object->SetMessage(536284); //@t
				var_0_object->ClearReplies(); //@t
				bool var_76_bool;
				func_821(var_1_object);
				if(var_76_bool != 0)
					var_0_object->AddReply(536285, 38070, 38069); //@t
				var_0_object->AddReply(536288, -1, 38072); //@t
				var_0_object->AddReply(536291, -1, 38075); //@t
				return 0;
			}
			if(var_10_bool == 38070) {
				func_182(var_11_object, "Neutral");
				var_0_object->SetMessage(536286); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536287, 38076, 38071); //@t
				return 0;
			}
			if(var_10_bool == 38076) {
				func_182(var_11_object, "Neutral");
				var_0_object->SetMessage(536292); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536293, 38079, 38077); //@t
				var_0_object->AddReply(536294, -1, 38078); //@t
				return 0;
			}
			if(var_10_bool == 38079) {
				func_182(var_11_object, "Neutral");
				var_0_object->SetMessage(536295); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536296, -1, 38080); //@t
				return 0;
			}
			if(var_10_bool == 38074) {
				func_182(var_11_object, "Neutral");
				var_0_object->SetMessage(536290); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(536297, -1, 38081); //@t
				var_0_object->AddReply(536298, -1, 38082); //@t
				var_0_object->AddReply(536299, -1, 38083); //@t
				return 0;
			}
			var_3_string = true;
			bool var_128_bool;
			func_858(var_128_bool);
			if(var_128_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xcd";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object)
	{
	
		for(;;) {
			@Sleep(1);
			func_420(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, (float)300, (float)100);
		}
	}
	EMIT "Return(); Pop(0)";

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object)
	{
		func_485(var_9_object, var_10_object);
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
			func_447(var_8_bool, var_9_object, var_10_int, var_13_bool);
			if(var_13_bool != 0) {
				if(!var_2_object) { //@nz
					func_716(var_4_bool);
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
	func_598(var_25_bool, var_26_object, 70.0);
	if(!var_25_bool) { //@nz
		var_14_int = -2;
		return 8;
	}
	object var_21_object;
	@CreateDialog(var_21_object);
	int var_73_int;
	func_852(var_73_int);
	var_21_object->SetNPCName(var_73_int);
	int var_74_int;
	func_850(var_74_int);
	var_21_object->SetNPCDescription(var_74_int);
	string var_75_string;
	func_854(var_75_string);
	var_21_object->SetPhoto(var_75_string);
	string var_76_string;
	func_856(var_76_string);
	var_21_object->SetPhoto2(var_76_string);
	int var_77_int;
	func_833(var_77_int);
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
		var_174_bool = !var_24_bool; //@nz
		if(var_174_bool == 0) goto Label_63;
		@sync();
		var_21_object->IsDialogEnd(var_24_bool);
	}
	
Label_63:
	object var_175_object;
	var_15_object = var_175_object;
	func_667();
	@StopDialog(var_21_object);
	var_21_object->GetReturnValue(-1);
	int var_23_int = var_14_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_773(void)
{
	@SetVariable("ood4SoborGuard1", 1);
}


// @pe
void func_779(void)
{
	@SetVariable("ood4TheaterGuard2", 1);
}


// @pe
void func_785(bool var_94_bool)
{
	int var_96_int;
	func_744(var_96_int, "d4q01KeyWasted");
	if(var_96_int != 0) {
		var_94_bool = true;
		return 0;
	}
	var_94_bool = false;
}


void func_667(void)
{
	bool var_177_bool;
	@CameraSwitchToNormal(true);
	bool var_179_bool;
	func_858(var_179_bool);
	if(var_179_bool != 0) {
	} else {
		@HasAnimationTrack(var_177_bool, "head");
		if(var_177_bool == 0) goto Label_684;
		@UnlookAsync("head");
	}
Label_684:
	
}


// @pe
void func_797(bool var_102_bool)
{
	int var_104_int;
	func_744(var_104_int, "d4q01");
	if(var_104_int == 1000)
		var_102_bool = true;
	var_102_bool = false;
}


// @pe
void func_420(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_11_float, float var_12_float)
{
	bool var_13_bool;
	func_593(var_13_bool);
	if(!var_13_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_11_float;
	var_1_object = var_12_float;
	@SetTimer(10, 1.0);
	func_499();
	if(!false) //@nz
		@KillTimer(10);
}


// @pe
void func_809(bool var_127_bool)
{
	int var_129_int;
	func_744(var_129_int, "ood4SoborGuard1");
	if(var_129_int == 0) {
		var_127_bool = true;
		return 0;
	}
	var_127_bool = false;
}


void func_685(string var_141_string)
{
	bool var_145_bool; float var_146_float; float var_147_float;
	@lshHasAnimation(var_145_bool, var_141_string);
	if(var_145_bool != 0) {
		@lshGetAnimTimes(var_141_string, var_146_float, var_147_float);
		@lshPlayAnimation(var_146_float, var_147_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_141_string);
	}
	
}


// @pe
void func_821(bool var_159_bool)
{
	int var_161_int;
	func_744(var_161_int, "ood4TheaterGuard2");
	if(var_161_int == 0) {
		var_159_bool = true;
		return 0;
	}
	var_159_bool = false;
}


// @pe
void func_182(object var_2_object, string var_109_string)
{
	bool var_110_bool;
	func_858(var_110_bool);
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
	func_701(var_113_string, var_114_bool);
	var_2_object = var_109_string;
	
}


void func_701(string var_113_string, bool var_114_bool)
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


void func_447(object var_0_object, object var_1_object, bool var_4_bool, bool var_13_bool)
{
	if(var_4_bool == null)
		var_13_bool = false;
	float var_17_float;
	func_585(var_17_float, var_4_bool);
	float var_15_float = sqrt(var_17_float);
	if(var_2_object != 0)
		var_15_float -= var_1_object;
	var_13_bool = var_15_float < var_0_object;
}


void func_833(int var_77_int)
{
	int var_79_int;
	@GetVariable("branch", var_79_int);
	if(var_79_int == 0) {
		var_77_int = 1;
		return 2;
	EMIT "GOTO 0x350";
	}
	if(var_79_int == 1) {
		var_77_int = 2;
		return 2;
	}
	var_77_int = 3;
}


void func_578(bool var_61_bool)
{
	var_61_bool = true;
}


void func_580(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_585(float var_17_float, object var_18_object)
{
	cvector var_22_cvector;
	@GetPosition(var_22_cvector);
	cvector var_23_cvector;
	var_18_object->GetPosition(var_23_cvector);
	var_17_float = (var_23_cvector - var_22_cvector) | (var_23_cvector - var_22_cvector);
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_86_object, object var_87_object)
{
	var_0_object = var_87_object;
	var_1_object = var_86_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_93_bool = false;
		bool var_94_bool;
		func_785(var_1_object);
		if(var_94_bool != 0) {
			bool var_102_bool;
			func_797(var_1_object);
			if(!var_102_bool) //@nz
				var_93_bool = true;
		}
		if(var_93_bool != 0) {
			func_182(var_87_object, "Neutral");
			var_0_object->SetMessage(536270); //@t
			var_0_object->ClearReplies(); //@t
			bool var_127_bool;
			func_809(var_1_object);
			if(var_127_bool != 0)
				var_0_object->AddReply(536271, 38074, 38055); //@t
			var_0_object->AddReply(536289, -1, 38073); //@t
		} else {
					func_182(var_87_object, "Neutral");
					var_0_object->SetMessage(536284); //@t
					var_0_object->ClearReplies(); //@t
					bool var_159_bool;
					func_821(var_1_object);
					if(var_159_bool != 0)
						var_0_object->AddReply(536285, 38070, 38069); //@t
					var_0_object->AddReply(536288, -1, 38072); //@t
					var_0_object->AddReply(536291, -1, 38075); //@t
		}
	}
	for(;;) {
		bool var_139_bool;
		func_858(var_139_bool);
		if(var_139_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_685(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_181;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_181:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4e";


void func_716(object var_27_object)
{
	float var_30_float;
	var_27_object->GetEyesHeight(var_30_float);
	cvector var_31_cvector = [0.0, 0.0, 0.0];
	var_32_float = GetByIndex(var_31_cvector, 1);
	var_30_float = var_32_float;
	SetByIndex(var_31_cvector, 1) = var_32_float;
	@LookAsync(var_27_object, "head", var_31_cvector);
}


void func_593(bool var_13_bool)
{
	bool var_15_bool;
	@IsLoaded(var_15_bool);
	var_15_bool = var_13_bool;
}


void func_850(int var_74_int)
{
	var_74_int = 515556;
}


void func_852(int var_73_int)
{
	var_73_int = 503341;
}


void func_854(string var_75_string)
{
	var_75_string = "ui/NPC_Citizen3.png";
}


void func_727(void)
{
	bool var_13_bool;
	func_858(var_13_bool);
	if(var_13_bool != 0)
		@lshStopSpeech();
}


void func_598(bool var_25_bool, object var_26_object, float var_27_float)
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
	func_734(var_52_cvector, (var_41_cvector ^ [0.0, 1.0, 0.0]));
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
	func_858(var_68_bool);
	if(var_68_bool != 0) {
	} else {
		@HasAnimationTrack(var_45_bool, "head");
		if(var_45_bool == 0) goto Label_661;
		@LookAsyncCamera("head");
	}
Label_661:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_25_bool = true;
	
}


void func_856(string var_76_string)
{
	var_76_string = "ui/NPC_Citizen3_b.png";
}


void func_858(bool var_68_bool)
{
	var_68_bool = false;
}


void func_734(cvector var_52_cvector, cvector var_53_cvector)
{
	float var_56_float = sqrt(var_53_cvector | var_53_cvector);
	if(var_56_float < 0.000001)
		var_52_cvector = [0.0, 0.0, 0.0];
	var_52_cvector = var_53_cvector / var_56_float;
}


// @pe
void func_485(object var_2_object, string var_3_string)
{
	func_580();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
}


void func_744(int var_96_int, string var_97_string)
{
	int var_99_int;
	@GetVariable(var_97_string, var_99_int);
	var_99_int = var_96_int;
}


void func_749(string var_42_string, int var_43_int)
{
	string var_45_string = "idle";
	if(var_43_int != 0)
		var_45_string += var_43_int;
	var_45_string = var_42_string;
}


void func_499(void)
{
	int var_29_int; int var_30_int; bool var_31_bool; float var_32_float; bool var_33_bool;
	@WaitForAnimEnd();
	bool var_34_bool;
	func_593(var_34_bool);
	if(!var_34_bool) //@nz
		return 14;
	int var_36_int;
	func_756(var_36_int);
	int var_27_int;
	var_36_int = var_27_int;
	int var_28_int = 0;
	
	for(;;) {
		bool var_49_bool = false;
		if(var_28_int < 5) {
			bool var_52_bool;
			func_593(var_52_bool);
			if(var_52_bool != 0)
				var_49_bool = true;
		}
		if(var_49_bool != 0) {
			@irand(var_29_int, 3);
			if(var_29_int == 0) {
				if(var_27_int == 0) goto Label_546;
				@irand(var_30_int, var_27_int);
				string var_58_string; int var_59_int;
				var_30_int = var_59_int;
				func_749(var_58_string, var_59_int);
				@PlayAnimation("all", var_58_string);
				@WaitForAnimEnd(var_31_bool);
				if(!var_31_bool) { //@nz
				} else {
			} else {
			if(var_29_int == 1) {
				@rand(var_32_float, 4);
				@Sleep((var_32_float + 1), var_33_bool);
				if(!var_33_bool) { //@nz
					goto Label_575;
				}
			} else if(var_28_int != 0) {
				goto Label_575;
			}
			}
					bool var_61_bool;
					func_578(var_61_bool);
					var_62_bool = !var_61_bool; //@nz
					if(var_62_bool == 0) goto Label_570;
			}
		}
	Label_575:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_570:
		@ResetAAS();
		var_28_int += 1;
	}
	
}


void func_756(int var_36_int)
{
	int var_39_int; bool var_40_bool;
	var_39_int = 0;
	
	for(;;) {
		string var_42_string; int var_43_int;
		var_39_int = var_43_int;
		func_749(var_42_string, var_43_int);
		@HasAnimation(var_40_bool, "all", var_42_string);
		if(!var_40_bool) //@nz
			break;
		var_39_int += 1;
	}
	var_39_int = var_36_int;
}


