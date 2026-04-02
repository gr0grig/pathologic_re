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
			func_609();
			if(var_7_bool == 22720) {
				object var_12_object; object var_13_object;
				var_12_object = var_1_object;
				var_13_object = var_0_object;
				func_678();
			}
			if(var_7_bool == 22722) {
				object var_18_object; object var_19_object;
				var_18_object = var_1_object;
				var_19_object = var_0_object;
				func_684();
				object var_71_object = var_1_object;
				func_715(var_0_object);
			}
			if(var_6_int == 22719) {
				func_146(var_7_bool, "Neutral");
				var_0_object->SetMessage(521558); //@t
				var_0_object->ClearReplies(); //@t
				bool var_112_bool = false;
				bool var_113_bool;
				func_731(var_1_object);
				if(var_113_bool != 0) {
					bool var_119_bool;
					func_743(var_1_object);
					if(var_119_bool != 0)
						var_112_bool = true;
				}
				if(var_112_bool != 0)
					var_0_object->AddReply(521559, 22721, 22720); //@t
				var_0_object->AddReply(521562, -1, 22723); //@t
				return 0;
			}
			if(var_6_int == 22721) {
				func_146(var_7_bool, "Neutral");
				var_0_object->SetMessage(521560); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522279, 23434, 23433); //@t
				var_0_object->AddReply(522272, 23426, 23425); //@t
				return 0;
			}
			if(var_6_int == 23426) {
				func_146(var_7_bool, "Neutral");
				var_0_object->SetMessage(522273); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522274, 23431, 23427); //@t
				var_0_object->AddReply(522275, 23429, 23428); //@t
				return 0;
			}
			if(var_6_int == 23429) {
				func_146(var_7_bool, "Neutral");
				var_0_object->SetMessage(522276); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522277, 23431, 23430); //@t
				return 0;
			}
			if(var_6_int == 23431) {
				func_146(var_7_bool, "Neutral");
				var_0_object->SetMessage(522278); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522281, 23434, 23435); //@t
				return 0;
			}
			if(var_6_int == 23434) {
				func_146(var_7_bool, "Neutral");
				var_0_object->SetMessage(522280); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521561, -1, 22722); //@t
				return 0;
			}
			var_3_string = true;
			bool var_172_bool;
			func_884(var_172_bool);
			if(var_172_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xa9";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool)
	{
	
	Label_354:
		for(;;) {
			bool var_8_bool;
			func_506(var_8_bool);
			var_11_bool = !var_8_bool; //@nz
			if(var_11_bool == 0) goto Label_362;
			@Hold();
		}
	
	Label_362:
		float var_7_float;
		@rand(var_7_float, 3);
		@Sleep(var_7_float + 3);
		func_425();
		goto Label_354;
	}
	EMIT "Return(); Pop(2)";

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object)
	{
		object var_8_object;
		var_6_object = var_8_object;
		TaskCall(0);
		int var_7_int;
		func_0(var_9_object, var_7_int, var_8_object);
		TaskReturn();
	}

	// @pe
	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, string var_6_string)
	{
		if(var_6_string == "cleanup")
			func_374(var_6_string);
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
			func_423(var_8_bool);
			if(var_8_bool != 0)
				var_6_bool = true;
		}
		if(var_6_bool != 0) {
			object var_9_object;
			func_616(var_9_object);
			@RemoveActor(var_9_object);
		}
	}

}


void func_0(object var_0_object, int var_7_int, object var_8_object)
{
	var_0_object = var_8_object;
	bool var_18_bool; object var_19_object;
	var_8_object = var_19_object;
	func_511(var_18_bool, var_19_object, 70.0);
	if(!var_18_bool) { //@nz
		var_7_int = -2;
		return 8;
	}
	object var_14_object;
	@CreateDialog(var_14_object);
	int var_65_int;
	func_878(var_65_int);
	var_14_object->SetNPCName(var_65_int);
	int var_66_int;
	func_876(var_66_int);
	var_14_object->SetNPCDescription(var_66_int);
	string var_67_string;
	func_880(var_67_string);
	var_14_object->SetPhoto(var_67_string);
	string var_68_string;
	func_882(var_68_string);
	var_14_object->SetPhoto2(var_68_string);
	int var_69_int;
	func_859(var_69_int);
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
		var_132_bool = !var_17_bool; //@nz
		if(var_132_bool == 0) goto Label_63;
		@sync();
		var_14_object->IsDialogEnd(var_17_bool);
	}
	
Label_63:
	object var_133_object;
	var_8_object = var_133_object;
	func_579();
	@StopDialog(var_14_object);
	var_14_object->GetReturnValue(-1);
	int var_16_int = var_7_int;
}
EMIT "Stack[-4] = 0";


void func_768(object var_56_object)
{
	object var_58_object;
	@GetDiaryRoot(var_58_object);
	if(!var_58_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_56_object = false;
	}
	var_58_object = var_56_object;
}
EMIT "Stack[-1] = 0";


void func_649(float var_39_float)
{
	float var_41_float;
	@GetGameTime(var_41_float);
	var_41_float = var_39_float;
}


void func_781(bool var_47_bool, object var_48_object, int var_49_int)
{
	object var_56_object;
	func_768(var_56_object);
	object var_53_object;
	var_56_object = var_53_object;
	object var_54_object;
	var_53_object->Find(var_49_int, var_54_object);
	if(!var_54_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_49_int);
		var_47_bool = false;
	}
	var_54_object->AddChild(var_48_object);
	@SendWorldWndMessage(7);
	int var_55_int;
	var_48_object->GetCategory(var_55_int);
	@SetDiarySection(var_55_int);
	var_47_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_654(string var_37_string, int var_38_int)
{
	string var_40_string = "idle";
	if(var_38_int != 0)
		var_40_string += var_38_int;
	var_40_string = var_37_string;
}


// @pe
void func_146(object var_2_object, string var_85_string)
{
	bool var_86_bool;
	func_884(var_86_bool);
	if(!var_86_bool) //@nz
		return 0;
	if(var_85_string == var_2_object)
		return 0;
	string var_89_string; bool var_90_bool;
	var_85_string = var_89_string;
	if(var_85_string == "")
		var_90_bool = false;
	else
		var_90_bool = true;
	func_603(var_89_string, var_90_bool);
	var_2_object = var_85_string;
	
}


void func_661(int var_31_int)
{
	int var_34_int; bool var_35_bool;
	var_34_int = 0;
	
	for(;;) {
		string var_37_string; int var_38_int;
		var_34_int = var_38_int;
		func_654(var_37_string, var_38_int);
		@HasAnimation(var_35_bool, "all", var_37_string);
		if(!var_35_bool) //@nz
			break;
		var_34_int += 1;
	}
	var_34_int = var_31_int;
}


// @pe
void func_678(void)
{
	@SetVariable("oob9MDoberman1", 1);
}


void func_423(bool var_8_bool)
{
	var_8_bool = true;
}


void func_425(void)
{
	int var_24_int; int var_25_int; bool var_26_bool; float var_27_float; bool var_28_bool;
	@WaitForAnimEnd();
	bool var_29_bool;
	func_506(var_29_bool);
	if(!var_29_bool) //@nz
		return 14;
	int var_31_int;
	func_661(var_31_int);
	int var_22_int;
	var_31_int = var_22_int;
	int var_23_int = 0;
	
	for(;;) {
		bool var_44_bool = false;
		if(var_23_int < 5) {
			bool var_47_bool;
			func_506(var_47_bool);
			if(var_47_bool != 0)
				var_44_bool = true;
		}
		if(var_44_bool != 0) {
			@irand(var_24_int, 3);
			if(var_24_int == 0) {
				if(var_22_int == 0) goto Label_472;
				@irand(var_25_int, var_22_int);
				string var_53_string; int var_54_int;
				var_25_int = var_54_int;
				func_654(var_53_string, var_54_int);
				@PlayAnimation("all", var_53_string);
				@WaitForAnimEnd(var_26_bool);
				if(!var_26_bool) { //@nz
				} else {
			} else {
			if(var_24_int == 1) {
				@rand(var_27_float, 4);
				@Sleep((var_27_float + 1), var_28_bool);
				if(!var_28_bool) { //@nz
					goto Label_501;
				}
			} else if(var_23_int != 0) {
				goto Label_501;
			}
			}
					bool var_56_bool;
					func_504(var_56_bool);
					var_57_bool = !var_56_bool; //@nz
					if(var_57_bool == 0) goto Label_496;
			}
		}
	Label_501:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_496:
		@ResetAAS();
		var_23_int += 1;
	}
	
}


void func_809(object var_28_object)
{
	object var_31_object; object var_32_object;
	@GetMainOutdoorScene(var_31_object);
	if(var_31_object == null) {
		@Trace("Can't find main outdoor scene");
		var_32_object = null;
		var_32_object = var_28_object;
	}
	var_31_object->GetMap(var_32_object);
	var_32_object = var_28_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_684(void)
{
	object var_21_object;
	int var_22_int;
	func_632(var_22_int, "b9q01");
	if(var_22_int == 2) {
		object var_28_object;
		func_809(var_28_object);
		var_28_object = var_21_object;
		float var_39_float;
		func_649(var_39_float);
		var_21_object->AddMark("b9q01MDobermanGotoFactory", "pt_gmap_factory", 1, 530198, var_39_float);
		func_755();
		bool var_65_bool;
		func_637(var_65_bool, "quest_b9_01", "remove_mdoberman");
		var_21_object = null;
	}
}


void func_826(object var_73_object, string var_74_string, float var_75_float)
{
	object var_83_object;
	@GetMainOutdoorScene(var_83_object);
	if(var_83_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_81_cvector;
	cvector var_82_cvector;
	bool var_84_bool;
	var_83_object->GetLocator(var_74_string, var_84_bool, var_81_cvector, var_82_cvector);
	if(!var_84_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_74_string) + " doesnt exist");
	var_83_object->GetMap(var_73_object);
	if(var_73_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_94_float = GetByIndex(var_81_cvector, 0);
	var_95_float = GetByIndex(var_81_cvector, 2);
	var_73_object->SetMapParams(var_94_float, var_95_float, var_75_float);
}
EMIT "Stack[-2] = 0";


void func_579(void)
{
	bool var_135_bool;
	@CameraSwitchToNormal();
	bool var_136_bool;
	func_884(var_136_bool);
	if(var_136_bool != 0) {
	} else {
		@HasAnimationTrack(var_135_bool, "head");
		if(var_135_bool == 0) goto Label_595;
		@UnlookAsync("head");
	}
Label_595:
	
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_78_object, object var_79_object)
{
	var_0_object = var_79_object;
	var_1_object = var_78_object;
	var_3_string = false;
	if(1 != 0) {
		func_146(var_79_object, "Neutral");
		var_0_object->SetMessage(521558); //@t
		var_0_object->ClearReplies(); //@t
		bool var_98_bool = false;
		bool var_99_bool;
		func_731(var_1_object);
		if(var_99_bool != 0) {
			bool var_107_bool;
			func_743(var_1_object);
			if(var_107_bool != 0)
				var_98_bool = true;
		}
		if(var_98_bool != 0)
			var_0_object->AddReply(521559, 22721, 22720); //@t
		var_0_object->AddReply(521562, -1, 22723); //@t
		goto Label_116;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_116:
	bool var_119_bool;
	func_884(var_119_bool);
	if(var_119_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_596(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_145;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_145:
		return 0;

	}
	
}


// @pe
void func_715(object var_72_object)
{
	object var_76_object;
	func_809(var_76_object);
	object var_73_object;
	var_76_object = var_73_object;
	func_826(var_73_object, "pt_gmap_factory", (float)2);
	object var_96_object;
	func_809(var_96_object);
	var_72_object->ShowMap(var_96_object);
}


void func_596(string var_121_string)
{
	float var_124_float; float var_125_float;
	@lshGetAnimTimes(var_121_string, var_124_float, var_125_float);
	@lshPlayAnimation(var_124_float, var_125_float, false);
}


void func_859(int var_69_int)
{
	int var_71_int;
	@GetVariable("branch", var_71_int);
	if(var_71_int == 0) {
		var_69_int = 1;
		return 2;
	EMIT "GOTO 0x36a";
	}
	if(var_71_int == 1) {
		var_69_int = 2;
		return 2;
	}
	var_69_int = 3;
}


void func_603(string var_89_string, bool var_90_bool)
{
	float var_95_float; float var_96_float;
	@lshGetAnimTimes(var_89_string, var_95_float, var_96_float);
	@lshPlayAnimation(var_95_float, var_96_float, var_90_bool);
}


// @pe
void func_731(bool var_99_bool)
{
	int var_101_int;
	func_632(var_101_int, "b9q01");
	if(var_101_int == 2)
		var_99_bool = true;
	var_99_bool = false;
}


void func_609(void)
{
	bool var_9_bool;
	func_884(var_9_bool);
	if(var_9_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_743(bool var_107_bool)
{
	int var_109_int;
	func_632(var_109_int, "oob9MDoberman1");
	if(var_109_int == 0) {
		var_107_bool = true;
		return 0;
	}
	var_107_bool = false;
}


void func_616(object var_9_object)
{
	object var_11_object;
	@self(var_11_object);
	var_11_object = var_9_object;
}
EMIT "Stack[-1] = 0";


void func_504(bool var_56_bool)
{
	var_56_bool = true;
}


void func_876(int var_66_int)
{
	var_66_int = 518097;
}


void func_878(int var_65_int)
{
	var_65_int = 518096;
}


void func_622(cvector var_45_cvector, cvector var_46_cvector)
{
	float var_49_float = sqrt(var_46_cvector | var_46_cvector);
	if(var_49_float < 0.000001)
		var_45_cvector = [0.0, 0.0, 0.0];
	var_45_cvector = var_46_cvector / var_49_float;
}


void func_880(string var_67_string)
{
	var_67_string = "ui/NPC_Citizen2.png";
}


void func_882(string var_68_string)
{
	var_68_string = "ui/NPC_Citizen2_b.png";
}


void func_755(void)
{
	object var_43_object;
	@CreateDiaryEntry(var_43_object, 300, 1, 521615);
	bool var_47_bool; object var_48_object;
	var_43_object = var_48_object;
	func_781(var_47_bool, var_48_object, 297);
}
EMIT "Stack[-1] = 0";


void func_884(bool var_60_bool)
{
	var_60_bool = false;
}


void func_374(object var_0_object)
{
	var_0_object = true;
	bool var_10_bool;
	@IsLoaded(var_10_bool);
	bool var_11_bool = false;
	if(!var_10_bool) { //@nz
		bool var_13_bool;
		func_423(var_13_bool);
		if(var_13_bool != 0)
			var_11_bool = true;
	}
	if(var_11_bool != 0) {
		object var_14_object;
		func_616(var_14_object);
		@RemoveActor(var_14_object);
	}
}


void func_632(int var_101_int, string var_102_string)
{
	int var_104_int;
	@GetVariable(var_102_string, var_104_int);
	var_104_int = var_101_int;
}


void func_506(bool var_8_bool)
{
	bool var_10_bool;
	@IsLoaded(var_10_bool);
	var_10_bool = var_8_bool;
}


void func_637(bool var_65_bool, string var_66_string, string var_67_string)
{
	object var_69_object;
	@FindActor(var_69_object, var_66_string);
	if(var_69_object == null)
		var_65_bool = false;
	@Trigger(var_69_object, var_67_string);
	var_65_bool = true;
}
EMIT "Stack[-1] = 0";


void func_511(bool var_18_bool, object var_19_object, float var_20_float)
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
	func_622(var_45_cvector, (var_34_cvector ^ [0.0, 1.0, 0.0]));
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
	func_884(var_60_bool);
	if(var_60_bool != 0) {
	} else {
		@HasAnimationTrack(var_38_bool, "head");
		if(var_38_bool == 0) goto Label_573;
		@LookAsyncCamera("head");
	}
Label_573:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_18_bool = true;
	
}


