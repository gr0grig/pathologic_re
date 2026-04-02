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
			func_1135();
			if(var_8_bool == 22583) {
				object var_13_object; object var_14_object;
				var_13_object = var_1_object;
				var_14_object = var_0_object;
				func_1208();
			}
			if(var_8_bool == 25211) {
				object var_42_object; object var_43_object;
				var_42_object = var_1_object;
				var_43_object = var_0_object;
				func_1208();
			}
			if(var_8_bool == 25212) {
				object var_46_object; object var_47_object;
				var_46_object = var_1_object;
				var_47_object = var_0_object;
				func_1208();
			}
			if(var_8_bool == 25197) {
				object var_50_object; object var_51_object;
				var_50_object = var_1_object;
				var_51_object = var_0_object;
				func_1217();
			}
			if(var_8_bool == 25198) {
				object var_68_object; object var_69_object;
				var_68_object = var_1_object;
				var_69_object = var_0_object;
				func_1217();
			}
			if(var_8_bool == 25189) {
				object var_72_object; object var_73_object;
				var_72_object = var_1_object;
				var_73_object = var_0_object;
				func_1217();
			}
			if(var_7_cvector == 22580) {
				func_167(var_8_bool, "Neutral");
				var_0_object->SetMessage(521402); //@t
				var_0_object->ClearReplies(); //@t
				bool var_89_bool;
				func_1227(var_1_object);
				if(var_89_bool != 0)
					var_0_object->AddReply(523899, 25181, 25179); //@t
				bool var_100_bool;
				func_1227(var_1_object);
				if(var_100_bool != 0)
					var_0_object->AddReply(521403, 22582, 22581); //@t
				var_0_object->AddReply(521406, -1, 22584); //@t
				return 0;
			}
			if(var_7_cvector == 22582) {
				func_167(var_8_bool, "Neutral");
				var_0_object->SetMessage(521404); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523900, 25190, 25180); //@t
				var_0_object->AddReply(523911, 25192, 25191); //@t
				var_0_object->AddReply(523909, -1, 25189); //@t
				return 0;
			}
			if(var_7_cvector == 25192) {
				func_167(var_8_bool, "Neutral");
				var_0_object->SetMessage(523912); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523913, 25190, 25193); //@t
				return 0;
			}
			if(var_7_cvector == 25190) {
				func_167(var_8_bool, "Neutral");
				var_0_object->SetMessage(523910); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523914, 25196, 25195); //@t
				return 0;
			}
			if(var_7_cvector == 25196) {
				func_167(var_8_bool, "Neutral");
				var_0_object->SetMessage(523915); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523916, -1, 25197); //@t
				var_0_object->AddReply(523917, -1, 25198); //@t
				return 0;
			}
			if(var_7_cvector == 25181) {
				func_167(var_8_bool, "Neutral");
				var_0_object->SetMessage(523901); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523902, 25183, 25182); //@t
				return 0;
			}
			if(var_7_cvector == 25183) {
				func_167(var_8_bool, "Neutral");
				var_0_object->SetMessage(523903); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523904, 25185, 25184); //@t
				var_0_object->AddReply(523918, 25200, 25199); //@t
				return 0;
			}
			if(var_7_cvector == 25200) {
				func_167(var_8_bool, "Neutral");
				var_0_object->SetMessage(523919); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523920, 25196, 25201); //@t
				return 0;
			}
			if(var_7_cvector == 25185) {
				func_167(var_8_bool, "Neutral");
				var_0_object->SetMessage(523905); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523906, 25187, 25186); //@t
				var_0_object->AddReply(523921, 25204, 25203); //@t
				return 0;
			}
			if(var_7_cvector == 25204) {
				func_167(var_8_bool, "Neutral");
				var_0_object->SetMessage(523922); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523923, 25200, 25205); //@t
				return 0;
			}
			if(var_7_cvector == 25187) {
				func_167(var_8_bool, "Neutral");
				var_0_object->SetMessage(523907); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523924, 25208, 25207); //@t
				var_0_object->AddReply(523926, 25210, 25209); //@t
				return 0;
			}
			if(var_7_cvector == 25210) {
				func_167(var_8_bool, "Neutral");
				var_0_object->SetMessage(523927); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523928, -1, 25211); //@t
				var_0_object->AddReply(523929, -1, 25212); //@t
				return 0;
			}
			if(var_7_cvector == 25208) {
				func_167(var_8_bool, "Neutral");
				var_0_object->SetMessage(523925); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521405, -1, 22583); //@t
				return 0;
			}
			var_3_string = true;
			bool var_213_bool;
			func_1331(var_213_bool);
			if(var_213_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xbe";
	
	}

}


maintask task_3
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
	{
		func_594(var_6_bool);
	}

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, string var_7_string)
	{
		bool var_9_bool;
		if(var_7_string == "cleanup") {
			var_1_object = true;
			@IsLoaded(var_9_bool);
			if(!var_9_bool) { //@nz
				object var_13_object;
				func_1142(var_13_object);
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
			func_1142(var_8_object);
			@RemoveActor(var_8_object);
			@Hold();
		}
		func_707();
	}

	// @pe
		void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
		{
		func_722();
		}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, int var_7_int)
	{
		if(var_7_int == 10) {
			func_665();
			bool var_11_bool = false;
			bool var_12_bool;
			func_879(var_12_bool);
			if(var_12_bool != 0) {
				bool var_15_bool;
				func_634(var_15_bool);
				if(var_15_bool != 0)
					var_11_bool = true;
			}
			if(var_11_bool != 0) {
				bool var_32_bool;
				func_614(var_32_bool);
				if(var_32_bool != 0) {
					bool var_51_bool; object var_52_object;
					object var_53_object;
					func_1142(var_53_object);
					var_53_object = var_52_object;
					func_1027(var_51_bool, var_52_object);
				}
			} else {
				func_629(var_7_int);
				func_656();
			}
		}
	
	}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, bool var_7_bool)
	{
		if(var_7_bool != 0)
			func_656();
		else
			func_1107("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, object var_7_object)
	{
		bool var_9_bool;
		@IsOverrideActive(var_9_bool);
		if(!var_9_bool) { //@nz
			disable OnUse;
			func_847();
			bool var_11_bool; object var_12_object;
			var_7_object = var_12_object;
			func_870(var_11_bool, var_12_object);
			enable OnUse;
			object var_25_object;
			var_7_object = var_25_object;
			func_545(var_25_object);
			func_1107("Neutral");
			func_665();
			func_656();
		}
	}

}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_11_bool;
	func_879(var_11_bool);
	if(!var_11_bool) goto Label_0; //@nz
}


void func_1027(bool var_48_bool, object var_49_object)
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
		func_1120(var_71_bool, var_72_string);
		var_71_bool = var_48_bool;
		return 10;

	}
}


void func_1158(int var_214_int, string var_215_string)
{
	int var_217_int;
	@GetVariable(var_215_string, var_217_int);
	var_217_int = var_214_int;
}


void func_776(void)
{
	bool var_33_bool; int var_34_int; int var_35_int; bool var_36_bool;
	@WaitForAnimEnd();
	bool var_37_bool;
	func_879(var_37_bool);
	if(!var_37_bool) //@nz
		return 12;
	int var_39_int;
	func_1191(var_39_int);
	int var_31_int;
	var_39_int = var_31_int;
	int var_32_int = 0;
	
	for(;;) {
		bool var_52_bool = false;
		if(var_32_int < 5) {
			bool var_55_bool;
			func_879(var_55_bool);
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
			func_1184(var_66_string, var_67_int);
			@PlayAnimation("all", var_66_string);
			@WaitForAnimEnd(var_36_bool);
			var_68_bool = !var_36_bool; //@nz
			if(var_68_bool == 0) goto Label_831;
			goto Label_842;
			}
				Label_831:
					bool var_59_bool;
					func_845(var_59_bool);
					var_60_bool = !var_59_bool; //@nz
					if(var_60_bool == 0) goto Label_837;
			}
		}
	Label_842:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_837:
		@ResetAAS();
		var_32_int += 1;
	}
	
}


void func_1163(bool var_60_bool, string var_61_string, string var_62_string)
{
	object var_64_object;
	@FindActor(var_64_object, var_61_string);
	if(var_64_object == null)
		var_60_bool = false;
	@Trigger(var_64_object, var_62_string);
	var_60_bool = true;
}
EMIT "Stack[-1] = 0";


void func_13(object var_0_object, int var_26_int, object var_27_object)
{
	var_0_object = var_27_object;
	bool var_37_bool; object var_38_object;
	object var_39_object;
	func_1142(var_39_object);
	var_39_object = var_38_object;
	func_969(var_37_bool, var_38_object);
	bool var_132_bool; object var_133_object;
	var_27_object = var_133_object;
	func_884(var_132_bool, var_133_object, 70.0);
	if(!var_132_bool) { //@nz
		var_26_int = -2;
		return 8;
	}
	object var_33_object;
	@CreateDialog(var_33_object);
	int var_179_int;
	func_1325(var_179_int);
	var_33_object->SetNPCName(var_179_int);
	int var_180_int;
	func_1323(var_180_int);
	var_33_object->SetNPCDescription(var_180_int);
	string var_181_string;
	func_1327(var_181_string);
	var_33_object->SetPhoto(var_181_string);
	string var_182_string;
	func_1329(var_182_string);
	var_33_object->SetPhoto2(var_182_string);
	int var_183_int;
	func_1306(var_183_int);
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
		var_244_bool = !var_36_bool; //@nz
		if(var_244_bool == 0) goto Label_83;
		@sync();
		var_33_object->IsDialogEnd(var_36_bool);
	}
	
Label_83:
	object var_245_object;
	var_27_object = var_245_object;
	func_952();
	@StopDialog(var_33_object);
	var_33_object->GetReturnValue(-1);
	int var_35_int = var_26_int;
}
EMIT "Stack[-4] = 0";


void func_656(void)
{
	float var_21_float;
	@rand(var_21_float, 8, 16);
	@SetTimer(10, var_21_float);
}


void func_1175(int var_92_int)
{
	float var_94_float;
	@GetGameTime(var_94_float);
	var_92_int = 1 + (var_94_float / 24);
}


void func_665(void)
{
	@KillTimer(10);
}


void func_1306(int var_183_int)
{
	int var_185_int;
	@GetVariable("branch", var_185_int);
	if(var_185_int == 0) {
		var_183_int = 1;
		return 2;
	EMIT "GOTO 0x529";
	}
	if(var_185_int == 1) {
		var_183_int = 2;
		return 2;
	}
	var_183_int = 3;
}


void func_1184(string var_45_string, int var_46_int)
{
	string var_48_string = "idle";
	if(var_46_int != 0)
		var_48_string += var_46_int;
	var_48_string = var_45_string;
}


// @pe
void func_545(object var_25_object)
{
	object var_27_object;
	var_25_object = var_27_object;
	TaskCall(1);
	int var_26_int;
	func_13(var_28_object, var_26_int, var_27_object);
	TaskReturn();
}


// @pe
void func_167(object var_2_object, string var_199_string)
{
	bool var_200_bool;
	func_1331(var_200_bool);
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
	func_1114(var_203_string, var_204_bool);
	var_2_object = var_199_string;
	
}


void func_1191(int var_39_int)
{
	int var_42_int; bool var_43_bool;
	var_42_int = 0;
	
	for(;;) {
		string var_45_string; int var_46_int;
		var_42_int = var_46_int;
		func_1184(var_45_string, var_46_int);
		@HasAnimation(var_43_bool, "all", var_45_string);
		if(!var_43_bool) //@nz
			break;
		var_42_int += 1;
	}
	var_42_int = var_39_int;
}


void func_1064(bool var_79_bool, object var_80_object)
{
	bool var_88_bool; int var_89_int; string var_90_string;
	int var_92_int;
	func_1175(var_92_int);
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
		func_1120(var_111_bool, var_112_string);
		var_111_bool = var_79_bool;
		return 10;

	}
}


void func_1323(int var_180_int)
{
	var_180_int = 515540;
}


void func_1325(int var_179_int)
{
	var_179_int = 502865;
}


void func_1327(string var_181_string)
{
	var_181_string = "ui/NPC_Klara.png";
}


void func_1329(string var_182_string)
{
	var_182_string = "ui/NPC_Klara_b.png";
}


void func_1331(bool var_75_bool)
{
	var_75_bool = true;
}


void func_952(void)
{
	bool var_247_bool;
	@CameraSwitchToNormal();
	bool var_248_bool;
	func_1331(var_248_bool);
	if(var_248_bool != 0) {
	} else {
		@HasAnimationTrack(var_247_bool, "head");
		if(var_247_bool == 0) goto Label_968;
		@UnlookAsync("head");
	}
Label_968:
	
}


// @pe
void func_1208(void)
{
	@SetVariable("b8q01", 3);
	func_1252();
}


// @pe
void func_1217(void)
{
	func_1239();
	bool var_60_bool;
	func_1163(var_60_bool, "quest_b8_01", "fail");
}


// @pe
void func_707(void)
{
	func_847();
	func_665();
	@lshStopSpeech();
	@lshStopAnimation();
	@StopAsync();
	@Hold();
}


void func_969(bool var_37_bool, object var_38_object)
{
	int var_44_int; int var_45_int;
	@GetVariable("voice_common", var_44_int);
	if(var_44_int != 0) {
		bool var_48_bool; object var_49_object;
		var_38_object = var_49_object;
		func_1027(var_48_bool, var_49_object);
		if(!var_48_bool) { //@nz
			bool var_79_bool; object var_80_object;
			var_38_object = var_80_object;
			func_1064(var_79_bool, var_80_object);
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
		func_1064(var_124_bool, var_125_object);
		if(!var_124_bool) { //@nz
			bool var_127_bool; object var_128_object;
			var_38_object = var_128_object;
			func_1027(var_127_bool, var_128_object);
			if(!var_127_bool) { //@nz
				var_37_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_1025;
	
Label_1025:
	var_37_bool = true;
	
}


// @pe
void func_1227(bool var_212_bool)
{
	int var_214_int;
	func_1158(var_214_int, "b8q01");
	if(var_214_int == 2)
		var_212_bool = true;
	var_212_bool = false;
}


void func_845(bool var_59_bool)
{
	var_59_bool = true;
}


void func_847(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_594(object var_0_object)
{
	bool var_7_bool;
	func_879(var_7_bool);
	if(!var_7_bool) { //@nz
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	func_590();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_776();
	}
}
EMIT "Return(); Pop(0)";


void func_1107(string var_14_string)
{
	float var_17_float; float var_18_float;
	@lshGetAnimTimes(var_14_string, var_17_float, var_18_float);
	@lshPlayAnimation(var_17_float, var_18_float, false);
}


void func_722(void)
{
	@StopGroup0();
	func_665();
	func_1107("Neutral");
	func_656();
}


void func_852(float var_22_float, object var_23_object)
{
	cvector var_27_cvector;
	@GetPosition(var_27_cvector);
	cvector var_28_cvector;
	var_23_object->GetPosition(var_28_cvector);
	var_22_float = (var_28_cvector - var_27_cvector) | (var_28_cvector - var_27_cvector);
}


void func_1239(void)
{
	object var_53_object;
	@CreateDiaryEntry(var_53_object, 693, 1, 535229);
	bool var_57_bool; object var_58_object;
	var_53_object = var_58_object;
	func_1278(var_57_bool, var_58_object, 284);
}
EMIT "Stack[-1] = 0";


void func_1114(string var_203_string, bool var_204_bool)
{
	float var_209_float; float var_210_float;
	@lshGetAnimTimes(var_203_string, var_209_float, var_210_float);
	@lshPlayAnimation(var_209_float, var_210_float, var_204_bool);
}


void func_860(bool var_15_bool, cvector var_16_cvector)
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
void func_94(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_192_object, object var_193_object)
{
	var_0_object = var_193_object;
	var_1_object = var_192_object;
	var_3_string = false;
	if(1 != 0) {
		func_167(var_193_object, "Neutral");
		var_0_object->SetMessage(521402); //@t
		var_0_object->ClearReplies(); //@t
		bool var_212_bool;
		func_1227(var_1_object);
		if(var_212_bool != 0)
			var_0_object->AddReply(523899, 25181, 25179); //@t
		bool var_223_bool;
		func_1227(var_1_object);
		if(var_223_bool != 0)
			var_0_object->AddReply(521403, 22582, 22581); //@t
		var_0_object->AddReply(521406, -1, 22584); //@t
		goto Label_137;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x62";
	}
Label_137:
	bool var_231_bool;
	func_1331(var_231_bool);
	if(var_231_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1107(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_166;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_166:
		return 0;

	}
	
}


void func_1120(bool var_71_bool, string var_72_string)
{
	bool var_74_bool;
	bool var_75_bool;
	func_1331(var_75_bool);
	if(var_75_bool != 0) {
		@lshHasSpeech(var_74_bool, var_72_string);
		if(var_74_bool != 0) {
			@lshPlaySpeech(var_72_string);
			var_71_bool = true;
		}
	}
	var_71_bool = false;
}


void func_1252(void)
{
	object var_18_object;
	@CreateDiaryEntry(var_18_object, 287, 1, 521458);
	bool var_22_bool; object var_23_object;
	var_18_object = var_23_object;
	func_1278(var_22_bool, var_23_object, 284);
}
EMIT "Stack[-1] = 0";


void func_870(bool var_11_bool, object var_12_object)
{
	cvector var_14_cvector;
	var_12_object->GetPosition(var_14_cvector);
	bool var_15_bool; cvector var_16_cvector;
	var_14_cvector = var_16_cvector;
	func_860(var_15_bool, var_16_cvector);
	var_15_bool = var_11_bool;
}


void func_614(bool var_32_bool)
{
	object var_34_object;
	@FindActor(var_34_object, "player");
	if(!var_34_object) //@nz
		var_32_bool = false;
	bool var_37_bool; object var_38_object;
	var_34_object = var_38_object;
	func_870(var_37_bool, var_38_object);
	var_37_bool = var_32_bool;
}
EMIT "Stack[-1] = 0";


void func_879(bool var_7_bool)
{
	bool var_9_bool;
	@IsLoaded(var_9_bool);
	var_9_bool = var_7_bool;
}


void func_1135(void)
{
	bool var_10_bool;
	func_1331(var_10_bool);
	if(var_10_bool != 0)
		@lshStopSpeech();
}


void func_1265(object var_31_object)
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


void func_884(bool var_132_bool, object var_133_object, float var_134_float)
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
	func_1148(var_159_cvector, (var_148_cvector ^ [0.0, 1.0, 0.0]));
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
	func_1331(var_174_bool);
	if(var_174_bool != 0) {
	} else {
		@HasAnimationTrack(var_152_bool, "head");
		if(var_152_bool == 0) goto Label_946;
		@LookAsyncCamera("head");
	}
Label_946:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_132_bool = true;
	
}


void func_629(object var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0);
	var_85_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_84_float, var_85_float);
}


void func_1142(object var_39_object)
{
	object var_41_object;
	@self(var_41_object);
	var_41_object = var_39_object;
}
EMIT "Stack[-1] = 0";


void func_634(bool var_15_bool)
{
	object var_18_object;
	@FindActor(var_18_object, "player");
	if(!var_18_object) { //@nz
		var_15_bool = false;
		return 4;
	}
	float var_22_float; object var_23_object;
	func_852(var_22_float, var_23_object);
	if(var_22_float > 90000.0) {
		var_15_bool = false;
		return 4;
	}
	bool var_19_bool;
	@CanSee(var_19_bool, var_23_object);
	var_19_bool = var_15_bool;
}
EMIT "Stack[-2] = 0";


void func_1148(cvector var_159_cvector, cvector var_160_cvector)
{
	float var_163_float = sqrt(var_160_cvector | var_160_cvector);
	if(var_163_float < 0.000001)
		var_159_cvector = [0.0, 0.0, 0.0];
	var_159_cvector = var_160_cvector / var_163_float;
}


void func_1278(bool var_22_bool, object var_23_object, int var_24_int)
{
	object var_31_object;
	func_1265(var_31_object);
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


