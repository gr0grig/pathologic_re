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
			func_798();
			if(var_13_bool == 24105) {
				object var_18_object; object var_19_object;
				var_18_object = var_1_object;
				var_19_object = var_0_object;
				func_843();
			}
			if(var_13_bool == 24118) {
				object var_24_object; object var_25_object;
				var_24_object = var_1_object;
				var_25_object = var_0_object;
				func_849();
			}
			if(var_12_bool == 24104) {
				object var_30_object; object var_31_object;
				var_30_object = var_1_object;
				var_31_object = var_0_object;
				func_855();
				object var_42_object; object var_43_object;
				var_42_object = var_1_object;
				var_43_object = var_0_object;
				func_894();
				object var_46_object; object var_47_object;
				var_46_object = var_1_object;
				var_47_object = var_0_object;
				func_862();
				func_162(var_13_bool, "Neutral");
				var_0_object->SetMessage(522914); //@t
				var_0_object->ClearReplies(); //@t
				bool var_111_bool;
				func_900(var_1_object);
				if(var_111_bool != 0)
					var_0_object->AddReply(522915, 37091, 24105); //@t
				bool var_120_bool;
				func_912(var_1_object);
				if(var_120_bool != 0)
					var_0_object->AddReply(522927, 24119, 24118); //@t
				var_0_object->AddReply(522926, -1, 24117); //@t
				return 0;
			}
			if(var_12_bool == 24119) {
				func_162(var_13_bool, "Neutral");
				var_0_object->SetMessage(522928); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522929, -1, 24120); //@t
				var_0_object->AddReply(522930, -1, 24121); //@t
				return 0;
			}
			if(var_12_bool == 37091) {
				func_162(var_13_bool, "Neutral");
				var_0_object->SetMessage(535411); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535412, 37093, 37092); //@t
				return 0;
			}
			if(var_12_bool == 37093) {
				func_162(var_13_bool, "Neutral");
				var_0_object->SetMessage(535413); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535414, 24106, 37094); //@t
				var_0_object->AddReply(535415, -1, 37095); //@t
				return 0;
			}
			if(var_12_bool == 24106) {
				func_162(var_13_bool, "Neutral");
				var_0_object->SetMessage(522916); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522917, 24108, 24107); //@t
				return 0;
			}
			if(var_12_bool == 24108) {
				func_162(var_13_bool, "Neutral");
				var_0_object->SetMessage(522918); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522920, -1, 24110); //@t
				var_0_object->AddReply(522921, 24112, 24111); //@t
				var_0_object->AddReply(522925, 24112, 24115); //@t
				return 0;
			}
			if(var_12_bool == 24112) {
				func_162(var_13_bool, "Neutral");
				var_0_object->SetMessage(522922); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522923, -1, 24113); //@t
				var_0_object->AddReply(522924, -1, 24114); //@t
				return 0;
			}
			var_3_string = true;
			bool var_189_bool;
			func_1020(var_189_bool);
			if(var_189_bool != 0)
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
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool)
	{
		func_422(var_11_bool, (float)300, (float)100);
	}

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool, object var_12_object)
	{
		func_556(var_11_bool, var_12_object);
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
			func_440(var_12_string);
	}

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool)
	{
		if(var_6_int != 0)
			func_556(var_10_bool, var_11_bool);
		bool var_16_bool = false;
		if(var_5_int != 0) {
			bool var_18_bool;
			func_489(var_18_bool);
			if(var_18_bool != 0)
				var_16_bool = true;
		}
		if(var_16_bool != 0) {
			object var_19_object;
			func_805(var_19_object);
			@RemoveActor(var_19_object);
		}
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool, int var_12_int)
	{
		if(var_12_int == 10) {
			bool var_15_bool;
			func_518(var_10_bool, var_11_bool, var_12_int, var_15_bool);
			if(var_15_bool != 0) {
				if(!var_2_object) { //@nz
					func_787(var_4_bool);
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
	func_669(var_27_bool, var_28_object, 70.0);
	if(!var_27_bool) { //@nz
		var_16_int = -2;
		return 8;
	}
	object var_23_object;
	@CreateDialog(var_23_object);
	int var_75_int;
	func_1014(var_75_int);
	var_23_object->SetNPCName(var_75_int);
	int var_76_int;
	func_1012(var_76_int);
	var_23_object->SetNPCDescription(var_76_int);
	string var_77_string;
	func_1016(var_77_string);
	var_23_object->SetPhoto(var_77_string);
	string var_78_string;
	func_1018(var_78_string);
	var_23_object->SetPhoto2(var_78_string);
	int var_79_int;
	func_995(var_79_int);
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
		var_215_bool = !var_26_bool; //@nz
		if(var_215_bool == 0) goto Label_63;
		@sync();
		var_23_object->IsDialogEnd(var_26_bool);
	}
	
Label_63:
	object var_216_object;
	var_17_object = var_216_object;
	func_738();
	@StopDialog(var_23_object);
	var_23_object->GetReturnValue(-1);
	int var_25_int = var_16_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_900(bool var_176_bool)
{
	int var_178_int;
	func_821(var_178_int, "oob12Littlegirl1");
	if(var_178_int == 0) {
		var_176_bool = true;
		return 0;
	}
	var_176_bool = false;
}


void func_1029(int var_46_int)
{
	int var_49_int; bool var_50_bool;
	var_49_int = 0;
	
	for(;;) {
		string var_52_string; int var_53_int;
		var_49_int = var_53_int;
		func_1022(var_52_string, var_53_int);
		@HasAnimation(var_50_bool, "all", var_52_string);
		if(!var_50_bool) //@nz
			break;
		var_49_int += 1;
	}
	var_49_int = var_46_int;
}


void func_772(string var_162_string, bool var_163_bool)
{
	bool var_169_bool; float var_170_float; float var_171_float;
	@lshHasAnimation(var_169_bool, var_162_string);
	if(var_169_bool != 0) {
		@lshGetAnimTimes(var_162_string, var_170_float, var_171_float);
		@lshPlayAnimation(var_170_float, var_171_float, var_163_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_162_string);
	}
	
}


void func_518(object var_0_object, object var_1_object, bool var_4_bool, bool var_15_bool)
{
	if(var_4_bool == null)
		var_15_bool = false;
	float var_19_float;
	func_656(var_19_float, var_4_bool);
	float var_17_float = sqrt(var_19_float);
	if(var_2_object != 0)
		var_17_float -= var_1_object;
	var_15_bool = var_17_float < var_0_object;
}


void func_649(bool var_71_bool)
{
	var_71_bool = true;
}


void func_651(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_912(bool var_185_bool)
{
	int var_187_int;
	func_821(var_187_int, "oob12Littlegirl2");
	if(var_187_int == 0) {
		var_185_bool = true;
		return 0;
	}
	var_185_bool = false;
}


void func_656(float var_19_float, object var_20_object)
{
	cvector var_24_cvector;
	@GetPosition(var_24_cvector);
	cvector var_25_cvector;
	var_20_object->GetPosition(var_25_cvector);
	var_19_float = (var_25_cvector - var_24_cvector) | (var_25_cvector - var_24_cvector);
}


// @pe
void func_894(void)
{
	@SetVariable("b12q01ChildsAreVisited", 1);
}


void func_787(object var_29_object)
{
	float var_32_float;
	var_29_object->GetEyesHeight(var_32_float);
	cvector var_33_cvector = [0.0, 0.0, 0.0];
	var_34_float = GetByIndex(var_33_cvector, 1);
	var_32_float = var_34_float;
	SetByIndex(var_33_cvector, 1) = var_34_float;
	@LookAsync(var_29_object, "head", var_33_cvector);
}


void func_664(bool var_23_bool)
{
	bool var_25_bool;
	@IsLoaded(var_25_bool);
	var_25_bool = var_23_bool;
}


void func_924(void)
{
	object var_122_object;
	@CreateDiaryEntry(var_122_object, 566, 0, 530580);
	bool var_126_bool; object var_127_object;
	var_122_object = var_127_object;
	func_950(var_126_bool, var_127_object, -1);
}
EMIT "Stack[-1] = 0";


void func_669(bool var_27_bool, object var_28_object, float var_29_float)
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
	func_811(var_54_cvector, (var_43_cvector ^ [0.0, 1.0, 0.0]));
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
	func_1020(var_70_bool);
	if(var_70_bool != 0) {
	} else {
		@HasAnimationTrack(var_47_bool, "head");
		if(var_47_bool == 0) goto Label_732;
		@LookAsyncCamera("head");
	}
Label_732:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_27_bool = true;
	
}


void func_798(void)
{
	bool var_15_bool;
	func_1020(var_15_bool);
	if(var_15_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_162(object var_2_object, string var_158_string)
{
	bool var_159_bool;
	func_1020(var_159_bool);
	if(!var_159_bool) //@nz
		return 0;
	if(var_158_string == var_2_object)
		return 0;
	string var_162_string; bool var_163_bool;
	var_158_string = var_162_string;
	if(var_158_string == "")
		var_163_bool = false;
	else
		var_163_bool = true;
	func_772(var_162_string, var_163_bool);
	var_2_object = var_158_string;
	
}


void func_805(object var_19_object)
{
	object var_21_object;
	@self(var_21_object);
	var_21_object = var_19_object;
}
EMIT "Stack[-1] = 0";


void func_422(int var_6_int, float var_12_float, float var_13_float)
{
	float var_14_float; bool var_15_bool; float var_16_float; bool var_17_bool;
	var_6_int = false;
	
	for(;;) {
		@rand(var_16_float, 3);
		@Sleep((var_16_float + 3), var_17_bool);
		var_6_int = true;
		float var_21_float; float var_22_float;
		var_12_float = var_21_float;
		func_491(var_22_float, var_14_float, var_15_bool, var_16_float, var_17_bool, var_21_float, var_22_float);
		var_6_int = false;
	}
}
EMIT "Return(); Pop(4)";


void func_937(object var_135_object)
{
	object var_137_object;
	@GetDiaryRoot(var_137_object);
	if(!var_137_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_135_object = false;
	}
	var_137_object = var_135_object;
}
EMIT "Stack[-1] = 0";


void func_811(cvector var_54_cvector, cvector var_55_cvector)
{
	float var_58_float = sqrt(var_55_cvector | var_55_cvector);
	if(var_58_float < 0.000001)
		var_54_cvector = [0.0, 0.0, 0.0];
	var_54_cvector = var_55_cvector / var_58_float;
}


// @pe
void func_556(object var_2_object, string var_3_string)
{
	func_651();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
}


void func_821(int var_113_int, string var_114_string)
{
	int var_116_int;
	@GetVariable(var_114_string, var_116_int);
	var_116_int = var_113_int;
}


void func_950(bool var_126_bool, object var_127_object, int var_128_int)
{
	object var_135_object;
	func_937(var_135_object);
	object var_132_object;
	var_135_object = var_132_object;
	object var_133_object;
	var_132_object->Find(var_128_int, var_133_object);
	if(!var_133_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_128_int);
		var_126_bool = false;
	}
	var_133_object->AddChild(var_127_object);
	@SendWorldWndMessage(7);
	int var_134_int;
	var_127_object->GetCategory(var_134_int);
	@SetDiarySection(var_134_int);
	var_126_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_440(int var_5_int)
{
	var_5_int = true;
	bool var_15_bool = false;
	bool var_16_bool;
	func_664(var_16_bool);
	if(!var_16_bool) { //@nz
		bool var_20_bool;
		func_489(var_20_bool);
		if(var_20_bool != 0)
			var_15_bool = true;
	}
	if(var_15_bool != 0) {
		object var_21_object;
		func_805(var_21_object);
		@RemoveActor(var_21_object);
	}
}


void func_570(void)
{
	int var_39_int; int var_40_int; bool var_41_bool; float var_42_float; bool var_43_bool;
	@WaitForAnimEnd();
	bool var_44_bool;
	func_664(var_44_bool);
	if(!var_44_bool) //@nz
		return 14;
	int var_46_int;
	func_1029(var_46_int);
	int var_37_int;
	var_46_int = var_37_int;
	int var_38_int = 0;
	
	for(;;) {
		bool var_59_bool = false;
		if(var_38_int < 5) {
			bool var_62_bool;
			func_664(var_62_bool);
			if(var_62_bool != 0)
				var_59_bool = true;
		}
		if(var_59_bool != 0) {
			@irand(var_39_int, 3);
			if(var_39_int == 0) {
				if(var_37_int == 0) goto Label_617;
				@irand(var_40_int, var_37_int);
				string var_68_string; int var_69_int;
				var_40_int = var_69_int;
				func_1022(var_68_string, var_69_int);
				@PlayAnimation("all", var_68_string);
				@WaitForAnimEnd(var_41_bool);
				if(!var_41_bool) { //@nz
				} else {
			} else {
			if(var_39_int == 1) {
				@rand(var_42_float, 4);
				@Sleep((var_42_float + 1), var_43_bool);
				if(!var_43_bool) { //@nz
					goto Label_646;
				}
			} else if(var_38_int != 0) {
				goto Label_646;
			}
			}
					bool var_71_bool;
					func_649(var_71_bool);
					var_72_bool = !var_71_bool; //@nz
					if(var_72_bool == 0) goto Label_641;
			}
		}
	Label_646:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_641:
		@ResetAAS();
		var_38_int += 1;
	}
	
}


void func_826(string var_97_string, bool var_98_bool)
{
	object var_100_object;
	@FindActor(var_100_object, var_97_string);
	if(!var_100_object) //@nz
		@Trace(("Door " + var_97_string) + " not found");
	else
		var_100_object->SetProperty("locked", var_98_bool);
	
}
EMIT "Stack[-1] = 0";


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_88_object, object var_89_object)
{
	var_0_object = var_89_object;
	var_1_object = var_88_object;
	var_3_string = false;
	if(1 != 0) {
		object var_95_object; object var_96_object;
		var_95_object = var_1_object;
		var_96_object = var_0_object;
		func_855();
		object var_107_object; object var_108_object;
		var_107_object = var_1_object;
		var_108_object = var_0_object;
		func_894();
		object var_111_object; object var_112_object;
		var_111_object = var_1_object;
		var_112_object = var_0_object;
		func_862();
		func_162(var_89_object, "Neutral");
		var_0_object->SetMessage(522914); //@t
		var_0_object->ClearReplies(); //@t
		bool var_176_bool;
		func_900(var_1_object);
		if(var_176_bool != 0)
			var_0_object->AddReply(522915, 37091, 24105); //@t
		bool var_185_bool;
		func_912(var_1_object);
		if(var_185_bool != 0)
			var_0_object->AddReply(522927, 24119, 24118); //@t
		var_0_object->AddReply(522926, -1, 24117); //@t
		goto Label_132;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_132:
	bool var_197_bool;
	func_1020(var_197_bool);
	if(var_197_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_756(var_2_object);
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


// @pe
void func_843(void)
{
	@SetVariable("oob12Littlegirl1", 1);
}


// @pe
void func_849(void)
{
	@SetVariable("oob12Littlegirl2", 1);
}


void func_978(bool var_144_bool, int var_145_int)
{
	object var_150_object;
	func_937(var_150_object);
	object var_148_object;
	var_150_object = var_148_object;
	object var_149_object;
	var_148_object->Find(var_145_int, var_149_object);
	if(!var_149_object) //@nz
		var_144_bool = false;
	var_149_object->Remove();
	var_144_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_855(void)
{
	func_826("mnogogrannik@door2", false);
}


// @pe
void func_862(void)
{
	int var_113_int;
	func_821(var_113_int, "B_Mission5");
	if(var_113_int == 0) {
		@SetVariable("B_Mission5", 1);
		func_924();
		bool var_144_bool;
		func_978(var_144_bool, 562);
		bool var_152_bool;
		func_978(var_152_bool, 563);
		bool var_154_bool;
		func_978(var_154_bool, 564);
		bool var_156_bool;
		func_978(var_156_bool, 565);
	}
}


void func_738(void)
{
	bool var_218_bool;
	@CameraSwitchToNormal(true);
	bool var_220_bool;
	func_1020(var_220_bool);
	if(var_220_bool != 0) {
	} else {
		@HasAnimationTrack(var_218_bool, "head");
		if(var_218_bool == 0) goto Label_755;
		@UnlookAsync("head");
	}
Label_755:
	
}


void func_995(int var_79_int)
{
	int var_81_int;
	@GetVariable("branch", var_81_int);
	if(var_81_int == 0) {
		var_79_int = 1;
		return 2;
	EMIT "GOTO 0x3f2";
	}
	if(var_81_int == 1) {
		var_79_int = 2;
		return 2;
	}
	var_79_int = 3;
}


void func_489(bool var_18_bool)
{
	var_18_bool = true;
}


// @pe
void func_491(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_21_float, float var_22_float)
{
	bool var_23_bool;
	func_664(var_23_bool);
	if(!var_23_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_21_float;
	var_1_object = var_22_float;
	@SetTimer(10, 1.0);
	func_570();
	if(!false) //@nz
		@KillTimer(10);
}


void func_1012(int var_76_int)
{
	var_76_int = 515561;
}


void func_756(string var_199_string)
{
	bool var_203_bool; float var_204_float; float var_205_float;
	@lshHasAnimation(var_203_bool, var_199_string);
	if(var_203_bool != 0) {
		@lshGetAnimTimes(var_199_string, var_204_float, var_205_float);
		@lshPlayAnimation(var_204_float, var_205_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_199_string);
	}
	
}


void func_1014(int var_75_int)
{
	var_75_int = 503346;
}


void func_1016(string var_77_string)
{
	var_77_string = "ui/NPC_Citizen1.png";
}


void func_1018(string var_78_string)
{
	var_78_string = "ui/NPC_Citizen1_b.png";
}


void func_1020(bool var_70_bool)
{
	var_70_bool = false;
}


void func_1022(string var_52_string, int var_53_int)
{
	string var_55_string = "idle";
	if(var_53_int != 0)
		var_55_string += var_53_int;
	var_55_string = var_52_string;
}


