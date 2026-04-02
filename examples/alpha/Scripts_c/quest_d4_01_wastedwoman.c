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
			func_531();
			if(var_7_bool == 10714) {
				object var_12_object; object var_13_object;
				var_12_object = var_1_object;
				var_13_object = var_0_object;
				func_589();
				object var_30_object = var_1_object;
				func_605(var_0_object);
			}
			if(var_7_bool == 10717) {
				object var_58_object; object var_59_object;
				var_58_object = var_1_object;
				var_59_object = var_0_object;
				func_589();
				object var_60_object = var_1_object;
				func_605(var_0_object);
			}
			if(var_7_bool == 10718) {
				object var_64_object; object var_65_object;
				var_64_object = var_1_object;
				var_65_object = var_0_object;
				func_589();
				object var_66_object = var_1_object;
				func_605(var_0_object);
			}
			if(var_6_int == 10709) {
				func_121(var_7_bool, "Neutral");
				var_0_object->SetMessage(9726); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9727, 10711, 10710); //@t
				var_0_object->AddReply(9742, 10728, 10727); //@t
				return 0;
			}
			if(var_6_int == 10728) {
				func_121(var_7_bool, "Neutral");
				var_0_object->SetMessage(9743); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9744, 10711, 10729); //@t
				return 0;
			}
			if(var_6_int == 10711) {
				func_121(var_7_bool, "Neutral");
				var_0_object->SetMessage(9728); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9729, 10713, 10712); //@t
				var_0_object->AddReply(9736, 10720, 10719); //@t
				return 0;
			}
			if(var_6_int == 10720) {
				func_121(var_7_bool, "Neutral");
				var_0_object->SetMessage(9737); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9738, 10722, 10721); //@t
				var_0_object->AddReply(9741, 10713, 10725); //@t
				return 0;
			}
			if(var_6_int == 10722) {
				func_121(var_7_bool, "Neutral");
				var_0_object->SetMessage(9739); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9740, 10713, 10723); //@t
				return 0;
			}
			if(var_6_int == 10713) {
				func_121(var_7_bool, "Neutral");
				var_0_object->SetMessage(9730); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9731, -1, 10714); //@t
				var_0_object->AddReply(9732, 10716, 10715); //@t
				return 0;
			}
			if(var_6_int == 10716) {
				func_121(var_7_bool, "Neutral");
				var_0_object->SetMessage(9733); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9734, -1, 10717); //@t
				var_0_object->AddReply(9735, -1, 10718); //@t
				return 0;
			}
			var_3_string = true;
			bool var_146_bool;
			func_692(var_146_bool);
			if(var_146_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x8a";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool)
	{
		var_0_object = false;
	
		for(;;) {
			@Sleep(3);
			func_374();
		}
	}
	EMIT "Return(); Pop(0)";

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object)
	{
		if(!actor) { //@nz
			actor = true;
			func_443();
			int var_8_int; object var_9_object;
			var_6_object = var_9_object;
			TaskCall(0);
			func_0(var_10_object, var_8_int, var_9_object);
			TaskReturn();
			bool var_110_bool;
			func_548(var_110_bool, "quest_d4_01", "wastedwoman_done");
		}
	}

}


void func_0(object var_0_object, int var_8_int, object var_9_object)
{
	var_0_object = var_9_object;
	bool var_19_bool; object var_20_object;
	var_9_object = var_20_object;
	func_453(var_19_bool, var_20_object);
	if(!var_19_bool) { //@nz
		var_8_int = -2;
		return 8;
	}
	object var_15_object;
	@CreateDialog(var_15_object);
	int var_60_int;
	func_688(var_60_int);
	var_15_object->SetNPCName(var_60_int);
	string var_61_string;
	func_690(var_61_string);
	var_15_object->SetPhoto(var_61_string);
	int var_62_int;
	func_671(var_62_int);
	var_15_object->SetPlayerName(var_62_int);
	bool var_16_bool;
	@IsOverrideActive(var_16_bool);
	if(var_16_bool != 0) {
		var_8_int = -2;
		return 8;
	}
	@DoDialog(var_15_object);
	object var_71_object; object var_72_object;
	var_9_object = var_71_object;
	var_15_object = var_72_object;
	TaskCall(1);
	func_63(var_73_object, var_74_object, var_75_string, var_76_bool, var_71_object, var_72_object);
	TaskReturn();
	bool var_18_bool;
	var_15_object->IsDialogEnd(var_18_bool);
	
	for(;;) {
		var_108_bool = !var_18_bool; //@nz
		if(var_108_bool == 0) goto Label_52;
		@sync();
		var_15_object->IsDialogEnd(var_18_bool);
	}
	
Label_52:
	object var_109_object;
	var_9_object = var_109_object;
	func_509();
	@StopDialog(var_15_object);
	var_15_object->GetReturnValue(-1);
	int var_17_int = var_8_int;
}
EMIT "Stack[-4] = 0";


void func_513(string var_82_string)
{
	@Trace("playing " + var_82_string);
	float var_85_float;
	float var_86_float;
	@lshGetAnimTimes(var_82_string, var_85_float, var_86_float);
	@lshPlayAnimation(var_85_float, var_86_float);
	@Trace("start: " + var_85_float);
	@Trace("end: " + var_86_float);
}


void func_448(bool var_21_bool)
{
	bool var_23_bool;
	@IsLoaded(var_23_bool);
	var_23_bool = var_21_bool;
}


void func_453(bool var_19_bool, object var_20_object)
{
	cvector var_30_cvector;
	var_20_object->GetPosition(var_30_cvector);
	float var_29_float;
	var_20_object->GetEyesHeight(var_29_float);
	var_37_float = GetByIndex(var_30_cvector, 1);
	SetByIndex(var_30_cvector, 1) = (var_37_float + var_29_float);
	cvector var_31_cvector;
	@GetPosition(var_31_cvector);
	@GetEyesHeight(var_29_float);
	var_38_float = GetByIndex(var_31_cvector, 1);
	SetByIndex(var_31_cvector, 1) = (var_38_float + var_29_float);
	cvector var_32_cvector = var_30_cvector - var_31_cvector;
	var_39_float = GetByIndex(var_32_cvector, 1);
	SetByIndex(var_32_cvector, 1) = (float)0;
	var_41_float = sqrt(var_32_cvector | var_32_cvector);
	var_32_cvector /= var_41_float;
	cvector var_33_cvector = -var_32_cvector;
	cvector var_44_cvector;
	func_538(var_44_cvector, (var_33_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_34_cvector = ((var_32_cvector * 70) + (var_44_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_36_bool;
	@IsOverrideActive(var_36_bool);
	if(var_36_bool != 0)
		var_19_bool = false;
	@StopWorld();
	@CameraTransit((var_31_cvector + var_34_cvector), var_33_cvector);
	var_57_float = GetByIndex(var_34_cvector, 0);
	var_58_float = GetByIndex(var_34_cvector, 2);
	@Rotate(var_57_float, var_58_float);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_19_bool = true;
}


void func_589(void)
{
	object var_16_object;
	func_621(var_16_object);
	object var_15_object;
	var_16_object = var_15_object;
	float var_27_float;
	func_560(var_27_float);
	var_15_object->AddMark("d4q01WastedMale", "pt_d4q01_key2", 1, 11522, var_27_float);
}
EMIT "Stack[-1] = 0";


void func_531(void)
{
	bool var_9_bool;
	func_692(var_9_bool);
	if(var_9_bool != 0)
		@lshStopSpeech();
}


void func_538(cvector var_44_cvector, cvector var_45_cvector)
{
	float var_48_float = sqrt(var_45_cvector | var_45_cvector);
	if(var_48_float < 0.000001)
		var_44_cvector = [0.0, 0.0, 0.0];
	var_44_cvector = var_45_cvector / var_48_float;
}


// @pe
void func_605(object var_31_object)
{
	object var_35_object;
	func_621(var_35_object);
	object var_32_object;
	var_35_object = var_32_object;
	func_638(var_32_object, "pt_d4q01_wastedmale", (float)2);
	object var_55_object;
	func_621(var_55_object);
	var_31_object->ShowMap(var_55_object);
}


void func_671(int var_62_int)
{
	int var_64_int;
	@GetVariable("player", var_64_int);
	if(var_64_int == 0) {
		var_62_int = 200001;
		return 2;
	EMIT "GOTO 0x2ae";
	}
	if(var_64_int == 1) {
		var_62_int = 200002;
		return 2;
	}
	var_62_int = 200003;
}


void func_548(bool var_110_bool, string var_111_string, string var_112_string)
{
	object var_114_object;
	@FindActor(var_114_object, var_111_string);
	if(var_114_object == null)
		var_110_bool = false;
	@Trigger(var_114_object, var_112_string);
	var_110_bool = true;
}
EMIT "Stack[-1] = 0";


void func_621(object var_16_object)
{
	object var_19_object; object var_20_object;
	@GetMainOutdoorScene(var_19_object);
	if(var_19_object == null) {
		@Trace("Can't find main outdoor scene");
		var_20_object = null;
		var_20_object = var_16_object;
	}
	var_19_object->GetMap(var_20_object);
	var_20_object = var_16_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_688(int var_60_int)
{
	var_60_int = 3340;
}


void func_560(float var_27_float)
{
	float var_29_float;
	@GetGameTime(var_29_float);
	var_29_float = var_27_float;
}


void func_690(string var_61_string)
{
	var_61_string = "ui/NPC_None.png";
}


void func_692(bool var_79_bool)
{
	var_79_bool = false;
}


void func_565(string var_31_string, int var_32_int)
{
	string var_34_string = "idle";
	if(var_32_int != 0)
		var_34_string += var_32_int;
	var_34_string = var_31_string;
}


void func_374(void)
{
	int var_16_int; int var_17_int; bool var_18_bool; float var_19_float; bool var_20_bool;
	@WaitForAnimEnd();
	bool var_21_bool;
	func_448(var_21_bool);
	if(!var_21_bool) //@nz
		return 14;
	int var_25_int;
	func_572(var_25_int);
	int var_14_int;
	var_25_int = var_14_int;
	int var_15_int = 0;
	
	for(;;) {
		bool var_38_bool = false;
		if(var_15_int < 5) {
			bool var_41_bool;
			func_448(var_41_bool);
			if(var_41_bool != 0)
				var_38_bool = true;
		}
		if(var_38_bool != 0) {
			@irand(var_16_int, 3);
			if(var_16_int == 0) {
				if(var_14_int == 0) goto Label_421;
				@irand(var_17_int, var_14_int);
				string var_47_string; int var_48_int;
				var_17_int = var_48_int;
				func_565(var_47_string, var_48_int);
				@PlayAnimation("all", var_47_string);
				@WaitForAnimEnd(var_18_bool);
				if(!var_18_bool) { //@nz
				} else {
			} else {
			if(var_16_int == 1) {
				@rand(var_19_float, 4);
				@Sleep((var_19_float + 1), var_20_bool);
				if(!var_20_bool) { //@nz
					goto Label_442;
				}
			} else if(var_15_int != 0) {
				goto Label_442;
			}
			}
				var_15_int += 1;
			}
		}
	Label_442:
		return 14;

	}
	
}


// @pe
void func_121(object var_2_object, string var_78_string)
{
	bool var_79_bool;
	func_692(var_79_bool);
	if(!var_79_bool) //@nz
		return 0;
	if(var_78_string == var_2_object)
		return 0;
	string var_82_string;
	func_513(var_82_string);
	var_2_object = var_82_string;
}


void func_443(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_572(int var_25_int)
{
	int var_28_int; bool var_29_bool;
	var_28_int = 0;
	
	for(;;) {
		string var_31_string; int var_32_int;
		var_28_int = var_32_int;
		func_565(var_31_string, var_32_int);
		@HasAnimation(var_29_bool, "all", var_31_string);
		if(!var_29_bool) //@nz
			break;
		var_28_int += 1;
	}
	var_28_int = var_25_int;
}


// @pe
void func_509(void)
{
	@CameraSwitchToNormal();
}


void func_638(object var_32_object, string var_33_string, float var_34_float)
{
	object var_42_object;
	@GetMainOutdoorScene(var_42_object);
	if(var_42_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_40_cvector;
	cvector var_41_cvector;
	bool var_43_bool;
	var_42_object->GetLocator(var_33_string, var_43_bool, var_40_cvector, var_41_cvector);
	if(!var_43_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_33_string) + " doesnt exist");
	var_42_object->GetMap(var_32_object);
	if(var_32_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_53_float = GetByIndex(var_40_cvector, 0);
	var_54_float = GetByIndex(var_40_cvector, 2);
	var_32_object->SetMapParams(var_53_float, var_54_float, var_34_float);
}
EMIT "Stack[-2] = 0";


// @pe
void func_63(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_71_object, object var_72_object)
{
	var_0_object = var_72_object;
	var_1_object = var_71_object;
	var_3_string = false;
	if(1 != 0) {
		func_121(var_72_object, "Neutral");
		var_0_object->SetMessage(9726); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(9727, 10711, 10710); //@t
		var_0_object->AddReply(9742, 10728, 10727); //@t
		goto Label_91;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x43";
	}
Label_91:
	bool var_100_bool;
	func_692(var_100_bool);
	if(var_100_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_513(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_120;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_120:
		return 0;

	}
	
}


