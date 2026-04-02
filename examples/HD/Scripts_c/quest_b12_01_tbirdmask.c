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
			func_869();
			if(var_12_bool == 24122) {
				bool var_18_bool;
				func_957(var_1_object);
				if(var_18_bool != 0) {
					object var_26_object; object var_27_object;
					var_26_object = var_1_object;
					var_27_object = var_0_object;
					func_938();
					object var_30_object; object var_31_object;
					var_30_object = var_1_object;
					var_31_object = var_0_object;
					func_944();
					object var_42_object; object var_43_object;
					var_42_object = var_1_object;
					var_43_object = var_0_object;
					func_951();
					func_167(var_13_bool, "Neutral");
					var_0_object->SetMessage(522931); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(522932, 24124, 24123); //@t
					return 0;
				}
				func_167(var_13_bool, "Neutral");
				var_0_object->SetMessage(523192); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523193, -1, 24396); //@t
				var_0_object->AddReply(523194, -1, 24397); //@t
				return 0;
			}
			if(var_12_bool == 24124) {
				func_167(var_13_bool, "Neutral");
				var_0_object->SetMessage(522933); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522934, 24126, 24125); //@t
				var_0_object->AddReply(522956, 24148, 24147); //@t
				return 0;
			}
			if(var_12_bool == 24148) {
				func_167(var_13_bool, "Neutral");
				var_0_object->SetMessage(522957); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522958, 24128, 24149); //@t
				return 0;
			}
			if(var_12_bool == 24126) {
				func_167(var_13_bool, "Neutral");
				var_0_object->SetMessage(522935); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522936, 24128, 24127); //@t
				var_0_object->AddReply(522955, 24128, 24146); //@t
				return 0;
			}
			if(var_12_bool == 24128) {
				func_167(var_13_bool, "Neutral");
				var_0_object->SetMessage(522937); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522938, 24130, 24129); //@t
				return 0;
			}
			if(var_12_bool == 24130) {
				func_167(var_13_bool, "Neutral");
				var_0_object->SetMessage(522939); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522940, 24132, 24131); //@t
				var_0_object->AddReply(522946, 24138, 24137); //@t
				return 0;
			}
			if(var_12_bool == 24138) {
				func_167(var_13_bool, "Neutral");
				var_0_object->SetMessage(522947); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522948, 24134, 24139); //@t
				var_0_object->AddReply(522949, 24141, 24140); //@t
				return 0;
			}
			if(var_12_bool == 24141) {
				func_167(var_13_bool, "Neutral");
				var_0_object->SetMessage(522950); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522951, 24134, 24142); //@t
				var_0_object->AddReply(522952, 24144, 24143); //@t
				return 0;
			}
			if(var_12_bool == 24144) {
				func_167(var_13_bool, "Neutral");
				var_0_object->SetMessage(522953); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522954, 24134, 24145); //@t
				return 0;
			}
			if(var_12_bool == 24132) {
				func_167(var_13_bool, "Neutral");
				var_0_object->SetMessage(522941); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522942, 24134, 24133); //@t
				var_0_object->AddReply(522945, -1, 24136); //@t
				return 0;
			}
			if(var_12_bool == 24134) {
				func_167(var_13_bool, "Neutral");
				var_0_object->SetMessage(522943); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522944, -1, 24135); //@t
				return 0;
			}
			var_3_string = true;
			bool var_163_bool;
			func_994(var_163_bool);
			if(var_163_bool != 0)
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
		func_493(var_11_bool, (float)300, (float)100);
	}

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool, object var_12_object)
	{
		func_627(var_11_bool, var_12_object);
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
			func_511(var_12_string);
	}

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool)
	{
		if(var_6_int != 0)
			func_627(var_10_bool, var_11_bool);
		bool var_16_bool = false;
		if(var_5_int != 0) {
			bool var_18_bool;
			func_560(var_18_bool);
			if(var_18_bool != 0)
				var_16_bool = true;
		}
		if(var_16_bool != 0) {
			object var_19_object;
			func_876(var_19_object);
			@RemoveActor(var_19_object);
		}
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool, int var_12_int)
	{
		if(var_12_int == 10) {
			bool var_15_bool;
			func_589(var_10_bool, var_11_bool, var_12_int, var_15_bool);
			if(var_15_bool != 0) {
				if(!var_2_object) { //@nz
					func_858(var_4_bool);
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
	func_740(var_27_bool, var_28_object, 130.0);
	if(!var_27_bool) { //@nz
		var_16_int = -2;
		return 8;
	}
	object var_23_object;
	@CreateDialog(var_23_object);
	int var_75_int;
	func_988(var_75_int);
	var_23_object->SetNPCName(var_75_int);
	int var_76_int;
	func_986(var_76_int);
	var_23_object->SetNPCDescription(var_76_int);
	string var_77_string;
	func_990(var_77_string);
	var_23_object->SetPhoto(var_77_string);
	string var_78_string;
	func_992(var_78_string);
	var_23_object->SetPhoto2(var_78_string);
	int var_79_int;
	func_969(var_79_int);
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
		var_170_bool = !var_26_bool; //@nz
		if(var_170_bool == 0) goto Label_63;
		@sync();
		var_23_object->IsDialogEnd(var_26_bool);
	}
	
Label_63:
	object var_171_object;
	var_17_object = var_171_object;
	func_809();
	@StopDialog(var_23_object);
	var_23_object->GetReturnValue(-1);
	int var_25_int = var_16_int;
}
EMIT "Stack[-4] = 0";


void func_641(void)
{
	int var_39_int; int var_40_int; bool var_41_bool; float var_42_float; bool var_43_bool;
	@WaitForAnimEnd();
	bool var_44_bool;
	func_735(var_44_bool);
	if(!var_44_bool) //@nz
		return 14;
	int var_46_int;
	func_921(var_46_int);
	int var_37_int;
	var_46_int = var_37_int;
	int var_38_int = 0;
	
	for(;;) {
		bool var_59_bool = false;
		if(var_38_int < 5) {
			bool var_62_bool;
			func_735(var_62_bool);
			if(var_62_bool != 0)
				var_59_bool = true;
		}
		if(var_59_bool != 0) {
			@irand(var_39_int, 3);
			if(var_39_int == 0) {
				if(var_37_int == 0) goto Label_688;
				@irand(var_40_int, var_37_int);
				string var_68_string; int var_69_int;
				var_40_int = var_69_int;
				func_914(var_68_string, var_69_int);
				@PlayAnimation("all", var_68_string);
				@WaitForAnimEnd(var_41_bool);
				if(!var_41_bool) { //@nz
				} else {
			} else {
			if(var_39_int == 1) {
				@rand(var_42_float, 4);
				@Sleep((var_42_float + 1), var_43_bool);
				if(!var_43_bool) { //@nz
					goto Label_717;
				}
			} else if(var_38_int != 0) {
				goto Label_717;
			}
			}
					bool var_71_bool;
					func_720(var_71_bool);
					var_72_bool = !var_71_bool; //@nz
					if(var_72_bool == 0) goto Label_712;
			}
		}
	Label_717:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_712:
		@ResetAAS();
		var_38_int += 1;
	}
	
}


void func_897(string var_109_string, bool var_110_bool)
{
	object var_112_object;
	@FindActor(var_112_object, var_109_string);
	if(!var_112_object) //@nz
		@Trace(("Door " + var_109_string) + " not found");
	else
		var_112_object->SetProperty("locked", var_110_bool);
	
}
EMIT "Stack[-1] = 0";


void func_914(string var_52_string, int var_53_int)
{
	string var_55_string = "idle";
	if(var_53_int != 0)
		var_55_string += var_53_int;
	var_55_string = var_52_string;
}


void func_921(int var_46_int)
{
	int var_49_int; bool var_50_bool;
	var_49_int = 0;
	
	for(;;) {
		string var_52_string; int var_53_int;
		var_49_int = var_53_int;
		func_914(var_52_string, var_53_int);
		@HasAnimation(var_50_bool, "all", var_52_string);
		if(!var_50_bool) //@nz
			break;
		var_49_int += 1;
	}
	var_49_int = var_46_int;
}


// @pe
void func_167(object var_2_object, string var_123_string)
{
	bool var_124_bool;
	func_994(var_124_bool);
	if(!var_124_bool) //@nz
		return 0;
	if(var_123_string == var_2_object)
		return 0;
	string var_127_string; bool var_128_bool;
	var_123_string = var_127_string;
	if(var_123_string == "")
		var_128_bool = false;
	else
		var_128_bool = true;
	func_843(var_127_string, var_128_bool);
	var_2_object = var_123_string;
	
}


void func_809(void)
{
	bool var_173_bool;
	@CameraSwitchToNormal(true);
	bool var_175_bool;
	func_994(var_175_bool);
	if(var_175_bool != 0) {
	} else {
		@HasAnimationTrack(var_173_bool, "head");
		if(var_173_bool == 0) goto Label_826;
		@UnlookAsync("head");
	}
Label_826:
	
}


// @pe
void func_938(void)
{
	@SetVariable("oob12TBirdmask1", 1);
}


// @pe
void func_944(void)
{
	func_897("itheater@door1", false);
}


void func_560(bool var_18_bool)
{
	var_18_bool = true;
}


// @pe
void func_562(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_21_float, float var_22_float)
{
	bool var_23_bool;
	func_735(var_23_bool);
	if(!var_23_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_21_float;
	var_1_object = var_22_float;
	@SetTimer(10, 1.0);
	func_641();
	if(!false) //@nz
		@KillTimer(10);
}


// @pe
void func_951(void)
{
	@SetVariable("b12q01TheaterIsVisited", 1);
}


void func_827(string var_146_string)
{
	bool var_150_bool; float var_151_float; float var_152_float;
	@lshHasAnimation(var_150_bool, var_146_string);
	if(var_150_bool != 0) {
		@lshGetAnimTimes(var_146_string, var_151_float, var_152_float);
		@lshPlayAnimation(var_151_float, var_152_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_146_string);
	}
	
}


// @pe
void func_957(bool var_95_bool)
{
	int var_97_int;
	func_892(var_97_int, "oob12TBirdmask1");
	if(var_97_int == 0) {
		var_95_bool = true;
		return 0;
	}
	var_95_bool = false;
}


void func_969(int var_79_int)
{
	int var_81_int;
	@GetVariable("branch", var_81_int);
	if(var_81_int == 0) {
		var_79_int = 1;
		return 2;
	EMIT "GOTO 0x3d8";
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
	var_1_object = var_88_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_95_bool;
		func_957(var_1_object);
		if(var_95_bool != 0) {
			object var_103_object; object var_104_object;
			var_103_object = var_1_object;
			var_104_object = var_0_object;
			func_938();
			object var_107_object; object var_108_object;
			var_107_object = var_1_object;
			var_108_object = var_0_object;
			func_944();
			object var_119_object; object var_120_object;
			var_119_object = var_1_object;
			var_120_object = var_0_object;
			func_951();
			func_167(var_89_object, "Neutral");
			var_0_object->SetMessage(522931); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(522932, 24124, 24123); //@t
		} else {
					func_167(var_89_object, "Neutral");
					var_0_object->SetMessage(523192); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(523193, -1, 24396); //@t
					var_0_object->AddReply(523194, -1, 24397); //@t
		}
	}
	for(;;) {
		bool var_144_bool;
		func_994(var_144_bool);
		if(var_144_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_827(var_2_object);
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


void func_843(string var_127_string, bool var_128_bool)
{
	bool var_134_bool; float var_135_float; float var_136_float;
	@lshHasAnimation(var_134_bool, var_127_string);
	if(var_134_bool != 0) {
		@lshGetAnimTimes(var_127_string, var_135_float, var_136_float);
		@lshPlayAnimation(var_135_float, var_136_float, var_128_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_127_string);
	}
	
}


void func_589(object var_0_object, object var_1_object, bool var_4_bool, bool var_15_bool)
{
	if(var_4_bool == null)
		var_15_bool = false;
	float var_19_float;
	func_727(var_19_float, var_4_bool);
	float var_17_float = sqrt(var_19_float);
	if(var_2_object != 0)
		var_17_float -= var_1_object;
	var_15_bool = var_17_float < var_0_object;
}


void func_720(bool var_71_bool)
{
	var_71_bool = true;
}


void func_722(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_727(float var_19_float, object var_20_object)
{
	cvector var_24_cvector;
	@GetPosition(var_24_cvector);
	cvector var_25_cvector;
	var_20_object->GetPosition(var_25_cvector);
	var_19_float = (var_25_cvector - var_24_cvector) | (var_25_cvector - var_24_cvector);
}


void func_986(int var_76_int)
{
	var_76_int = 515571;
}


void func_858(object var_29_object)
{
	float var_32_float;
	var_29_object->GetEyesHeight(var_32_float);
	cvector var_33_cvector = [0.0, 0.0, 0.0];
	var_34_float = GetByIndex(var_33_cvector, 1);
	var_32_float = var_34_float;
	SetByIndex(var_33_cvector, 1) = var_34_float;
	@LookAsync(var_29_object, "head", var_33_cvector);
}


void func_988(int var_75_int)
{
	var_75_int = 504029;
}


void func_990(string var_77_string)
{
	var_77_string = "ui/NPC_bmask.png";
}


void func_735(bool var_23_bool)
{
	bool var_25_bool;
	@IsLoaded(var_25_bool);
	var_25_bool = var_23_bool;
}


void func_992(string var_78_string)
{
	var_78_string = "ui/NPC_bmask_b.png";
}


void func_994(bool var_70_bool)
{
	var_70_bool = false;
}


void func_740(bool var_27_bool, object var_28_object, float var_29_float)
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
	func_882(var_54_cvector, (var_43_cvector ^ [0.0, 1.0, 0.0]));
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
	func_994(var_70_bool);
	if(var_70_bool != 0) {
	} else {
		@HasAnimationTrack(var_47_bool, "head");
		if(var_47_bool == 0) goto Label_803;
		@LookAsyncCamera("head");
	}
Label_803:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_27_bool = true;
	
}


void func_869(void)
{
	bool var_15_bool;
	func_994(var_15_bool);
	if(var_15_bool != 0)
		@lshStopSpeech();
}


void func_876(object var_19_object)
{
	object var_21_object;
	@self(var_21_object);
	var_21_object = var_19_object;
}
EMIT "Stack[-1] = 0";


void func_493(int var_6_int, float var_12_float, float var_13_float)
{
	float var_14_float; bool var_15_bool; float var_16_float; bool var_17_bool;
	var_6_int = false;
	
	for(;;) {
		@rand(var_16_float, 3);
		@Sleep((var_16_float + 3), var_17_bool);
		var_6_int = true;
		float var_21_float; float var_22_float;
		var_12_float = var_21_float;
		func_562(var_22_float, var_14_float, var_15_bool, var_16_float, var_17_bool, var_21_float, var_22_float);
		var_6_int = false;
	}
}
EMIT "Return(); Pop(4)";


void func_882(cvector var_54_cvector, cvector var_55_cvector)
{
	float var_58_float = sqrt(var_55_cvector | var_55_cvector);
	if(var_58_float < 0.000001)
		var_54_cvector = [0.0, 0.0, 0.0];
	var_54_cvector = var_55_cvector / var_58_float;
}


// @pe
void func_627(object var_2_object, string var_3_string)
{
	func_722();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
}


void func_892(int var_97_int, string var_98_string)
{
	int var_100_int;
	@GetVariable(var_98_string, var_100_int);
	var_100_int = var_97_int;
}


void func_511(int var_5_int)
{
	var_5_int = true;
	bool var_15_bool = false;
	bool var_16_bool;
	func_735(var_16_bool);
	if(!var_16_bool) { //@nz
		bool var_20_bool;
		func_560(var_20_bool);
		if(var_20_bool != 0)
			var_15_bool = true;
	}
	if(var_15_bool != 0) {
		object var_21_object;
		func_876(var_21_object);
		@RemoveActor(var_21_object);
	}
}


