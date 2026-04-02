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
			func_776();
			if(var_13_bool == 13218) {
				object var_18_object; object var_19_object;
				var_18_object = var_1_object;
				var_19_object = var_0_object;
				func_861();
				object var_67_object = var_1_object;
				func_845(var_0_object);
			}
			if(var_13_bool == 13214) {
				object var_95_object; object var_96_object;
				var_95_object = var_1_object;
				var_96_object = var_0_object;
				func_861();
				object var_97_object = var_1_object;
				func_845(var_0_object);
			}
			if(var_13_bool == 13215) {
				object var_101_object; object var_102_object;
				var_101_object = var_1_object;
				var_102_object = var_0_object;
				func_861();
				object var_103_object = var_1_object;
				func_845(var_0_object);
			}
			if(var_12_bool == 13203) {
				bool var_107_bool;
				func_889(var_1_object);
				if(var_107_bool != 0) {
					func_132(var_13_bool, "Neutral");
					var_0_object->SetMessage(511988); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(511989, 13205, 13204); //@t
					return 0;
				}
			}
			if(var_12_bool == 13205) {
				func_132(var_13_bool, "Neutral");
				var_0_object->SetMessage(511990); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511991, 13207, 13206); //@t
				var_0_object->AddReply(512004, 13207, 13219); //@t
				return 0;
			}
			if(var_12_bool == 13207) {
				func_132(var_13_bool, "Neutral");
				var_0_object->SetMessage(511992); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511993, 13209, 13208); //@t
				var_0_object->AddReply(512005, 13209, 13221); //@t
				return 0;
			}
			if(var_12_bool == 13209) {
				func_132(var_13_bool, "Neutral");
				var_0_object->SetMessage(511994); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511995, 13211, 13210); //@t
				var_0_object->AddReply(512006, 13213, 13223); //@t
				return 0;
			}
			if(var_12_bool == 13211) {
				func_132(var_13_bool, "Neutral");
				var_0_object->SetMessage(511996); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511997, 13213, 13212); //@t
				return 0;
			}
			if(var_12_bool == 13213) {
				func_132(var_13_bool, "Neutral");
				var_0_object->SetMessage(511998); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512001, 13217, 13216); //@t
				var_0_object->AddReply(511999, -1, 13214); //@t
				var_0_object->AddReply(515782, 16855, 16854); //@t
				return 0;
			}
			if(var_12_bool == 16855) {
				func_132(var_13_bool, "Neutral");
				var_0_object->SetMessage(515783); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512000, -1, 13215); //@t
				return 0;
			}
			if(var_12_bool == 13217) {
				func_132(var_13_bool, "Neutral");
				var_0_object->SetMessage(512002); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512003, -1, 13218); //@t
				return 0;
			}
			var_3_string = true;
			bool var_200_bool;
			func_1030(var_200_bool);
			if(var_200_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x9b";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool)
	{
		func_400(var_11_bool, (float)300, (float)100);
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
			func_418(var_12_string);
	}

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool)
	{
		if(var_6_int != 0)
			func_534(var_10_bool, var_11_bool);
		bool var_16_bool = false;
		if(var_5_int != 0) {
			bool var_18_bool;
			func_467(var_18_bool);
			if(var_18_bool != 0)
				var_16_bool = true;
		}
		if(var_16_bool != 0) {
			object var_19_object;
			func_783(var_19_object);
			@RemoveActor(var_19_object);
		}
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool, int var_12_int)
	{
		if(var_12_int == 10) {
			bool var_15_bool;
			func_496(var_10_bool, var_11_bool, var_12_int, var_15_bool);
			if(var_15_bool != 0) {
				if(!var_2_object) { //@nz
					func_765(var_4_bool);
					var_2_object = true;
				}
			} else if(var_2_object != 0) {
				@UnlookAsync("head");
				var_2_object = false;
			}
		}
	
	}

}


void func_1024(int var_72_int)
{
	var_72_int = 512582;
}


void func_0(object var_0_object, int var_13_int, object var_14_object)
{
	var_0_object = var_14_object;
	bool var_24_bool; object var_25_object;
	var_14_object = var_25_object;
	func_647(var_24_bool, var_25_object, 70.0);
	if(!var_24_bool) { //@nz
		var_13_int = -2;
		return 8;
	}
	object var_20_object;
	@CreateDialog(var_20_object);
	int var_72_int;
	func_1024(var_72_int);
	var_20_object->SetNPCName(var_72_int);
	int var_73_int;
	func_1022(var_73_int);
	var_20_object->SetNPCDescription(var_73_int);
	string var_74_string;
	func_1026(var_74_string);
	var_20_object->SetPhoto(var_74_string);
	string var_75_string;
	func_1028(var_75_string);
	var_20_object->SetPhoto2(var_75_string);
	int var_76_int;
	func_1005(var_76_int);
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
		var_139_bool = !var_23_bool; //@nz
		if(var_139_bool == 0) goto Label_63;
		@sync();
		var_20_object->IsDialogEnd(var_23_bool);
	}
	
Label_63:
	object var_140_object;
	var_14_object = var_140_object;
	func_716();
	@StopDialog(var_20_object);
	var_20_object->GetReturnValue(-1);
	int var_22_int = var_13_int;
}
EMIT "Stack[-4] = 0";


void func_1026(string var_74_string)
{
	var_74_string = "ui/NPC_Citizen1.png";
}


void func_642(bool var_23_bool)
{
	bool var_25_bool;
	@IsLoaded(var_25_bool);
	var_25_bool = var_23_bool;
}


void func_1028(string var_75_string)
{
	var_75_string = "ui/NPC_Citizen1_b.png";
}


// @pe
void func_132(object var_2_object, string var_100_string)
{
	bool var_101_bool;
	func_1030(var_101_bool);
	if(!var_101_bool) //@nz
		return 0;
	if(var_100_string == var_2_object)
		return 0;
	string var_104_string; bool var_105_bool;
	var_100_string = var_104_string;
	if(var_100_string == "")
		var_105_bool = false;
	else
		var_105_bool = true;
	func_750(var_104_string, var_105_bool);
	var_2_object = var_100_string;
	
}


void func_1030(bool var_67_bool)
{
	var_67_bool = false;
}


void func_647(bool var_24_bool, object var_25_object, float var_26_float)
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
	func_789(var_51_cvector, (var_40_cvector ^ [0.0, 1.0, 0.0]));
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
	func_1030(var_67_bool);
	if(var_67_bool != 0) {
	} else {
		@HasAnimationTrack(var_44_bool, "head");
		if(var_44_bool == 0) goto Label_710;
		@LookAsyncCamera("head");
	}
Label_710:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_24_bool = true;
	
}


void func_776(void)
{
	bool var_15_bool;
	func_1030(var_15_bool);
	if(var_15_bool != 0)
		@lshStopSpeech();
}


void func_901(void)
{
	object var_39_object;
	@CreateDiaryEntry(var_39_object, 152, 2, 515358);
	bool var_43_bool; object var_44_object;
	var_39_object = var_44_object;
	func_927(var_43_bool, var_44_object, 148);
}
EMIT "Stack[-1] = 0";


void func_783(object var_19_object)
{
	object var_21_object;
	@self(var_21_object);
	var_21_object = var_19_object;
}
EMIT "Stack[-1] = 0";


void func_400(int var_6_int, float var_12_float, float var_13_float)
{
	float var_14_float; bool var_15_bool; float var_16_float; bool var_17_bool;
	var_6_int = false;
	
	for(;;) {
		@rand(var_16_float, 3);
		@Sleep((var_16_float + 3), var_17_bool);
		var_6_int = true;
		float var_21_float; float var_22_float;
		var_12_float = var_21_float;
		func_469(var_22_float, var_14_float, var_15_bool, var_16_float, var_17_bool, var_21_float, var_22_float);
		var_6_int = false;
	}
}
EMIT "Return(); Pop(4)";


void func_914(object var_52_object)
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


void func_789(cvector var_51_cvector, cvector var_52_cvector)
{
	float var_55_float = sqrt(var_52_cvector | var_52_cvector);
	if(var_55_float < 0.000001)
		var_51_cvector = [0.0, 0.0, 0.0];
	var_51_cvector = var_52_cvector / var_55_float;
}


// @pe
void func_534(object var_2_object, string var_3_string)
{
	func_629();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
}


void func_927(bool var_43_bool, object var_44_object, int var_45_int)
{
	object var_52_object;
	func_914(var_52_object);
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


void func_799(int var_94_int, string var_95_string)
{
	int var_97_int;
	@GetVariable(var_95_string, var_97_int);
	var_97_int = var_94_int;
}


void func_418(int var_5_int)
{
	var_5_int = true;
	bool var_15_bool = false;
	bool var_16_bool;
	func_642(var_16_bool);
	if(!var_16_bool) { //@nz
		bool var_20_bool;
		func_467(var_20_bool);
		if(var_20_bool != 0)
			var_15_bool = true;
	}
	if(var_15_bool != 0) {
		object var_21_object;
		func_783(var_21_object);
		@RemoveActor(var_21_object);
	}
}


void func_548(void)
{
	int var_39_int; int var_40_int; bool var_41_bool; float var_42_float; bool var_43_bool;
	@WaitForAnimEnd();
	bool var_44_bool;
	func_642(var_44_bool);
	if(!var_44_bool) //@nz
		return 14;
	int var_46_int;
	func_828(var_46_int);
	int var_37_int;
	var_46_int = var_37_int;
	int var_38_int = 0;
	
	for(;;) {
		bool var_59_bool = false;
		if(var_38_int < 5) {
			bool var_62_bool;
			func_642(var_62_bool);
			if(var_62_bool != 0)
				var_59_bool = true;
		}
		if(var_59_bool != 0) {
			@irand(var_39_int, 3);
			if(var_39_int == 0) {
				if(var_37_int == 0) goto Label_595;
				@irand(var_40_int, var_37_int);
				string var_68_string; int var_69_int;
				var_40_int = var_69_int;
				func_821(var_68_string, var_69_int);
				@PlayAnimation("all", var_68_string);
				@WaitForAnimEnd(var_41_bool);
				if(!var_41_bool) { //@nz
				} else {
			} else {
			if(var_39_int == 1) {
				@rand(var_42_float, 4);
				@Sleep((var_42_float + 1), var_43_bool);
				if(!var_43_bool) { //@nz
					goto Label_624;
				}
			} else if(var_38_int != 0) {
				goto Label_624;
			}
			}
					bool var_71_bool;
					func_627(var_71_bool);
					var_72_bool = !var_71_bool; //@nz
					if(var_72_bool == 0) goto Label_619;
			}
		}
	Label_624:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_619:
		@ResetAAS();
		var_38_int += 1;
	}
	
}


void func_804(bool var_61_bool, string var_62_string, string var_63_string)
{
	object var_65_object;
	@FindActor(var_65_object, var_62_string);
	if(var_65_object == null)
		var_61_bool = false;
	@Trigger(var_65_object, var_63_string);
	var_61_bool = true;
}
EMIT "Stack[-1] = 0";


void func_816(float var_35_float)
{
	float var_37_float;
	@GetGameTime(var_37_float);
	var_37_float = var_35_float;
}


void func_821(string var_52_string, int var_53_int)
{
	string var_55_string = "idle";
	if(var_53_int != 0)
		var_55_string += var_53_int;
	var_55_string = var_52_string;
}


void func_955(object var_24_object)
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


void func_828(int var_46_int)
{
	int var_49_int; bool var_50_bool;
	var_49_int = 0;
	
	for(;;) {
		string var_52_string; int var_53_int;
		var_49_int = var_53_int;
		func_821(var_52_string, var_53_int);
		@HasAnimation(var_50_bool, "all", var_52_string);
		if(!var_50_bool) //@nz
			break;
		var_49_int += 1;
	}
	var_49_int = var_46_int;
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_85_object, object var_86_object)
{
	var_0_object = var_86_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_92_bool;
		func_889(var_85_object);
		if(var_92_bool != 0) {
			func_132(var_86_object, "Neutral");
			var_0_object->SetMessage(511988); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(511989, 13205, 13204); //@t
		} else {
				return 0;
		}
	}
	bool var_121_bool;
	func_1030(var_121_bool);
	if(var_121_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_734(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_131;
			}
			@PlayAnimation("all", "idle");
		}

	}
	Label_131:
		return 0;

	}
	
}
EMIT "GOTO 0x4e";


void func_716(void)
{
	bool var_142_bool;
	@CameraSwitchToNormal(true);
	bool var_144_bool;
	func_1030(var_144_bool);
	if(var_144_bool != 0) {
	} else {
		@HasAnimationTrack(var_142_bool, "head");
		if(var_142_bool == 0) goto Label_733;
		@UnlookAsync("head");
	}
Label_733:
	
}


// @pe
void func_845(object var_68_object)
{
	object var_72_object;
	func_955(var_72_object);
	object var_69_object;
	var_72_object = var_69_object;
	func_972(var_69_object, "pt_d5q01_girl_corpse1", (float)2);
	object var_92_object;
	func_955(var_92_object);
	var_68_object->ShowMap(var_92_object);
}


void func_972(object var_69_object, string var_70_string, float var_71_float)
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


void func_467(bool var_18_bool)
{
	var_18_bool = true;
}


// @pe
void func_469(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_21_float, float var_22_float)
{
	bool var_23_bool;
	func_642(var_23_bool);
	if(!var_23_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_21_float;
	var_1_object = var_22_float;
	@SetTimer(10, 1.0);
	func_548();
	if(!false) //@nz
		@KillTimer(10);
}


void func_861(void)
{
	@SetVariable("d5q02", 4);
	object var_24_object;
	func_955(var_24_object);
	object var_21_object;
	var_24_object = var_21_object;
	float var_35_float;
	func_816(var_35_float);
	var_21_object->AddMark("d5q02NudeMeeting", "pt_d5q01_girl_corpse1", 0, 515364, var_35_float);
	func_901();
	bool var_61_bool;
	func_804(var_61_bool, "quest_d5_02", "remove_girl");
}
EMIT "Stack[-1] = 0";


void func_734(string var_123_string)
{
	bool var_127_bool; float var_128_float; float var_129_float;
	@lshHasAnimation(var_127_bool, var_123_string);
	if(var_127_bool != 0) {
		@lshGetAnimTimes(var_123_string, var_128_float, var_129_float);
		@lshPlayAnimation(var_128_float, var_129_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_123_string);
	}
	
}


void func_1005(int var_76_int)
{
	int var_78_int;
	@GetVariable("branch", var_78_int);
	if(var_78_int == 0) {
		var_76_int = 1;
		return 2;
	EMIT "GOTO 0x3fc";
	}
	if(var_78_int == 1) {
		var_76_int = 2;
		return 2;
	}
	var_76_int = 3;
}


void func_750(string var_104_string, bool var_105_bool)
{
	bool var_111_bool; float var_112_float; float var_113_float;
	@lshHasAnimation(var_111_bool, var_104_string);
	if(var_111_bool != 0) {
		@lshGetAnimTimes(var_104_string, var_112_float, var_113_float);
		@lshPlayAnimation(var_112_float, var_113_float, var_105_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_104_string);
	}
	
}


void func_496(object var_0_object, object var_1_object, bool var_4_bool, bool var_15_bool)
{
	if(var_4_bool == null)
		var_15_bool = false;
	float var_19_float;
	func_634(var_19_float, var_4_bool);
	float var_17_float = sqrt(var_19_float);
	if(var_2_object != 0)
		var_17_float -= var_1_object;
	var_15_bool = var_17_float < var_0_object;
}


void func_627(bool var_71_bool)
{
	var_71_bool = true;
}


void func_629(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_889(bool var_92_bool)
{
	int var_94_int;
	func_799(var_94_int, "d5q02");
	if(var_94_int == 3)
		var_92_bool = true;
	var_92_bool = false;
}


void func_634(float var_19_float, object var_20_object)
{
	cvector var_24_cvector;
	@GetPosition(var_24_cvector);
	cvector var_25_cvector;
	var_20_object->GetPosition(var_25_cvector);
	var_19_float = (var_25_cvector - var_24_cvector) | (var_25_cvector - var_24_cvector);
}


void func_765(object var_29_object)
{
	float var_32_float;
	var_29_object->GetEyesHeight(var_32_float);
	cvector var_33_cvector = [0.0, 0.0, 0.0];
	var_34_float = GetByIndex(var_33_cvector, 1);
	var_32_float = var_34_float;
	SetByIndex(var_33_cvector, 1) = var_34_float;
	@LookAsync(var_29_object, "head", var_33_cvector);
}


void func_1022(int var_73_int)
{
	var_73_int = 515593;
}


