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
			func_613();
			if(var_11_object == 4302) {
				object var_16_object; object var_17_object;
				var_16_object = var_1_object;
				var_17_object = var_0_object;
				func_669();
			}
			if(var_10_bool == 4301) {
				func_137(var_11_object, "Neutral");
				var_0_object->SetMessage(503950); //@t
				var_0_object->ClearReplies(); //@t
				bool var_40_bool;
				func_675(var_1_object);
				if(var_40_bool != 0)
					var_0_object->AddReply(503951, 4304, 4302); //@t
				var_0_object->AddReply(503952, -1, 4303); //@t
				return 0;
			}
			if(var_10_bool == 4304) {
				func_137(var_11_object, "Neutral");
				var_0_object->SetMessage(503953); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(503954, 4306, 4305); //@t
				var_0_object->AddReply(503957, 4309, 4308); //@t
				return 0;
			}
			if(var_10_bool == 4309) {
				func_137(var_11_object, "Neutral");
				var_0_object->SetMessage(503958); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(503959, -1, 4310); //@t
				var_0_object->AddReply(503960, 4306, 4311); //@t
				return 0;
			}
			if(var_10_bool == 4306) {
				func_137(var_11_object, "Neutral");
				var_0_object->SetMessage(503955); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(503956, -1, 4307); //@t
				var_0_object->AddReply(503961, -1, 4313); //@t
				return 0;
			}
			var_3_string = true;
			bool var_84_bool;
			func_667(var_84_bool);
			if(var_84_bool != 0)
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
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object)
	{
	
		while(true != 0) {
			@Sleep(1);
			func_306(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, (float)300, (float)100);
		}
	
	}

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object)
	{
		func_371(var_9_object, var_10_object);
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
			func_333(var_8_bool, var_9_object, var_10_int, var_13_bool);
			if(var_13_bool != 0) {
				if(!var_2_object) { //@nz
					func_602(var_4_bool);
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
	func_484(var_25_bool, var_26_object, 70.0);
	if(!var_25_bool) { //@nz
		var_14_int = -2;
		return 8;
	}
	object var_21_object;
	@CreateDialog(var_21_object);
	int var_73_int;
	func_661(var_73_int);
	var_21_object->SetNPCName(var_73_int);
	int var_74_int;
	func_659(var_74_int);
	var_21_object->SetNPCDescription(var_74_int);
	string var_75_string;
	func_663(var_75_string);
	var_21_object->SetPhoto(var_75_string);
	string var_76_string;
	func_665(var_76_string);
	var_21_object->SetPhoto2(var_76_string);
	int var_77_int;
	func_687(var_77_int);
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
		var_143_bool = !var_24_bool; //@nz
		if(var_143_bool == 0) goto Label_63;
		@sync();
		var_21_object->IsDialogEnd(var_24_bool);
	}
	
Label_63:
	object var_144_object;
	var_15_object = var_144_object;
	func_553();
	@StopDialog(var_21_object);
	var_21_object->GetReturnValue(-1);
	int var_23_int = var_14_int;
}
EMIT "Stack[-4] = 0";


void func_385(void)
{
	int var_30_int; int var_31_int; bool var_32_bool; float var_33_float; bool var_34_bool;
	@WaitForAnimEnd();
	bool var_35_bool;
	func_479(var_35_bool);
	if(!var_35_bool) //@nz
		return 14;
	int var_37_int;
	func_642(var_37_int);
	int var_28_int;
	var_37_int = var_28_int;
	int var_29_int = 0;
	
	for(;;) {
		bool var_50_bool = false;
		if(var_29_int < 5) {
			bool var_53_bool;
			func_479(var_53_bool);
			if(var_53_bool != 0)
				var_50_bool = true;
		}
		if(var_50_bool != 0) {
			@irand(var_30_int, 3);
			if(var_30_int == 0) {
				if(var_28_int == 0) goto Label_432;
				@irand(var_31_int, var_28_int);
				string var_59_string; int var_60_int;
				var_31_int = var_60_int;
				func_635(var_59_string, var_60_int);
				@PlayAnimation("all", var_59_string);
				@WaitForAnimEnd(var_32_bool);
				if(!var_32_bool) { //@nz
				} else {
			} else {
			if(var_30_int == 1) {
				@rand(var_33_float, 4);
				@Sleep((var_33_float + 1), var_34_bool);
				if(!var_34_bool) { //@nz
					goto Label_461;
				}
			} else if(var_29_int != 0) {
				goto Label_461;
			}
			}
					bool var_62_bool;
					func_464(var_62_bool);
					var_63_bool = !var_62_bool; //@nz
					if(var_63_bool == 0) goto Label_456;
			}
		}
	Label_461:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_456:
		@ResetAAS();
		var_29_int += 1;
	}
	
}


void func_642(int var_37_int)
{
	int var_40_int; bool var_41_bool;
	var_40_int = 0;
	
	for(;;) {
		string var_43_string; int var_44_int;
		var_40_int = var_44_int;
		func_635(var_43_string, var_44_int);
		@HasAnimation(var_41_bool, "all", var_43_string);
		if(!var_41_bool) //@nz
			break;
		var_40_int += 1;
	}
	var_40_int = var_37_int;
}


// @pe
void func_137(object var_2_object, string var_93_string)
{
	bool var_94_bool;
	func_667(var_94_bool);
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
	func_587(var_97_string, var_98_bool);
	var_2_object = var_93_string;
	
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_86_object, object var_87_object)
{
	var_0_object = var_87_object;
	var_3_string = false;
	if(1 != 0) {
		func_137(var_87_object, "Neutral");
		var_0_object->SetMessage(503950); //@t
		var_0_object->ClearReplies(); //@t
		bool var_111_bool;
		func_675(var_86_object);
		if(var_111_bool != 0)
			var_0_object->AddReply(503951, 4304, 4302); //@t
		var_0_object->AddReply(503952, -1, 4303); //@t
		goto Label_107;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_107:
	bool var_125_bool;
	func_667(var_125_bool);
	if(var_125_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_571(var_2_object);
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


void func_587(string var_97_string, bool var_98_bool)
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


void func_333(object var_0_object, object var_1_object, bool var_4_bool, bool var_13_bool)
{
	if(var_4_bool == null)
		var_13_bool = false;
	float var_17_float;
	func_471(var_17_float, var_4_bool);
	float var_15_float = sqrt(var_17_float);
	if(var_2_object != 0)
		var_15_float -= var_1_object;
	var_13_bool = var_15_float < var_0_object;
}


void func_464(bool var_62_bool)
{
	var_62_bool = true;
}


void func_466(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_659(int var_74_int)
{
	var_74_int = 515568;
}


void func_661(int var_73_int)
{
	var_73_int = 503353;
}


void func_663(string var_75_string)
{
	var_75_string = "ui/NPC_Citizen1.png";
}


void func_471(float var_17_float, object var_18_object)
{
	cvector var_22_cvector;
	@GetPosition(var_22_cvector);
	cvector var_23_cvector;
	var_18_object->GetPosition(var_23_cvector);
	var_17_float = (var_23_cvector - var_22_cvector) | (var_23_cvector - var_22_cvector);
}


void func_665(string var_76_string)
{
	var_76_string = "ui/NPC_Citizen1_b.png";
}


void func_602(object var_27_object)
{
	float var_30_float;
	var_27_object->GetEyesHeight(var_30_float);
	cvector var_31_cvector = [0.0, 0.0, 0.0];
	var_32_float = GetByIndex(var_31_cvector, 1);
	var_30_float = var_32_float;
	SetByIndex(var_31_cvector, 1) = var_32_float;
	@LookAsync(var_27_object, "head", var_31_cvector);
}


void func_667(bool var_68_bool)
{
	var_68_bool = false;
}


// @pe
void func_669(void)
{
	@SetVariable("ood6Worker1", 1);
}


void func_479(bool var_14_bool)
{
	bool var_16_bool;
	@IsLoaded(var_16_bool);
	var_16_bool = var_14_bool;
}


// @pe
void func_675(bool var_111_bool)
{
	int var_113_int;
	func_630(var_113_int, "ood6Worker1");
	if(var_113_int == 0) {
		var_111_bool = true;
		return 0;
	}
	var_111_bool = false;
}


void func_484(bool var_25_bool, object var_26_object, float var_27_float)
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
	func_620(var_52_cvector, (var_41_cvector ^ [0.0, 1.0, 0.0]));
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
	func_667(var_68_bool);
	if(var_68_bool != 0) {
	} else {
		@HasAnimationTrack(var_45_bool, "head");
		if(var_45_bool == 0) goto Label_547;
		@LookAsyncCamera("head");
	}
Label_547:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_25_bool = true;
	
}


void func_613(void)
{
	bool var_13_bool;
	func_667(var_13_bool);
	if(var_13_bool != 0)
		@lshStopSpeech();
}


void func_635(string var_43_string, int var_44_int)
{
	string var_46_string = "idle";
	if(var_44_int != 0)
		var_46_string += var_44_int;
	var_46_string = var_43_string;
}


void func_553(void)
{
	bool var_146_bool;
	@CameraSwitchToNormal(true);
	bool var_148_bool;
	func_667(var_148_bool);
	if(var_148_bool != 0) {
	} else {
		@HasAnimationTrack(var_146_bool, "head");
		if(var_146_bool == 0) goto Label_570;
		@UnlookAsync("head");
	}
Label_570:
	
}


void func_620(cvector var_52_cvector, cvector var_53_cvector)
{
	float var_56_float = sqrt(var_53_cvector | var_53_cvector);
	if(var_56_float < 0.000001)
		var_52_cvector = [0.0, 0.0, 0.0];
	var_52_cvector = var_53_cvector / var_56_float;
}


void func_687(int var_77_int)
{
	int var_79_int;
	@GetVariable("branch", var_79_int);
	if(var_79_int == 0) {
		var_77_int = 1;
		return 2;
	EMIT "GOTO 0x2be";
	}
	if(var_79_int == 1) {
		var_77_int = 2;
		return 2;
	}
	var_77_int = 3;
}


// @pe
void func_306(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_12_float, float var_13_float)
{
	bool var_14_bool;
	func_479(var_14_bool);
	if(!var_14_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_12_float;
	var_1_object = var_13_float;
	@SetTimer(10, 1.0);
	func_385();
	if(!false) //@nz
		@KillTimer(10);
}


// @pe
void func_371(object var_2_object, string var_3_string)
{
	func_466();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
}


void func_630(int var_113_int, string var_114_string)
{
	int var_116_int;
	@GetVariable(var_114_string, var_116_int);
	var_116_int = var_113_int;
}


void func_571(string var_127_string)
{
	bool var_131_bool; float var_132_float; float var_133_float;
	@lshHasAnimation(var_131_bool, var_127_string);
	if(var_131_bool != 0) {
		@lshGetAnimTimes(var_127_string, var_132_float, var_133_float);
		@lshPlayAnimation(var_132_float, var_133_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_127_string);
	}
	
}


