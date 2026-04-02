// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool)
	{
		if(1 != 0) {
			func_626();
			if(var_7_bool == 22187) {
				object var_12_object; object var_13_object;
				var_12_object = var_1_object;
				var_13_object = var_0_object;
				func_683();
				object var_55_object = var_1_object;
				func_706(var_0_object);
			}
			if(var_6_int == 22184) {
				bool var_83_bool;
				func_722(var_1_object);
				if(var_83_bool != 0) {
					func_157(var_7_bool, "Neutral");
					var_0_object->SetMessage(520971); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(520972, 22186, 22185); //@t
					var_0_object->AddReply(524081, 25382, 25381); //@t
					var_0_object->AddReply(524088, 25386, 25388); //@t
					return 0;
				}
				func_157(var_7_bool, "Neutral");
				var_0_object->SetMessage(520975); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520976, -1, 22189); //@t
				return 0;
			}
			if(var_6_int == 25382) {
				func_157(var_7_bool, "Neutral");
				var_0_object->SetMessage(524082); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524083, 25384, 25383); //@t
				var_0_object->AddReply(524089, 25392, 25391); //@t
				return 0;
			}
			if(var_6_int == 25392) {
				func_157(var_7_bool, "Neutral");
				var_0_object->SetMessage(524090); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524091, 22186, 25393); //@t
				return 0;
			}
			if(var_6_int == 25384) {
				func_157(var_7_bool, "Neutral");
				var_0_object->SetMessage(524084); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524085, 25386, 25385); //@t
				return 0;
			}
			if(var_6_int == 25386) {
				func_157(var_7_bool, "Neutral");
				var_0_object->SetMessage(524086); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524087, 22186, 25387); //@t
				return 0;
			}
			if(var_6_int == 22186) {
				func_157(var_7_bool, "Neutral");
				var_0_object->SetMessage(520973); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520974, -1, 22187); //@t
				return 0;
			}
			var_3_string = true;
			bool var_156_bool;
			func_863(var_156_bool);
			if(var_156_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xb4";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool)
	{
	
	Label_366:
		for(;;) {
			bool var_8_bool;
			func_523(var_8_bool);
			var_11_bool = !var_8_bool; //@nz
			if(var_11_bool == 0) goto Label_374;
			@Hold();
		}
	
	Label_374:
		float var_7_float;
		@rand(var_7_float, 3);
		@Sleep(var_7_float + 3);
		func_437();
		goto Label_366;
	}
	EMIT "Return(); Pop(2)";

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object)
	{
		func_518();
		int var_7_int; object var_8_object;
		var_6_object = var_8_object;
		TaskCall(0);
		func_0(var_9_object, var_7_int, var_8_object);
		TaskReturn();
	}

	// @pe
	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, string var_6_string)
	{
		if(var_6_string == "cleanup")
			func_386(var_6_string);
	}

	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool)
	{
		@StopGroup0();
		@sync();
	}

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool)
	{
		bool var_6_bool = false;
		if(var_0_object != 0) {
			bool var_8_bool;
			func_435(var_8_bool);
			if(var_8_bool != 0)
				var_6_bool = true;
		}
		if(var_6_bool != 0) {
			object var_9_object;
			func_633(var_9_object);
			@RemoveActor(var_9_object);
		}
	}

}


void func_0(object var_0_object, int var_7_int, object var_8_object)
{
	var_0_object = var_8_object;
	bool var_18_bool; object var_19_object;
	var_8_object = var_19_object;
	func_528(var_18_bool, var_19_object, 130.0);
	if(!var_18_bool) { //@nz
		var_7_int = -2;
		return 8;
	}
	object var_14_object;
	@CreateDialog(var_14_object);
	int var_65_int;
	func_857(var_65_int);
	var_14_object->SetNPCName(var_65_int);
	int var_66_int;
	func_855(var_66_int);
	var_14_object->SetNPCDescription(var_66_int);
	string var_67_string;
	func_859(var_67_string);
	var_14_object->SetPhoto(var_67_string);
	string var_68_string;
	func_861(var_68_string);
	var_14_object->SetPhoto2(var_68_string);
	int var_69_int;
	func_838(var_69_int);
	var_14_object->SetPlayerName(var_69_int);
	bool var_15_bool;
	@IsOverrideActive(var_15_bool);
	if(var_15_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	@DoDialog(var_14_object);
	object var_78_object; object var_79_object;
	var_8_object = var_78_object;
	var_14_object = var_79_object;
	TaskCall(1);
	func_74(var_80_object, var_81_object, var_82_string, var_83_bool, var_78_object, var_79_object);
	TaskReturn();
	bool var_17_bool;
	var_14_object->IsDialogEnd(var_17_bool);
	
	for(;;) {
		var_133_bool = !var_17_bool; //@nz
		if(var_133_bool == 0) goto Label_63;
		@sync();
		var_14_object->IsDialogEnd(var_17_bool);
	}
	
Label_63:
	object var_134_object;
	var_8_object = var_134_object;
	func_596();
	@StopDialog(var_14_object);
	var_14_object->GetReturnValue(-1);
	int var_16_int = var_7_int;
}
EMIT "Stack[-4] = 0";


void func_386(object var_0_object)
{
	var_0_object = true;
	bool var_10_bool;
	@IsLoaded(var_10_bool);
	bool var_11_bool = false;
	if(!var_10_bool) { //@nz
		bool var_13_bool;
		func_435(var_13_bool);
		if(var_13_bool != 0)
			var_11_bool = true;
	}
	if(var_11_bool != 0) {
		object var_14_object;
		func_633(var_14_object);
		@RemoveActor(var_14_object);
	}
}


void func_516(bool var_56_bool)
{
	var_56_bool = true;
}


void func_518(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_649(int var_87_int, string var_88_string)
{
	int var_90_int;
	@GetVariable(var_88_string, var_90_int);
	var_90_int = var_87_int;
}


void func_523(bool var_8_bool)
{
	bool var_10_bool;
	@IsLoaded(var_10_bool);
	var_10_bool = var_8_bool;
}


void func_654(float var_29_float)
{
	float var_31_float;
	@GetGameTime(var_31_float);
	var_31_float = var_29_float;
}


void func_528(bool var_18_bool, object var_19_object, float var_20_float)
{
	cvector var_31_cvector; bool var_38_bool;
	var_19_object->GetPosition(var_31_cvector);
	float var_30_float;
	var_19_object->GetEyesHeight(var_30_float);
	var_39_float = GetByIndex(var_31_cvector, 1);
	SetByIndex(var_31_cvector, 1) = (var_39_float + var_30_float);
	cvector var_32_cvector;
	@GetPosition(var_32_cvector);
	@GetEyesHeight(var_30_float);
	var_40_float = GetByIndex(var_32_cvector, 1);
	SetByIndex(var_32_cvector, 1) = (var_40_float + var_30_float);
	cvector var_33_cvector = var_31_cvector - var_32_cvector;
	var_41_float = GetByIndex(var_33_cvector, 1);
	SetByIndex(var_33_cvector, 1) = (float)0;
	var_43_float = sqrt(var_33_cvector | var_33_cvector);
	var_33_cvector /= var_43_float;
	cvector var_34_cvector = -var_33_cvector;
	cvector var_45_cvector;
	func_639(var_45_cvector, (var_34_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_35_cvector = ((var_33_cvector * var_20_float) + (var_45_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_37_bool;
	@IsOverrideActive(var_37_bool);
	if(var_37_bool != 0)
		var_18_bool = false;
	@StopWorld();
	@CameraTransit((var_32_cvector + var_35_cvector), var_34_cvector);
	var_58_float = GetByIndex(var_35_cvector, 0);
	var_59_float = GetByIndex(var_35_cvector, 2);
	@Rotate(var_58_float, var_59_float);
	bool var_60_bool;
	func_863(var_60_bool);
	if(var_60_bool != 0) {
	} else {
		@HasAnimationTrack(var_38_bool, "head");
		if(var_38_bool == 0) goto Label_590;
		@LookAsyncCamera("head");
	}
Label_590:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_18_bool = true;
	
}


void func_659(string var_37_string, int var_38_int)
{
	string var_40_string = "idle";
	if(var_38_int != 0)
		var_40_string += var_38_int;
	var_40_string = var_37_string;
}


void func_788(object var_18_object)
{
	object var_21_object; object var_22_object;
	@GetMainOutdoorScene(var_21_object);
	if(var_21_object == null) {
		@Trace("Can't find main outdoor scene");
		var_22_object = null;
		var_22_object = var_18_object;
	}
	var_21_object->GetMap(var_22_object);
	var_22_object = var_18_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_666(int var_31_int)
{
	int var_34_int; bool var_35_bool;
	var_34_int = 0;
	
	for(;;) {
		string var_37_string; int var_38_int;
		var_34_int = var_38_int;
		func_659(var_37_string, var_38_int);
		@HasAnimation(var_35_bool, "all", var_37_string);
		if(!var_35_bool) //@nz
			break;
		var_34_int += 1;
	}
	var_34_int = var_31_int;
}


// @pe
void func_157(object var_2_object, string var_93_string)
{
	bool var_94_bool;
	func_863(var_94_bool);
	if(!var_94_bool) //@nz
		return 0;
	if(var_93_string == var_2_object)
		return 0;
	string var_97_string; bool var_98_bool;
	var_93_string = var_97_string;
	if(var_93_string == "")
		var_98_bool = false;
	else
		var_98_bool = true;
	func_620(var_97_string, var_98_bool);
	var_2_object = var_93_string;
	
}


void func_805(object var_57_object, string var_58_string, float var_59_float)
{
	object var_67_object;
	@GetMainOutdoorScene(var_67_object);
	if(var_67_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_65_cvector;
	cvector var_66_cvector;
	bool var_68_bool;
	var_67_object->GetLocator(var_58_string, var_68_bool, var_65_cvector, var_66_cvector);
	if(!var_68_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_58_string) + " doesnt exist");
	var_67_object->GetMap(var_57_object);
	if(var_57_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_78_float = GetByIndex(var_65_cvector, 0);
	var_79_float = GetByIndex(var_65_cvector, 2);
	var_57_object->SetMapParams(var_78_float, var_79_float, var_59_float);
}
EMIT "Stack[-2] = 0";


void func_683(void)
{
	@SetVariable("b7q01", 2);
	object var_18_object;
	func_788(var_18_object);
	object var_15_object;
	var_18_object = var_15_object;
	float var_29_float;
	func_654(var_29_float);
	var_15_object->AddMark("b7q01BirdmaskGotoMat", "pt_map_mat", 1, 521022, var_29_float);
	func_734();
}
EMIT "Stack[-1] = 0";


void func_435(bool var_8_bool)
{
	var_8_bool = true;
}


void func_437(void)
{
	int var_24_int; int var_25_int; bool var_26_bool; float var_27_float; bool var_28_bool;
	@WaitForAnimEnd();
	bool var_29_bool;
	func_523(var_29_bool);
	if(!var_29_bool) //@nz
		return 14;
	int var_31_int;
	func_666(var_31_int);
	int var_22_int;
	var_31_int = var_22_int;
	int var_23_int = 0;
	
	for(;;) {
		bool var_44_bool = false;
		if(var_23_int < 5) {
			bool var_47_bool;
			func_523(var_47_bool);
			if(var_47_bool != 0)
				var_44_bool = true;
		}
		if(var_44_bool != 0) {
			@irand(var_24_int, 3);
			if(var_24_int == 0) {
				if(var_22_int == 0) goto Label_484;
				@irand(var_25_int, var_22_int);
				string var_53_string; int var_54_int;
				var_25_int = var_54_int;
				func_659(var_53_string, var_54_int);
				@PlayAnimation("all", var_53_string);
				@WaitForAnimEnd(var_26_bool);
				if(!var_26_bool) { //@nz
				} else {
			} else {
			if(var_24_int == 1) {
				@rand(var_27_float, 4);
				@Sleep((var_27_float + 1), var_28_bool);
				if(!var_28_bool) { //@nz
					goto Label_513;
				}
			} else if(var_23_int != 0) {
				goto Label_513;
			}
			}
					bool var_56_bool;
					func_516(var_56_bool);
					var_57_bool = !var_56_bool; //@nz
					if(var_57_bool == 0) goto Label_508;
			}
		}
	Label_513:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_508:
		@ResetAAS();
		var_23_int += 1;
	}
	
}


// @pe
void func_706(object var_56_object)
{
	object var_60_object;
	func_788(var_60_object);
	object var_57_object;
	var_60_object = var_57_object;
	func_805(var_57_object, "pt_map_mat", (float)2);
	object var_80_object;
	func_788(var_80_object);
	var_56_object->ShowMap(var_80_object);
}


void func_838(int var_69_int)
{
	int var_71_int;
	@GetVariable("branch", var_71_int);
	if(var_71_int == 0) {
		var_69_int = 1;
		return 2;
	EMIT "GOTO 0x355";
	}
	if(var_71_int == 1) {
		var_69_int = 2;
		return 2;
	}
	var_69_int = 3;
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_78_object, object var_79_object)
{
	var_0_object = var_79_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_85_bool;
		func_722(var_78_object);
		if(var_85_bool != 0) {
			func_157(var_79_object, "Neutral");
			var_0_object->SetMessage(520971); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(520972, 22186, 22185); //@t
			var_0_object->AddReply(524081, 25382, 25381); //@t
			var_0_object->AddReply(524088, 25386, 25388); //@t
		} else {
					func_157(var_79_object, "Neutral");
					var_0_object->SetMessage(520975); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(520976, -1, 22189); //@t
		}
	}
	for(;;) {
		bool var_115_bool;
		func_863(var_115_bool);
		if(var_115_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_613(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_156;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_156:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4e";


// @pe
void func_722(bool var_85_bool)
{
	int var_87_int;
	func_649(var_87_int, "b7q01");
	if(var_87_int == 1)
		var_85_bool = true;
	var_85_bool = false;
}


void func_596(void)
{
	bool var_136_bool;
	@CameraSwitchToNormal();
	bool var_137_bool;
	func_863(var_137_bool);
	if(var_137_bool != 0) {
	} else {
		@HasAnimationTrack(var_136_bool, "head");
		if(var_136_bool == 0) goto Label_612;
		@UnlookAsync("head");
	}
Label_612:
	
}


void func_855(int var_66_int)
{
	var_66_int = 515571;
}


void func_857(int var_65_int)
{
	var_65_int = 504029;
}


void func_859(string var_67_string)
{
	var_67_string = "ui/NPC_bmask.png";
}


void func_861(string var_68_string)
{
	var_68_string = "ui/NPC_bmask_b.png";
}


void func_734(void)
{
	object var_33_object;
	@CreateDiaryEntry(var_33_object, 255, 1, 521023);
	bool var_37_bool; object var_38_object;
	var_33_object = var_38_object;
	func_760(var_37_bool, var_38_object, 253);
}
EMIT "Stack[-1] = 0";


void func_863(bool var_60_bool)
{
	var_60_bool = false;
}


void func_613(string var_117_string)
{
	float var_120_float; float var_121_float;
	@lshGetAnimTimes(var_117_string, var_120_float, var_121_float);
	@lshPlayAnimation(var_120_float, var_121_float, false);
}


void func_747(object var_46_object)
{
	object var_48_object;
	@GetDiaryRoot(var_48_object);
	if(!var_48_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_46_object = false;
	}
	var_48_object = var_46_object;
}
EMIT "Stack[-1] = 0";


void func_620(string var_97_string, bool var_98_bool)
{
	float var_103_float; float var_104_float;
	@lshGetAnimTimes(var_97_string, var_103_float, var_104_float);
	@lshPlayAnimation(var_103_float, var_104_float, var_98_bool);
}


void func_626(void)
{
	bool var_9_bool;
	func_863(var_9_bool);
	if(var_9_bool != 0)
		@lshStopSpeech();
}


void func_760(bool var_37_bool, object var_38_object, int var_39_int)
{
	object var_46_object;
	func_747(var_46_object);
	object var_43_object;
	var_46_object = var_43_object;
	object var_44_object;
	var_43_object->Find(var_39_int, var_44_object);
	if(!var_44_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_39_int);
		var_37_bool = false;
	}
	var_44_object->AddChild(var_38_object);
	@SendWorldWndMessage(7);
	int var_45_int;
	var_38_object->GetCategory(var_45_int);
	@SetDiarySection(var_45_int);
	var_37_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_633(object var_9_object)
{
	object var_11_object;
	@self(var_11_object);
	var_11_object = var_9_object;
}
EMIT "Stack[-1] = 0";


void func_639(cvector var_45_cvector, cvector var_46_cvector)
{
	float var_49_float = sqrt(var_46_cvector | var_46_cvector);
	if(var_49_float < 0.000001)
		var_45_cvector = [0.0, 0.0, 0.0];
	var_45_cvector = var_46_cvector / var_49_float;
}


