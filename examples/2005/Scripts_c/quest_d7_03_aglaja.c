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
			func_1125();
			if(var_8_bool == 34783) {
				object var_13_object = var_1_object;
				func_1265(var_0_object);
				object var_37_object = var_1_object;
				func_1309(var_0_object);
				object var_43_object; object var_44_object;
				var_43_object = var_1_object;
				var_44_object = var_0_object;
				func_1255();
			}
			if(var_8_bool == 34784) {
				object var_76_object; object var_77_object;
				var_76_object = var_1_object;
				var_77_object = var_0_object;
				func_1255();
				object var_78_object = var_1_object;
				func_1276(var_0_object);
			}
			if(var_8_bool == 34785) {
				object var_86_object; object var_87_object;
				var_86_object = var_1_object;
				var_87_object = var_0_object;
				func_1255();
				object var_88_object = var_1_object;
				func_1287(var_0_object);
				object var_94_object = var_1_object;
				func_1298(var_0_object);
				object var_100_object = var_1_object;
				func_1298(var_0_object);
			}
			if(var_8_bool == 34786) {
				object var_104_object; object var_105_object;
				var_104_object = var_1_object;
				var_105_object = var_0_object;
				func_1255();
			}
			if(var_7_cvector == 34782) {
				bool var_108_bool = false;
				bool var_109_bool;
				func_1320(var_1_object);
				if(var_109_bool != 0) {
					bool var_117_bool;
					func_1332(var_1_object);
					if(var_117_bool != 0)
						var_108_bool = true;
				}
				if(var_108_bool != 0) {
					object var_123_object; object var_124_object;
					var_123_object = var_1_object;
					var_124_object = var_0_object;
					func_1242();
					object var_127_object; object var_128_object;
					var_127_object = var_1_object;
					var_128_object = var_0_object;
					func_1248();
					func_191(var_8_bool, "Neutral");
					var_0_object->SetMessage(533268); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(534543, 36176, 36175); //@t
					return 0;
				}
				func_191(var_8_bool, "Neutral");
				var_0_object->SetMessage(533273); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533274, -1, 34788); //@t
				var_0_object->AddReply(534553, -1, 36185); //@t
				return 0;
			}
			if(var_7_cvector == 36176) {
				func_191(var_8_bool, "Neutral");
				var_0_object->SetMessage(534544); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534545, 36178, 36177); //@t
				return 0;
			}
			if(var_7_cvector == 36178) {
				func_191(var_8_bool, "Neutral");
				var_0_object->SetMessage(534546); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534547, 36180, 36179); //@t
				var_0_object->AddReply(535169, 36835, 36834); //@t
				return 0;
			}
			if(var_7_cvector == 36835) {
				func_191(var_8_bool, "Neutral");
				var_0_object->SetMessage(535170); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535171, 36180, 36836); //@t
				return 0;
			}
			if(var_7_cvector == 36180) {
				func_191(var_8_bool, "Neutral");
				var_0_object->SetMessage(534548); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534549, 36182, 36181); //@t
				return 0;
			}
			if(var_7_cvector == 36182) {
				func_191(var_8_bool, "Neutral");
				var_0_object->SetMessage(534550); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534551, 36841, 36183); //@t
				var_0_object->AddReply(535172, 36839, 36838); //@t
				return 0;
			}
			if(var_7_cvector == 36839) {
				func_191(var_8_bool, "Neutral");
				var_0_object->SetMessage(535173); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535174, 36184, 36840); //@t
				return 0;
			}
			if(var_7_cvector == 36841) {
				func_191(var_8_bool, "Neutral");
				var_0_object->SetMessage(535175); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535176, 36184, 36842); //@t
				bool var_211_bool;
				func_1344(var_1_object);
				if(var_211_bool != 0)
					var_0_object->AddReply(535177, -1, 36843); //@t
				return 0;
			}
			if(var_7_cvector == 36184) {
				func_191(var_8_bool, "Neutral");
				var_0_object->SetMessage(534552); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533269, -1, 34783); //@t
				var_0_object->AddReply(533270, -1, 34784); //@t
				var_0_object->AddReply(533271, -1, 34785); //@t
				var_0_object->AddReply(533272, -1, 34786); //@t
				return 0;
			}
			var_3_string = true;
			bool var_236_bool;
			func_1435(var_236_bool);
			if(var_236_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xd6";
	
	}

}


maintask task_3
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
	{
		func_584(var_6_bool);
	}

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, string var_7_string)
	{
		bool var_9_bool;
		if(var_7_string == "cleanup") {
			var_1_object = true;
			@IsLoaded(var_9_bool);
			if(!var_9_bool) { //@nz
				object var_13_object;
				func_1132(var_13_object);
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
			func_1132(var_8_object);
			@RemoveActor(var_8_object);
			@Hold();
		}
		func_697();
	}

	// @pe
		void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
		{
		func_712();
		}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, int var_7_int)
	{
		if(var_7_int == 10) {
			func_655();
			bool var_11_bool = false;
			bool var_12_bool;
			func_869(var_12_bool);
			if(var_12_bool != 0) {
				bool var_15_bool;
				func_624(var_15_bool);
				if(var_15_bool != 0)
					var_11_bool = true;
			}
			if(var_11_bool != 0) {
				bool var_32_bool;
				func_604(var_32_bool);
				if(var_32_bool != 0) {
					bool var_51_bool; object var_52_object;
					object var_53_object;
					func_1132(var_53_object);
					var_53_object = var_52_object;
					func_1017(var_51_bool, var_52_object);
				}
			} else {
				func_619(var_7_int);
				func_646();
			}
		}
	
	}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, bool var_7_bool)
	{
		if(var_7_bool != 0)
			func_646();
		else
			func_1097("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, object var_7_object)
	{
		bool var_9_bool;
		@IsOverrideActive(var_9_bool);
		if(!var_9_bool) { //@nz
			disable OnUse;
			func_837();
			bool var_11_bool; object var_12_object;
			var_7_object = var_12_object;
			func_860(var_11_bool, var_12_object);
			enable OnUse;
			object var_25_object;
			var_7_object = var_25_object;
			func_535(var_25_object);
			func_1097("Neutral");
			func_655();
			func_646();
		}
	}

}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_11_bool;
	func_869(var_11_bool);
	if(!var_11_bool) goto Label_0; //@nz
}


void func_1153(int var_32_int, int var_33_int)
{
	object var_35_object;
	@CreateIntVector(var_35_object);
	var_35_object->add(var_32_int);
	var_35_object->add(var_33_int);
	@SendWorldWndMessage(3, var_35_object);
}
EMIT "Stack[-1] = 0";


void func_1410(int var_183_int)
{
	int var_185_int;
	@GetVariable("branch", var_185_int);
	if(var_185_int == 0) {
		var_183_int = 1;
		return 2;
	EMIT "GOTO 0x591";
	}
	if(var_185_int == 1) {
		var_183_int = 2;
		return 2;
	}
	var_183_int = 3;
}


void func_646(void)
{
	float var_21_float;
	@rand(var_21_float, 8, 16);
	@SetTimer(10, var_21_float);
}


// @pe
void func_1287(object var_88_object)
{
	@Trace("feromicin is given");
	object var_91_object;
	var_88_object = var_91_object;
	func_1184(var_91_object, "feromicin", 1);
}


void func_13(object var_0_object, int var_26_int, object var_27_object)
{
	var_0_object = var_27_object;
	bool var_37_bool; object var_38_object;
	object var_39_object;
	func_1132(var_39_object);
	var_39_object = var_38_object;
	func_959(var_37_bool, var_38_object);
	bool var_132_bool; object var_133_object;
	var_27_object = var_133_object;
	func_874(var_132_bool, var_133_object, 70.0);
	if(!var_132_bool) { //@nz
		var_26_int = -2;
		return 8;
	}
	object var_33_object;
	@CreateDialog(var_33_object);
	int var_179_int;
	func_1429(var_179_int);
	var_33_object->SetNPCName(var_179_int);
	int var_180_int;
	func_1427(var_180_int);
	var_33_object->SetNPCDescription(var_180_int);
	string var_181_string;
	func_1431(var_181_string);
	var_33_object->SetPhoto(var_181_string);
	string var_182_string;
	func_1433(var_182_string);
	var_33_object->SetPhoto2(var_182_string);
	int var_183_int;
	func_1410(var_183_int);
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
		var_263_bool = !var_36_bool; //@nz
		if(var_263_bool == 0) goto Label_83;
		@sync();
		var_33_object->IsDialogEnd(var_36_bool);
	}
	
Label_83:
	object var_264_object;
	var_27_object = var_264_object;
	func_942();
	@StopDialog(var_33_object);
	var_33_object->GetReturnValue(-1);
	int var_35_int = var_26_int;
}
EMIT "Stack[-4] = 0";


void func_1165(object var_21_object, object var_22_object, int var_23_int)
{
	int var_27_int;
	var_22_object->GetItemID(var_27_int);
	int var_28_int;
	@GetInvItemProperty(var_28_int, var_27_int, "Category");
	bool var_29_bool;
	var_21_object->AddItem(var_29_bool, var_22_object, var_28_int, var_23_int);
	if(!var_29_bool) { //@nz
		var_21_object->DropItems(var_22_object, var_23_int);
	} else {
		int var_32_int; int var_33_int;
		var_27_int = var_32_int;
		var_23_int = var_33_int;
		func_1153(var_32_int, var_33_int);
	}
	
}


void func_655(void)
{
	@KillTimer(10);
}


// @pe
void func_1298(object var_94_object)
{
	@Trace("neomicin is given");
	object var_97_object;
	var_94_object = var_97_object;
	func_1184(var_97_object, "neomicin", 1);
}


void func_1427(int var_180_int)
{
	var_180_int = 515527;
}


// @pe
void func_1276(object var_78_object)
{
	@Trace("whitevaccine is given");
	object var_81_object;
	var_78_object = var_81_object;
	func_1184(var_81_object, "white_vaccine", 1);
}


void func_1429(int var_179_int)
{
	var_179_int = 513334;
}


// @pe
void func_535(object var_25_object)
{
	object var_27_object;
	var_25_object = var_27_object;
	TaskCall(1);
	int var_26_int;
	func_13(var_28_object, var_26_int, var_27_object);
	TaskReturn();
}


void func_1431(string var_181_string)
{
	var_181_string = "ui/NPC_Aglaja.png";
}


void func_1433(string var_182_string)
{
	var_182_string = "ui/NPC_Aglaja_b.png";
}


void func_1435(bool var_75_bool)
{
	var_75_bool = true;
}


// @pe
void func_1309(object var_37_object)
{
	@Trace("samopal ammo5 is given");
	object var_40_object;
	var_37_object = var_40_object;
	func_1184(var_40_object, "samopal_ammo", 5);
}


void func_1054(bool var_79_bool, object var_80_object)
{
	bool var_88_bool; int var_89_int; string var_90_string;
	int var_92_int;
	func_1209(var_92_int);
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
		func_1110(var_111_bool, var_112_string);
		var_111_bool = var_79_bool;
		return 10;

	}
}


void func_1184(object var_16_object, string var_17_string, int var_18_int)
{
	object var_20_object;
	@CreateInvItem(var_20_object);
	var_20_object->SetItemName(var_17_string);
	object var_21_object; object var_22_object; int var_23_int;
	var_16_object = var_21_object;
	var_20_object = var_22_object;
	var_18_int = var_23_int;
	func_1165(var_21_object, var_22_object, var_23_int);
}
EMIT "Stack[-1] = 0";


// @pe
void func_1320(bool var_200_bool)
{
	int var_202_int;
	func_1148(var_202_int, "ood7AglajaPetr1");
	if(var_202_int == 0) {
		var_200_bool = true;
		return 0;
	}
	var_200_bool = false;
}


void func_1197(bool var_220_bool, string var_221_string, string var_222_string)
{
	object var_224_object;
	@FindActor(var_224_object, var_221_string);
	if(var_224_object == null)
		var_220_bool = false;
	@Trigger(var_224_object, var_222_string);
	var_220_bool = true;
}
EMIT "Stack[-1] = 0";


void func_942(void)
{
	bool var_266_bool;
	@CameraSwitchToNormal();
	bool var_267_bool;
	func_1435(var_267_bool);
	if(var_267_bool != 0) {
	} else {
		@HasAnimationTrack(var_266_bool, "head");
		if(var_266_bool == 0) goto Label_958;
		@UnlookAsync("head");
	}
Label_958:
	
}


// @pe
void func_1332(bool var_208_bool)
{
	int var_210_int;
	func_1148(var_210_int, "d7q03");
	if(var_210_int == 4)
		var_208_bool = true;
	var_208_bool = false;
}


// @pe
void func_697(void)
{
	func_837();
	func_655();
	@lshStopSpeech();
	@lshStopAnimation();
	@StopAsync();
	@Hold();
}


void func_1209(int var_92_int)
{
	float var_94_float;
	@GetGameTime(var_94_float);
	var_92_int = 1 + (var_94_float / 24);
}


// @pe
void func_191(object var_2_object, string var_226_string)
{
	bool var_227_bool;
	func_1435(var_227_bool);
	if(!var_227_bool) //@nz
		return 0;
	if(var_226_string == var_2_object)
		return 0;
	string var_230_string; bool var_231_bool;
	var_226_string = var_230_string;
	if(var_226_string == "")
		var_231_bool = false;
	else
		var_231_bool = true;
	func_1104(var_230_string, var_231_bool);
	var_2_object = var_226_string;
	
}


void func_959(bool var_37_bool, object var_38_object)
{
	int var_44_int; int var_45_int;
	@GetVariable("voice_common", var_44_int);
	if(var_44_int != 0) {
		bool var_48_bool; object var_49_object;
		var_38_object = var_49_object;
		func_1017(var_48_bool, var_49_object);
		if(!var_48_bool) { //@nz
			bool var_79_bool; object var_80_object;
			var_38_object = var_80_object;
			func_1054(var_79_bool, var_80_object);
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
		func_1054(var_124_bool, var_125_object);
		if(!var_124_bool) { //@nz
			bool var_127_bool; object var_128_object;
			var_38_object = var_128_object;
			func_1017(var_127_bool, var_128_object);
			if(!var_127_bool) { //@nz
				var_37_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_1015;
	
Label_1015:
	var_37_bool = true;
	
}


// @pe
void func_1344(bool var_211_bool)
{
	int var_213_int;
	func_1148(var_213_int, "d7q03");
	if(var_213_int == 1000)
		var_211_bool = true;
	var_211_bool = false;
}


void func_1218(string var_45_string, int var_46_int)
{
	string var_48_string = "idle";
	if(var_46_int != 0)
		var_48_string += var_46_int;
	var_48_string = var_45_string;
}


void func_835(bool var_59_bool)
{
	var_59_bool = true;
}


void func_837(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_584(object var_0_object)
{
	bool var_7_bool;
	func_869(var_7_bool);
	if(!var_7_bool) { //@nz
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	func_580();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_766();
	}
}
EMIT "Return(); Pop(0)";


void func_1097(string var_14_string)
{
	float var_17_float; float var_18_float;
	@lshGetAnimTimes(var_14_string, var_17_float, var_18_float);
	@lshPlayAnimation(var_17_float, var_18_float, false);
}


void func_712(void)
{
	@StopGroup0();
	func_655();
	func_1097("Neutral");
	func_646();
}


void func_842(float var_22_float, object var_23_object)
{
	cvector var_27_cvector;
	@GetPosition(var_27_cvector);
	cvector var_28_cvector;
	var_23_object->GetPosition(var_28_cvector);
	var_22_float = (var_28_cvector - var_27_cvector) | (var_28_cvector - var_27_cvector);
}


void func_1225(int var_39_int)
{
	int var_42_int; bool var_43_bool;
	var_42_int = 0;
	
	for(;;) {
		string var_45_string; int var_46_int;
		var_42_int = var_46_int;
		func_1218(var_45_string, var_46_int);
		@HasAnimation(var_43_bool, "all", var_45_string);
		if(!var_43_bool) //@nz
			break;
		var_42_int += 1;
	}
	var_42_int = var_39_int;
}


void func_1356(void)
{
	object var_46_object;
	@CreateDiaryEntry(var_46_object, 645, 2, 533279);
	bool var_50_bool; object var_51_object;
	var_46_object = var_51_object;
	func_1382(var_50_bool, var_51_object, 641);
}
EMIT "Stack[-1] = 0";


void func_1104(string var_230_string, bool var_231_bool)
{
	float var_236_float; float var_237_float;
	@lshGetAnimTimes(var_230_string, var_236_float, var_237_float);
	@lshPlayAnimation(var_236_float, var_237_float, var_231_bool);
}


void func_850(bool var_15_bool, cvector var_16_cvector)
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


void func_1110(bool var_71_bool, string var_72_string)
{
	bool var_74_bool;
	bool var_75_bool;
	func_1435(var_75_bool);
	if(var_75_bool != 0) {
		@lshHasSpeech(var_74_bool, var_72_string);
		if(var_74_bool != 0) {
			@lshPlaySpeech(var_72_string);
			var_71_bool = true;
		}
	}
	var_71_bool = false;
}


void func_1369(object var_59_object)
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


// @pe
void func_1242(void)
{
	@SetVariable("ood7AglajaPetr1", 1);
}


void func_860(bool var_11_bool, object var_12_object)
{
	cvector var_14_cvector;
	var_12_object->GetPosition(var_14_cvector);
	bool var_15_bool; cvector var_16_cvector;
	var_14_cvector = var_16_cvector;
	func_850(var_15_bool, var_16_cvector);
	var_15_bool = var_11_bool;
}


void func_604(bool var_32_bool)
{
	object var_34_object;
	@FindActor(var_34_object, "player");
	if(!var_34_object) //@nz
		var_32_bool = false;
	bool var_37_bool; object var_38_object;
	var_34_object = var_38_object;
	func_860(var_37_bool, var_38_object);
	var_37_bool = var_32_bool;
}
EMIT "Stack[-1] = 0";


// @pe
void func_94(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_192_object, object var_193_object)
{
	var_0_object = var_193_object;
	var_1_object = var_192_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_199_bool = false;
		bool var_200_bool;
		func_1320(var_1_object);
		if(var_200_bool != 0) {
			bool var_208_bool;
			func_1332(var_1_object);
			if(var_208_bool != 0)
				var_199_bool = true;
		}
		if(var_199_bool != 0) {
			object var_214_object; object var_215_object;
			var_214_object = var_1_object;
			var_215_object = var_0_object;
			func_1242();
			object var_218_object; object var_219_object;
			var_218_object = var_1_object;
			var_219_object = var_0_object;
			func_1248();
			func_191(var_193_object, "Neutral");
			var_0_object->SetMessage(533268); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(534543, 36176, 36175); //@t
		} else {
					func_191(var_193_object, "Neutral");
					var_0_object->SetMessage(533273); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(533274, -1, 34788); //@t
					var_0_object->AddReply(534553, -1, 36185); //@t
		}
	}
	for(;;) {
		bool var_242_bool;
		func_1435(var_242_bool);
		if(var_242_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_1097(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_190;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_190:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x62";


// @pe
void func_1248(void)
{
	bool var_220_bool;
	func_1197(var_220_bool, "quest_d7_03", "remove_maria");
}


void func_869(bool var_7_bool)
{
	bool var_9_bool;
	@IsLoaded(var_9_bool);
	var_9_bool = var_7_bool;
}


void func_1125(void)
{
	bool var_10_bool;
	func_1435(var_10_bool);
	if(var_10_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_1255(void)
{
	func_1356();
	bool var_68_bool;
	func_1197(var_68_bool, "quest_d7_03", "completed");
}


void func_1382(bool var_50_bool, object var_51_object, int var_52_int)
{
	object var_59_object;
	func_1369(var_59_object);
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


void func_874(bool var_132_bool, object var_133_object, float var_134_float)
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
	func_1138(var_159_cvector, (var_148_cvector ^ [0.0, 1.0, 0.0]));
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
	func_1435(var_174_bool);
	if(var_174_bool != 0) {
	} else {
		@HasAnimationTrack(var_152_bool, "head");
		if(var_152_bool == 0) goto Label_936;
		@LookAsyncCamera("head");
	}
Label_936:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_132_bool = true;
	
}


void func_619(object var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0);
	var_85_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_84_float, var_85_float);
}


void func_1132(object var_39_object)
{
	object var_41_object;
	@self(var_41_object);
	var_41_object = var_39_object;
}
EMIT "Stack[-1] = 0";


void func_624(bool var_15_bool)
{
	object var_18_object;
	@FindActor(var_18_object, "player");
	if(!var_18_object) { //@nz
		var_15_bool = false;
		return 4;
	}
	float var_22_float; object var_23_object;
	func_842(var_22_float, var_23_object);
	if(var_22_float > 90000.0) {
		var_15_bool = false;
		return 4;
	}
	bool var_19_bool;
	@CanSee(var_19_bool, var_23_object);
	var_19_bool = var_15_bool;
}
EMIT "Stack[-2] = 0";


// @pe
void func_1265(object var_13_object)
{
	@Trace("samopal is given");
	object var_16_object;
	var_13_object = var_16_object;
	func_1184(var_16_object, "Samopal", 1);
}


void func_1138(cvector var_159_cvector, cvector var_160_cvector)
{
	float var_163_float = sqrt(var_160_cvector | var_160_cvector);
	if(var_163_float < 0.000001)
		var_159_cvector = [0.0, 0.0, 0.0];
	var_159_cvector = var_160_cvector / var_163_float;
}


void func_1017(bool var_48_bool, object var_49_object)
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
		func_1110(var_71_bool, var_72_string);
		var_71_bool = var_48_bool;
		return 10;

	}
}


void func_1148(int var_202_int, string var_203_string)
{
	int var_205_int;
	@GetVariable(var_203_string, var_205_int);
	var_205_int = var_202_int;
}


void func_766(void)
{
	bool var_33_bool; int var_34_int; int var_35_int; bool var_36_bool;
	@WaitForAnimEnd();
	bool var_37_bool;
	func_869(var_37_bool);
	if(!var_37_bool) //@nz
		return 12;
	int var_39_int;
	func_1225(var_39_int);
	int var_31_int;
	var_39_int = var_31_int;
	int var_32_int = 0;
	
	for(;;) {
		bool var_52_bool = false;
		if(var_32_int < 5) {
			bool var_55_bool;
			func_869(var_55_bool);
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
			func_1218(var_66_string, var_67_int);
			@PlayAnimation("all", var_66_string);
			@WaitForAnimEnd(var_36_bool);
			var_68_bool = !var_36_bool; //@nz
			if(var_68_bool == 0) goto Label_821;
			goto Label_832;
			}
				Label_821:
					bool var_59_bool;
					func_835(var_59_bool);
					var_60_bool = !var_59_bool; //@nz
					if(var_60_bool == 0) goto Label_827;
			}
		}
	Label_832:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_827:
		@ResetAAS();
		var_32_int += 1;
	}
	
}


