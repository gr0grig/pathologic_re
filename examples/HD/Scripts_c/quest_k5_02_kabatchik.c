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
			func_658();
			if(var_13_bool == 27203) {
				object var_18_object; object var_19_object;
				var_18_object = var_1_object;
				var_19_object = var_0_object;
				func_715();
				object var_61_object = var_1_object;
				func_738(var_0_object);
			}
			if(var_12_bool == 27198) {
				func_142(var_13_bool, "Neutral");
				var_0_object->SetMessage(525906); //@t
				var_0_object->ClearReplies(); //@t
				bool var_107_bool;
				func_754(var_1_object);
				if(var_107_bool != 0)
					var_0_object->AddReply(525907, 27200, 27199); //@t
				var_0_object->AddReply(525912, -1, 27204); //@t
				var_0_object->AddReply(529037, -1, 30478); //@t
				return 0;
			}
			if(var_12_bool == 27200) {
				func_142(var_13_bool, "Neutral");
				var_0_object->SetMessage(525908); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525909, 27202, 27201); //@t
				return 0;
			}
			if(var_12_bool == 27202) {
				func_142(var_13_bool, "Neutral");
				var_0_object->SetMessage(525910); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525911, -1, 27203); //@t
				return 0;
			}
			var_3_string = true;
			bool var_138_bool;
			func_895(var_138_bool);
			if(var_138_bool != 0)
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
		func_282(var_11_bool, (float)300, (float)100);
	}

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool, object var_12_object)
	{
		func_416(var_11_bool, var_12_object);
		int var_16_int; object var_17_object;
		var_12_object = var_17_object;
		TaskCall(0);
		func_0(var_18_object, var_16_int, var_17_object);
		TaskReturn();
	}

	// @pe
	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool, string var_12_string)
	{
		if(var_12_string == "cleanup")
			func_300(var_12_string);
	}

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool)
	{
		if(var_6_int != 0)
			func_416(var_10_bool, var_11_bool);
		bool var_16_bool = false;
		if(var_5_int != 0) {
			bool var_18_bool;
			func_349(var_18_bool);
			if(var_18_bool != 0)
				var_16_bool = true;
		}
		if(var_16_bool != 0) {
			object var_19_object;
			func_665(var_19_object);
			@RemoveActor(var_19_object);
		}
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool, int var_12_int)
	{
		if(var_12_int == 10) {
			bool var_15_bool;
			func_378(var_10_bool, var_11_bool, var_12_int, var_15_bool);
			if(var_15_bool != 0) {
				if(!var_2_object) { //@nz
					func_647(var_4_bool);
					var_2_object = true;
				}
			} else if(var_2_object != 0) {
				@UnlookAsync("head");
				var_2_object = false;
			}
		}
	
	}

}


void func_0(object var_0_object, int var_16_int, object var_17_object)
{
	var_0_object = var_17_object;
	bool var_27_bool; object var_28_object;
	var_17_object = var_28_object;
	func_529(var_27_bool, var_28_object, 70.0);
	if(!var_27_bool) { //@nz
		var_16_int = -2;
		return 8;
	}
	object var_23_object;
	@CreateDialog(var_23_object);
	int var_75_int;
	func_889(var_75_int);
	var_23_object->SetNPCName(var_75_int);
	int var_76_int;
	func_887(var_76_int);
	var_23_object->SetNPCDescription(var_76_int);
	string var_77_string;
	func_891(var_77_string);
	var_23_object->SetPhoto(var_77_string);
	string var_78_string;
	func_893(var_78_string);
	var_23_object->SetPhoto2(var_78_string);
	int var_79_int;
	func_870(var_79_int);
	var_23_object->SetPlayerName(var_79_int);
	bool var_24_bool;
	@IsOverrideActive(var_24_bool);
	if(var_24_bool != 0) {
		var_16_int = -2;
		return 8;
	}
	@DoDialog(var_23_object);
	object var_88_object; object var_89_object;
	var_17_object = var_88_object;
	var_23_object = var_89_object;
	TaskCall(1);
	func_74(var_90_object, var_91_object, var_92_string, var_93_bool, var_88_object, var_89_object);
	TaskReturn();
	bool var_26_bool;
	var_23_object->IsDialogEnd(var_26_bool);
	
	for(;;) {
		var_148_bool = !var_26_bool; //@nz
		if(var_148_bool == 0) goto Label_63;
		@sync();
		var_23_object->IsDialogEnd(var_26_bool);
	}
	
Label_63:
	object var_149_object;
	var_17_object = var_149_object;
	func_598();
	@StopDialog(var_23_object);
	var_23_object->GetReturnValue(-1);
	int var_25_int = var_16_int;
}
EMIT "Stack[-4] = 0";


void func_516(float var_19_float, object var_20_object)
{
	cvector var_24_cvector;
	@GetPosition(var_24_cvector);
	cvector var_25_cvector;
	var_20_object->GetPosition(var_25_cvector);
	var_19_float = (var_25_cvector - var_24_cvector) | (var_25_cvector - var_24_cvector);
}


void func_647(object var_29_object)
{
	float var_32_float;
	var_29_object->GetEyesHeight(var_32_float);
	cvector var_33_cvector = [0.0, 0.0, 0.0];
	var_34_float = GetByIndex(var_33_cvector, 1);
	var_32_float = var_34_float;
	SetByIndex(var_33_cvector, 1) = var_34_float;
	@LookAsync(var_29_object, "head", var_33_cvector);
}


void func_779(object var_52_object)
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


void func_524(bool var_23_bool)
{
	bool var_25_bool;
	@IsLoaded(var_25_bool);
	var_25_bool = var_23_bool;
}


void func_893(string var_78_string)
{
	var_78_string = "ui/NPC_Citizen3_b.png";
}


// @pe
void func_142(object var_2_object, string var_95_string)
{
	bool var_96_bool;
	func_895(var_96_bool);
	if(!var_96_bool) //@nz
		return 0;
	if(var_95_string == var_2_object)
		return 0;
	string var_99_string; bool var_100_bool;
	var_95_string = var_99_string;
	if(var_95_string == "")
		var_100_bool = false;
	else
		var_100_bool = true;
	func_632(var_99_string, var_100_bool);
	var_2_object = var_95_string;
	
}


void func_529(bool var_27_bool, object var_28_object, float var_29_float)
{
	cvector var_40_cvector; bool var_47_bool;
	var_28_object->GetPosition(var_40_cvector);
	float var_39_float;
	var_28_object->GetEyesHeight(var_39_float);
	var_48_float = GetByIndex(var_40_cvector, 1);
	SetByIndex(var_40_cvector, 1) = (var_48_float + var_39_float);
	cvector var_41_cvector;
	@GetPosition(var_41_cvector);
	@GetEyesHeight(var_39_float);
	var_49_float = GetByIndex(var_41_cvector, 1);
	SetByIndex(var_41_cvector, 1) = (var_49_float + var_39_float);
	cvector var_42_cvector = var_40_cvector - var_41_cvector;
	var_50_float = GetByIndex(var_42_cvector, 1);
	SetByIndex(var_42_cvector, 1) = (float)0;
	var_52_float = sqrt(var_42_cvector | var_42_cvector);
	var_42_cvector /= var_52_float;
	cvector var_43_cvector = -var_42_cvector;
	cvector var_54_cvector;
	func_671(var_54_cvector, (var_43_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_44_cvector = ((var_42_cvector * var_29_float) + (var_54_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_46_bool;
	@IsOverrideActive(var_46_bool);
	if(var_46_bool != 0)
		var_27_bool = false;
	@StopWorld();
	@CameraTransit((var_41_cvector + var_44_cvector), var_43_cvector, true);
	var_68_float = GetByIndex(var_44_cvector, 0);
	var_69_float = GetByIndex(var_44_cvector, 2);
	@Rotate(var_68_float, var_69_float);
	bool var_70_bool;
	func_895(var_70_bool);
	if(var_70_bool != 0) {
	} else {
		@HasAnimationTrack(var_47_bool, "head");
		if(var_47_bool == 0) goto Label_592;
		@LookAsyncCamera("head");
	}
Label_592:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_27_bool = true;
	
}


void func_658(void)
{
	bool var_15_bool;
	func_895(var_15_bool);
	if(var_15_bool != 0)
		@lshStopSpeech();
}


void func_895(bool var_70_bool)
{
	var_70_bool = false;
}


void func_792(bool var_43_bool, object var_44_object, int var_45_int)
{
	object var_52_object;
	func_779(var_52_object);
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


void func_665(object var_19_object)
{
	object var_21_object;
	@self(var_21_object);
	var_21_object = var_19_object;
}
EMIT "Stack[-1] = 0";


void func_282(int var_6_int, float var_12_float, float var_13_float)
{
	float var_14_float; bool var_15_bool; float var_16_float; bool var_17_bool;
	var_6_int = false;
	
	for(;;) {
		@rand(var_16_float, 3);
		@Sleep((var_16_float + 3), var_17_bool);
		var_6_int = true;
		float var_21_float; float var_22_float;
		var_12_float = var_21_float;
		func_351(var_22_float, var_14_float, var_15_bool, var_16_float, var_17_bool, var_21_float, var_22_float);
		var_6_int = false;
	}
}
EMIT "Return(); Pop(4)";


void func_671(cvector var_54_cvector, cvector var_55_cvector)
{
	float var_58_float = sqrt(var_55_cvector | var_55_cvector);
	if(var_58_float < 0.000001)
		var_54_cvector = [0.0, 0.0, 0.0];
	var_54_cvector = var_55_cvector / var_58_float;
}


// @pe
void func_416(object var_2_object, string var_3_string)
{
	func_511();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
}


void func_681(int var_115_int, string var_116_string)
{
	int var_118_int;
	@GetVariable(var_116_string, var_118_int);
	var_118_int = var_115_int;
}


void func_300(int var_5_int)
{
	var_5_int = true;
	bool var_15_bool = false;
	bool var_16_bool;
	func_524(var_16_bool);
	if(!var_16_bool) { //@nz
		bool var_20_bool;
		func_349(var_20_bool);
		if(var_20_bool != 0)
			var_15_bool = true;
	}
	if(var_15_bool != 0) {
		object var_21_object;
		func_665(var_21_object);
		@RemoveActor(var_21_object);
	}
}


void func_430(void)
{
	int var_39_int; int var_40_int; bool var_41_bool; float var_42_float; bool var_43_bool;
	@WaitForAnimEnd();
	bool var_44_bool;
	func_524(var_44_bool);
	if(!var_44_bool) //@nz
		return 14;
	int var_46_int;
	func_698(var_46_int);
	int var_37_int;
	var_46_int = var_37_int;
	int var_38_int = 0;
	
	for(;;) {
		bool var_59_bool = false;
		if(var_38_int < 5) {
			bool var_62_bool;
			func_524(var_62_bool);
			if(var_62_bool != 0)
				var_59_bool = true;
		}
		if(var_59_bool != 0) {
			@irand(var_39_int, 3);
			if(var_39_int == 0) {
				if(var_37_int == 0) goto Label_477;
				@irand(var_40_int, var_37_int);
				string var_68_string; int var_69_int;
				var_40_int = var_69_int;
				func_691(var_68_string, var_69_int);
				@PlayAnimation("all", var_68_string);
				@WaitForAnimEnd(var_41_bool);
				if(!var_41_bool) { //@nz
				} else {
			} else {
			if(var_39_int == 1) {
				@rand(var_42_float, 4);
				@Sleep((var_42_float + 1), var_43_bool);
				if(!var_43_bool) { //@nz
					goto Label_506;
				}
			} else if(var_38_int != 0) {
				goto Label_506;
			}
			}
					bool var_71_bool;
					func_509(var_71_bool);
					var_72_bool = !var_71_bool; //@nz
					if(var_72_bool == 0) goto Label_501;
			}
		}
	Label_506:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_501:
		@ResetAAS();
		var_38_int += 1;
	}
	
}


void func_686(float var_35_float)
{
	float var_37_float;
	@GetGameTime(var_37_float);
	var_37_float = var_35_float;
}


void func_691(string var_52_string, int var_53_int)
{
	string var_55_string = "idle";
	if(var_53_int != 0)
		var_55_string += var_53_int;
	var_55_string = var_52_string;
}


void func_820(object var_24_object)
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


void func_698(int var_46_int)
{
	int var_49_int; bool var_50_bool;
	var_49_int = 0;
	
	for(;;) {
		string var_52_string; int var_53_int;
		var_49_int = var_53_int;
		func_691(var_52_string, var_53_int);
		@HasAnimation(var_50_bool, "all", var_52_string);
		if(!var_50_bool) //@nz
			break;
		var_49_int += 1;
	}
	var_49_int = var_46_int;
}


void func_837(object var_63_object, string var_64_string, float var_65_float)
{
	object var_73_object;
	@GetMainOutdoorScene(var_73_object);
	if(var_73_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_71_cvector;
	cvector var_72_cvector;
	bool var_74_bool;
	var_73_object->GetLocator(var_64_string, var_74_bool, var_71_cvector, var_72_cvector);
	if(!var_74_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_64_string) + " doesnt exist");
	var_73_object->GetMap(var_63_object);
	if(var_63_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_84_float = GetByIndex(var_71_cvector, 0);
	var_85_float = GetByIndex(var_71_cvector, 2);
	var_63_object->SetMapParams(var_84_float, var_85_float, var_65_float);
}
EMIT "Stack[-2] = 0";


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_88_object, object var_89_object)
{
	var_0_object = var_89_object;
	var_3_string = false;
	if(1 != 0) {
		func_142(var_89_object, "Neutral");
		var_0_object->SetMessage(525906); //@t
		var_0_object->ClearReplies(); //@t
		bool var_113_bool;
		func_754(var_88_object);
		if(var_113_bool != 0)
			var_0_object->AddReply(525907, 27200, 27199); //@t
		var_0_object->AddReply(525912, -1, 27204); //@t
		var_0_object->AddReply(529037, -1, 30478); //@t
		goto Label_112;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_112:
	bool var_130_bool;
	func_895(var_130_bool);
	if(var_130_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_616(var_2_object);
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


void func_715(void)
{
	@SetVariable("k5q02", 3);
	object var_24_object;
	func_820(var_24_object);
	object var_21_object;
	var_24_object = var_21_object;
	float var_35_float;
	func_686(var_35_float);
	var_21_object->AddMark("k5q02KabatchikGotoAlexandr", "pt_map_alexandr", 0, 511155, var_35_float);
	func_766();
}
EMIT "Stack[-1] = 0";


void func_598(void)
{
	bool var_151_bool;
	@CameraSwitchToNormal(true);
	bool var_153_bool;
	func_895(var_153_bool);
	if(var_153_bool != 0) {
	} else {
		@HasAnimationTrack(var_151_bool, "head");
		if(var_151_bool == 0) goto Label_615;
		@UnlookAsync("head");
	}
Label_615:
	
}


void func_349(bool var_18_bool)
{
	var_18_bool = true;
}


// @pe
void func_351(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_21_float, float var_22_float)
{
	bool var_23_bool;
	func_524(var_23_bool);
	if(!var_23_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_21_float;
	var_1_object = var_22_float;
	@SetTimer(10, 1.0);
	func_430();
	if(!false) //@nz
		@KillTimer(10);
}


// @pe
void func_738(object var_62_object)
{
	object var_66_object;
	func_820(var_66_object);
	object var_63_object;
	var_66_object = var_63_object;
	func_837(var_63_object, "pt_map_alexandr", (float)2);
	object var_86_object;
	func_820(var_86_object);
	var_62_object->ShowMap(var_86_object);
}


void func_870(int var_79_int)
{
	int var_81_int;
	@GetVariable("branch", var_81_int);
	if(var_81_int == 0) {
		var_79_int = 1;
		return 2;
	EMIT "GOTO 0x375";
	}
	if(var_81_int == 1) {
		var_79_int = 2;
		return 2;
	}
	var_79_int = 3;
}


void func_616(string var_132_string)
{
	bool var_136_bool; float var_137_float; float var_138_float;
	@lshHasAnimation(var_136_bool, var_132_string);
	if(var_136_bool != 0) {
		@lshGetAnimTimes(var_132_string, var_137_float, var_138_float);
		@lshPlayAnimation(var_137_float, var_138_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_132_string);
	}
	
}


// @pe
void func_754(bool var_113_bool)
{
	int var_115_int;
	func_681(var_115_int, "k5q02");
	if(var_115_int == 2)
		var_113_bool = true;
	var_113_bool = false;
}


void func_887(int var_76_int)
{
	var_76_int = 515563;
}


void func_632(string var_99_string, bool var_100_bool)
{
	bool var_106_bool; float var_107_float; float var_108_float;
	@lshHasAnimation(var_106_bool, var_99_string);
	if(var_106_bool != 0) {
		@lshGetAnimTimes(var_99_string, var_107_float, var_108_float);
		@lshPlayAnimation(var_107_float, var_108_float, var_100_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_99_string);
	}
	
}


void func_889(int var_75_int)
{
	var_75_int = 503348;
}


void func_378(object var_0_object, object var_1_object, bool var_4_bool, bool var_15_bool)
{
	if(var_4_bool == null)
		var_15_bool = false;
	float var_19_float;
	func_516(var_19_float, var_4_bool);
	float var_17_float = sqrt(var_19_float);
	if(var_2_object != 0)
		var_17_float -= var_1_object;
	var_15_bool = var_17_float < var_0_object;
}


void func_891(string var_77_string)
{
	var_77_string = "ui/NPC_Citizen3.png";
}


void func_509(bool var_71_bool)
{
	var_71_bool = true;
}


void func_766(void)
{
	object var_39_object;
	@CreateDiaryEntry(var_39_object, 400, 2, 525938);
	bool var_43_bool; object var_44_object;
	var_39_object = var_44_object;
	func_792(var_43_bool, var_44_object, 397);
}
EMIT "Stack[-1] = 0";


void func_511(void)
{
	@StopAnimation();
	@StopGroup0();
}


