// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool)
	{
		if(1 != 0) {
			func_603();
			if(var_8_bool == 7988) {
				object var_13_object; object var_14_object;
				var_13_object = var_1_object;
				var_14_object = var_0_object;
				func_636();
				object var_17_object; object var_18_object;
				var_17_object = var_1_object;
				var_18_object = var_0_object;
				func_642();
			}
			if(var_8_bool == 7990) {
				object var_62_object; object var_63_object;
				var_62_object = var_1_object;
				var_63_object = var_0_object;
				func_636();
				object var_64_object; object var_65_object;
				var_64_object = var_1_object;
				var_65_object = var_0_object;
				func_642();
			}
			if(var_8_bool == 7991) {
				object var_68_object; object var_69_object;
				var_68_object = var_1_object;
				var_69_object = var_0_object;
				func_636();
				object var_70_object; object var_71_object;
				var_70_object = var_1_object;
				var_71_object = var_0_object;
				func_642();
			}
			if(var_8_bool == 7992) {
				object var_74_object; object var_75_object;
				var_74_object = var_1_object;
				var_75_object = var_0_object;
				func_636();
			}
			if(var_7_bool == 7616) {
				bool var_78_bool;
				func_677(var_1_object);
				if(var_78_bool != 0) {
					func_142(var_8_bool, "Neutral");
					var_0_object->SetMessage(506910); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(506911, 7618, 7617); //@t
					bool var_102_bool;
					func_665(var_1_object);
					if(var_102_bool != 0)
						var_0_object->AddReply(507249, 7993, 7989); //@t
					return 0;
				}
			}
			if(var_7_bool == 7993) {
				func_142(var_8_bool, "Neutral");
				var_0_object->SetMessage(507253); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(507254, 7995, 7994); //@t
				return 0;
			}
			if(var_7_bool == 7995) {
				func_142(var_8_bool, "Neutral");
				var_0_object->SetMessage(507255); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(507256, 7997, 7996); //@t
				return 0;
			}
			if(var_7_bool == 7997) {
				func_142(var_8_bool, "Neutral");
				var_0_object->SetMessage(507257); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(507258, 7999, 7998); //@t
				var_0_object->AddReply(507261, 7618, 8002); //@t
				return 0;
			}
			if(var_7_bool == 7999) {
				func_142(var_8_bool, "Neutral");
				var_0_object->SetMessage(507259); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(507260, 7618, 8000); //@t
				return 0;
			}
			if(var_7_bool == 7618) {
				func_142(var_8_bool, "Neutral");
				var_0_object->SetMessage(506912); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(507242, 7983, 7982); //@t
				bool var_149_bool;
				func_689(var_1_object);
				if(var_149_bool != 0)
					var_0_object->AddReply(507252, -1, 7992); //@t
				return 0;
			}
			if(var_7_bool == 7983) {
				func_142(var_8_bool, "Neutral");
				var_0_object->SetMessage(507243); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(507244, 7985, 7984); //@t
				var_0_object->AddReply(507251, -1, 7991); //@t
				return 0;
			}
			if(var_7_bool == 7985) {
				func_142(var_8_bool, "Neutral");
				var_0_object->SetMessage(507245); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(507246, 7987, 7986); //@t
				var_0_object->AddReply(507250, -1, 7990); //@t
				return 0;
			}
			if(var_7_bool == 7987) {
				func_142(var_8_bool, "Neutral");
				var_0_object->SetMessage(507247); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(507248, -1, 7988); //@t
				return 0;
			}
			var_3_string = true;
			bool var_185_bool;
			func_797(var_185_bool);
			if(var_185_bool != 0)
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
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool)
	{
		var_1_object = false;
		func_455();
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object)
	{
		if(var_1_object != 0) {
		}
		int var_9_int;
		@GetVariable("d2q03", var_9_int);
		if(var_9_int != -1) {
			int var_14_int; object var_15_object;
			var_7_object = var_15_object;
			TaskCall(0);
			func_0(var_16_object, var_14_int, var_15_object);
			TaskReturn();
			var_1_object = true;
		}
	}

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, string var_7_string)
	{
		bool var_9_bool;
		if(var_7_string == "cleanup") {
			var_0_object = true;
			@IsLoaded(var_9_bool);
			bool var_12_bool = false;
			if(!var_9_bool) { //@nz
				bool var_14_bool;
				func_503(var_14_bool);
				if(var_14_bool != 0)
					var_12_bool = true;
			}
			if(var_12_bool != 0) {
				object var_15_object;
				func_610(var_15_object);
				@RemoveActor(var_15_object);
			}
		} else if(var_7_string == "restore") {
			var_0_object = false;
		}
	
	}

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool)
	{
		bool var_7_bool = false;
		if(var_0_object != 0) {
			bool var_9_bool;
			func_503(var_9_bool);
			if(var_9_bool != 0)
				var_7_bool = true;
		}
		if(var_7_bool != 0) {
			object var_10_object;
			func_610(var_10_object);
			@RemoveActor(var_10_object);
		}
	}

}


void func_0(object var_0_object, int var_14_int, object var_15_object)
{
	var_0_object = var_15_object;
	bool var_25_bool; object var_26_object;
	var_15_object = var_26_object;
	func_505(var_25_bool, var_26_object, 130.0);
	if(!var_25_bool) { //@nz
		var_14_int = -2;
		return 8;
	}
	object var_21_object;
	@CreateDialog(var_21_object);
	int var_72_int;
	func_791(var_72_int);
	var_21_object->SetNPCName(var_72_int);
	int var_73_int;
	func_789(var_73_int);
	var_21_object->SetNPCDescription(var_73_int);
	string var_74_string;
	func_793(var_74_string);
	var_21_object->SetPhoto(var_74_string);
	string var_75_string;
	func_795(var_75_string);
	var_21_object->SetPhoto2(var_75_string);
	int var_76_int;
	func_772(var_76_int);
	var_21_object->SetPlayerName(var_76_int);
	bool var_22_bool;
	@IsOverrideActive(var_22_bool);
	if(var_22_bool != 0) {
		var_14_int = -2;
		return 8;
	}
	@DoDialog(var_21_object);
	object var_85_object; object var_86_object;
	var_15_object = var_85_object;
	var_21_object = var_86_object;
	TaskCall(1);
	func_74(var_87_object, var_88_object, var_89_string, var_90_bool, var_85_object, var_86_object);
	TaskReturn();
	bool var_24_bool;
	var_21_object->IsDialogEnd(var_24_bool);
	
	for(;;) {
		var_138_bool = !var_24_bool; //@nz
		if(var_138_bool == 0) goto Label_63;
		@sync();
		var_21_object->IsDialogEnd(var_24_bool);
	}
	
Label_63:
	object var_139_object;
	var_15_object = var_139_object;
	func_573();
	@StopDialog(var_21_object);
	var_21_object->GetReturnValue(-1);
	int var_23_int = var_14_int;
}
EMIT "Stack[-4] = 0";


void func_642(void)
{
	@SetVariable("d2q03", 3);
	object var_23_object;
	func_755(var_23_object);
	object var_20_object;
	var_23_object = var_20_object;
	float var_34_float;
	func_631(var_34_float);
	var_20_object->AddMark("d2q03BirdmaskGotoLara", "pt_map_lara", 0, 515293, var_34_float);
	func_701();
}
EMIT "Stack[-1] = 0";


void func_772(int var_76_int)
{
	int var_78_int;
	@GetVariable("branch", var_78_int);
	if(var_78_int == 0) {
		var_76_int = 1;
		return 2;
	EMIT "GOTO 0x313";
	}
	if(var_78_int == 1) {
		var_76_int = 2;
		return 2;
	}
	var_76_int = 3;
}


void func_701(void)
{
	object var_38_object;
	@CreateDiaryEntry(var_38_object, 133, 2, 515270);
	bool var_42_bool; object var_43_object;
	var_38_object = var_43_object;
	func_727(var_42_bool, var_43_object, 12);
}
EMIT "Stack[-1] = 0";


void func_455(void)
{
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_85_object, object var_86_object)
{
	var_0_object = var_86_object;
	var_1_object = var_85_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_92_bool;
		func_677(var_1_object);
		if(var_92_bool != 0) {
			func_142(var_86_object, "Neutral");
			var_0_object->SetMessage(506910); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(506911, 7618, 7617); //@t
			bool var_116_bool;
			func_665(var_1_object);
			if(var_116_bool != 0)
				var_0_object->AddReply(507249, 7993, 7989); //@t
		} else {
				return 0;
		}
	}
	bool var_125_bool;
	func_797(var_125_bool);
	if(var_125_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_590(var_2_object);
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
EMIT "GOTO 0x4e";


void func_714(object var_51_object)
{
	object var_53_object;
	@GetDiaryRoot(var_53_object);
	if(!var_53_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_51_object = false;
	}
	var_53_object = var_51_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_142(object var_2_object, string var_100_string)
{
	bool var_101_bool;
	func_797(var_101_bool);
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
	func_597(var_104_string, var_105_bool);
	var_2_object = var_100_string;
	
}


void func_590(string var_127_string)
{
	float var_130_float; float var_131_float;
	@lshGetAnimTimes(var_127_string, var_130_float, var_131_float);
	@lshPlayAnimation(var_130_float, var_131_float, false);
}


void func_789(int var_73_int)
{
	var_73_int = 515571;
}


void func_597(string var_104_string, bool var_105_bool)
{
	float var_110_float; float var_111_float;
	@lshGetAnimTimes(var_104_string, var_110_float, var_111_float);
	@lshPlayAnimation(var_110_float, var_111_float, var_105_bool);
}


void func_791(int var_72_int)
{
	var_72_int = 504029;
}


void func_727(bool var_42_bool, object var_43_object, int var_44_int)
{
	object var_51_object;
	func_714(var_51_object);
	object var_48_object;
	var_51_object = var_48_object;
	object var_49_object;
	var_48_object->Find(var_44_int, var_49_object);
	if(!var_49_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_44_int);
		var_42_bool = false;
	}
	var_49_object->AddChild(var_43_object);
	@SendWorldWndMessage(7);
	int var_50_int;
	var_43_object->GetCategory(var_50_int);
	@SetDiarySection(var_50_int);
	var_42_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_793(string var_74_string)
{
	var_74_string = "ui/NPC_bmask.png";
}


// @pe
void func_665(bool var_116_bool)
{
	int var_118_int;
	func_626(var_118_int, "KnowTheater");
	if(var_118_int == 1)
		var_116_bool = true;
	var_116_bool = false;
}


void func_795(string var_75_string)
{
	var_75_string = "ui/NPC_bmask_b.png";
}


void func_603(void)
{
	bool var_10_bool;
	func_797(var_10_bool);
	if(var_10_bool != 0)
		@lshStopSpeech();
}


void func_797(bool var_67_bool)
{
	var_67_bool = false;
}


void func_610(object var_10_object)
{
	object var_12_object;
	@self(var_12_object);
	var_12_object = var_10_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_677(bool var_92_bool)
{
	int var_94_int;
	func_626(var_94_int, "ood2Birdmask1");
	if(var_94_int == 0) {
		var_92_bool = true;
		return 0;
	}
	var_92_bool = false;
}


void func_631(float var_34_float)
{
	float var_36_float;
	@GetGameTime(var_36_float);
	var_36_float = var_34_float;
}


void func_616(cvector var_52_cvector, cvector var_53_cvector)
{
	float var_56_float = sqrt(var_53_cvector | var_53_cvector);
	if(var_56_float < 0.000001)
		var_52_cvector = [0.0, 0.0, 0.0];
	var_52_cvector = var_53_cvector / var_56_float;
}


// @pe
void func_689(bool var_149_bool)
{
	int var_151_int;
	func_626(var_151_int, "d2q03");
	if(var_151_int == 3)
		var_149_bool = true;
	var_149_bool = false;
}


void func_626(int var_94_int, string var_95_string)
{
	int var_97_int;
	@GetVariable(var_95_string, var_97_int);
	var_97_int = var_94_int;
}


void func_755(object var_23_object)
{
	object var_26_object; object var_27_object;
	@GetMainOutdoorScene(var_26_object);
	if(var_26_object == null) {
		@Trace("Can't find main outdoor scene");
		var_27_object = null;
		var_27_object = var_23_object;
	}
	var_26_object->GetMap(var_27_object);
	var_27_object = var_23_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_503(bool var_9_bool)
{
	var_9_bool = true;
}


void func_505(bool var_25_bool, object var_26_object, float var_27_float)
{
	cvector var_38_cvector; bool var_45_bool;
	var_26_object->GetPosition(var_38_cvector);
	float var_37_float;
	var_26_object->GetEyesHeight(var_37_float);
	var_46_float = GetByIndex(var_38_cvector, 1);
	SetByIndex(var_38_cvector, 1) = (var_46_float + var_37_float);
	cvector var_39_cvector;
	@GetPosition(var_39_cvector);
	@GetEyesHeight(var_37_float);
	var_47_float = GetByIndex(var_39_cvector, 1);
	SetByIndex(var_39_cvector, 1) = (var_47_float + var_37_float);
	cvector var_40_cvector = var_38_cvector - var_39_cvector;
	var_48_float = GetByIndex(var_40_cvector, 1);
	SetByIndex(var_40_cvector, 1) = (float)0;
	var_50_float = sqrt(var_40_cvector | var_40_cvector);
	var_40_cvector /= var_50_float;
	cvector var_41_cvector = -var_40_cvector;
	cvector var_52_cvector;
	func_616(var_52_cvector, (var_41_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_42_cvector = ((var_40_cvector * var_27_float) + (var_52_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_44_bool;
	@IsOverrideActive(var_44_bool);
	if(var_44_bool != 0)
		var_25_bool = false;
	@StopWorld();
	@CameraTransit((var_39_cvector + var_42_cvector), var_41_cvector);
	var_65_float = GetByIndex(var_42_cvector, 0);
	var_66_float = GetByIndex(var_42_cvector, 2);
	@Rotate(var_65_float, var_66_float);
	bool var_67_bool;
	func_797(var_67_bool);
	if(var_67_bool != 0) {
	} else {
		@HasAnimationTrack(var_45_bool, "head");
		if(var_45_bool == 0) goto Label_567;
		@LookAsyncCamera("head");
	}
Label_567:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_25_bool = true;
	
}


// @pe
void func_636(void)
{
	@SetVariable("ood2Birdmask1", 1);
}


void func_573(void)
{
	bool var_141_bool;
	@CameraSwitchToNormal();
	bool var_142_bool;
	func_797(var_142_bool);
	if(var_142_bool != 0) {
	} else {
		@HasAnimationTrack(var_141_bool, "head");
		if(var_141_bool == 0) goto Label_589;
		@UnlookAsync("head");
	}
Label_589:
	
}


