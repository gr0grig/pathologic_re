// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, int var_7_int, int var_8_int, bool var_9_bool, bool var_10_bool, object var_11_object, bool var_12_bool, bool var_13_bool)
	{
		if(1 != 0) {
			func_760();
			if(var_13_bool == 37513) {
				object var_18_object; object var_19_object;
				var_18_object = var_1_object;
				var_19_object = var_0_object;
				func_865();
				object var_67_object = var_1_object;
				func_849(var_0_object);
			}
			if(var_13_bool == 37516) {
				object var_95_object; object var_96_object;
				var_95_object = var_1_object;
				var_96_object = var_0_object;
				func_865();
				object var_97_object = var_1_object;
				func_849(var_0_object);
			}
			if(var_13_bool == 34726) {
				object var_101_object; object var_102_object;
				var_101_object = var_1_object;
				var_102_object = var_0_object;
				func_865();
				object var_103_object = var_1_object;
				func_893(var_0_object);
				object var_127_object = var_1_object;
				func_914(var_0_object);
				object var_138_object = var_1_object;
				func_849(var_0_object);
			}
			if(var_13_bool == 37509) {
				object var_142_object; object var_143_object;
				var_142_object = var_1_object;
				var_143_object = var_0_object;
				func_865();
				object var_144_object = var_1_object;
				func_849(var_0_object);
			}
			if(var_12_bool == 34723) {
				func_142(var_13_bool, "Neutral");
				var_0_object->SetMessage(533203); //@t
				var_0_object->ClearReplies(); //@t
				bool var_166_bool;
				func_925(var_1_object);
				if(var_166_bool != 0)
					var_0_object->AddReply(533204, 34725, 34724); //@t
				var_0_object->AddReply(533207, -1, 34727); //@t
				var_0_object->AddReply(535821, -1, 37514); //@t
				return 0;
			}
			if(var_12_bool == 34725) {
				func_142(var_13_bool, "Neutral");
				var_0_object->SetMessage(533205); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535813, 37511, 37505); //@t
				var_0_object->AddReply(535815, 37508, 37507); //@t
				return 0;
			}
			if(var_12_bool == 37508) {
				func_142(var_13_bool, "Neutral");
				var_0_object->SetMessage(535816); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535817, -1, 37509); //@t
				var_0_object->AddReply(535822, 37506, 37515); //@t
				return 0;
			}
			if(var_12_bool == 37511) {
				func_142(var_13_bool, "Neutral");
				var_0_object->SetMessage(535818); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535820, -1, 37513); //@t
				var_0_object->AddReply(535819, 37506, 37512); //@t
				return 0;
			}
			if(var_12_bool == 37506) {
				func_142(var_13_bool, "Neutral");
				var_0_object->SetMessage(535814); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535823, -1, 37516); //@t
				var_0_object->AddReply(533206, -1, 34726); //@t
				return 0;
			}
			var_3_string = true;
			bool var_223_bool;
			func_1090(var_223_bool);
			if(var_223_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xa5";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool)
	{
		func_384(var_11_bool, (float)300, (float)100);
	}

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool, object var_12_object)
	{
		object var_14_object;
		var_12_object = var_14_object;
		TaskCall(0);
		int var_13_int;
		func_0(var_15_object, var_13_int, var_14_object);
		TaskReturn();
	}

	// @pe
	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool, string var_12_string)
	{
		if(var_12_string == "cleanup")
			func_402(var_12_string);
	}

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool)
	{
		if(var_6_int != 0)
			func_518(var_10_bool, var_11_bool);
		bool var_16_bool = false;
		if(var_5_int != 0) {
			bool var_18_bool;
			func_451(var_18_bool);
			if(var_18_bool != 0)
				var_16_bool = true;
		}
		if(var_16_bool != 0) {
			object var_19_object;
			func_767(var_19_object);
			@RemoveActor(var_19_object);
		}
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool, int var_12_int)
	{
		if(var_12_int == 10) {
			bool var_15_bool;
			func_480(var_10_bool, var_11_bool, var_12_int, var_15_bool);
			if(var_15_bool != 0) {
				if(!var_2_object) { //@nz
					func_749(var_4_bool);
					var_2_object = true;
				}
			} else if(var_2_object != 0) {
				@UnlookAsync("head");
				var_2_object = false;
			}
		}
	
	}

}


void func_384(int var_6_int, float var_12_float, float var_13_float)
{
	float var_14_float; bool var_15_bool; float var_16_float; bool var_17_bool;
	var_6_int = false;
	
	for(;;) {
		@rand(var_16_float, 3);
		@Sleep((var_16_float + 3), var_17_bool);
		var_6_int = true;
		float var_21_float; float var_22_float;
		var_12_float = var_21_float;
		func_453(var_22_float, var_14_float, var_15_bool, var_16_float, var_17_bool, var_21_float, var_22_float);
		var_6_int = false;
	}
}
EMIT "Return(); Pop(4)";


void func_0(object var_0_object, int var_13_int, object var_14_object)
{
	var_0_object = var_14_object;
	bool var_24_bool; object var_25_object;
	var_14_object = var_25_object;
	func_631(var_24_bool, var_25_object, 70.0);
	if(!var_24_bool) { //@nz
		var_13_int = -2;
		return 8;
	}
	object var_20_object;
	@CreateDialog(var_20_object);
	int var_72_int;
	func_1084(var_72_int);
	var_20_object->SetNPCName(var_72_int);
	int var_73_int;
	func_1082(var_73_int);
	var_20_object->SetNPCDescription(var_73_int);
	string var_74_string;
	func_1086(var_74_string);
	var_20_object->SetPhoto(var_74_string);
	string var_75_string;
	func_1088(var_75_string);
	var_20_object->SetPhoto2(var_75_string);
	int var_76_int;
	func_1041(var_76_int);
	var_20_object->SetPlayerName(var_76_int);
	bool var_21_bool;
	@IsOverrideActive(var_21_bool);
	if(var_21_bool != 0) {
		var_13_int = -2;
		return 8;
	}
	@DoDialog(var_20_object);
	object var_85_object; object var_86_object;
	var_14_object = var_85_object;
	var_20_object = var_86_object;
	TaskCall(1);
	func_74(var_87_object, var_88_object, var_89_string, var_90_bool, var_85_object, var_86_object);
	TaskReturn();
	bool var_23_bool;
	var_20_object->IsDialogEnd(var_23_bool);
	
	for(;;) {
		var_145_bool = !var_23_bool; //@nz
		if(var_145_bool == 0) goto Label_63;
		@sync();
		var_20_object->IsDialogEnd(var_23_bool);
	}
	
Label_63:
	object var_146_object;
	var_14_object = var_146_object;
	func_700();
	@StopDialog(var_20_object);
	var_20_object->GetReturnValue(-1);
	int var_22_int = var_13_int;
}
EMIT "Stack[-4] = 0";


void func_773(cvector var_51_cvector, cvector var_52_cvector)
{
	float var_55_float = sqrt(var_52_cvector | var_52_cvector);
	if(var_55_float < 0.000001)
		var_51_cvector = [0.0, 0.0, 0.0];
	var_51_cvector = var_52_cvector / var_55_float;
}


// @pe
void func_518(object var_2_object, string var_3_string)
{
	func_613();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
}


// @pe
void func_142(object var_2_object, string var_92_string)
{
	bool var_93_bool;
	func_1090(var_93_bool);
	if(!var_93_bool) //@nz
		return 0;
	if(var_92_string == var_2_object)
		return 0;
	string var_96_string; bool var_97_bool;
	var_92_string = var_96_string;
	if(var_92_string == "")
		var_97_bool = false;
	else
		var_97_bool = true;
	func_734(var_96_string, var_97_bool);
	var_2_object = var_92_string;
	
}


void func_783(int var_112_int, string var_113_string)
{
	int var_115_int;
	@GetVariable(var_113_string, var_115_int);
	var_115_int = var_112_int;
}


void func_1041(int var_76_int)
{
	int var_78_int;
	@GetVariable("branch", var_78_int);
	if(var_78_int == 0) {
		var_76_int = 1;
		return 2;
	EMIT "GOTO 0x420";
	}
	if(var_78_int == 1) {
		var_76_int = 2;
		return 2;
	}
	var_76_int = 3;
}


// @pe
void func_914(object var_127_object)
{
	@Trace("rifle ammo10 is given");
	object var_130_object;
	var_127_object = var_130_object;
	func_819(var_130_object, "rifle_ammo", 10);
}


void func_402(int var_5_int)
{
	var_5_int = true;
	bool var_15_bool = false;
	bool var_16_bool;
	func_626(var_16_bool);
	if(!var_16_bool) { //@nz
		bool var_20_bool;
		func_451(var_20_bool);
		if(var_20_bool != 0)
			var_15_bool = true;
	}
	if(var_15_bool != 0) {
		object var_21_object;
		func_767(var_21_object);
		@RemoveActor(var_21_object);
	}
}


void func_532(void)
{
	int var_39_int; int var_40_int; bool var_41_bool; float var_42_float; bool var_43_bool;
	@WaitForAnimEnd();
	bool var_44_bool;
	func_626(var_44_bool);
	if(!var_44_bool) //@nz
		return 14;
	int var_46_int;
	func_1065(var_46_int);
	int var_37_int;
	var_46_int = var_37_int;
	int var_38_int = 0;
	
	for(;;) {
		bool var_59_bool = false;
		if(var_38_int < 5) {
			bool var_62_bool;
			func_626(var_62_bool);
			if(var_62_bool != 0)
				var_59_bool = true;
		}
		if(var_59_bool != 0) {
			@irand(var_39_int, 3);
			if(var_39_int == 0) {
				if(var_37_int == 0) goto Label_579;
				@irand(var_40_int, var_37_int);
				string var_68_string; int var_69_int;
				var_40_int = var_69_int;
				func_1058(var_68_string, var_69_int);
				@PlayAnimation("all", var_68_string);
				@WaitForAnimEnd(var_41_bool);
				if(!var_41_bool) { //@nz
				} else {
			} else {
			if(var_39_int == 1) {
				@rand(var_42_float, 4);
				@Sleep((var_42_float + 1), var_43_bool);
				if(!var_43_bool) { //@nz
					goto Label_608;
				}
			} else if(var_38_int != 0) {
				goto Label_608;
			}
			}
					bool var_71_bool;
					func_611(var_71_bool);
					var_72_bool = !var_71_bool; //@nz
					if(var_72_bool == 0) goto Label_603;
			}
		}
	Label_608:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_603:
		@ResetAAS();
		var_38_int += 1;
	}
	
}


void func_788(int var_122_int, int var_123_int)
{
	object var_125_object;
	@CreateIntVector(var_125_object);
	var_125_object->add(var_122_int);
	var_125_object->add(var_123_int);
	@SendWorldWndMessage(3, var_125_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_925(bool var_110_bool)
{
	int var_112_int;
	func_783(var_112_int, "d7q04");
	if(var_112_int == 1)
		var_110_bool = true;
	var_110_bool = false;
}


void func_800(object var_111_object, object var_112_object, int var_113_int)
{
	int var_117_int;
	var_112_object->GetItemID(var_117_int);
	int var_118_int;
	@GetInvItemProperty(var_118_int, var_117_int, "Category");
	bool var_119_bool;
	var_111_object->AddItem(var_119_bool, var_112_object, var_118_int, var_113_int);
	if(!var_119_bool) { //@nz
		var_111_object->DropItems(var_112_object, var_113_int);
	} else {
		int var_122_int; int var_123_int;
		var_117_int = var_122_int;
		var_113_int = var_123_int;
		func_788(var_122_int, var_123_int);
	}
	
}


void func_1058(string var_52_string, int var_53_int)
{
	string var_55_string = "idle";
	if(var_53_int != 0)
		var_55_string += var_53_int;
	var_55_string = var_52_string;
}


void func_1065(int var_46_int)
{
	int var_49_int; bool var_50_bool;
	var_49_int = 0;
	
	for(;;) {
		string var_52_string; int var_53_int;
		var_49_int = var_53_int;
		func_1058(var_52_string, var_53_int);
		@HasAnimation(var_50_bool, "all", var_52_string);
		if(!var_50_bool) //@nz
			break;
		var_49_int += 1;
	}
	var_49_int = var_46_int;
}


void func_937(void)
{
	object var_39_object;
	@CreateDiaryEntry(var_39_object, 639, 2, 533225);
	bool var_43_bool; object var_44_object;
	var_39_object = var_44_object;
	func_963(var_43_bool, var_44_object, 637);
}
EMIT "Stack[-1] = 0";


void func_819(object var_130_object, string var_131_string, int var_132_int)
{
	object var_134_object;
	@CreateInvItem(var_134_object);
	var_134_object->SetItemName(var_131_string);
	object var_135_object; object var_136_object; int var_137_int;
	var_130_object = var_135_object;
	var_134_object = var_136_object;
	var_132_int = var_137_int;
	func_800(var_135_object, var_136_object, var_137_int);
}
EMIT "Stack[-1] = 0";


void func_950(object var_52_object)
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


void func_1082(int var_73_int)
{
	var_73_int = 515556;
}


void func_700(void)
{
	bool var_148_bool;
	@CameraSwitchToNormal(true);
	bool var_150_bool;
	func_1090(var_150_bool);
	if(var_150_bool != 0) {
	} else {
		@HasAnimationTrack(var_148_bool, "head");
		if(var_148_bool == 0) goto Label_717;
		@UnlookAsync("head");
	}
Label_717:
	
}


void func_1084(int var_72_int)
{
	var_72_int = 503341;
}


void func_1086(string var_74_string)
{
	var_74_string = "ui/NPC_Citizen3.png";
}


void func_1088(string var_75_string)
{
	var_75_string = "ui/NPC_Citizen3_b.png";
}


void func_832(bool var_61_bool, string var_62_string, string var_63_string)
{
	object var_65_object;
	@FindActor(var_65_object, var_62_string);
	if(var_65_object == null)
		var_61_bool = false;
	@Trigger(var_65_object, var_63_string);
	var_61_bool = true;
}
EMIT "Stack[-1] = 0";


void func_1090(bool var_67_bool)
{
	var_67_bool = false;
}


void func_451(bool var_18_bool)
{
	var_18_bool = true;
}


void func_963(bool var_43_bool, object var_44_object, int var_45_int)
{
	object var_52_object;
	func_950(var_52_object);
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


// @pe
void func_453(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_21_float, float var_22_float)
{
	bool var_23_bool;
	func_626(var_23_bool);
	if(!var_23_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_21_float;
	var_1_object = var_22_float;
	@SetTimer(10, 1.0);
	func_532();
	if(!false) //@nz
		@KillTimer(10);
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_85_object, object var_86_object)
{
	var_0_object = var_86_object;
	var_3_string = false;
	if(1 != 0) {
		func_142(var_86_object, "Neutral");
		var_0_object->SetMessage(533203); //@t
		var_0_object->ClearReplies(); //@t
		bool var_110_bool;
		func_925(var_85_object);
		if(var_110_bool != 0)
			var_0_object->AddReply(533204, 34725, 34724); //@t
		var_0_object->AddReply(533207, -1, 34727); //@t
		var_0_object->AddReply(535821, -1, 37514); //@t
		goto Label_112;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_112:
	bool var_127_bool;
	func_1090(var_127_bool);
	if(var_127_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_718(var_2_object);
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


void func_844(float var_35_float)
{
	float var_37_float;
	@GetGameTime(var_37_float);
	var_37_float = var_35_float;
}


void func_718(string var_129_string)
{
	bool var_133_bool; float var_134_float; float var_135_float;
	@lshHasAnimation(var_133_bool, var_129_string);
	if(var_133_bool != 0) {
		@lshGetAnimTimes(var_129_string, var_134_float, var_135_float);
		@lshPlayAnimation(var_134_float, var_135_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_129_string);
	}
	
}


// @pe
void func_849(object var_68_object)
{
	object var_72_object;
	func_991(var_72_object);
	object var_69_object;
	var_72_object = var_69_object;
	func_1008(var_69_object, "pt_gatherer2", (float)2);
	object var_92_object;
	func_991(var_92_object);
	var_68_object->ShowMap(var_92_object);
}


void func_734(string var_96_string, bool var_97_bool)
{
	bool var_103_bool; float var_104_float; float var_105_float;
	@lshHasAnimation(var_103_bool, var_96_string);
	if(var_103_bool != 0) {
		@lshGetAnimTimes(var_96_string, var_104_float, var_105_float);
		@lshPlayAnimation(var_104_float, var_105_float, var_97_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_96_string);
	}
	
}


void func_991(object var_24_object)
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


void func_480(object var_0_object, object var_1_object, bool var_4_bool, bool var_15_bool)
{
	if(var_4_bool == null)
		var_15_bool = false;
	float var_19_float;
	func_618(var_19_float, var_4_bool);
	float var_17_float = sqrt(var_19_float);
	if(var_2_object != 0)
		var_17_float -= var_1_object;
	var_15_bool = var_17_float < var_0_object;
}


void func_865(void)
{
	@SetVariable("d7q04", 2);
	object var_24_object;
	func_991(var_24_object);
	object var_21_object;
	var_24_object = var_21_object;
	float var_35_float;
	func_844(var_35_float);
	var_21_object->AddMark("d7q04WastedGotoGatherer", "pt_gatherer2", 0, 508638, var_35_float);
	func_937();
	bool var_61_bool;
	func_832(var_61_bool, "quest_d7_04", "init_andrei");
}
EMIT "Stack[-1] = 0";


void func_611(bool var_71_bool)
{
	var_71_bool = true;
}


void func_613(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_618(float var_19_float, object var_20_object)
{
	cvector var_24_cvector;
	@GetPosition(var_24_cvector);
	cvector var_25_cvector;
	var_20_object->GetPosition(var_25_cvector);
	var_19_float = (var_25_cvector - var_24_cvector) | (var_25_cvector - var_24_cvector);
}


void func_749(object var_29_object)
{
	float var_32_float;
	var_29_object->GetEyesHeight(var_32_float);
	cvector var_33_cvector = [0.0, 0.0, 0.0];
	var_34_float = GetByIndex(var_33_cvector, 1);
	var_32_float = var_34_float;
	SetByIndex(var_33_cvector, 1) = var_34_float;
	@LookAsync(var_29_object, "head", var_33_cvector);
}


void func_1008(object var_69_object, string var_70_string, float var_71_float)
{
	object var_79_object;
	@GetMainOutdoorScene(var_79_object);
	if(var_79_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_77_cvector;
	cvector var_78_cvector;
	bool var_80_bool;
	var_79_object->GetLocator(var_70_string, var_80_bool, var_77_cvector, var_78_cvector);
	if(!var_80_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_70_string) + " doesnt exist");
	var_79_object->GetMap(var_69_object);
	if(var_69_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_90_float = GetByIndex(var_77_cvector, 0);
	var_91_float = GetByIndex(var_77_cvector, 2);
	var_69_object->SetMapParams(var_90_float, var_91_float, var_71_float);
}
EMIT "Stack[-2] = 0";


void func_626(bool var_23_bool)
{
	bool var_25_bool;
	@IsLoaded(var_25_bool);
	var_25_bool = var_23_bool;
}


void func_631(bool var_24_bool, object var_25_object, float var_26_float)
{
	cvector var_37_cvector; bool var_44_bool;
	var_25_object->GetPosition(var_37_cvector);
	float var_36_float;
	var_25_object->GetEyesHeight(var_36_float);
	var_45_float = GetByIndex(var_37_cvector, 1);
	SetByIndex(var_37_cvector, 1) = (var_45_float + var_36_float);
	cvector var_38_cvector;
	@GetPosition(var_38_cvector);
	@GetEyesHeight(var_36_float);
	var_46_float = GetByIndex(var_38_cvector, 1);
	SetByIndex(var_38_cvector, 1) = (var_46_float + var_36_float);
	cvector var_39_cvector = var_37_cvector - var_38_cvector;
	var_47_float = GetByIndex(var_39_cvector, 1);
	SetByIndex(var_39_cvector, 1) = (float)0;
	var_49_float = sqrt(var_39_cvector | var_39_cvector);
	var_39_cvector /= var_49_float;
	cvector var_40_cvector = -var_39_cvector;
	cvector var_51_cvector;
	func_773(var_51_cvector, (var_40_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_41_cvector = ((var_39_cvector * var_26_float) + (var_51_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_43_bool;
	@IsOverrideActive(var_43_bool);
	if(var_43_bool != 0)
		var_24_bool = false;
	@StopWorld();
	@CameraTransit((var_38_cvector + var_41_cvector), var_40_cvector, true);
	var_65_float = GetByIndex(var_41_cvector, 0);
	var_66_float = GetByIndex(var_41_cvector, 2);
	@Rotate(var_65_float, var_66_float);
	bool var_67_bool;
	func_1090(var_67_bool);
	if(var_67_bool != 0) {
	} else {
		@HasAnimationTrack(var_44_bool, "head");
		if(var_44_bool == 0) goto Label_694;
		@LookAsyncCamera("head");
	}
Label_694:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_24_bool = true;
	
}


void func_760(void)
{
	bool var_15_bool;
	func_1090(var_15_bool);
	if(var_15_bool != 0)
		@lshStopSpeech();
}


void func_893(object var_103_object)
{
	@Trace("Rifle is given");
	object var_106_object;
	@CreateInvItem(var_106_object);
	var_106_object->SetItemName("Rifle");
	var_106_object->SetProperty("durability", 100);
	object var_111_object; object var_112_object;
	var_103_object = var_111_object;
	var_106_object = var_112_object;
	func_800(var_111_object, var_112_object, 1);
}
EMIT "Stack[-1] = 0";


void func_767(object var_19_object)
{
	object var_21_object;
	@self(var_21_object);
	var_21_object = var_19_object;
}
EMIT "Stack[-1] = 0";


