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
			func_778();
			if(var_13_bool == 28267) {
				object var_18_object; object var_19_object;
				var_18_object = var_1_object;
				var_19_object = var_0_object;
				func_847();
			}
			if(var_13_bool == 28275) {
				object var_47_object; object var_48_object;
				var_47_object = var_1_object;
				var_48_object = var_0_object;
				func_856();
				object var_81_object = var_1_object;
				func_900(var_0_object);
				object var_84_object = var_1_object;
				func_884(var_0_object);
			}
			if(var_13_bool == 29417) {
				object var_112_object; object var_113_object;
				var_112_object = var_1_object;
				var_113_object = var_0_object;
				func_856();
				object var_114_object = var_1_object;
				func_900(var_0_object);
				object var_116_object = var_1_object;
				func_884(var_0_object);
			}
			if(var_12_bool == 28264) {
				bool var_120_bool;
				func_905(var_1_object);
				if(var_120_bool != 0) {
					func_157(var_13_bool, "Neutral");
					var_0_object->SetMessage(526972); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(528069, 29412, 29411); //@t
					return 0;
				}
				func_157(var_13_bool, "Neutral");
				var_0_object->SetMessage(526976); //@t
				var_0_object->ClearReplies(); //@t
				bool var_151_bool;
				func_917(var_1_object);
				if(var_151_bool != 0)
					var_0_object->AddReply(526981, 28274, 28273); //@t
				var_0_object->AddReply(526977, -1, 28269); //@t
				return 0;
			}
			if(var_12_bool == 28274) {
				func_157(var_13_bool, "Neutral");
				var_0_object->SetMessage(526982); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528073, 29416, 29415); //@t
				var_0_object->AddReply(528075, -1, 29417); //@t
				return 0;
			}
			if(var_12_bool == 29416) {
				func_157(var_13_bool, "Neutral");
				var_0_object->SetMessage(528074); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526983, -1, 28275); //@t
				return 0;
			}
			if(var_12_bool == 29412) {
				func_157(var_13_bool, "Neutral");
				var_0_object->SetMessage(528070); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528071, 29414, 29413); //@t
				return 0;
			}
			if(var_12_bool == 29414) {
				func_157(var_13_bool, "Neutral");
				var_0_object->SetMessage(528072); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526973, 28266, 28265); //@t
				return 0;
			}
			if(var_12_bool == 28266) {
				func_157(var_13_bool, "Neutral");
				var_0_object->SetMessage(526974); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526975, -1, 28267); //@t
				return 0;
			}
			var_3_string = true;
			bool var_201_bool;
			func_1071(var_201_bool);
			if(var_201_bool != 0)
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
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool)
	{
		func_402(var_11_bool, (float)300, (float)100);
	}

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool, object var_12_object)
	{
		func_536(var_11_bool, var_12_object);
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
			func_420(var_12_string);
	}

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool)
	{
		if(var_6_int != 0)
			func_536(var_10_bool, var_11_bool);
		bool var_16_bool = false;
		if(var_5_int != 0) {
			bool var_18_bool;
			func_469(var_18_bool);
			if(var_18_bool != 0)
				var_16_bool = true;
		}
		if(var_16_bool != 0) {
			object var_19_object;
			func_785(var_19_object);
			@RemoveActor(var_19_object);
		}
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool, int var_12_int)
	{
		if(var_12_int == 10) {
			bool var_15_bool;
			func_498(var_10_bool, var_11_bool, var_12_int, var_15_bool);
			if(var_15_bool != 0) {
				if(!var_2_object) { //@nz
					func_767(var_4_bool);
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
	func_649(var_27_bool, var_28_object, 70.0);
	if(!var_27_bool) { //@nz
		var_16_int = -2;
		return 8;
	}
	object var_23_object;
	@CreateDialog(var_23_object);
	int var_75_int;
	func_1065(var_75_int);
	var_23_object->SetNPCName(var_75_int);
	int var_76_int;
	func_1063(var_76_int);
	var_23_object->SetNPCDescription(var_76_int);
	string var_77_string;
	func_1067(var_77_string);
	var_23_object->SetPhoto(var_77_string);
	string var_78_string;
	func_1069(var_78_string);
	var_23_object->SetPhoto2(var_78_string);
	int var_79_int;
	func_1046(var_79_int);
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
		var_156_bool = !var_26_bool; //@nz
		if(var_156_bool == 0) goto Label_63;
		@sync();
		var_23_object->IsDialogEnd(var_26_bool);
	}
	
Label_63:
	object var_157_object;
	var_17_object = var_157_object;
	func_718();
	@StopDialog(var_23_object);
	var_23_object->GetReturnValue(-1);
	int var_25_int = var_16_int;
}
EMIT "Stack[-4] = 0";


void func_644(bool var_23_bool)
{
	bool var_25_bool;
	@IsLoaded(var_25_bool);
	var_25_bool = var_23_bool;
}


// @pe
void func_900(object var_82_object)
{
	var_82_object->SetReturnValue(0);
}


void func_649(bool var_27_bool, object var_28_object, float var_29_float)
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
	func_791(var_54_cvector, (var_43_cvector ^ [0.0, 1.0, 0.0]));
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
	func_1071(var_70_bool);
	if(var_70_bool != 0) {
	} else {
		@HasAnimationTrack(var_47_bool, "head");
		if(var_47_bool == 0) goto Label_712;
		@LookAsyncCamera("head");
	}
Label_712:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_27_bool = true;
	
}


// @pe
void func_905(bool var_95_bool)
{
	int var_97_int;
	func_801(var_97_int, "k10q01");
	if(var_97_int == 3)
		var_95_bool = true;
	var_95_bool = false;
}


void func_778(void)
{
	bool var_15_bool;
	func_1071(var_15_bool);
	if(var_15_bool != 0)
		@lshStopSpeech();
}


void func_785(object var_19_object)
{
	object var_21_object;
	@self(var_21_object);
	var_21_object = var_19_object;
}
EMIT "Stack[-1] = 0";


void func_402(int var_6_int, float var_12_float, float var_13_float)
{
	float var_14_float; bool var_15_bool; float var_16_float; bool var_17_bool;
	var_6_int = false;
	
	for(;;) {
		@rand(var_16_float, 3);
		@Sleep((var_16_float + 3), var_17_bool);
		var_6_int = true;
		float var_21_float; float var_22_float;
		var_12_float = var_21_float;
		func_471(var_22_float, var_14_float, var_15_bool, var_16_float, var_17_bool, var_21_float, var_22_float);
		var_6_int = false;
	}
}
EMIT "Return(); Pop(4)";


// @pe
void func_917(bool var_144_bool)
{
	int var_146_int;
	func_801(var_146_int, "k10q01");
	if(var_146_int == 5)
		var_144_bool = true;
	var_144_bool = false;
}


void func_1046(int var_79_int)
{
	int var_81_int;
	@GetVariable("branch", var_81_int);
	if(var_81_int == 0) {
		var_79_int = 1;
		return 2;
	EMIT "GOTO 0x425";
	}
	if(var_81_int == 1) {
		var_79_int = 2;
		return 2;
	}
	var_79_int = 3;
}


void func_791(cvector var_54_cvector, cvector var_55_cvector)
{
	float var_58_float = sqrt(var_55_cvector | var_55_cvector);
	if(var_58_float < 0.000001)
		var_54_cvector = [0.0, 0.0, 0.0];
	var_54_cvector = var_55_cvector / var_58_float;
}


// @pe
void func_536(object var_2_object, string var_3_string)
{
	func_631();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
}


// @pe
void func_157(object var_2_object, string var_103_string)
{
	bool var_104_bool;
	func_1071(var_104_bool);
	if(!var_104_bool) //@nz
		return 0;
	if(var_103_string == var_2_object)
		return 0;
	string var_107_string; bool var_108_bool;
	var_103_string = var_107_string;
	if(var_103_string == "")
		var_108_bool = false;
	else
		var_108_bool = true;
	func_752(var_107_string, var_108_bool);
	var_2_object = var_103_string;
	
}


void func_929(void)
{
	object var_23_object;
	@CreateDiaryEntry(var_23_object, 451, 1, 527009);
	bool var_27_bool; object var_28_object;
	var_23_object = var_28_object;
	func_968(var_27_bool, var_28_object, 447);
}
EMIT "Stack[-1] = 0";


void func_801(int var_97_int, string var_98_string)
{
	int var_100_int;
	@GetVariable(var_98_string, var_100_int);
	var_100_int = var_97_int;
}


void func_420(int var_5_int)
{
	var_5_int = true;
	bool var_15_bool = false;
	bool var_16_bool;
	func_644(var_16_bool);
	if(!var_16_bool) { //@nz
		bool var_20_bool;
		func_469(var_20_bool);
		if(var_20_bool != 0)
			var_15_bool = true;
	}
	if(var_15_bool != 0) {
		object var_21_object;
		func_785(var_21_object);
		@RemoveActor(var_21_object);
	}
}


void func_550(void)
{
	int var_39_int; int var_40_int; bool var_41_bool; float var_42_float; bool var_43_bool;
	@WaitForAnimEnd();
	bool var_44_bool;
	func_644(var_44_bool);
	if(!var_44_bool) //@nz
		return 14;
	int var_46_int;
	func_830(var_46_int);
	int var_37_int;
	var_46_int = var_37_int;
	int var_38_int = 0;
	
	for(;;) {
		bool var_59_bool = false;
		if(var_38_int < 5) {
			bool var_62_bool;
			func_644(var_62_bool);
			if(var_62_bool != 0)
				var_59_bool = true;
		}
		if(var_59_bool != 0) {
			@irand(var_39_int, 3);
			if(var_39_int == 0) {
				if(var_37_int == 0) goto Label_597;
				@irand(var_40_int, var_37_int);
				string var_68_string; int var_69_int;
				var_40_int = var_69_int;
				func_823(var_68_string, var_69_int);
				@PlayAnimation("all", var_68_string);
				@WaitForAnimEnd(var_41_bool);
				if(!var_41_bool) { //@nz
				} else {
			} else {
			if(var_39_int == 1) {
				@rand(var_42_float, 4);
				@Sleep((var_42_float + 1), var_43_bool);
				if(!var_43_bool) { //@nz
					goto Label_626;
				}
			} else if(var_38_int != 0) {
				goto Label_626;
			}
			}
					bool var_71_bool;
					func_629(var_71_bool);
					var_72_bool = !var_71_bool; //@nz
					if(var_72_bool == 0) goto Label_621;
			}
		}
	Label_626:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_621:
		@ResetAAS();
		var_38_int += 1;
	}
	
}


void func_1063(int var_76_int)
{
	var_76_int = 515556;
}


void func_806(bool var_75_bool, string var_76_string, string var_77_string)
{
	object var_79_object;
	@FindActor(var_79_object, var_76_string);
	if(var_79_object == null)
		var_75_bool = false;
	@Trigger(var_79_object, var_77_string);
	var_75_bool = true;
}
EMIT "Stack[-1] = 0";


void func_1065(int var_75_int)
{
	var_75_int = 503341;
}


void func_1067(string var_77_string)
{
	var_77_string = "ui/NPC_Citizen3.png";
}


void func_1069(string var_78_string)
{
	var_78_string = "ui/NPC_Citizen3_b.png";
}


void func_942(void)
{
	object var_68_object;
	@CreateDiaryEntry(var_68_object, 453, 1, 527011);
	bool var_72_bool; object var_73_object;
	var_68_object = var_73_object;
	func_968(var_72_bool, var_73_object, 447);
}
EMIT "Stack[-1] = 0";


void func_1071(bool var_70_bool)
{
	var_70_bool = false;
}


void func_818(float var_64_float)
{
	float var_66_float;
	@GetGameTime(var_66_float);
	var_66_float = var_64_float;
}


void func_823(string var_52_string, int var_53_int)
{
	string var_55_string = "idle";
	if(var_53_int != 0)
		var_55_string += var_53_int;
	var_55_string = var_52_string;
}


void func_955(object var_36_object)
{
	object var_38_object;
	@GetDiaryRoot(var_38_object);
	if(!var_38_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_36_object = false;
	}
	var_38_object = var_36_object;
}
EMIT "Stack[-1] = 0";


void func_830(int var_46_int)
{
	int var_49_int; bool var_50_bool;
	var_49_int = 0;
	
	for(;;) {
		string var_52_string; int var_53_int;
		var_49_int = var_53_int;
		func_823(var_52_string, var_53_int);
		@HasAnimation(var_50_bool, "all", var_52_string);
		if(!var_50_bool) //@nz
			break;
		var_49_int += 1;
	}
	var_49_int = var_46_int;
}


void func_968(bool var_27_bool, object var_28_object, int var_29_int)
{
	object var_36_object;
	func_955(var_36_object);
	object var_33_object;
	var_36_object = var_33_object;
	object var_34_object;
	var_33_object->Find(var_29_int, var_34_object);
	if(!var_34_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_29_int);
		var_27_bool = false;
	}
	var_34_object->AddChild(var_28_object);
	@SendWorldWndMessage(7);
	int var_35_int;
	var_28_object->GetCategory(var_35_int);
	@SetDiarySection(var_35_int);
	var_27_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_88_object, object var_89_object)
{
	var_0_object = var_89_object;
	var_1_object = var_88_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_95_bool;
		func_905(var_1_object);
		if(var_95_bool != 0) {
			func_157(var_89_object, "Neutral");
			var_0_object->SetMessage(526972); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(528069, 29412, 29411); //@t
		} else {
					func_157(var_89_object, "Neutral");
					var_0_object->SetMessage(526976); //@t
					var_0_object->ClearReplies(); //@t
					bool var_144_bool;
					func_917(var_1_object);
					if(var_144_bool != 0)
						var_0_object->AddReply(526981, 28274, 28273); //@t
					var_0_object->AddReply(526977, -1, 28269); //@t
		}
	}
	for(;;) {
		bool var_124_bool;
		func_1071(var_124_bool);
		if(var_124_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_736(var_2_object);
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


void func_718(void)
{
	bool var_159_bool;
	@CameraSwitchToNormal(true);
	bool var_161_bool;
	func_1071(var_161_bool);
	if(var_161_bool != 0) {
	} else {
		@HasAnimationTrack(var_159_bool, "head");
		if(var_159_bool == 0) goto Label_735;
		@UnlookAsync("head");
	}
Label_735:
	
}


// @pe
void func_847(void)
{
	@SetVariable("k10q01", 4);
	func_929();
}


void func_469(bool var_18_bool)
{
	var_18_bool = true;
}


// @pe
void func_471(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_21_float, float var_22_float)
{
	bool var_23_bool;
	func_644(var_23_bool);
	if(!var_23_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_21_float;
	var_1_object = var_22_float;
	@SetTimer(10, 1.0);
	func_550();
	if(!false) //@nz
		@KillTimer(10);
}


void func_856(void)
{
	@SetVariable("k10q01", 6);
	object var_53_object;
	func_996(var_53_object);
	object var_50_object;
	var_53_object = var_50_object;
	float var_64_float;
	func_818(var_64_float);
	var_50_object->AddMark("k10q01WastedGotoBurah", "pt_gmap_factory", 1, 530196, var_64_float);
	func_942();
	bool var_75_bool;
	func_806(var_75_bool, "quest_k10_01", "init_factory");
}
EMIT "Stack[-1] = 0";


void func_736(string var_126_string)
{
	bool var_130_bool; float var_131_float; float var_132_float;
	@lshHasAnimation(var_130_bool, var_126_string);
	if(var_130_bool != 0) {
		@lshGetAnimTimes(var_126_string, var_131_float, var_132_float);
		@lshPlayAnimation(var_131_float, var_132_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_126_string);
	}
	
}


void func_996(object var_53_object)
{
	object var_56_object; object var_57_object;
	@GetMainOutdoorScene(var_56_object);
	if(var_56_object == null) {
		@Trace("Can't find main outdoor scene");
		var_57_object = null;
		var_57_object = var_53_object;
	}
	var_56_object->GetMap(var_57_object);
	var_57_object = var_53_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_752(string var_107_string, bool var_108_bool)
{
	bool var_114_bool; float var_115_float; float var_116_float;
	@lshHasAnimation(var_114_bool, var_107_string);
	if(var_114_bool != 0) {
		@lshGetAnimTimes(var_107_string, var_115_float, var_116_float);
		@lshPlayAnimation(var_115_float, var_116_float, var_108_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_107_string);
	}
	
}


void func_498(object var_0_object, object var_1_object, bool var_4_bool, bool var_15_bool)
{
	if(var_4_bool == null)
		var_15_bool = false;
	float var_19_float;
	func_636(var_19_float, var_4_bool);
	float var_17_float = sqrt(var_19_float);
	if(var_2_object != 0)
		var_17_float -= var_1_object;
	var_15_bool = var_17_float < var_0_object;
}


// @pe
void func_884(object var_85_object)
{
	object var_89_object;
	func_996(var_89_object);
	object var_86_object;
	var_89_object = var_86_object;
	func_1013(var_86_object, "pt_gmap_factory", (float)2);
	object var_109_object;
	func_996(var_109_object);
	var_85_object->ShowMap(var_109_object);
}


void func_629(bool var_71_bool)
{
	var_71_bool = true;
}


void func_1013(object var_86_object, string var_87_string, float var_88_float)
{
	object var_96_object;
	@GetMainOutdoorScene(var_96_object);
	if(var_96_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_94_cvector;
	cvector var_95_cvector;
	bool var_97_bool;
	var_96_object->GetLocator(var_87_string, var_97_bool, var_94_cvector, var_95_cvector);
	if(!var_97_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_87_string) + " doesnt exist");
	var_96_object->GetMap(var_86_object);
	if(var_86_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_107_float = GetByIndex(var_94_cvector, 0);
	var_108_float = GetByIndex(var_94_cvector, 2);
	var_86_object->SetMapParams(var_107_float, var_108_float, var_88_float);
}
EMIT "Stack[-2] = 0";


void func_631(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_636(float var_19_float, object var_20_object)
{
	cvector var_24_cvector;
	@GetPosition(var_24_cvector);
	cvector var_25_cvector;
	var_20_object->GetPosition(var_25_cvector);
	var_19_float = (var_25_cvector - var_24_cvector) | (var_25_cvector - var_24_cvector);
}


void func_767(object var_29_object)
{
	float var_32_float;
	var_29_object->GetEyesHeight(var_32_float);
	cvector var_33_cvector = [0.0, 0.0, 0.0];
	var_34_float = GetByIndex(var_33_cvector, 1);
	var_32_float = var_34_float;
	SetByIndex(var_33_cvector, 1) = var_34_float;
	@LookAsync(var_29_object, "head", var_33_cvector);
}


