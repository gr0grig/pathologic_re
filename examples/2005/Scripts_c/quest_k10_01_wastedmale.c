// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, int var_7_int, int var_8_int, bool var_9_bool, bool var_10_bool, object var_11_object, bool var_12_bool)
	{
		if(1 != 0) {
			func_768();
			if(var_12_bool == 28267) {
				object var_17_object; object var_18_object;
				var_17_object = var_1_object;
				var_18_object = var_0_object;
				func_837();
			}
			if(var_12_bool == 28275) {
				object var_46_object; object var_47_object;
				var_46_object = var_1_object;
				var_47_object = var_0_object;
				func_846();
				object var_80_object = var_1_object;
				func_890(var_0_object);
				object var_83_object = var_1_object;
				func_874(var_0_object);
			}
			if(var_12_bool == 29417) {
				object var_111_object; object var_112_object;
				var_111_object = var_1_object;
				var_112_object = var_0_object;
				func_846();
				object var_113_object = var_1_object;
				func_890(var_0_object);
				object var_115_object = var_1_object;
				func_874(var_0_object);
			}
			if(var_11_object == 28264) {
				bool var_119_bool;
				func_895(var_1_object);
				if(var_119_bool != 0) {
					func_157(var_12_bool, "Neutral");
					var_0_object->SetMessage(526972); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(528069, 29412, 29411); //@t
					return 0;
				}
				func_157(var_12_bool, "Neutral");
				var_0_object->SetMessage(526976); //@t
				var_0_object->ClearReplies(); //@t
				bool var_145_bool;
				func_907(var_1_object);
				if(var_145_bool != 0)
					var_0_object->AddReply(526981, 28274, 28273); //@t
				var_0_object->AddReply(526977, -1, 28269); //@t
				return 0;
			}
			if(var_11_object == 28274) {
				func_157(var_12_bool, "Neutral");
				var_0_object->SetMessage(526982); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528073, 29416, 29415); //@t
				var_0_object->AddReply(528075, -1, 29417); //@t
				return 0;
			}
			if(var_11_object == 29416) {
				func_157(var_12_bool, "Neutral");
				var_0_object->SetMessage(528074); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526983, -1, 28275); //@t
				return 0;
			}
			if(var_11_object == 29412) {
				func_157(var_12_bool, "Neutral");
				var_0_object->SetMessage(528070); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528071, 29414, 29413); //@t
				return 0;
			}
			if(var_11_object == 29414) {
				func_157(var_12_bool, "Neutral");
				var_0_object->SetMessage(528072); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526973, 28266, 28265); //@t
				return 0;
			}
			if(var_11_object == 28266) {
				func_157(var_12_bool, "Neutral");
				var_0_object->SetMessage(526974); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526975, -1, 28267); //@t
				return 0;
			}
			var_3_string = true;
			bool var_195_bool;
			func_1061(var_195_bool);
			if(var_195_bool != 0)
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
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool)
	{
		func_402((float)300, (float)100);
	}

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object)
	{
		func_546(var_10_bool, var_11_object);
		int var_15_int; object var_16_object;
		var_11_object = var_16_object;
		TaskCall(0);
		func_0(var_17_object, var_15_int, var_16_object);
		TaskReturn();
	}

	// @pe
	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, string var_11_string)
	{
		if(var_11_string == "cleanup")
			func_427(var_11_string);
	}

	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool)
	{
		@StopGroup0();
		@sync();
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool)
	{
		func_546(var_9_object, var_10_bool);
		bool var_14_bool = false;
		if(var_5_int != 0) {
			bool var_16_bool;
			func_479(var_16_bool);
			if(var_16_bool != 0)
				var_14_bool = true;
		}
		if(var_14_bool != 0) {
			object var_17_object;
			func_775(var_17_object);
			@RemoveActor(var_17_object);
		}
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, int var_11_int)
	{
		if(var_11_int == 10) {
			bool var_14_bool;
			func_508(var_9_object, var_10_bool, var_11_int, var_14_bool);
			if(var_14_bool != 0) {
				if(!var_2_object) { //@nz
					func_757(var_4_bool);
					var_2_object = true;
				}
			} else if(var_2_object != 0) {
				@UnlookAsync("head");
				var_2_object = false;
			}
		}
	
	}

}


void func_768(void)
{
	bool var_14_bool;
	func_1061(var_14_bool);
	if(var_14_bool != 0)
		@lshStopSpeech();
}


void func_0(object var_0_object, int var_15_int, object var_16_object)
{
	var_0_object = var_16_object;
	bool var_26_bool; object var_27_object;
	var_16_object = var_27_object;
	func_659(var_26_bool, var_27_object, 70.0);
	if(!var_26_bool) { //@nz
		var_15_int = -2;
		return 8;
	}
	object var_22_object;
	@CreateDialog(var_22_object);
	int var_73_int;
	func_1055(var_73_int);
	var_22_object->SetNPCName(var_73_int);
	int var_74_int;
	func_1053(var_74_int);
	var_22_object->SetNPCDescription(var_74_int);
	string var_75_string;
	func_1057(var_75_string);
	var_22_object->SetPhoto(var_75_string);
	string var_76_string;
	func_1059(var_76_string);
	var_22_object->SetPhoto2(var_76_string);
	int var_77_int;
	func_1036(var_77_int);
	var_22_object->SetPlayerName(var_77_int);
	bool var_23_bool;
	@IsOverrideActive(var_23_bool);
	if(var_23_bool != 0) {
		var_15_int = -2;
		return 8;
	}
	@DoDialog(var_22_object);
	object var_86_object; object var_87_object;
	var_16_object = var_86_object;
	var_22_object = var_87_object;
	TaskCall(1);
	func_74(var_88_object, var_89_object, var_90_string, var_91_bool, var_86_object, var_87_object);
	TaskReturn();
	bool var_25_bool;
	var_22_object->IsDialogEnd(var_25_bool);
	
	for(;;) {
		var_144_bool = !var_25_bool; //@nz
		if(var_144_bool == 0) goto Label_63;
		@sync();
		var_22_object->IsDialogEnd(var_25_bool);
	}
	
Label_63:
	object var_145_object;
	var_16_object = var_145_object;
	func_727();
	@StopDialog(var_22_object);
	var_22_object->GetReturnValue(-1);
	int var_24_int = var_15_int;
}
EMIT "Stack[-4] = 0";


void func_641(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_646(float var_18_float, object var_19_object)
{
	cvector var_23_cvector;
	@GetPosition(var_23_cvector);
	cvector var_24_cvector;
	var_19_object->GetPosition(var_24_cvector);
	var_18_float = (var_24_cvector - var_23_cvector) | (var_24_cvector - var_23_cvector);
}


void func_775(object var_17_object)
{
	object var_19_object;
	@self(var_19_object);
	var_19_object = var_17_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_907(bool var_132_bool)
{
	int var_134_int;
	func_791(var_134_int, "k10q01");
	if(var_134_int == 5)
		var_132_bool = true;
	var_132_bool = false;
}


void func_1036(int var_77_int)
{
	int var_79_int;
	@GetVariable("branch", var_79_int);
	if(var_79_int == 0) {
		var_77_int = 1;
		return 2;
	EMIT "GOTO 0x41b";
	}
	if(var_79_int == 1) {
		var_77_int = 2;
		return 2;
	}
	var_77_int = 3;
}


void func_781(cvector var_53_cvector, cvector var_54_cvector)
{
	float var_57_float = sqrt(var_54_cvector | var_54_cvector);
	if(var_57_float < 0.000001)
		var_53_cvector = [0.0, 0.0, 0.0];
	var_53_cvector = var_54_cvector / var_57_float;
}


void func_654(bool var_15_bool)
{
	bool var_17_bool;
	@IsLoaded(var_17_bool);
	var_17_bool = var_15_bool;
}


void func_402(float var_11_float, float var_12_float)
{
	
Label_403:
	for(;;) {
		bool var_15_bool;
		func_654(var_15_bool);
		var_18_bool = !var_15_bool; //@nz
		if(var_18_bool == 0) goto Label_411;
		@Hold();
	}
	
Label_411:
	float var_14_float;
	@rand(var_14_float, 3);
	@Sleep(var_14_float + 3);
	float var_22_float; float var_23_float;
	float var_13_float;
	func_481(var_10_bool, var_22_float, var_23_float, var_13_float, var_14_float, var_22_float, var_23_float);
	@sync();
	goto Label_403;
}
EMIT "Return(); Pop(2)";


void func_659(bool var_26_bool, object var_27_object, float var_28_float)
{
	cvector var_39_cvector; bool var_46_bool;
	var_27_object->GetPosition(var_39_cvector);
	float var_38_float;
	var_27_object->GetEyesHeight(var_38_float);
	var_47_float = GetByIndex(var_39_cvector, 1);
	SetByIndex(var_39_cvector, 1) = (var_47_float + var_38_float);
	cvector var_40_cvector;
	@GetPosition(var_40_cvector);
	@GetEyesHeight(var_38_float);
	var_48_float = GetByIndex(var_40_cvector, 1);
	SetByIndex(var_40_cvector, 1) = (var_48_float + var_38_float);
	cvector var_41_cvector = var_39_cvector - var_40_cvector;
	var_49_float = GetByIndex(var_41_cvector, 1);
	SetByIndex(var_41_cvector, 1) = (float)0;
	var_51_float = sqrt(var_41_cvector | var_41_cvector);
	var_41_cvector /= var_51_float;
	cvector var_42_cvector = -var_41_cvector;
	cvector var_53_cvector;
	func_781(var_53_cvector, (var_42_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_43_cvector = ((var_41_cvector * var_28_float) + (var_53_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_45_bool;
	@IsOverrideActive(var_45_bool);
	if(var_45_bool != 0)
		var_26_bool = false;
	@StopWorld();
	@CameraTransit((var_40_cvector + var_43_cvector), var_42_cvector);
	var_66_float = GetByIndex(var_43_cvector, 0);
	var_67_float = GetByIndex(var_43_cvector, 2);
	@Rotate(var_66_float, var_67_float);
	bool var_68_bool;
	func_1061(var_68_bool);
	if(var_68_bool != 0) {
	} else {
		@HasAnimationTrack(var_46_bool, "head");
		if(var_46_bool == 0) goto Label_721;
		@LookAsyncCamera("head");
	}
Label_721:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_26_bool = true;
	
}


void func_791(int var_95_int, string var_96_string)
{
	int var_98_int;
	@GetVariable(var_96_string, var_98_int);
	var_98_int = var_95_int;
}


void func_919(void)
{
	object var_22_object;
	@CreateDiaryEntry(var_22_object, 451, 1, 527009);
	bool var_26_bool; object var_27_object;
	var_22_object = var_27_object;
	func_958(var_26_bool, var_27_object, 447);
}
EMIT "Stack[-1] = 0";


// @pe
void func_895(bool var_93_bool)
{
	int var_95_int;
	func_791(var_95_int, "k10q01");
	if(var_95_int == 3)
		var_93_bool = true;
	var_93_bool = false;
}


void func_796(bool var_74_bool, string var_75_string, string var_76_string)
{
	object var_78_object;
	@FindActor(var_78_object, var_75_string);
	if(var_78_object == null)
		var_74_bool = false;
	@Trigger(var_78_object, var_76_string);
	var_74_bool = true;
}
EMIT "Stack[-1] = 0";


void func_1053(int var_74_int)
{
	var_74_int = 515556;
}


// @pe
void func_157(object var_2_object, string var_101_string)
{
	bool var_102_bool;
	func_1061(var_102_bool);
	if(!var_102_bool) //@nz
		return 0;
	if(var_101_string == var_2_object)
		return 0;
	string var_105_string; bool var_106_bool;
	var_101_string = var_105_string;
	if(var_101_string == "")
		var_106_bool = false;
	else
		var_106_bool = true;
	func_751(var_105_string, var_106_bool);
	var_2_object = var_101_string;
	
}


void func_1055(int var_73_int)
{
	var_73_int = 503341;
}


void func_1057(string var_75_string)
{
	var_75_string = "ui/NPC_Citizen3.png";
}


// @pe
void func_546(object var_2_object, string var_3_string)
{
	func_641();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
}


void func_1059(string var_76_string)
{
	var_76_string = "ui/NPC_Citizen3_b.png";
}


void func_932(void)
{
	object var_67_object;
	@CreateDiaryEntry(var_67_object, 453, 1, 527011);
	bool var_71_bool; object var_72_object;
	var_67_object = var_72_object;
	func_958(var_71_bool, var_72_object, 447);
}
EMIT "Stack[-1] = 0";


void func_1061(bool var_68_bool)
{
	var_68_bool = false;
}


void func_808(float var_63_float)
{
	float var_65_float;
	@GetGameTime(var_65_float);
	var_65_float = var_63_float;
}


void func_427(int var_5_int)
{
	var_5_int = true;
	bool var_15_bool;
	@IsLoaded(var_15_bool);
	bool var_16_bool = false;
	if(!var_15_bool) { //@nz
		bool var_18_bool;
		func_479(var_18_bool);
		if(var_18_bool != 0)
			var_16_bool = true;
	}
	if(var_16_bool != 0) {
		object var_19_object;
		func_775(var_19_object);
		@RemoveActor(var_19_object);
	}
}


void func_813(string var_51_string, int var_52_int)
{
	string var_54_string = "idle";
	if(var_52_int != 0)
		var_54_string += var_52_int;
	var_54_string = var_51_string;
}


void func_560(void)
{
	int var_38_int; int var_39_int; bool var_40_bool; float var_41_float; bool var_42_bool;
	@WaitForAnimEnd();
	bool var_43_bool;
	func_654(var_43_bool);
	if(!var_43_bool) //@nz
		return 14;
	int var_45_int;
	func_820(var_45_int);
	int var_36_int;
	var_45_int = var_36_int;
	int var_37_int = 0;
	
	for(;;) {
		bool var_58_bool = false;
		if(var_37_int < 5) {
			bool var_61_bool;
			func_654(var_61_bool);
			if(var_61_bool != 0)
				var_58_bool = true;
		}
		if(var_58_bool != 0) {
			@irand(var_38_int, 3);
			if(var_38_int == 0) {
				if(var_36_int == 0) goto Label_607;
				@irand(var_39_int, var_36_int);
				string var_67_string; int var_68_int;
				var_39_int = var_68_int;
				func_813(var_67_string, var_68_int);
				@PlayAnimation("all", var_67_string);
				@WaitForAnimEnd(var_40_bool);
				if(!var_40_bool) { //@nz
				} else {
			} else {
			if(var_38_int == 1) {
				@rand(var_41_float, 4);
				@Sleep((var_41_float + 1), var_42_bool);
				if(!var_42_bool) { //@nz
					goto Label_636;
				}
			} else if(var_37_int != 0) {
				goto Label_636;
			}
			}
					bool var_70_bool;
					func_639(var_70_bool);
					var_71_bool = !var_70_bool; //@nz
					if(var_71_bool == 0) goto Label_631;
			}
		}
	Label_636:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_631:
		@ResetAAS();
		var_37_int += 1;
	}
	
}


void func_945(object var_35_object)
{
	object var_37_object;
	@GetDiaryRoot(var_37_object);
	if(!var_37_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_35_object = false;
	}
	var_37_object = var_35_object;
}
EMIT "Stack[-1] = 0";


void func_820(int var_45_int)
{
	int var_48_int; bool var_49_bool;
	var_48_int = 0;
	
	for(;;) {
		string var_51_string; int var_52_int;
		var_48_int = var_52_int;
		func_813(var_51_string, var_52_int);
		@HasAnimation(var_49_bool, "all", var_51_string);
		if(!var_49_bool) //@nz
			break;
		var_48_int += 1;
	}
	var_48_int = var_45_int;
}


void func_958(bool var_26_bool, object var_27_object, int var_28_int)
{
	object var_35_object;
	func_945(var_35_object);
	object var_32_object;
	var_35_object = var_32_object;
	object var_33_object;
	var_32_object->Find(var_28_int, var_33_object);
	if(!var_33_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_28_int);
		var_26_bool = false;
	}
	var_33_object->AddChild(var_27_object);
	@SendWorldWndMessage(7);
	int var_34_int;
	var_27_object->GetCategory(var_34_int);
	@SetDiarySection(var_34_int);
	var_26_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void func_837(void)
{
	@SetVariable("k10q01", 4);
	func_919();
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_86_object, object var_87_object)
{
	var_0_object = var_87_object;
	var_1_object = var_86_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_93_bool;
		func_895(var_1_object);
		if(var_93_bool != 0) {
			func_157(var_87_object, "Neutral");
			var_0_object->SetMessage(526972); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(528069, 29412, 29411); //@t
		} else {
					func_157(var_87_object, "Neutral");
					var_0_object->SetMessage(526976); //@t
					var_0_object->ClearReplies(); //@t
					bool var_132_bool;
					func_907(var_1_object);
					if(var_132_bool != 0)
						var_0_object->AddReply(526981, 28274, 28273); //@t
					var_0_object->AddReply(526977, -1, 28269); //@t
		}
	}
	for(;;) {
		bool var_117_bool;
		func_1061(var_117_bool);
		if(var_117_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_744(var_2_object);
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


void func_846(void)
{
	@SetVariable("k10q01", 6);
	object var_52_object;
	func_986(var_52_object);
	object var_49_object;
	var_52_object = var_49_object;
	float var_63_float;
	func_808(var_63_float);
	var_49_object->AddMark("k10q01WastedGotoBurah", "pt_gmap_factory", 1, 530196, var_63_float);
	func_932();
	bool var_74_bool;
	func_796(var_74_bool, "quest_k10_01", "init_factory");
}
EMIT "Stack[-1] = 0";


void func_727(void)
{
	bool var_147_bool;
	@CameraSwitchToNormal();
	bool var_148_bool;
	func_1061(var_148_bool);
	if(var_148_bool != 0) {
	} else {
		@HasAnimationTrack(var_147_bool, "head");
		if(var_147_bool == 0) goto Label_743;
		@UnlookAsync("head");
	}
Label_743:
	
}


void func_986(object var_52_object)
{
	object var_55_object; object var_56_object;
	@GetMainOutdoorScene(var_55_object);
	if(var_55_object == null) {
		@Trace("Can't find main outdoor scene");
		var_56_object = null;
		var_56_object = var_52_object;
	}
	var_55_object->GetMap(var_56_object);
	var_56_object = var_52_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_479(bool var_16_bool)
{
	var_16_bool = true;
}


// @pe
void func_481(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_22_float, float var_23_float)
{
	bool var_24_bool;
	func_654(var_24_bool);
	if(!var_24_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_22_float;
	var_1_object = var_23_float;
	@SetTimer(10, 1.0);
	func_560();
	if(!false) //@nz
		@KillTimer(10);
}


void func_744(string var_119_string)
{
	float var_122_float; float var_123_float;
	@lshGetAnimTimes(var_119_string, var_122_float, var_123_float);
	@lshPlayAnimation(var_122_float, var_123_float, false);
}


// @pe
void func_874(object var_84_object)
{
	object var_88_object;
	func_986(var_88_object);
	object var_85_object;
	var_88_object = var_85_object;
	func_1003(var_85_object, "pt_gmap_factory", (float)2);
	object var_108_object;
	func_986(var_108_object);
	var_84_object->ShowMap(var_108_object);
}


void func_1003(object var_85_object, string var_86_string, float var_87_float)
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


void func_751(string var_105_string, bool var_106_bool)
{
	float var_111_float; float var_112_float;
	@lshGetAnimTimes(var_105_string, var_111_float, var_112_float);
	@lshPlayAnimation(var_111_float, var_112_float, var_106_bool);
}


void func_757(object var_28_object)
{
	float var_31_float;
	var_28_object->GetEyesHeight(var_31_float);
	cvector var_32_cvector = [0.0, 0.0, 0.0];
	var_33_float = GetByIndex(var_32_cvector, 1);
	var_31_float = var_33_float;
	SetByIndex(var_32_cvector, 1) = var_33_float;
	@LookAsync(var_28_object, "head", var_32_cvector);
}


// @pe
void func_890(object var_81_object)
{
	var_81_object->SetReturnValue(0);
}


void func_508(object var_0_object, object var_1_object, bool var_4_bool, bool var_14_bool)
{
	if(var_4_bool == null)
		var_14_bool = false;
	float var_18_float;
	func_646(var_18_float, var_4_bool);
	float var_16_float = sqrt(var_18_float);
	if(var_2_object != 0)
		var_16_float -= var_1_object;
	var_14_bool = var_16_float < var_0_object;
}


void func_639(bool var_70_bool)
{
	var_70_bool = true;
}


