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
			func_1452();
			if(var_8_bool == 36147) {
				object var_13_object; object var_14_object;
				var_13_object = var_1_object;
				var_14_object = var_0_object;
				func_1602();
			}
			if(var_8_bool == 36151) {
				object var_19_object = var_1_object;
				func_1557(var_0_object);
				object var_68_object; object var_69_object;
				var_68_object = var_1_object;
				var_69_object = var_0_object;
				func_1575();
			}
			if(var_8_bool == 40618) {
				object var_93_object; object var_94_object;
				var_93_object = var_1_object;
				var_94_object = var_0_object;
				func_1608();
			}
			if(var_7_cvector == 15573) {
				bool var_99_bool;
				func_1656(var_1_object);
				if(var_99_bool != 0) {
					object var_105_object; object var_106_object;
					var_105_object = var_1_object;
					var_106_object = var_0_object;
					func_1614();
					func_211(var_8_bool, "Neutral");
					var_0_object->SetMessage(514350); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(514351, 15575, 15574); //@t
					var_0_object->AddReply(538680, 15575, 40578); //@t
					return 0;
				}
				func_211(var_8_bool, "Neutral");
				var_0_object->SetMessage(514514); //@t
				var_0_object->ClearReplies(); //@t
				bool var_130_bool = false;
				bool var_131_bool;
				func_1620(var_1_object);
				if(var_131_bool != 0) {
					bool var_137_bool;
					func_1632(var_1_object);
					if(var_137_bool != 0)
						var_130_bool = true;
				}
				if(var_130_bool != 0)
					var_0_object->AddReply(534506, 40595, 36147); //@t
				bool var_146_bool;
				func_1644(var_1_object);
				if(var_146_bool != 0)
					var_0_object->AddReply(538711, 40619, 40618); //@t
				var_0_object->AddReply(514515, -1, 15754); //@t
				var_0_object->AddReply(538691, -1, 40594); //@t
				return 0;
			}
			if(var_7_cvector == 40619) {
				func_211(var_8_bool, "Neutral");
				var_0_object->SetMessage(538712); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538714, 40622, 40621); //@t
				var_0_object->AddReply(538713, -1, 40620); //@t
				return 0;
			}
			if(var_7_cvector == 40622) {
				func_211(var_8_bool, "Neutral");
				var_0_object->SetMessage(538715); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538716, 40624, 40623); //@t
				return 0;
			}
			if(var_7_cvector == 40624) {
				func_211(var_8_bool, "Neutral");
				var_0_object->SetMessage(538717); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538718, -1, 40625); //@t
				var_0_object->AddReply(538719, -1, 40626); //@t
				return 0;
			}
			if(var_7_cvector == 40595) {
				func_211(var_8_bool, "Neutral");
				var_0_object->SetMessage(538692); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538693, 40616, 40596); //@t
				var_0_object->AddReply(538699, 40604, 40603); //@t
				return 0;
			}
			if(var_7_cvector == 40604) {
				func_211(var_8_bool, "Neutral");
				var_0_object->SetMessage(538700); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538701, 40607, 40605); //@t
				var_0_object->AddReply(538702, 40609, 40606); //@t
				return 0;
			}
			if(var_7_cvector == 40609) {
				func_211(var_8_bool, "Neutral");
				var_0_object->SetMessage(538705); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538707, 40600, 40612); //@t
				var_0_object->AddReply(538708, 40600, 40613); //@t
				return 0;
			}
			if(var_7_cvector == 40607) {
				func_211(var_8_bool, "Neutral");
				var_0_object->SetMessage(538703); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538704, -1, 40608); //@t
				var_0_object->AddReply(538706, 40600, 40610); //@t
				return 0;
			}
			if(var_7_cvector == 40616) {
				func_211(var_8_bool, "Neutral");
				var_0_object->SetMessage(538709); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538710, 40597, 40617); //@t
				return 0;
			}
			if(var_7_cvector == 40597) {
				func_211(var_8_bool, "Neutral");
				var_0_object->SetMessage(538694); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538695, 40600, 40598); //@t
				var_0_object->AddReply(538696, 40600, 40599); //@t
				return 0;
			}
			if(var_7_cvector == 40600) {
				func_211(var_8_bool, "Neutral");
				var_0_object->SetMessage(538697); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538698, 36148, 40602); //@t
				return 0;
			}
			if(var_7_cvector == 36148) {
				func_211(var_8_bool, "Neutral");
				var_0_object->SetMessage(534507); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534508, 36150, 36149); //@t
				return 0;
			}
			if(var_7_cvector == 36150) {
				func_211(var_8_bool, "Neutral");
				var_0_object->SetMessage(534509); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534510, -1, 36151); //@t
				return 0;
			}
			if(var_7_cvector == 15575) {
				func_211(var_8_bool, "Neutral");
				var_0_object->SetMessage(514352); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514353, 15577, 15576); //@t
				var_0_object->AddReply(538679, 15579, 40577); //@t
				return 0;
			}
			if(var_7_cvector == 15577) {
				func_211(var_8_bool, "Neutral");
				var_0_object->SetMessage(514354); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514355, 15579, 15578); //@t
				var_0_object->AddReply(538681, 15581, 40581); //@t
				return 0;
			}
			if(var_7_cvector == 15579) {
				func_211(var_8_bool, "Neutral");
				var_0_object->SetMessage(514356); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514357, 15581, 15580); //@t
				return 0;
			}
			if(var_7_cvector == 15581) {
				func_211(var_8_bool, "Neutral");
				var_0_object->SetMessage(514358); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514359, 15583, 15582); //@t
				var_0_object->AddReply(538682, 15587, 40583); //@t
				return 0;
			}
			if(var_7_cvector == 15583) {
				func_211(var_8_bool, "Neutral");
				var_0_object->SetMessage(514360); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514361, 15585, 15584); //@t
				return 0;
			}
			if(var_7_cvector == 15585) {
				func_211(var_8_bool, "Neutral");
				var_0_object->SetMessage(514362); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514363, 15587, 15586); //@t
				return 0;
			}
			if(var_7_cvector == 15587) {
				func_211(var_8_bool, "Neutral");
				var_0_object->SetMessage(514364); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514365, 15589, 15588); //@t
				var_0_object->AddReply(538683, 40586, 40585); //@t
				var_0_object->AddReply(539687, 41639, 41638); //@t
				return 0;
			}
			if(var_7_cvector == 41639) {
				func_211(var_8_bool, "Neutral");
				var_0_object->SetMessage(539688); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539689, 15589, 41640); //@t
				return 0;
			}
			if(var_7_cvector == 40586) {
				func_211(var_8_bool, "Neutral");
				var_0_object->SetMessage(538684); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538686, 40589, 40588); //@t
				return 0;
			}
			if(var_7_cvector == 40589) {
				func_211(var_8_bool, "Neutral");
				var_0_object->SetMessage(538687); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538688, 40591, 40590); //@t
				return 0;
			}
			if(var_7_cvector == 40591) {
				func_211(var_8_bool, "Neutral");
				var_0_object->SetMessage(538689); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538690, 15589, 40592); //@t
				var_0_object->AddReply(539690, -1, 41642); //@t
				return 0;
			}
			if(var_7_cvector == 15589) {
				func_211(var_8_bool, "Neutral");
				var_0_object->SetMessage(514366); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514367, -1, 15590); //@t
				var_0_object->AddReply(538685, -1, 40587); //@t
				return 0;
			}
			var_3_string = true;
			bool var_371_bool;
			func_1760(var_371_bool);
			if(var_371_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xea";
	
	}

}


maintask task_3
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
	{
		func_914(var_6_bool);
	}

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, string var_7_string)
	{
		bool var_9_bool;
		if(var_7_string == "cleanup") {
			var_1_object = true;
			@IsLoaded(var_9_bool);
			if(!var_9_bool) { //@nz
				object var_13_object;
				func_1459(var_13_object);
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
			func_1459(var_8_object);
			@RemoveActor(var_8_object);
			@Hold();
		}
		func_1024();
	}

	// @pe
		void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
		{
		func_1039();
		}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, int var_7_int)
	{
		if(var_7_int == 10) {
			func_983();
			bool var_11_bool = false;
			bool var_12_bool;
			func_1196(var_12_bool);
			if(var_12_bool != 0) {
				bool var_15_bool;
				func_952(var_15_bool);
				if(var_15_bool != 0)
					var_11_bool = true;
			}
			if(var_11_bool != 0) {
				func_934();
				bool var_50_bool; object var_51_object;
				object var_52_object;
				func_1459(var_52_object);
				var_52_object = var_51_object;
				func_1344(var_50_bool, var_51_object);
			} else {
				func_947(var_7_int);
				func_974();
			}
		}
	
	}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, bool var_7_bool)
	{
		if(var_7_bool != 0)
			func_974();
		else
			func_1424("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, object var_7_object)
	{
		bool var_9_bool;
		@IsOverrideActive(var_9_bool);
		if(!var_9_bool) { //@nz
			disable OnUse;
			func_1164();
			bool var_11_bool; object var_12_object;
			var_7_object = var_12_object;
			func_1187(var_11_bool, var_12_object);
			enable OnUse;
			object var_25_object;
			var_7_object = var_25_object;
			func_865(var_25_object);
			func_1424("Neutral");
			func_983();
			func_974();
		}
	}

}


// @pe
void func_1024(void)
{
	func_1164();
	func_983();
	@lshStopSpeech();
	@lshStopAnimation();
	@StopAsync();
	@Hold();
}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_11_bool;
	func_1196(var_11_bool);
	if(!var_11_bool) goto Label_0; //@nz
}


void func_1540(int var_39_int)
{
	int var_42_int; bool var_43_bool;
	var_42_int = 0;
	
	for(;;) {
		string var_45_string; int var_46_int;
		var_42_int = var_46_int;
		func_1533(var_45_string, var_46_int);
		@HasAnimation(var_43_bool, "all", var_45_string);
		if(!var_43_bool) //@nz
			break;
		var_42_int += 1;
	}
	var_42_int = var_39_int;
}


void func_1668(void)
{
	object var_84_object;
	@CreateDiaryEntry(var_84_object, 690, 2, 534538);
	bool var_88_bool; object var_89_object;
	var_84_object = var_89_object;
	func_1707(var_88_bool, var_89_object, 686);
}
EMIT "Stack[-1] = 0";


void func_1286(bool var_37_bool, object var_38_object)
{
	int var_44_int; int var_45_int;
	@GetVariable("voice_common", var_44_int);
	if(var_44_int != 0) {
		bool var_48_bool; object var_49_object;
		var_38_object = var_49_object;
		func_1344(var_48_bool, var_49_object);
		if(!var_48_bool) { //@nz
			bool var_79_bool; object var_80_object;
			var_38_object = var_80_object;
			func_1381(var_79_bool, var_80_object);
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
		func_1381(var_124_bool, var_125_object);
		if(!var_124_bool) { //@nz
			bool var_127_bool; object var_128_object;
			var_38_object = var_128_object;
			func_1344(var_127_bool, var_128_object);
			if(!var_127_bool) { //@nz
				var_37_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_1342;
	
Label_1342:
	var_37_bool = true;
	
}


void func_1162(bool var_59_bool)
{
	var_59_bool = true;
}


void func_1164(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_13(object var_0_object, int var_26_int, object var_27_object)
{
	var_0_object = var_27_object;
	bool var_37_bool; object var_38_object;
	object var_39_object;
	func_1459(var_39_object);
	var_39_object = var_38_object;
	func_1286(var_37_bool, var_38_object);
	bool var_132_bool; object var_133_object;
	var_27_object = var_133_object;
	func_1201(var_132_bool, var_133_object, 70.0);
	if(!var_132_bool) { //@nz
		var_26_int = -2;
		return 8;
	}
	object var_33_object;
	@CreateDialog(var_33_object);
	int var_179_int;
	func_1754(var_179_int);
	var_33_object->SetNPCName(var_179_int);
	int var_180_int;
	func_1752(var_180_int);
	var_33_object->SetNPCDescription(var_180_int);
	string var_181_string;
	func_1756(var_181_string);
	var_33_object->SetPhoto(var_181_string);
	string var_182_string;
	func_1758(var_182_string);
	var_33_object->SetPhoto2(var_182_string);
	int var_183_int;
	func_1735(var_183_int);
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
		var_276_bool = !var_36_bool; //@nz
		if(var_276_bool == 0) goto Label_83;
		@sync();
		var_33_object->IsDialogEnd(var_36_bool);
	}
	
Label_83:
	object var_277_object;
	var_27_object = var_277_object;
	func_1269();
	@StopDialog(var_33_object);
	var_33_object->GetReturnValue(-1);
	int var_35_int = var_26_int;
}
EMIT "Stack[-4] = 0";


void func_1039(void)
{
	@StopGroup0();
	func_983();
	func_1424("Neutral");
	func_974();
}


void func_1424(string var_14_string)
{
	float var_17_float; float var_18_float;
	@lshGetAnimTimes(var_14_string, var_17_float, var_18_float);
	@lshPlayAnimation(var_17_float, var_18_float, false);
}


void func_1169(float var_22_float, object var_23_object)
{
	cvector var_27_cvector;
	@GetPosition(var_27_cvector);
	cvector var_28_cvector;
	var_23_object->GetPosition(var_28_cvector);
	var_22_float = (var_28_cvector - var_27_cvector) | (var_28_cvector - var_27_cvector);
}


void func_914(object var_0_object)
{
	bool var_7_bool;
	func_1196(var_7_bool);
	if(!var_7_bool) { //@nz
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	func_910();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_1093();
	}
}
EMIT "Return(); Pop(0)";


void func_1681(void)
{
	object var_24_object;
	@CreateDiaryEntry(var_24_object, 689, 2, 534537);
	bool var_28_bool; object var_29_object;
	var_24_object = var_29_object;
	func_1707(var_28_bool, var_29_object, 686);
}
EMIT "Stack[-1] = 0";


// @pe
void func_1557(object var_19_object)
{
	@SetVariable("d11q06KlaraRing", 1);
	func_1681();
	@Trace("d11q06KlaraRing is given");
	object var_47_object;
	var_19_object = var_47_object;
	func_1511(var_47_object, "d11q06KlaraRing", 1);
}


void func_1431(string var_215_string, bool var_216_bool)
{
	float var_221_float; float var_222_float;
	@lshGetAnimTimes(var_215_string, var_221_float, var_222_float);
	@lshPlayAnimation(var_221_float, var_222_float, var_216_bool);
}


void func_1177(bool var_15_bool, cvector var_16_cvector)
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


void func_1437(bool var_71_bool, string var_72_string)
{
	bool var_74_bool;
	bool var_75_bool;
	func_1760(var_75_bool);
	if(var_75_bool != 0) {
		@lshHasSpeech(var_74_bool, var_72_string);
		if(var_74_bool != 0) {
			@lshPlaySpeech(var_72_string);
			var_71_bool = true;
		}
	}
	var_71_bool = false;
}


void func_1694(object var_37_object)
{
	object var_39_object;
	@GetDiaryRoot(var_39_object);
	if(!var_39_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_37_object = false;
	}
	var_39_object = var_37_object;
}
EMIT "Stack[-1] = 0";


void func_1187(bool var_11_bool, object var_12_object)
{
	cvector var_14_cvector;
	var_12_object->GetPosition(var_14_cvector);
	bool var_15_bool; cvector var_16_cvector;
	var_14_cvector = var_16_cvector;
	func_1177(var_15_bool, var_16_cvector);
	var_15_bool = var_11_bool;
}


void func_934(void)
{
	object var_33_object;
	@FindActor(var_33_object, "player");
	if(!var_33_object) { //@nz
	}
	bool var_36_bool; object var_37_object;
	var_33_object = var_37_object;
	func_1187(var_36_bool, var_37_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_1575(void)
{
	bool var_70_bool = false;
	int var_71_int;
	func_1475(var_71_int, "d11q06KapellaRing");
	if(var_71_int != 0) {
		int var_77_int;
		func_1475(var_77_int, "d11q06KlaraRing");
		if(var_77_int != 0)
			var_70_bool = true;
	}
	if(var_70_bool != 0) {
		@SetVariable("d11q06", 2);
		func_1668();
	}
}


void func_1707(bool var_28_bool, object var_29_object, int var_30_int)
{
	object var_37_object;
	func_1694(var_37_object);
	object var_34_object;
	var_37_object = var_34_object;
	object var_35_object;
	var_34_object->Find(var_30_int, var_35_object);
	if(!var_35_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_30_int);
		var_28_bool = false;
	}
	var_35_object->AddChild(var_29_object);
	@SendWorldWndMessage(7);
	int var_36_int;
	var_29_object->GetCategory(var_36_int);
	@SetDiarySection(var_36_int);
	var_28_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_1196(bool var_7_bool)
{
	bool var_9_bool;
	@IsLoaded(var_9_bool);
	var_9_bool = var_7_bool;
}


void func_1452(void)
{
	bool var_10_bool;
	func_1760(var_10_bool);
	if(var_10_bool != 0)
		@lshStopSpeech();
}


void func_1201(bool var_132_bool, object var_133_object, float var_134_float)
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
	func_1465(var_159_cvector, (var_148_cvector ^ [0.0, 1.0, 0.0]));
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
	func_1760(var_174_bool);
	if(var_174_bool != 0) {
	} else {
		@HasAnimationTrack(var_152_bool, "head");
		if(var_152_bool == 0) goto Label_1263;
		@LookAsyncCamera("head");
	}
Label_1263:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_132_bool = true;
	
}


void func_1459(object var_39_object)
{
	object var_41_object;
	@self(var_41_object);
	var_41_object = var_39_object;
}
EMIT "Stack[-1] = 0";


void func_947(object var_0_object)
{
	var_83_float = GetByIndex(var_0_object, 0);
	var_84_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_83_float, var_84_float);
}


void func_952(bool var_15_bool)
{
	object var_18_object;
	@FindActor(var_18_object, "player");
	if(!var_18_object) { //@nz
		var_15_bool = false;
		return 4;
	}
	float var_22_float; object var_23_object;
	func_1169(var_22_float, var_23_object);
	if(var_22_float > 90000.0) {
		var_15_bool = false;
		return 4;
	}
	bool var_19_bool;
	@CanSee(var_19_bool, var_23_object);
	var_19_bool = var_15_bool;
}
EMIT "Stack[-2] = 0";


void func_1465(cvector var_159_cvector, cvector var_160_cvector)
{
	float var_163_float = sqrt(var_160_cvector | var_160_cvector);
	if(var_163_float < 0.000001)
		var_159_cvector = [0.0, 0.0, 0.0];
	var_159_cvector = var_160_cvector / var_163_float;
}


void func_1344(bool var_48_bool, object var_49_object)
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
		func_1437(var_71_bool, var_72_string);
		var_71_bool = var_48_bool;
		return 10;

	}
}


// @pe
void func_1602(void)
{
	@SetVariable("ood11Klara2", 1);
}


void func_1475(int var_201_int, string var_202_string)
{
	int var_204_int;
	@GetVariable(var_202_string, var_204_int);
	var_204_int = var_201_int;
}


void func_1093(void)
{
	bool var_33_bool; int var_34_int; int var_35_int; bool var_36_bool;
	@WaitForAnimEnd();
	bool var_37_bool;
	func_1196(var_37_bool);
	if(!var_37_bool) //@nz
		return 12;
	int var_39_int;
	func_1540(var_39_int);
	int var_31_int;
	var_39_int = var_31_int;
	int var_32_int = 0;
	
	for(;;) {
		bool var_52_bool = false;
		if(var_32_int < 5) {
			bool var_55_bool;
			func_1196(var_55_bool);
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
			func_1533(var_66_string, var_67_int);
			@PlayAnimation("all", var_66_string);
			@WaitForAnimEnd(var_36_bool);
			var_68_bool = !var_36_bool; //@nz
			if(var_68_bool == 0) goto Label_1148;
			goto Label_1159;
			}
				Label_1148:
					bool var_59_bool;
					func_1162(var_59_bool);
					var_60_bool = !var_59_bool; //@nz
					if(var_60_bool == 0) goto Label_1154;
			}
		}
	Label_1159:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_1154:
		@ResetAAS();
		var_32_int += 1;
	}
	
}


void func_1735(int var_183_int)
{
	int var_185_int;
	@GetVariable("branch", var_185_int);
	if(var_185_int == 0) {
		var_183_int = 1;
		return 2;
	EMIT "GOTO 0x6d6";
	}
	if(var_185_int == 1) {
		var_183_int = 2;
		return 2;
	}
	var_183_int = 3;
}


// @pe
void func_1608(void)
{
	@SetVariable("ood11Klara3", 1);
}


void func_1480(int var_63_int, int var_64_int)
{
	object var_66_object;
	@CreateIntVector(var_66_object);
	var_66_object->add(var_63_int);
	var_66_object->add(var_64_int);
	@SendWorldWndMessage(3, var_66_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_1614(void)
{
	@SetVariable("ood11Klara1", 1);
}


void func_974(void)
{
	float var_21_float;
	@rand(var_21_float, 8, 16);
	@SetTimer(10, var_21_float);
}


// @pe
void func_211(object var_2_object, string var_211_string)
{
	bool var_212_bool;
	func_1760(var_212_bool);
	if(!var_212_bool) //@nz
		return 0;
	if(var_211_string == var_2_object)
		return 0;
	string var_215_string; bool var_216_bool;
	var_211_string = var_215_string;
	if(var_211_string == "")
		var_216_bool = false;
	else
		var_216_bool = true;
	func_1431(var_215_string, var_216_bool);
	var_2_object = var_211_string;
	
}


// @pe
void func_1620(bool var_246_bool)
{
	int var_248_int;
	func_1475(var_248_int, "d11q06");
	if(var_248_int == 1)
		var_246_bool = true;
	var_246_bool = false;
}


void func_1492(object var_52_object, object var_53_object, int var_54_int)
{
	int var_58_int;
	var_53_object->GetItemID(var_58_int);
	int var_59_int;
	@GetInvItemProperty(var_59_int, var_58_int, "Category");
	bool var_60_bool;
	var_52_object->AddItem(var_60_bool, var_53_object, var_59_int, var_54_int);
	if(!var_60_bool) { //@nz
		var_52_object->DropItems(var_53_object, var_54_int);
	} else {
		int var_63_int; int var_64_int;
		var_58_int = var_63_int;
		var_54_int = var_64_int;
		func_1480(var_63_int, var_64_int);
	}
	
}


void func_983(void)
{
	@KillTimer(10);
}


void func_1752(int var_180_int)
{
	var_180_int = 515540;
}


void func_1754(int var_179_int)
{
	var_179_int = 502865;
}


void func_1756(string var_181_string)
{
	var_181_string = "ui/NPC_Klara.png";
}


// @pe
void func_94(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_192_object, object var_193_object)
{
	var_0_object = var_193_object;
	var_1_object = var_192_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_199_bool;
		func_1656(var_1_object);
		if(var_199_bool != 0) {
			object var_207_object; object var_208_object;
			var_207_object = var_1_object;
			var_208_object = var_0_object;
			func_1614();
			func_211(var_193_object, "Neutral");
			var_0_object->SetMessage(514350); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(514351, 15575, 15574); //@t
			var_0_object->AddReply(538680, 15575, 40578); //@t
		} else {
					func_211(var_193_object, "Neutral");
					var_0_object->SetMessage(514514); //@t
					var_0_object->ClearReplies(); //@t
					bool var_245_bool = false;
					bool var_246_bool;
					func_1620(var_1_object);
					if(var_246_bool != 0) {
						bool var_252_bool;
						func_1632(var_1_object);
						if(var_252_bool != 0)
							var_245_bool = true;
					}
					if(var_245_bool != 0)
						var_0_object->AddReply(534506, 40595, 36147); //@t
					bool var_261_bool;
					func_1644(var_1_object);
					if(var_261_bool != 0)
						var_0_object->AddReply(538711, 40619, 40618); //@t
					var_0_object->AddReply(514515, -1, 15754); //@t
					var_0_object->AddReply(538691, -1, 40594); //@t
		}
	}
	for(;;) {
		bool var_230_bool;
		func_1760(var_230_bool);
		if(var_230_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_1424(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_210;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_210:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x62";


void func_1758(string var_182_string)
{
	var_182_string = "ui/NPC_Klara_b.png";
}


// @pe
void func_1632(bool var_252_bool)
{
	int var_254_int;
	func_1475(var_254_int, "ood11Klara2");
	if(var_254_int == 0) {
		var_252_bool = true;
		return 0;
	}
	var_252_bool = false;
}


void func_1760(bool var_75_bool)
{
	var_75_bool = true;
}


// @pe
void func_865(object var_25_object)
{
	object var_27_object;
	var_25_object = var_27_object;
	TaskCall(1);
	int var_26_int;
	func_13(var_28_object, var_26_int, var_27_object);
	TaskReturn();
}


void func_1381(bool var_79_bool, object var_80_object)
{
	bool var_88_bool; int var_89_int; string var_90_string;
	int var_92_int;
	func_1524(var_92_int);
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
		func_1437(var_111_bool, var_112_string);
		var_111_bool = var_79_bool;
		return 10;

	}
}


void func_1511(object var_47_object, string var_48_string, int var_49_int)
{
	object var_51_object;
	@CreateInvItem(var_51_object);
	var_51_object->SetItemName(var_48_string);
	object var_52_object; object var_53_object; int var_54_int;
	var_47_object = var_52_object;
	var_51_object = var_53_object;
	var_49_int = var_54_int;
	func_1492(var_52_object, var_53_object, var_54_int);
}
EMIT "Stack[-1] = 0";


// @pe
void func_1644(bool var_261_bool)
{
	int var_263_int;
	func_1475(var_263_int, "ood11Klara3");
	if(var_263_int == 0) {
		var_261_bool = true;
		return 0;
	}
	var_261_bool = false;
}


void func_1524(int var_92_int)
{
	float var_94_float;
	@GetGameTime(var_94_float);
	var_92_int = 1 + (var_94_float / 24);
}


void func_1269(void)
{
	bool var_279_bool;
	@CameraSwitchToNormal();
	bool var_280_bool;
	func_1760(var_280_bool);
	if(var_280_bool != 0) {
	} else {
		@HasAnimationTrack(var_279_bool, "head");
		if(var_279_bool == 0) goto Label_1285;
		@UnlookAsync("head");
	}
Label_1285:
	
}


// @pe
void func_1656(bool var_199_bool)
{
	int var_201_int;
	func_1475(var_201_int, "ood11Klara1");
	if(var_201_int == 0) {
		var_199_bool = true;
		return 0;
	}
	var_199_bool = false;
}


void func_1533(string var_45_string, int var_46_int)
{
	string var_48_string = "idle";
	if(var_46_int != 0)
		var_48_string += var_46_int;
	var_48_string = var_45_string;
}


