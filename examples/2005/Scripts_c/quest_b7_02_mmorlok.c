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
			func_634();
			if(var_7_bool == 22419) {
				object var_12_object; object var_13_object;
				var_12_object = var_1_object;
				var_13_object = var_0_object;
				func_698();
			}
			if(var_6_int == 22414) {
				bool var_47_bool;
				func_718(var_1_object);
				if(var_47_bool != 0) {
					object var_55_object; object var_56_object;
					var_55_object = var_1_object;
					var_56_object = var_0_object;
					func_712();
					func_152(var_7_bool, "Neutral");
					var_0_object->SetMessage(521220); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(521221, 29945, 22415); //@t
					return 0;
				}
				func_152(var_7_bool, "Neutral");
				var_0_object->SetMessage(521222); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521223, -1, 22417); //@t
				return 0;
			}
			if(var_6_int == 29945) {
				func_152(var_7_bool, "Neutral");
				var_0_object->SetMessage(528551); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528552, 29947, 29946); //@t
				return 0;
			}
			if(var_6_int == 29947) {
				func_152(var_7_bool, "Neutral");
				var_0_object->SetMessage(528553); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528554, 29949, 29948); //@t
				var_0_object->AddReply(528564, 29949, 29959); //@t
				return 0;
			}
			if(var_6_int == 29949) {
				func_152(var_7_bool, "Neutral");
				var_0_object->SetMessage(528555); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528560, 29956, 29955); //@t
				return 0;
			}
			if(var_6_int == 29956) {
				func_152(var_7_bool, "Neutral");
				var_0_object->SetMessage(528561); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528556, 29951, 29950); //@t
				var_0_object->AddReply(528558, 29951, 29952); //@t
				return 0;
			}
			if(var_6_int == 29951) {
				func_152(var_7_bool, "Neutral");
				var_0_object->SetMessage(528557); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528559, 29957, 29954); //@t
				return 0;
			}
			if(var_6_int == 29957) {
				func_152(var_7_bool, "Neutral");
				var_0_object->SetMessage(528562); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521225, -1, 22419); //@t
				return 0;
			}
			var_3_string = true;
			bool var_128_bool;
			func_809(var_128_bool);
			if(var_128_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xaf";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool)
	{
	
	Label_374:
		for(;;) {
			bool var_8_bool;
			func_531(var_8_bool);
			var_11_bool = !var_8_bool; //@nz
			if(var_11_bool == 0) goto Label_382;
			@Hold();
		}
	
	Label_382:
		float var_7_float;
		@rand(var_7_float, 3);
		@Sleep(var_7_float + 3);
		func_445();
		goto Label_374;
	}
	EMIT "Return(); Pop(2)";

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object)
	{
		func_526();
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
			func_394(var_6_string);
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
			func_443(var_8_bool);
			if(var_8_bool != 0)
				var_6_bool = true;
		}
		if(var_6_bool != 0) {
			object var_9_object;
			func_641(var_9_object);
			@RemoveActor(var_9_object);
		}
	}

}


void func_0(object var_0_object, int var_7_int, object var_8_object)
{
	var_0_object = var_8_object;
	bool var_18_bool; object var_19_object;
	var_8_object = var_19_object;
	func_536(var_18_bool, var_19_object, 110.0);
	if(!var_18_bool) { //@nz
		var_7_int = -2;
		return 8;
	}
	object var_14_object;
	@CreateDialog(var_14_object);
	int var_65_int;
	func_803(var_65_int);
	var_14_object->SetNPCName(var_65_int);
	int var_66_int;
	func_801(var_66_int);
	var_14_object->SetNPCDescription(var_66_int);
	string var_67_string;
	func_805(var_67_string);
	var_14_object->SetPhoto(var_67_string);
	string var_68_string;
	func_807(var_68_string);
	var_14_object->SetPhoto2(var_68_string);
	int var_69_int;
	func_784(var_69_int);
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
		var_131_bool = !var_17_bool; //@nz
		if(var_131_bool == 0) goto Label_63;
		@sync();
		var_14_object->IsDialogEnd(var_17_bool);
	}
	
Label_63:
	object var_132_object;
	var_8_object = var_132_object;
	func_604();
	@StopDialog(var_14_object);
	var_14_object->GetReturnValue(-1);
	int var_16_int = var_7_int;
}
EMIT "Stack[-4] = 0";


void func_641(object var_9_object)
{
	object var_11_object;
	@self(var_11_object);
	var_11_object = var_9_object;
}
EMIT "Stack[-1] = 0";


void func_647(cvector var_45_cvector, cvector var_46_cvector)
{
	float var_49_float = sqrt(var_46_cvector | var_46_cvector);
	if(var_49_float < 0.000001)
		var_45_cvector = [0.0, 0.0, 0.0];
	var_45_cvector = var_46_cvector / var_49_float;
}


void func_394(object var_0_object)
{
	var_0_object = true;
	bool var_10_bool;
	@IsLoaded(var_10_bool);
	bool var_11_bool = false;
	if(!var_10_bool) { //@nz
		bool var_13_bool;
		func_443(var_13_bool);
		if(var_13_bool != 0)
			var_11_bool = true;
	}
	if(var_11_bool != 0) {
		object var_14_object;
		func_641(var_14_object);
		@RemoveActor(var_14_object);
	}
}


void func_524(bool var_56_bool)
{
	var_56_bool = true;
}


void func_526(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_784(int var_69_int)
{
	int var_71_int;
	@GetVariable("branch", var_71_int);
	if(var_71_int == 0) {
		var_69_int = 1;
		return 2;
	EMIT "GOTO 0x31f";
	}
	if(var_71_int == 1) {
		var_69_int = 2;
		return 2;
	}
	var_69_int = 3;
}


void func_657(int var_87_int, string var_88_string)
{
	int var_90_int;
	@GetVariable(var_88_string, var_90_int);
	var_90_int = var_87_int;
}


void func_531(bool var_8_bool)
{
	bool var_10_bool;
	@IsLoaded(var_10_bool);
	var_10_bool = var_8_bool;
}


void func_662(bool var_39_bool, string var_40_string, string var_41_string)
{
	object var_43_object;
	@FindActor(var_43_object, var_40_string);
	if(var_43_object == null)
		var_39_bool = false;
	@Trigger(var_43_object, var_41_string);
	var_39_bool = true;
}
EMIT "Stack[-1] = 0";


void func_536(bool var_18_bool, object var_19_object, float var_20_float)
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
	func_647(var_45_cvector, (var_34_cvector ^ [0.0, 1.0, 0.0]));
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
	func_809(var_60_bool);
	if(var_60_bool != 0) {
	} else {
		@HasAnimationTrack(var_38_bool, "head");
		if(var_38_bool == 0) goto Label_598;
		@LookAsyncCamera("head");
	}
Label_598:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_18_bool = true;
	
}


// @pe
void func_152(object var_2_object, string var_97_string)
{
	bool var_98_bool;
	func_809(var_98_bool);
	if(!var_98_bool) //@nz
		return 0;
	if(var_97_string == var_2_object)
		return 0;
	string var_101_string; bool var_102_bool;
	var_97_string = var_101_string;
	if(var_97_string == "")
		var_102_bool = false;
	else
		var_102_bool = true;
	func_628(var_101_string, var_102_bool);
	var_2_object = var_97_string;
	
}


void func_801(int var_66_int)
{
	var_66_int = 521048;
}


void func_674(string var_37_string, int var_38_int)
{
	string var_40_string = "idle";
	if(var_38_int != 0)
		var_40_string += var_38_int;
	var_40_string = var_37_string;
}


void func_803(int var_65_int)
{
	var_65_int = 521047;
}


void func_805(string var_67_string)
{
	var_67_string = "ui/NPC_Citizen2.png";
}


void func_807(string var_68_string)
{
	var_68_string = "ui/NPC_Citizen2_b.png";
}


void func_809(bool var_60_bool)
{
	var_60_bool = false;
}


void func_681(int var_31_int)
{
	int var_34_int; bool var_35_bool;
	var_34_int = 0;
	
	for(;;) {
		string var_37_string; int var_38_int;
		var_34_int = var_38_int;
		func_674(var_37_string, var_38_int);
		@HasAnimation(var_35_bool, "all", var_37_string);
		if(!var_35_bool) //@nz
			break;
		var_34_int += 1;
	}
	var_34_int = var_31_int;
}


// @pe
void func_698(void)
{
	@SetVariable("b7q02", 2);
	func_730();
	bool var_39_bool;
	func_662(var_39_bool, "quest_b7_02", "place_grabitels");
}


void func_443(bool var_8_bool)
{
	var_8_bool = true;
}


void func_445(void)
{
	int var_24_int; int var_25_int; bool var_26_bool; float var_27_float; bool var_28_bool;
	@WaitForAnimEnd();
	bool var_29_bool;
	func_531(var_29_bool);
	if(!var_29_bool) //@nz
		return 14;
	int var_31_int;
	func_681(var_31_int);
	int var_22_int;
	var_31_int = var_22_int;
	int var_23_int = 0;
	
	for(;;) {
		bool var_44_bool = false;
		if(var_23_int < 5) {
			bool var_47_bool;
			func_531(var_47_bool);
			if(var_47_bool != 0)
				var_44_bool = true;
		}
		if(var_44_bool != 0) {
			@irand(var_24_int, 3);
			if(var_24_int == 0) {
				if(var_22_int == 0) goto Label_492;
				@irand(var_25_int, var_22_int);
				string var_53_string; int var_54_int;
				var_25_int = var_54_int;
				func_674(var_53_string, var_54_int);
				@PlayAnimation("all", var_53_string);
				@WaitForAnimEnd(var_26_bool);
				if(!var_26_bool) { //@nz
				} else {
			} else {
			if(var_24_int == 1) {
				@rand(var_27_float, 4);
				@Sleep((var_27_float + 1), var_28_bool);
				if(!var_28_bool) { //@nz
					goto Label_521;
				}
			} else if(var_23_int != 0) {
				goto Label_521;
			}
			}
					bool var_56_bool;
					func_524(var_56_bool);
					var_57_bool = !var_56_bool; //@nz
					if(var_57_bool == 0) goto Label_516;
			}
		}
	Label_521:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_516:
		@ResetAAS();
		var_23_int += 1;
	}
	
}


// @pe
void func_712(void)
{
	@SetVariable("oob7Morlok1", 1);
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_78_object, object var_79_object)
{
	var_0_object = var_79_object;
	var_1_object = var_78_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_85_bool;
		func_718(var_1_object);
		if(var_85_bool != 0) {
			object var_93_object; object var_94_object;
			var_93_object = var_1_object;
			var_94_object = var_0_object;
			func_712();
			func_152(var_79_object, "Neutral");
			var_0_object->SetMessage(521220); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(521221, 29945, 22415); //@t
		} else {
					func_152(var_79_object, "Neutral");
					var_0_object->SetMessage(521222); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(521223, -1, 22417); //@t
		}
	}
	for(;;) {
		bool var_113_bool;
		func_809(var_113_bool);
		if(var_113_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_621(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_151;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_151:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4e";


// @pe
void func_718(bool var_85_bool)
{
	int var_87_int;
	func_657(var_87_int, "oob7Morlok1");
	if(var_87_int == 0) {
		var_85_bool = true;
		return 0;
	}
	var_85_bool = false;
}


void func_730(void)
{
	object var_17_object;
	@CreateDiaryEntry(var_17_object, 272, 2, 521226);
	bool var_21_bool; object var_22_object;
	var_17_object = var_22_object;
	func_756(var_21_bool, var_22_object, 270);
}
EMIT "Stack[-1] = 0";


void func_604(void)
{
	bool var_134_bool;
	@CameraSwitchToNormal();
	bool var_135_bool;
	func_809(var_135_bool);
	if(var_135_bool != 0) {
	} else {
		@HasAnimationTrack(var_134_bool, "head");
		if(var_134_bool == 0) goto Label_620;
		@UnlookAsync("head");
	}
Label_620:
	
}


void func_743(object var_30_object)
{
	object var_32_object;
	@GetDiaryRoot(var_32_object);
	if(!var_32_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_30_object = false;
	}
	var_32_object = var_30_object;
}
EMIT "Stack[-1] = 0";


void func_621(string var_115_string)
{
	float var_118_float; float var_119_float;
	@lshGetAnimTimes(var_115_string, var_118_float, var_119_float);
	@lshPlayAnimation(var_118_float, var_119_float, false);
}


void func_628(string var_101_string, bool var_102_bool)
{
	float var_107_float; float var_108_float;
	@lshGetAnimTimes(var_101_string, var_107_float, var_108_float);
	@lshPlayAnimation(var_107_float, var_108_float, var_102_bool);
}


void func_756(bool var_21_bool, object var_22_object, int var_23_int)
{
	object var_30_object;
	func_743(var_30_object);
	object var_27_object;
	var_30_object = var_27_object;
	object var_28_object;
	var_27_object->Find(var_23_int, var_28_object);
	if(!var_28_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_23_int);
		var_21_bool = false;
	}
	var_28_object->AddChild(var_22_object);
	@SendWorldWndMessage(7);
	int var_29_int;
	var_22_object->GetCategory(var_29_int);
	@SetDiarySection(var_29_int);
	var_21_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_634(void)
{
	bool var_9_bool;
	func_809(var_9_bool);
	if(var_9_bool != 0)
		@lshStopSpeech();
}


