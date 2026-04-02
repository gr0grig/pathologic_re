// @GLOBALS: 0:object:

task task_0
{
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
	{
		@StopGroup0();
		@sync();
	}

}


task task_1
{
}


task task_2
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, cvector var_7_cvector, bool var_8_bool)
	{
		if(1 != 0) {
			func_1217();
			if(var_8_bool == 26986) {
				object var_13_object; object var_14_object;
				var_13_object = var_1_object;
				var_14_object = var_0_object;
				func_1377();
				object var_50_object = var_1_object;
				func_1396(var_0_object);
				object var_71_object = var_1_object;
				func_1412(var_0_object);
				object var_92_object; object var_93_object;
				var_92_object = var_1_object;
				var_93_object = var_0_object;
				func_1406();
			}
			if(var_8_bool == 41106) {
				object var_98_object; object var_99_object;
				var_98_object = var_1_object;
				var_99_object = var_0_object;
				func_1377();
				object var_100_object = var_1_object;
				func_1396(var_0_object);
				object var_102_object; object var_103_object;
				var_102_object = var_1_object;
				var_103_object = var_0_object;
				func_1406();
				object var_104_object = var_1_object;
				func_1412(var_0_object);
			}
			if(var_8_bool == 26985) {
				object var_108_object; object var_109_object;
				var_108_object = var_1_object;
				var_109_object = var_0_object;
				func_1367();
			}
			if(var_8_bool == 41103) {
				object var_123_object; object var_124_object;
				var_123_object = var_1_object;
				var_124_object = var_0_object;
				func_1367();
			}
			if(var_8_bool == 41102) {
				object var_127_object; object var_128_object;
				var_127_object = var_1_object;
				var_128_object = var_0_object;
				func_1367();
			}
			if(var_8_bool == 41122) {
				object var_131_object; object var_132_object;
				var_131_object = var_1_object;
				var_132_object = var_0_object;
				func_1353();
			}
			if(var_8_bool == 26973) {
				object var_148_object; object var_149_object;
				var_148_object = var_1_object;
				var_149_object = var_0_object;
				func_1353();
			}
			if(var_8_bool == 41121) {
				object var_152_object; object var_153_object;
				var_152_object = var_1_object;
				var_153_object = var_0_object;
				func_1353();
			}
			if(var_7_cvector == 26984) {
				bool var_156_bool;
				func_1435(var_1_object);
				if(var_156_bool != 0) {
					func_197(var_8_bool, "Neutral");
					var_0_object->SetMessage(525642); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(525640, 26983, 26982); //@t
					var_0_object->AddReply(539159, 41099, 41098); //@t
					return 0;
				}
				bool var_183_bool;
				func_1423(var_1_object);
				if(var_183_bool != 0) {
					func_197(var_8_bool, "Neutral");
					var_0_object->SetMessage(525624); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(525625, 41108, 26967); //@t
					return 0;
				}
				func_197(var_8_bool, "Neutral");
				var_0_object->SetMessage(525632); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525633, -1, 26975); //@t
				var_0_object->AddReply(539168, -1, 41107); //@t
				return 0;
			}
			if(var_7_cvector == 41108) {
				func_197(var_8_bool, "Neutral");
				var_0_object->SetMessage(539169); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539170, 41111, 41109); //@t
				var_0_object->AddReply(539171, -1, 41110); //@t
				return 0;
			}
			if(var_7_cvector == 41111) {
				func_197(var_8_bool, "Neutral");
				var_0_object->SetMessage(539172); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539173, 26968, 41112); //@t
				var_0_object->AddReply(539174, 26968, 41113); //@t
				return 0;
			}
			if(var_7_cvector == 26968) {
				func_197(var_8_bool, "Neutral");
				var_0_object->SetMessage(525626); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539175, 41116, 41115); //@t
				var_0_object->AddReply(539177, 41118, 41117); //@t
				return 0;
			}
			if(var_7_cvector == 41118) {
				func_197(var_8_bool, "Neutral");
				var_0_object->SetMessage(539178); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539179, 41116, 41119); //@t
				var_0_object->AddReply(539180, -1, 41121); //@t
				return 0;
			}
			if(var_7_cvector == 41116) {
				func_197(var_8_bool, "Neutral");
				var_0_object->SetMessage(539176); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525627, 26970, 26969); //@t
				var_0_object->AddReply(525631, -1, 26973); //@t
				return 0;
			}
			if(var_7_cvector == 26970) {
				func_197(var_8_bool, "Neutral");
				var_0_object->SetMessage(525628); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539181, -1, 41122); //@t
				return 0;
			}
			if(var_7_cvector == 41099) {
				func_197(var_8_bool, "Neutral");
				var_0_object->SetMessage(539160); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539161, 41101, 41100); //@t
				var_0_object->AddReply(539163, -1, 41102); //@t
				return 0;
			}
			if(var_7_cvector == 41101) {
				func_197(var_8_bool, "Neutral");
				var_0_object->SetMessage(539162); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525643, -1, 26985); //@t
				var_0_object->AddReply(539164, -1, 41103); //@t
				return 0;
			}
			if(var_7_cvector == 26983) {
				func_197(var_8_bool, "Neutral");
				var_0_object->SetMessage(525641); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525644, -1, 26986); //@t
				var_0_object->AddReply(539165, 41105, 41104); //@t
				return 0;
			}
			if(var_7_cvector == 41105) {
				func_197(var_8_bool, "Neutral");
				var_0_object->SetMessage(539166); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539167, -1, 41106); //@t
				return 0;
			}
			var_3_string = true;
			bool var_296_bool;
			func_1552(var_296_bool);
			if(var_296_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xdc";
	
	}

}


maintask task_3
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
	{
		func_669(var_6_bool);
	}

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, string var_7_string)
	{
		bool var_9_bool;
		if(var_7_string == "cleanup") {
			var_1_object = true;
			@IsLoaded(var_9_bool);
			if(!var_9_bool) { //@nz
				object var_13_object;
				func_1224(var_13_object);
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
			func_1224(var_8_object);
			@RemoveActor(var_8_object);
			@Hold();
		}
		func_782();
	}

	// @pe
		void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
		{
		func_797();
		}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, int var_7_int)
	{
		if(var_7_int == 10) {
			func_740();
			bool var_11_bool = false;
			bool var_12_bool;
			func_961(var_12_bool);
			if(var_12_bool != 0) {
				bool var_15_bool;
				func_709(var_15_bool);
				if(var_15_bool != 0)
					var_11_bool = true;
			}
			if(var_11_bool != 0) {
				bool var_32_bool;
				func_689(var_32_bool);
				if(var_32_bool != 0) {
					bool var_51_bool; object var_52_object;
					object var_53_object;
					func_1224(var_53_object);
					var_53_object = var_52_object;
					func_1109(var_51_bool, var_52_object);
				}
			} else {
				func_704(var_7_int);
				func_731();
			}
		}
	
	}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, bool var_7_bool)
	{
		if(var_7_bool != 0)
			func_731();
		else
			func_1189("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, object var_7_object)
	{
		bool var_9_bool;
		@IsOverrideActive(var_9_bool);
		if(!var_9_bool) { //@nz
			disable OnUse;
			func_922();
			bool var_11_bool; object var_12_object;
			var_7_object = var_12_object;
			func_952(var_11_bool, var_12_object);
			enable OnUse;
			object var_25_object;
			var_7_object = var_25_object;
			func_620(var_25_object);
			func_1189("Neutral");
			func_740();
			func_731();
		}
	}

}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_11_bool;
	func_961(var_11_bool);
	if(!var_11_bool) goto Label_0; //@nz
}


// @pe
void func_1412(object var_71_object)
{
	@Trace("neomicin is given");
	object var_74_object;
	var_71_object = var_74_object;
	func_1295(var_74_object, "neomicin", 1);
}


void func_1544(int var_180_int)
{
	var_180_int = 515573;
}


void func_1546(int var_179_int)
{
	var_179_int = 504032;
}


void func_1034(void)
{
	bool var_261_bool;
	@CameraSwitchToNormal();
	bool var_262_bool;
	func_1552(var_262_bool);
	if(var_262_bool != 0) {
	} else {
		@HasAnimationTrack(var_261_bool, "head");
		if(var_261_bool == 0) goto Label_1050;
		@UnlookAsync("head");
	}
Label_1050:
	
}


void func_1548(string var_181_string)
{
	var_181_string = "ui/NPC_Bakalavr.png";
}


void func_13(object var_0_object, int var_26_int, object var_27_object)
{
	var_0_object = var_27_object;
	bool var_37_bool; object var_38_object;
	object var_39_object;
	func_1224(var_39_object);
	var_39_object = var_38_object;
	func_1051(var_37_bool, var_38_object);
	bool var_132_bool; object var_133_object;
	var_27_object = var_133_object;
	func_966(var_132_bool, var_133_object, 70.0);
	if(!var_132_bool) { //@nz
		var_26_int = -2;
		return 8;
	}
	object var_33_object;
	@CreateDialog(var_33_object);
	int var_179_int;
	func_1546(var_179_int);
	var_33_object->SetNPCName(var_179_int);
	int var_180_int;
	func_1544(var_180_int);
	var_33_object->SetNPCDescription(var_180_int);
	string var_181_string;
	func_1548(var_181_string);
	var_33_object->SetPhoto(var_181_string);
	string var_182_string;
	func_1550(var_182_string);
	var_33_object->SetPhoto2(var_182_string);
	int var_183_int;
	func_1527(var_183_int);
	var_33_object->SetPlayerName(var_183_int);
	bool var_34_bool;
	@IsOverrideActive(var_34_bool);
	if(var_34_bool != 0) {
		var_26_int = -2;
		return 8;
	}
	@DoDialog(var_33_object);
	object var_192_object; object var_193_object;
	var_27_object = var_192_object;
	var_33_object = var_193_object;
	TaskCall(2);
	func_94(var_194_object, var_195_object, var_196_string, var_197_bool, var_192_object, var_193_object);
	TaskReturn();
	bool var_36_bool;
	var_33_object->IsDialogEnd(var_36_bool);
	
	for(;;) {
		var_258_bool = !var_36_bool; //@nz
		if(var_258_bool == 0) goto Label_83;
		@sync();
		var_33_object->IsDialogEnd(var_36_bool);
	}
	
Label_83:
	object var_259_object;
	var_27_object = var_259_object;
	func_1034();
	@StopDialog(var_33_object);
	var_33_object->GetReturnValue(-1);
	int var_35_int = var_26_int;
}
EMIT "Stack[-4] = 0";


void func_1550(string var_182_string)
{
	var_182_string = "ui/NPC_Bakalavr_b.png";
}


// @pe
void func_1423(bool var_239_bool)
{
	int var_241_int;
	func_1240(var_241_int, "k3q04");
	if(var_241_int == 1)
		var_239_bool = true;
	var_239_bool = false;
}


void func_1552(bool var_75_bool)
{
	var_75_bool = true;
}


// @pe
void func_782(void)
{
	func_922();
	func_740();
	@lshStopSpeech();
	@lshStopAnimation();
	@StopAsync();
	@Hold();
}


void func_1295(object var_74_object, string var_75_string, int var_76_int)
{
	object var_78_object;
	@CreateInvItem(var_78_object);
	var_78_object->SetItemName(var_75_string);
	object var_79_object; object var_80_object; int var_81_int;
	var_74_object = var_79_object;
	var_78_object = var_80_object;
	var_76_int = var_81_int;
	func_1276(var_79_object, var_80_object, var_81_int);
}
EMIT "Stack[-1] = 0";


void func_920(bool var_59_bool)
{
	var_59_bool = true;
}


void func_922(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_1051(bool var_37_bool, object var_38_object)
{
	int var_44_int; int var_45_int;
	@GetVariable("voice_common", var_44_int);
	if(var_44_int != 0) {
		bool var_48_bool; object var_49_object;
		var_38_object = var_49_object;
		func_1109(var_48_bool, var_49_object);
		if(!var_48_bool) { //@nz
			bool var_79_bool; object var_80_object;
			var_38_object = var_80_object;
			func_1146(var_79_bool, var_80_object);
			if(!var_79_bool) { //@nz
				var_37_bool = false;
				return 4;
			}
		}
		@irand(var_45_int, 2);
		if(var_45_int != 0)
			@SetVariable("voice_common", ((var_44_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_124_bool; object var_125_object;
		var_38_object = var_125_object;
		func_1146(var_124_bool, var_125_object);
		if(!var_124_bool) { //@nz
			bool var_127_bool; object var_128_object;
			var_38_object = var_128_object;
			func_1109(var_127_bool, var_128_object);
			if(!var_127_bool) { //@nz
				var_37_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_1107;
	
Label_1107:
	var_37_bool = true;
	
}


// @pe
void func_1435(bool var_199_bool)
{
	int var_201_int;
	func_1240(var_201_int, "k3q04");
	if(var_201_int == 3)
		var_199_bool = true;
	var_199_bool = false;
}


void func_797(void)
{
	@StopGroup0();
	func_740();
	func_1189("Neutral");
	func_731();
}


void func_669(object var_0_object)
{
	bool var_7_bool;
	func_961(var_7_bool);
	if(!var_7_bool) { //@nz
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	func_665();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_851();
	}
}
EMIT "Return(); Pop(0)";


void func_927(float var_22_float, object var_23_object)
{
	cvector var_27_cvector;
	@GetPosition(var_27_cvector);
	cvector var_28_cvector;
	var_23_object->GetPosition(var_28_cvector);
	var_22_float = (var_28_cvector - var_27_cvector) | (var_28_cvector - var_27_cvector);
}


void func_1308(bool var_40_bool, string var_41_string, string var_42_string)
{
	object var_44_object;
	@FindActor(var_44_object, var_41_string);
	if(var_44_object == null)
		var_40_bool = false;
	@Trigger(var_44_object, var_42_string);
	var_40_bool = true;
}
EMIT "Stack[-1] = 0";


void func_1189(string var_14_string)
{
	float var_17_float; float var_18_float;
	@lshGetAnimTimes(var_14_string, var_17_float, var_18_float);
	@lshPlayAnimation(var_17_float, var_18_float, false);
}


void func_935(object var_57_object, string var_58_string, int var_59_int)
{
	int var_61_int;
	var_57_object->GetProperty(var_58_string, var_61_int);
	var_57_object->SetProperty(var_58_string, (var_61_int + var_59_int));
}


void func_1320(int var_92_int)
{
	float var_94_float;
	@GetGameTime(var_94_float);
	var_92_int = 1 + (var_94_float / 24);
}


void func_1447(void)
{
	object var_18_object;
	@CreateDiaryEntry(var_18_object, 359, 2, 525659);
	bool var_22_bool; object var_23_object;
	var_18_object = var_23_object;
	func_1499(var_22_bool, var_23_object, 354);
}
EMIT "Stack[-1] = 0";


void func_1196(string var_211_string, bool var_212_bool)
{
	float var_217_float; float var_218_float;
	@lshGetAnimTimes(var_211_string, var_217_float, var_218_float);
	@lshPlayAnimation(var_217_float, var_218_float, var_212_bool);
}


void func_942(bool var_15_bool, cvector var_16_cvector)
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


void func_689(bool var_32_bool)
{
	object var_34_object;
	@FindActor(var_34_object, "player");
	if(!var_34_object) //@nz
		var_32_bool = false;
	bool var_37_bool; object var_38_object;
	var_34_object = var_38_object;
	func_952(var_37_bool, var_38_object);
	var_37_bool = var_32_bool;
}
EMIT "Stack[-1] = 0";


void func_1329(string var_45_string, int var_46_int)
{
	string var_48_string = "idle";
	if(var_46_int != 0)
		var_48_string += var_46_int;
	var_48_string = var_45_string;
}


void func_1202(bool var_71_bool, string var_72_string)
{
	bool var_74_bool;
	bool var_75_bool;
	func_1552(var_75_bool);
	if(var_75_bool != 0) {
		@lshHasSpeech(var_74_bool, var_72_string);
		if(var_74_bool != 0) {
			@lshPlaySpeech(var_72_string);
			var_71_bool = true;
		}
	}
	var_71_bool = false;
}


void func_1460(void)
{
	object var_111_object;
	@CreateDiaryEntry(var_111_object, 358, 2, 525658);
	bool var_115_bool; object var_116_object;
	var_111_object = var_116_object;
	func_1499(var_115_bool, var_116_object, 354);
}
EMIT "Stack[-1] = 0";


void func_952(bool var_11_bool, object var_12_object)
{
	cvector var_14_cvector;
	var_12_object->GetPosition(var_14_cvector);
	bool var_15_bool; cvector var_16_cvector;
	var_14_cvector = var_16_cvector;
	func_942(var_15_bool, var_16_cvector);
	var_15_bool = var_11_bool;
}


void func_1336(int var_39_int)
{
	int var_42_int; bool var_43_bool;
	var_42_int = 0;
	
	for(;;) {
		string var_45_string; int var_46_int;
		var_42_int = var_46_int;
		func_1329(var_45_string, var_46_int);
		@HasAnimation(var_43_bool, "all", var_45_string);
		if(!var_43_bool) //@nz
			break;
		var_42_int += 1;
	}
	var_42_int = var_39_int;
}


void func_704(object var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0);
	var_85_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_84_float, var_85_float);
}


void func_961(bool var_7_bool)
{
	bool var_9_bool;
	@IsLoaded(var_9_bool);
	var_9_bool = var_7_bool;
}


void func_1217(void)
{
	bool var_10_bool;
	func_1552(var_10_bool);
	if(var_10_bool != 0)
		@lshStopSpeech();
}


void func_1473(void)
{
	object var_136_object;
	@CreateDiaryEntry(var_136_object, 356, 2, 525656);
	bool var_140_bool; object var_141_object;
	var_136_object = var_141_object;
	func_1499(var_140_bool, var_141_object, 354);
}
EMIT "Stack[-1] = 0";


// @pe
void func_197(object var_2_object, string var_207_string)
{
	bool var_208_bool;
	func_1552(var_208_bool);
	if(!var_208_bool) //@nz
		return 0;
	if(var_207_string == var_2_object)
		return 0;
	string var_211_string; bool var_212_bool;
	var_207_string = var_211_string;
	if(var_207_string == "")
		var_212_bool = false;
	else
		var_212_bool = true;
	func_1196(var_211_string, var_212_bool);
	var_2_object = var_207_string;
	
}


void func_966(bool var_132_bool, object var_133_object, float var_134_float)
{
	cvector var_145_cvector; bool var_152_bool;
	var_133_object->GetPosition(var_145_cvector);
	float var_144_float;
	var_133_object->GetEyesHeight(var_144_float);
	var_153_float = GetByIndex(var_145_cvector, 1);
	SetByIndex(var_145_cvector, 1) = (var_153_float + var_144_float);
	cvector var_146_cvector;
	@GetPosition(var_146_cvector);
	@GetEyesHeight(var_144_float);
	var_154_float = GetByIndex(var_146_cvector, 1);
	SetByIndex(var_146_cvector, 1) = (var_154_float + var_144_float);
	cvector var_147_cvector = var_145_cvector - var_146_cvector;
	var_155_float = GetByIndex(var_147_cvector, 1);
	SetByIndex(var_147_cvector, 1) = (float)0;
	var_157_float = sqrt(var_147_cvector | var_147_cvector);
	var_147_cvector /= var_157_float;
	cvector var_148_cvector = -var_147_cvector;
	cvector var_159_cvector;
	func_1230(var_159_cvector, (var_148_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_149_cvector = ((var_147_cvector * var_134_float) + (var_159_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_151_bool;
	@IsOverrideActive(var_151_bool);
	if(var_151_bool != 0)
		var_132_bool = false;
	@StopWorld();
	@CameraTransit((var_146_cvector + var_149_cvector), var_148_cvector);
	var_172_float = GetByIndex(var_149_cvector, 0);
	var_173_float = GetByIndex(var_149_cvector, 2);
	@Rotate(var_172_float, var_173_float);
	bool var_174_bool;
	func_1552(var_174_bool);
	if(var_174_bool != 0) {
	} else {
		@HasAnimationTrack(var_152_bool, "head");
		if(var_152_bool == 0) goto Label_1028;
		@LookAsyncCamera("head");
	}
Label_1028:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_132_bool = true;
	
}


void func_709(bool var_15_bool)
{
	object var_18_object;
	@FindActor(var_18_object, "player");
	if(!var_18_object) { //@nz
		var_15_bool = false;
		return 4;
	}
	float var_22_float; object var_23_object;
	func_927(var_22_float, var_23_object);
	if(var_22_float > 90000.0) {
		var_15_bool = false;
		return 4;
	}
	bool var_19_bool;
	@CanSee(var_19_bool, var_23_object);
	var_19_bool = var_15_bool;
}
EMIT "Stack[-2] = 0";


void func_1224(object var_39_object)
{
	object var_41_object;
	@self(var_41_object);
	var_41_object = var_39_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1353(void)
{
	@SetVariable("k3q04", 2);
	func_1473();
	bool var_143_bool;
	func_1308(var_143_bool, "quest_k3_04", "place_burah_lopuh");
}


void func_1230(cvector var_159_cvector, cvector var_160_cvector)
{
	float var_163_float = sqrt(var_160_cvector | var_160_cvector);
	if(var_163_float < 0.000001)
		var_159_cvector = [0.0, 0.0, 0.0];
	var_159_cvector = var_160_cvector / var_163_float;
}


void func_1486(object var_31_object)
{
	object var_33_object;
	@GetDiaryRoot(var_33_object);
	if(!var_33_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_31_object = false;
	}
	var_33_object = var_31_object;
}
EMIT "Stack[-1] = 0";


void func_851(void)
{
	bool var_33_bool; int var_34_int; int var_35_int; bool var_36_bool;
	@WaitForAnimEnd();
	bool var_37_bool;
	func_961(var_37_bool);
	if(!var_37_bool) //@nz
		return 12;
	int var_39_int;
	func_1336(var_39_int);
	int var_31_int;
	var_39_int = var_31_int;
	int var_32_int = 0;
	
	for(;;) {
		bool var_52_bool = false;
		if(var_32_int < 5) {
			bool var_55_bool;
			func_961(var_55_bool);
			if(var_55_bool != 0)
				var_52_bool = true;
		}
		if(var_52_bool != 0) {
			if(!var_31_int) { //@nz
				@Sleep(3, var_33_bool);
				if(!var_33_bool) { //@nz
				} else {
			} else {
			@irand(var_34_int, var_31_int);
			@irand(var_35_int, 5);
			if(var_35_int != 0)
				var_34_int = 0;
			string var_66_string; int var_67_int;
			var_34_int = var_67_int;
			func_1329(var_66_string, var_67_int);
			@PlayAnimation("all", var_66_string);
			@WaitForAnimEnd(var_36_bool);
			var_68_bool = !var_36_bool; //@nz
			if(var_68_bool == 0) goto Label_906;
			goto Label_917;
			}
				Label_906:
					bool var_59_bool;
					func_920(var_59_bool);
					var_60_bool = !var_59_bool; //@nz
					if(var_60_bool == 0) goto Label_912;
			}
		}
	Label_917:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_912:
		@ResetAAS();
		var_32_int += 1;
	}
	
}


void func_1109(bool var_48_bool, object var_49_object)
{
	string var_55_string; bool var_57_bool; int var_58_int; string var_59_string;
	var_55_string = "c";
	int var_56_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_49_object->HasProperty((var_55_string + (var_56_int + 1)), var_57_bool);
			if(!var_57_bool) { //@nz
			} else {
				var_56_int += 1;
			}
		}
		if(!var_56_int) { //@nz
			var_48_bool = false;
			return 10;
		}
		var_58_int = 0;
		if(var_56_int > 1)
			@irand(var_58_int, var_56_int);
		var_49_object->GetProperty((var_55_string + (var_58_int + 1)), var_59_string);
		bool var_71_bool; string var_72_string;
		var_59_string = var_72_string;
		func_1202(var_71_bool, var_72_string);
		var_71_bool = var_48_bool;
		return 10;

	}
}


// @pe
void func_1367(void)
{
	func_1460();
	bool var_118_bool;
	func_1308(var_118_bool, "quest_k3_04", "completed");
}


void func_1240(int var_201_int, string var_202_string)
{
	int var_204_int;
	@GetVariable(var_202_string, var_204_int);
	var_204_int = var_201_int;
}


void func_731(void)
{
	float var_21_float;
	@rand(var_21_float, 8, 16);
	@SetTimer(10, var_21_float);
}


void func_1499(bool var_22_bool, object var_23_object, int var_24_int)
{
	object var_31_object;
	func_1486(var_31_object);
	object var_28_object;
	var_31_object = var_28_object;
	object var_29_object;
	var_28_object->Find(var_24_int, var_29_object);
	if(!var_29_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_24_int);
		var_22_bool = false;
	}
	var_29_object->AddChild(var_23_object);
	@SendWorldWndMessage(7);
	int var_30_int;
	var_23_object->GetCategory(var_30_int);
	@SetDiarySection(var_30_int);
	var_22_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_1245(int var_66_int, int var_67_int)
{
	object var_69_object;
	@CreateIntVector(var_69_object);
	var_69_object->add(var_66_int);
	var_69_object->add(var_67_int);
	@SendWorldWndMessage(3, var_69_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_94(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_192_object, object var_193_object)
{
	var_0_object = var_193_object;
	var_1_object = var_192_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_199_bool;
		func_1435(var_1_object);
		if(var_199_bool != 0) {
			func_197(var_193_object, "Neutral");
			var_0_object->SetMessage(525642); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(525640, 26983, 26982); //@t
			var_0_object->AddReply(539159, 41099, 41098); //@t
		} else {
					bool var_239_bool;
					func_1423(var_1_object);
					if(var_239_bool == 0) goto Label_145;
					func_197(var_193_object, "Neutral");
					var_0_object->SetMessage(525624); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(525625, 41108, 26967); //@t
		}
	}
Label_167:
	for(;;) {
		bool var_226_bool;
		func_1552(var_226_bool);
		if(var_226_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_1189(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_196;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_196:
			return 0;

		}

	}
	
Label_145:
	func_197(var_193_object, "Neutral");
	var_0_object->SetMessage(525632); //@t
	var_0_object->ClearReplies(); //@t
	var_0_object->AddReply(525633, -1, 26975); //@t
	var_0_object->AddReply(539168, -1, 41107); //@t
	goto Label_167;
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x62";


void func_1377(void)
{
	func_1447();
	bool var_40_bool;
	func_1308(var_40_bool, "quest_k3_04", "completed");
	int var_16_int;
	@GetVariable("k3q04Promise", var_16_int);
	if(var_16_int != 0)
		@SetVariable("k3q04SendBurahMail", 1);
}


void func_740(void)
{
	@KillTimer(10);
}


void func_1257(object var_53_object, int var_54_int)
{
	int var_56_int;
	object var_57_object;
	var_53_object = var_57_object;
	int var_59_int;
	func_935(var_57_object, "money", var_59_int);
	if(var_59_int > 0) {
		@GetInvItemByName(var_56_int, "Money");
		int var_66_int; int var_67_int;
		var_56_int = var_66_int;
		var_54_int = var_67_int;
		func_1245(var_66_int, var_67_int);
	}
}


// @pe
void func_620(object var_25_object)
{
	object var_27_object;
	var_25_object = var_27_object;
	TaskCall(1);
	int var_26_int;
	func_13(var_28_object, var_26_int, var_27_object);
	TaskReturn();
}


// @pe
void func_1396(object var_50_object)
{
	@Trace("money2000 is given");
	object var_53_object;
	var_50_object = var_53_object;
	func_1257(var_53_object, 2000);
}


void func_1527(int var_183_int)
{
	int var_185_int;
	@GetVariable("branch", var_185_int);
	if(var_185_int == 0) {
		var_183_int = 1;
		return 2;
	EMIT "GOTO 0x606";
	}
	if(var_185_int == 1) {
		var_183_int = 2;
		return 2;
	}
	var_183_int = 3;
}


void func_1146(bool var_79_bool, object var_80_object)
{
	bool var_88_bool; int var_89_int; string var_90_string;
	int var_92_int;
	func_1320(var_92_int);
	string var_86_string = ("d" + var_92_int) + "m";
	int var_87_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_80_object->HasProperty((var_86_string + (var_87_int + 1)), var_88_bool);
			if(!var_88_bool) { //@nz
			} else {
				var_87_int += 1;
			}
		}
		if(!var_87_int) { //@nz
			var_79_bool = false;
			return 10;
		}
		var_89_int = 0;
		if(var_87_int > 1)
			@irand(var_89_int, var_87_int);
		var_80_object->GetProperty((var_86_string + (var_89_int + 1)), var_90_string);
		bool var_111_bool; string var_112_string;
		var_90_string = var_112_string;
		func_1202(var_111_bool, var_112_string);
		var_111_bool = var_79_bool;
		return 10;

	}
}


void func_1276(object var_79_object, object var_80_object, int var_81_int)
{
	int var_85_int;
	var_80_object->GetItemID(var_85_int);
	int var_86_int;
	@GetInvItemProperty(var_86_int, var_85_int, "Category");
	bool var_87_bool;
	var_79_object->AddItem(var_87_bool, var_80_object, var_86_int, var_81_int);
	if(!var_87_bool) { //@nz
		var_79_object->DropItems(var_80_object, var_81_int);
	} else {
		int var_90_int; int var_91_int;
		var_85_int = var_90_int;
		var_81_int = var_91_int;
		func_1245(var_90_int, var_91_int);
	}
	
}


// @pe
void func_1406(void)
{
	@TriggerWorld("playsound", "givemoney");
}


