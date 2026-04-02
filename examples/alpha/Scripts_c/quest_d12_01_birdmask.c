// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int)
	{
		if(1 != 0) {
			func_646();
			if(var_6_int == 16592) {
				object var_11_object; object var_12_object;
				var_11_object = var_1_object;
				var_12_object = var_0_object;
				func_699();
				object var_23_object; object var_24_object;
				var_23_object = var_1_object;
				var_24_object = var_0_object;
				func_706();
			}
			if(var_5_int == 16093) {
				bool var_33_bool;
				func_723(var_33_bool, var_1_object);
				if(var_33_bool != 0) {
					func_171(var_6_int, "Neutral");
					var_0_object->SetMessage(14847); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(14848, -1, 16094); //@t
					return 0;
				}
				func_171(var_6_int, "Neutral");
				var_0_object->SetMessage(14849); //@t
				var_0_object->ClearReplies(); //@t
				bool var_65_bool;
				func_713(var_65_bool, var_1_object);
				if(var_65_bool != 0)
					var_0_object->AddReply(14850, 16097, 16096); //@t
				bool var_72_bool;
				func_713(var_72_bool, var_1_object);
				if(var_72_bool != 0)
					var_0_object->AddReply(14852, 16099, 16098); //@t
				var_0_object->AddReply(15494, 16591, 16590); //@t
				return 0;
			EMIT "PushEmpty(string)";
			EMIT "Stack[-1] = \"Neutral\" // @poff=61";
			EMIT "Call 0xab";
			EMIT "Pop(1)";
			EMIT "Push((int) 14855)";
			EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=77";
			EMIT "Pop(1)";
			EMIT "@@@ ClearReplies(); Obj=0 // @poff=88";
			EMIT "Pop(0)";
			EMIT "Push((int) 14856)";
			EMIT "Push((int) 16103)";
			EMIT "Push((int) 16102)";
			EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
			EMIT "Pop(3)";
			EMIT "Return(); Pop(0)";
			}
			if(var_5_int == 16103) {
				func_171(var_6_int, "Neutral");
				var_0_object->SetMessage(14857); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14858, 16105, 16104); //@t
				var_0_object->AddReply(14880, 16127, 16126); //@t
				return 0;
			}
			if(var_5_int == 16127) {
				func_171(var_6_int, "Neutral");
				var_0_object->SetMessage(14881); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14882, -1, 16128); //@t
				return 0;
			}
			if(var_5_int == 16105) {
				func_171(var_6_int, "Neutral");
				var_0_object->SetMessage(14859); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14860, 16107, 16106); //@t
				var_0_object->AddReply(14879, -1, 16125); //@t
				return 0;
			}
			if(var_5_int == 16107) {
				func_171(var_6_int, "Neutral");
				var_0_object->SetMessage(14861); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14862, 16109, 16108); //@t
				return 0;
			}
			if(var_5_int == 16109) {
				func_171(var_6_int, "Neutral");
				var_0_object->SetMessage(14863); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14864, 16111, 16110); //@t
				var_0_object->AddReply(14870, 16117, 16116); //@t
				return 0;
			}
			if(var_5_int == 16117) {
				func_171(var_6_int, "Neutral");
				var_0_object->SetMessage(14871); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14872, -1, 16118); //@t
				var_0_object->AddReply(14873, 16120, 16119); //@t
				return 0;
			}
			if(var_5_int == 16120) {
				func_171(var_6_int, "Neutral");
				var_0_object->SetMessage(14874); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14875, -1, 16121); //@t
				var_0_object->AddReply(14876, 16123, 16122); //@t
				return 0;
			}
			if(var_5_int == 16123) {
				func_171(var_6_int, "Neutral");
				var_0_object->SetMessage(14877); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14878, -1, 16124); //@t
				return 0;
			}
			if(var_5_int == 16111) {
				func_171(var_6_int, "Neutral");
				var_0_object->SetMessage(14865); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14866, 16113, 16112); //@t
				var_0_object->AddReply(14869, -1, 16115); //@t
				return 0;
			}
			if(var_5_int == 16113) {
				func_171(var_6_int, "Neutral");
				var_0_object->SetMessage(14867); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14868, -1, 16114); //@t
				return 0;
			}
			if(var_5_int == 16591) {
				func_171(var_6_int, "Neutral");
				var_0_object->SetMessage(15495); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(15496, -1, 16592); //@t
				return 0;
			}
			if(var_5_int == 16099) {
				func_171(var_6_int, "Neutral");
				var_0_object->SetMessage(14853); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14854, -1, 16100); //@t
				return 0;
			}
			if(var_5_int == 16097) {
				func_171(var_6_int, "Neutral");
				var_0_object->SetMessage(14851); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(15337, -1, 16560); //@t
				return 0;
			}
			var_3_string = true;
			bool var_189_bool;
			func_768(var_189_bool);
			if(var_189_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xbc";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool)
	{
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object)
	{
		object var_7_object;
		var_5_object = var_7_object;
		TaskCall(0);
		int var_6_int;
		func_0(var_8_object, var_6_int, var_7_object);
		TaskReturn();
	}

}


void func_768(bool var_88_bool)
{
	var_88_bool = false;
}


void func_0(object var_0_object, int var_6_int, object var_7_object)
{
	var_0_object = var_7_object;
	bool var_17_bool; object var_18_object;
	var_7_object = var_18_object;
	func_568(var_17_bool, var_18_object);
	if(!var_17_bool) { //@nz
		var_6_int = -2;
		return 8;
	}
	object var_13_object;
	@CreateDialog(var_13_object);
	int var_58_int;
	func_764(var_58_int);
	var_13_object->SetNPCName(var_58_int);
	string var_59_string;
	func_766(var_59_string);
	var_13_object->SetPhoto(var_59_string);
	int var_60_int;
	func_747(var_60_int);
	var_13_object->SetPlayerName(var_60_int);
	bool var_14_bool;
	@IsOverrideActive(var_14_bool);
	if(var_14_bool != 0) {
		var_6_int = -2;
		return 8;
	}
	@DoDialog(var_13_object);
	object var_69_object; object var_70_object;
	var_7_object = var_69_object;
	var_13_object = var_70_object;
	TaskCall(1);
	func_63(var_71_object, var_72_object, var_73_string, var_74_bool, var_69_object, var_70_object);
	TaskReturn();
	bool var_16_bool;
	var_13_object->IsDialogEnd(var_16_bool);
	
	for(;;) {
		var_131_bool = !var_16_bool; //@nz
		if(var_131_bool == 0) goto Label_52;
		@sync();
		var_13_object->IsDialogEnd(var_16_bool);
	}
	
Label_52:
	object var_132_object;
	var_7_object = var_132_object;
	func_624();
	@StopDialog(var_13_object);
	var_13_object->GetReturnValue(-1);
	int var_15_int = var_6_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_706(void)
{
	bool var_25_bool;
	func_679(var_25_bool, "quest_d12_01", "init_sobor");
}


void func_646(void)
{
	bool var_8_bool;
	func_768(var_8_bool);
	if(var_8_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_713(bool var_116_bool, object var_117_object)
{
	object var_119_object;
	var_117_object = var_119_object;
	func_733(var_119_object);
	bool var_118_bool;
	if(var_118_bool != 0) {
		var_116_bool = true;
		return 0;
	}
	var_116_bool = false;
}


void func_653(cvector var_42_cvector, cvector var_43_cvector)
{
	float var_46_float = sqrt(var_43_cvector | var_43_cvector);
	if(var_46_float < 0.000001)
		var_42_cvector = [0.0, 0.0, 0.0];
	var_42_cvector = var_43_cvector / var_46_float;
}


// @pe
void func_723(bool var_76_bool, object var_77_object)
{
	object var_79_object;
	var_77_object = var_79_object;
	func_736(var_79_object);
	bool var_78_bool;
	if(var_78_bool != 0) {
		var_76_bool = true;
		return 0;
	}
	var_76_bool = false;
}


void func_663(string var_13_string, bool var_14_bool)
{
	object var_16_object;
	@FindActor(var_16_object, var_13_string);
	if(!var_16_object) //@nz
		@Trace(("Door " + var_13_string) + " not found");
	var_16_object->SetProperty("locked", var_14_bool);
}
EMIT "Stack[-1] = 0";


// @pe
void func_733(bool var_118_bool)
{
	var_118_bool = false;
}


// @pe
void func_736(bool var_78_bool)
{
	int var_80_int;
	func_691(var_80_int);
	if(var_80_int < 19)
		var_78_bool = true;
	var_78_bool = false;
}


void func_679(bool var_25_bool, string var_26_string, string var_27_string)
{
	object var_29_object;
	@FindActor(var_29_object, var_26_string);
	if(var_29_object == null)
		var_25_bool = false;
	@Trigger(var_29_object, var_27_string);
	var_25_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_171(object var_2_object, string var_87_string)
{
	bool var_88_bool;
	func_768(var_88_bool);
	if(!var_88_bool) //@nz
		return 0;
	if(var_87_string == var_2_object)
		return 0;
	string var_91_string;
	func_628(var_91_string);
	var_2_object = var_91_string;
}


void func_747(int var_60_int)
{
	int var_62_int;
	@GetVariable("player", var_62_int);
	if(var_62_int == 0) {
		var_60_int = 200001;
		return 2;
	EMIT "GOTO 0x2fa";
	}
	if(var_62_int == 1) {
		var_60_int = 200002;
		return 2;
	}
	var_60_int = 200003;
}


// @pe
void func_624(void)
{
	@CameraSwitchToNormal();
}


void func_691(int var_80_int)
{
	float var_82_float;
	@GetGameTime(var_82_float);
	int var_83_int;
	var_82_float = var_83_int;
	var_80_int = var_83_int % 24;
}


void func_628(string var_91_string)
{
	@Trace("playing " + var_91_string);
	float var_94_float;
	float var_95_float;
	@lshGetAnimTimes(var_91_string, var_94_float, var_95_float);
	@lshPlayAnimation(var_94_float, var_95_float);
	@Trace("start: " + var_94_float);
	@Trace("end: " + var_95_float);
}


void func_568(bool var_17_bool, object var_18_object)
{
	cvector var_28_cvector;
	var_18_object->GetPosition(var_28_cvector);
	float var_27_float;
	var_18_object->GetEyesHeight(var_27_float);
	var_35_float = GetByIndex(var_28_cvector, 1);
	SetByIndex(var_28_cvector, 1) = (var_35_float + var_27_float);
	cvector var_29_cvector;
	@GetPosition(var_29_cvector);
	@GetEyesHeight(var_27_float);
	var_36_float = GetByIndex(var_29_cvector, 1);
	SetByIndex(var_29_cvector, 1) = (var_36_float + var_27_float);
	cvector var_30_cvector = var_28_cvector - var_29_cvector;
	var_37_float = GetByIndex(var_30_cvector, 1);
	SetByIndex(var_30_cvector, 1) = (float)0;
	var_39_float = sqrt(var_30_cvector | var_30_cvector);
	var_30_cvector /= var_39_float;
	cvector var_31_cvector = -var_30_cvector;
	cvector var_42_cvector;
	func_653(var_42_cvector, (var_31_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_32_cvector = ((var_30_cvector * 70) + (var_42_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_34_bool;
	@IsOverrideActive(var_34_bool);
	if(var_34_bool != 0)
		var_17_bool = false;
	@StopWorld();
	@CameraTransit((var_29_cvector + var_32_cvector), var_31_cvector);
	var_55_float = GetByIndex(var_32_cvector, 0);
	var_56_float = GetByIndex(var_32_cvector, 2);
	@Rotate(var_55_float, var_56_float);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_17_bool = true;
}


// @pe
void func_699(void)
{
	func_663("sobor@door1", false);
}


void func_764(int var_58_int)
{
	var_58_int = 4029;
}


void func_766(string var_59_string)
{
	var_59_string = "ui/NPC_Black.png";
}


// @pe
void func_63(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_69_object, object var_70_object)
{
	var_0_object = var_70_object;
	var_1_object = var_69_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_76_bool;
		func_723(var_76_bool, var_1_object);
		if(var_76_bool != 0) {
			func_171(var_70_object, "Neutral");
			var_0_object->SetMessage(14847); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(14848, -1, 16094); //@t
		} else {
					func_171(var_70_object, "Neutral");
					var_0_object->SetMessage(14849); //@t
					var_0_object->ClearReplies(); //@t
					bool var_116_bool;
					func_713(var_116_bool, var_1_object);
					if(var_116_bool != 0)
						var_0_object->AddReply(14850, 16097, 16096); //@t
					bool var_123_bool;
					func_713(var_123_bool, var_1_object);
					if(var_123_bool != 0)
						var_0_object->AddReply(14852, 16099, 16098); //@t
					var_0_object->AddReply(15494, 16591, 16590); //@t
		}
	}
	for(;;) {
		bool var_106_bool;
		func_768(var_106_bool);
		if(var_106_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_628(var_2_object);
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
EMIT "PushEmpty(string)";
EMIT "Stack[-1] = \"Neutral\" // @poff=61";
EMIT "Call 0xab";
EMIT "Pop(1)";
EMIT "Push((int) 14855)";
EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=77";
EMIT "Pop(1)";
EMIT "@@@ ClearReplies(); Obj=0 // @poff=88";
EMIT "Pop(0)";
EMIT "Push((int) 14856)";
EMIT "Push((int) 16103)";
EMIT "Push((int) 16102)";
EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
EMIT "Pop(3)";
EMIT "GOTO 0x8d";
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x43";


