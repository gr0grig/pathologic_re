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
			func_566();
			if(var_8_bool == 7988) {
				object var_13_object; object var_14_object;
				var_13_object = var_1_object;
				var_14_object = var_0_object;
				func_599();
				object var_17_object; object var_18_object;
				var_17_object = var_1_object;
				var_18_object = var_0_object;
				func_605();
			}
			if(var_8_bool == 7990) {
				object var_69_object; object var_70_object;
				var_69_object = var_1_object;
				var_70_object = var_0_object;
				func_599();
				object var_71_object; object var_72_object;
				var_71_object = var_1_object;
				var_72_object = var_0_object;
				func_605();
			}
			if(var_8_bool == 7991) {
				object var_75_object; object var_76_object;
				var_75_object = var_1_object;
				var_76_object = var_0_object;
				func_599();
				object var_77_object; object var_78_object;
				var_77_object = var_1_object;
				var_78_object = var_0_object;
				func_605();
			}
			if(var_8_bool == 7992) {
				object var_81_object; object var_82_object;
				var_81_object = var_1_object;
				var_82_object = var_0_object;
				func_599();
			}
			if(var_7_bool == 7616) {
				bool var_85_bool;
				func_649(var_1_object);
				if(var_85_bool != 0) {
					func_131(var_8_bool, "Neutral");
					var_0_object->SetMessage(6910); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(6911, 7618, 7617); //@t
					bool var_112_bool;
					func_637(var_1_object);
					if(var_112_bool != 0)
						var_0_object->AddReply(7249, 7993, 7989); //@t
					return 0;
				}
			}
			if(var_7_bool == 7993) {
				func_131(var_8_bool, "Neutral");
				var_0_object->SetMessage(7253); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7254, 7995, 7994); //@t
				return 0;
			}
			if(var_7_bool == 7995) {
				func_131(var_8_bool, "Neutral");
				var_0_object->SetMessage(7255); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7256, 7997, 7996); //@t
				return 0;
			}
			if(var_7_bool == 7997) {
				func_131(var_8_bool, "Neutral");
				var_0_object->SetMessage(7257); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7258, 7999, 7998); //@t
				var_0_object->AddReply(7261, 7618, 8002); //@t
				return 0;
			}
			if(var_7_bool == 7999) {
				func_131(var_8_bool, "Neutral");
				var_0_object->SetMessage(7259); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7260, 7618, 8000); //@t
				return 0;
			}
			if(var_7_bool == 7618) {
				func_131(var_8_bool, "Neutral");
				var_0_object->SetMessage(6912); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7242, 7983, 7982); //@t
				bool var_159_bool;
				func_661(var_1_object);
				if(var_159_bool != 0)
					var_0_object->AddReply(7252, -1, 7992); //@t
				return 0;
			}
			if(var_7_bool == 7983) {
				func_131(var_8_bool, "Neutral");
				var_0_object->SetMessage(7243); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7244, 7985, 7984); //@t
				var_0_object->AddReply(7251, -1, 7991); //@t
				return 0;
			}
			if(var_7_bool == 7985) {
				func_131(var_8_bool, "Neutral");
				var_0_object->SetMessage(7245); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7246, 7987, 7986); //@t
				var_0_object->AddReply(7250, -1, 7990); //@t
				return 0;
			}
			if(var_7_bool == 7987) {
				func_131(var_8_bool, "Neutral");
				var_0_object->SetMessage(7247); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(7248, -1, 7988); //@t
				return 0;
			}
			var_3_string = true;
			bool var_195_bool;
			func_769(var_195_bool);
			if(var_195_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x94";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool)
	{
		var_1_object = false;
		func_438();
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
				func_486(var_14_bool);
				if(var_14_bool != 0)
					var_12_bool = true;
			}
			if(var_12_bool != 0) {
				object var_15_object;
				func_573(var_15_object);
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
			func_486(var_9_bool);
			if(var_9_bool != 0)
				var_7_bool = true;
		}
		if(var_7_bool != 0) {
			object var_10_object;
			func_573(var_10_object);
			@RemoveActor(var_10_object);
		}
	}

}


void func_0(object var_0_object, int var_14_int, object var_15_object)
{
	var_0_object = var_15_object;
	bool var_25_bool; object var_26_object;
	var_15_object = var_26_object;
	func_488(var_25_bool, var_26_object);
	if(!var_25_bool) { //@nz
		var_14_int = -2;
		return 8;
	}
	object var_21_object;
	@CreateDialog(var_21_object);
	int var_66_int;
	func_765(var_66_int);
	var_21_object->SetNPCName(var_66_int);
	string var_67_string;
	func_767(var_67_string);
	var_21_object->SetPhoto(var_67_string);
	int var_68_int;
	func_732(var_68_int);
	var_21_object->SetPlayerName(var_68_int);
	bool var_22_bool;
	@IsOverrideActive(var_22_bool);
	if(var_22_bool != 0) {
		var_14_int = -2;
		return 8;
	}
	@DoDialog(var_21_object);
	object var_77_object; object var_78_object;
	var_15_object = var_77_object;
	var_21_object = var_78_object;
	TaskCall(1);
	func_63(var_79_object, var_80_object, var_81_string, var_82_bool, var_77_object, var_78_object);
	TaskReturn();
	bool var_24_bool;
	var_21_object->IsDialogEnd(var_24_bool);
	
	for(;;) {
		var_128_bool = !var_24_bool; //@nz
		if(var_128_bool == 0) goto Label_52;
		@sync();
		var_21_object->IsDialogEnd(var_24_bool);
	}
	
Label_52:
	object var_129_object;
	var_15_object = var_129_object;
	func_544();
	@StopDialog(var_21_object);
	var_21_object->GetReturnValue(-1);
	int var_23_int = var_14_int;
}
EMIT "Stack[-4] = 0";


void func_769(bool var_93_bool)
{
	var_93_bool = false;
}


// @pe
void func_131(object var_2_object, string var_92_string)
{
	bool var_93_bool;
	func_769(var_93_bool);
	if(!var_93_bool) //@nz
		return 0;
	if(var_92_string == var_2_object)
		return 0;
	string var_96_string;
	func_548(var_96_string);
	var_2_object = var_96_string;
}


void func_573(object var_10_object)
{
	object var_12_object;
	@self(var_12_object);
	var_12_object = var_10_object;
}
EMIT "Stack[-1] = 0";


void func_579(cvector var_50_cvector, cvector var_51_cvector)
{
	float var_54_float = sqrt(var_51_cvector | var_51_cvector);
	if(var_54_float < 0.000001)
		var_50_cvector = [0.0, 0.0, 0.0];
	var_50_cvector = var_51_cvector / var_54_float;
}


// @pe
void func_649(bool var_84_bool)
{
	int var_86_int;
	func_589(var_86_int, "ood2Birdmask1");
	if(var_86_int == 0) {
		var_84_bool = true;
		return 0;
	}
	var_84_bool = false;
}


void func_765(int var_66_int)
{
	var_66_int = 4029;
}


void func_715(object var_23_object)
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


void func_589(int var_86_int, string var_87_string)
{
	int var_89_int;
	@GetVariable(var_87_string, var_89_int);
	var_89_int = var_86_int;
}


void func_594(float var_34_float)
{
	float var_36_float;
	@GetGameTime(var_36_float);
	var_36_float = var_34_float;
}


void func_767(string var_67_string)
{
	var_67_string = "ui/NPC_Black.png";
}


// @pe
void func_661(bool var_159_bool)
{
	int var_161_int;
	func_589(var_161_int, "d2q03");
	if(var_161_int == 3)
		var_159_bool = true;
	var_159_bool = false;
}


// @pe
void func_599(void)
{
	@SetVariable("ood2Birdmask1", 1);
}


void func_732(int var_68_int)
{
	int var_70_int;
	@GetVariable("player", var_70_int);
	if(var_70_int == 0) {
		var_68_int = 200001;
		return 2;
	EMIT "GOTO 0x2eb";
	}
	if(var_70_int == 1) {
		var_68_int = 200002;
		return 2;
	}
	var_68_int = 200003;
}


void func_605(void)
{
	@SetVariable("d2q03", 3);
	object var_23_object;
	func_715(var_23_object);
	object var_20_object;
	var_23_object = var_20_object;
	float var_34_float;
	func_594(var_34_float);
	var_20_object->AddMark("d2q03BirdmaskGotoLara", "pt_map_lara", 0, 15293, var_34_float);
	float var_41_float;
	func_594(var_41_float);
	var_20_object->AddMark("d2q03BirdmaskGotoLaraSelf", "", 0, 15292, var_41_float);
	func_749();
}
EMIT "Stack[-1] = 0";


// @pe
void func_544(void)
{
	@CameraSwitchToNormal();
}


void func_673(object var_57_object)
{
	object var_59_object;
	@GetDiaryRoot(var_59_object);
	if(!var_59_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_57_object = false;
	}
	var_59_object = var_57_object;
}
EMIT "Stack[-1] = 0";


void func_548(string var_96_string)
{
	@Trace("playing " + var_96_string);
	float var_99_float;
	float var_100_float;
	@lshGetAnimTimes(var_96_string, var_99_float, var_100_float);
	@lshPlayAnimation(var_99_float, var_100_float);
	@Trace("start: " + var_99_float);
	@Trace("end: " + var_100_float);
}


void func_486(bool var_9_bool)
{
	var_9_bool = true;
}


void func_488(bool var_25_bool, object var_26_object)
{
	cvector var_36_cvector;
	var_26_object->GetPosition(var_36_cvector);
	float var_35_float;
	var_26_object->GetEyesHeight(var_35_float);
	var_43_float = GetByIndex(var_36_cvector, 1);
	SetByIndex(var_36_cvector, 1) = (var_43_float + var_35_float);
	cvector var_37_cvector;
	@GetPosition(var_37_cvector);
	@GetEyesHeight(var_35_float);
	var_44_float = GetByIndex(var_37_cvector, 1);
	SetByIndex(var_37_cvector, 1) = (var_44_float + var_35_float);
	cvector var_38_cvector = var_36_cvector - var_37_cvector;
	var_45_float = GetByIndex(var_38_cvector, 1);
	SetByIndex(var_38_cvector, 1) = (float)0;
	var_47_float = sqrt(var_38_cvector | var_38_cvector);
	var_38_cvector /= var_47_float;
	cvector var_39_cvector = -var_38_cvector;
	cvector var_50_cvector;
	func_579(var_50_cvector, (var_39_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_40_cvector = ((var_38_cvector * 70) + (var_50_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_42_bool;
	@IsOverrideActive(var_42_bool);
	if(var_42_bool != 0)
		var_25_bool = false;
	@StopWorld();
	@CameraTransit((var_37_cvector + var_40_cvector), var_39_cvector);
	var_63_float = GetByIndex(var_40_cvector, 0);
	var_64_float = GetByIndex(var_40_cvector, 2);
	@Rotate(var_63_float, var_64_float);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_25_bool = true;
}


void func_749(void)
{
	@Trace("Adding diary entry");
	object var_43_object;
	@CreateDiaryEntry(var_43_object, 133, 2, 15270);
	bool var_48_bool; object var_49_object;
	var_43_object = var_49_object;
	func_686(var_48_bool, var_49_object, 12);
}
EMIT "Stack[-1] = 0";


void func_686(bool var_48_bool, object var_49_object, int var_50_int)
{
	object var_57_object;
	func_673(var_57_object);
	object var_54_object;
	var_57_object = var_54_object;
	object var_55_object;
	var_54_object->Find(var_50_int, var_55_object);
	if(!var_55_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_50_int);
		var_48_bool = false;
	}
	var_55_object->AddChild(var_49_object);
	@SetVariable("player_diary", 1);
	int var_56_int;
	var_49_object->GetCategory(var_56_int);
	@SetDiarySection(var_56_int);
	var_48_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_566(void)
{
	bool var_10_bool;
	func_769(var_10_bool);
	if(var_10_bool != 0)
		@lshStopSpeech();
}


void func_438(void)
{
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_637(bool var_111_bool)
{
	int var_113_int;
	func_589(var_113_int, "KnowTheater");
	if(var_113_int == 1)
		var_111_bool = true;
	var_111_bool = false;
}


// @pe
void func_63(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_77_object, object var_78_object)
{
	var_0_object = var_78_object;
	var_1_object = var_77_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_84_bool;
		func_649(var_1_object);
		if(var_84_bool != 0) {
			func_131(var_78_object, "Neutral");
			var_0_object->SetMessage(6910); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(6911, 7618, 7617); //@t
			bool var_111_bool;
			func_637(var_1_object);
			if(var_111_bool != 0)
				var_0_object->AddReply(7249, 7993, 7989); //@t
		} else {
				return 0;
		}
	}
	bool var_120_bool;
	func_769(var_120_bool);
	if(var_120_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_548(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_130;
			}
			@PlayAnimation("all", "idle");
		}

	}
	Label_130:
		return 0;

	}
	
}
EMIT "GOTO 0x43";


