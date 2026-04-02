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
			func_1275();
			if(var_8_bool == 21762) {
				object var_13_object; object var_14_object;
				var_13_object = var_1_object;
				var_14_object = var_0_object;
				func_1370();
			}
			if(var_8_bool == 21883) {
				object var_19_object; object var_20_object;
				var_19_object = var_1_object;
				var_20_object = var_0_object;
				func_1376();
				object var_71_object; object var_72_object;
				var_71_object = var_1_object;
				var_72_object = var_0_object;
				func_1421();
				object var_83_object = var_1_object;
				func_1428(var_0_object);
			}
			if(var_8_bool == 21780) {
				object var_111_object; object var_112_object;
				var_111_object = var_1_object;
				var_112_object = var_0_object;
				func_1450();
			}
			if(var_8_bool == 21788) {
				object var_126_object; object var_127_object;
				var_126_object = var_1_object;
				var_127_object = var_0_object;
				func_1409();
			}
			if(var_8_bool == 21793) {
				object var_132_object; object var_133_object;
				var_132_object = var_1_object;
				var_133_object = var_0_object;
				func_1415();
			}
			if(var_7_cvector == 21761) {
				object var_138_object; object var_139_object;
				var_138_object = var_1_object;
				var_139_object = var_0_object;
				func_1444();
				func_198(var_8_bool, "Fear");
				var_0_object->SetMessage(520559); //@t
				var_0_object->ClearReplies(); //@t
				bool var_160_bool = false;
				bool var_161_bool;
				func_1460(var_1_object);
				if(var_161_bool != 0) {
					bool var_169_bool;
					func_1472(var_1_object);
					if(var_169_bool != 0)
						var_160_bool = true;
				}
				if(var_160_bool != 0)
					var_0_object->AddReply(520560, 21763, 21762); //@t
				bool var_178_bool = false;
				bool var_179_bool;
				func_1460(var_1_object);
				if(!var_179_bool) { //@nz
					bool var_182_bool;
					func_1484(var_1_object);
					if(var_182_bool != 0)
						var_178_bool = true;
				}
				if(var_178_bool != 0)
					var_0_object->AddReply(520583, 21789, 21788); //@t
				bool var_191_bool = false;
				bool var_192_bool;
				func_1460(var_1_object);
				if(!var_192_bool) { //@nz
					bool var_195_bool;
					func_1496(var_1_object);
					if(var_195_bool != 0)
						var_191_bool = true;
				}
				if(var_191_bool != 0)
					var_0_object->AddReply(520588, 21794, 21793); //@t
				var_0_object->AddReply(520593, -1, 21798); //@t
				return 0;
			}
			if(var_7_cvector == 21794) {
				func_198(var_8_bool, "Fear");
				var_0_object->SetMessage(520589); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520590, 21796, 21795); //@t
				return 0;
			}
			if(var_7_cvector == 21796) {
				func_198(var_8_bool, "Fear");
				var_0_object->SetMessage(520591); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520592, -1, 21797); //@t
				return 0;
			}
			if(var_7_cvector == 21789) {
				func_198(var_8_bool, "Smile");
				var_0_object->SetMessage(520584); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520585, 21791, 21790); //@t
				return 0;
			}
			if(var_7_cvector == 21791) {
				func_198(var_8_bool, "Smile");
				var_0_object->SetMessage(520586); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520587, -1, 21792); //@t
				var_0_object->AddReply(528358, 29730, 29729); //@t
				return 0;
			}
			if(var_7_cvector == 29730) {
				func_198(var_8_bool, "Smile");
				var_0_object->SetMessage(528359); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528360, -1, 29731); //@t
				return 0;
			}
			if(var_7_cvector == 21763) {
				func_198(var_8_bool, "Fear");
				var_0_object->SetMessage(520561); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520562, 21765, 21764); //@t
				var_0_object->AddReply(520582, 21769, 21787); //@t
				return 0;
			}
			if(var_7_cvector == 21765) {
				func_198(var_8_bool, "Neutral");
				var_0_object->SetMessage(520563); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520564, 21767, 21766); //@t
				return 0;
			}
			if(var_7_cvector == 21767) {
				func_198(var_8_bool, "Neutral");
				var_0_object->SetMessage(520565); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520566, 21769, 21768); //@t
				var_0_object->AddReply(528361, 21769, 29732); //@t
				return 0;
			}
			if(var_7_cvector == 21769) {
				func_198(var_8_bool, "Sly");
				var_0_object->SetMessage(520567); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520568, 21771, 21770); //@t
				var_0_object->AddReply(520581, 21771, 21785); //@t
				return 0;
			}
			if(var_7_cvector == 21771) {
				func_198(var_8_bool, "Neutral");
				var_0_object->SetMessage(520569); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520570, 21773, 21772); //@t
				var_0_object->AddReply(520580, 21773, 21783); //@t
				return 0;
			}
			if(var_7_cvector == 21773) {
				func_198(var_8_bool, "Neutral");
				var_0_object->SetMessage(520571); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520572, 21775, 21774); //@t
				var_0_object->AddReply(520579, 21775, 21781); //@t
				return 0;
			}
			if(var_7_cvector == 21775) {
				func_198(var_8_bool, "Neutral");
				var_0_object->SetMessage(520573); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520574, 21777, 21776); //@t
				return 0;
			}
			if(var_7_cvector == 21777) {
				func_198(var_8_bool, "Smile");
				var_0_object->SetMessage(520575); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520576, 21779, 21778); //@t
				var_0_object->AddReply(520578, -1, 21780); //@t
				return 0;
			}
			if(var_7_cvector == 21779) {
				func_198(var_8_bool, "Smile");
				var_0_object->SetMessage(520577); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520675, -1, 21883); //@t
				return 0;
			}
			var_3_string = true;
			bool var_326_bool;
			func_1650(var_326_bool);
			if(var_326_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xdd";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
	{
		@SetVariable("b6q01KlaraLaska", 1);
		func_679();
	}

	void OnDispose(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
	{
		@SetVariable("b6q01KlaraLaska", 0);
	}

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, string var_7_string)
	{
		bool var_9_bool;
		if(var_7_string == "cleanup") {
			var_1_object = true;
			@IsLoaded(var_9_bool);
			if(!var_9_bool) { //@nz
				object var_13_object;
				func_1282(var_13_object);
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
			func_1282(var_8_object);
			@RemoveActor(var_8_object);
			@Hold();
		}
		func_827();
	}

	// @pe
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
	{
		func_842();
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, int var_7_int)
	{
		if(var_7_int == 10) {
			func_785();
			bool var_11_bool = false;
			bool var_12_bool;
			func_999(var_12_bool);
			if(var_12_bool != 0) {
				bool var_15_bool;
				func_754(var_15_bool);
				if(var_15_bool != 0)
					var_11_bool = true;
			}
			if(var_11_bool != 0) {
				bool var_32_bool;
				func_734(var_32_bool);
				if(var_32_bool != 0) {
					bool var_51_bool; object var_52_object;
					object var_53_object;
					func_1282(var_53_object);
					var_53_object = var_52_object;
					func_1149(var_51_bool, var_52_object);
				}
			} else {
				func_749(var_7_int);
				func_776();
			}
		}
	
	}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, bool var_7_bool)
	{
		if(var_7_bool != 0)
			func_776();
		else
			func_1229("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, object var_7_object)
	{
		bool var_9_bool;
		@IsOverrideActive(var_9_bool);
		if(!var_9_bool) { //@nz
			disable OnUse;
			func_967();
			bool var_11_bool; object var_12_object;
			var_7_object = var_12_object;
			func_990(var_11_bool, var_12_object);
			enable OnUse;
			object var_25_object;
			var_7_object = var_25_object;
			func_666(var_25_object);
			func_1229("Neutral");
			func_785();
			func_776();
		}
	}

}


void func_0(object var_0_object, int var_26_int, object var_27_object)
{
	var_0_object = var_27_object;
	bool var_37_bool; object var_38_object;
	var_27_object = var_38_object;
	func_1004(var_37_bool, var_38_object, 70.0);
	if(!var_37_bool) { //@nz
		var_26_int = -2;
		return 8;
	}
	object var_33_object;
	@CreateDialog(var_33_object);
	int var_85_int;
	func_1644(var_85_int);
	var_33_object->SetNPCName(var_85_int);
	int var_86_int;
	func_1642(var_86_int);
	var_33_object->SetNPCDescription(var_86_int);
	string var_87_string;
	func_1646(var_87_string);
	var_33_object->SetPhoto(var_87_string);
	string var_88_string;
	func_1648(var_88_string);
	var_33_object->SetPhoto2(var_88_string);
	int var_89_int;
	func_1625(var_89_int);
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
	func_1282(var_100_object);
	var_100_object = var_99_object;
	func_1091(var_98_bool, var_99_object);
	object var_193_object; object var_194_object;
	var_27_object = var_193_object;
	var_33_object = var_194_object;
	TaskCall(1);
	func_81(var_195_object, var_196_object, var_197_string, var_198_bool, var_193_object, var_194_object);
	TaskReturn();
	bool var_36_bool;
	var_33_object->IsDialogEnd(var_36_bool);
	
	for(;;) {
		var_287_bool = !var_36_bool; //@nz
		if(var_287_bool == 0) goto Label_70;
		@sync();
		var_33_object->IsDialogEnd(var_36_bool);
	}
	
Label_70:
	object var_288_object;
	var_27_object = var_288_object;
	func_1073();
	@StopDialog(var_33_object);
	var_33_object->GetReturnValue(-1);
	int var_35_int = var_26_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_1409(void)
{
	@SetVariable("oob6Klara2", 1);
}


void func_1282(object var_100_object)
{
	object var_102_object;
	@self(var_102_object);
	var_102_object = var_100_object;
}
EMIT "Stack[-1] = 0";


void func_896(void)
{
	bool var_21_bool; int var_22_int; int var_23_int; bool var_24_bool;
	@WaitForAnimEnd();
	bool var_25_bool;
	func_999(var_25_bool);
	if(!var_25_bool) //@nz
		return 12;
	int var_27_int;
	func_1353(var_27_int);
	int var_19_int;
	var_27_int = var_19_int;
	int var_20_int = 0;
	
	for(;;) {
		bool var_40_bool = false;
		if(var_20_int < 5) {
			bool var_43_bool;
			func_999(var_43_bool);
			if(var_43_bool != 0)
				var_40_bool = true;
		}
		if(var_40_bool != 0) {
			if(!var_19_int) { //@nz
				@Sleep(3, var_21_bool);
				if(!var_21_bool) { //@nz
				} else {
			} else {
			@irand(var_22_int, var_19_int);
			@irand(var_23_int, 5);
			if(var_23_int != 0)
				var_22_int = 0;
			string var_54_string; int var_55_int;
			var_22_int = var_55_int;
			func_1346(var_54_string, var_55_int);
			@PlayAnimation("all", var_54_string);
			@WaitForAnimEnd(var_24_bool);
			var_56_bool = !var_24_bool; //@nz
			if(var_56_bool == 0) goto Label_951;
			goto Label_962;
			}
				Label_951:
					bool var_47_bool;
					func_965(var_47_bool);
					var_48_bool = !var_47_bool; //@nz
					if(var_48_bool == 0) goto Label_957;
			}
		}
	Label_962:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_957:
		@ResetAAS();
		var_20_int += 1;
	}
	
}


// @pe
void func_1415(void)
{
	@SetVariable("oob6Klara3", 1);
}


void func_776(void)
{
	float var_299_float;
	@rand(var_299_float, 8, 16);
	@SetTimer(10, var_299_float);
}


void func_1288(cvector var_64_cvector, cvector var_65_cvector)
{
	float var_68_float = sqrt(var_65_cvector | var_65_cvector);
	if(var_68_float < 0.000001)
		var_64_cvector = [0.0, 0.0, 0.0];
	var_64_cvector = var_65_cvector / var_68_float;
}


void func_1547(bool var_44_bool, object var_45_object, int var_46_int)
{
	object var_53_object;
	func_1534(var_53_object);
	object var_50_object;
	var_53_object = var_50_object;
	object var_51_object;
	var_50_object->Find(var_46_int, var_51_object);
	if(!var_51_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_46_int);
		var_44_bool = false;
	}
	var_51_object->AddChild(var_45_object);
	@SendWorldWndMessage(7);
	int var_52_int;
	var_45_object->GetCategory(var_52_int);
	@SetDiarySection(var_52_int);
	var_44_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void func_1421(void)
{
	func_1303("termitnik2@door1", false);
}


void func_785(void)
{
	@KillTimer(10);
}


void func_1298(int var_225_int, string var_226_string)
{
	int var_228_int;
	@GetVariable(var_226_string, var_228_int);
	var_228_int = var_225_int;
}


// @pe
void func_1428(object var_84_object)
{
	object var_88_object;
	func_1575(var_88_object);
	object var_85_object;
	var_88_object = var_85_object;
	func_1592(var_85_object, "pt_map_termitnik2", (float)2);
	object var_108_object;
	func_1575(var_108_object);
	var_84_object->ShowMap(var_108_object);
}


void func_1303(string var_73_string, bool var_74_bool)
{
	object var_76_object;
	@FindActor(var_76_object, var_73_string);
	if(!var_76_object) //@nz
		@Trace(("Door " + var_73_string) + " not found");
	else
		var_76_object->SetProperty("locked", var_74_bool);
	
}
EMIT "Stack[-1] = 0";


// @pe
void func_666(object var_25_object)
{
	object var_27_object;
	var_25_object = var_27_object;
	TaskCall(0);
	int var_26_int;
	func_0(var_28_object, var_26_int, var_27_object);
	TaskReturn();
}


void func_1186(bool var_140_bool, object var_141_object)
{
	bool var_149_bool; int var_150_int; string var_151_string;
	int var_153_int;
	func_1337(var_153_int);
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
		func_1260(var_172_bool, var_173_string);
		var_172_bool = var_140_bool;
		return 10;

	}
}


// @pe
void func_1444(void)
{
	@SetVariable("b6q01KlaraVisit", 1);
}


// @pe
void func_679(void)
{
	func_720(var_6_bool);
}


void func_1575(object var_25_object)
{
	object var_28_object; object var_29_object;
	@GetMainOutdoorScene(var_28_object);
	if(var_28_object == null) {
		@Trace("Can't find main outdoor scene");
		var_29_object = null;
		var_29_object = var_25_object;
	}
	var_28_object->GetMap(var_29_object);
	var_29_object = var_25_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1320(bool var_62_bool, string var_63_string, string var_64_string)
{
	object var_66_object;
	@FindActor(var_66_object, var_63_string);
	if(var_66_object == null)
		var_62_bool = false;
	@Trigger(var_66_object, var_64_string);
	var_62_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1450(void)
{
	func_1508();
	bool var_121_bool;
	func_1320(var_121_bool, "quest_b6_01", "fail");
}


void func_1073(void)
{
	bool var_290_bool;
	@CameraSwitchToNormal(true);
	bool var_292_bool;
	func_1650(var_292_bool);
	if(var_292_bool != 0) {
	} else {
		@HasAnimationTrack(var_290_bool, "head");
		if(var_290_bool == 0) goto Label_1090;
		@UnlookAsync("head");
	}
Label_1090:
	
}


// @pe
void func_1460(bool var_223_bool)
{
	int var_225_int;
	func_1298(var_225_int, "oob6Klara1");
	if(var_225_int == 0) {
		var_223_bool = true;
		return 0;
	}
	var_223_bool = false;
}


void func_1332(float var_36_float)
{
	float var_38_float;
	@GetGameTime(var_38_float);
	var_38_float = var_36_float;
}


void func_1592(object var_85_object, string var_86_string, float var_87_float)
{
	object var_95_object;
	@GetMainOutdoorScene(var_95_object);
	if(var_95_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_93_cvector;
	cvector var_94_cvector;
	bool var_96_bool;
	var_95_object->GetLocator(var_86_string, var_96_bool, var_93_cvector, var_94_cvector);
	if(!var_96_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_86_string) + " doesnt exist");
	var_95_object->GetMap(var_85_object);
	if(var_85_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_106_float = GetByIndex(var_93_cvector, 0);
	var_107_float = GetByIndex(var_93_cvector, 2);
	var_85_object->SetMapParams(var_106_float, var_107_float, var_87_float);
}
EMIT "Stack[-2] = 0";


void func_1337(int var_153_int)
{
	float var_155_float;
	@GetGameTime(var_155_float);
	var_153_int = 1 + (var_155_float / 24);
}


// @pe
void func_827(void)
{
	func_967();
	func_785();
	@lshStopSpeech();
	@lshStopAnimation();
	@StopAsync();
	@Hold();
}


// @pe
void func_1472(bool var_231_bool)
{
	int var_233_int;
	func_1298(var_233_int, "b6q01");
	if(var_233_int == 1)
		var_231_bool = true;
	var_231_bool = false;
}


void func_1346(string var_33_string, int var_34_int)
{
	string var_36_string = "idle";
	if(var_34_int != 0)
		var_36_string += var_34_int;
	var_36_string = var_33_string;
}


void func_1091(bool var_98_bool, object var_99_object)
{
	int var_105_int; int var_106_int;
	@GetVariable("voice_common", var_105_int);
	if(var_105_int != 0) {
		bool var_109_bool; object var_110_object;
		var_99_object = var_110_object;
		func_1149(var_109_bool, var_110_object);
		if(!var_109_bool) { //@nz
			bool var_140_bool; object var_141_object;
			var_99_object = var_141_object;
			func_1186(var_140_bool, var_141_object);
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
		func_1186(var_185_bool, var_186_object);
		if(!var_185_bool) { //@nz
			bool var_188_bool; object var_189_object;
			var_99_object = var_189_object;
			func_1149(var_188_bool, var_189_object);
			if(!var_188_bool) { //@nz
				var_98_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_1147;
	
Label_1147:
	var_98_bool = true;
	
}


void func_965(bool var_47_bool)
{
	var_47_bool = true;
}


// @pe
void func_198(object var_2_object, string var_204_string)
{
	bool var_205_bool;
	func_1650(var_205_bool);
	if(!var_205_bool) //@nz
		return 0;
	if(var_204_string == var_2_object)
		return 0;
	string var_208_string; bool var_209_bool;
	var_204_string = var_208_string;
	if(var_204_string == "")
		var_209_bool = false;
	else
		var_209_bool = true;
	func_1245(var_208_string, var_209_bool);
	var_2_object = var_204_string;
	
}


void func_967(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_1353(int var_27_int)
{
	int var_30_int; bool var_31_bool;
	var_30_int = 0;
	
	for(;;) {
		string var_33_string; int var_34_int;
		var_30_int = var_34_int;
		func_1346(var_33_string, var_34_int);
		@HasAnimation(var_31_bool, "all", var_33_string);
		if(!var_31_bool) //@nz
			break;
		var_30_int += 1;
	}
	var_30_int = var_27_int;
}


void func_842(void)
{
	@StopGroup0();
	func_785();
	func_1229("Neutral");
	func_776();
}


// @pe
void func_1484(bool var_244_bool)
{
	int var_246_int;
	func_1298(var_246_int, "oob6Klara2");
	if(var_246_int == 0) {
		var_244_bool = true;
		return 0;
	}
	var_244_bool = false;
}


void func_1229(string var_271_string)
{
	bool var_275_bool; float var_276_float; float var_277_float;
	@lshHasAnimation(var_275_bool, var_271_string);
	if(var_275_bool != 0) {
		@lshGetAnimTimes(var_271_string, var_276_float, var_277_float);
		@lshPlayAnimation(var_276_float, var_277_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_271_string);
	}
	
}


void func_972(float var_22_float, object var_23_object)
{
	cvector var_27_cvector;
	@GetPosition(var_27_cvector);
	cvector var_28_cvector;
	var_23_object->GetPosition(var_28_cvector);
	var_22_float = (var_28_cvector - var_27_cvector) | (var_28_cvector - var_27_cvector);
}


void func_720(object var_0_object)
{
	bool var_9_bool;
	func_999(var_9_bool);
	if(!var_9_bool) //@nz
		@Hold();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_896();
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_81(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_193_object, object var_194_object)
{
	var_0_object = var_194_object;
	var_1_object = var_193_object;
	var_3_string = false;
	if(1 != 0) {
		object var_200_object; object var_201_object;
		var_200_object = var_1_object;
		var_201_object = var_0_object;
		func_1444();
		func_198(var_194_object, "Fear");
		var_0_object->SetMessage(520559); //@t
		var_0_object->ClearReplies(); //@t
		bool var_222_bool = false;
		bool var_223_bool;
		func_1460(var_1_object);
		if(var_223_bool != 0) {
			bool var_231_bool;
			func_1472(var_1_object);
			if(var_231_bool != 0)
				var_222_bool = true;
		}
		if(var_222_bool != 0)
			var_0_object->AddReply(520560, 21763, 21762); //@t
		bool var_240_bool = false;
		bool var_241_bool;
		func_1460(var_1_object);
		if(!var_241_bool) { //@nz
			bool var_244_bool;
			func_1484(var_1_object);
			if(var_244_bool != 0)
				var_240_bool = true;
		}
		if(var_240_bool != 0)
			var_0_object->AddReply(520583, 21789, 21788); //@t
		bool var_253_bool = false;
		bool var_254_bool;
		func_1460(var_1_object);
		if(!var_254_bool) { //@nz
			bool var_257_bool;
			func_1496(var_1_object);
			if(var_257_bool != 0)
				var_253_bool = true;
		}
		if(var_253_bool != 0)
			var_0_object->AddReply(520588, 21794, 21793); //@t
		var_0_object->AddReply(520593, -1, 21798); //@t
		goto Label_168;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_168:
	bool var_269_bool;
	func_1650(var_269_bool);
	if(var_269_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1229(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_197;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_197:
		return 0;

	}
	
}


void func_980(bool var_15_bool, cvector var_16_cvector)
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
void func_1496(bool var_257_bool)
{
	int var_259_int;
	func_1298(var_259_int, "oob6Klara3");
	if(var_259_int == 0) {
		var_257_bool = true;
		return 0;
	}
	var_257_bool = false;
}


void func_1625(int var_89_int)
{
	int var_91_int;
	@GetVariable("branch", var_91_int);
	if(var_91_int == 0) {
		var_89_int = 1;
		return 2;
	EMIT "GOTO 0x668";
	}
	if(var_91_int == 1) {
		var_89_int = 2;
		return 2;
	}
	var_89_int = 3;
}


// @pe
void func_1370(void)
{
	@SetVariable("oob6Klara1", 1);
}


void func_1245(string var_208_string, bool var_209_bool)
{
	bool var_215_bool; float var_216_float; float var_217_float;
	@lshHasAnimation(var_215_bool, var_208_string);
	if(var_215_bool != 0) {
		@lshGetAnimTimes(var_208_string, var_216_float, var_217_float);
		@lshPlayAnimation(var_216_float, var_217_float, var_209_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_208_string);
	}
	
}


void func_990(bool var_11_bool, object var_12_object)
{
	cvector var_14_cvector;
	var_12_object->GetPosition(var_14_cvector);
	bool var_15_bool; cvector var_16_cvector;
	var_14_cvector = var_16_cvector;
	func_980(var_15_bool, var_16_cvector);
	var_15_bool = var_11_bool;
}


void func_734(bool var_32_bool)
{
	object var_34_object;
	@FindActor(var_34_object, "player");
	if(!var_34_object) //@nz
		var_32_bool = false;
	bool var_37_bool; object var_38_object;
	var_34_object = var_38_object;
	func_990(var_37_bool, var_38_object);
	var_37_bool = var_32_bool;
}
EMIT "Stack[-1] = 0";


void func_1376(void)
{
	@SetVariable("b6q01", 2);
	object var_25_object;
	func_1575(var_25_object);
	object var_22_object;
	var_25_object = var_22_object;
	float var_36_float;
	func_1332(var_36_float);
	var_22_object->AddMark("b6q01KlaraGotoTermitnik2", "pt_map_termitnik2", 1, 525668, var_36_float);
	func_1521();
	bool var_62_bool;
	func_1320(var_62_bool, "quest_b6_01", "remove_klara");
	bool var_68_bool;
	func_1320(var_68_bool, "quest_b6_01", "init_termitnik");
}
EMIT "Stack[-1] = 0";


void func_1508(void)
{
	object var_114_object;
	@CreateDiaryEntry(var_114_object, 783, 1, 542148);
	bool var_118_bool; object var_119_object;
	var_114_object = var_119_object;
	func_1547(var_118_bool, var_119_object, 265);
}
EMIT "Stack[-1] = 0";


void func_999(bool var_9_bool)
{
	bool var_11_bool;
	@IsLoaded(var_11_bool);
	var_11_bool = var_9_bool;
}


void func_1642(int var_86_int)
{
	var_86_int = 515540;
}


void func_1644(int var_85_int)
{
	var_85_int = 502865;
}


void func_1004(bool var_37_bool, object var_38_object, float var_39_float)
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
	func_1288(var_64_cvector, (var_53_cvector ^ [0.0, 1.0, 0.0]));
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
	func_1650(var_80_bool);
	if(var_80_bool != 0) {
	} else {
		@HasAnimationTrack(var_57_bool, "head");
		if(var_57_bool == 0) goto Label_1067;
		@LookAsyncCamera("head");
	}
Label_1067:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_37_bool = true;
	
}


void func_1646(string var_87_string)
{
	var_87_string = "ui/NPC_Klara.png";
}


void func_749(object var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0);
	var_85_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_84_float, var_85_float);
}


void func_1648(string var_88_string)
{
	var_88_string = "ui/NPC_Klara_b.png";
}


void func_1260(bool var_132_bool, string var_133_string)
{
	bool var_135_bool;
	bool var_136_bool;
	func_1650(var_136_bool);
	if(var_136_bool != 0) {
		@lshHasSpeech(var_135_bool, var_133_string);
		if(var_135_bool != 0) {
			@lshPlaySpeech(var_133_string);
			var_132_bool = true;
		}
	}
	var_132_bool = false;
}


void func_1650(bool var_80_bool)
{
	var_80_bool = true;
}


void func_754(bool var_15_bool)
{
	object var_18_object;
	@FindActor(var_18_object, "player");
	if(!var_18_object) { //@nz
		var_15_bool = false;
		return 4;
	}
	float var_22_float; object var_23_object;
	func_972(var_22_float, var_23_object);
	if(var_22_float > 90000.0) {
		var_15_bool = false;
		return 4;
	}
	bool var_19_bool;
	@CanSee(var_19_bool, var_23_object);
	var_19_bool = var_15_bool;
}
EMIT "Stack[-2] = 0";


void func_1521(void)
{
	object var_40_object;
	@CreateDiaryEntry(var_40_object, 362, 1, 525662);
	bool var_44_bool; object var_45_object;
	var_40_object = var_45_object;
	func_1547(var_44_bool, var_45_object, 265);
}
EMIT "Stack[-1] = 0";


void func_1275(void)
{
	bool var_10_bool;
	func_1650(var_10_bool);
	if(var_10_bool != 0)
		@lshStopSpeech();
}


void func_1149(bool var_109_bool, object var_110_object)
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
		func_1260(var_132_bool, var_133_string);
		var_132_bool = var_109_bool;
		return 10;

	}
}


void func_1534(object var_53_object)
{
	object var_55_object;
	@GetDiaryRoot(var_55_object);
	if(!var_55_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_53_object = false;
	}
	var_55_object = var_53_object;
}
EMIT "Stack[-1] = 0";


