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
		func_1375(var_16_object);
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
			func_985(var_19_object);
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
					func_967(var_4_object);
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
			func_978();
			if(var_13_int == 31765) {
				object var_18_object; object var_19_object;
				var_18_object = var_1_int;
				var_19_object = var_0_int;
				func_1073();
				object var_61_object; object var_62_object;
				var_61_object = var_1_int;
				var_62_object = var_0_int;
				func_1118();
				object var_65_object = var_1_int;
				func_1057(var_0_int);
			}
			if(var_13_int == 31773) {
				object var_93_object; object var_94_object;
				var_93_object = var_1_int;
				var_94_object = var_0_int;
				func_1096();
			}
			if(var_13_int == 32854) {
				object var_111_object; object var_112_object;
				var_111_object = var_1_int;
				var_112_object = var_0_int;
				func_1096();
			}
			if(var_13_int == 31774) {
				object var_115_object; object var_116_object;
				var_115_object = var_1_int;
				var_116_object = var_0_int;
				func_1112();
			}
			if(var_12_int == 31758) {
				bool var_121_bool = false;
				bool var_122_bool;
				func_1124(var_1_int);
				if(var_122_bool != 0) {
					bool var_130_bool;
					func_1217(var_1_int);
					if(var_130_bool != 0)
						var_121_bool = true;
				}
				if(var_121_bool != 0) {
					object var_136_object; object var_137_object;
					var_136_object = var_1_int;
					var_137_object = var_0_int;
					func_1106();
					func_494(var_13_int, "Neutral");
					var_0_int->SetMessage(530386); //@t
					var_0_int->ClearReplies(); //@t
					var_0_int->AddReply(530387, 31760, 31759); //@t
					var_0_int->AddReply(531497, 31762, 32855); //@t
					return 0;
				}
				bool var_164_bool = false;
				bool var_165_bool = false;
				bool var_166_bool;
				func_1136(var_1_int);
				if(var_166_bool != 0) {
					bool var_187_bool;
					func_1193(var_1_int);
					if(!var_187_bool) //@nz
						var_165_bool = true;
				}
				if(var_165_bool != 0) {
					bool var_194_bool;
					func_1205(var_1_int);
					if(!var_194_bool) //@nz
						var_164_bool = true;
				}
				if(var_164_bool != 0) {
					func_494(var_13_int, "Neutral");
					var_0_int->SetMessage(530396); //@t
					var_0_int->ClearReplies(); //@t
					var_0_int->AddReply(530397, 31770, 31769); //@t
					return 0;
				}
				func_494(var_13_int, "Neutral");
				var_0_int->SetMessage(530394); //@t
				var_0_int->ClearReplies(); //@t
				bool var_208_bool = false;
				bool var_209_bool = false;
				bool var_210_bool = false;
				bool var_211_bool;
				func_1181(var_1_int);
				if(var_211_bool != 0) {
					bool var_217_bool;
					func_1193(var_1_int);
					if(!var_217_bool) //@nz
						var_210_bool = true;
				}
				if(var_210_bool != 0) {
					bool var_220_bool;
					func_1205(var_1_int);
					if(!var_220_bool) //@nz
						var_209_bool = true;
				}
				if(var_209_bool != 0) {
					bool var_223_bool;
					func_1229(var_1_int);
					if(var_223_bool != 0)
						var_208_bool = true;
				}
				if(var_208_bool != 0)
					var_0_int->AddReply(530402, 31775, 31774); //@t
				var_0_int->AddReply(530395, -1, 31767); //@t
				return 0;
			}
			if(var_12_int == 31775) {
				func_494(var_13_int, "Neutral");
				var_0_int->SetMessage(530403); //@t
				var_0_int->ClearReplies(); //@t
				var_0_int->AddReply(530404, -1, 31776); //@t
				return 0;
			}
			if(var_12_int == 31770) {
				func_494(var_13_int, "Neutral");
				var_0_int->SetMessage(530398); //@t
				var_0_int->ClearReplies(); //@t
				var_0_int->AddReply(530399, 31772, 31771); //@t
				var_0_int->AddReply(531496, -1, 32854); //@t
				return 0;
			}
			if(var_12_int == 31772) {
				func_494(var_13_int, "Neutral");
				var_0_int->SetMessage(530400); //@t
				var_0_int->ClearReplies(); //@t
				var_0_int->AddReply(530401, -1, 31773); //@t
				return 0;
			}
			if(var_12_int == 31760) {
				func_494(var_13_int, "Neutral");
				var_0_int->SetMessage(530388); //@t
				var_0_int->ClearReplies(); //@t
				var_0_int->AddReply(530389, 31762, 31761); //@t
				var_0_int->AddReply(531498, 31762, 32857); //@t
				return 0;
			}
			if(var_12_int == 31762) {
				func_494(var_13_int, "Neutral");
				var_0_int->SetMessage(530390); //@t
				var_0_int->ClearReplies(); //@t
				var_0_int->AddReply(530391, 31764, 31763); //@t
				var_0_int->AddReply(531499, 31764, 32859); //@t
				return 0;
			}
			if(var_12_int == 31764) {
				func_494(var_13_int, "Neutral");
				var_0_int->SetMessage(530392); //@t
				var_0_int->ClearReplies(); //@t
				var_0_int->AddReply(530393, -1, 31765); //@t
				return 0;
			}
			var_3_bool = true;
			bool var_286_bool;
			func_1055(var_286_bool);
			if(var_286_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x205";
	
	}

}


void func_1280(bool var_43_bool, object var_44_object, int var_45_int)
{
	object var_52_object;
	func_1267(var_52_object);
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


void func_1030(int var_46_int)
{
	int var_49_int; bool var_50_bool;
	var_49_int = 0;
	
	for(;;) {
		string var_52_string; int var_53_int;
		var_49_int = var_53_int;
		func_1023(var_52_string, var_53_int);
		@HasAnimation(var_50_bool, "all", var_52_string);
		if(!var_50_bool) //@nz
			break;
		var_49_int += 1;
	}
	var_49_int = var_46_int;
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


void func_918(void)
{
	bool var_231_bool;
	@CameraSwitchToNormal(true);
	bool var_233_bool;
	func_1055(var_233_bool);
	if(var_233_bool != 0) {
	} else {
		@HasAnimationTrack(var_231_bool, "head");
		if(var_231_bool == 0) goto Label_935;
		@UnlookAsync("head");
	}
Label_935:
	
}


void func_1047(int var_77_int)
{
	var_77_int = 521048;
}


void func_1049(int var_76_int)
{
	var_76_int = 521047;
}


void func_1051(string var_78_string)
{
	var_78_string = "ui/NPC_Morlok.png";
}


void func_1308(object var_24_object)
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


// @pe
void func_1181(bool var_211_bool)
{
	int var_213_int;
	func_1001(var_213_int, "b10q04NotkinTalk");
	if(var_213_int == 9)
		var_211_bool = true;
	var_211_bool = false;
}


void func_1053(string var_79_string)
{
	var_79_string = "ui/NPC_Morlok_b.png";
}


void func_1055(bool var_15_bool)
{
	var_15_bool = false;
}


void func_33(bool var_5_bool)
{
	var_5_bool = true;
	bool var_15_bool = false;
	bool var_16_bool;
	func_844(var_16_bool);
	if(!var_16_bool) { //@nz
		bool var_20_bool;
		func_82(var_20_bool);
		if(var_20_bool != 0)
			var_15_bool = true;
	}
	if(var_15_bool != 0) {
		object var_21_object;
		func_985(var_21_object);
		@RemoveActor(var_21_object);
	}
}


// @pe
void func_1057(object var_66_object)
{
	object var_70_object;
	func_1308(var_70_object);
	object var_67_object;
	var_70_object = var_67_object;
	func_1325(var_67_object, "pt_map_notkin", (float)2);
	object var_90_object;
	func_1308(var_90_object);
	var_66_object->ShowMap(var_90_object);
}


void func_163(void)
{
	int var_39_int; int var_40_int; bool var_41_bool; float var_42_float; bool var_43_bool;
	@WaitForAnimEnd();
	bool var_44_bool;
	func_844(var_44_bool);
	if(!var_44_bool) //@nz
		return 14;
	int var_46_int;
	func_1030(var_46_int);
	int var_37_int;
	var_46_int = var_37_int;
	int var_38_int = 0;
	
	for(;;) {
		bool var_59_bool = false;
		if(var_38_int < 5) {
			bool var_62_bool;
			func_844(var_62_bool);
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
				func_1023(var_68_string, var_69_int);
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


void func_936(string var_141_string)
{
	bool var_145_bool; float var_146_float; float var_147_float;
	@lshHasAnimation(var_145_bool, var_141_string);
	if(var_145_bool != 0) {
		@lshGetAnimTimes(var_141_string, var_146_float, var_147_float);
		@lshPlayAnimation(var_146_float, var_147_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_141_string);
	}
	
}


// @pe
void func_1193(bool var_187_bool)
{
	int var_189_int;
	func_1001(var_189_int, "b10q04");
	if(var_189_int == 1000)
		var_187_bool = true;
	var_187_bool = false;
}


void func_1325(object var_67_object, string var_68_string, float var_69_float)
{
	object var_77_object;
	@GetMainOutdoorScene(var_77_object);
	if(var_77_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_75_cvector;
	cvector var_76_cvector;
	bool var_78_bool;
	var_77_object->GetLocator(var_68_string, var_78_bool, var_75_cvector, var_76_cvector);
	if(!var_78_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_68_string) + " doesnt exist");
	var_77_object->GetMap(var_67_object);
	if(var_67_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_88_float = GetByIndex(var_75_cvector, 0);
	var_89_float = GetByIndex(var_75_cvector, 2);
	var_67_object->SetMapParams(var_88_float, var_89_float, var_69_float);
}
EMIT "Stack[-2] = 0";


void func_1073(void)
{
	@SetVariable("b10q04NotkinTalk", 1);
	object var_24_object;
	func_1308(var_24_object);
	object var_21_object;
	var_24_object = var_21_object;
	float var_35_float;
	func_1018(var_35_float);
	var_21_object->AddMark("b10q04MorlokGotoNotkin", "pt_map_notkin", 0, 530549, var_35_float);
	func_1254();
}
EMIT "Stack[-1] = 0";


// @pe
void func_1205(bool var_194_bool)
{
	int var_196_int;
	func_1001(var_196_int, "b10q04");
	if(var_196_int == -1)
		var_194_bool = true;
	var_194_bool = false;
}


void func_952(string var_144_string, bool var_145_bool)
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


// @pe
void func_1217(bool var_130_bool)
{
	int var_132_int;
	func_1001(var_132_int, "oob10MorlokMain1");
	if(var_132_int == 0) {
		var_130_bool = true;
		return 0;
	}
	var_130_bool = false;
}


// @pe
void func_323(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_89_object, object var_90_object)
{
	var_0_int = var_90_object;
	var_1_int = var_89_object;
	var_3_bool = false;
	if(1 != 0) {
		bool var_96_bool = false;
		bool var_97_bool;
		func_1124(var_1_int);
		if(var_97_bool != 0) {
			bool var_105_bool;
			func_1217(var_1_int);
			if(var_105_bool != 0)
				var_96_bool = true;
		}
		if(var_96_bool != 0) {
			object var_111_object; object var_112_object;
			var_111_object = var_1_int;
			var_112_object = var_0_int;
			func_1106();
			func_494(var_90_object, "Neutral");
			var_0_int->SetMessage(530386); //@t
			var_0_int->ClearReplies(); //@t
			var_0_int->AddReply(530387, 31760, 31759); //@t
			var_0_int->AddReply(531497, 31762, 32855); //@t
		} else {
					bool var_157_bool = false;
					bool var_158_bool = false;
					bool var_159_bool;
					func_1136(var_1_int);
					if(var_159_bool != 0) {
						bool var_180_bool;
						func_1193(var_1_int);
						if(!var_180_bool) //@nz
							var_158_bool = true;
					}
					if(var_158_bool != 0) {
						bool var_187_bool;
						func_1205(var_1_int);
						if(!var_187_bool) //@nz
							var_157_bool = true;
					}
					if(var_157_bool == 0) goto Label_408;
					func_494(var_90_object, "Neutral");
					var_0_int->SetMessage(530396); //@t
					var_0_int->ClearReplies(); //@t
					var_0_int->AddReply(530397, 31770, 31769); //@t
		}
	}
Label_464:
	for(;;) {
		bool var_139_bool;
		func_1055(var_139_bool);
		if(var_139_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_bool != 0) {
				} else {
					func_936(var_2_bool);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_bool != 0) {
					goto Label_493;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_493:
			return 0;

		}

	}
	
Label_408:
	func_494(var_90_object, "Neutral");
	var_0_int->SetMessage(530394); //@t
	var_0_int->ClearReplies(); //@t
	bool var_201_bool = false;
	bool var_202_bool = false;
	bool var_203_bool = false;
	bool var_204_bool;
	func_1181(var_1_int);
	if(var_204_bool != 0) {
		bool var_210_bool;
		func_1193(var_1_int);
		if(!var_210_bool) //@nz
			var_203_bool = true;
	}
	if(var_203_bool != 0) {
		bool var_213_bool;
		func_1205(var_1_int);
		if(!var_213_bool) //@nz
			var_202_bool = true;
	}
	if(var_202_bool != 0) {
		bool var_216_bool;
		func_1229(var_1_int);
		if(var_216_bool != 0)
			var_201_bool = true;
	}
	if(var_201_bool != 0)
		var_0_int->AddReply(530402, 31775, 31774); //@t
	var_0_int->AddReply(530395, -1, 31767); //@t
	goto Label_464;
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x147";


void func_836(float var_19_float, object var_20_object)
{
	cvector var_24_cvector;
	@GetPosition(var_24_cvector);
	cvector var_25_cvector;
	var_20_object->GetPosition(var_25_cvector);
	var_19_float = (var_25_cvector - var_24_cvector) | (var_25_cvector - var_24_cvector);
}


void func_967(object var_29_object)
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
void func_1096(void)
{
	func_1241();
	bool var_103_bool;
	func_1006(var_103_bool, "quest_b10_04", "completed");
}


void func_844(bool var_23_bool)
{
	bool var_25_bool;
	@IsLoaded(var_25_bool);
	var_25_bool = var_23_bool;
}


// @pe
void func_1229(bool var_223_bool)
{
	int var_225_int;
	func_1001(var_225_int, "oob10MorlokMain2");
	if(var_225_int == 0) {
		var_223_bool = true;
		return 0;
	}
	var_223_bool = false;
}


void func_1358(int var_80_int)
{
	int var_82_int;
	@GetVariable("branch", var_82_int);
	if(var_82_int == 0) {
		var_80_int = 1;
		return 2;
	EMIT "GOTO 0x55d";
	}
	if(var_82_int == 1) {
		var_80_int = 2;
		return 2;
	}
	var_80_int = 3;
}


void func_849(bool var_28_bool, object var_29_object, float var_30_float)
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
	func_991(var_55_cvector, (var_44_cvector ^ [0.0, 1.0, 0.0]));
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
	func_1055(var_71_bool);
	if(var_71_bool != 0) {
	} else {
		@HasAnimationTrack(var_48_bool, "head");
		if(var_48_bool == 0) goto Label_912;
		@LookAsyncCamera("head");
	}
Label_912:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_28_bool = true;
	
}


void func_82(bool var_18_bool)
{
	var_18_bool = true;
}


// @pe
void func_1106(void)
{
	@SetVariable("oob10MorlokMain1", 1);
}


// @pe
void func_84(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, float var_21_float, float var_22_float)
{
	bool var_23_bool;
	func_844(var_23_bool);
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


void func_978(void)
{
	bool var_15_bool;
	func_1055(var_15_bool);
	if(var_15_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_1112(void)
{
	@SetVariable("oob10MorlokMain2", 1);
}


void func_985(object var_19_object)
{
	object var_21_object;
	@self(var_21_object);
	var_21_object = var_19_object;
}
EMIT "Stack[-1] = 0";


void func_1241(void)
{
	object var_96_object;
	@CreateDiaryEntry(var_96_object, 560, 2, 530539);
	bool var_100_bool; object var_101_object;
	var_96_object = var_101_object;
	func_1280(var_100_bool, var_101_object, 545);
}
EMIT "Stack[-1] = 0";


// @pe
void func_1118(void)
{
	@SetVariable("b10q04MorlokTalk", 1);
}


// @pe
void func_1375(object var_16_object)
{
	object var_18_object;
	var_16_object = var_18_object;
	TaskCall(1);
	int var_17_int;
	func_249(var_19_object, var_17_int, var_18_object);
	TaskReturn();
}


void func_991(cvector var_55_cvector, cvector var_56_cvector)
{
	float var_59_float = sqrt(var_56_cvector | var_56_cvector);
	if(var_59_float < 0.000001)
		var_55_cvector = [0.0, 0.0, 0.0];
	var_55_cvector = var_56_cvector / var_59_float;
}


// @pe
void func_1124(bool var_122_bool)
{
	int var_124_int;
	func_1001(var_124_int, "b10q04");
	if(var_124_int == 1)
		var_122_bool = true;
	var_122_bool = false;
}


void func_1254(void)
{
	object var_39_object;
	@CreateDiaryEntry(var_39_object, 547, 2, 530438);
	bool var_43_bool; object var_44_object;
	var_39_object = var_44_object;
	func_1280(var_43_bool, var_44_object, 545);
}
EMIT "Stack[-1] = 0";


void func_1001(int var_124_int, string var_125_string)
{
	int var_127_int;
	@GetVariable(var_125_string, var_127_int);
	var_127_int = var_124_int;
}


// @pe
void func_494(bool var_2_bool, string var_140_string)
{
	bool var_141_bool;
	func_1055(var_141_bool);
	if(!var_141_bool) //@nz
		return 0;
	if(var_140_string == var_2_bool)
		return 0;
	string var_144_string; bool var_145_bool;
	var_140_string = var_144_string;
	if(var_140_string == "")
		var_145_bool = false;
	else
		var_145_bool = true;
	func_952(var_144_string, var_145_bool);
	var_2_bool = var_140_string;
	
}


void func_111(int var_0_int, int var_1_int, object var_4_object, bool var_15_bool)
{
	if(var_4_object == null)
		var_15_bool = false;
	float var_19_float;
	func_836(var_19_float, var_4_object);
	float var_17_float = sqrt(var_19_float);
	if(var_2_bool != 0)
		var_17_float -= var_1_int;
	var_15_bool = var_17_float < var_0_int;
}


// @pe
void func_1136(bool var_166_bool)
{
	bool var_168_bool = false;
	bool var_169_bool = false;
	bool var_170_bool = false;
	int var_171_int;
	func_1001(var_171_int, "b10q04NotkinTalk");
	if(var_171_int == 9) {
		int var_175_int;
		func_1001(var_175_int, "b10q04Spi4kaTalk");
		if(var_175_int == 9)
			var_170_bool = true;
	}
	if(var_170_bool != 0) {
		int var_179_int;
		func_1001(var_179_int, "b10q04MishkaTalk");
		if(var_179_int == 9)
			var_169_bool = true;
	}
	if(var_169_bool != 0) {
		int var_183_int;
		func_1001(var_183_int, "b10q04LaskaTalk");
		if(var_183_int == 9)
			var_168_bool = true;
	}
	if(var_168_bool != 0) {
		var_166_bool = true;
		return 0;
	}
	var_166_bool = false;
}


void func_1006(bool var_103_bool, string var_104_string, string var_105_string)
{
	object var_107_object;
	@FindActor(var_107_object, var_104_string);
	if(var_107_object == null)
		var_103_bool = false;
	@Trigger(var_107_object, var_105_string);
	var_103_bool = true;
}
EMIT "Stack[-1] = 0";


void func_242(bool var_71_bool)
{
	var_71_bool = true;
}


void func_1267(object var_52_object)
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
	func_849(var_28_bool, var_29_object, 110.0);
	if(!var_28_bool) { //@nz
		var_17_int = -2;
		return 8;
	}
	object var_24_object;
	@CreateDialog(var_24_object);
	int var_76_int;
	func_1049(var_76_int);
	var_24_object->SetNPCName(var_76_int);
	int var_77_int;
	func_1047(var_77_int);
	var_24_object->SetNPCDescription(var_77_int);
	string var_78_string;
	func_1051(var_78_string);
	var_24_object->SetPhoto(var_78_string);
	string var_79_string;
	func_1053(var_79_string);
	var_24_object->SetPhoto2(var_79_string);
	int var_80_int;
	func_1358(var_80_int);
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
		var_228_bool = !var_27_bool; //@nz
		if(var_228_bool == 0) goto Label_312;
		@sync();
		var_24_object->IsDialogEnd(var_27_bool);
	}
	
Label_312:
	object var_229_object;
	var_18_object = var_229_object;
	func_918();
	@StopDialog(var_24_object);
	var_24_object->GetReturnValue(-1);
	int var_26_int = var_17_int;
}
EMIT "Stack[-4] = 0";


void func_1018(float var_35_float)
{
	float var_37_float;
	@GetGameTime(var_37_float);
	var_37_float = var_35_float;
}


void func_1023(string var_52_string, int var_53_int)
{
	string var_55_string = "idle";
	if(var_53_int != 0)
		var_55_string += var_53_int;
	var_55_string = var_52_string;
}


