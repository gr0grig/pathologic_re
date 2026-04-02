// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, int var_12_int, int var_13_int, bool var_14_bool, bool var_15_bool, object var_16_object)
	{
		if(1 != 0) {
			func_1104();
			if(var_16_object == 40486) {
				object var_21_object; object var_22_object;
				var_21_object = var_1_object;
				var_22_object = var_0_object;
				func_1166();
			}
			if(var_15_bool == 40483) {
				func_142(var_16_object, "Neutral");
				var_0_object->SetMessage(538595); //@t
				var_0_object->ClearReplies(); //@t
				bool var_51_bool;
				func_1203(var_51_bool, var_1_object);
				if(var_51_bool != 0)
					var_0_object->AddReply(538598, 40487, 40486); //@t
				var_0_object->AddReply(538596, -1, 40484); //@t
				var_0_object->AddReply(538597, -1, 40485); //@t
				return 0;
			}
			if(var_15_bool == 40487) {
				func_142(var_16_object, "Neutral");
				var_0_object->SetMessage(538599); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538600, -1, 40488); //@t
				var_0_object->AddReply(538601, -1, 40489); //@t
				return 0;
			}
			var_3_string = true;
			bool var_85_bool;
			func_1356(var_85_bool);
			if(var_85_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xa5";
	
	}

}


task task_2
{
}


task task_3
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, int var_12_int, int var_13_int, bool var_14_bool, bool var_15_bool, object var_16_object)
	{
		if(1 != 0) {
			func_1104();
			if(var_16_object == 40508) {
				object var_21_object; object var_22_object;
				var_21_object = var_1_object;
				var_22_object = var_0_object;
				func_1179();
				object var_29_object; object var_30_object;
				var_29_object = var_1_object;
				var_30_object = var_0_object;
				func_1192();
			}
			if(var_16_object == 40511) {
				object var_41_object; object var_42_object;
				var_41_object = var_1_object;
				var_42_object = var_0_object;
				func_1192();
				object var_43_object; object var_44_object;
				var_43_object = var_1_object;
				var_44_object = var_0_object;
				func_1198();
			}
			if(var_16_object == 40507) {
				object var_70_object; object var_71_object;
				var_70_object = var_1_object;
				var_71_object = var_0_object;
				func_1172();
			}
			if(var_16_object == 40510) {
				object var_77_object; object var_78_object;
				var_77_object = var_1_object;
				var_78_object = var_0_object;
				func_1192();
			}
			if(var_15_bool == 40491) {
				bool var_81_bool;
				func_1213(var_81_bool, var_1_object);
				if(var_81_bool != 0) {
					object var_96_object; object var_97_object;
					var_96_object = var_1_object;
					var_97_object = var_0_object;
					func_1186();
					func_439(var_16_object, "Neutral");
					var_0_object->SetMessage(538603); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(538604, 40494, 40492); //@t
					var_0_object->AddReply(538605, 40496, 40493); //@t
					var_0_object->AddReply(538621, 40494, 40512); //@t
					return 0;
				}
				bool var_126_bool;
				func_1223(var_126_bool, var_1_object);
				if(var_126_bool != 0) {
					func_439(var_16_object, "Neutral");
					var_0_object->SetMessage(538622); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(538623, -1, 40514); //@t
					var_0_object->AddReply(538624, -1, 40515); //@t
					return 0;
				}
				func_439(var_16_object, "Neutral");
				var_0_object->SetMessage(538625); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538626, 40519, 40517); //@t
				var_0_object->AddReply(538627, -1, 40518); //@t
				return 0;
			}
			if(var_15_bool == 40519) {
				func_439(var_16_object, "Neutral");
				var_0_object->SetMessage(538628); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538629, -1, 40520); //@t
				var_0_object->AddReply(538630, -1, 40521); //@t
				return 0;
			}
			if(var_15_bool == 40496) {
				func_439(var_16_object, "Neutral");
				var_0_object->SetMessage(538608); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538609, 40501, 40497); //@t
				var_0_object->AddReply(538611, 40500, 40499); //@t
				return 0;
			}
			if(var_15_bool == 40500) {
				func_439(var_16_object, "Neutral");
				var_0_object->SetMessage(538612); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538614, 40498, 40502); //@t
				var_0_object->AddReply(538615, 40501, 40503); //@t
				return 0;
			}
			if(var_15_bool == 40501) {
				func_439(var_16_object, "Neutral");
				var_0_object->SetMessage(538613); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538617, -1, 40507); //@t
				var_0_object->AddReply(538619, -1, 40510); //@t
				return 0;
			}
			if(var_15_bool == 40494) {
				func_439(var_16_object, "Neutral");
				var_0_object->SetMessage(538606); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538607, 40498, 40495); //@t
				var_0_object->AddReply(538616, 40500, 40505); //@t
				return 0;
			}
			if(var_15_bool == 40498) {
				func_439(var_16_object, "Neutral");
				var_0_object->SetMessage(538610); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538618, -1, 40508); //@t
				var_0_object->AddReply(538620, -1, 40511); //@t
				return 0;
			}
			var_3_string = true;
			bool var_208_bool;
			func_1356(var_208_bool);
			if(var_208_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1ce";
	
	}

}


maintask task_4
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, bool var_12_bool, bool var_13_bool, object var_14_object)
	{
	
		for(;;) {
			@Sleep(1);
			func_797(var_10_int, var_11_int, var_12_bool, var_13_bool, var_14_object, (float)300, (float)100);
		}
	}
	EMIT "Return(); Pop(0)";

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, bool var_12_bool, bool var_13_bool, object var_14_object, object var_15_object)
	{
		int var_18_int; int var_19_int;
		func_862(var_18_int, var_19_int);
		@GetProperty("day", var_18_int);
		int var_24_int;
		func_1133(var_24_int);
		if(var_18_int == var_24_int) {
			int var_31_int; object var_32_object;
			var_15_object = var_32_object;
			TaskCall(2);
			func_247(var_33_object, var_31_int, var_32_object);
			TaskReturn();
			var_33_object = var_19_int;
			if(var_19_int == 1) {
				bool var_213_bool;
				func_1121(var_213_bool, "klara2_svita_positioner", "wonder");
			} else if(var_19_int == 2) {
				bool var_221_bool;
				func_1121(var_221_bool, "klara2_svita_positioner", "wrong_wonder");
		}
			int var_224_int; object var_225_object;
			var_15_object = var_225_object;
			TaskCall(0);
			func_0(var_226_object, var_224_int, var_225_object);
			TaskReturn();
		}
		goto Label_796;
	
	Label_796:
	
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, bool var_12_bool, bool var_13_bool, object var_14_object, int var_15_int)
	{
		if(var_15_int == 10) {
			bool var_18_bool;
			func_824(var_13_bool, var_14_object, var_15_int, var_18_bool);
			if(var_18_bool != 0) {
				if(!var_2_object) { //@nz
					func_1093(var_4_bool);
					var_2_object = true;
				}
			} else if(var_2_object != 0) {
				@UnlookAsync("head");
				var_2_object = false;
			}
		}
	
	}

}


void func_0(object var_0_object, int var_224_int, object var_225_object)
{
	var_0_object = var_225_object;
	bool var_235_bool; object var_236_object;
	var_225_object = var_236_object;
	func_975(var_235_bool, var_236_object, 70.0);
	if(!var_235_bool) { //@nz
		var_224_int = -2;
		return 8;
	}
	object var_231_object;
	@CreateDialog(var_231_object);
	int var_239_int;
	func_1350(var_239_int);
	var_231_object->SetNPCName(var_239_int);
	int var_240_int;
	func_1348(var_240_int);
	var_231_object->SetNPCDescription(var_240_int);
	string var_241_string;
	func_1352(var_241_string);
	var_231_object->SetPhoto(var_241_string);
	string var_242_string;
	func_1354(var_242_string);
	var_231_object->SetPhoto2(var_242_string);
	int var_243_int;
	func_1308(var_243_int);
	var_231_object->SetPlayerName(var_243_int);
	bool var_232_bool;
	@IsOverrideActive(var_232_bool);
	if(var_232_bool != 0) {
		var_224_int = -2;
		return 8;
	}
	@DoDialog(var_231_object);
	object var_245_object; object var_246_object;
	var_225_object = var_245_object;
	var_231_object = var_246_object;
	TaskCall(1);
	func_74(var_247_object, var_248_object, var_249_string, var_250_bool, var_245_object, var_246_object);
	TaskReturn();
	bool var_234_bool;
	var_231_object->IsDialogEnd(var_234_bool);
	
	for(;;) {
		var_284_bool = !var_234_bool; //@nz
		if(var_284_bool == 0) goto Label_63;
		@sync();
		var_231_object->IsDialogEnd(var_234_bool);
	}
	
Label_63:
	object var_285_object;
	var_225_object = var_285_object;
	func_1044();
	@StopDialog(var_231_object);
	var_231_object->GetReturnValue(-1);
	int var_233_int = var_224_int;
}
EMIT "Stack[-4] = 0";


void func_1280(bool var_50_bool, object var_51_object, int var_52_int)
{
	object var_59_object;
	func_1267(var_59_object);
	object var_56_object;
	var_59_object = var_56_object;
	object var_57_object;
	var_56_object->Find(var_52_int, var_57_object);
	if(!var_57_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_52_int);
		var_50_bool = false;
	}
	var_57_object->AddChild(var_51_object);
	@SendWorldWndMessage(7);
	int var_58_int;
	var_51_object->GetCategory(var_58_int);
	@SetDiarySection(var_58_int);
	var_50_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void func_1166(void)
{
	func_1325("AlbinosLate1");
}


// @pe
void func_142(object var_2_object, string var_252_string)
{
	bool var_253_bool;
	func_1356(var_253_bool);
	if(!var_253_bool) //@nz
		return 0;
	if(var_252_string == var_2_object)
		return 0;
	string var_256_string; bool var_257_bool;
	var_252_string = var_256_string;
	if(var_252_string == "")
		var_257_bool = false;
	else
		var_257_bool = true;
	func_1078(var_256_string, var_257_bool);
	var_2_object = var_252_string;
	
}


void func_1044(void)
{
	bool var_205_bool;
	@CameraSwitchToNormal(true);
	bool var_207_bool;
	func_1356(var_207_bool);
	if(var_207_bool != 0) {
	} else {
		@HasAnimationTrack(var_205_bool, "head");
		if(var_205_bool == 0) goto Label_1061;
		@UnlookAsync("head");
	}
Label_1061:
	
}


// @pe
void func_1172(void)
{
	bool var_72_bool;
	func_1121(var_72_bool, "klara2_svita_positioner", "wonder");
}


// @pe
void func_1179(void)
{
	bool var_23_bool;
	func_1121(var_23_bool, "klara2_svita_positioner", "bad_wonder");
}


void func_1308(int var_94_int)
{
	int var_96_int;
	@GetVariable("branch", var_96_int);
	if(var_96_int == 0) {
		var_94_int = 1;
		return 2;
	EMIT "GOTO 0x52b";
	}
	if(var_96_int == 1) {
		var_94_int = 2;
		return 2;
	}
	var_94_int = 3;
}


// @pe
void func_797(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_16_float, float var_17_float)
{
	bool var_18_bool;
	func_970(var_18_bool);
	if(!var_18_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_16_float;
	var_1_object = var_17_float;
	@SetTimer(10, 1.0);
	func_876();
	if(!false) //@nz
		@KillTimer(10);
}


// @pe
void func_1186(void)
{
	func_1325("Albinos1");
}


void func_1062(string var_164_string)
{
	bool var_168_bool; float var_169_float; float var_170_float;
	@lshHasAnimation(var_168_bool, var_164_string);
	if(var_168_bool != 0) {
		@lshGetAnimTimes(var_164_string, var_169_float, var_170_float);
		@lshPlayAnimation(var_169_float, var_170_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_164_string);
	}
	
}


// @pe
void func_1192(void)
{
	func_1325("BadKlara");
}


void func_1325(string var_127_string)
{
	int var_129_int;
	@GetProperty("day", var_129_int);
	@SetVariable((("K2S_Klara2Svita" + var_127_string) + var_129_int), 1);
}


// @pe
void func_1198(void)
{
	func_1254();
}


// @pe
void func_1203(bool var_261_bool, object var_262_object)
{
	object var_264_object;
	var_262_object = var_264_object;
	func_1233(var_264_object);
	bool var_263_bool;
	if(var_263_bool != 0) {
		var_261_bool = true;
		return 0;
	}
	var_261_bool = false;
}


void func_1078(string var_139_string, bool var_140_bool)
{
	bool var_146_bool; float var_147_float; float var_148_float;
	@lshHasAnimation(var_146_bool, var_139_string);
	if(var_146_bool != 0) {
		@lshGetAnimTimes(var_139_string, var_147_float, var_148_float);
		@lshPlayAnimation(var_147_float, var_148_float, var_140_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_139_string);
	}
	
}


// @pe
void func_439(object var_2_object, string var_135_string)
{
	bool var_136_bool;
	func_1356(var_136_bool);
	if(!var_136_bool) //@nz
		return 0;
	if(var_135_string == var_2_object)
		return 0;
	string var_139_string; bool var_140_bool;
	var_135_string = var_139_string;
	if(var_135_string == "")
		var_140_bool = false;
	else
		var_140_bool = true;
	func_1078(var_139_string, var_140_bool);
	var_2_object = var_135_string;
	
}


void func_1336(bool var_114_bool, string var_115_string)
{
	int var_118_int;
	@GetProperty("day", var_118_int);
	int var_119_int;
	@GetVariable((("K2S_Klara2Svita" + var_115_string) + var_118_int), var_119_int);
	var_114_bool = var_119_int == 0;
}


void func_824(object var_0_object, object var_1_object, bool var_4_bool, bool var_18_bool)
{
	if(var_4_bool == null)
		var_18_bool = false;
	float var_22_float;
	func_962(var_22_float, var_4_bool);
	float var_20_float = sqrt(var_22_float);
	if(var_2_object != 0)
		var_20_float -= var_1_object;
	var_18_bool = var_20_float < var_0_object;
}


void func_955(bool var_66_bool)
{
	var_66_bool = true;
}


// @pe
void func_1213(bool var_110_bool, object var_111_object)
{
	object var_113_object;
	var_111_object = var_113_object;
	func_1240(var_113_object);
	bool var_112_bool;
	if(var_112_bool != 0) {
		var_110_bool = true;
		return 0;
	}
	var_110_bool = false;
}


void func_957(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_321(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_103_object, object var_104_object)
{
	var_0_object = var_104_object;
	var_1_object = var_103_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_110_bool;
		func_1213(var_110_bool, var_1_object);
		if(var_110_bool != 0) {
			object var_125_object; object var_126_object;
			var_125_object = var_1_object;
			var_126_object = var_0_object;
			func_1186();
			func_439(var_104_object, "Neutral");
			var_0_object->SetMessage(538603); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(538604, 40494, 40492); //@t
			var_0_object->AddReply(538605, 40496, 40493); //@t
			var_0_object->AddReply(538621, 40494, 40512); //@t
		} else {
					bool var_180_bool;
					func_1223(var_180_bool, var_1_object);
					if(var_180_bool == 0) goto Label_387;
					func_439(var_104_object, "Neutral");
					var_0_object->SetMessage(538622); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(538623, -1, 40514); //@t
					var_0_object->AddReply(538624, -1, 40515); //@t
		}
	}
Label_409:
	for(;;) {
		bool var_162_bool;
		func_1356(var_162_bool);
		if(var_162_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_1062(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_438;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_438:
			return 0;

		}

	}
	
Label_387:
	func_439(var_104_object, "Neutral");
	var_0_object->SetMessage(538625); //@t
	var_0_object->ClearReplies(); //@t
	var_0_object->AddReply(538626, 40519, 40517); //@t
	var_0_object->AddReply(538627, -1, 40518); //@t
	goto Label_409;
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x145";


void func_962(float var_22_float, object var_23_object)
{
	cvector var_27_cvector;
	@GetPosition(var_27_cvector);
	cvector var_28_cvector;
	var_23_object->GetPosition(var_28_cvector);
	var_22_float = (var_28_cvector - var_27_cvector) | (var_28_cvector - var_27_cvector);
}


void func_1348(int var_91_int)
{
	var_91_int = 515595;
}


void func_1093(object var_32_object)
{
	float var_35_float;
	var_32_object->GetEyesHeight(var_35_float);
	cvector var_36_cvector = [0.0, 0.0, 0.0];
	var_37_float = GetByIndex(var_36_cvector, 1);
	var_35_float = var_37_float;
	SetByIndex(var_36_cvector, 1) = var_37_float;
	@LookAsync(var_32_object, "head", var_36_cvector);
}


void func_1350(int var_90_int)
{
	var_90_int = 512611;
}


// @pe
void func_1223(bool var_180_bool, object var_181_object)
{
	object var_183_object;
	var_181_object = var_183_object;
	func_1247(var_183_object);
	bool var_182_bool;
	if(var_182_bool != 0) {
		var_180_bool = true;
		return 0;
	}
	var_180_bool = false;
}


void func_1352(string var_92_string)
{
	var_92_string = "ui/NPC_Albinos.png";
}


void func_1354(string var_93_string)
{
	var_93_string = "ui/NPC_Albinos_b.png";
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_245_object, object var_246_object)
{
	var_0_object = var_246_object;
	var_3_string = false;
	if(1 != 0) {
		func_142(var_246_object, "Neutral");
		var_0_object->SetMessage(538595); //@t
		var_0_object->ClearReplies(); //@t
		bool var_261_bool;
		func_1203(var_261_bool, var_245_object);
		if(var_261_bool != 0)
			var_0_object->AddReply(538598, 40487, 40486); //@t
		var_0_object->AddReply(538596, -1, 40484); //@t
		var_0_object->AddReply(538597, -1, 40485); //@t
		goto Label_112;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_112:
	bool var_276_bool;
	func_1356(var_276_bool);
	if(var_276_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1062(var_2_object);
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


void func_1356(bool var_85_bool)
{
	var_85_bool = false;
}


void func_970(bool var_18_bool)
{
	bool var_20_bool;
	@IsLoaded(var_20_bool);
	var_20_bool = var_18_bool;
}


void func_975(bool var_42_bool, object var_43_object, float var_44_float)
{
	cvector var_55_cvector; bool var_62_bool;
	var_43_object->GetPosition(var_55_cvector);
	float var_54_float;
	var_43_object->GetEyesHeight(var_54_float);
	var_63_float = GetByIndex(var_55_cvector, 1);
	SetByIndex(var_55_cvector, 1) = (var_63_float + var_54_float);
	cvector var_56_cvector;
	@GetPosition(var_56_cvector);
	@GetEyesHeight(var_54_float);
	var_64_float = GetByIndex(var_56_cvector, 1);
	SetByIndex(var_56_cvector, 1) = (var_64_float + var_54_float);
	cvector var_57_cvector = var_55_cvector - var_56_cvector;
	var_65_float = GetByIndex(var_57_cvector, 1);
	SetByIndex(var_57_cvector, 1) = (float)0;
	var_67_float = sqrt(var_57_cvector | var_57_cvector);
	var_57_cvector /= var_67_float;
	cvector var_58_cvector = -var_57_cvector;
	cvector var_69_cvector;
	func_1111(var_69_cvector, (var_58_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_59_cvector = ((var_57_cvector * var_44_float) + (var_69_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_61_bool;
	@IsOverrideActive(var_61_bool);
	if(var_61_bool != 0)
		var_42_bool = false;
	@StopWorld();
	@CameraTransit((var_56_cvector + var_59_cvector), var_58_cvector, true);
	var_83_float = GetByIndex(var_59_cvector, 0);
	var_84_float = GetByIndex(var_59_cvector, 2);
	@Rotate(var_83_float, var_84_float);
	bool var_85_bool;
	func_1356(var_85_bool);
	if(var_85_bool != 0) {
	} else {
		@HasAnimationTrack(var_62_bool, "head");
		if(var_62_bool == 0) goto Label_1038;
		@LookAsyncCamera("head");
	}
Label_1038:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_42_bool = true;
	
}


void func_1104(void)
{
	bool var_18_bool;
	func_1356(var_18_bool);
	if(var_18_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_1233(bool var_263_bool)
{
	bool var_265_bool;
	func_1336(var_265_bool, "AlbinosLate1");
	var_265_bool = var_263_bool;
}


void func_1111(cvector var_69_cvector, cvector var_70_cvector)
{
	float var_73_float = sqrt(var_70_cvector | var_70_cvector);
	if(var_73_float < 0.000001)
		var_69_cvector = [0.0, 0.0, 0.0];
	var_69_cvector = var_70_cvector / var_73_float;
}


// @pe
void func_1240(bool var_112_bool)
{
	bool var_114_bool;
	func_1336(var_114_bool, "Albinos1");
	var_114_bool = var_112_bool;
}


// @pe
void func_862(object var_2_object, string var_3_string)
{
	func_957();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
}


// @pe
void func_1247(bool var_182_bool)
{
	bool var_184_bool;
	func_1336(var_184_bool, "BadKlara");
	var_182_bool = !var_184_bool;
}


void func_1121(bool var_213_bool, string var_214_string, string var_215_string)
{
	object var_217_object;
	@FindActor(var_217_object, var_214_string);
	if(var_217_object == null)
		var_213_bool = false;
	@Trigger(var_217_object, var_215_string);
	var_213_bool = true;
}
EMIT "Stack[-1] = 0";


void func_1254(void)
{
	object var_46_object;
	@CreateDiaryEntry(var_46_object, 785, 2, 542470);
	bool var_50_bool; object var_51_object;
	var_46_object = var_51_object;
	func_1280(var_50_bool, var_51_object, 723);
}
EMIT "Stack[-1] = 0";


void func_876(void)
{
	int var_34_int; int var_35_int; bool var_36_bool; float var_37_float; bool var_38_bool;
	@WaitForAnimEnd();
	bool var_39_bool;
	func_970(var_39_bool);
	if(!var_39_bool) //@nz
		return 14;
	int var_41_int;
	func_1149(var_41_int);
	int var_32_int;
	var_41_int = var_32_int;
	int var_33_int = 0;
	
	for(;;) {
		bool var_54_bool = false;
		if(var_33_int < 5) {
			bool var_57_bool;
			func_970(var_57_bool);
			if(var_57_bool != 0)
				var_54_bool = true;
		}
		if(var_54_bool != 0) {
			@irand(var_34_int, 3);
			if(var_34_int == 0) {
				if(var_32_int == 0) goto Label_923;
				@irand(var_35_int, var_32_int);
				string var_63_string; int var_64_int;
				var_35_int = var_64_int;
				func_1142(var_63_string, var_64_int);
				@PlayAnimation("all", var_63_string);
				@WaitForAnimEnd(var_36_bool);
				if(!var_36_bool) { //@nz
				} else {
			} else {
			if(var_34_int == 1) {
				@rand(var_37_float, 4);
				@Sleep((var_37_float + 1), var_38_bool);
				if(!var_38_bool) { //@nz
					goto Label_952;
				}
			} else if(var_33_int != 0) {
				goto Label_952;
			}
			}
					bool var_66_bool;
					func_955(var_66_bool);
					var_67_bool = !var_66_bool; //@nz
					if(var_67_bool == 0) goto Label_947;
			}
		}
	Label_952:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_947:
		@ResetAAS();
		var_33_int += 1;
	}
	
}


void func_1133(int var_24_int)
{
	float var_26_float;
	@GetGameTime(var_26_float);
	var_24_int = 1 + (var_26_float / 24);
}


void func_1267(object var_59_object)
{
	object var_61_object;
	@GetDiaryRoot(var_61_object);
	if(!var_61_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_59_object = false;
	}
	var_61_object = var_59_object;
}
EMIT "Stack[-1] = 0";


void func_1142(string var_47_string, int var_48_int)
{
	string var_50_string = "idle";
	if(var_48_int != 0)
		var_50_string += var_48_int;
	var_50_string = var_47_string;
}


void func_247(object var_0_object, int var_31_int, object var_32_object)
{
	var_0_object = var_32_object;
	bool var_42_bool; object var_43_object;
	var_32_object = var_43_object;
	func_975(var_42_bool, var_43_object, 70.0);
	if(!var_42_bool) { //@nz
		var_31_int = -2;
		return 8;
	}
	object var_38_object;
	@CreateDialog(var_38_object);
	int var_90_int;
	func_1350(var_90_int);
	var_38_object->SetNPCName(var_90_int);
	int var_91_int;
	func_1348(var_91_int);
	var_38_object->SetNPCDescription(var_91_int);
	string var_92_string;
	func_1352(var_92_string);
	var_38_object->SetPhoto(var_92_string);
	string var_93_string;
	func_1354(var_93_string);
	var_38_object->SetPhoto2(var_93_string);
	int var_94_int;
	func_1308(var_94_int);
	var_38_object->SetPlayerName(var_94_int);
	bool var_39_bool;
	@IsOverrideActive(var_39_bool);
	if(var_39_bool != 0) {
		var_31_int = -2;
		return 8;
	}
	@DoDialog(var_38_object);
	object var_103_object; object var_104_object;
	var_32_object = var_103_object;
	var_38_object = var_104_object;
	TaskCall(3);
	func_321(var_105_object, var_106_object, var_107_string, var_108_bool, var_103_object, var_104_object);
	TaskReturn();
	bool var_41_bool;
	var_38_object->IsDialogEnd(var_41_bool);
	
	for(;;) {
		var_202_bool = !var_41_bool; //@nz
		if(var_202_bool == 0) goto Label_310;
		@sync();
		var_38_object->IsDialogEnd(var_41_bool);
	}
	
Label_310:
	object var_203_object;
	var_32_object = var_203_object;
	func_1044();
	@StopDialog(var_38_object);
	var_38_object->GetReturnValue(-1);
	int var_40_int = var_31_int;
}
EMIT "Stack[-4] = 0";


void func_1149(int var_41_int)
{
	int var_44_int; bool var_45_bool;
	var_44_int = 0;
	
	for(;;) {
		string var_47_string; int var_48_int;
		var_44_int = var_48_int;
		func_1142(var_47_string, var_48_int);
		@HasAnimation(var_45_bool, "all", var_47_string);
		if(!var_45_bool) //@nz
			break;
		var_44_int += 1;
	}
	var_44_int = var_41_int;
}


