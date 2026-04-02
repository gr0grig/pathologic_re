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
			func_630();
			if(var_7_bool == 15659) {
				object var_12_object; object var_13_object;
				var_12_object = var_1_object;
				var_13_object = var_0_object;
				func_697();
				object var_66_object = var_1_object;
				func_675(var_0_object);
			}
			if(var_7_bool == 15660) {
				object var_94_object; object var_95_object;
				var_94_object = var_1_object;
				var_95_object = var_0_object;
				func_697();
				object var_96_object = var_1_object;
				func_675(var_0_object);
			}
			if(var_6_int == 15646) {
				bool var_100_bool = false;
				bool var_101_bool;
				func_734(var_1_object);
				if(var_101_bool != 0) {
					bool var_109_bool;
					func_746(var_1_object);
					if(var_109_bool != 0)
						var_100_bool = true;
				}
				if(var_100_bool != 0) {
					object var_115_object; object var_116_object;
					var_115_object = var_1_object;
					var_116_object = var_0_object;
					func_691();
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
			bool var_220_bool;
			func_887(var_220_bool);
			if(var_220_bool != 0)
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
				func_637(var_14_object);
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
			func_637(var_9_object);
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
	int var_65_int;
	func_881(var_65_int);
	var_14_object->SetNPCName(var_65_int);
	int var_66_int;
	func_879(var_66_int);
	var_14_object->SetNPCDescription(var_66_int);
	string var_67_string;
	func_883(var_67_string);
	var_14_object->SetPhoto(var_67_string);
	string var_68_string;
	func_885(var_68_string);
	var_14_object->SetPhoto2(var_68_string);
	int var_69_int;
	func_862(var_69_int);
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
		var_144_bool = !var_17_bool; //@nz
		if(var_144_bool == 0) goto Label_63;
		@sync();
		var_14_object->IsDialogEnd(var_17_bool);
	}
	
Label_63:
	object var_145_object;
	var_8_object = var_145_object;
	func_600();
	@StopDialog(var_14_object);
	var_14_object->GetReturnValue(-1);
	int var_16_int = var_7_int;
}
EMIT "Stack[-4] = 0";


void func_771(object var_51_object)
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


void func_643(cvector var_45_cvector, cvector var_46_cvector)
{
	float var_49_float = sqrt(var_46_cvector | var_46_cvector);
	if(var_49_float < 0.000001)
		var_45_cvector = [0.0, 0.0, 0.0];
	var_45_cvector = var_46_cvector / var_49_float;
}


void func_637(object var_9_object)
{
	object var_11_object;
	@self(var_11_object);
	var_11_object = var_9_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_78_object, object var_79_object)
{
	var_0_object = var_79_object;
	var_1_object = var_78_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_85_bool = false;
		bool var_86_bool;
		func_734(var_1_object);
		if(var_86_bool != 0) {
			bool var_94_bool;
			func_746(var_1_object);
			if(var_94_bool != 0)
				var_85_bool = true;
		}
		if(var_85_bool != 0) {
			object var_100_object; object var_101_object;
			var_100_object = var_1_object;
			var_101_object = var_0_object;
			func_691();
			func_171(var_79_object, "Neutral");
			var_0_object->SetMessage(514421); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(514422, 15648, 15647); //@t
			var_0_object->AddReply(514443, 15650, 15670); //@t
		} else {
					func_171(var_79_object, "Neutral");
					var_0_object->SetMessage(514502); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(514503, -1, 15740); //@t
					var_0_object->AddReply(534053, -1, 35635); //@t
		}
	}
	for(;;) {
		bool var_123_bool;
		func_887(var_123_bool);
		if(var_123_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_617(var_2_object);
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


void func_653(int var_88_int, string var_89_string)
{
	int var_91_int;
	@GetVariable(var_89_string, var_91_int);
	var_91_int = var_88_int;
}


void func_784(bool var_42_bool, object var_43_object, int var_44_int)
{
	object var_51_object;
	func_771(var_51_object);
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


void func_530(bool var_8_bool)
{
	var_8_bool = true;
}


void func_658(bool var_60_bool, string var_61_string, string var_62_string)
{
	object var_64_object;
	@FindActor(var_64_object, var_61_string);
	if(var_64_object == null)
		var_60_bool = false;
	@Trigger(var_64_object, var_62_string);
	var_60_bool = true;
}
EMIT "Stack[-1] = 0";


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
	func_643(var_45_cvector, (var_34_cvector ^ [0.0, 1.0, 0.0]));
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
	func_887(var_60_bool);
	if(var_60_bool != 0) {
	} else {
		@HasAnimationTrack(var_38_bool, "head");
		if(var_38_bool == 0) goto Label_594;
		@LookAsyncCamera("head");
	}
Label_594:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_18_bool = true;
	
}


void func_600(void)
{
	bool var_147_bool;
	@CameraSwitchToNormal();
	bool var_148_bool;
	func_887(var_148_bool);
	if(var_148_bool != 0) {
	} else {
		@HasAnimationTrack(var_147_bool, "head");
		if(var_147_bool == 0) goto Label_616;
		@UnlookAsync("head");
	}
Label_616:
	
}


void func_670(float var_29_float)
{
	float var_31_float;
	@GetGameTime(var_31_float);
	var_31_float = var_29_float;
}


// @pe
void func_734(bool var_86_bool)
{
	int var_88_int;
	func_653(var_88_int, "d11q01");
	if(var_88_int == 1)
		var_86_bool = true;
	var_86_bool = false;
}


void func_862(int var_69_int)
{
	int var_71_int;
	@GetVariable("branch", var_71_int);
	if(var_71_int == 0) {
		var_69_int = 1;
		return 2;
	EMIT "GOTO 0x36d";
	}
	if(var_71_int == 1) {
		var_69_int = 2;
		return 2;
	}
	var_69_int = 3;
}


// @pe
void func_675(object var_67_object)
{
	object var_71_object;
	func_812(var_71_object);
	object var_68_object;
	var_71_object = var_68_object;
	func_829(var_68_object, "pt_map_uprava_admin", (float)2);
	object var_91_object;
	func_812(var_91_object);
	var_67_object->ShowMap(var_91_object);
}


void func_617(string var_125_string)
{
	float var_128_float; float var_129_float;
	@lshGetAnimTimes(var_125_string, var_128_float, var_129_float);
	@lshPlayAnimation(var_128_float, var_129_float, false);
}


// @pe
void func_746(bool var_94_bool)
{
	int var_96_int;
	func_653(var_96_int, "ood11Nude1");
	if(var_96_int == 0) {
		var_94_bool = true;
		return 0;
	}
	var_94_bool = false;
}


// @pe
void func_171(object var_2_object, string var_104_string)
{
	bool var_105_bool;
	func_887(var_105_bool);
	if(!var_105_bool) //@nz
		return 0;
	if(var_104_string == var_2_object)
		return 0;
	string var_108_string; bool var_109_bool;
	var_104_string = var_108_string;
	if(var_104_string == "")
		var_109_bool = false;
	else
		var_109_bool = true;
	func_624(var_108_string, var_109_bool);
	var_2_object = var_104_string;
	
}


void func_812(object var_18_object)
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


void func_879(int var_66_int)
{
	var_66_int = 515596;
}


void func_624(string var_108_string, bool var_109_bool)
{
	float var_114_float; float var_115_float;
	@lshGetAnimTimes(var_108_string, var_114_float, var_115_float);
	@lshPlayAnimation(var_114_float, var_115_float, var_109_bool);
}


void func_881(int var_65_int)
{
	var_65_int = 514839;
}


// @pe
void func_691(void)
{
	@SetVariable("ood11Nude1", 1);
}


void func_883(string var_67_string)
{
	var_67_string = "ui/NPC_Citizen3.png";
}


void func_885(string var_68_string)
{
	var_68_string = "ui/NPC_Citizen3_b.png";
}


void func_630(void)
{
	bool var_9_bool;
	func_887(var_9_bool);
	if(var_9_bool != 0)
		@lshStopSpeech();
}


void func_887(bool var_60_bool)
{
	var_60_bool = false;
}


void func_758(void)
{
	object var_38_object;
	@CreateDiaryEntry(var_38_object, 194, 1, 515479);
	bool var_42_bool; object var_43_object;
	var_38_object = var_43_object;
	func_784(var_42_bool, var_43_object, 192);
}
EMIT "Stack[-1] = 0";


void func_697(void)
{
	@SetVariable("d11q01", 2);
	object var_18_object;
	func_812(var_18_object);
	object var_15_object;
	var_18_object = var_15_object;
	float var_29_float;
	func_670(var_29_float);
	var_15_object->AddMark("d11q01NudeGotoRastrel", "pt_d11q01_msoldier", 1, 515482, var_29_float);
	float var_36_float;
	func_670(var_36_float);
	var_15_object->AddMark("d11q01NudeGotoBlock", "pt_map_uprava_admin", 1, 515305, var_36_float);
	func_758();
	bool var_60_bool;
	func_658(var_60_bool, "quest_d11_01", "init_soldiers");
}
EMIT "Stack[-1] = 0";


void func_829(object var_68_object, string var_69_string, float var_70_float)
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


