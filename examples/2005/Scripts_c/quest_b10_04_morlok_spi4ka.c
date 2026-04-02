// @GLOBALS: 0:object:

maintask task_0
{
	void init(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool)
	{
		func_15((float)300, (float)100);
	}

	// @pe
	void OnUse(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool)
	{
		func_159(var_10_string, var_11_bool);
		object var_15_object;
		var_11_bool = var_15_object;
		func_1229(var_15_object);
	}

	// @pe
	void OnTrigger(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, string var_6_string, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool)
	{
		if(var_11_bool == "cleanup")
			func_40(var_11_bool);
	}

	void OnLoad(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool)
	{
		@StopGroup0();
		@sync();
	}

	// @pe
	void OnUnload(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool)
	{
		func_159(var_9_string, var_10_bool);
		bool var_14_bool = false;
		if(var_5_bool != 0) {
			bool var_16_bool;
			func_92(var_16_bool);
			if(var_16_bool != 0)
				var_14_bool = true;
		}
		if(var_14_bool != 0) {
			object var_17_object;
			func_825(var_17_object);
			@RemoveActor(var_17_object);
		}
	}

	// @pe
	void OnTimer(int iID, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool)
	{
		if(var_11_bool == 10) {
			bool var_14_bool;
			func_121(var_9_object, var_10_string, var_11_bool, var_14_bool);
			if(var_14_bool != 0) {
				if(!var_2_bool) { //@nz
					func_807(var_4_object);
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
	void event_11(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, int var_11_int, int var_12_int)
	{
		if(1 != 0) {
			func_818();
			if(var_12_int == 31779) {
				object var_17_object; object var_18_object;
				var_17_object = var_1_int;
				var_18_object = var_0_int;
				func_940();
				object var_60_object = var_1_int;
				func_975(var_0_int);
			}
			if(var_12_int == 31781) {
				object var_88_object; object var_89_object;
				var_88_object = var_1_int;
				var_89_object = var_0_int;
				func_963();
			}
			if(var_12_int == 31783) {
				object var_94_object = var_1_int;
				func_929(var_0_int);
				object var_118_object; object var_119_object;
				var_118_object = var_1_int;
				var_119_object = var_0_int;
				func_969();
			}
			if(var_12_int == 31785) {
				object var_124_object = var_1_int;
				func_929(var_0_int);
				object var_126_object; object var_127_object;
				var_126_object = var_1_int;
				var_127_object = var_0_int;
				func_969();
			}
			if(var_11_int == 31892) {
				bool var_130_bool;
				func_1096(var_1_int);
				if(!var_130_bool) { //@nz
					func_466(var_12_int, "Neutral");
					var_0_int->SetMessage(530545); //@t
					var_0_int->ClearReplies(); //@t
					var_0_int->AddReply(530546, -1, 31893); //@t
					return 0;
				}
				bool var_155_bool;
				func_1084(var_1_int);
				if(var_155_bool != 0) {
					func_466(var_12_int, "Neutral");
					var_0_int->SetMessage(530406); //@t
					var_0_int->ClearReplies(); //@t
					var_0_int->AddReply(530407, -1, 31779); //@t
					return 0;
				}
				func_466(var_12_int, "Neutral");
				var_0_int->SetMessage(530408); //@t
				var_0_int->ClearReplies(); //@t
				bool var_168_bool = false;
				bool var_169_bool = false;
				bool var_170_bool = false;
				bool var_171_bool;
				func_1036(var_1_int);
				if(var_171_bool != 0) {
					bool var_177_bool;
					func_1072(var_1_int);
					if(var_177_bool != 0)
						var_170_bool = true;
				}
				if(var_170_bool != 0) {
					bool var_183_bool;
					func_1060(var_1_int);
					if(!var_183_bool) //@nz
						var_169_bool = true;
				}
				if(var_169_bool != 0) {
					bool var_190_bool;
					func_1048(var_1_int);
					if(!var_190_bool) //@nz
						var_168_bool = true;
				}
				if(var_168_bool != 0)
					var_0_int->AddReply(530409, 31782, 31781); //@t
				var_0_int->AddReply(530414, -1, 31786); //@t
				return 0;
			}
			if(var_11_int == 31782) {
				bool var_205_bool;
				func_991(var_1_int);
				if(var_205_bool != 0) {
					func_466(var_12_int, "Neutral");
					var_0_int->SetMessage(530410); //@t
					var_0_int->ClearReplies(); //@t
					var_0_int->AddReply(530411, -1, 31783); //@t
					return 0;
				}
				bool var_231_bool;
				func_991(var_1_int);
				if(!var_231_bool) { //@nz
					func_466(var_12_int, "Neutral");
					var_0_int->SetMessage(530412); //@t
					var_0_int->ClearReplies(); //@t
					var_0_int->AddReply(530413, -1, 31785); //@t
					return 0;
				}
			}
			var_3_bool = true;
			bool var_239_bool;
			func_927(var_239_bool);
			if(var_239_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1e9";
	
	}

}


void func_259(int var_0_int, int var_16_int, object var_17_object)
{
	var_0_int = var_17_object;
	bool var_27_bool; object var_28_object;
	var_17_object = var_28_object;
	func_709(var_27_bool, var_28_object, 110.0);
	if(!var_27_bool) { //@nz
		var_16_int = -2;
		return 8;
	}
	object var_23_object;
	@CreateDialog(var_23_object);
	int var_74_int;
	func_921(var_74_int);
	var_23_object->SetNPCName(var_74_int);
	int var_75_int;
	func_919(var_75_int);
	var_23_object->SetNPCDescription(var_75_int);
	string var_76_string;
	func_923(var_76_string);
	var_23_object->SetPhoto(var_76_string);
	string var_77_string;
	func_925(var_77_string);
	var_23_object->SetPhoto2(var_77_string);
	int var_78_int;
	func_1212(var_78_int);
	var_23_object->SetPlayerName(var_78_int);
	bool var_24_bool;
	@IsOverrideActive(var_24_bool);
	if(var_24_bool != 0) {
		var_16_int = -2;
		return 8;
	}
	@DoDialog(var_23_object);
	object var_87_object; object var_88_object;
	var_17_object = var_87_object;
	var_23_object = var_88_object;
	TaskCall(2);
	func_333(var_89_object, var_90_object, var_91_string, var_92_bool, var_87_object, var_88_object);
	TaskReturn();
	bool var_26_bool;
	var_23_object->IsDialogEnd(var_26_bool);
	
	for(;;) {
		var_180_bool = !var_26_bool; //@nz
		if(var_180_bool == 0) goto Label_322;
		@sync();
		var_23_object->IsDialogEnd(var_26_bool);
	}
	
Label_322:
	object var_181_object;
	var_17_object = var_181_object;
	func_777();
	@StopDialog(var_23_object);
	var_23_object->GetReturnValue(-1);
	int var_25_int = var_16_int;
}
EMIT "Stack[-4] = 0";


void func_902(int var_45_int)
{
	int var_48_int; bool var_49_bool;
	var_48_int = 0;
	
	for(;;) {
		string var_51_string; int var_52_int;
		var_48_int = var_52_int;
		func_895(var_51_string, var_52_int);
		@HasAnimation(var_49_bool, "all", var_51_string);
		if(!var_49_bool) //@nz
			break;
		var_48_int += 1;
	}
	var_48_int = var_45_int;
}


void func_777(void)
{
	bool var_183_bool;
	@CameraSwitchToNormal();
	bool var_184_bool;
	func_927(var_184_bool);
	if(var_184_bool != 0) {
	} else {
		@HasAnimationTrack(var_183_bool, "head");
		if(var_183_bool == 0) goto Label_793;
		@UnlookAsync("head");
	}
Label_793:
	
}


void func_1162(object var_23_object)
{
	object var_26_object; object var_27_object;
	@GetMainOutdoorScene(var_26_object);
	if(var_26_object == null) {
		@Trace("Can't find main outdoor scene");
		var_27_object = null;
		var_27_object = var_23_object;
	}
	var_26_object->GetMap(var_27_object);
	var_27_object = var_23_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_1036(bool var_171_bool)
{
	int var_173_int;
	func_841(var_173_int, "b10q04Spi4kaTalk");
	if(var_173_int == 9)
		var_171_bool = true;
	var_171_bool = false;
}


void func_15(float var_11_float, float var_12_float)
{
	
Label_16:
	for(;;) {
		bool var_15_bool;
		func_704(var_15_bool);
		var_18_bool = !var_15_bool; //@nz
		if(var_18_bool == 0) goto Label_24;
		@Hold();
	}
	
Label_24:
	float var_14_float;
	@rand(var_14_float, 3);
	@Sleep(var_14_float + 3);
	float var_22_float; float var_23_float;
	float var_13_float;
	func_94(var_10_bool, var_22_float, var_23_float, var_13_float, var_14_float, var_22_float, var_23_float);
	@sync();
	goto Label_16;
}
EMIT "Return(); Pop(2)";


void func_919(int var_75_int)
{
	var_75_int = 521048;
}


// @pe
void func_1048(bool var_190_bool)
{
	int var_192_int;
	func_841(var_192_int, "b10q04");
	if(var_192_int == 1000)
		var_190_bool = true;
	var_190_bool = false;
}


void func_921(int var_74_int)
{
	var_74_int = 521047;
}


void func_794(string var_121_string)
{
	float var_124_float; float var_125_float;
	@lshGetAnimTimes(var_121_string, var_124_float, var_125_float);
	@lshPlayAnimation(var_124_float, var_125_float, false);
}


void func_1179(object var_62_object, string var_63_string, float var_64_float)
{
	object var_72_object;
	@GetMainOutdoorScene(var_72_object);
	if(var_72_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_70_cvector;
	cvector var_71_cvector;
	bool var_73_bool;
	var_72_object->GetLocator(var_63_string, var_73_bool, var_70_cvector, var_71_cvector);
	if(!var_73_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_63_string) + " doesnt exist");
	var_72_object->GetMap(var_62_object);
	if(var_62_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_83_float = GetByIndex(var_70_cvector, 0);
	var_84_float = GetByIndex(var_70_cvector, 2);
	var_62_object->SetMapParams(var_83_float, var_84_float, var_64_float);
}
EMIT "Stack[-2] = 0";


void func_923(string var_76_string)
{
	var_76_string = "ui/NPC_Citizen2.png";
}


void func_925(string var_77_string)
{
	var_77_string = "ui/NPC_Citizen2_b.png";
}


void func_927(bool var_14_bool)
{
	var_14_bool = false;
}


// @pe
void func_159(bool var_2_bool, bool var_3_bool)
{
	func_254();
	@KillTimer(10);
	if(var_2_bool != 0) {
		@UnlookAsync("head");
		var_2_bool = false;
	}
	var_3_bool = true;
}


void func_801(string var_143_string, bool var_144_bool)
{
	float var_149_float; float var_150_float;
	@lshGetAnimTimes(var_143_string, var_149_float, var_150_float);
	@lshPlayAnimation(var_149_float, var_150_float, var_144_bool);
}


// @pe
void func_929(object var_94_object)
{
	@Trace("avroks blood is given");
	object var_97_object;
	var_94_object = var_97_object;
	func_877(var_97_object, "avroks_blood", 1);
}


// @pe
void func_1060(bool var_183_bool)
{
	int var_185_int;
	func_841(var_185_int, "b10q04");
	if(var_185_int == -1)
		var_183_bool = true;
	var_183_bool = false;
}


void func_807(object var_28_object)
{
	float var_31_float;
	var_28_object->GetEyesHeight(var_31_float);
	cvector var_32_cvector = [0.0, 0.0, 0.0];
	var_33_float = GetByIndex(var_32_cvector, 1);
	var_31_float = var_33_float;
	SetByIndex(var_32_cvector, 1) = var_33_float;
	@LookAsync(var_28_object, "head", var_32_cvector);
}


void func_40(bool var_5_bool)
{
	var_5_bool = true;
	bool var_15_bool;
	@IsLoaded(var_15_bool);
	bool var_16_bool = false;
	if(!var_15_bool) { //@nz
		bool var_18_bool;
		func_92(var_18_bool);
		if(var_18_bool != 0)
			var_16_bool = true;
	}
	if(var_16_bool != 0) {
		object var_19_object;
		func_825(var_19_object);
		@RemoveActor(var_19_object);
	}
}


void func_940(void)
{
	@SetVariable("b10q04Spi4kaTalk", 1);
	object var_23_object;
	func_1162(var_23_object);
	object var_20_object;
	var_23_object = var_20_object;
	float var_34_float;
	func_890(var_34_float);
	var_20_object->AddMark("b10q04MorlokGotoSpi4ka", "pt_map_spi4ka", 0, 530552, var_34_float);
	func_1108();
}
EMIT "Stack[-1] = 0";


void func_173(void)
{
	int var_38_int; int var_39_int; bool var_40_bool; float var_41_float; bool var_42_bool;
	@WaitForAnimEnd();
	bool var_43_bool;
	func_704(var_43_bool);
	if(!var_43_bool) //@nz
		return 14;
	int var_45_int;
	func_902(var_45_int);
	int var_36_int;
	var_45_int = var_36_int;
	int var_37_int = 0;
	
	for(;;) {
		bool var_58_bool = false;
		if(var_37_int < 5) {
			bool var_61_bool;
			func_704(var_61_bool);
			if(var_61_bool != 0)
				var_58_bool = true;
		}
		if(var_58_bool != 0) {
			@irand(var_38_int, 3);
			if(var_38_int == 0) {
				if(var_36_int == 0) goto Label_220;
				@irand(var_39_int, var_36_int);
				string var_67_string; int var_68_int;
				var_39_int = var_68_int;
				func_895(var_67_string, var_68_int);
				@PlayAnimation("all", var_67_string);
				@WaitForAnimEnd(var_40_bool);
				if(!var_40_bool) { //@nz
				} else {
			} else {
			if(var_38_int == 1) {
				@rand(var_41_float, 4);
				@Sleep((var_41_float + 1), var_42_bool);
				if(!var_42_bool) { //@nz
					goto Label_249;
				}
			} else if(var_37_int != 0) {
				goto Label_249;
			}
			}
					bool var_70_bool;
					func_252(var_70_bool);
					var_71_bool = !var_70_bool; //@nz
					if(var_71_bool == 0) goto Label_244;
			}
		}
	Label_249:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_244:
		@ResetAAS();
		var_37_int += 1;
	}
	
}


// @pe
void func_1072(bool var_177_bool)
{
	int var_179_int;
	func_841(var_179_int, "oob10MorlokSpi4ka1");
	if(var_179_int == 0) {
		var_177_bool = true;
		return 0;
	}
	var_177_bool = false;
}


void func_818(void)
{
	bool var_14_bool;
	func_927(var_14_bool);
	if(var_14_bool != 0)
		@lshStopSpeech();
}


void func_696(float var_18_float, object var_19_object)
{
	cvector var_23_cvector;
	@GetPosition(var_23_cvector);
	cvector var_24_cvector;
	var_19_object->GetPosition(var_24_cvector);
	var_18_float = (var_24_cvector - var_23_cvector) | (var_24_cvector - var_23_cvector);
}


void func_825(object var_17_object)
{
	object var_19_object;
	@self(var_19_object);
	var_19_object = var_17_object;
}
EMIT "Stack[-1] = 0";


void func_1212(int var_78_int)
{
	int var_80_int;
	@GetVariable("branch", var_80_int);
	if(var_80_int == 0) {
		var_78_int = 1;
		return 2;
	EMIT "GOTO 0x4cb";
	}
	if(var_80_int == 1) {
		var_78_int = 2;
		return 2;
	}
	var_78_int = 3;
}


// @pe
void func_1084(bool var_155_bool)
{
	int var_157_int;
	func_841(var_157_int, "b10q04Spi4kaTalk");
	if(var_157_int == 0) {
		var_155_bool = true;
		return 0;
	}
	var_155_bool = false;
}


void func_831(cvector var_54_cvector, cvector var_55_cvector)
{
	float var_58_float = sqrt(var_55_cvector | var_55_cvector);
	if(var_58_float < 0.000001)
		var_54_cvector = [0.0, 0.0, 0.0];
	var_54_cvector = var_55_cvector / var_58_float;
}


void func_704(bool var_15_bool)
{
	bool var_17_bool;
	@IsLoaded(var_17_bool);
	var_17_bool = var_15_bool;
}


// @pe
void func_963(void)
{
	@SetVariable("oob10MorlokSpi4ka1", 1);
}


void func_709(bool var_27_bool, object var_28_object, float var_29_float)
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
	func_831(var_54_cvector, (var_43_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_44_cvector = ((var_42_cvector * var_29_float) + (var_54_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_46_bool;
	@IsOverrideActive(var_46_bool);
	if(var_46_bool != 0)
		var_27_bool = false;
	@StopWorld();
	@CameraTransit((var_41_cvector + var_44_cvector), var_43_cvector);
	var_67_float = GetByIndex(var_44_cvector, 0);
	var_68_float = GetByIndex(var_44_cvector, 2);
	@Rotate(var_67_float, var_68_float);
	bool var_69_bool;
	func_927(var_69_bool);
	if(var_69_bool != 0) {
	} else {
		@HasAnimationTrack(var_47_bool, "head");
		if(var_47_bool == 0) goto Label_771;
		@LookAsyncCamera("head");
	}
Label_771:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_27_bool = true;
	
}


// @pe
void func_1096(bool var_130_bool)
{
	int var_132_int;
	func_841(var_132_int, "b10q04MorlokTalk");
	if(var_132_int != 0) {
		var_130_bool = true;
		return 0;
	}
	var_130_bool = false;
}


// @pe
void func_969(void)
{
	@TriggerWorld("playsound", "giveitem");
}


void func_841(int var_132_int, string var_133_string)
{
	int var_135_int;
	@GetVariable(var_133_string, var_135_int);
	var_135_int = var_132_int;
}


// @pe
void func_1229(object var_15_object)
{
	object var_17_object;
	var_15_object = var_17_object;
	TaskCall(1);
	int var_16_int;
	func_259(var_18_object, var_16_int, var_17_object);
	TaskReturn();
}


// @pe
void func_333(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_87_object, object var_88_object)
{
	var_0_int = var_88_object;
	var_1_int = var_87_object;
	var_3_bool = false;
	if(1 != 0) {
		bool var_94_bool;
		func_1096(var_1_int);
		if(!var_94_bool) { //@nz
			func_466(var_88_object, "Neutral");
			var_0_int->SetMessage(530545); //@t
			var_0_int->ClearReplies(); //@t
			var_0_int->AddReply(530546, -1, 31893); //@t
		} else {
					bool var_132_bool;
					func_1084(var_1_int);
					if(var_132_bool == 0) goto Label_380;
					func_466(var_88_object, "Neutral");
					var_0_int->SetMessage(530406); //@t
					var_0_int->ClearReplies(); //@t
					var_0_int->AddReply(530407, -1, 31779); //@t
		}
	}
Label_436:
	for(;;) {
		bool var_119_bool;
		func_927(var_119_bool);
		if(var_119_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_bool != 0) {
				} else {
					func_794(var_2_bool);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_bool != 0) {
					goto Label_465;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_465:
			return 0;

		}

	}
	
Label_380:
	func_466(var_88_object, "Neutral");
	var_0_int->SetMessage(530408); //@t
	var_0_int->ClearReplies(); //@t
	bool var_145_bool = false;
	bool var_146_bool = false;
	bool var_147_bool = false;
	bool var_148_bool;
	func_1036(var_1_int);
	if(var_148_bool != 0) {
		bool var_154_bool;
		func_1072(var_1_int);
		if(var_154_bool != 0)
			var_147_bool = true;
	}
	if(var_147_bool != 0) {
		bool var_160_bool;
		func_1060(var_1_int);
		if(!var_160_bool) //@nz
			var_146_bool = true;
	}
	if(var_146_bool != 0) {
		bool var_167_bool;
		func_1048(var_1_int);
		if(!var_167_bool) //@nz
			var_145_bool = true;
	}
	if(var_145_bool != 0)
		var_0_int->AddReply(530409, 31782, 31781); //@t
	var_0_int->AddReply(530414, -1, 31786); //@t
	goto Label_436;
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x151";


// @pe
void func_975(object var_61_object)
{
	object var_65_object;
	func_1162(var_65_object);
	object var_62_object;
	var_65_object = var_62_object;
	func_1179(var_62_object, "pt_map_spi4ka", (float)2);
	object var_85_object;
	func_1162(var_85_object);
	var_61_object->ShowMap(var_85_object);
}


void func_846(int var_113_int, int var_114_int)
{
	object var_116_object;
	@CreateIntVector(var_116_object);
	var_116_object->add(var_113_int);
	var_116_object->add(var_114_int);
	@SendWorldWndMessage(3, var_116_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_466(bool var_2_bool, string var_139_string)
{
	bool var_140_bool;
	func_927(var_140_bool);
	if(!var_140_bool) //@nz
		return 0;
	if(var_139_string == var_2_bool)
		return 0;
	string var_143_string; bool var_144_bool;
	var_139_string = var_143_string;
	if(var_139_string == "")
		var_144_bool = false;
	else
		var_144_bool = true;
	func_801(var_143_string, var_144_bool);
	var_2_bool = var_139_string;
	
}


void func_1108(void)
{
	object var_38_object;
	@CreateDiaryEntry(var_38_object, 548, 2, 530439);
	bool var_42_bool; object var_43_object;
	var_38_object = var_43_object;
	func_1134(var_42_bool, var_43_object, 545);
}
EMIT "Stack[-1] = 0";


void func_858(object var_102_object, object var_103_object, int var_104_int)
{
	int var_108_int;
	var_103_object->GetItemID(var_108_int);
	int var_109_int;
	@GetInvItemProperty(var_109_int, var_108_int, "Category");
	bool var_110_bool;
	var_102_object->AddItem(var_110_bool, var_103_object, var_109_int, var_104_int);
	if(!var_110_bool) { //@nz
		var_102_object->DropItems(var_103_object, var_104_int);
	} else {
		int var_113_int; int var_114_int;
		var_108_int = var_113_int;
		var_104_int = var_114_int;
		func_846(var_113_int, var_114_int);
	}
	
}


void func_92(bool var_16_bool)
{
	var_16_bool = true;
}


// @pe
void func_94(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, float var_22_float, float var_23_float)
{
	bool var_24_bool;
	func_704(var_24_bool);
	if(!var_24_bool) //@nz
		return 0;
	@FindActor(var_4_object, "player");
	var_2_bool = false;
	var_0_int = var_22_float;
	var_1_int = var_23_float;
	@SetTimer(10, 1.0);
	func_173();
	if(!false) //@nz
		@KillTimer(10);
}


// @pe
void func_991(bool var_205_bool)
{
	bool var_207_bool = false;
	bool var_208_bool = false;
	bool var_209_bool = false;
	int var_210_int;
	func_841(var_210_int, "b10q04NotkinTalk");
	if(var_210_int == 9) {
		int var_214_int;
		func_841(var_214_int, "b10q04Spi4kaTalk");
		if(var_214_int == 9)
			var_209_bool = true;
	}
	if(var_209_bool != 0) {
		int var_218_int;
		func_841(var_218_int, "b10q04MishkaTalk");
		if(var_218_int == 9)
			var_208_bool = true;
	}
	if(var_208_bool != 0) {
		int var_222_int;
		func_841(var_222_int, "b10q04LaskaTalk");
		if(var_222_int == 9)
			var_207_bool = true;
	}
	if(var_207_bool != 0) {
		var_205_bool = true;
		return 0;
	}
	var_205_bool = false;
}


void func_1121(object var_51_object)
{
	object var_53_object;
	@GetDiaryRoot(var_53_object);
	if(!var_53_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_51_object = false;
	}
	var_53_object = var_51_object;
}
EMIT "Stack[-1] = 0";


void func_877(object var_97_object, string var_98_string, int var_99_int)
{
	object var_101_object;
	@CreateInvItem(var_101_object);
	var_101_object->SetItemName(var_98_string);
	object var_102_object; object var_103_object; int var_104_int;
	var_97_object = var_102_object;
	var_101_object = var_103_object;
	var_99_int = var_104_int;
	func_858(var_102_object, var_103_object, var_104_int);
}
EMIT "Stack[-1] = 0";


void func_1134(bool var_42_bool, object var_43_object, int var_44_int)
{
	object var_51_object;
	func_1121(var_51_object);
	object var_48_object;
	var_51_object = var_48_object;
	object var_49_object;
	var_48_object->Find(var_44_int, var_49_object);
	if(!var_49_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_44_int);
		var_42_bool = false;
	}
	var_49_object->AddChild(var_43_object);
	@SendWorldWndMessage(7);
	int var_50_int;
	var_43_object->GetCategory(var_50_int);
	@SetDiarySection(var_50_int);
	var_42_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_121(int var_0_int, int var_1_int, object var_4_object, bool var_14_bool)
{
	if(var_4_object == null)
		var_14_bool = false;
	float var_18_float;
	func_696(var_18_float, var_4_object);
	float var_16_float = sqrt(var_18_float);
	if(var_2_bool != 0)
		var_16_float -= var_1_int;
	var_14_bool = var_16_float < var_0_int;
}


void func_890(float var_34_float)
{
	float var_36_float;
	@GetGameTime(var_36_float);
	var_36_float = var_34_float;
}


void func_252(bool var_70_bool)
{
	var_70_bool = true;
}


void func_254(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_895(string var_51_string, int var_52_int)
{
	string var_54_string = "idle";
	if(var_52_int != 0)
		var_54_string += var_52_int;
	var_54_string = var_51_string;
}


