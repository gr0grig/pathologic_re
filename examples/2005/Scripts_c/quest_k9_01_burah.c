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
			func_1011();
			if(var_8_bool == 27767) {
				object var_13_object; object var_14_object;
				var_13_object = var_1_object;
				var_14_object = var_0_object;
				func_1072();
				object var_17_object; object var_18_object;
				var_17_object = var_1_object;
				var_18_object = var_0_object;
				func_1078();
				object var_21_object; object var_22_object;
				var_21_object = var_1_object;
				var_22_object = var_0_object;
				func_1084();
			}
			if(var_7_cvector == 27765) {
				func_166(var_8_bool, "Neutral");
				var_0_object->SetMessage(526499); //@t
				var_0_object->ClearReplies(); //@t
				bool var_74_bool = false;
				bool var_75_bool;
				func_1111(var_1_object);
				if(var_75_bool != 0) {
					bool var_81_bool;
					func_1123(var_1_object);
					if(var_81_bool != 0)
						var_74_bool = true;
				}
				if(var_74_bool != 0)
					var_0_object->AddReply(526501, 27768, 27767); //@t
				var_0_object->AddReply(526500, -1, 27766); //@t
				return 0;
			}
			if(var_7_cvector == 27768) {
				func_166(var_8_bool, "Neutral");
				var_0_object->SetMessage(526502); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526503, 30235, 27769); //@t
				var_0_object->AddReply(528825, 30242, 30241); //@t
				return 0;
			}
			if(var_7_cvector == 30242) {
				func_166(var_8_bool, "Neutral");
				var_0_object->SetMessage(528826); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528827, 30235, 30243); //@t
				return 0;
			}
			if(var_7_cvector == 30235) {
				func_166(var_8_bool, "Neutral");
				var_0_object->SetMessage(528819); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528820, 30246, 30236); //@t
				var_0_object->AddReply(528828, 30246, 30245); //@t
				return 0;
			}
			if(var_7_cvector == 30246) {
				func_166(var_8_bool, "Neutral");
				var_0_object->SetMessage(528829); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528830, 30248, 30247); //@t
				var_0_object->AddReply(528833, 30252, 30251); //@t
				return 0;
			}
			if(var_7_cvector == 30252) {
				func_166(var_8_bool, "Neutral");
				var_0_object->SetMessage(528834); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528835, -1, 30253); //@t
				return 0;
			}
			if(var_7_cvector == 30248) {
				func_166(var_8_bool, "Neutral");
				var_0_object->SetMessage(528831); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528832, 30237, 30249); //@t
				return 0;
			}
			if(var_7_cvector == 30237) {
				func_166(var_8_bool, "Neutral");
				var_0_object->SetMessage(528821); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528822, 30239, 30238); //@t
				return 0;
			}
			if(var_7_cvector == 30239) {
				func_166(var_8_bool, "Neutral");
				var_0_object->SetMessage(528823); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528824, -1, 30240); //@t
				return 0;
			}
			var_3_string = true;
			bool var_158_bool;
			func_1214(var_158_bool);
			if(var_158_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xbd";
	
	}

}


maintask task_3
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
	{
		func_470(var_6_bool);
	}

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, string var_7_string)
	{
		bool var_9_bool;
		if(var_7_string == "cleanup") {
			var_1_object = true;
			@IsLoaded(var_9_bool);
			if(!var_9_bool) { //@nz
				object var_13_object;
				func_1018(var_13_object);
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
			func_1018(var_8_object);
			@RemoveActor(var_8_object);
			@Hold();
		}
		func_583();
	}

	// @pe
		void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
		{
		func_598();
		}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, int var_7_int)
	{
		if(var_7_int == 10) {
			func_541();
			bool var_11_bool = false;
			bool var_12_bool;
			func_755(var_12_bool);
			if(var_12_bool != 0) {
				bool var_15_bool;
				func_510(var_15_bool);
				if(var_15_bool != 0)
					var_11_bool = true;
			}
			if(var_11_bool != 0) {
				bool var_32_bool;
				func_490(var_32_bool);
				if(var_32_bool != 0) {
					bool var_51_bool; object var_52_object;
					object var_53_object;
					func_1018(var_53_object);
					var_53_object = var_52_object;
					func_903(var_51_bool, var_52_object);
				}
			} else {
				func_505(var_7_int);
				func_532();
			}
		}
	
	}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, bool var_7_bool)
	{
		if(var_7_bool != 0)
			func_532();
		else
			func_983("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, object var_7_object)
	{
		bool var_9_bool;
		@IsOverrideActive(var_9_bool);
		if(!var_9_bool) { //@nz
			disable OnUse;
			func_723();
			bool var_11_bool; object var_12_object;
			var_7_object = var_12_object;
			func_746(var_11_bool, var_12_object);
			enable OnUse;
			object var_25_object;
			var_7_object = var_25_object;
			func_421(var_25_object);
			func_983("Neutral");
			func_541();
			func_532();
		}
	}

}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_11_bool;
	func_755(var_11_bool);
	if(!var_11_bool) goto Label_0; //@nz
}


void func_1024(cvector var_159_cvector, cvector var_160_cvector)
{
	float var_163_float = sqrt(var_160_cvector | var_160_cvector);
	if(var_163_float < 0.000001)
		var_159_cvector = [0.0, 0.0, 0.0];
	var_159_cvector = var_160_cvector / var_163_float;
}


void func_903(bool var_48_bool, object var_49_object)
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
		func_996(var_71_bool, var_72_string);
		var_71_bool = var_48_bool;
		return 10;

	}
}


void func_1161(bool var_41_bool, object var_42_object, int var_43_int)
{
	object var_50_object;
	func_1148(var_50_object);
	object var_47_object;
	var_50_object = var_47_object;
	object var_48_object;
	var_47_object->Find(var_43_int, var_48_object);
	if(!var_48_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_43_int);
		var_41_bool = false;
	}
	var_48_object->AddChild(var_42_object);
	@SendWorldWndMessage(7);
	int var_49_int;
	var_42_object->GetCategory(var_49_int);
	@SetDiarySection(var_49_int);
	var_41_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_1034(int var_215_int, string var_216_string)
{
	int var_218_int;
	@GetVariable(var_216_string, var_218_int);
	var_218_int = var_215_int;
}


void func_652(void)
{
	bool var_33_bool; int var_34_int; int var_35_int; bool var_36_bool;
	@WaitForAnimEnd();
	bool var_37_bool;
	func_755(var_37_bool);
	if(!var_37_bool) //@nz
		return 12;
	int var_39_int;
	func_1055(var_39_int);
	int var_31_int;
	var_39_int = var_31_int;
	int var_32_int = 0;
	
	for(;;) {
		bool var_52_bool = false;
		if(var_32_int < 5) {
			bool var_55_bool;
			func_755(var_55_bool);
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
			func_1048(var_66_string, var_67_int);
			@PlayAnimation("all", var_66_string);
			@WaitForAnimEnd(var_36_bool);
			var_68_bool = !var_36_bool; //@nz
			if(var_68_bool == 0) goto Label_707;
			goto Label_718;
			}
				Label_707:
					bool var_59_bool;
					func_721(var_59_bool);
					var_60_bool = !var_59_bool; //@nz
					if(var_60_bool == 0) goto Label_713;
			}
		}
	Label_718:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_713:
		@ResetAAS();
		var_32_int += 1;
	}
	
}


void func_13(object var_0_object, int var_26_int, object var_27_object)
{
	var_0_object = var_27_object;
	bool var_37_bool; object var_38_object;
	object var_39_object;
	func_1018(var_39_object);
	var_39_object = var_38_object;
	func_845(var_37_bool, var_38_object);
	bool var_132_bool; object var_133_object;
	var_27_object = var_133_object;
	func_760(var_132_bool, var_133_object, 70.0);
	if(!var_132_bool) { //@nz
		var_26_int = -2;
		return 8;
	}
	object var_33_object;
	@CreateDialog(var_33_object);
	int var_179_int;
	func_1208(var_179_int);
	var_33_object->SetNPCName(var_179_int);
	int var_180_int;
	func_1206(var_180_int);
	var_33_object->SetNPCDescription(var_180_int);
	string var_181_string;
	func_1210(var_181_string);
	var_33_object->SetPhoto(var_181_string);
	string var_182_string;
	func_1212(var_182_string);
	var_33_object->SetPhoto2(var_182_string);
	int var_183_int;
	func_1189(var_183_int);
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
		var_246_bool = !var_36_bool; //@nz
		if(var_246_bool == 0) goto Label_83;
		@sync();
		var_33_object->IsDialogEnd(var_36_bool);
	}
	
Label_83:
	object var_247_object;
	var_27_object = var_247_object;
	func_828();
	@StopDialog(var_33_object);
	var_33_object->GetReturnValue(-1);
	int var_35_int = var_26_int;
}
EMIT "Stack[-4] = 0";


void func_1039(int var_92_int)
{
	float var_94_float;
	@GetGameTime(var_94_float);
	var_92_int = 1 + (var_94_float / 24);
}


void func_532(void)
{
	float var_21_float;
	@rand(var_21_float, 8, 16);
	@SetTimer(10, var_21_float);
}


void func_1048(string var_45_string, int var_46_int)
{
	string var_48_string = "idle";
	if(var_46_int != 0)
		var_48_string += var_46_int;
	var_48_string = var_45_string;
}


void func_541(void)
{
	@KillTimer(10);
}


void func_1055(int var_39_int)
{
	int var_42_int; bool var_43_bool;
	var_42_int = 0;
	
	for(;;) {
		string var_45_string; int var_46_int;
		var_42_int = var_46_int;
		func_1048(var_45_string, var_46_int);
		@HasAnimation(var_43_bool, "all", var_45_string);
		if(!var_43_bool) //@nz
			break;
		var_42_int += 1;
	}
	var_42_int = var_39_int;
}


void func_1189(int var_183_int)
{
	int var_185_int;
	@GetVariable("branch", var_185_int);
	if(var_185_int == 0) {
		var_183_int = 1;
		return 2;
	EMIT "GOTO 0x4b4";
	}
	if(var_185_int == 1) {
		var_183_int = 2;
		return 2;
	}
	var_183_int = 3;
}


// @pe
void func_166(object var_2_object, string var_199_string)
{
	bool var_200_bool;
	func_1214(var_200_bool);
	if(!var_200_bool) //@nz
		return 0;
	if(var_199_string == var_2_object)
		return 0;
	string var_203_string; bool var_204_bool;
	var_199_string = var_203_string;
	if(var_199_string == "")
		var_204_bool = false;
	else
		var_204_bool = true;
	func_990(var_203_string, var_204_bool);
	var_2_object = var_199_string;
	
}


// @pe
void func_421(object var_25_object)
{
	object var_27_object;
	var_25_object = var_27_object;
	TaskCall(1);
	int var_26_int;
	func_13(var_28_object, var_26_int, var_27_object);
	TaskReturn();
}


void func_940(bool var_79_bool, object var_80_object)
{
	bool var_88_bool; int var_89_int; string var_90_string;
	int var_92_int;
	func_1039(var_92_int);
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
		func_996(var_111_bool, var_112_string);
		var_111_bool = var_79_bool;
		return 10;

	}
}


// @pe
void func_1072(void)
{
	@SetVariable("ook9BurahTermitnik2_1", 1);
}


void func_1206(int var_180_int)
{
	var_180_int = 515592;
}


// @pe
void func_1078(void)
{
	@SetVariable("k9q01BurahTalk", 1);
}


void func_1208(int var_179_int)
{
	var_179_int = 511961;
}


void func_1210(string var_181_string)
{
	var_181_string = "ui/NPC_Burah.png";
}


void func_828(void)
{
	bool var_249_bool;
	@CameraSwitchToNormal();
	bool var_250_bool;
	func_1214(var_250_bool);
	if(var_250_bool != 0) {
	} else {
		@HasAnimationTrack(var_249_bool, "head");
		if(var_249_bool == 0) goto Label_844;
		@UnlookAsync("head");
	}
Label_844:
	
}


void func_1212(string var_182_string)
{
	var_182_string = "ui/NPC_Burah_b.png";
}


void func_1214(bool var_75_bool)
{
	var_75_bool = true;
}


// @pe
void func_1084(void)
{
	bool var_23_bool = false;
	int var_24_int;
	func_1034(var_24_int, "k9q01BurahTalk");
	if(var_24_int != 0) {
		int var_30_int;
		func_1034(var_30_int, "k9q01DankoTalk");
		if(var_30_int != 0)
			var_23_bool = true;
	}
	if(var_23_bool != 0) {
		@SetVariable("k9q01", 3);
		func_1135();
	}
}


// @pe
void func_583(void)
{
	func_723();
	func_541();
	@lshStopSpeech();
	@lshStopAnimation();
	@StopAsync();
	@Hold();
}


void func_845(bool var_37_bool, object var_38_object)
{
	int var_44_int; int var_45_int;
	@GetVariable("voice_common", var_44_int);
	if(var_44_int != 0) {
		bool var_48_bool; object var_49_object;
		var_38_object = var_49_object;
		func_903(var_48_bool, var_49_object);
		if(!var_48_bool) { //@nz
			bool var_79_bool; object var_80_object;
			var_38_object = var_80_object;
			func_940(var_79_bool, var_80_object);
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
		func_940(var_124_bool, var_125_object);
		if(!var_124_bool) { //@nz
			bool var_127_bool; object var_128_object;
			var_38_object = var_128_object;
			func_903(var_127_bool, var_128_object);
			if(!var_127_bool) { //@nz
				var_37_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_901;
	
Label_901:
	var_37_bool = true;
	
}


void func_721(bool var_59_bool)
{
	var_59_bool = true;
}


void func_723(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_470(object var_0_object)
{
	bool var_7_bool;
	func_755(var_7_bool);
	if(!var_7_bool) { //@nz
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	func_466();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_652();
	}
}
EMIT "Return(); Pop(0)";


void func_983(string var_14_string)
{
	float var_17_float; float var_18_float;
	@lshGetAnimTimes(var_14_string, var_17_float, var_18_float);
	@lshPlayAnimation(var_17_float, var_18_float, false);
}


// @pe
void func_1111(bool var_213_bool)
{
	int var_215_int;
	func_1034(var_215_int, "k9q01");
	if(var_215_int == 2)
		var_213_bool = true;
	var_213_bool = false;
}


void func_598(void)
{
	@StopGroup0();
	func_541();
	func_983("Neutral");
	func_532();
}


void func_728(float var_22_float, object var_23_object)
{
	cvector var_27_cvector;
	@GetPosition(var_27_cvector);
	cvector var_28_cvector;
	var_23_object->GetPosition(var_28_cvector);
	var_22_float = (var_28_cvector - var_27_cvector) | (var_28_cvector - var_27_cvector);
}


void func_990(string var_203_string, bool var_204_bool)
{
	float var_209_float; float var_210_float;
	@lshGetAnimTimes(var_203_string, var_209_float, var_210_float);
	@lshPlayAnimation(var_209_float, var_210_float, var_204_bool);
}


// @pe
void func_94(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_192_object, object var_193_object)
{
	var_0_object = var_193_object;
	var_1_object = var_192_object;
	var_3_string = false;
	if(1 != 0) {
		func_166(var_193_object, "Neutral");
		var_0_object->SetMessage(526499); //@t
		var_0_object->ClearReplies(); //@t
		bool var_212_bool = false;
		bool var_213_bool;
		func_1111(var_1_object);
		if(var_213_bool != 0) {
			bool var_221_bool;
			func_1123(var_1_object);
			if(var_221_bool != 0)
				var_212_bool = true;
		}
		if(var_212_bool != 0)
			var_0_object->AddReply(526501, 27768, 27767); //@t
		var_0_object->AddReply(526500, -1, 27766); //@t
		goto Label_136;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x62";
	}
Label_136:
	bool var_233_bool;
	func_1214(var_233_bool);
	if(var_233_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_983(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_165;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_165:
		return 0;

	}
	
}


void func_736(bool var_15_bool, cvector var_16_cvector)
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
void func_1123(bool var_221_bool)
{
	int var_223_int;
	func_1034(var_223_int, "ook9BurahTermitnik2_1");
	if(var_223_int == 0) {
		var_221_bool = true;
		return 0;
	}
	var_221_bool = false;
}


void func_996(bool var_71_bool, string var_72_string)
{
	bool var_74_bool;
	bool var_75_bool;
	func_1214(var_75_bool);
	if(var_75_bool != 0) {
		@lshHasSpeech(var_74_bool, var_72_string);
		if(var_74_bool != 0) {
			@lshPlaySpeech(var_72_string);
			var_71_bool = true;
		}
	}
	var_71_bool = false;
}


void func_746(bool var_11_bool, object var_12_object)
{
	cvector var_14_cvector;
	var_12_object->GetPosition(var_14_cvector);
	bool var_15_bool; cvector var_16_cvector;
	var_14_cvector = var_16_cvector;
	func_736(var_15_bool, var_16_cvector);
	var_15_bool = var_11_bool;
}


void func_490(bool var_32_bool)
{
	object var_34_object;
	@FindActor(var_34_object, "player");
	if(!var_34_object) //@nz
		var_32_bool = false;
	bool var_37_bool; object var_38_object;
	var_34_object = var_38_object;
	func_746(var_37_bool, var_38_object);
	var_37_bool = var_32_bool;
}
EMIT "Stack[-1] = 0";


void func_1135(void)
{
	object var_37_object;
	@CreateDiaryEntry(var_37_object, 520, 1, 529812);
	bool var_41_bool; object var_42_object;
	var_37_object = var_42_object;
	func_1161(var_41_bool, var_42_object, 517);
}
EMIT "Stack[-1] = 0";


void func_755(bool var_7_bool)
{
	bool var_9_bool;
	@IsLoaded(var_9_bool);
	var_9_bool = var_7_bool;
}


void func_1011(void)
{
	bool var_10_bool;
	func_1214(var_10_bool);
	if(var_10_bool != 0)
		@lshStopSpeech();
}


void func_760(bool var_132_bool, object var_133_object, float var_134_float)
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
	func_1024(var_159_cvector, (var_148_cvector ^ [0.0, 1.0, 0.0]));
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
	func_1214(var_174_bool);
	if(var_174_bool != 0) {
	} else {
		@HasAnimationTrack(var_152_bool, "head");
		if(var_152_bool == 0) goto Label_822;
		@LookAsyncCamera("head");
	}
Label_822:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_132_bool = true;
	
}


void func_505(object var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0);
	var_85_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_84_float, var_85_float);
}


void func_1018(object var_39_object)
{
	object var_41_object;
	@self(var_41_object);
	var_41_object = var_39_object;
}
EMIT "Stack[-1] = 0";


void func_1148(object var_50_object)
{
	object var_52_object;
	@GetDiaryRoot(var_52_object);
	if(!var_52_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_50_object = false;
	}
	var_52_object = var_50_object;
}
EMIT "Stack[-1] = 0";


void func_510(bool var_15_bool)
{
	object var_18_object;
	@FindActor(var_18_object, "player");
	if(!var_18_object) { //@nz
		var_15_bool = false;
		return 4;
	}
	float var_22_float; object var_23_object;
	func_728(var_22_float, var_23_object);
	if(var_22_float > 90000.0) {
		var_15_bool = false;
		return 4;
	}
	bool var_19_bool;
	@CanSee(var_19_bool, var_23_object);
	var_19_bool = var_15_bool;
}
EMIT "Stack[-2] = 0";


