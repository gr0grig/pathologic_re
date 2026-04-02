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
			func_650();
			if(var_7_bool == 15659) {
				object var_12_object; object var_13_object;
				var_12_object = var_1_object;
				var_13_object = var_0_object;
				func_717();
				object var_66_object = var_1_object;
				func_695(var_0_object);
			}
			if(var_7_bool == 15660) {
				object var_94_object; object var_95_object;
				var_94_object = var_1_object;
				var_95_object = var_0_object;
				func_717();
				object var_96_object = var_1_object;
				func_695(var_0_object);
			}
			if(var_6_int == 15646) {
				bool var_100_bool = false;
				bool var_101_bool;
				func_754(var_1_object);
				if(var_101_bool != 0) {
					bool var_109_bool;
					func_766(var_1_object);
					if(var_109_bool != 0)
						var_100_bool = true;
				}
				if(var_100_bool != 0) {
					object var_115_object; object var_116_object;
					var_115_object = var_1_object;
					var_116_object = var_0_object;
					func_711();
					func_171(var_7_bool, "Neutral");
					var_0_object->SetMessage(514421); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(514422, 15648, 15647); //@t
					var_0_object->AddReply(514443, 15650, 15670); //@t
					return 0;
				}
				func_171(var_7_bool, "Neutral");
				var_0_object->SetMessage(514502); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514503, -1, 15740); //@t
				var_0_object->AddReply(534053, -1, 35635); //@t
				return 0;
			}
			if(var_6_int == 15648) {
				func_171(var_7_bool, "Neutral");
				var_0_object->SetMessage(514423); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514424, 15650, 15649); //@t
				var_0_object->AddReply(514440, 15667, 15666); //@t
				return 0;
			}
			if(var_6_int == 15667) {
				func_171(var_7_bool, "Neutral");
				var_0_object->SetMessage(514441); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514442, 15650, 15668); //@t
				return 0;
			}
			if(var_6_int == 15650) {
				func_171(var_7_bool, "Neutral");
				var_0_object->SetMessage(514425); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514426, 15652, 15651); //@t
				var_0_object->AddReply(514436, 15662, 15661); //@t
				return 0;
			}
			if(var_6_int == 15662) {
				func_171(var_7_bool, "Neutral");
				var_0_object->SetMessage(514437); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514438, 15652, 15663); //@t
				var_0_object->AddReply(514439, 15652, 15665); //@t
				return 0;
			}
			if(var_6_int == 15652) {
				func_171(var_7_bool, "Neutral");
				var_0_object->SetMessage(514427); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514428, 15654, 15653); //@t
				var_0_object->AddReply(534052, 15658, 35633); //@t
				return 0;
			}
			if(var_6_int == 15654) {
				func_171(var_7_bool, "Neutral");
				var_0_object->SetMessage(514429); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514430, 15656, 15655); //@t
				var_0_object->AddReply(540067, 15658, 42030); //@t
				return 0;
			}
			if(var_6_int == 15656) {
				func_171(var_7_bool, "Neutral");
				var_0_object->SetMessage(514431); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514432, 15658, 15657); //@t
				return 0;
			}
			if(var_6_int == 15658) {
				func_171(var_7_bool, "Neutral");
				var_0_object->SetMessage(514433); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514434, -1, 15659); //@t
				var_0_object->AddReply(514435, -1, 15660); //@t
				return 0;
			}
			var_3_string = true;
			bool var_225_bool;
			func_907(var_225_bool);
			if(var_225_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xc2";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool)
	{
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

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

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, string var_6_string)
	{
		bool var_8_bool;
		if(var_6_string == "cleanup") {
			var_0_object = true;
			@IsLoaded(var_8_bool);
			bool var_11_bool = false;
			if(!var_8_bool) { //@nz
				bool var_13_bool;
				func_530(var_13_bool);
				if(var_13_bool != 0)
					var_11_bool = true;
			}
			if(var_11_bool != 0) {
				object var_14_object;
				func_657(var_14_object);
				@RemoveActor(var_14_object);
			}
		} else if(var_6_string == "restore") {
			var_0_object = false;
		}
	
	}

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool)
	{
		bool var_6_bool = false;
		if(var_0_object != 0) {
			bool var_8_bool;
			func_530(var_8_bool);
			if(var_8_bool != 0)
				var_6_bool = true;
		}
		if(var_6_bool != 0) {
			object var_9_object;
			func_657(var_9_object);
			@RemoveActor(var_9_object);
		}
	}

}


void func_0(object var_0_object, int var_7_int, object var_8_object)
{
	var_0_object = var_8_object;
	bool var_18_bool; object var_19_object;
	var_8_object = var_19_object;
	func_532(var_18_bool, var_19_object, 70.0);
	if(!var_18_bool) { //@nz
		var_7_int = -2;
		return 8;
	}
	object var_14_object;
	@CreateDialog(var_14_object);
	int var_66_int;
	func_901(var_66_int);
	var_14_object->SetNPCName(var_66_int);
	int var_67_int;
	func_899(var_67_int);
	var_14_object->SetNPCDescription(var_67_int);
	string var_68_string;
	func_903(var_68_string);
	var_14_object->SetPhoto(var_68_string);
	string var_69_string;
	func_905(var_69_string);
	var_14_object->SetPhoto2(var_69_string);
	int var_70_int;
	func_882(var_70_int);
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
		var_155_bool = !var_17_bool; //@nz
		if(var_155_bool == 0) goto Label_63;
		@sync();
		var_14_object->IsDialogEnd(var_17_bool);
	}
	
Label_63:
	object var_156_object;
	var_8_object = var_156_object;
	func_601();
	@StopDialog(var_14_object);
	var_14_object->GetReturnValue(-1);
	int var_16_int = var_7_int;
}
EMIT "Stack[-4] = 0";


void func_832(object var_18_object)
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


void func_899(int var_67_int)
{
	var_67_int = 515596;
}


void func_901(int var_66_int)
{
	var_66_int = 514839;
}


void func_903(string var_68_string)
{
	var_68_string = "ui/NPC_Citizen3.png";
}


// @pe
void func_711(void)
{
	@SetVariable("ood11Nude1", 1);
}


void func_905(string var_69_string)
{
	var_69_string = "ui/NPC_Citizen3_b.png";
}


void func_650(void)
{
	bool var_9_bool;
	func_907(var_9_bool);
	if(var_9_bool != 0)
		@lshStopSpeech();
}


void func_907(bool var_61_bool)
{
	var_61_bool = false;
}


void func_778(void)
{
	object var_38_object;
	@CreateDiaryEntry(var_38_object, 194, 1, 515479);
	bool var_42_bool; object var_43_object;
	var_38_object = var_43_object;
	func_804(var_42_bool, var_43_object, 192);
}
EMIT "Stack[-1] = 0";


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_79_object, object var_80_object)
{
	var_0_object = var_80_object;
	var_1_object = var_79_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_86_bool = false;
		bool var_87_bool;
		func_754(var_1_object);
		if(var_87_bool != 0) {
			bool var_95_bool;
			func_766(var_1_object);
			if(var_95_bool != 0)
				var_86_bool = true;
		}
		if(var_86_bool != 0) {
			object var_101_object; object var_102_object;
			var_101_object = var_1_object;
			var_102_object = var_0_object;
			func_711();
			func_171(var_80_object, "Neutral");
			var_0_object->SetMessage(514421); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(514422, 15648, 15647); //@t
			var_0_object->AddReply(514443, 15650, 15670); //@t
		} else {
					func_171(var_80_object, "Neutral");
					var_0_object->SetMessage(514502); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(514503, -1, 15740); //@t
					var_0_object->AddReply(534053, -1, 35635); //@t
		}
	}
	for(;;) {
		bool var_129_bool;
		func_907(var_129_bool);
		if(var_129_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_619(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_170;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_170:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4e";


void func_717(void)
{
	@SetVariable("d11q01", 2);
	object var_18_object;
	func_832(var_18_object);
	object var_15_object;
	var_18_object = var_15_object;
	float var_29_float;
	func_690(var_29_float);
	var_15_object->AddMark("d11q01NudeGotoRastrel", "pt_d11q01_msoldier", 1, 515482, var_29_float);
	float var_36_float;
	func_690(var_36_float);
	var_15_object->AddMark("d11q01NudeGotoBlock", "pt_map_uprava_admin", 1, 515305, var_36_float);
	func_778();
	bool var_60_bool;
	func_678(var_60_bool, "quest_d11_01", "init_soldiers");
}
EMIT "Stack[-1] = 0";


void func_657(object var_9_object)
{
	object var_11_object;
	@self(var_11_object);
	var_11_object = var_9_object;
}
EMIT "Stack[-1] = 0";


void func_530(bool var_8_bool)
{
	var_8_bool = true;
}


void func_849(object var_68_object, string var_69_string, float var_70_float)
{
	object var_78_object;
	@GetMainOutdoorScene(var_78_object);
	if(var_78_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_76_cvector;
	cvector var_77_cvector;
	bool var_79_bool;
	var_78_object->GetLocator(var_69_string, var_79_bool, var_76_cvector, var_77_cvector);
	if(!var_79_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_69_string) + " doesnt exist");
	var_78_object->GetMap(var_68_object);
	if(var_68_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_89_float = GetByIndex(var_76_cvector, 0);
	var_90_float = GetByIndex(var_76_cvector, 2);
	var_68_object->SetMapParams(var_89_float, var_90_float, var_70_float);
}
EMIT "Stack[-2] = 0";


void func_532(bool var_18_bool, object var_19_object, float var_20_float)
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
	func_663(var_45_cvector, (var_34_cvector ^ [0.0, 1.0, 0.0]));
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
	func_907(var_61_bool);
	if(var_61_bool != 0) {
	} else {
		@HasAnimationTrack(var_38_bool, "head");
		if(var_38_bool == 0) goto Label_595;
		@LookAsyncCamera("head");
	}
Label_595:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_18_bool = true;
	
}


void func_791(object var_51_object)
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


void func_663(cvector var_45_cvector, cvector var_46_cvector)
{
	float var_49_float = sqrt(var_46_cvector | var_46_cvector);
	if(var_49_float < 0.000001)
		var_45_cvector = [0.0, 0.0, 0.0];
	var_45_cvector = var_46_cvector / var_49_float;
}


void func_601(void)
{
	bool var_158_bool;
	@CameraSwitchToNormal(true);
	bool var_160_bool;
	func_907(var_160_bool);
	if(var_160_bool != 0) {
	} else {
		@HasAnimationTrack(var_158_bool, "head");
		if(var_158_bool == 0) goto Label_618;
		@UnlookAsync("head");
	}
Label_618:
	
}


void func_673(int var_89_int, string var_90_string)
{
	int var_92_int;
	@GetVariable(var_90_string, var_92_int);
	var_92_int = var_89_int;
}


void func_804(bool var_42_bool, object var_43_object, int var_44_int)
{
	object var_51_object;
	func_791(var_51_object);
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


void func_678(bool var_60_bool, string var_61_string, string var_62_string)
{
	object var_64_object;
	@FindActor(var_64_object, var_61_string);
	if(var_64_object == null)
		var_60_bool = false;
	@Trigger(var_64_object, var_62_string);
	var_60_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_171(object var_2_object, string var_105_string)
{
	bool var_106_bool;
	func_907(var_106_bool);
	if(!var_106_bool) //@nz
		return 0;
	if(var_105_string == var_2_object)
		return 0;
	string var_109_string; bool var_110_bool;
	var_105_string = var_109_string;
	if(var_105_string == "")
		var_110_bool = false;
	else
		var_110_bool = true;
	func_635(var_109_string, var_110_bool);
	var_2_object = var_105_string;
	
}


void func_619(string var_131_string)
{
	bool var_135_bool; float var_136_float; float var_137_float;
	@lshHasAnimation(var_135_bool, var_131_string);
	if(var_135_bool != 0) {
		@lshGetAnimTimes(var_131_string, var_136_float, var_137_float);
		@lshPlayAnimation(var_136_float, var_137_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_131_string);
	}
	
}


void func_690(float var_29_float)
{
	float var_31_float;
	@GetGameTime(var_31_float);
	var_31_float = var_29_float;
}


void func_882(int var_70_int)
{
	int var_72_int;
	@GetVariable("branch", var_72_int);
	if(var_72_int == 0) {
		var_70_int = 1;
		return 2;
	EMIT "GOTO 0x381";
	}
	if(var_72_int == 1) {
		var_70_int = 2;
		return 2;
	}
	var_70_int = 3;
}


// @pe
void func_754(bool var_87_bool)
{
	int var_89_int;
	func_673(var_89_int, "d11q01");
	if(var_89_int == 1)
		var_87_bool = true;
	var_87_bool = false;
}


// @pe
void func_695(object var_67_object)
{
	object var_71_object;
	func_832(var_71_object);
	object var_68_object;
	var_71_object = var_68_object;
	func_849(var_68_object, "pt_map_uprava_admin", (float)2);
	object var_91_object;
	func_832(var_91_object);
	var_67_object->ShowMap(var_91_object);
}


void func_635(string var_109_string, bool var_110_bool)
{
	bool var_116_bool; float var_117_float; float var_118_float;
	@lshHasAnimation(var_116_bool, var_109_string);
	if(var_116_bool != 0) {
		@lshGetAnimTimes(var_109_string, var_117_float, var_118_float);
		@lshPlayAnimation(var_117_float, var_118_float, var_110_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_109_string);
	}
	
}


// @pe
void func_766(bool var_95_bool)
{
	int var_97_int;
	func_673(var_97_int, "ood11Nude1");
	if(var_97_int == 0) {
		var_95_bool = true;
		return 0;
	}
	var_95_bool = false;
}


