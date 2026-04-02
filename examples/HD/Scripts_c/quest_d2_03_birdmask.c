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
			func_623();
			if(var_8_bool == 7988) {
				object var_13_object; object var_14_object;
				var_13_object = var_1_object;
				var_14_object = var_0_object;
				func_656();
				object var_17_object; object var_18_object;
				var_17_object = var_1_object;
				var_18_object = var_0_object;
				func_662();
			}
			if(var_8_bool == 7990) {
				object var_62_object; object var_63_object;
				var_62_object = var_1_object;
				var_63_object = var_0_object;
				func_656();
				object var_64_object; object var_65_object;
				var_64_object = var_1_object;
				var_65_object = var_0_object;
				func_662();
			}
			if(var_8_bool == 7991) {
				object var_68_object; object var_69_object;
				var_68_object = var_1_object;
				var_69_object = var_0_object;
				func_656();
				object var_70_object; object var_71_object;
				var_70_object = var_1_object;
				var_71_object = var_0_object;
				func_662();
			}
			if(var_8_bool == 7992) {
				object var_74_object; object var_75_object;
				var_74_object = var_1_object;
				var_75_object = var_0_object;
				func_656();
			}
			if(var_7_bool == 7616) {
				bool var_78_bool;
				func_697(var_1_object);
				if(var_78_bool != 0) {
					func_142(var_8_bool, "Neutral");
					var_0_object->SetMessage(506910); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(506911, 7618, 7617); //@t
					bool var_107_bool;
					func_685(var_1_object);
					if(var_107_bool != 0)
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
				bool var_154_bool;
				func_709(var_1_object);
				if(var_154_bool != 0)
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
			bool var_190_bool;
			func_817(var_190_bool);
			if(var_190_bool != 0)
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
				func_630(var_15_object);
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
			func_630(var_10_object);
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
	int var_73_int;
	func_811(var_73_int);
	var_21_object->SetNPCName(var_73_int);
	int var_74_int;
	func_809(var_74_int);
	var_21_object->SetNPCDescription(var_74_int);
	string var_75_string;
	func_813(var_75_string);
	var_21_object->SetPhoto(var_75_string);
	string var_76_string;
	func_815(var_76_string);
	var_21_object->SetPhoto2(var_76_string);
	int var_77_int;
	func_792(var_77_int);
	var_21_object->SetPlayerName(var_77_int);
	bool var_22_bool;
	@IsOverrideActive(var_22_bool);
	if(var_22_bool != 0) {
		var_14_int = -2;
		return 8;
	}
	@DoDialog(var_21_object);
	object var_86_object; object var_87_object;
	var_15_object = var_86_object;
	var_21_object = var_87_object;
	TaskCall(1);
	func_74(var_88_object, var_89_object, var_90_string, var_91_bool, var_86_object, var_87_object);
	TaskReturn();
	bool var_24_bool;
	var_21_object->IsDialogEnd(var_24_bool);
	
	for(;;) {
		var_149_bool = !var_24_bool; //@nz
		if(var_149_bool == 0) goto Label_63;
		@sync();
		var_21_object->IsDialogEnd(var_24_bool);
	}
	
Label_63:
	object var_150_object;
	var_15_object = var_150_object;
	func_574();
	@StopDialog(var_21_object);
	var_21_object->GetReturnValue(-1);
	int var_23_int = var_14_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_709(bool var_154_bool)
{
	int var_156_int;
	func_646(var_156_int, "d2q03");
	if(var_156_int == 3)
		var_154_bool = true;
	var_154_bool = false;
}


void func_646(int var_95_int, string var_96_string)
{
	int var_98_int;
	@GetVariable(var_96_string, var_98_int);
	var_98_int = var_95_int;
}


void func_775(object var_23_object)
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


void func_455(void)
{
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_86_object, object var_87_object)
{
	var_0_object = var_87_object;
	var_1_object = var_86_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_93_bool;
		func_697(var_1_object);
		if(var_93_bool != 0) {
			func_142(var_87_object, "Neutral");
			var_0_object->SetMessage(506910); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(506911, 7618, 7617); //@t
			bool var_122_bool;
			func_685(var_1_object);
			if(var_122_bool != 0)
				var_0_object->AddReply(507249, 7993, 7989); //@t
		} else {
				return 0;
		}
	}
	bool var_131_bool;
	func_817(var_131_bool);
	if(var_131_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_592(var_2_object);
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


void func_651(float var_34_float)
{
	float var_36_float;
	@GetGameTime(var_36_float);
	var_36_float = var_34_float;
}


// @pe
void func_142(object var_2_object, string var_101_string)
{
	bool var_102_bool;
	func_817(var_102_bool);
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
	func_608(var_105_string, var_106_bool);
	var_2_object = var_101_string;
	
}


// @pe
void func_656(void)
{
	@SetVariable("ood2Birdmask1", 1);
}


void func_592(string var_133_string)
{
	bool var_137_bool; float var_138_float; float var_139_float;
	@lshHasAnimation(var_137_bool, var_133_string);
	if(var_137_bool != 0) {
		@lshGetAnimTimes(var_133_string, var_138_float, var_139_float);
		@lshPlayAnimation(var_138_float, var_139_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_133_string);
	}
	
}


void func_721(void)
{
	object var_38_object;
	@CreateDiaryEntry(var_38_object, 133, 2, 515270);
	bool var_42_bool; object var_43_object;
	var_38_object = var_43_object;
	func_747(var_42_bool, var_43_object, 12);
}
EMIT "Stack[-1] = 0";


void func_662(void)
{
	@SetVariable("d2q03", 3);
	object var_23_object;
	func_775(var_23_object);
	object var_20_object;
	var_23_object = var_20_object;
	float var_34_float;
	func_651(var_34_float);
	var_20_object->AddMark("d2q03BirdmaskGotoLara", "pt_map_lara", 0, 515293, var_34_float);
	func_721();
}
EMIT "Stack[-1] = 0";


void func_792(int var_77_int)
{
	int var_79_int;
	@GetVariable("branch", var_79_int);
	if(var_79_int == 0) {
		var_77_int = 1;
		return 2;
	EMIT "GOTO 0x327";
	}
	if(var_79_int == 1) {
		var_77_int = 2;
		return 2;
	}
	var_77_int = 3;
}


void func_734(object var_51_object)
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


void func_608(string var_105_string, bool var_106_bool)
{
	bool var_112_bool; float var_113_float; float var_114_float;
	@lshHasAnimation(var_112_bool, var_105_string);
	if(var_112_bool != 0) {
		@lshGetAnimTimes(var_105_string, var_113_float, var_114_float);
		@lshPlayAnimation(var_113_float, var_114_float, var_106_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_105_string);
	}
	
}


void func_809(int var_74_int)
{
	var_74_int = 515571;
}


void func_811(int var_73_int)
{
	var_73_int = 504029;
}


void func_747(bool var_42_bool, object var_43_object, int var_44_int)
{
	object var_51_object;
	func_734(var_51_object);
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


void func_813(string var_75_string)
{
	var_75_string = "ui/NPC_bmask.png";
}


// @pe
void func_685(bool var_122_bool)
{
	int var_124_int;
	func_646(var_124_int, "KnowTheater");
	if(var_124_int == 1)
		var_122_bool = true;
	var_122_bool = false;
}


void func_815(string var_76_string)
{
	var_76_string = "ui/NPC_bmask_b.png";
}


void func_623(void)
{
	bool var_10_bool;
	func_817(var_10_bool);
	if(var_10_bool != 0)
		@lshStopSpeech();
}


void func_817(bool var_68_bool)
{
	var_68_bool = false;
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
	func_636(var_52_cvector, (var_41_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_42_cvector = ((var_40_cvector * var_27_float) + (var_52_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_44_bool;
	@IsOverrideActive(var_44_bool);
	if(var_44_bool != 0)
		var_25_bool = false;
	@StopWorld();
	@CameraTransit((var_39_cvector + var_42_cvector), var_41_cvector, true);
	var_66_float = GetByIndex(var_42_cvector, 0);
	var_67_float = GetByIndex(var_42_cvector, 2);
	@Rotate(var_66_float, var_67_float);
	bool var_68_bool;
	func_817(var_68_bool);
	if(var_68_bool != 0) {
	} else {
		@HasAnimationTrack(var_45_bool, "head");
		if(var_45_bool == 0) goto Label_568;
		@LookAsyncCamera("head");
	}
Label_568:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_25_bool = true;
	
}


void func_630(object var_10_object)
{
	object var_12_object;
	@self(var_12_object);
	var_12_object = var_10_object;
}
EMIT "Stack[-1] = 0";


void func_503(bool var_9_bool)
{
	var_9_bool = true;
}


// @pe
void func_697(bool var_93_bool)
{
	int var_95_int;
	func_646(var_95_int, "ood2Birdmask1");
	if(var_95_int == 0) {
		var_93_bool = true;
		return 0;
	}
	var_93_bool = false;
}


void func_636(cvector var_52_cvector, cvector var_53_cvector)
{
	float var_56_float = sqrt(var_53_cvector | var_53_cvector);
	if(var_56_float < 0.000001)
		var_52_cvector = [0.0, 0.0, 0.0];
	var_52_cvector = var_53_cvector / var_56_float;
}


void func_574(void)
{
	bool var_152_bool;
	@CameraSwitchToNormal(true);
	bool var_154_bool;
	func_817(var_154_bool);
	if(var_154_bool != 0) {
	} else {
		@HasAnimationTrack(var_152_bool, "head");
		if(var_152_bool == 0) goto Label_591;
		@UnlookAsync("head");
	}
Label_591:
	
}


