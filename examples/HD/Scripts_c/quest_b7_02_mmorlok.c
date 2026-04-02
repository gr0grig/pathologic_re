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
			func_654();
			if(var_7_bool == 22419) {
				object var_12_object; object var_13_object;
				var_12_object = var_1_object;
				var_13_object = var_0_object;
				func_718();
			}
			if(var_6_int == 22414) {
				bool var_47_bool;
				func_738(var_1_object);
				if(var_47_bool != 0) {
					object var_55_object; object var_56_object;
					var_55_object = var_1_object;
					var_56_object = var_0_object;
					func_732();
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
			bool var_133_bool;
			func_829(var_133_bool);
			if(var_133_bool != 0)
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
			func_661(var_9_object);
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
	int var_66_int;
	func_823(var_66_int);
	var_14_object->SetNPCName(var_66_int);
	int var_67_int;
	func_821(var_67_int);
	var_14_object->SetNPCDescription(var_67_int);
	string var_68_string;
	func_825(var_68_string);
	var_14_object->SetPhoto(var_68_string);
	string var_69_string;
	func_827(var_69_string);
	var_14_object->SetPhoto2(var_69_string);
	int var_70_int;
	func_804(var_70_int);
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
		var_142_bool = !var_17_bool; //@nz
		if(var_142_bool == 0) goto Label_63;
		@sync();
		var_14_object->IsDialogEnd(var_17_bool);
	}
	
Label_63:
	object var_143_object;
	var_8_object = var_143_object;
	func_605();
	@StopDialog(var_14_object);
	var_14_object->GetReturnValue(-1);
	int var_16_int = var_7_int;
}
EMIT "Stack[-4] = 0";


void func_776(bool var_21_bool, object var_22_object, int var_23_int)
{
	object var_30_object;
	func_763(var_30_object);
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
		func_661(var_14_object);
		@RemoveActor(var_14_object);
	}
}


void func_524(bool var_56_bool)
{
	var_56_bool = true;
}


void func_654(void)
{
	bool var_9_bool;
	func_829(var_9_bool);
	if(var_9_bool != 0)
		@lshStopSpeech();
}


void func_526(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_531(bool var_8_bool)
{
	bool var_10_bool;
	@IsLoaded(var_10_bool);
	var_10_bool = var_8_bool;
}


void func_661(object var_9_object)
{
	object var_11_object;
	@self(var_11_object);
	var_11_object = var_9_object;
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
	func_667(var_45_cvector, (var_34_cvector ^ [0.0, 1.0, 0.0]));
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
	func_829(var_61_bool);
	if(var_61_bool != 0) {
	} else {
		@HasAnimationTrack(var_38_bool, "head");
		if(var_38_bool == 0) goto Label_599;
		@LookAsyncCamera("head");
	}
Label_599:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_18_bool = true;
	
}


// @pe
void func_152(object var_2_object, string var_98_string)
{
	bool var_99_bool;
	func_829(var_99_bool);
	if(!var_99_bool) //@nz
		return 0;
	if(var_98_string == var_2_object)
		return 0;
	string var_102_string; bool var_103_bool;
	var_98_string = var_102_string;
	if(var_98_string == "")
		var_103_bool = false;
	else
		var_103_bool = true;
	func_639(var_102_string, var_103_bool);
	var_2_object = var_98_string;
	
}


void func_667(cvector var_45_cvector, cvector var_46_cvector)
{
	float var_49_float = sqrt(var_46_cvector | var_46_cvector);
	if(var_49_float < 0.000001)
		var_45_cvector = [0.0, 0.0, 0.0];
	var_45_cvector = var_46_cvector / var_49_float;
}


void func_804(int var_70_int)
{
	int var_72_int;
	@GetVariable("branch", var_72_int);
	if(var_72_int == 0) {
		var_70_int = 1;
		return 2;
	EMIT "GOTO 0x333";
	}
	if(var_72_int == 1) {
		var_70_int = 2;
		return 2;
	}
	var_70_int = 3;
}


void func_677(int var_88_int, string var_89_string)
{
	int var_91_int;
	@GetVariable(var_89_string, var_91_int);
	var_91_int = var_88_int;
}


void func_682(bool var_39_bool, string var_40_string, string var_41_string)
{
	object var_43_object;
	@FindActor(var_43_object, var_40_string);
	if(var_43_object == null)
		var_39_bool = false;
	@Trigger(var_43_object, var_41_string);
	var_39_bool = true;
}
EMIT "Stack[-1] = 0";


void func_821(int var_67_int)
{
	var_67_int = 521048;
}


void func_694(string var_37_string, int var_38_int)
{
	string var_40_string = "idle";
	if(var_38_int != 0)
		var_40_string += var_38_int;
	var_40_string = var_37_string;
}


void func_823(int var_66_int)
{
	var_66_int = 521047;
}


void func_825(string var_68_string)
{
	var_68_string = "ui/NPC_Morlok.png";
}


void func_827(string var_69_string)
{
	var_69_string = "ui/NPC_Morlok_b.png";
}


void func_443(bool var_8_bool)
{
	var_8_bool = true;
}


void func_829(bool var_61_bool)
{
	var_61_bool = false;
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
	func_701(var_31_int);
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
				func_694(var_53_string, var_54_int);
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


void func_701(int var_31_int)
{
	int var_34_int; bool var_35_bool;
	var_34_int = 0;
	
	for(;;) {
		string var_37_string; int var_38_int;
		var_34_int = var_38_int;
		func_694(var_37_string, var_38_int);
		@HasAnimation(var_35_bool, "all", var_37_string);
		if(!var_35_bool) //@nz
			break;
		var_34_int += 1;
	}
	var_34_int = var_31_int;
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_79_object, object var_80_object)
{
	var_0_object = var_80_object;
	var_1_object = var_79_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_86_bool;
		func_738(var_1_object);
		if(var_86_bool != 0) {
			object var_94_object; object var_95_object;
			var_94_object = var_1_object;
			var_95_object = var_0_object;
			func_732();
			func_152(var_80_object, "Neutral");
			var_0_object->SetMessage(521220); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(521221, 29945, 22415); //@t
		} else {
					func_152(var_80_object, "Neutral");
					var_0_object->SetMessage(521222); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(521223, -1, 22417); //@t
		}
	}
	for(;;) {
		bool var_119_bool;
		func_829(var_119_bool);
		if(var_119_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_623(var_2_object);
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
void func_718(void)
{
	@SetVariable("b7q02", 2);
	func_750();
	bool var_39_bool;
	func_682(var_39_bool, "quest_b7_02", "place_grabitels");
}


// @pe
void func_732(void)
{
	@SetVariable("oob7Morlok1", 1);
}


void func_605(void)
{
	bool var_145_bool;
	@CameraSwitchToNormal(true);
	bool var_147_bool;
	func_829(var_147_bool);
	if(var_147_bool != 0) {
	} else {
		@HasAnimationTrack(var_145_bool, "head");
		if(var_145_bool == 0) goto Label_622;
		@UnlookAsync("head");
	}
Label_622:
	
}


// @pe
void func_738(bool var_86_bool)
{
	int var_88_int;
	func_677(var_88_int, "oob7Morlok1");
	if(var_88_int == 0) {
		var_86_bool = true;
		return 0;
	}
	var_86_bool = false;
}


void func_750(void)
{
	object var_17_object;
	@CreateDiaryEntry(var_17_object, 272, 2, 521226);
	bool var_21_bool; object var_22_object;
	var_17_object = var_22_object;
	func_776(var_21_bool, var_22_object, 270);
}
EMIT "Stack[-1] = 0";


void func_623(string var_121_string)
{
	bool var_125_bool; float var_126_float; float var_127_float;
	@lshHasAnimation(var_125_bool, var_121_string);
	if(var_125_bool != 0) {
		@lshGetAnimTimes(var_121_string, var_126_float, var_127_float);
		@lshPlayAnimation(var_126_float, var_127_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_121_string);
	}
	
}


void func_763(object var_30_object)
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


void func_639(string var_102_string, bool var_103_bool)
{
	bool var_109_bool; float var_110_float; float var_111_float;
	@lshHasAnimation(var_109_bool, var_102_string);
	if(var_109_bool != 0) {
		@lshGetAnimTimes(var_102_string, var_110_float, var_111_float);
		@lshPlayAnimation(var_110_float, var_111_float, var_103_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_102_string);
	}
	
}


