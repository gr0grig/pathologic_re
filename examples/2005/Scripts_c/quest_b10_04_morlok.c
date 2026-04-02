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
		func_1365(var_15_object);
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
			func_975(var_17_object);
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
					func_957(var_4_object);
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
			func_968();
			if(var_12_int == 31765) {
				object var_17_object; object var_18_object;
				var_17_object = var_1_int;
				var_18_object = var_0_int;
				func_1063();
				object var_60_object; object var_61_object;
				var_60_object = var_1_int;
				var_61_object = var_0_int;
				func_1108();
				object var_64_object = var_1_int;
				func_1047(var_0_int);
			}
			if(var_12_int == 31773) {
				object var_92_object; object var_93_object;
				var_92_object = var_1_int;
				var_93_object = var_0_int;
				func_1086();
			}
			if(var_12_int == 32854) {
				object var_110_object; object var_111_object;
				var_110_object = var_1_int;
				var_111_object = var_0_int;
				func_1086();
			}
			if(var_12_int == 31774) {
				object var_114_object; object var_115_object;
				var_114_object = var_1_int;
				var_115_object = var_0_int;
				func_1102();
			}
			if(var_11_int == 31758) {
				bool var_120_bool = false;
				bool var_121_bool;
				func_1114(var_1_int);
				if(var_121_bool != 0) {
					bool var_129_bool;
					func_1207(var_1_int);
					if(var_129_bool != 0)
						var_120_bool = true;
				}
				if(var_120_bool != 0) {
					object var_135_object; object var_136_object;
					var_135_object = var_1_int;
					var_136_object = var_0_int;
					func_1096();
					func_504(var_12_int, "Neutral");
					var_0_int->SetMessage(530386); //@t
					var_0_int->ClearReplies(); //@t
					var_0_int->AddReply(530387, 31760, 31759); //@t
					var_0_int->AddReply(531497, 31762, 32855); //@t
					return 0;
				}
				bool var_158_bool = false;
				bool var_159_bool = false;
				bool var_160_bool;
				func_1126(var_1_int);
				if(var_160_bool != 0) {
					bool var_181_bool;
					func_1183(var_1_int);
					if(!var_181_bool) //@nz
						var_159_bool = true;
				}
				if(var_159_bool != 0) {
					bool var_188_bool;
					func_1195(var_1_int);
					if(!var_188_bool) //@nz
						var_158_bool = true;
				}
				if(var_158_bool != 0) {
					func_504(var_12_int, "Neutral");
					var_0_int->SetMessage(530396); //@t
					var_0_int->ClearReplies(); //@t
					var_0_int->AddReply(530397, 31770, 31769); //@t
					return 0;
				}
				func_504(var_12_int, "Neutral");
				var_0_int->SetMessage(530394); //@t
				var_0_int->ClearReplies(); //@t
				bool var_202_bool = false;
				bool var_203_bool = false;
				bool var_204_bool = false;
				bool var_205_bool;
				func_1171(var_1_int);
				if(var_205_bool != 0) {
					bool var_211_bool;
					func_1183(var_1_int);
					if(!var_211_bool) //@nz
						var_204_bool = true;
				}
				if(var_204_bool != 0) {
					bool var_214_bool;
					func_1195(var_1_int);
					if(!var_214_bool) //@nz
						var_203_bool = true;
				}
				if(var_203_bool != 0) {
					bool var_217_bool;
					func_1219(var_1_int);
					if(var_217_bool != 0)
						var_202_bool = true;
				}
				if(var_202_bool != 0)
					var_0_int->AddReply(530402, 31775, 31774); //@t
				var_0_int->AddReply(530395, -1, 31767); //@t
				return 0;
			}
			if(var_11_int == 31775) {
				func_504(var_12_int, "Neutral");
				var_0_int->SetMessage(530403); //@t
				var_0_int->ClearReplies(); //@t
				var_0_int->AddReply(530404, -1, 31776); //@t
				return 0;
			}
			if(var_11_int == 31770) {
				func_504(var_12_int, "Neutral");
				var_0_int->SetMessage(530398); //@t
				var_0_int->ClearReplies(); //@t
				var_0_int->AddReply(530399, 31772, 31771); //@t
				var_0_int->AddReply(531496, -1, 32854); //@t
				return 0;
			}
			if(var_11_int == 31772) {
				func_504(var_12_int, "Neutral");
				var_0_int->SetMessage(530400); //@t
				var_0_int->ClearReplies(); //@t
				var_0_int->AddReply(530401, -1, 31773); //@t
				return 0;
			}
			if(var_11_int == 31760) {
				func_504(var_12_int, "Neutral");
				var_0_int->SetMessage(530388); //@t
				var_0_int->ClearReplies(); //@t
				var_0_int->AddReply(530389, 31762, 31761); //@t
				var_0_int->AddReply(531498, 31762, 32857); //@t
				return 0;
			}
			if(var_11_int == 31762) {
				func_504(var_12_int, "Neutral");
				var_0_int->SetMessage(530390); //@t
				var_0_int->ClearReplies(); //@t
				var_0_int->AddReply(530391, 31764, 31763); //@t
				var_0_int->AddReply(531499, 31764, 32859); //@t
				return 0;
			}
			if(var_11_int == 31764) {
				func_504(var_12_int, "Neutral");
				var_0_int->SetMessage(530392); //@t
				var_0_int->ClearReplies(); //@t
				var_0_int->AddReply(530393, -1, 31765); //@t
				return 0;
			}
			var_3_bool = true;
			bool var_280_bool;
			func_1045(var_280_bool);
			if(var_280_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x20f";
	
	}

}


void func_259(int var_0_int, int var_16_int, object var_17_object)
{
	var_0_int = var_17_object;
	bool var_27_bool; object var_28_object;
	var_17_object = var_28_object;
	func_859(var_27_bool, var_28_object, 110.0);
	if(!var_27_bool) { //@nz
		var_16_int = -2;
		return 8;
	}
	object var_23_object;
	@CreateDialog(var_23_object);
	int var_74_int;
	func_1039(var_74_int);
	var_23_object->SetNPCName(var_74_int);
	int var_75_int;
	func_1037(var_75_int);
	var_23_object->SetNPCDescription(var_75_int);
	string var_76_string;
	func_1041(var_76_string);
	var_23_object->SetPhoto(var_76_string);
	string var_77_string;
	func_1043(var_77_string);
	var_23_object->SetPhoto2(var_77_string);
	int var_78_int;
	func_1348(var_78_int);
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
		var_216_bool = !var_26_bool; //@nz
		if(var_216_bool == 0) goto Label_322;
		@sync();
		var_23_object->IsDialogEnd(var_26_bool);
	}
	
Label_322:
	object var_217_object;
	var_17_object = var_217_object;
	func_927();
	@StopDialog(var_23_object);
	var_23_object->GetReturnValue(-1);
	int var_25_int = var_16_int;
}
EMIT "Stack[-4] = 0";


void func_1020(int var_45_int)
{
	int var_48_int; bool var_49_bool;
	var_48_int = 0;
	
	for(;;) {
		string var_51_string; int var_52_int;
		var_48_int = var_52_int;
		func_1013(var_51_string, var_52_int);
		@HasAnimation(var_49_bool, "all", var_51_string);
		if(!var_49_bool) //@nz
			break;
		var_48_int += 1;
	}
	var_48_int = var_45_int;
}


void func_1037(int var_75_int)
{
	var_75_int = 521048;
}


void func_1039(int var_74_int)
{
	var_74_int = 521047;
}


void func_15(float var_11_float, float var_12_float)
{
	
Label_16:
	for(;;) {
		bool var_15_bool;
		func_854(var_15_bool);
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


void func_1041(string var_76_string)
{
	var_76_string = "ui/NPC_Citizen2.png";
}


void func_1298(object var_23_object)
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


void func_1043(string var_77_string)
{
	var_77_string = "ui/NPC_Citizen2_b.png";
}


// @pe
void func_1171(bool var_205_bool)
{
	int var_207_int;
	func_991(var_207_int, "b10q04NotkinTalk");
	if(var_207_int == 9)
		var_205_bool = true;
	var_205_bool = false;
}


void func_1045(bool var_14_bool)
{
	var_14_bool = false;
}


// @pe
void func_1047(object var_65_object)
{
	object var_69_object;
	func_1298(var_69_object);
	object var_66_object;
	var_69_object = var_66_object;
	func_1315(var_66_object, "pt_map_notkin", (float)2);
	object var_89_object;
	func_1298(var_89_object);
	var_65_object->ShowMap(var_89_object);
}


// @pe
void func_1183(bool var_181_bool)
{
	int var_183_int;
	func_991(var_183_int, "b10q04");
	if(var_183_int == 1000)
		var_181_bool = true;
	var_181_bool = false;
}


void func_927(void)
{
	bool var_219_bool;
	@CameraSwitchToNormal();
	bool var_220_bool;
	func_1045(var_220_bool);
	if(var_220_bool != 0) {
	} else {
		@HasAnimationTrack(var_219_bool, "head");
		if(var_219_bool == 0) goto Label_943;
		@UnlookAsync("head");
	}
Label_943:
	
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


void func_1315(object var_66_object, string var_67_string, float var_68_float)
{
	object var_76_object;
	@GetMainOutdoorScene(var_76_object);
	if(var_76_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_74_cvector;
	cvector var_75_cvector;
	bool var_77_bool;
	var_76_object->GetLocator(var_67_string, var_77_bool, var_74_cvector, var_75_cvector);
	if(!var_77_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_67_string) + " doesnt exist");
	var_76_object->GetMap(var_66_object);
	if(var_66_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_87_float = GetByIndex(var_74_cvector, 0);
	var_88_float = GetByIndex(var_74_cvector, 2);
	var_66_object->SetMapParams(var_87_float, var_88_float, var_68_float);
}
EMIT "Stack[-2] = 0";


void func_1063(void)
{
	@SetVariable("b10q04NotkinTalk", 1);
	object var_23_object;
	func_1298(var_23_object);
	object var_20_object;
	var_23_object = var_20_object;
	float var_34_float;
	func_1008(var_34_float);
	var_20_object->AddMark("b10q04MorlokGotoNotkin", "pt_map_notkin", 0, 530549, var_34_float);
	func_1244();
}
EMIT "Stack[-1] = 0";


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
		func_975(var_19_object);
		@RemoveActor(var_19_object);
	}
}


// @pe
void func_1195(bool var_188_bool)
{
	int var_190_int;
	func_991(var_190_int, "b10q04");
	if(var_190_int == -1)
		var_188_bool = true;
	var_188_bool = false;
}


void func_173(void)
{
	int var_38_int; int var_39_int; bool var_40_bool; float var_41_float; bool var_42_bool;
	@WaitForAnimEnd();
	bool var_43_bool;
	func_854(var_43_bool);
	if(!var_43_bool) //@nz
		return 14;
	int var_45_int;
	func_1020(var_45_int);
	int var_36_int;
	var_45_int = var_36_int;
	int var_37_int = 0;
	
	for(;;) {
		bool var_58_bool = false;
		if(var_37_int < 5) {
			bool var_61_bool;
			func_854(var_61_bool);
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
				func_1013(var_67_string, var_68_int);
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


void func_944(string var_134_string)
{
	float var_137_float; float var_138_float;
	@lshGetAnimTimes(var_134_string, var_137_float, var_138_float);
	@lshPlayAnimation(var_137_float, var_138_float, false);
}


// @pe
void func_1207(bool var_129_bool)
{
	int var_131_int;
	func_991(var_131_int, "oob10MorlokMain1");
	if(var_131_int == 0) {
		var_129_bool = true;
		return 0;
	}
	var_129_bool = false;
}


void func_951(string var_143_string, bool var_144_bool)
{
	float var_149_float; float var_150_float;
	@lshGetAnimTimes(var_143_string, var_149_float, var_150_float);
	@lshPlayAnimation(var_149_float, var_150_float, var_144_bool);
}


void func_957(object var_28_object)
{
	float var_31_float;
	var_28_object->GetEyesHeight(var_31_float);
	cvector var_32_cvector = [0.0, 0.0, 0.0];
	var_33_float = GetByIndex(var_32_cvector, 1);
	var_31_float = var_33_float;
	SetByIndex(var_32_cvector, 1) = var_33_float;
	@LookAsync(var_28_object, "head", var_32_cvector);
}


// @pe
void func_1086(void)
{
	func_1231();
	bool var_102_bool;
	func_996(var_102_bool, "quest_b10_04", "completed");
}


// @pe
void func_1219(bool var_217_bool)
{
	int var_219_int;
	func_991(var_219_int, "oob10MorlokMain2");
	if(var_219_int == 0) {
		var_217_bool = true;
		return 0;
	}
	var_217_bool = false;
}


void func_1348(int var_78_int)
{
	int var_80_int;
	@GetVariable("branch", var_80_int);
	if(var_80_int == 0) {
		var_78_int = 1;
		return 2;
	EMIT "GOTO 0x553";
	}
	if(var_80_int == 1) {
		var_78_int = 2;
		return 2;
	}
	var_78_int = 3;
}


// @pe
void func_1096(void)
{
	@SetVariable("oob10MorlokMain1", 1);
}


void func_968(void)
{
	bool var_14_bool;
	func_1045(var_14_bool);
	if(var_14_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_333(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_87_object, object var_88_object)
{
	var_0_int = var_88_object;
	var_1_int = var_87_object;
	var_3_bool = false;
	if(1 != 0) {
		bool var_94_bool = false;
		bool var_95_bool;
		func_1114(var_1_int);
		if(var_95_bool != 0) {
			bool var_103_bool;
			func_1207(var_1_int);
			if(var_103_bool != 0)
				var_94_bool = true;
		}
		if(var_94_bool != 0) {
			object var_109_object; object var_110_object;
			var_109_object = var_1_int;
			var_110_object = var_0_int;
			func_1096();
			func_504(var_88_object, "Neutral");
			var_0_int->SetMessage(530386); //@t
			var_0_int->ClearReplies(); //@t
			var_0_int->AddReply(530387, 31760, 31759); //@t
			var_0_int->AddReply(531497, 31762, 32855); //@t
		} else {
					bool var_145_bool = false;
					bool var_146_bool = false;
					bool var_147_bool;
					func_1126(var_1_int);
					if(var_147_bool != 0) {
						bool var_168_bool;
						func_1183(var_1_int);
						if(!var_168_bool) //@nz
							var_146_bool = true;
					}
					if(var_146_bool != 0) {
						bool var_175_bool;
						func_1195(var_1_int);
						if(!var_175_bool) //@nz
							var_145_bool = true;
					}
					if(var_145_bool == 0) goto Label_418;
					func_504(var_88_object, "Neutral");
					var_0_int->SetMessage(530396); //@t
					var_0_int->ClearReplies(); //@t
					var_0_int->AddReply(530397, 31770, 31769); //@t
		}
	}
Label_474:
	for(;;) {
		bool var_132_bool;
		func_1045(var_132_bool);
		if(var_132_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_bool != 0) {
				} else {
					func_944(var_2_bool);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_bool != 0) {
					goto Label_503;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_503:
			return 0;

		}

	}
	
Label_418:
	func_504(var_88_object, "Neutral");
	var_0_int->SetMessage(530394); //@t
	var_0_int->ClearReplies(); //@t
	bool var_189_bool = false;
	bool var_190_bool = false;
	bool var_191_bool = false;
	bool var_192_bool;
	func_1171(var_1_int);
	if(var_192_bool != 0) {
		bool var_198_bool;
		func_1183(var_1_int);
		if(!var_198_bool) //@nz
			var_191_bool = true;
	}
	if(var_191_bool != 0) {
		bool var_201_bool;
		func_1195(var_1_int);
		if(!var_201_bool) //@nz
			var_190_bool = true;
	}
	if(var_190_bool != 0) {
		bool var_204_bool;
		func_1219(var_1_int);
		if(var_204_bool != 0)
			var_189_bool = true;
	}
	if(var_189_bool != 0)
		var_0_int->AddReply(530402, 31775, 31774); //@t
	var_0_int->AddReply(530395, -1, 31767); //@t
	goto Label_474;
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x151";


void func_846(float var_18_float, object var_19_object)
{
	cvector var_23_cvector;
	@GetPosition(var_23_cvector);
	cvector var_24_cvector;
	var_19_object->GetPosition(var_24_cvector);
	var_18_float = (var_24_cvector - var_23_cvector) | (var_24_cvector - var_23_cvector);
}


void func_975(object var_17_object)
{
	object var_19_object;
	@self(var_19_object);
	var_19_object = var_17_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1102(void)
{
	@SetVariable("oob10MorlokMain2", 1);
}


void func_1231(void)
{
	object var_95_object;
	@CreateDiaryEntry(var_95_object, 560, 2, 530539);
	bool var_99_bool; object var_100_object;
	var_95_object = var_100_object;
	func_1270(var_99_bool, var_100_object, 545);
}
EMIT "Stack[-1] = 0";


// @pe
void func_1108(void)
{
	@SetVariable("b10q04MorlokTalk", 1);
}


// @pe
void func_1365(object var_15_object)
{
	object var_17_object;
	var_15_object = var_17_object;
	TaskCall(1);
	int var_16_int;
	func_259(var_18_object, var_16_int, var_17_object);
	TaskReturn();
}


void func_854(bool var_15_bool)
{
	bool var_17_bool;
	@IsLoaded(var_17_bool);
	var_17_bool = var_15_bool;
}


void func_981(cvector var_54_cvector, cvector var_55_cvector)
{
	float var_58_float = sqrt(var_55_cvector | var_55_cvector);
	if(var_58_float < 0.000001)
		var_54_cvector = [0.0, 0.0, 0.0];
	var_54_cvector = var_55_cvector / var_58_float;
}


// @pe
void func_1114(bool var_121_bool)
{
	int var_123_int;
	func_991(var_123_int, "b10q04");
	if(var_123_int == 1)
		var_121_bool = true;
	var_121_bool = false;
}


void func_859(bool var_27_bool, object var_28_object, float var_29_float)
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
	func_981(var_54_cvector, (var_43_cvector ^ [0.0, 1.0, 0.0]));
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
	func_1045(var_69_bool);
	if(var_69_bool != 0) {
	} else {
		@HasAnimationTrack(var_47_bool, "head");
		if(var_47_bool == 0) goto Label_921;
		@LookAsyncCamera("head");
	}
Label_921:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_27_bool = true;
	
}


void func_92(bool var_16_bool)
{
	var_16_bool = true;
}


void func_1244(void)
{
	object var_38_object;
	@CreateDiaryEntry(var_38_object, 547, 2, 530438);
	bool var_42_bool; object var_43_object;
	var_38_object = var_43_object;
	func_1270(var_42_bool, var_43_object, 545);
}
EMIT "Stack[-1] = 0";


// @pe
void func_94(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, float var_22_float, float var_23_float)
{
	bool var_24_bool;
	func_854(var_24_bool);
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


void func_991(int var_123_int, string var_124_string)
{
	int var_126_int;
	@GetVariable(var_124_string, var_126_int);
	var_126_int = var_123_int;
}


void func_996(bool var_102_bool, string var_103_string, string var_104_string)
{
	object var_106_object;
	@FindActor(var_106_object, var_103_string);
	if(var_106_object == null)
		var_102_bool = false;
	@Trigger(var_106_object, var_104_string);
	var_102_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1126(bool var_160_bool)
{
	bool var_162_bool = false;
	bool var_163_bool = false;
	bool var_164_bool = false;
	int var_165_int;
	func_991(var_165_int, "b10q04NotkinTalk");
	if(var_165_int == 9) {
		int var_169_int;
		func_991(var_169_int, "b10q04Spi4kaTalk");
		if(var_169_int == 9)
			var_164_bool = true;
	}
	if(var_164_bool != 0) {
		int var_173_int;
		func_991(var_173_int, "b10q04MishkaTalk");
		if(var_173_int == 9)
			var_163_bool = true;
	}
	if(var_163_bool != 0) {
		int var_177_int;
		func_991(var_177_int, "b10q04LaskaTalk");
		if(var_177_int == 9)
			var_162_bool = true;
	}
	if(var_162_bool != 0) {
		var_160_bool = true;
		return 0;
	}
	var_160_bool = false;
}


void func_1257(object var_51_object)
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


void func_1008(float var_34_float)
{
	float var_36_float;
	@GetGameTime(var_36_float);
	var_36_float = var_34_float;
}


void func_1013(string var_51_string, int var_52_int)
{
	string var_54_string = "idle";
	if(var_52_int != 0)
		var_54_string += var_52_int;
	var_54_string = var_51_string;
}


void func_1270(bool var_42_bool, object var_43_object, int var_44_int)
{
	object var_51_object;
	func_1257(var_51_object);
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


// @pe
void func_504(bool var_2_bool, string var_139_string)
{
	bool var_140_bool;
	func_1045(var_140_bool);
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
	func_951(var_143_string, var_144_bool);
	var_2_bool = var_139_string;
	
}


void func_121(int var_0_int, int var_1_int, object var_4_object, bool var_14_bool)
{
	if(var_4_object == null)
		var_14_bool = false;
	float var_18_float;
	func_846(var_18_float, var_4_object);
	float var_16_float = sqrt(var_18_float);
	if(var_2_bool != 0)
		var_16_float -= var_1_int;
	var_14_bool = var_16_float < var_0_int;
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


