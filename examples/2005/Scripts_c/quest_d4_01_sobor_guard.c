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
			func_707();
			if(var_11_object == 38055) {
				object var_16_object; object var_17_object;
				var_16_object = var_1_object;
				var_17_object = var_0_object;
				func_753();
			}
			if(var_11_object == 38069) {
				object var_22_object; object var_23_object;
				var_22_object = var_1_object;
				var_23_object = var_0_object;
				func_759();
			}
			if(var_10_bool == 38054) {
				bool var_28_bool = false;
				bool var_29_bool;
				func_765(var_1_object);
				if(var_29_bool != 0) {
					bool var_37_bool;
					func_777(var_1_object);
					if(!var_37_bool) //@nz
						var_28_bool = true;
				}
				if(var_28_bool != 0) {
					func_182(var_11_object, "Neutral");
					var_0_object->SetMessage(536270); //@t
					var_0_object->ClearReplies(); //@t
					bool var_57_bool;
					func_789(var_1_object);
					if(var_57_bool != 0)
						var_0_object->AddReply(536271, 38074, 38055); //@t
					var_0_object->AddReply(536289, -1, 38073); //@t
					return 0;
				}
				func_182(var_11_object, "Neutral");
				var_0_object->SetMessage(536284); //@t
				var_0_object->ClearReplies(); //@t
				bool var_71_bool;
				func_801(var_1_object);
				if(var_71_bool != 0)
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
			bool var_123_bool;
			func_838(var_123_bool);
			if(var_123_bool != 0)
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
					func_696(var_4_bool);
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
	int var_72_int;
	func_832(var_72_int);
	var_21_object->SetNPCName(var_72_int);
	int var_73_int;
	func_830(var_73_int);
	var_21_object->SetNPCDescription(var_73_int);
	string var_74_string;
	func_834(var_74_string);
	var_21_object->SetPhoto(var_74_string);
	string var_75_string;
	func_836(var_75_string);
	var_21_object->SetPhoto2(var_75_string);
	int var_76_int;
	func_813(var_76_int);
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
		var_163_bool = !var_24_bool; //@nz
		if(var_163_bool == 0) goto Label_63;
		@sync();
		var_21_object->IsDialogEnd(var_24_bool);
	}
	
Label_63:
	object var_164_object;
	var_15_object = var_164_object;
	func_666();
	@StopDialog(var_21_object);
	var_21_object->GetReturnValue(-1);
	int var_23_int = var_14_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_777(bool var_101_bool)
{
	int var_103_int;
	func_724(var_103_int, "d4q01");
	if(var_103_int == 1000)
		var_101_bool = true;
	var_101_bool = false;
}


// @pe
void func_789(bool var_121_bool)
{
	int var_123_int;
	func_724(var_123_int, "ood4SoborGuard1");
	if(var_123_int == 0) {
		var_121_bool = true;
		return 0;
	}
	var_121_bool = false;
}


void func_666(void)
{
	bool var_166_bool;
	@CameraSwitchToNormal();
	bool var_167_bool;
	func_838(var_167_bool);
	if(var_167_bool != 0) {
	} else {
		@HasAnimationTrack(var_166_bool, "head");
		if(var_166_bool == 0) goto Label_682;
		@UnlookAsync("head");
	}
Label_682:
	
}


// @pe
void func_801(bool var_148_bool)
{
	int var_150_int;
	func_724(var_150_int, "ood4TheaterGuard2");
	if(var_150_int == 0) {
		var_148_bool = true;
		return 0;
	}
	var_148_bool = false;
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


void func_683(string var_135_string)
{
	float var_138_float; float var_139_float;
	@lshGetAnimTimes(var_135_string, var_138_float, var_139_float);
	@lshPlayAnimation(var_138_float, var_139_float, false);
}


void func_813(int var_76_int)
{
	int var_78_int;
	@GetVariable("branch", var_78_int);
	if(var_78_int == 0) {
		var_76_int = 1;
		return 2;
	EMIT "GOTO 0x33c";
	}
	if(var_78_int == 1) {
		var_76_int = 2;
		return 2;
	}
	var_76_int = 3;
}


void func_690(string var_112_string, bool var_113_bool)
{
	float var_118_float; float var_119_float;
	@lshGetAnimTimes(var_112_string, var_118_float, var_119_float);
	@lshPlayAnimation(var_118_float, var_119_float, var_113_bool);
}


// @pe
void func_182(object var_2_object, string var_108_string)
{
	bool var_109_bool;
	func_838(var_109_bool);
	if(!var_109_bool) //@nz
		return 0;
	if(var_108_string == var_2_object)
		return 0;
	string var_112_string; bool var_113_bool;
	var_108_string = var_112_string;
	if(var_108_string == "")
		var_113_bool = false;
	else
		var_113_bool = true;
	func_690(var_112_string, var_113_bool);
	var_2_object = var_108_string;
	
}


void func_696(object var_27_object)
{
	float var_30_float;
	var_27_object->GetEyesHeight(var_30_float);
	cvector var_31_cvector = [0.0, 0.0, 0.0];
	var_32_float = GetByIndex(var_31_cvector, 1);
	var_30_float = var_32_float;
	SetByIndex(var_31_cvector, 1) = var_32_float;
	@LookAsync(var_27_object, "head", var_31_cvector);
}


void func_830(int var_73_int)
{
	var_73_int = 515556;
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


void func_832(int var_72_int)
{
	var_72_int = 503341;
}


void func_834(string var_74_string)
{
	var_74_string = "ui/NPC_Citizen3.png";
}


void func_707(void)
{
	bool var_13_bool;
	func_838(var_13_bool);
	if(var_13_bool != 0)
		@lshStopSpeech();
}


void func_836(string var_75_string)
{
	var_75_string = "ui/NPC_Citizen3_b.png";
}


void func_580(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_838(bool var_67_bool)
{
	var_67_bool = false;
}


void func_578(bool var_61_bool)
{
	var_61_bool = true;
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
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_85_object, object var_86_object)
{
	var_0_object = var_86_object;
	var_1_object = var_85_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_92_bool = false;
		bool var_93_bool;
		func_765(var_1_object);
		if(var_93_bool != 0) {
			bool var_101_bool;
			func_777(var_1_object);
			if(!var_101_bool) //@nz
				var_92_bool = true;
		}
		if(var_92_bool != 0) {
			func_182(var_86_object, "Neutral");
			var_0_object->SetMessage(536270); //@t
			var_0_object->ClearReplies(); //@t
			bool var_121_bool;
			func_789(var_1_object);
			if(var_121_bool != 0)
				var_0_object->AddReply(536271, 38074, 38055); //@t
			var_0_object->AddReply(536289, -1, 38073); //@t
		} else {
					func_182(var_86_object, "Neutral");
					var_0_object->SetMessage(536284); //@t
					var_0_object->ClearReplies(); //@t
					bool var_148_bool;
					func_801(var_1_object);
					if(var_148_bool != 0)
						var_0_object->AddReply(536285, 38070, 38069); //@t
					var_0_object->AddReply(536288, -1, 38072); //@t
					var_0_object->AddReply(536291, -1, 38075); //@t
		}
	}
	for(;;) {
		bool var_133_bool;
		func_838(var_133_bool);
		if(var_133_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_683(var_2_object);
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


void func_714(cvector var_52_cvector, cvector var_53_cvector)
{
	float var_56_float = sqrt(var_53_cvector | var_53_cvector);
	if(var_56_float < 0.000001)
		var_52_cvector = [0.0, 0.0, 0.0];
	var_52_cvector = var_53_cvector / var_56_float;
}


void func_593(bool var_13_bool)
{
	bool var_15_bool;
	@IsLoaded(var_15_bool);
	var_15_bool = var_13_bool;
}


void func_724(int var_95_int, string var_96_string)
{
	int var_98_int;
	@GetVariable(var_96_string, var_98_int);
	var_98_int = var_95_int;
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
	func_714(var_52_cvector, (var_41_cvector ^ [0.0, 1.0, 0.0]));
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
	func_838(var_67_bool);
	if(var_67_bool != 0) {
	} else {
		@HasAnimationTrack(var_45_bool, "head");
		if(var_45_bool == 0) goto Label_660;
		@LookAsyncCamera("head");
	}
Label_660:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_25_bool = true;
	
}


void func_729(string var_42_string, int var_43_int)
{
	string var_45_string = "idle";
	if(var_43_int != 0)
		var_45_string += var_43_int;
	var_45_string = var_42_string;
}


void func_736(int var_36_int)
{
	int var_39_int; bool var_40_bool;
	var_39_int = 0;
	
	for(;;) {
		string var_42_string; int var_43_int;
		var_39_int = var_43_int;
		func_729(var_42_string, var_43_int);
		@HasAnimation(var_40_bool, "all", var_42_string);
		if(!var_40_bool) //@nz
			break;
		var_39_int += 1;
	}
	var_39_int = var_36_int;
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


// @pe
void func_753(void)
{
	@SetVariable("ood4SoborGuard1", 1);
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
	func_736(var_36_int);
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
				func_729(var_58_string, var_59_int);
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


// @pe
void func_759(void)
{
	@SetVariable("ood4TheaterGuard2", 1);
}


// @pe
void func_765(bool var_93_bool)
{
	int var_95_int;
	func_724(var_95_int, "d4q01KeyWasted");
	if(var_95_int != 0) {
		var_93_bool = true;
		return 0;
	}
	var_93_bool = false;
}


