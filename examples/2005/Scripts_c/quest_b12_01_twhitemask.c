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
			func_751();
			if(var_11_object == 24150) {
				bool var_17_bool;
				func_839(var_1_object);
				if(var_17_bool != 0) {
					object var_25_object; object var_26_object;
					var_25_object = var_1_object;
					var_26_object = var_0_object;
					func_820();
					object var_29_object; object var_30_object;
					var_29_object = var_1_object;
					var_30_object = var_0_object;
					func_826();
					object var_41_object; object var_42_object;
					var_41_object = var_1_object;
					var_42_object = var_0_object;
					func_833();
					func_172(var_12_bool, "Neutral");
					var_0_object->SetMessage(522959); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(522960, 24152, 24151); //@t
					var_0_object->AddReply(522973, -1, 24164); //@t
					return 0;
				}
				func_172(var_12_bool, "Neutral");
				var_0_object->SetMessage(523196); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523197, -1, 24400); //@t
				var_0_object->AddReply(523198, -1, 24401); //@t
				return 0;
			}
			if(var_11_object == 24152) {
				func_172(var_12_bool, "Neutral");
				var_0_object->SetMessage(522961); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522962, 24154, 24153); //@t
				var_0_object->AddReply(522972, -1, 24163); //@t
				return 0;
			}
			if(var_11_object == 24154) {
				func_172(var_12_bool, "Neutral");
				var_0_object->SetMessage(522963); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522964, 24156, 24155); //@t
				var_0_object->AddReply(522968, 24160, 24159); //@t
				return 0;
			}
			if(var_11_object == 24160) {
				func_172(var_12_bool, "Neutral");
				var_0_object->SetMessage(522969); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522970, -1, 24161); //@t
				var_0_object->AddReply(522971, -1, 24162); //@t
				return 0;
			}
			if(var_11_object == 24156) {
				func_172(var_12_bool, "Neutral");
				var_0_object->SetMessage(522965); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522966, -1, 24157); //@t
				var_0_object->AddReply(522967, -1, 24158); //@t
				return 0;
			}
			var_3_string = true;
			bool var_112_bool;
			func_876(var_112_bool);
			if(var_112_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xc3";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool)
	{
		func_385((float)300, (float)100);
	}

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object)
	{
		func_529(var_10_bool, var_11_object);
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
			func_410(var_11_string);
	}

	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool)
	{
		@StopGroup0();
		@sync();
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool)
	{
		func_529(var_9_object, var_10_bool);
		bool var_14_bool = false;
		if(var_5_int != 0) {
			bool var_16_bool;
			func_462(var_16_bool);
			if(var_16_bool != 0)
				var_14_bool = true;
		}
		if(var_14_bool != 0) {
			object var_17_object;
			func_758(var_17_object);
			@RemoveActor(var_17_object);
		}
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, int var_11_int)
	{
		if(var_11_int == 10) {
			bool var_14_bool;
			func_491(var_9_object, var_10_bool, var_11_int, var_14_bool);
			if(var_14_bool != 0) {
				if(!var_2_object) { //@nz
					func_740(var_4_bool);
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
	func_642(var_26_bool, var_27_object, 70.0);
	if(!var_26_bool) { //@nz
		var_15_int = -2;
		return 8;
	}
	object var_22_object;
	@CreateDialog(var_22_object);
	int var_73_int;
	func_870(var_73_int);
	var_22_object->SetNPCName(var_73_int);
	int var_74_int;
	func_868(var_74_int);
	var_22_object->SetNPCDescription(var_74_int);
	string var_75_string;
	func_872(var_75_string);
	var_22_object->SetPhoto(var_75_string);
	string var_76_string;
	func_874(var_76_string);
	var_22_object->SetPhoto2(var_76_string);
	int var_77_int;
	func_851(var_77_int);
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
		var_161_bool = !var_25_bool; //@nz
		if(var_161_bool == 0) goto Label_63;
		@sync();
		var_22_object->IsDialogEnd(var_25_bool);
	}
	
Label_63:
	object var_162_object;
	var_16_object = var_162_object;
	func_710();
	@StopDialog(var_22_object);
	var_22_object->GetReturnValue(-1);
	int var_24_int = var_15_int;
}
EMIT "Stack[-4] = 0";


void func_385(float var_11_float, float var_12_float)
{
	
Label_386:
	for(;;) {
		bool var_15_bool;
		func_637(var_15_bool);
		var_18_bool = !var_15_bool; //@nz
		if(var_18_bool == 0) goto Label_394;
		@Hold();
	}
	
Label_394:
	float var_14_float;
	@rand(var_14_float, 3);
	@Sleep(var_14_float + 3);
	float var_22_float; float var_23_float;
	float var_13_float;
	func_464(var_10_bool, var_22_float, var_23_float, var_13_float, var_14_float, var_22_float, var_23_float);
	@sync();
	goto Label_386;
}
EMIT "Return(); Pop(2)";


void func_642(bool var_26_bool, object var_27_object, float var_28_float)
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
	func_764(var_53_cvector, (var_42_cvector ^ [0.0, 1.0, 0.0]));
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
	func_876(var_68_bool);
	if(var_68_bool != 0) {
	} else {
		@HasAnimationTrack(var_46_bool, "head");
		if(var_46_bool == 0) goto Label_704;
		@LookAsyncCamera("head");
	}
Label_704:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_26_bool = true;
	
}


void func_774(int var_95_int, string var_96_string)
{
	int var_98_int;
	@GetVariable(var_96_string, var_98_int);
	var_98_int = var_95_int;
}


void func_779(string var_107_string, bool var_108_bool)
{
	object var_110_object;
	@FindActor(var_110_object, var_107_string);
	if(!var_110_object) //@nz
		@Trace(("Door " + var_107_string) + " not found");
	else
		var_110_object->SetProperty("locked", var_108_bool);
	
}
EMIT "Stack[-1] = 0";


// @pe
void func_529(object var_2_object, string var_3_string)
{
	func_624();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
}


void func_410(int var_5_int)
{
	var_5_int = true;
	bool var_15_bool;
	@IsLoaded(var_15_bool);
	bool var_16_bool = false;
	if(!var_15_bool) { //@nz
		bool var_18_bool;
		func_462(var_18_bool);
		if(var_18_bool != 0)
			var_16_bool = true;
	}
	if(var_16_bool != 0) {
		object var_19_object;
		func_758(var_19_object);
		@RemoveActor(var_19_object);
	}
}


void func_796(string var_51_string, int var_52_int)
{
	string var_54_string = "idle";
	if(var_52_int != 0)
		var_54_string += var_52_int;
	var_54_string = var_51_string;
}


void func_543(void)
{
	int var_38_int; int var_39_int; bool var_40_bool; float var_41_float; bool var_42_bool;
	@WaitForAnimEnd();
	bool var_43_bool;
	func_637(var_43_bool);
	if(!var_43_bool) //@nz
		return 14;
	int var_45_int;
	func_803(var_45_int);
	int var_36_int;
	var_45_int = var_36_int;
	int var_37_int = 0;
	
	for(;;) {
		bool var_58_bool = false;
		if(var_37_int < 5) {
			bool var_61_bool;
			func_637(var_61_bool);
			if(var_61_bool != 0)
				var_58_bool = true;
		}
		if(var_58_bool != 0) {
			@irand(var_38_int, 3);
			if(var_38_int == 0) {
				if(var_36_int == 0) goto Label_590;
				@irand(var_39_int, var_36_int);
				string var_67_string; int var_68_int;
				var_39_int = var_68_int;
				func_796(var_67_string, var_68_int);
				@PlayAnimation("all", var_67_string);
				@WaitForAnimEnd(var_40_bool);
				if(!var_40_bool) { //@nz
				} else {
			} else {
			if(var_38_int == 1) {
				@rand(var_41_float, 4);
				@Sleep((var_41_float + 1), var_42_bool);
				if(!var_42_bool) { //@nz
					goto Label_619;
				}
			} else if(var_37_int != 0) {
				goto Label_619;
			}
			}
					bool var_70_bool;
					func_622(var_70_bool);
					var_71_bool = !var_70_bool; //@nz
					if(var_71_bool == 0) goto Label_614;
			}
		}
	Label_619:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_614:
		@ResetAAS();
		var_37_int += 1;
	}
	
}


void func_803(int var_45_int)
{
	int var_48_int; bool var_49_bool;
	var_48_int = 0;
	
	for(;;) {
		string var_51_string; int var_52_int;
		var_48_int = var_52_int;
		func_796(var_51_string, var_52_int);
		@HasAnimation(var_49_bool, "all", var_51_string);
		if(!var_49_bool) //@nz
			break;
		var_48_int += 1;
	}
	var_48_int = var_45_int;
}


// @pe
void func_172(object var_2_object, string var_121_string)
{
	bool var_122_bool;
	func_876(var_122_bool);
	if(!var_122_bool) //@nz
		return 0;
	if(var_121_string == var_2_object)
		return 0;
	string var_125_string; bool var_126_bool;
	var_121_string = var_125_string;
	if(var_121_string == "")
		var_126_bool = false;
	else
		var_126_bool = true;
	func_734(var_125_string, var_126_bool);
	var_2_object = var_121_string;
	
}


// @pe
void func_820(void)
{
	@SetVariable("oob12TWhitemask1", 1);
}


// @pe
void func_826(void)
{
	func_779("itheater@door1", false);
}


// @pe
void func_833(void)
{
	@SetVariable("b12q01TheaterIsVisited", 1);
}


void func_710(void)
{
	bool var_164_bool;
	@CameraSwitchToNormal();
	bool var_165_bool;
	func_876(var_165_bool);
	if(var_165_bool != 0) {
	} else {
		@HasAnimationTrack(var_164_bool, "head");
		if(var_164_bool == 0) goto Label_726;
		@UnlookAsync("head");
	}
Label_726:
	
}


// @pe
void func_839(bool var_93_bool)
{
	int var_95_int;
	func_774(var_95_int, "oob12TWhitemask1");
	if(var_95_int == 0) {
		var_93_bool = true;
		return 0;
	}
	var_93_bool = false;
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_86_object, object var_87_object)
{
	var_0_object = var_87_object;
	var_1_object = var_86_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_93_bool;
		func_839(var_1_object);
		if(var_93_bool != 0) {
			object var_101_object; object var_102_object;
			var_101_object = var_1_object;
			var_102_object = var_0_object;
			func_820();
			object var_105_object; object var_106_object;
			var_105_object = var_1_object;
			var_106_object = var_0_object;
			func_826();
			object var_117_object; object var_118_object;
			var_117_object = var_1_object;
			var_118_object = var_0_object;
			func_833();
			func_172(var_87_object, "Neutral");
			var_0_object->SetMessage(522959); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(522960, 24152, 24151); //@t
			var_0_object->AddReply(522973, -1, 24164); //@t
		} else {
					func_172(var_87_object, "Neutral");
					var_0_object->SetMessage(523196); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(523197, -1, 24400); //@t
					var_0_object->AddReply(523198, -1, 24401); //@t
		}
	}
	for(;;) {
		bool var_140_bool;
		func_876(var_140_bool);
		if(var_140_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_727(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_171;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_171:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4e";


void func_462(bool var_16_bool)
{
	var_16_bool = true;
}


// @pe
void func_464(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_22_float, float var_23_float)
{
	bool var_24_bool;
	func_637(var_24_bool);
	if(!var_24_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_22_float;
	var_1_object = var_23_float;
	@SetTimer(10, 1.0);
	func_543();
	if(!false) //@nz
		@KillTimer(10);
}


void func_851(int var_77_int)
{
	int var_79_int;
	@GetVariable("branch", var_79_int);
	if(var_79_int == 0) {
		var_77_int = 1;
		return 2;
	EMIT "GOTO 0x362";
	}
	if(var_79_int == 1) {
		var_77_int = 2;
		return 2;
	}
	var_77_int = 3;
}


void func_727(string var_142_string)
{
	float var_145_float; float var_146_float;
	@lshGetAnimTimes(var_142_string, var_145_float, var_146_float);
	@lshPlayAnimation(var_145_float, var_146_float, false);
}


void func_734(string var_125_string, bool var_126_bool)
{
	float var_131_float; float var_132_float;
	@lshGetAnimTimes(var_125_string, var_131_float, var_132_float);
	@lshPlayAnimation(var_131_float, var_132_float, var_126_bool);
}


void func_868(int var_74_int)
{
	var_74_int = 515569;
}


void func_740(object var_28_object)
{
	float var_31_float;
	var_28_object->GetEyesHeight(var_31_float);
	cvector var_32_cvector = [0.0, 0.0, 0.0];
	var_33_float = GetByIndex(var_32_cvector, 1);
	var_31_float = var_33_float;
	SetByIndex(var_32_cvector, 1) = var_33_float;
	@LookAsync(var_28_object, "head", var_32_cvector);
}


void func_870(int var_73_int)
{
	var_73_int = 503354;
}


void func_872(string var_75_string)
{
	var_75_string = "ui/NPC_wmask.png";
}


void func_874(string var_76_string)
{
	var_76_string = "ui/NPC_wmask_b.png";
}


void func_491(object var_0_object, object var_1_object, bool var_4_bool, bool var_14_bool)
{
	if(var_4_bool == null)
		var_14_bool = false;
	float var_18_float;
	func_629(var_18_float, var_4_bool);
	float var_16_float = sqrt(var_18_float);
	if(var_2_object != 0)
		var_16_float -= var_1_object;
	var_14_bool = var_16_float < var_0_object;
}


void func_876(bool var_68_bool)
{
	var_68_bool = false;
}


void func_622(bool var_70_bool)
{
	var_70_bool = true;
}


void func_751(void)
{
	bool var_14_bool;
	func_876(var_14_bool);
	if(var_14_bool != 0)
		@lshStopSpeech();
}


void func_624(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_629(float var_18_float, object var_19_object)
{
	cvector var_23_cvector;
	@GetPosition(var_23_cvector);
	cvector var_24_cvector;
	var_19_object->GetPosition(var_24_cvector);
	var_18_float = (var_24_cvector - var_23_cvector) | (var_24_cvector - var_23_cvector);
}


void func_758(object var_17_object)
{
	object var_19_object;
	@self(var_19_object);
	var_19_object = var_17_object;
}
EMIT "Stack[-1] = 0";


void func_764(cvector var_53_cvector, cvector var_54_cvector)
{
	float var_57_float = sqrt(var_54_cvector | var_54_cvector);
	if(var_57_float < 0.000001)
		var_53_cvector = [0.0, 0.0, 0.0];
	var_53_cvector = var_54_cvector / var_57_float;
}


void func_637(bool var_15_bool)
{
	bool var_17_bool;
	@IsLoaded(var_17_bool);
	var_17_bool = var_15_bool;
}


