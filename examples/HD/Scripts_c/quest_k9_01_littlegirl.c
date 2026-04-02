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
			func_777();
			if(var_12_bool == 31225) {
				bool var_18_bool;
				func_831(var_1_object);
				if(var_18_bool != 0) {
					object var_26_object; object var_27_object;
					var_26_object = var_1_object;
					var_27_object = var_0_object;
					func_805();
					object var_30_object; object var_31_object;
					var_30_object = var_1_object;
					var_31_object = var_0_object;
					func_811();
					func_167(var_13_bool, "Neutral");
					var_0_object->SetMessage(529769); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(529773, 31230, 31229); //@t
					var_0_object->AddReply(529776, 31233, 31232); //@t
					return 0;
				}
				func_167(var_13_bool, "Neutral");
				var_0_object->SetMessage(529770); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529771, -1, 31227); //@t
				var_0_object->AddReply(529772, -1, 31228); //@t
				return 0;
			}
			if(var_12_bool == 31233) {
				func_167(var_13_bool, "Neutral");
				var_0_object->SetMessage(529777); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529778, 31230, 31234); //@t
				return 0;
			}
			if(var_12_bool == 31230) {
				func_167(var_13_bool, "Neutral");
				var_0_object->SetMessage(529774); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529775, 31236, 31231); //@t
				return 0;
			}
			if(var_12_bool == 31236) {
				func_167(var_13_bool, "Neutral");
				var_0_object->SetMessage(529779); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529780, 31238, 31237); //@t
				return 0;
			}
			if(var_12_bool == 31238) {
				func_167(var_13_bool, "Neutral");
				var_0_object->SetMessage(529781); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529782, 31243, 31239); //@t
				var_0_object->AddReply(529783, 31241, 31240); //@t
				return 0;
			}
			if(var_12_bool == 31241) {
				func_167(var_13_bool, "Neutral");
				var_0_object->SetMessage(529784); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529785, 31243, 31242); //@t
				return 0;
			}
			if(var_12_bool == 31243) {
				func_167(var_13_bool, "Neutral");
				var_0_object->SetMessage(529786); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(529787, -1, 31245); //@t
				var_0_object->AddReply(529788, -1, 31246); //@t
				return 0;
			}
			var_3_string = true;
			bool var_143_bool;
			func_922(var_143_bool);
			if(var_143_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xbe";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool)
	{
		func_401(var_11_bool, (float)300, (float)100);
	}

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool, object var_12_object)
	{
		func_535(var_11_bool, var_12_object);
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
			func_419(var_12_string);
	}

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool)
	{
		if(var_6_int != 0)
			func_535(var_10_bool, var_11_bool);
		bool var_16_bool = false;
		if(var_5_int != 0) {
			bool var_18_bool;
			func_468(var_18_bool);
			if(var_18_bool != 0)
				var_16_bool = true;
		}
		if(var_16_bool != 0) {
			object var_19_object;
			func_784(var_19_object);
			@RemoveActor(var_19_object);
		}
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool, int var_12_int)
	{
		if(var_12_int == 10) {
			bool var_15_bool;
			func_497(var_10_bool, var_11_bool, var_12_int, var_15_bool);
			if(var_15_bool != 0) {
				if(!var_2_object) { //@nz
					func_766(var_4_bool);
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
	func_648(var_27_bool, var_28_object, 70.0);
	if(!var_27_bool) { //@nz
		var_16_int = -2;
		return 8;
	}
	object var_23_object;
	@CreateDialog(var_23_object);
	int var_75_int;
	func_916(var_75_int);
	var_23_object->SetNPCName(var_75_int);
	int var_76_int;
	func_914(var_76_int);
	var_23_object->SetNPCDescription(var_76_int);
	string var_77_string;
	func_918(var_77_string);
	var_23_object->SetPhoto(var_77_string);
	string var_78_string;
	func_920(var_78_string);
	var_23_object->SetPhoto2(var_78_string);
	int var_79_int;
	func_897(var_79_int);
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
		var_190_bool = !var_26_bool; //@nz
		if(var_190_bool == 0) goto Label_63;
		@sync();
		var_23_object->IsDialogEnd(var_26_bool);
	}
	
Label_63:
	object var_191_object;
	var_17_object = var_191_object;
	func_717();
	@StopDialog(var_23_object);
	var_23_object->GetReturnValue(-1);
	int var_25_int = var_16_int;
}
EMIT "Stack[-4] = 0";


void func_897(int var_79_int)
{
	int var_81_int;
	@GetVariable("branch", var_81_int);
	if(var_81_int == 0) {
		var_79_int = 1;
		return 2;
	EMIT "GOTO 0x390";
	}
	if(var_81_int == 1) {
		var_79_int = 2;
		return 2;
	}
	var_79_int = 3;
}


void func_643(bool var_23_bool)
{
	bool var_25_bool;
	@IsLoaded(var_25_bool);
	var_25_bool = var_23_bool;
}


void func_648(bool var_27_bool, object var_28_object, float var_29_float)
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
	func_790(var_54_cvector, (var_43_cvector ^ [0.0, 1.0, 0.0]));
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
	func_922(var_70_bool);
	if(var_70_bool != 0) {
	} else {
		@HasAnimationTrack(var_47_bool, "head");
		if(var_47_bool == 0) goto Label_711;
		@LookAsyncCamera("head");
	}
Label_711:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_27_bool = true;
	
}


void func_777(void)
{
	bool var_15_bool;
	func_922(var_15_bool);
	if(var_15_bool != 0)
		@lshStopSpeech();
}


void func_784(object var_19_object)
{
	object var_21_object;
	@self(var_21_object);
	var_21_object = var_19_object;
}
EMIT "Stack[-1] = 0";


void func_401(int var_6_int, float var_12_float, float var_13_float)
{
	float var_14_float; bool var_15_bool; float var_16_float; bool var_17_bool;
	var_6_int = false;
	
	for(;;) {
		@rand(var_16_float, 3);
		@Sleep((var_16_float + 3), var_17_bool);
		var_6_int = true;
		float var_21_float; float var_22_float;
		var_12_float = var_21_float;
		func_470(var_22_float, var_14_float, var_15_bool, var_16_float, var_17_bool, var_21_float, var_22_float);
		var_6_int = false;
	}
}
EMIT "Return(); Pop(4)";


void func_914(int var_76_int)
{
	var_76_int = 515561;
}


void func_916(int var_75_int)
{
	var_75_int = 503346;
}


void func_918(string var_77_string)
{
	var_77_string = "ui/NPC_Citizen1.png";
}


// @pe
void func_535(object var_2_object, string var_3_string)
{
	func_630();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
}


void func_920(string var_78_string)
{
	var_78_string = "ui/NPC_Citizen1_b.png";
}


void func_790(cvector var_54_cvector, cvector var_55_cvector)
{
	float var_58_float = sqrt(var_55_cvector | var_55_cvector);
	if(var_58_float < 0.000001)
		var_54_cvector = [0.0, 0.0, 0.0];
	var_54_cvector = var_55_cvector / var_58_float;
}


void func_922(bool var_70_bool)
{
	var_70_bool = false;
}


void func_924(string var_52_string, int var_53_int)
{
	string var_55_string = "idle";
	if(var_53_int != 0)
		var_55_string += var_53_int;
	var_55_string = var_52_string;
}


void func_800(int var_97_int, string var_98_string)
{
	int var_100_int;
	@GetVariable(var_98_string, var_100_int);
	var_100_int = var_97_int;
}


void func_419(int var_5_int)
{
	var_5_int = true;
	bool var_15_bool = false;
	bool var_16_bool;
	func_643(var_16_bool);
	if(!var_16_bool) { //@nz
		bool var_20_bool;
		func_468(var_20_bool);
		if(var_20_bool != 0)
			var_15_bool = true;
	}
	if(var_15_bool != 0) {
		object var_21_object;
		func_784(var_21_object);
		@RemoveActor(var_21_object);
	}
}


void func_931(int var_46_int)
{
	int var_49_int; bool var_50_bool;
	var_49_int = 0;
	
	for(;;) {
		string var_52_string; int var_53_int;
		var_49_int = var_53_int;
		func_924(var_52_string, var_53_int);
		@HasAnimation(var_50_bool, "all", var_52_string);
		if(!var_50_bool) //@nz
			break;
		var_49_int += 1;
	}
	var_49_int = var_46_int;
}


// @pe
void func_805(void)
{
	@SetVariable("ook9Littlegirl1", 1);
}


void func_549(void)
{
	int var_39_int; int var_40_int; bool var_41_bool; float var_42_float; bool var_43_bool;
	@WaitForAnimEnd();
	bool var_44_bool;
	func_643(var_44_bool);
	if(!var_44_bool) //@nz
		return 14;
	int var_46_int;
	func_931(var_46_int);
	int var_37_int;
	var_46_int = var_37_int;
	int var_38_int = 0;
	
	for(;;) {
		bool var_59_bool = false;
		if(var_38_int < 5) {
			bool var_62_bool;
			func_643(var_62_bool);
			if(var_62_bool != 0)
				var_59_bool = true;
		}
		if(var_59_bool != 0) {
			@irand(var_39_int, 3);
			if(var_39_int == 0) {
				if(var_37_int == 0) goto Label_596;
				@irand(var_40_int, var_37_int);
				string var_68_string; int var_69_int;
				var_40_int = var_69_int;
				func_924(var_68_string, var_69_int);
				@PlayAnimation("all", var_68_string);
				@WaitForAnimEnd(var_41_bool);
				if(!var_41_bool) { //@nz
				} else {
			} else {
			if(var_39_int == 1) {
				@rand(var_42_float, 4);
				@Sleep((var_42_float + 1), var_43_bool);
				if(!var_43_bool) { //@nz
					goto Label_625;
				}
			} else if(var_38_int != 0) {
				goto Label_625;
			}
			}
					bool var_71_bool;
					func_628(var_71_bool);
					var_72_bool = !var_71_bool; //@nz
					if(var_72_bool == 0) goto Label_620;
			}
		}
	Label_625:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_620:
		@ResetAAS();
		var_38_int += 1;
	}
	
}


// @pe
void func_167(object var_2_object, string var_140_string)
{
	bool var_141_bool;
	func_922(var_141_bool);
	if(!var_141_bool) //@nz
		return 0;
	if(var_140_string == var_2_object)
		return 0;
	string var_144_string; bool var_145_bool;
	var_140_string = var_144_string;
	if(var_140_string == "")
		var_145_bool = false;
	else
		var_145_bool = true;
	func_751(var_144_string, var_145_bool);
	var_2_object = var_140_string;
	
}


// @pe
void func_811(void)
{
	int var_109_int;
	func_800(var_109_int, "k9q01ChildTalk");
	if(var_109_int == 0) {
		@SetVariable("k9q01ChildTalk", 1);
		@SetVariable("k9q01", 7);
		func_843();
	}
}


// @pe
void func_831(bool var_95_bool)
{
	int var_97_int;
	func_800(var_97_int, "ook9Littlegirl1");
	if(var_97_int == 0) {
		var_95_bool = true;
		return 0;
	}
	var_95_bool = false;
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_88_object, object var_89_object)
{
	var_0_object = var_89_object;
	var_1_object = var_88_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_95_bool;
		func_831(var_1_object);
		if(var_95_bool != 0) {
			object var_103_object; object var_104_object;
			var_103_object = var_1_object;
			var_104_object = var_0_object;
			func_805();
			object var_107_object; object var_108_object;
			var_107_object = var_1_object;
			var_108_object = var_0_object;
			func_811();
			func_167(var_89_object, "Neutral");
			var_0_object->SetMessage(529769); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(529773, 31230, 31229); //@t
			var_0_object->AddReply(529776, 31233, 31232); //@t
		} else {
					func_167(var_89_object, "Neutral");
					var_0_object->SetMessage(529770); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(529771, -1, 31227); //@t
					var_0_object->AddReply(529772, -1, 31228); //@t
		}
	}
	for(;;) {
		bool var_164_bool;
		func_922(var_164_bool);
		if(var_164_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_735(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_166;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_166:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4e";


void func_843(void)
{
	object var_118_object;
	@CreateDiaryEntry(var_118_object, 524, 1, 529816);
	bool var_122_bool; object var_123_object;
	var_118_object = var_123_object;
	func_869(var_122_bool, var_123_object, 517);
}
EMIT "Stack[-1] = 0";


void func_717(void)
{
	bool var_193_bool;
	@CameraSwitchToNormal(true);
	bool var_195_bool;
	func_922(var_195_bool);
	if(var_195_bool != 0) {
	} else {
		@HasAnimationTrack(var_193_bool, "head");
		if(var_193_bool == 0) goto Label_734;
		@UnlookAsync("head");
	}
Label_734:
	
}


void func_468(bool var_18_bool)
{
	var_18_bool = true;
}


// @pe
void func_470(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_21_float, float var_22_float)
{
	bool var_23_bool;
	func_643(var_23_bool);
	if(!var_23_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_21_float;
	var_1_object = var_22_float;
	@SetTimer(10, 1.0);
	func_549();
	if(!false) //@nz
		@KillTimer(10);
}


void func_856(object var_131_object)
{
	object var_133_object;
	@GetDiaryRoot(var_133_object);
	if(!var_133_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_131_object = false;
	}
	var_133_object = var_131_object;
}
EMIT "Stack[-1] = 0";


void func_735(string var_166_string)
{
	bool var_170_bool; float var_171_float; float var_172_float;
	@lshHasAnimation(var_170_bool, var_166_string);
	if(var_170_bool != 0) {
		@lshGetAnimTimes(var_166_string, var_171_float, var_172_float);
		@lshPlayAnimation(var_171_float, var_172_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_166_string);
	}
	
}


void func_869(bool var_122_bool, object var_123_object, int var_124_int)
{
	object var_131_object;
	func_856(var_131_object);
	object var_128_object;
	var_131_object = var_128_object;
	object var_129_object;
	var_128_object->Find(var_124_int, var_129_object);
	if(!var_129_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_124_int);
		var_122_bool = false;
	}
	var_129_object->AddChild(var_123_object);
	@SendWorldWndMessage(7);
	int var_130_int;
	var_123_object->GetCategory(var_130_int);
	@SetDiarySection(var_130_int);
	var_122_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_751(string var_144_string, bool var_145_bool)
{
	bool var_151_bool; float var_152_float; float var_153_float;
	@lshHasAnimation(var_151_bool, var_144_string);
	if(var_151_bool != 0) {
		@lshGetAnimTimes(var_144_string, var_152_float, var_153_float);
		@lshPlayAnimation(var_152_float, var_153_float, var_145_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_144_string);
	}
	
}


void func_497(object var_0_object, object var_1_object, bool var_4_bool, bool var_15_bool)
{
	if(var_4_bool == null)
		var_15_bool = false;
	float var_19_float;
	func_635(var_19_float, var_4_bool);
	float var_17_float = sqrt(var_19_float);
	if(var_2_object != 0)
		var_17_float -= var_1_object;
	var_15_bool = var_17_float < var_0_object;
}


void func_628(bool var_71_bool)
{
	var_71_bool = true;
}


void func_630(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_635(float var_19_float, object var_20_object)
{
	cvector var_24_cvector;
	@GetPosition(var_24_cvector);
	cvector var_25_cvector;
	var_20_object->GetPosition(var_25_cvector);
	var_19_float = (var_25_cvector - var_24_cvector) | (var_25_cvector - var_24_cvector);
}


void func_766(object var_29_object)
{
	float var_32_float;
	var_29_object->GetEyesHeight(var_32_float);
	cvector var_33_cvector = [0.0, 0.0, 0.0];
	var_34_float = GetByIndex(var_33_cvector, 1);
	var_32_float = var_34_float;
	SetByIndex(var_33_cvector, 1) = var_34_float;
	@LookAsync(var_29_object, "head", var_33_cvector);
}


