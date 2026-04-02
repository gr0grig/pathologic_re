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
			func_733();
			if(var_7_bool == 22211) {
				object var_12_object; object var_13_object;
				var_12_object = var_1_object;
				var_13_object = var_0_object;
				func_790();
				object var_55_object = var_1_object;
				func_819(var_0_object);
			}
			if(var_7_bool == 22213) {
				object var_83_object; object var_84_object;
				var_83_object = var_1_object;
				var_84_object = var_0_object;
				func_813();
			}
			if(var_6_int == 22210) {
				bool var_89_bool;
				func_847(var_1_object);
				if(var_89_bool != 0) {
					func_162(var_7_bool, "Neutral");
					var_0_object->SetMessage(520997); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(524092, 25396, 25395); //@t
					var_0_object->AddReply(524096, 25405, 25399); //@t
					return 0;
				}
				func_162(var_7_bool, "Neutral");
				var_0_object->SetMessage(520999); //@t
				var_0_object->ClearReplies(); //@t
				bool var_123_bool;
				func_835(var_1_object);
				if(var_123_bool != 0)
					var_0_object->AddReply(521000, 29872, 22213); //@t
				var_0_object->AddReply(528488, -1, 29877); //@t
				return 0;
			}
			if(var_6_int == 29872) {
				func_162(var_7_bool, "Neutral");
				var_0_object->SetMessage(528483); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528484, 29874, 29873); //@t
				return 0;
			}
			if(var_6_int == 29874) {
				func_162(var_7_bool, "Neutral");
				var_0_object->SetMessage(528485); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528486, -1, 29875); //@t
				var_0_object->AddReply(528487, -1, 29876); //@t
				return 0;
			}
			if(var_6_int == 25405) {
				func_162(var_7_bool, "Neutral");
				var_0_object->SetMessage(524102); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524103, 25401, 25406); //@t
				return 0;
			}
			if(var_6_int == 25396) {
				func_162(var_7_bool, "Neutral");
				var_0_object->SetMessage(524093); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524094, 25398, 25397); //@t
				var_0_object->AddReply(524101, 25401, 25404); //@t
				return 0;
			}
			if(var_6_int == 25398) {
				func_162(var_7_bool, "Neutral");
				var_0_object->SetMessage(524095); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524097, 25401, 25400); //@t
				var_0_object->AddReply(524104, 25408, 25407); //@t
				return 0;
			}
			if(var_6_int == 25408) {
				func_162(var_7_bool, "Neutral");
				var_0_object->SetMessage(524105); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524106, 25403, 25411); //@t
				var_0_object->AddReply(524107, 25401, 25412); //@t
				return 0;
			}
			if(var_6_int == 25401) {
				func_162(var_7_bool, "Neutral");
				var_0_object->SetMessage(524098); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(524099, 25403, 25402); //@t
				return 0;
			}
			if(var_6_int == 25403) {
				func_162(var_7_bool, "Neutral");
				var_0_object->SetMessage(524100); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520998, -1, 22211); //@t
				return 0;
			}
			var_3_string = true;
			bool var_203_bool;
			func_988(var_203_bool);
			if(var_203_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xb9";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool)
	{
	
	Label_453:
		for(;;) {
			bool var_8_bool;
			func_610(var_8_bool);
			var_11_bool = !var_8_bool; //@nz
			if(var_11_bool == 0) goto Label_461;
			@Hold();
		}
	
	Label_461:
		float var_7_float;
		@rand(var_7_float, 3);
		@Sleep(var_7_float + 3);
		func_524();
		goto Label_453;
	}
	EMIT "Return(); Pop(2)";

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object)
	{
		func_605();
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
			func_473(var_6_string);
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
			func_522(var_8_bool);
			if(var_8_bool != 0)
				var_6_bool = true;
		}
		if(var_6_bool != 0) {
			object var_9_object;
			func_740(var_9_object);
			@RemoveActor(var_9_object);
		}
	}

}


void func_0(object var_0_object, int var_7_int, object var_8_object)
{
	var_0_object = var_8_object;
	bool var_18_bool; object var_19_object;
	var_8_object = var_19_object;
	func_615(var_18_bool, var_19_object, 70.0);
	if(!var_18_bool) { //@nz
		var_7_int = -2;
		return 8;
	}
	object var_14_object;
	@CreateDialog(var_14_object);
	int var_66_int;
	func_982(var_66_int);
	var_14_object->SetNPCName(var_66_int);
	int var_67_int;
	func_980(var_67_int);
	var_14_object->SetNPCDescription(var_67_int);
	string var_68_string;
	func_984(var_68_string);
	var_14_object->SetPhoto(var_68_string);
	string var_69_string;
	func_986(var_69_string);
	var_14_object->SetPhoto2(var_69_string);
	int var_70_int;
	func_963(var_70_int);
	var_14_object->SetPlayerName(var_70_int);
	bool var_15_bool;
	@IsOverrideActive(var_15_bool);
	if(var_15_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	@DoDialog(var_14_object);
	object var_79_object; object var_80_object;
	var_8_object = var_79_object;
	var_14_object = var_80_object;
	TaskCall(1);
	func_74(var_81_object, var_82_object, var_83_string, var_84_bool, var_79_object, var_80_object);
	TaskReturn();
	bool var_17_bool;
	var_14_object->IsDialogEnd(var_17_bool);
	
	for(;;) {
		var_150_bool = !var_17_bool; //@nz
		if(var_150_bool == 0) goto Label_63;
		@sync();
		var_14_object->IsDialogEnd(var_17_bool);
	}
	
Label_63:
	object var_151_object;
	var_8_object = var_151_object;
	func_684();
	@StopDialog(var_14_object);
	var_14_object->GetReturnValue(-1);
	int var_16_int = var_7_int;
}
EMIT "Stack[-4] = 0";


void func_773(int var_31_int)
{
	int var_34_int; bool var_35_bool;
	var_34_int = 0;
	
	for(;;) {
		string var_37_string; int var_38_int;
		var_34_int = var_38_int;
		func_766(var_37_string, var_38_int);
		@HasAnimation(var_35_bool, "all", var_37_string);
		if(!var_35_bool) //@nz
			break;
		var_34_int += 1;
	}
	var_34_int = var_31_int;
}


void func_522(bool var_8_bool)
{
	var_8_bool = true;
}


void func_524(void)
{
	int var_24_int; int var_25_int; bool var_26_bool; float var_27_float; bool var_28_bool;
	@WaitForAnimEnd();
	bool var_29_bool;
	func_610(var_29_bool);
	if(!var_29_bool) //@nz
		return 14;
	int var_31_int;
	func_773(var_31_int);
	int var_22_int;
	var_31_int = var_22_int;
	int var_23_int = 0;
	
	for(;;) {
		bool var_44_bool = false;
		if(var_23_int < 5) {
			bool var_47_bool;
			func_610(var_47_bool);
			if(var_47_bool != 0)
				var_44_bool = true;
		}
		if(var_44_bool != 0) {
			@irand(var_24_int, 3);
			if(var_24_int == 0) {
				if(var_22_int == 0) goto Label_571;
				@irand(var_25_int, var_22_int);
				string var_53_string; int var_54_int;
				var_25_int = var_54_int;
				func_766(var_53_string, var_54_int);
				@PlayAnimation("all", var_53_string);
				@WaitForAnimEnd(var_26_bool);
				if(!var_26_bool) { //@nz
				} else {
			} else {
			if(var_24_int == 1) {
				@rand(var_27_float, 4);
				@Sleep((var_27_float + 1), var_28_bool);
				if(!var_28_bool) { //@nz
					goto Label_600;
				}
			} else if(var_23_int != 0) {
				goto Label_600;
			}
			}
					bool var_56_bool;
					func_603(var_56_bool);
					var_57_bool = !var_56_bool; //@nz
					if(var_57_bool == 0) goto Label_595;
			}
		}
	Label_600:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_595:
		@ResetAAS();
		var_23_int += 1;
	}
	
}


void func_913(object var_18_object)
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


void func_790(void)
{
	@SetVariable("b7q01", 5);
	object var_18_object;
	func_913(var_18_object);
	object var_15_object;
	var_18_object = var_15_object;
	float var_29_float;
	func_761(var_29_float);
	var_15_object->AddMark("b7q01WastedGotoViktor", "pt_map_viktor", 1, 521026, var_29_float);
	func_859();
}
EMIT "Stack[-1] = 0";


// @pe
void func_162(object var_2_object, string var_94_string)
{
	bool var_95_bool;
	func_988(var_95_bool);
	if(!var_95_bool) //@nz
		return 0;
	if(var_94_string == var_2_object)
		return 0;
	string var_98_string; bool var_99_bool;
	var_94_string = var_98_string;
	if(var_94_string == "")
		var_99_bool = false;
	else
		var_99_bool = true;
	func_718(var_98_string, var_99_bool);
	var_2_object = var_94_string;
	
}


void func_930(object var_57_object, string var_58_string, float var_59_float)
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


void func_684(void)
{
	bool var_153_bool;
	@CameraSwitchToNormal(true);
	bool var_155_bool;
	func_988(var_155_bool);
	if(var_155_bool != 0) {
	} else {
		@HasAnimationTrack(var_153_bool, "head");
		if(var_153_bool == 0) goto Label_701;
		@UnlookAsync("head");
	}
Label_701:
	
}


// @pe
void func_813(void)
{
	@SetVariable("oob7WastedMaleM1", 1);
}


// @pe
void func_819(object var_56_object)
{
	object var_60_object;
	func_913(var_60_object);
	object var_57_object;
	var_60_object = var_57_object;
	func_930(var_57_object, "pt_map_viktor", (float)2);
	object var_80_object;
	func_913(var_80_object);
	var_56_object->ShowMap(var_80_object);
}


void func_702(string var_120_string)
{
	bool var_124_bool; float var_125_float; float var_126_float;
	@lshHasAnimation(var_124_bool, var_120_string);
	if(var_124_bool != 0) {
		@lshGetAnimTimes(var_120_string, var_125_float, var_126_float);
		@lshPlayAnimation(var_125_float, var_126_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_120_string);
	}
	
}


void func_963(int var_70_int)
{
	int var_72_int;
	@GetVariable("branch", var_72_int);
	if(var_72_int == 0) {
		var_70_int = 1;
		return 2;
	EMIT "GOTO 0x3d2";
	}
	if(var_72_int == 1) {
		var_70_int = 2;
		return 2;
	}
	var_70_int = 3;
}


// @pe
void func_835(bool var_138_bool)
{
	int var_140_int;
	func_756(var_140_int, "oob7WastedMaleM1");
	if(var_140_int == 0) {
		var_138_bool = true;
		return 0;
	}
	var_138_bool = false;
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_79_object, object var_80_object)
{
	var_0_object = var_80_object;
	var_1_object = var_79_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_86_bool;
		func_847(var_1_object);
		if(var_86_bool != 0) {
			func_162(var_80_object, "Neutral");
			var_0_object->SetMessage(520997); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(524092, 25396, 25395); //@t
			var_0_object->AddReply(524096, 25405, 25399); //@t
		} else {
					func_162(var_80_object, "Neutral");
					var_0_object->SetMessage(520999); //@t
					var_0_object->ClearReplies(); //@t
					bool var_138_bool;
					func_835(var_1_object);
					if(var_138_bool != 0)
						var_0_object->AddReply(521000, 29872, 22213); //@t
					var_0_object->AddReply(528488, -1, 29877); //@t
		}
	}
	for(;;) {
		bool var_118_bool;
		func_988(var_118_bool);
		if(var_118_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_702(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_161;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_161:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4e";


void func_718(string var_98_string, bool var_99_bool)
{
	bool var_105_bool; float var_106_float; float var_107_float;
	@lshHasAnimation(var_105_bool, var_98_string);
	if(var_105_bool != 0) {
		@lshGetAnimTimes(var_98_string, var_106_float, var_107_float);
		@lshPlayAnimation(var_106_float, var_107_float, var_99_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_98_string);
	}
	
}


// @pe
void func_847(bool var_86_bool)
{
	int var_88_int;
	func_756(var_88_int, "b7q01");
	if(var_88_int == 4)
		var_86_bool = true;
	var_86_bool = false;
}


void func_980(int var_67_int)
{
	var_67_int = 515556;
}


void func_982(int var_66_int)
{
	var_66_int = 503341;
}


void func_984(string var_68_string)
{
	var_68_string = "ui/NPC_Citizen3.png";
}


void func_473(object var_0_object)
{
	var_0_object = true;
	bool var_10_bool;
	@IsLoaded(var_10_bool);
	bool var_11_bool = false;
	if(!var_10_bool) { //@nz
		bool var_13_bool;
		func_522(var_13_bool);
		if(var_13_bool != 0)
			var_11_bool = true;
	}
	if(var_11_bool != 0) {
		object var_14_object;
		func_740(var_14_object);
		@RemoveActor(var_14_object);
	}
}


void func_986(string var_69_string)
{
	var_69_string = "ui/NPC_Citizen3_b.png";
}


void func_603(bool var_56_bool)
{
	var_56_bool = true;
}


void func_988(bool var_61_bool)
{
	var_61_bool = false;
}


void func_605(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_733(void)
{
	bool var_9_bool;
	func_988(var_9_bool);
	if(var_9_bool != 0)
		@lshStopSpeech();
}


void func_859(void)
{
	object var_33_object;
	@CreateDiaryEntry(var_33_object, 258, 1, 521030);
	bool var_37_bool; object var_38_object;
	var_33_object = var_38_object;
	func_885(var_37_bool, var_38_object, 253);
}
EMIT "Stack[-1] = 0";


void func_610(bool var_8_bool)
{
	bool var_10_bool;
	@IsLoaded(var_10_bool);
	var_10_bool = var_8_bool;
}


void func_740(object var_9_object)
{
	object var_11_object;
	@self(var_11_object);
	var_11_object = var_9_object;
}
EMIT "Stack[-1] = 0";


void func_615(bool var_18_bool, object var_19_object, float var_20_float)
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
	func_746(var_45_cvector, (var_34_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_35_cvector = ((var_33_cvector * var_20_float) + (var_45_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_37_bool;
	@IsOverrideActive(var_37_bool);
	if(var_37_bool != 0)
		var_18_bool = false;
	@StopWorld();
	@CameraTransit((var_32_cvector + var_35_cvector), var_34_cvector, true);
	var_59_float = GetByIndex(var_35_cvector, 0);
	var_60_float = GetByIndex(var_35_cvector, 2);
	@Rotate(var_59_float, var_60_float);
	bool var_61_bool;
	func_988(var_61_bool);
	if(var_61_bool != 0) {
	} else {
		@HasAnimationTrack(var_38_bool, "head");
		if(var_38_bool == 0) goto Label_678;
		@LookAsyncCamera("head");
	}
Label_678:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_18_bool = true;
	
}


void func_872(object var_46_object)
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


void func_746(cvector var_45_cvector, cvector var_46_cvector)
{
	float var_49_float = sqrt(var_46_cvector | var_46_cvector);
	if(var_49_float < 0.000001)
		var_45_cvector = [0.0, 0.0, 0.0];
	var_45_cvector = var_46_cvector / var_49_float;
}


void func_756(int var_88_int, string var_89_string)
{
	int var_91_int;
	@GetVariable(var_89_string, var_91_int);
	var_91_int = var_88_int;
}


void func_885(bool var_37_bool, object var_38_object, int var_39_int)
{
	object var_46_object;
	func_872(var_46_object);
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


void func_761(float var_29_float)
{
	float var_31_float;
	@GetGameTime(var_31_float);
	var_31_float = var_29_float;
}


void func_766(string var_37_string, int var_38_int)
{
	string var_40_string = "idle";
	if(var_38_int != 0)
		var_40_string += var_38_int;
	var_40_string = var_37_string;
}


