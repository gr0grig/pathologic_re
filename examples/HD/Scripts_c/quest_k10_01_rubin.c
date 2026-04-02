// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, cvector var_7_cvector, bool var_8_bool)
	{
		if(1 != 0) {
			func_1014();
			if(var_8_bool == 28294) {
				object var_13_object; object var_14_object;
				var_13_object = var_1_object;
				var_14_object = var_0_object;
				func_1087();
				object var_44_object; object var_45_object;
				var_44_object = var_1_object;
				var_45_object = var_0_object;
				func_1097();
			}
			if(var_7_cvector == 28291) {
				bool var_76_bool;
				func_1125(var_1_object);
				if(var_76_bool != 0) {
					func_159(var_8_bool, "Neutral");
					var_0_object->SetMessage(526999); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(527000, 29484, 28292); //@t
					var_0_object->AddReply(528140, 29484, 29490); //@t
					return 0;
				}
				func_159(var_8_bool, "Neutral");
				var_0_object->SetMessage(527003); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527004, -1, 28296); //@t
				return 0;
			}
			if(var_7_cvector == 29484) {
				func_159(var_8_bool, "Confusion");
				var_0_object->SetMessage(528134); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528135, 29486, 29485); //@t
				var_0_object->AddReply(528141, 29486, 29492); //@t
				return 0;
			}
			if(var_7_cvector == 29486) {
				func_159(var_8_bool, "Confusion");
				var_0_object->SetMessage(528136); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528137, 29494, 29487); //@t
				return 0;
			}
			if(var_7_cvector == 29494) {
				func_159(var_8_bool, "Neutral");
				var_0_object->SetMessage(528142); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528143, 29496, 29495); //@t
				return 0;
			}
			if(var_7_cvector == 29496) {
				func_159(var_8_bool, "Neutral");
				var_0_object->SetMessage(528144); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528145, 29488, 29497); //@t
				return 0;
			}
			if(var_7_cvector == 29488) {
				func_159(var_8_bool, "Warning");
				var_0_object->SetMessage(528138); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528146, 29499, 29498); //@t
				var_0_object->AddReply(541107, 43221, 43220); //@t
				return 0;
			}
			if(var_7_cvector == 43221) {
				func_159(var_8_bool, "Confusion");
				var_0_object->SetMessage(541108); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541109, 29499, 43222); //@t
				return 0;
			}
			if(var_7_cvector == 29499) {
				func_159(var_8_bool, "Warning");
				var_0_object->SetMessage(528147); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528139, 28293, 29489); //@t
				return 0;
			}
			if(var_7_cvector == 28293) {
				func_159(var_8_bool, "Warning");
				var_0_object->SetMessage(527001); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527002, -1, 28294); //@t
				return 0;
			}
			var_3_string = true;
			bool var_173_bool;
			func_1246(var_173_bool);
			if(var_173_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xb6";
	
	}

}


maintask task_2
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
	{
		func_459(var_6_bool);
	}

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, string var_7_string)
	{
		bool var_9_bool;
		if(var_7_string == "cleanup") {
			var_1_object = true;
			@IsLoaded(var_9_bool);
			if(!var_9_bool) { //@nz
				object var_13_object;
				func_1021(var_13_object);
				@RemoveActor(var_13_object);
			}
		} else if(var_7_string == "restore") {
			var_1_object = false;
		}
	
	}

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
	{
		if(var_1_object != 0) {
			object var_8_object;
			func_1021(var_8_object);
			@RemoveActor(var_8_object);
			@Hold();
		}
		func_566();
	}

	// @pe
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
	{
		func_581();
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, int var_7_int)
	{
		if(var_7_int == 10) {
			func_524();
			bool var_11_bool = false;
			bool var_12_bool;
			func_738(var_12_bool);
			if(var_12_bool != 0) {
				bool var_15_bool;
				func_493(var_15_bool);
				if(var_15_bool != 0)
					var_11_bool = true;
			}
			if(var_11_bool != 0) {
				bool var_32_bool;
				func_473(var_32_bool);
				if(var_32_bool != 0) {
					bool var_51_bool; object var_52_object;
					object var_53_object;
					func_1021(var_53_object);
					var_53_object = var_52_object;
					func_888(var_51_bool, var_52_object);
				}
			} else {
				func_488(var_7_int);
				func_515();
			}
		}
	
	}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, bool var_7_bool)
	{
		if(var_7_bool != 0)
			func_515();
		else
			func_968("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, object var_7_object)
	{
		bool var_9_bool;
		@IsOverrideActive(var_9_bool);
		if(!var_9_bool) { //@nz
			disable OnUse;
			func_706();
			bool var_11_bool; object var_12_object;
			var_7_object = var_12_object;
			func_729(var_11_bool, var_12_object);
			enable OnUse;
			object var_25_object;
			var_7_object = var_25_object;
			func_410(var_25_object);
			func_968("Neutral");
			func_524();
			func_515();
		}
	}

}


void func_0(object var_0_object, int var_26_int, object var_27_object)
{
	var_0_object = var_27_object;
	bool var_37_bool; object var_38_object;
	var_27_object = var_38_object;
	func_743(var_37_bool, var_38_object, 70.0);
	if(!var_37_bool) { //@nz
		var_26_int = -2;
		return 8;
	}
	object var_33_object;
	@CreateDialog(var_33_object);
	int var_85_int;
	func_1240(var_85_int);
	var_33_object->SetNPCName(var_85_int);
	int var_86_int;
	func_1238(var_86_int);
	var_33_object->SetNPCDescription(var_86_int);
	string var_87_string;
	func_1242(var_87_string);
	var_33_object->SetPhoto(var_87_string);
	string var_88_string;
	func_1244(var_88_string);
	var_33_object->SetPhoto2(var_88_string);
	int var_89_int;
	func_1221(var_89_int);
	var_33_object->SetPlayerName(var_89_int);
	bool var_34_bool;
	@IsOverrideActive(var_34_bool);
	if(var_34_bool != 0) {
		var_26_int = -2;
		return 8;
	}
	@DoDialog(var_33_object);
	bool var_98_bool; object var_99_object;
	object var_100_object;
	func_1021(var_100_object);
	var_100_object = var_99_object;
	func_830(var_98_bool, var_99_object);
	object var_193_object; object var_194_object;
	var_27_object = var_193_object;
	var_33_object = var_194_object;
	TaskCall(1);
	func_81(var_195_object, var_196_object, var_197_string, var_198_bool, var_193_object, var_194_object);
	TaskReturn();
	bool var_36_bool;
	var_33_object->IsDialogEnd(var_36_bool);
	
	for(;;) {
		var_255_bool = !var_36_bool; //@nz
		if(var_255_bool == 0) goto Label_70;
		@sync();
		var_33_object->IsDialogEnd(var_36_bool);
	}
	
Label_70:
	object var_256_object;
	var_27_object = var_256_object;
	func_812();
	@StopDialog(var_33_object);
	var_33_object->GetReturnValue(-1);
	int var_35_int = var_26_int;
}
EMIT "Stack[-4] = 0";


void func_1027(cvector var_64_cvector, cvector var_65_cvector)
{
	float var_68_float = sqrt(var_65_cvector | var_65_cvector);
	if(var_68_float < 0.000001)
		var_64_cvector = [0.0, 0.0, 0.0];
	var_64_cvector = var_65_cvector / var_68_float;
}


void func_515(void)
{
	float var_267_float;
	@rand(var_267_float, 8, 16);
	@SetTimer(10, var_267_float);
}


void func_1163(object var_29_object)
{
	object var_31_object;
	@GetDiaryRoot(var_31_object);
	if(!var_31_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_29_object = false;
	}
	var_31_object = var_29_object;
}
EMIT "Stack[-1] = 0";


void func_524(void)
{
	@KillTimer(10);
}


void func_1037(int var_202_int, string var_203_string)
{
	int var_205_int;
	@GetVariable(var_203_string, var_205_int);
	var_205_int = var_202_int;
}


void func_1042(bool var_38_bool, string var_39_string, string var_40_string)
{
	object var_42_object;
	@FindActor(var_42_object, var_39_string);
	if(var_42_object == null)
		var_38_bool = false;
	@Trigger(var_42_object, var_40_string);
	var_38_bool = true;
}
EMIT "Stack[-1] = 0";


void func_1176(bool var_20_bool, object var_21_object, int var_22_int)
{
	object var_29_object;
	func_1163(var_29_object);
	object var_26_object;
	var_29_object = var_26_object;
	object var_27_object;
	var_26_object->Find(var_22_int, var_27_object);
	if(!var_27_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_22_int);
		var_20_bool = false;
	}
	var_27_object->AddChild(var_21_object);
	@SendWorldWndMessage(7);
	int var_28_int;
	var_21_object->GetCategory(var_28_int);
	@SetDiarySection(var_28_int);
	var_20_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void func_410(object var_25_object)
{
	object var_27_object;
	var_25_object = var_27_object;
	TaskCall(0);
	int var_26_int;
	func_0(var_28_object, var_26_int, var_27_object);
	TaskReturn();
}


void func_925(bool var_140_bool, object var_141_object)
{
	bool var_149_bool; int var_150_int; string var_151_string;
	int var_153_int;
	func_1054(var_153_int);
	string var_147_string = ("d" + var_153_int) + "m";
	int var_148_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_141_object->HasProperty((var_147_string + (var_148_int + 1)), var_149_bool);
			if(!var_149_bool) { //@nz
			} else {
				var_148_int += 1;
			}
		}
		if(!var_148_int) { //@nz
			var_140_bool = false;
			return 10;
		}
		var_150_int = 0;
		if(var_148_int > 1)
			@irand(var_150_int, var_148_int);
		var_141_object->GetProperty((var_147_string + (var_150_int + 1)), var_151_string);
		bool var_172_bool; string var_173_string;
		var_151_string = var_173_string;
		func_999(var_172_bool, var_173_string);
		var_172_bool = var_140_bool;
		return 10;

	}
}


void func_1054(int var_153_int)
{
	float var_155_float;
	@GetGameTime(var_155_float);
	var_153_int = 1 + (var_155_float / 24);
}


// @pe
void func_159(object var_2_object, string var_208_string)
{
	bool var_209_bool;
	func_1246(var_209_bool);
	if(!var_209_bool) //@nz
		return 0;
	if(var_208_string == var_2_object)
		return 0;
	string var_212_string; bool var_213_bool;
	var_208_string = var_212_string;
	if(var_208_string == "")
		var_213_bool = false;
	else
		var_213_bool = true;
	func_984(var_212_string, var_213_bool);
	var_2_object = var_208_string;
	
}


void func_1063(string var_31_string, int var_32_int)
{
	string var_34_string = "idle";
	if(var_32_int != 0)
		var_34_string += var_32_int;
	var_34_string = var_31_string;
}


void func_812(void)
{
	bool var_258_bool;
	@CameraSwitchToNormal(true);
	bool var_260_bool;
	func_1246(var_260_bool);
	if(var_260_bool != 0) {
	} else {
		@HasAnimationTrack(var_258_bool, "head");
		if(var_258_bool == 0) goto Label_829;
		@UnlookAsync("head");
	}
Label_829:
	
}


void func_1070(int var_25_int)
{
	int var_28_int; bool var_29_bool;
	var_28_int = 0;
	
	for(;;) {
		string var_31_string; int var_32_int;
		var_28_int = var_32_int;
		func_1063(var_31_string, var_32_int);
		@HasAnimation(var_29_bool, "all", var_31_string);
		if(!var_29_bool) //@nz
			break;
		var_28_int += 1;
	}
	var_28_int = var_25_int;
}


void func_1204(bool var_62_bool, int var_63_int)
{
	object var_68_object;
	func_1163(var_68_object);
	object var_66_object;
	var_68_object = var_66_object;
	object var_67_object;
	var_66_object->Find(var_63_int, var_67_object);
	if(!var_67_object) //@nz
		var_62_bool = false;
	var_67_object->Remove();
	var_62_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_566(void)
{
	func_706();
	func_524();
	@lshStopSpeech();
	@lshStopAnimation();
	@StopAsync();
	@Hold();
}


void func_830(bool var_98_bool, object var_99_object)
{
	int var_105_int; int var_106_int;
	@GetVariable("voice_common", var_105_int);
	if(var_105_int != 0) {
		bool var_109_bool; object var_110_object;
		var_99_object = var_110_object;
		func_888(var_109_bool, var_110_object);
		if(!var_109_bool) { //@nz
			bool var_140_bool; object var_141_object;
			var_99_object = var_141_object;
			func_925(var_140_bool, var_141_object);
			if(!var_140_bool) { //@nz
				var_98_bool = false;
				return 4;
			}
		}
		@irand(var_106_int, 2);
		if(var_106_int != 0)
			@SetVariable("voice_common", ((var_105_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_185_bool; object var_186_object;
		var_99_object = var_186_object;
		func_925(var_185_bool, var_186_object);
		if(!var_185_bool) { //@nz
			bool var_188_bool; object var_189_object;
			var_99_object = var_189_object;
			func_888(var_188_bool, var_189_object);
			if(!var_188_bool) { //@nz
				var_98_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_886;
	
Label_886:
	var_98_bool = true;
	
}


// @pe
void func_1087(void)
{
	func_1150();
	bool var_38_bool;
	func_1042(var_38_bool, "quest_k10_01", "completed");
}


void func_704(bool var_45_bool)
{
	var_45_bool = true;
}


void func_706(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_1221(int var_89_int)
{
	int var_91_int;
	@GetVariable("branch", var_91_int);
	if(var_91_int == 0) {
		var_89_int = 1;
		return 2;
	EMIT "GOTO 0x4d4";
	}
	if(var_91_int == 1) {
		var_89_int = 2;
		return 2;
	}
	var_89_int = 3;
}


void func_581(void)
{
	@StopGroup0();
	func_524();
	func_968("Neutral");
	func_515();
}


void func_711(float var_22_float, object var_23_object)
{
	cvector var_27_cvector;
	@GetPosition(var_27_cvector);
	cvector var_28_cvector;
	var_23_object->GetPosition(var_28_cvector);
	var_22_float = (var_28_cvector - var_27_cvector) | (var_28_cvector - var_27_cvector);
}


void func_968(string var_234_string)
{
	bool var_238_bool; float var_239_float; float var_240_float;
	@lshHasAnimation(var_238_bool, var_234_string);
	if(var_238_bool != 0) {
		@lshGetAnimTimes(var_234_string, var_239_float, var_240_float);
		@lshPlayAnimation(var_239_float, var_240_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_234_string);
	}
	
}


// @pe
void func_1097(void)
{
	int var_46_int;
	func_1037(var_46_int, "K_Mission4");
	if(var_46_int == 0) {
		@SetVariable("K_Mission4", 1);
		func_1137();
		bool var_62_bool;
		func_1204(var_62_bool, 567);
		bool var_70_bool;
		func_1204(var_70_bool, 568);
		bool var_72_bool;
		func_1204(var_72_bool, 569);
	}
}


void func_459(object var_0_object)
{
	bool var_7_bool;
	func_738(var_7_bool);
	if(!var_7_bool) //@nz
		@Hold();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_635();
	}
}
EMIT "Return(); Pop(0)";


void func_719(bool var_15_bool, cvector var_16_cvector)
{
	cvector var_20_cvector;
	@GetPosition(var_20_cvector);
	cvector var_21_cvector = var_16_cvector - var_20_cvector;
	var_23_float = GetByIndex(var_21_cvector, 0);
	var_24_float = GetByIndex(var_21_cvector, 2);
	bool var_22_bool;
	@Rotate(var_23_float, var_24_float, var_22_bool);
	var_22_bool = var_15_bool;
}


// @pe
void func_81(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_193_object, object var_194_object)
{
	var_0_object = var_194_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_200_bool;
		func_1125(var_193_object);
		if(var_200_bool != 0) {
			func_159(var_194_object, "Neutral");
			var_0_object->SetMessage(526999); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(527000, 29484, 28292); //@t
			var_0_object->AddReply(528140, 29484, 29490); //@t
		} else {
					func_159(var_194_object, "Neutral");
					var_0_object->SetMessage(527003); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(527004, -1, 28296); //@t
		}
	}
	for(;;) {
		bool var_232_bool;
		func_1246(var_232_bool);
		if(var_232_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_968(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_158;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_158:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


void func_1238(int var_86_int)
{
	var_86_int = 515551;
}


void func_984(string var_212_string, bool var_213_bool)
{
	bool var_219_bool; float var_220_float; float var_221_float;
	@lshHasAnimation(var_219_bool, var_212_string);
	if(var_219_bool != 0) {
		@lshGetAnimTimes(var_212_string, var_220_float, var_221_float);
		@lshPlayAnimation(var_220_float, var_221_float, var_213_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_212_string);
	}
	
}


void func_1240(int var_85_int)
{
	var_85_int = 502876;
}


void func_1242(string var_87_string)
{
	var_87_string = "ui/NPC_Rubin.png";
}


void func_729(bool var_11_bool, object var_12_object)
{
	cvector var_14_cvector;
	var_12_object->GetPosition(var_14_cvector);
	bool var_15_bool; cvector var_16_cvector;
	var_14_cvector = var_16_cvector;
	func_719(var_15_bool, var_16_cvector);
	var_15_bool = var_11_bool;
}


void func_1244(string var_88_string)
{
	var_88_string = "ui/NPC_Rubin_b.png";
}


void func_473(bool var_32_bool)
{
	object var_34_object;
	@FindActor(var_34_object, "player");
	if(!var_34_object) //@nz
		var_32_bool = false;
	bool var_37_bool; object var_38_object;
	var_34_object = var_38_object;
	func_729(var_37_bool, var_38_object);
	var_37_bool = var_32_bool;
}
EMIT "Stack[-1] = 0";


void func_1246(bool var_80_bool)
{
	var_80_bool = true;
}


void func_738(bool var_7_bool)
{
	bool var_9_bool;
	@IsLoaded(var_9_bool);
	var_9_bool = var_7_bool;
}


// @pe
void func_1125(bool var_200_bool)
{
	int var_202_int;
	func_1037(var_202_int, "k10q01");
	if(var_202_int == 7)
		var_200_bool = true;
	var_200_bool = false;
}


void func_743(bool var_37_bool, object var_38_object, float var_39_float)
{
	cvector var_50_cvector; bool var_57_bool;
	var_38_object->GetPosition(var_50_cvector);
	float var_49_float;
	var_38_object->GetEyesHeight(var_49_float);
	var_58_float = GetByIndex(var_50_cvector, 1);
	SetByIndex(var_50_cvector, 1) = (var_58_float + var_49_float);
	cvector var_51_cvector;
	@GetPosition(var_51_cvector);
	@GetEyesHeight(var_49_float);
	var_59_float = GetByIndex(var_51_cvector, 1);
	SetByIndex(var_51_cvector, 1) = (var_59_float + var_49_float);
	cvector var_52_cvector = var_50_cvector - var_51_cvector;
	var_60_float = GetByIndex(var_52_cvector, 1);
	SetByIndex(var_52_cvector, 1) = (float)0;
	var_62_float = sqrt(var_52_cvector | var_52_cvector);
	var_52_cvector /= var_62_float;
	cvector var_53_cvector = -var_52_cvector;
	cvector var_64_cvector;
	func_1027(var_64_cvector, (var_53_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_54_cvector = ((var_52_cvector * var_39_float) + (var_64_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_56_bool;
	@IsOverrideActive(var_56_bool);
	if(var_56_bool != 0)
		var_37_bool = false;
	@StopWorld();
	@CameraTransit((var_51_cvector + var_54_cvector), var_53_cvector, true);
	var_78_float = GetByIndex(var_54_cvector, 0);
	var_79_float = GetByIndex(var_54_cvector, 2);
	@Rotate(var_78_float, var_79_float);
	bool var_80_bool;
	func_1246(var_80_bool);
	if(var_80_bool != 0) {
	} else {
		@HasAnimationTrack(var_57_bool, "head");
		if(var_57_bool == 0) goto Label_806;
		@LookAsyncCamera("head");
	}
Label_806:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_37_bool = true;
	
}


void func_488(object var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0);
	var_85_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_84_float, var_85_float);
}


void func_999(bool var_132_bool, string var_133_string)
{
	bool var_135_bool;
	bool var_136_bool;
	func_1246(var_136_bool);
	if(var_136_bool != 0) {
		@lshHasSpeech(var_135_bool, var_133_string);
		if(var_135_bool != 0) {
			@lshPlaySpeech(var_133_string);
			var_132_bool = true;
		}
	}
	var_132_bool = false;
}


void func_493(bool var_15_bool)
{
	object var_18_object;
	@FindActor(var_18_object, "player");
	if(!var_18_object) { //@nz
		var_15_bool = false;
		return 4;
	}
	float var_22_float; object var_23_object;
	func_711(var_22_float, var_23_object);
	if(var_22_float > 90000.0) {
		var_15_bool = false;
		return 4;
	}
	bool var_19_bool;
	@CanSee(var_19_bool, var_23_object);
	var_19_bool = var_15_bool;
}
EMIT "Stack[-2] = 0";


void func_1137(void)
{
	object var_55_object;
	@CreateDiaryEntry(var_55_object, 570, 0, 530584);
	bool var_59_bool; object var_60_object;
	var_55_object = var_60_object;
	func_1176(var_59_bool, var_60_object, -1);
}
EMIT "Stack[-1] = 0";


void func_1014(void)
{
	bool var_10_bool;
	func_1246(var_10_bool);
	if(var_10_bool != 0)
		@lshStopSpeech();
}


void func_888(bool var_109_bool, object var_110_object)
{
	string var_116_string; bool var_118_bool; int var_119_int; string var_120_string;
	var_116_string = "c";
	int var_117_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_110_object->HasProperty((var_116_string + (var_117_int + 1)), var_118_bool);
			if(!var_118_bool) { //@nz
			} else {
				var_117_int += 1;
			}
		}
		if(!var_117_int) { //@nz
			var_109_bool = false;
			return 10;
		}
		var_119_int = 0;
		if(var_117_int > 1)
			@irand(var_119_int, var_117_int);
		var_110_object->GetProperty((var_116_string + (var_119_int + 1)), var_120_string);
		bool var_132_bool; string var_133_string;
		var_120_string = var_133_string;
		func_999(var_132_bool, var_133_string);
		var_132_bool = var_109_bool;
		return 10;

	}
}


void func_635(void)
{
	bool var_19_bool; int var_20_int; int var_21_int; bool var_22_bool;
	@WaitForAnimEnd();
	bool var_23_bool;
	func_738(var_23_bool);
	if(!var_23_bool) //@nz
		return 12;
	int var_25_int;
	func_1070(var_25_int);
	int var_17_int;
	var_25_int = var_17_int;
	int var_18_int = 0;
	
	for(;;) {
		bool var_38_bool = false;
		if(var_18_int < 5) {
			bool var_41_bool;
			func_738(var_41_bool);
			if(var_41_bool != 0)
				var_38_bool = true;
		}
		if(var_38_bool != 0) {
			if(!var_17_int) { //@nz
				@Sleep(3, var_19_bool);
				if(!var_19_bool) { //@nz
				} else {
			} else {
			@irand(var_20_int, var_17_int);
			@irand(var_21_int, 5);
			if(var_21_int != 0)
				var_20_int = 0;
			string var_52_string; int var_53_int;
			var_20_int = var_53_int;
			func_1063(var_52_string, var_53_int);
			@PlayAnimation("all", var_52_string);
			@WaitForAnimEnd(var_22_bool);
			var_54_bool = !var_22_bool; //@nz
			if(var_54_bool == 0) goto Label_690;
			goto Label_701;
			}
				Label_690:
					bool var_45_bool;
					func_704(var_45_bool);
					var_46_bool = !var_45_bool; //@nz
					if(var_46_bool == 0) goto Label_696;
			}
		}
	Label_701:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_696:
		@ResetAAS();
		var_18_int += 1;
	}
	
}


void func_1021(object var_100_object)
{
	object var_102_object;
	@self(var_102_object);
	var_102_object = var_100_object;
}
EMIT "Stack[-1] = 0";


void func_1150(void)
{
	object var_16_object;
	@CreateDiaryEntry(var_16_object, 455, 1, 527013);
	bool var_20_bool; object var_21_object;
	var_16_object = var_21_object;
	func_1176(var_20_bool, var_21_object, 447);
}
EMIT "Stack[-1] = 0";


