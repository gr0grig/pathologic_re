// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, int var_7_int, int var_8_int, bool var_9_bool, bool var_10_bool, object var_11_object, bool var_12_bool, bool var_13_bool)
	{
		if(1 != 0) {
			func_796();
			if(var_13_bool == 45191) {
				object var_18_object; object var_19_object;
				var_18_object = var_1_object;
				var_19_object = var_0_object;
				func_824();
			}
			if(var_12_bool == 45190) {
				func_142(var_13_bool, "Neutral");
				var_0_object->SetMessage(542769); //@t
				var_0_object->ClearReplies(); //@t
				bool var_42_bool;
				func_830(var_1_object);
				if(var_42_bool != 0)
					var_0_object->AddReply(542770, 45193, 45191); //@t
				var_0_object->AddReply(542771, -1, 45192); //@t
				var_0_object->AddReply(542790, -1, 45212); //@t
				return 0;
			}
			if(var_12_bool == 45193) {
				func_142(var_13_bool, "Neutral");
				var_0_object->SetMessage(542772); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542773, 45195, 45194); //@t
				var_0_object->AddReply(542775, 45197, 45196); //@t
				return 0;
			}
			if(var_12_bool == 45197) {
				func_142(var_13_bool, "Neutral");
				var_0_object->SetMessage(542776); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542777, 45199, 45198); //@t
				return 0;
			}
			if(var_12_bool == 45199) {
				func_142(var_13_bool, "Neutral");
				var_0_object->SetMessage(542778); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542787, 45209, 45208); //@t
				return 0;
			}
			if(var_12_bool == 45209) {
				func_142(var_13_bool, "Neutral");
				var_0_object->SetMessage(542788); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542789, 45203, 45210); //@t
				return 0;
			}
			if(var_12_bool == 45195) {
				func_142(var_13_bool, "Neutral");
				var_0_object->SetMessage(542774); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542779, 45201, 45200); //@t
				var_0_object->AddReply(542785, 45284, 45206); //@t
				var_0_object->AddReply(542862, -1, 45288); //@t
				return 0;
			}
			if(var_12_bool == 45284) {
				func_142(var_13_bool, "Neutral");
				var_0_object->SetMessage(542858); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542859, -1, 45285); //@t
				var_0_object->AddReply(542860, -1, 45286); //@t
				var_0_object->AddReply(542861, -1, 45287); //@t
				return 0;
			}
			if(var_12_bool == 45201) {
				func_142(var_13_bool, "Neutral");
				var_0_object->SetMessage(542780); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542781, 45203, 45202); //@t
				var_0_object->AddReply(542786, -1, 45207); //@t
				return 0;
			}
			if(var_12_bool == 45203) {
				func_142(var_13_bool, "Neutral");
				var_0_object->SetMessage(542782); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542783, -1, 45204); //@t
				var_0_object->AddReply(542784, -1, 45205); //@t
				return 0;
			}
			var_3_string = true;
			bool var_136_bool;
			func_867(var_136_bool);
			if(var_136_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xa5";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool)
	{
		func_420(var_11_bool, (float)300, (float)100);
	}

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool, object var_12_object)
	{
		func_554(var_11_bool, var_12_object);
		int var_16_int; object var_17_object;
		var_12_object = var_17_object;
		TaskCall(0);
		func_0(var_18_object, var_16_int, var_17_object);
		TaskReturn();
	}

	// @pe
	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool, string var_12_string)
	{
		if(var_12_string == "cleanup")
			func_438(var_12_string);
	}

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool)
	{
		if(var_6_int != 0)
			func_554(var_10_bool, var_11_bool);
		bool var_16_bool = false;
		if(var_5_int != 0) {
			bool var_18_bool;
			func_487(var_18_bool);
			if(var_18_bool != 0)
				var_16_bool = true;
		}
		if(var_16_bool != 0) {
			object var_19_object;
			func_803(var_19_object);
			@RemoveActor(var_19_object);
		}
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool, int var_12_int)
	{
		if(var_12_int == 10) {
			bool var_15_bool;
			func_516(var_10_bool, var_11_bool, var_12_int, var_15_bool);
			if(var_15_bool != 0) {
				if(!var_2_object) { //@nz
					func_785(var_4_bool);
					var_2_object = true;
				}
			} else if(var_2_object != 0) {
				@UnlookAsync("head");
				var_2_object = false;
			}
		}
	
	}

}


void func_0(object var_0_object, int var_16_int, object var_17_object)
{
	var_0_object = var_17_object;
	bool var_27_bool; object var_28_object;
	var_17_object = var_28_object;
	func_667(var_27_bool, var_28_object, 70.0);
	if(!var_27_bool) { //@nz
		var_16_int = -2;
		return 8;
	}
	object var_23_object;
	@CreateDialog(var_23_object);
	int var_75_int;
	func_861(var_75_int);
	var_23_object->SetNPCName(var_75_int);
	int var_76_int;
	func_859(var_76_int);
	var_23_object->SetNPCDescription(var_76_int);
	string var_77_string;
	func_863(var_77_string);
	var_23_object->SetPhoto(var_77_string);
	string var_78_string;
	func_865(var_78_string);
	var_23_object->SetPhoto2(var_78_string);
	int var_79_int;
	func_842(var_79_int);
	var_23_object->SetPlayerName(var_79_int);
	bool var_24_bool;
	@IsOverrideActive(var_24_bool);
	if(var_24_bool != 0) {
		var_16_int = -2;
		return 8;
	}
	@DoDialog(var_23_object);
	object var_88_object; object var_89_object;
	var_17_object = var_88_object;
	var_23_object = var_89_object;
	TaskCall(1);
	func_74(var_90_object, var_91_object, var_92_string, var_93_bool, var_88_object, var_89_object);
	TaskReturn();
	bool var_26_bool;
	var_23_object->IsDialogEnd(var_26_bool);
	
	for(;;) {
		var_148_bool = !var_26_bool; //@nz
		if(var_148_bool == 0) goto Label_63;
		@sync();
		var_23_object->IsDialogEnd(var_26_bool);
	}
	
Label_63:
	object var_149_object;
	var_17_object = var_149_object;
	func_736();
	@StopDialog(var_23_object);
	var_23_object->GetReturnValue(-1);
	int var_25_int = var_16_int;
}
EMIT "Stack[-4] = 0";


void func_770(string var_99_string, bool var_100_bool)
{
	bool var_106_bool; float var_107_float; float var_108_float;
	@lshHasAnimation(var_106_bool, var_99_string);
	if(var_106_bool != 0) {
		@lshGetAnimTimes(var_99_string, var_107_float, var_108_float);
		@lshPlayAnimation(var_107_float, var_108_float, var_100_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_99_string);
	}
	
}


void func_516(object var_0_object, object var_1_object, bool var_4_bool, bool var_15_bool)
{
	if(var_4_bool == null)
		var_15_bool = false;
	float var_19_float;
	func_654(var_19_float, var_4_bool);
	float var_17_float = sqrt(var_19_float);
	if(var_2_object != 0)
		var_17_float -= var_1_object;
	var_15_bool = var_17_float < var_0_object;
}


void func_647(bool var_71_bool)
{
	var_71_bool = true;
}


void func_649(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_142(object var_2_object, string var_95_string)
{
	bool var_96_bool;
	func_867(var_96_bool);
	if(!var_96_bool) //@nz
		return 0;
	if(var_95_string == var_2_object)
		return 0;
	string var_99_string; bool var_100_bool;
	var_95_string = var_99_string;
	if(var_95_string == "")
		var_100_bool = false;
	else
		var_100_bool = true;
	func_770(var_99_string, var_100_bool);
	var_2_object = var_95_string;
	
}


void func_654(float var_19_float, object var_20_object)
{
	cvector var_24_cvector;
	@GetPosition(var_24_cvector);
	cvector var_25_cvector;
	var_20_object->GetPosition(var_25_cvector);
	var_19_float = (var_25_cvector - var_24_cvector) | (var_25_cvector - var_24_cvector);
}


void func_785(object var_29_object)
{
	float var_32_float;
	var_29_object->GetEyesHeight(var_32_float);
	cvector var_33_cvector = [0.0, 0.0, 0.0];
	var_34_float = GetByIndex(var_33_cvector, 1);
	var_32_float = var_34_float;
	SetByIndex(var_33_cvector, 1) = var_34_float;
	@LookAsync(var_29_object, "head", var_33_cvector);
}


void func_662(bool var_23_bool)
{
	bool var_25_bool;
	@IsLoaded(var_25_bool);
	var_25_bool = var_23_bool;
}


void func_667(bool var_27_bool, object var_28_object, float var_29_float)
{
	cvector var_40_cvector; bool var_47_bool;
	var_28_object->GetPosition(var_40_cvector);
	float var_39_float;
	var_28_object->GetEyesHeight(var_39_float);
	var_48_float = GetByIndex(var_40_cvector, 1);
	SetByIndex(var_40_cvector, 1) = (var_48_float + var_39_float);
	cvector var_41_cvector;
	@GetPosition(var_41_cvector);
	@GetEyesHeight(var_39_float);
	var_49_float = GetByIndex(var_41_cvector, 1);
	SetByIndex(var_41_cvector, 1) = (var_49_float + var_39_float);
	cvector var_42_cvector = var_40_cvector - var_41_cvector;
	var_50_float = GetByIndex(var_42_cvector, 1);
	SetByIndex(var_42_cvector, 1) = (float)0;
	var_52_float = sqrt(var_42_cvector | var_42_cvector);
	var_42_cvector /= var_52_float;
	cvector var_43_cvector = -var_42_cvector;
	cvector var_54_cvector;
	func_809(var_54_cvector, (var_43_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_44_cvector = ((var_42_cvector * var_29_float) + (var_54_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_46_bool;
	@IsOverrideActive(var_46_bool);
	if(var_46_bool != 0)
		var_27_bool = false;
	@StopWorld();
	@CameraTransit((var_41_cvector + var_44_cvector), var_43_cvector, true);
	var_68_float = GetByIndex(var_44_cvector, 0);
	var_69_float = GetByIndex(var_44_cvector, 2);
	@Rotate(var_68_float, var_69_float);
	bool var_70_bool;
	func_867(var_70_bool);
	if(var_70_bool != 0) {
	} else {
		@HasAnimationTrack(var_47_bool, "head");
		if(var_47_bool == 0) goto Label_730;
		@LookAsyncCamera("head");
	}
Label_730:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_27_bool = true;
	
}


void func_796(void)
{
	bool var_15_bool;
	func_867(var_15_bool);
	if(var_15_bool != 0)
		@lshStopSpeech();
}


void func_803(object var_19_object)
{
	object var_21_object;
	@self(var_21_object);
	var_21_object = var_19_object;
}
EMIT "Stack[-1] = 0";


void func_420(int var_6_int, float var_12_float, float var_13_float)
{
	float var_14_float; bool var_15_bool; float var_16_float; bool var_17_bool;
	var_6_int = false;
	
	for(;;) {
		@rand(var_16_float, 3);
		@Sleep((var_16_float + 3), var_17_bool);
		var_6_int = true;
		float var_21_float; float var_22_float;
		var_12_float = var_21_float;
		func_489(var_22_float, var_14_float, var_15_bool, var_16_float, var_17_bool, var_21_float, var_22_float);
		var_6_int = false;
	}
}
EMIT "Return(); Pop(4)";


void func_809(cvector var_54_cvector, cvector var_55_cvector)
{
	float var_58_float = sqrt(var_55_cvector | var_55_cvector);
	if(var_58_float < 0.000001)
		var_54_cvector = [0.0, 0.0, 0.0];
	var_54_cvector = var_55_cvector / var_58_float;
}


// @pe
void func_554(object var_2_object, string var_3_string)
{
	func_649();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
}


void func_819(int var_115_int, string var_116_string)
{
	int var_118_int;
	@GetVariable(var_116_string, var_118_int);
	var_118_int = var_115_int;
}


void func_438(int var_5_int)
{
	var_5_int = true;
	bool var_15_bool = false;
	bool var_16_bool;
	func_662(var_16_bool);
	if(!var_16_bool) { //@nz
		bool var_20_bool;
		func_487(var_20_bool);
		if(var_20_bool != 0)
			var_15_bool = true;
	}
	if(var_15_bool != 0) {
		object var_21_object;
		func_803(var_21_object);
		@RemoveActor(var_21_object);
	}
}


void func_568(void)
{
	int var_39_int; int var_40_int; bool var_41_bool; float var_42_float; bool var_43_bool;
	@WaitForAnimEnd();
	bool var_44_bool;
	func_662(var_44_bool);
	if(!var_44_bool) //@nz
		return 14;
	int var_46_int;
	func_876(var_46_int);
	int var_37_int;
	var_46_int = var_37_int;
	int var_38_int = 0;
	
	for(;;) {
		bool var_59_bool = false;
		if(var_38_int < 5) {
			bool var_62_bool;
			func_662(var_62_bool);
			if(var_62_bool != 0)
				var_59_bool = true;
		}
		if(var_59_bool != 0) {
			@irand(var_39_int, 3);
			if(var_39_int == 0) {
				if(var_37_int == 0) goto Label_615;
				@irand(var_40_int, var_37_int);
				string var_68_string; int var_69_int;
				var_40_int = var_69_int;
				func_869(var_68_string, var_69_int);
				@PlayAnimation("all", var_68_string);
				@WaitForAnimEnd(var_41_bool);
				if(!var_41_bool) { //@nz
				} else {
			} else {
			if(var_39_int == 1) {
				@rand(var_42_float, 4);
				@Sleep((var_42_float + 1), var_43_bool);
				if(!var_43_bool) { //@nz
					goto Label_644;
				}
			} else if(var_38_int != 0) {
				goto Label_644;
			}
			}
					bool var_71_bool;
					func_647(var_71_bool);
					var_72_bool = !var_71_bool; //@nz
					if(var_72_bool == 0) goto Label_639;
			}
		}
	Label_644:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_639:
		@ResetAAS();
		var_38_int += 1;
	}
	
}


// @pe
void func_824(void)
{
	@SetVariable("ook12Littlegirl1", 1);
}


// @pe
void func_830(bool var_113_bool)
{
	int var_115_int;
	func_819(var_115_int, "ook12Littlegirl1");
	if(var_115_int == 0) {
		var_113_bool = true;
		return 0;
	}
	var_113_bool = false;
}


void func_842(int var_79_int)
{
	int var_81_int;
	@GetVariable("branch", var_81_int);
	if(var_81_int == 0) {
		var_79_int = 1;
		return 2;
	EMIT "GOTO 0x359";
	}
	if(var_81_int == 1) {
		var_79_int = 2;
		return 2;
	}
	var_79_int = 3;
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_88_object, object var_89_object)
{
	var_0_object = var_89_object;
	var_3_string = false;
	if(1 != 0) {
		func_142(var_89_object, "Neutral");
		var_0_object->SetMessage(542769); //@t
		var_0_object->ClearReplies(); //@t
		bool var_113_bool;
		func_830(var_88_object);
		if(var_113_bool != 0)
			var_0_object->AddReply(542770, 45193, 45191); //@t
		var_0_object->AddReply(542771, -1, 45192); //@t
		var_0_object->AddReply(542790, -1, 45212); //@t
		goto Label_112;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_112:
	bool var_130_bool;
	func_867(var_130_bool);
	if(var_130_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_754(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_141;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_141:
		return 0;

	}
	
}


void func_859(int var_76_int)
{
	var_76_int = 515561;
}


void func_861(int var_75_int)
{
	var_75_int = 503346;
}


void func_863(string var_77_string)
{
	var_77_string = "ui/NPC_Citizen1.png";
}


void func_736(void)
{
	bool var_151_bool;
	@CameraSwitchToNormal(true);
	bool var_153_bool;
	func_867(var_153_bool);
	if(var_153_bool != 0) {
	} else {
		@HasAnimationTrack(var_151_bool, "head");
		if(var_151_bool == 0) goto Label_753;
		@UnlookAsync("head");
	}
Label_753:
	
}


void func_865(string var_78_string)
{
	var_78_string = "ui/NPC_Citizen1_b.png";
}


void func_867(bool var_70_bool)
{
	var_70_bool = false;
}


void func_869(string var_52_string, int var_53_int)
{
	string var_55_string = "idle";
	if(var_53_int != 0)
		var_55_string += var_53_int;
	var_55_string = var_52_string;
}


void func_487(bool var_18_bool)
{
	var_18_bool = true;
}


// @pe
void func_489(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_21_float, float var_22_float)
{
	bool var_23_bool;
	func_662(var_23_bool);
	if(!var_23_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_21_float;
	var_1_object = var_22_float;
	@SetTimer(10, 1.0);
	func_568();
	if(!false) //@nz
		@KillTimer(10);
}


void func_876(int var_46_int)
{
	int var_49_int; bool var_50_bool;
	var_49_int = 0;
	
	for(;;) {
		string var_52_string; int var_53_int;
		var_49_int = var_53_int;
		func_869(var_52_string, var_53_int);
		@HasAnimation(var_50_bool, "all", var_52_string);
		if(!var_50_bool) //@nz
			break;
		var_49_int += 1;
	}
	var_49_int = var_46_int;
}


void func_754(string var_132_string)
{
	bool var_136_bool; float var_137_float; float var_138_float;
	@lshHasAnimation(var_136_bool, var_132_string);
	if(var_136_bool != 0) {
		@lshGetAnimTimes(var_132_string, var_137_float, var_138_float);
		@lshPlayAnimation(var_137_float, var_138_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_132_string);
	}
	
}


