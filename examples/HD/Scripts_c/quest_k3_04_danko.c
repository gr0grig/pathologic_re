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
			func_1254();
			if(var_8_bool == 26986) {
				object var_13_object; object var_14_object;
				var_13_object = var_1_object;
				var_14_object = var_0_object;
				func_1409();
				object var_50_object = var_1_object;
				func_1428(var_0_object);
				object var_71_object = var_1_object;
				func_1460(var_0_object);
				object var_92_object; object var_93_object;
				var_92_object = var_1_object;
				var_93_object = var_0_object;
				func_1438();
			}
			if(var_8_bool == 41106) {
				object var_98_object; object var_99_object;
				var_98_object = var_1_object;
				var_99_object = var_0_object;
				func_1409();
				object var_100_object = var_1_object;
				func_1428(var_0_object);
				object var_102_object; object var_103_object;
				var_102_object = var_1_object;
				var_103_object = var_0_object;
				func_1438();
				object var_104_object = var_1_object;
				func_1460(var_0_object);
			}
			if(var_8_bool == 26985) {
				object var_108_object; object var_109_object;
				var_108_object = var_1_object;
				var_109_object = var_0_object;
				func_1399();
			}
			if(var_8_bool == 41103) {
				object var_123_object; object var_124_object;
				var_123_object = var_1_object;
				var_124_object = var_0_object;
				func_1399();
			}
			if(var_8_bool == 41102) {
				object var_127_object; object var_128_object;
				var_127_object = var_1_object;
				var_128_object = var_0_object;
				func_1399();
			}
			if(var_8_bool == 41122) {
				object var_131_object; object var_132_object;
				var_131_object = var_1_object;
				var_132_object = var_0_object;
				func_1390();
			}
			if(var_8_bool == 43720) {
				object var_145_object; object var_146_object;
				var_145_object = var_1_object;
				var_146_object = var_0_object;
				func_1390();
			}
			if(var_8_bool == 26973) {
				object var_149_object; object var_150_object;
				var_149_object = var_1_object;
				var_150_object = var_0_object;
				func_1390();
			}
			if(var_8_bool == 41121) {
				object var_153_object; object var_154_object;
				var_153_object = var_1_object;
				var_154_object = var_0_object;
				func_1390();
			}
			if(var_8_bool == 41110) {
				object var_157_object; object var_158_object;
				var_157_object = var_1_object;
				var_158_object = var_0_object;
				func_1450();
			}
			if(var_7_cvector == 26984) {
				bool var_172_bool;
				func_1483(var_1_object);
				if(var_172_bool != 0) {
					func_189(var_8_bool, "Neutral");
					var_0_object->SetMessage(525642); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(525640, 26983, 26982); //@t
					var_0_object->AddReply(539159, 41099, 41098); //@t
					return 0;
				}
				bool var_204_bool;
				func_1471(var_1_object);
				if(var_204_bool != 0) {
					object var_210_object; object var_211_object;
					var_210_object = var_1_object;
					var_211_object = var_0_object;
					func_1444();
					func_189(var_8_bool, "Neutral");
					var_0_object->SetMessage(525624); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(525625, 41108, 26967); //@t
					return 0;
				}
				func_189(var_8_bool, "Neutral");
				var_0_object->SetMessage(525632); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525633, -1, 26975); //@t
				var_0_object->AddReply(539168, -1, 41107); //@t
				return 0;
			}
			if(var_7_cvector == 41108) {
				func_189(var_8_bool, "Menace");
				var_0_object->SetMessage(539169); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539170, 41111, 41109); //@t
				var_0_object->AddReply(539171, -1, 41110); //@t
				return 0;
			}
			if(var_7_cvector == 41111) {
				func_189(var_8_bool, "Untrust");
				var_0_object->SetMessage(539172); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539173, 26968, 41112); //@t
				bool var_244_bool;
				func_1495(var_1_object);
				if(var_244_bool != 0)
					var_0_object->AddReply(539174, 26968, 41113); //@t
				return 0;
			}
			if(var_7_cvector == 26968) {
				func_189(var_8_bool, "Untrust");
				var_0_object->SetMessage(525626); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539175, 41116, 41115); //@t
				var_0_object->AddReply(539177, 41118, 41117); //@t
				return 0;
			}
			if(var_7_cvector == 41118) {
				func_189(var_8_bool, "Neutral");
				var_0_object->SetMessage(539178); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539179, 41116, 41119); //@t
				var_0_object->AddReply(539180, -1, 41121); //@t
				return 0;
			}
			if(var_7_cvector == 41116) {
				func_189(var_8_bool, "Menace");
				var_0_object->SetMessage(539176); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525627, 26970, 26969); //@t
				var_0_object->AddReply(525631, -1, 26973); //@t
				return 0;
			}
			if(var_7_cvector == 26970) {
				func_189(var_8_bool, "Menace");
				var_0_object->SetMessage(525628); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539181, -1, 41122); //@t
				var_0_object->AddReply(541553, -1, 43720); //@t
				return 0;
			}
			if(var_7_cvector == 41099) {
				func_189(var_8_bool, "Untrust");
				var_0_object->SetMessage(539160); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539161, 41101, 41100); //@t
				var_0_object->AddReply(539163, -1, 41102); //@t
				return 0;
			}
			if(var_7_cvector == 41101) {
				func_189(var_8_bool, "Menace");
				var_0_object->SetMessage(539162); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525643, -1, 26985); //@t
				var_0_object->AddReply(539164, -1, 41103); //@t
				return 0;
			}
			if(var_7_cvector == 26983) {
				func_189(var_8_bool, "Smile");
				var_0_object->SetMessage(525641); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525644, -1, 26986); //@t
				var_0_object->AddReply(539165, 41105, 41104); //@t
				return 0;
			}
			if(var_7_cvector == 41105) {
				func_189(var_8_bool, "Smile");
				var_0_object->SetMessage(539166); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539167, -1, 41106); //@t
				return 0;
			}
			var_3_string = true;
			bool var_330_bool;
			func_1625(var_330_bool);
			if(var_330_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xd4";
	
	}

}


maintask task_2
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
	{
		func_692(var_6_bool);
	}

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, string var_7_string)
	{
		bool var_9_bool;
		if(var_7_string == "cleanup") {
			var_1_object = true;
			@IsLoaded(var_9_bool);
			if(!var_9_bool) { //@nz
				object var_13_object;
				func_1261(var_13_object);
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
			func_1261(var_8_object);
			@RemoveActor(var_8_object);
			@Hold();
		}
		func_799();
	}

	// @pe
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
	{
		func_814();
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, int var_7_int)
	{
		if(var_7_int == 10) {
			func_757();
			bool var_11_bool = false;
			bool var_12_bool;
			func_978(var_12_bool);
			if(var_12_bool != 0) {
				bool var_15_bool;
				func_726(var_15_bool);
				if(var_15_bool != 0)
					var_11_bool = true;
			}
			if(var_11_bool != 0) {
				bool var_32_bool;
				func_706(var_32_bool);
				if(var_32_bool != 0) {
					bool var_51_bool; object var_52_object;
					object var_53_object;
					func_1261(var_53_object);
					var_53_object = var_52_object;
					func_1128(var_51_bool, var_52_object);
				}
			} else {
				func_721(var_7_int);
				func_748();
			}
		}
	
	}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, bool var_7_bool)
	{
		if(var_7_bool != 0)
			func_748();
		else
			func_1208("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, object var_7_object)
	{
		bool var_9_bool;
		@IsOverrideActive(var_9_bool);
		if(!var_9_bool) { //@nz
			disable OnUse;
			func_939();
			bool var_11_bool; object var_12_object;
			var_7_object = var_12_object;
			func_969(var_11_bool, var_12_object);
			enable OnUse;
			object var_25_object;
			var_7_object = var_25_object;
			func_643(var_25_object);
			func_1208("Neutral");
			func_757();
			func_748();
		}
	}

}


void func_0(object var_0_object, int var_26_int, object var_27_object)
{
	var_0_object = var_27_object;
	bool var_37_bool; object var_38_object;
	var_27_object = var_38_object;
	func_983(var_37_bool, var_38_object, 70.0);
	if(!var_37_bool) { //@nz
		var_26_int = -2;
		return 8;
	}
	object var_33_object;
	@CreateDialog(var_33_object);
	int var_85_int;
	func_1619(var_85_int);
	var_33_object->SetNPCName(var_85_int);
	int var_86_int;
	func_1617(var_86_int);
	var_33_object->SetNPCDescription(var_86_int);
	string var_87_string;
	func_1621(var_87_string);
	var_33_object->SetPhoto(var_87_string);
	string var_88_string;
	func_1623(var_88_string);
	var_33_object->SetPhoto2(var_88_string);
	int var_89_int;
	func_1600(var_89_int);
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
	func_1261(var_100_object);
	var_100_object = var_99_object;
	func_1070(var_98_bool, var_99_object);
	object var_193_object; object var_194_object;
	var_27_object = var_193_object;
	var_33_object = var_194_object;
	TaskCall(1);
	func_81(var_195_object, var_196_object, var_197_string, var_198_bool, var_193_object, var_194_object);
	TaskReturn();
	bool var_36_bool;
	var_33_object->IsDialogEnd(var_36_bool);
	
	for(;;) {
		var_273_bool = !var_36_bool; //@nz
		if(var_273_bool == 0) goto Label_70;
		@sync();
		var_33_object->IsDialogEnd(var_36_bool);
	}
	
Label_70:
	object var_274_object;
	var_27_object = var_274_object;
	func_1052();
	@StopDialog(var_33_object);
	var_33_object->GetReturnValue(-1);
	int var_35_int = var_26_int;
}
EMIT "Stack[-4] = 0";


void func_1409(void)
{
	func_1507();
	bool var_40_bool;
	func_1345(var_40_bool, "quest_k3_04", "completed");
	int var_16_int;
	@GetVariable("k3q04Promise", var_16_int);
	if(var_16_int != 0)
		@SetVariable("k3q04SendBurahMail", 1);
}


void func_1282(int var_66_int, int var_67_int)
{
	object var_69_object;
	@CreateIntVector(var_69_object);
	var_69_object->add(var_66_int);
	var_69_object->add(var_67_int);
	@SendWorldWndMessage(3, var_69_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_643(object var_25_object)
{
	object var_27_object;
	var_25_object = var_27_object;
	TaskCall(0);
	int var_26_int;
	func_0(var_28_object, var_26_int, var_27_object);
	TaskReturn();
}


void func_1546(void)
{
	object var_136_object;
	@CreateDiaryEntry(var_136_object, 356, 2, 525656);
	bool var_140_bool; object var_141_object;
	var_136_object = var_141_object;
	func_1572(var_140_bool, var_141_object, 354);
}
EMIT "Stack[-1] = 0";


void func_1165(bool var_140_bool, object var_141_object)
{
	bool var_149_bool; int var_150_int; string var_151_string;
	int var_153_int;
	func_1357(var_153_int);
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
		func_1239(var_172_bool, var_173_string);
		var_172_bool = var_140_bool;
		return 10;

	}
}


void func_1294(object var_53_object, int var_54_int)
{
	int var_56_int;
	object var_57_object;
	var_53_object = var_57_object;
	int var_59_int;
	func_952(var_57_object, "money", var_59_int);
	if(var_59_int > 0) {
		@GetInvItemByName(var_56_int, "Money");
		int var_66_int; int var_67_int;
		var_56_int = var_66_int;
		var_54_int = var_67_int;
		func_1282(var_66_int, var_67_int);
	}
}


// @pe
void func_1428(object var_50_object)
{
	@Trace("money2000 is given");
	object var_53_object;
	var_50_object = var_53_object;
	func_1294(var_53_object, 2000);
}


void func_1559(object var_31_object)
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


void func_1052(void)
{
	bool var_276_bool;
	@CameraSwitchToNormal(true);
	bool var_278_bool;
	func_1625(var_278_bool);
	if(var_278_bool != 0) {
	} else {
		@HasAnimationTrack(var_276_bool, "head");
		if(var_276_bool == 0) goto Label_1069;
		@UnlookAsync("head");
	}
Label_1069:
	
}


// @pe
void func_1438(void)
{
	@TriggerWorld("playsound", "givemoney");
}


// @pe
void func_799(void)
{
	func_939();
	func_757();
	@lshStopSpeech();
	@lshStopAnimation();
	@StopAsync();
	@Hold();
}


void func_1313(object var_79_object, object var_80_object, int var_81_int)
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
		func_1282(var_90_int, var_91_int);
	}
	
}


void func_1533(void)
{
	object var_160_object;
	@CreateDiaryEntry(var_160_object, 784, 2, 542469);
	bool var_164_bool; object var_165_object;
	var_160_object = var_165_object;
	func_1572(var_164_bool, var_165_object, 354);
}
EMIT "Stack[-1] = 0";


// @pe
void func_1444(void)
{
	@SetVariable("k3q04SawDanko", 1);
}


void func_1572(bool var_22_bool, object var_23_object, int var_24_int)
{
	object var_31_object;
	func_1559(var_31_object);
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


void func_937(bool var_45_bool)
{
	var_45_bool = true;
}


// @pe
void func_1450(void)
{
	func_1533();
	bool var_167_bool;
	func_1345(var_167_bool, "quest_k3_04", "fail");
}


void func_939(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_1070(bool var_98_bool, object var_99_object)
{
	int var_105_int; int var_106_int;
	@GetVariable("voice_common", var_105_int);
	if(var_105_int != 0) {
		bool var_109_bool; object var_110_object;
		var_99_object = var_110_object;
		func_1128(var_109_bool, var_110_object);
		if(!var_109_bool) { //@nz
			bool var_140_bool; object var_141_object;
			var_99_object = var_141_object;
			func_1165(var_140_bool, var_141_object);
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
		func_1165(var_185_bool, var_186_object);
		if(!var_185_bool) { //@nz
			bool var_188_bool; object var_189_object;
			var_99_object = var_189_object;
			func_1128(var_188_bool, var_189_object);
			if(!var_188_bool) { //@nz
				var_98_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_1126;
	
Label_1126:
	var_98_bool = true;
	
}


void func_814(void)
{
	@StopGroup0();
	func_757();
	func_1208("Neutral");
	func_748();
}


void func_944(float var_22_float, object var_23_object)
{
	cvector var_27_cvector;
	@GetPosition(var_27_cvector);
	cvector var_28_cvector;
	var_23_object->GetPosition(var_28_cvector);
	var_22_float = (var_28_cvector - var_27_cvector) | (var_28_cvector - var_27_cvector);
}


// @pe
void func_1460(object var_71_object)
{
	@Trace("neomicin is given");
	object var_74_object;
	var_71_object = var_74_object;
	func_1332(var_74_object, "neomicin", 1);
}


void func_692(object var_0_object)
{
	bool var_7_bool;
	func_978(var_7_bool);
	if(!var_7_bool) //@nz
		@Hold();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_868();
	}
}
EMIT "Return(); Pop(0)";


void func_1332(object var_74_object, string var_75_string, int var_76_int)
{
	object var_78_object;
	@CreateInvItem(var_78_object);
	var_78_object->SetItemName(var_75_string);
	object var_79_object; object var_80_object; int var_81_int;
	var_74_object = var_79_object;
	var_78_object = var_80_object;
	var_76_int = var_81_int;
	func_1313(var_79_object, var_80_object, var_81_int);
}
EMIT "Stack[-1] = 0";


void func_1208(string var_234_string)
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


void func_952(object var_57_object, string var_58_string, int var_59_int)
{
	int var_61_int;
	var_57_object->GetProperty(var_58_string, var_61_int);
	var_57_object->SetProperty(var_58_string, (var_61_int + var_59_int));
}


// @pe
void func_189(object var_2_object, string var_208_string)
{
	bool var_209_bool;
	func_1625(var_209_bool);
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
	func_1224(var_212_string, var_213_bool);
	var_2_object = var_208_string;
	
}


// @pe
void func_1471(bool var_250_bool)
{
	int var_252_int;
	func_1277(var_252_int, "k3q04");
	if(var_252_int == 1)
		var_250_bool = true;
	var_250_bool = false;
}


void func_1600(int var_89_int)
{
	int var_91_int;
	@GetVariable("branch", var_91_int);
	if(var_91_int == 0) {
		var_89_int = 1;
		return 2;
	EMIT "GOTO 0x64f";
	}
	if(var_91_int == 1) {
		var_89_int = 2;
		return 2;
	}
	var_89_int = 3;
}


void func_959(bool var_15_bool, cvector var_16_cvector)
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


void func_706(bool var_32_bool)
{
	object var_34_object;
	@FindActor(var_34_object, "player");
	if(!var_34_object) //@nz
		var_32_bool = false;
	bool var_37_bool; object var_38_object;
	var_34_object = var_38_object;
	func_969(var_37_bool, var_38_object);
	var_37_bool = var_32_bool;
}
EMIT "Stack[-1] = 0";


void func_1345(bool var_40_bool, string var_41_string, string var_42_string)
{
	object var_44_object;
	@FindActor(var_44_object, var_41_string);
	if(var_44_object == null)
		var_40_bool = false;
	@Trigger(var_44_object, var_42_string);
	var_40_bool = true;
}
EMIT "Stack[-1] = 0";


void func_1224(string var_212_string, bool var_213_bool)
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


void func_969(bool var_11_bool, object var_12_object)
{
	cvector var_14_cvector;
	var_12_object->GetPosition(var_14_cvector);
	bool var_15_bool; cvector var_16_cvector;
	var_14_cvector = var_16_cvector;
	func_959(var_15_bool, var_16_cvector);
	var_15_bool = var_11_bool;
}


// @pe
void func_1483(bool var_200_bool)
{
	int var_202_int;
	func_1277(var_202_int, "k3q04");
	if(var_202_int == 3)
		var_200_bool = true;
	var_200_bool = false;
}


void func_1357(int var_153_int)
{
	float var_155_float;
	@GetGameTime(var_155_float);
	var_153_int = 1 + (var_155_float / 24);
}


void func_721(object var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0);
	var_85_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_84_float, var_85_float);
}


void func_1617(int var_86_int)
{
	var_86_int = 515573;
}


// @pe
void func_81(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_193_object, object var_194_object)
{
	var_0_object = var_194_object;
	var_1_object = var_193_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_200_bool;
		func_1483(var_1_object);
		if(var_200_bool != 0) {
			func_189(var_194_object, "Neutral");
			var_0_object->SetMessage(525642); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(525640, 26983, 26982); //@t
			var_0_object->AddReply(539159, 41099, 41098); //@t
		} else {
					bool var_250_bool;
					func_1471(var_1_object);
					if(var_250_bool == 0) goto Label_137;
					object var_256_object; object var_257_object;
					var_256_object = var_1_object;
					var_257_object = var_0_object;
					func_1444();
					func_189(var_194_object, "Neutral");
					var_0_object->SetMessage(525624); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(525625, 41108, 26967); //@t
		}
	}
Label_159:
	for(;;) {
		bool var_232_bool;
		func_1625(var_232_bool);
		if(var_232_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_1208(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_188;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_188:
			return 0;

		}

	}
	
Label_137:
	func_189(var_194_object, "Neutral");
	var_0_object->SetMessage(525632); //@t
	var_0_object->ClearReplies(); //@t
	var_0_object->AddReply(525633, -1, 26975); //@t
	var_0_object->AddReply(539168, -1, 41107); //@t
	goto Label_159;
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


void func_1619(int var_85_int)
{
	var_85_int = 504032;
}


void func_978(bool var_7_bool)
{
	bool var_9_bool;
	@IsLoaded(var_9_bool);
	var_9_bool = var_7_bool;
}


void func_1621(string var_87_string)
{
	var_87_string = "ui/NPC_Bakalavr.png";
}


void func_726(bool var_15_bool)
{
	object var_18_object;
	@FindActor(var_18_object, "player");
	if(!var_18_object) { //@nz
		var_15_bool = false;
		return 4;
	}
	float var_22_float; object var_23_object;
	func_944(var_22_float, var_23_object);
	if(var_22_float > 90000.0) {
		var_15_bool = false;
		return 4;
	}
	bool var_19_bool;
	@CanSee(var_19_bool, var_23_object);
	var_19_bool = var_15_bool;
}
EMIT "Stack[-2] = 0";


void func_983(bool var_37_bool, object var_38_object, float var_39_float)
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
	func_1267(var_64_cvector, (var_53_cvector ^ [0.0, 1.0, 0.0]));
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
	func_1625(var_80_bool);
	if(var_80_bool != 0) {
	} else {
		@HasAnimationTrack(var_57_bool, "head");
		if(var_57_bool == 0) goto Label_1046;
		@LookAsyncCamera("head");
	}
Label_1046:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_37_bool = true;
	
}


void func_1623(string var_88_string)
{
	var_88_string = "ui/NPC_Bakalavr_b.png";
}


void func_1625(bool var_80_bool)
{
	var_80_bool = true;
}


// @pe
void func_1495(bool var_244_bool)
{
	int var_246_int;
	func_1277(var_246_int, "k3q04LopuhTalk");
	if(var_246_int != 0) {
		var_244_bool = true;
		return 0;
	}
	var_244_bool = false;
}


void func_1366(string var_31_string, int var_32_int)
{
	string var_34_string = "idle";
	if(var_32_int != 0)
		var_34_string += var_32_int;
	var_34_string = var_31_string;
}


void func_1239(bool var_132_bool, string var_133_string)
{
	bool var_135_bool;
	bool var_136_bool;
	func_1625(var_136_bool);
	if(var_136_bool != 0) {
		@lshHasSpeech(var_135_bool, var_133_string);
		if(var_135_bool != 0) {
			@lshPlaySpeech(var_133_string);
			var_132_bool = true;
		}
	}
	var_132_bool = false;
}


void func_1373(int var_25_int)
{
	int var_28_int; bool var_29_bool;
	var_28_int = 0;
	
	for(;;) {
		string var_31_string; int var_32_int;
		var_28_int = var_32_int;
		func_1366(var_31_string, var_32_int);
		@HasAnimation(var_29_bool, "all", var_31_string);
		if(!var_29_bool) //@nz
			break;
		var_28_int += 1;
	}
	var_28_int = var_25_int;
}


void func_1507(void)
{
	object var_18_object;
	@CreateDiaryEntry(var_18_object, 359, 2, 525659);
	bool var_22_bool; object var_23_object;
	var_18_object = var_23_object;
	func_1572(var_22_bool, var_23_object, 354);
}
EMIT "Stack[-1] = 0";


void func_868(void)
{
	bool var_19_bool; int var_20_int; int var_21_int; bool var_22_bool;
	@WaitForAnimEnd();
	bool var_23_bool;
	func_978(var_23_bool);
	if(!var_23_bool) //@nz
		return 12;
	int var_25_int;
	func_1373(var_25_int);
	int var_17_int;
	var_25_int = var_17_int;
	int var_18_int = 0;
	
	for(;;) {
		bool var_38_bool = false;
		if(var_18_int < 5) {
			bool var_41_bool;
			func_978(var_41_bool);
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
			func_1366(var_52_string, var_53_int);
			@PlayAnimation("all", var_52_string);
			@WaitForAnimEnd(var_22_bool);
			var_54_bool = !var_22_bool; //@nz
			if(var_54_bool == 0) goto Label_923;
			goto Label_934;
			}
				Label_923:
					bool var_45_bool;
					func_937(var_45_bool);
					var_46_bool = !var_45_bool; //@nz
					if(var_46_bool == 0) goto Label_929;
			}
		}
	Label_934:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_929:
		@ResetAAS();
		var_18_int += 1;
	}
	
}


void func_1254(void)
{
	bool var_10_bool;
	func_1625(var_10_bool);
	if(var_10_bool != 0)
		@lshStopSpeech();
}


void func_1128(bool var_109_bool, object var_110_object)
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
		func_1239(var_132_bool, var_133_string);
		var_132_bool = var_109_bool;
		return 10;

	}
}


void func_748(void)
{
	float var_285_float;
	@rand(var_285_float, 8, 16);
	@SetTimer(10, var_285_float);
}


void func_1261(object var_100_object)
{
	object var_102_object;
	@self(var_102_object);
	var_102_object = var_100_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1390(void)
{
	@SetVariable("k3q04", 2);
	func_1546();
}


void func_1520(void)
{
	object var_111_object;
	@CreateDiaryEntry(var_111_object, 358, 2, 525658);
	bool var_115_bool; object var_116_object;
	var_111_object = var_116_object;
	func_1572(var_115_bool, var_116_object, 354);
}
EMIT "Stack[-1] = 0";


void func_1267(cvector var_64_cvector, cvector var_65_cvector)
{
	float var_68_float = sqrt(var_65_cvector | var_65_cvector);
	if(var_68_float < 0.000001)
		var_64_cvector = [0.0, 0.0, 0.0];
	var_64_cvector = var_65_cvector / var_68_float;
}


void func_757(void)
{
	@KillTimer(10);
}


// @pe
void func_1399(void)
{
	func_1520();
	bool var_118_bool;
	func_1345(var_118_bool, "quest_k3_04", "completed");
}


void func_1277(int var_202_int, string var_203_string)
{
	int var_205_int;
	@GetVariable(var_203_string, var_205_int);
	var_205_int = var_202_int;
}


