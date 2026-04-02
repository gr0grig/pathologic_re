// @GLOBALS: 0:object:

maintask task_0
{
	void init(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool)
	{
		func_15(var_11_bool, (float)300, (float)100);
	}

	// @pe
	void OnUse(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, object var_10_object, string var_11_string, bool var_12_bool)
	{
		func_149(var_11_string, var_12_bool);
		object var_16_object;
		var_12_bool = var_16_object;
		func_1224(var_16_object);
	}

	// @pe
	void OnTrigger(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, bool var_6_bool, string var_7_string, object var_8_object, object var_9_object, object var_10_object, string var_11_string, bool var_12_bool)
	{
		if(var_12_bool == "cleanup")
			func_33(var_12_bool);
	}

	void OnUnload(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool)
	{
		if(var_6_bool != 0)
			func_149(var_10_string, var_11_bool);
		bool var_16_bool = false;
		if(var_5_bool != 0) {
			bool var_18_bool;
			func_82(var_18_bool);
			if(var_18_bool != 0)
				var_16_bool = true;
		}
		if(var_16_bool != 0) {
			object var_19_object;
			func_815(var_19_object);
			@RemoveActor(var_19_object);
		}
	}

	// @pe
	void OnTimer(int iID, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, bool var_6_bool, int var_7_int, object var_8_object, object var_9_object, object var_10_object, string var_11_string, bool var_12_bool)
	{
		if(var_12_bool == 10) {
			bool var_15_bool;
			func_111(var_10_object, var_11_string, var_12_bool, var_15_bool);
			if(var_15_bool != 0) {
				if(!var_2_bool) { //@nz
					func_797(var_4_object);
					var_2_bool = true;
				}
			} else if(var_2_bool != 0) {
				@UnlookAsync("head");
				var_2_bool = false;
			}
		}
	
	}

}


task task_1
{
}


task task_2
{
	// @pe
	void event_11(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, int var_12_int, int var_13_int)
	{
		if(1 != 0) {
			func_808();
			if(var_13_int == 31800) {
				object var_18_object; object var_19_object;
				var_18_object = var_1_int;
				var_19_object = var_0_int;
				func_942();
				object var_67_object = var_1_int;
				func_982(var_0_int);
			}
			if(var_13_int == 31802) {
				object var_95_object; object var_96_object;
				var_95_object = var_1_int;
				var_96_object = var_0_int;
				func_970();
			}
			if(var_13_int == 31804) {
				object var_101_object = var_1_int;
				func_931(var_0_int);
				object var_125_object; object var_126_object;
				var_125_object = var_1_int;
				var_126_object = var_0_int;
				func_976();
			}
			if(var_13_int == 31806) {
				object var_131_object = var_1_int;
				func_931(var_0_int);
				object var_133_object; object var_134_object;
				var_133_object = var_1_int;
				var_134_object = var_0_int;
				func_976();
			}
			if(var_12_int == 31888) {
				bool var_137_bool;
				func_1091(var_1_int);
				if(!var_137_bool) { //@nz
					func_446(var_13_int, "Neutral");
					var_0_int->SetMessage(530541); //@t
					var_0_int->ClearReplies(); //@t
					var_0_int->AddReply(530542, -1, 31889); //@t
					return 0;
				}
				bool var_167_bool;
				func_1067(var_1_int);
				if(var_167_bool != 0) {
					func_446(var_13_int, "Neutral");
					var_0_int->SetMessage(530427); //@t
					var_0_int->ClearReplies(); //@t
					var_0_int->AddReply(530428, -1, 31800); //@t
					return 0;
				}
				func_446(var_13_int, "Neutral");
				var_0_int->SetMessage(530429); //@t
				var_0_int->ClearReplies(); //@t
				bool var_180_bool = false;
				bool var_181_bool = false;
				bool var_182_bool;
				func_1079(var_1_int);
				if(var_182_bool != 0) {
					bool var_188_bool;
					func_1043(var_1_int);
					if(var_188_bool != 0)
						var_181_bool = true;
				}
				if(var_181_bool != 0) {
					bool var_194_bool;
					func_1055(var_1_int);
					if(!var_194_bool) //@nz
						var_180_bool = true;
				}
				if(var_180_bool != 0)
					var_0_int->AddReply(530430, 31803, 31802); //@t
				var_0_int->AddReply(530435, -1, 31807); //@t
				return 0;
			}
			if(var_12_int == 31803) {
				bool var_209_bool;
				func_998(var_1_int);
				if(var_209_bool != 0) {
					func_446(var_13_int, "Neutral");
					var_0_int->SetMessage(530431); //@t
					var_0_int->ClearReplies(); //@t
					var_0_int->AddReply(530432, -1, 31804); //@t
					return 0;
				}
				bool var_235_bool;
				func_998(var_1_int);
				if(!var_235_bool) { //@nz
					func_446(var_13_int, "Neutral");
					var_0_int->SetMessage(530433); //@t
					var_0_int->ClearReplies(); //@t
					var_0_int->AddReply(530434, -1, 31806); //@t
					return 0;
				}
			}
			var_3_bool = true;
			bool var_243_bool;
			func_929(var_243_bool);
			if(var_243_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1d5";
	
	}

}


void func_897(string var_52_string, int var_53_int)
{
	string var_55_string = "idle";
	if(var_53_int != 0)
		var_55_string += var_53_int;
	var_55_string = var_52_string;
}


void func_1157(object var_24_object)
{
	object var_27_object; object var_28_object;
	@GetMainOutdoorScene(var_27_object);
	if(var_27_object == null) {
		@Trace("Can't find main outdoor scene");
		var_28_object = null;
		var_28_object = var_24_object;
	}
	var_27_object->GetMap(var_28_object);
	var_28_object = var_24_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_904(int var_46_int)
{
	int var_49_int; bool var_50_bool;
	var_49_int = 0;
	
	for(;;) {
		string var_52_string; int var_53_int;
		var_49_int = var_53_int;
		func_897(var_52_string, var_53_int);
		@HasAnimation(var_50_bool, "all", var_52_string);
		if(!var_50_bool) //@nz
			break;
		var_49_int += 1;
	}
	var_49_int = var_46_int;
}


void func_782(string var_150_string, bool var_151_bool)
{
	bool var_157_bool; float var_158_float; float var_159_float;
	@lshHasAnimation(var_157_bool, var_150_string);
	if(var_157_bool != 0) {
		@lshGetAnimTimes(var_150_string, var_158_float, var_159_float);
		@lshPlayAnimation(var_158_float, var_159_float, var_151_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_150_string);
	}
	
}


void func_15(bool var_6_bool, float var_12_float, float var_13_float)
{
	float var_14_float; bool var_15_bool; float var_16_float; bool var_17_bool;
	var_6_bool = false;
	
	for(;;) {
		@rand(var_16_float, 3);
		@Sleep((var_16_float + 3), var_17_bool);
		var_6_bool = true;
		float var_21_float; float var_22_float;
		var_12_float = var_21_float;
		func_84(var_22_float, var_14_float, var_15_bool, var_16_float, var_17_bool, var_21_float, var_22_float);
		var_6_bool = false;
	}
}
EMIT "Return(); Pop(4)";


// @pe
void func_1043(bool var_188_bool)
{
	int var_190_int;
	func_831(var_190_int, "b10q04LaskaTalk");
	if(var_190_int == 9)
		var_188_bool = true;
	var_188_bool = false;
}


// @pe
void func_149(bool var_2_bool, bool var_3_bool)
{
	func_244();
	@KillTimer(10);
	if(var_2_bool != 0) {
		@UnlookAsync("head");
		var_2_bool = false;
	}
	var_3_bool = true;
}


void func_1174(object var_69_object, string var_70_string, float var_71_float)
{
	object var_79_object;
	@GetMainOutdoorScene(var_79_object);
	if(var_79_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_77_cvector;
	cvector var_78_cvector;
	bool var_80_bool;
	var_79_object->GetLocator(var_70_string, var_80_bool, var_77_cvector, var_78_cvector);
	if(!var_80_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_70_string) + " doesnt exist");
	var_79_object->GetMap(var_69_object);
	if(var_69_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_90_float = GetByIndex(var_77_cvector, 0);
	var_91_float = GetByIndex(var_77_cvector, 2);
	var_69_object->SetMapParams(var_90_float, var_91_float, var_71_float);
}
EMIT "Stack[-2] = 0";


void func_921(int var_77_int)
{
	var_77_int = 521048;
}


void func_666(float var_19_float, object var_20_object)
{
	cvector var_24_cvector;
	@GetPosition(var_24_cvector);
	cvector var_25_cvector;
	var_20_object->GetPosition(var_25_cvector);
	var_19_float = (var_25_cvector - var_24_cvector) | (var_25_cvector - var_24_cvector);
}


void func_923(int var_76_int)
{
	var_76_int = 521047;
}


void func_925(string var_78_string)
{
	var_78_string = "ui/NPC_Morlok.png";
}


void func_797(object var_29_object)
{
	float var_32_float;
	var_29_object->GetEyesHeight(var_32_float);
	cvector var_33_cvector = [0.0, 0.0, 0.0];
	var_34_float = GetByIndex(var_33_cvector, 1);
	var_32_float = var_34_float;
	SetByIndex(var_33_cvector, 1) = var_34_float;
	@LookAsync(var_29_object, "head", var_33_cvector);
}


// @pe
void func_1055(bool var_194_bool)
{
	int var_196_int;
	func_831(var_196_int, "b10q04");
	if(var_196_int == -1)
		var_194_bool = true;
	var_194_bool = false;
}


void func_927(string var_79_string)
{
	var_79_string = "ui/NPC_Morlok_b.png";
}


void func_33(bool var_5_bool)
{
	var_5_bool = true;
	bool var_15_bool = false;
	bool var_16_bool;
	func_674(var_16_bool);
	if(!var_16_bool) { //@nz
		bool var_20_bool;
		func_82(var_20_bool);
		if(var_20_bool != 0)
			var_15_bool = true;
	}
	if(var_15_bool != 0) {
		object var_21_object;
		func_815(var_21_object);
		@RemoveActor(var_21_object);
	}
}


void func_674(bool var_23_bool)
{
	bool var_25_bool;
	@IsLoaded(var_25_bool);
	var_25_bool = var_23_bool;
}


void func_163(void)
{
	int var_39_int; int var_40_int; bool var_41_bool; float var_42_float; bool var_43_bool;
	@WaitForAnimEnd();
	bool var_44_bool;
	func_674(var_44_bool);
	if(!var_44_bool) //@nz
		return 14;
	int var_46_int;
	func_904(var_46_int);
	int var_37_int;
	var_46_int = var_37_int;
	int var_38_int = 0;
	
	for(;;) {
		bool var_59_bool = false;
		if(var_38_int < 5) {
			bool var_62_bool;
			func_674(var_62_bool);
			if(var_62_bool != 0)
				var_59_bool = true;
		}
		if(var_59_bool != 0) {
			@irand(var_39_int, 3);
			if(var_39_int == 0) {
				if(var_37_int == 0) goto Label_210;
				@irand(var_40_int, var_37_int);
				string var_68_string; int var_69_int;
				var_40_int = var_69_int;
				func_897(var_68_string, var_69_int);
				@PlayAnimation("all", var_68_string);
				@WaitForAnimEnd(var_41_bool);
				if(!var_41_bool) { //@nz
				} else {
			} else {
			if(var_39_int == 1) {
				@rand(var_42_float, 4);
				@Sleep((var_42_float + 1), var_43_bool);
				if(!var_43_bool) { //@nz
					goto Label_239;
				}
			} else if(var_38_int != 0) {
				goto Label_239;
			}
			}
					bool var_71_bool;
					func_242(var_71_bool);
					var_72_bool = !var_71_bool; //@nz
					if(var_72_bool == 0) goto Label_234;
			}
		}
	Label_239:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_234:
		@ResetAAS();
		var_38_int += 1;
	}
	
}


void func_929(bool var_15_bool)
{
	var_15_bool = false;
}


// @pe
void func_931(object var_101_object)
{
	@Trace("avroks blood is given");
	object var_104_object;
	var_101_object = var_104_object;
	func_867(var_104_object, "avroks_blood", 1);
}


void func_679(bool var_28_bool, object var_29_object, float var_30_float)
{
	cvector var_41_cvector; bool var_48_bool;
	var_29_object->GetPosition(var_41_cvector);
	float var_40_float;
	var_29_object->GetEyesHeight(var_40_float);
	var_49_float = GetByIndex(var_41_cvector, 1);
	SetByIndex(var_41_cvector, 1) = (var_49_float + var_40_float);
	cvector var_42_cvector;
	@GetPosition(var_42_cvector);
	@GetEyesHeight(var_40_float);
	var_50_float = GetByIndex(var_42_cvector, 1);
	SetByIndex(var_42_cvector, 1) = (var_50_float + var_40_float);
	cvector var_43_cvector = var_41_cvector - var_42_cvector;
	var_51_float = GetByIndex(var_43_cvector, 1);
	SetByIndex(var_43_cvector, 1) = (float)0;
	var_53_float = sqrt(var_43_cvector | var_43_cvector);
	var_43_cvector /= var_53_float;
	cvector var_44_cvector = -var_43_cvector;
	cvector var_55_cvector;
	func_821(var_55_cvector, (var_44_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_45_cvector = ((var_43_cvector * var_30_float) + (var_55_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_47_bool;
	@IsOverrideActive(var_47_bool);
	if(var_47_bool != 0)
		var_28_bool = false;
	@StopWorld();
	@CameraTransit((var_42_cvector + var_45_cvector), var_44_cvector, true);
	var_69_float = GetByIndex(var_45_cvector, 0);
	var_70_float = GetByIndex(var_45_cvector, 2);
	@Rotate(var_69_float, var_70_float);
	bool var_71_bool;
	func_929(var_71_bool);
	if(var_71_bool != 0) {
	} else {
		@HasAnimationTrack(var_48_bool, "head");
		if(var_48_bool == 0) goto Label_742;
		@LookAsyncCamera("head");
	}
Label_742:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_28_bool = true;
	
}


void func_808(void)
{
	bool var_15_bool;
	func_929(var_15_bool);
	if(var_15_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_1067(bool var_167_bool)
{
	int var_169_int;
	func_831(var_169_int, "b10q04LaskaTalk");
	if(var_169_int == 0) {
		var_167_bool = true;
		return 0;
	}
	var_167_bool = false;
}


void func_942(void)
{
	@SetVariable("b10q04LaskaTalk", 1);
	object var_24_object;
	func_1157(var_24_object);
	object var_21_object;
	var_24_object = var_21_object;
	float var_35_float;
	func_892(var_35_float);
	var_21_object->AddMark("b10q04MorlokGotoLaska", "pt_map_laska", 0, 530551, var_35_float);
	func_1103();
	bool var_61_bool;
	func_880(var_61_bool, "quest_b10_04", "init_storojka");
}
EMIT "Stack[-1] = 0";


void func_815(object var_19_object)
{
	object var_21_object;
	@self(var_21_object);
	var_21_object = var_19_object;
}
EMIT "Stack[-1] = 0";


void func_821(cvector var_55_cvector, cvector var_56_cvector)
{
	float var_59_float = sqrt(var_56_cvector | var_56_cvector);
	if(var_59_float < 0.000001)
		var_55_cvector = [0.0, 0.0, 0.0];
	var_55_cvector = var_56_cvector / var_59_float;
}


void func_1207(int var_80_int)
{
	int var_82_int;
	@GetVariable("branch", var_82_int);
	if(var_82_int == 0) {
		var_80_int = 1;
		return 2;
	EMIT "GOTO 0x4c6";
	}
	if(var_82_int == 1) {
		var_80_int = 2;
		return 2;
	}
	var_80_int = 3;
}


// @pe
void func_1079(bool var_182_bool)
{
	int var_184_int;
	func_831(var_184_int, "oob10MorlokLaska1");
	if(var_184_int == 0) {
		var_182_bool = true;
		return 0;
	}
	var_182_bool = false;
}


// @pe
void func_446(bool var_2_bool, string var_146_string)
{
	bool var_147_bool;
	func_929(var_147_bool);
	if(!var_147_bool) //@nz
		return 0;
	if(var_146_string == var_2_bool)
		return 0;
	string var_150_string; bool var_151_bool;
	var_146_string = var_150_string;
	if(var_146_string == "")
		var_151_bool = false;
	else
		var_151_bool = true;
	func_782(var_150_string, var_151_bool);
	var_2_bool = var_146_string;
	
}


void func_831(int var_139_int, string var_140_string)
{
	int var_142_int;
	@GetVariable(var_140_string, var_142_int);
	var_142_int = var_139_int;
}


// @pe
void func_323(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_89_object, object var_90_object)
{
	var_0_int = var_90_object;
	var_1_int = var_89_object;
	var_3_bool = false;
	if(1 != 0) {
		bool var_96_bool;
		func_1091(var_1_int);
		if(!var_96_bool) { //@nz
			func_446(var_90_object, "Neutral");
			var_0_int->SetMessage(530541); //@t
			var_0_int->ClearReplies(); //@t
			var_0_int->AddReply(530542, -1, 31889); //@t
		} else {
					bool var_144_bool;
					func_1067(var_1_int);
					if(var_144_bool == 0) goto Label_370;
					func_446(var_90_object, "Neutral");
					var_0_int->SetMessage(530427); //@t
					var_0_int->ClearReplies(); //@t
					var_0_int->AddReply(530428, -1, 31800); //@t
		}
	}
Label_416:
	for(;;) {
		bool var_126_bool;
		func_929(var_126_bool);
		if(var_126_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_bool != 0) {
				} else {
					func_766(var_2_bool);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_bool != 0) {
					goto Label_445;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_445:
			return 0;

		}

	}
	
Label_370:
	func_446(var_90_object, "Neutral");
	var_0_int->SetMessage(530429); //@t
	var_0_int->ClearReplies(); //@t
	bool var_157_bool = false;
	bool var_158_bool = false;
	bool var_159_bool;
	func_1079(var_1_int);
	if(var_159_bool != 0) {
		bool var_165_bool;
		func_1043(var_1_int);
		if(var_165_bool != 0)
			var_158_bool = true;
	}
	if(var_158_bool != 0) {
		bool var_171_bool;
		func_1055(var_1_int);
		if(!var_171_bool) //@nz
			var_157_bool = true;
	}
	if(var_157_bool != 0)
		var_0_int->AddReply(530430, 31803, 31802); //@t
	var_0_int->AddReply(530435, -1, 31807); //@t
	goto Label_416;
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x147";


// @pe
void func_1091(bool var_137_bool)
{
	int var_139_int;
	func_831(var_139_int, "b10q04MorlokTalk");
	if(var_139_int != 0) {
		var_137_bool = true;
		return 0;
	}
	var_137_bool = false;
}


void func_836(int var_120_int, int var_121_int)
{
	object var_123_object;
	@CreateIntVector(var_123_object);
	var_123_object->add(var_120_int);
	var_123_object->add(var_121_int);
	@SendWorldWndMessage(3, var_123_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_1224(object var_16_object)
{
	object var_18_object;
	var_16_object = var_18_object;
	TaskCall(1);
	int var_17_int;
	func_249(var_19_object, var_17_int, var_18_object);
	TaskReturn();
}


// @pe
void func_970(void)
{
	@SetVariable("oob10MorlokLaska1", 1);
}


void func_1103(void)
{
	object var_39_object;
	@CreateDiaryEntry(var_39_object, 550, 2, 530441);
	bool var_43_bool; object var_44_object;
	var_39_object = var_44_object;
	func_1129(var_43_bool, var_44_object, 545);
}
EMIT "Stack[-1] = 0";


// @pe
void func_976(void)
{
	@TriggerWorld("playsound", "giveitem");
}


void func_848(object var_109_object, object var_110_object, int var_111_int)
{
	int var_115_int;
	var_110_object->GetItemID(var_115_int);
	int var_116_int;
	@GetInvItemProperty(var_116_int, var_115_int, "Category");
	bool var_117_bool;
	var_109_object->AddItem(var_117_bool, var_110_object, var_116_int, var_111_int);
	if(!var_117_bool) { //@nz
		var_109_object->DropItems(var_110_object, var_111_int);
	} else {
		int var_120_int; int var_121_int;
		var_115_int = var_120_int;
		var_111_int = var_121_int;
		func_836(var_120_int, var_121_int);
	}
	
}


void func_82(bool var_18_bool)
{
	var_18_bool = true;
}


// @pe
void func_84(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, float var_21_float, float var_22_float)
{
	bool var_23_bool;
	func_674(var_23_bool);
	if(!var_23_bool) //@nz
		return 0;
	@FindActor(var_4_object, "player");
	var_2_bool = false;
	var_0_int = var_21_float;
	var_1_int = var_22_float;
	@SetTimer(10, 1.0);
	func_163();
	if(!false) //@nz
		@KillTimer(10);
}


// @pe
void func_982(object var_68_object)
{
	object var_72_object;
	func_1157(var_72_object);
	object var_69_object;
	var_72_object = var_69_object;
	func_1174(var_69_object, "pt_map_laska", (float)2);
	object var_92_object;
	func_1157(var_92_object);
	var_68_object->ShowMap(var_92_object);
}


void func_1116(object var_52_object)
{
	object var_54_object;
	@GetDiaryRoot(var_54_object);
	if(!var_54_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_52_object = false;
	}
	var_54_object = var_52_object;
}
EMIT "Stack[-1] = 0";


void func_867(object var_104_object, string var_105_string, int var_106_int)
{
	object var_108_object;
	@CreateInvItem(var_108_object);
	var_108_object->SetItemName(var_105_string);
	object var_109_object; object var_110_object; int var_111_int;
	var_104_object = var_109_object;
	var_108_object = var_110_object;
	var_106_int = var_111_int;
	func_848(var_109_object, var_110_object, var_111_int);
}
EMIT "Stack[-1] = 0";


// @pe
void func_998(bool var_209_bool)
{
	bool var_211_bool = false;
	bool var_212_bool = false;
	bool var_213_bool = false;
	int var_214_int;
	func_831(var_214_int, "b10q04NotkinTalk");
	if(var_214_int == 9) {
		int var_218_int;
		func_831(var_218_int, "b10q04Spi4kaTalk");
		if(var_218_int == 9)
			var_213_bool = true;
	}
	if(var_213_bool != 0) {
		int var_222_int;
		func_831(var_222_int, "b10q04MishkaTalk");
		if(var_222_int == 9)
			var_212_bool = true;
	}
	if(var_212_bool != 0) {
		int var_226_int;
		func_831(var_226_int, "b10q04LaskaTalk");
		if(var_226_int == 9)
			var_211_bool = true;
	}
	if(var_211_bool != 0) {
		var_209_bool = true;
		return 0;
	}
	var_209_bool = false;
}


void func_1129(bool var_43_bool, object var_44_object, int var_45_int)
{
	object var_52_object;
	func_1116(var_52_object);
	object var_49_object;
	var_52_object = var_49_object;
	object var_50_object;
	var_49_object->Find(var_45_int, var_50_object);
	if(!var_50_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_45_int);
		var_43_bool = false;
	}
	var_50_object->AddChild(var_44_object);
	@SendWorldWndMessage(7);
	int var_51_int;
	var_44_object->GetCategory(var_51_int);
	@SetDiarySection(var_51_int);
	var_43_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_748(void)
{
	bool var_187_bool;
	@CameraSwitchToNormal(true);
	bool var_189_bool;
	func_929(var_189_bool);
	if(var_189_bool != 0) {
	} else {
		@HasAnimationTrack(var_187_bool, "head");
		if(var_187_bool == 0) goto Label_765;
		@UnlookAsync("head");
	}
Label_765:
	
}


void func_111(int var_0_int, int var_1_int, object var_4_object, bool var_15_bool)
{
	if(var_4_object == null)
		var_15_bool = false;
	float var_19_float;
	func_666(var_19_float, var_4_object);
	float var_17_float = sqrt(var_19_float);
	if(var_2_bool != 0)
		var_17_float -= var_1_int;
	var_15_bool = var_17_float < var_0_int;
}


void func_880(bool var_61_bool, string var_62_string, string var_63_string)
{
	object var_65_object;
	@FindActor(var_65_object, var_62_string);
	if(var_65_object == null)
		var_61_bool = false;
	@Trigger(var_65_object, var_63_string);
	var_61_bool = true;
}
EMIT "Stack[-1] = 0";


void func_242(bool var_71_bool)
{
	var_71_bool = true;
}


void func_244(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_249(int var_0_int, int var_17_int, object var_18_object)
{
	var_0_int = var_18_object;
	bool var_28_bool; object var_29_object;
	var_18_object = var_29_object;
	func_679(var_28_bool, var_29_object, 110.0);
	if(!var_28_bool) { //@nz
		var_17_int = -2;
		return 8;
	}
	object var_24_object;
	@CreateDialog(var_24_object);
	int var_76_int;
	func_923(var_76_int);
	var_24_object->SetNPCName(var_76_int);
	int var_77_int;
	func_921(var_77_int);
	var_24_object->SetNPCDescription(var_77_int);
	string var_78_string;
	func_925(var_78_string);
	var_24_object->SetPhoto(var_78_string);
	string var_79_string;
	func_927(var_79_string);
	var_24_object->SetPhoto2(var_79_string);
	int var_80_int;
	func_1207(var_80_int);
	var_24_object->SetPlayerName(var_80_int);
	bool var_25_bool;
	@IsOverrideActive(var_25_bool);
	if(var_25_bool != 0) {
		var_17_int = -2;
		return 8;
	}
	@DoDialog(var_24_object);
	object var_89_object; object var_90_object;
	var_18_object = var_89_object;
	var_24_object = var_90_object;
	TaskCall(2);
	func_323(var_91_object, var_92_object, var_93_string, var_94_bool, var_89_object, var_90_object);
	TaskReturn();
	bool var_27_bool;
	var_24_object->IsDialogEnd(var_27_bool);
	
	for(;;) {
		var_184_bool = !var_27_bool; //@nz
		if(var_184_bool == 0) goto Label_312;
		@sync();
		var_24_object->IsDialogEnd(var_27_bool);
	}
	
Label_312:
	object var_185_object;
	var_18_object = var_185_object;
	func_748();
	@StopDialog(var_24_object);
	var_24_object->GetReturnValue(-1);
	int var_26_int = var_17_int;
}
EMIT "Stack[-4] = 0";


void func_892(float var_35_float)
{
	float var_37_float;
	@GetGameTime(var_37_float);
	var_37_float = var_35_float;
}


void func_766(string var_128_string)
{
	bool var_132_bool; float var_133_float; float var_134_float;
	@lshHasAnimation(var_132_bool, var_128_string);
	if(var_132_bool != 0) {
		@lshGetAnimTimes(var_128_string, var_133_float, var_134_float);
		@lshPlayAnimation(var_133_float, var_134_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_128_string);
	}
	
}


