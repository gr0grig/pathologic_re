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
			func_724();
			if(var_13_bool == 31717) {
				object var_18_object; object var_19_object;
				var_18_object = var_1_object;
				var_19_object = var_0_object;
				func_792();
			}
			if(var_12_bool == 31716) {
				bool var_45_bool;
				func_797(var_1_object);
				if(var_45_bool != 0) {
					object var_53_object; object var_54_object;
					var_53_object = var_1_object;
					var_54_object = var_0_object;
					func_786();
					func_157(var_13_bool, "Neutral");
					var_0_object->SetMessage(530329); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(531028, 32359, 32357); //@t
					var_0_object->AddReply(531029, 32365, 32358); //@t
					return 0;
				}
				func_157(var_13_bool, "Neutral");
				var_0_object->SetMessage(530331); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531033, -1, 32362); //@t
				return 0;
			}
			if(var_12_bool == 32359) {
				func_157(var_13_bool, "Neutral");
				var_0_object->SetMessage(531030); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531031, 32361, 32360); //@t
				var_0_object->AddReply(530332, 32363, 31719); //@t
				return 0;
			}
			if(var_12_bool == 32363) {
				func_157(var_13_bool, "Neutral");
				var_0_object->SetMessage(531034); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531035, 32365, 32364); //@t
				return 0;
			}
			if(var_12_bool == 32365) {
				func_157(var_13_bool, "Neutral");
				var_0_object->SetMessage(531036); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531037, 32361, 32367); //@t
				return 0;
			}
			if(var_12_bool == 32361) {
				func_157(var_13_bool, "Neutral");
				var_0_object->SetMessage(531032); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530330, -1, 31717); //@t
				return 0;
			}
			var_3_string = true;
			bool var_117_bool;
			func_784(var_117_bool);
			if(var_117_bool != 0)
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
		func_348(var_11_bool, (float)300, (float)100);
	}

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool, object var_12_object)
	{
		func_482(var_11_bool, var_12_object);
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
			func_366(var_12_string);
	}

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool)
	{
		if(var_6_int != 0)
			func_482(var_10_bool, var_11_bool);
		bool var_16_bool = false;
		if(var_5_int != 0) {
			bool var_18_bool;
			func_415(var_18_bool);
			if(var_18_bool != 0)
				var_16_bool = true;
		}
		if(var_16_bool != 0) {
			object var_19_object;
			func_731(var_19_object);
			@RemoveActor(var_19_object);
		}
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool, int var_12_int)
	{
		if(var_12_int == 10) {
			bool var_15_bool;
			func_444(var_10_bool, var_11_bool, var_12_int, var_15_bool);
			if(var_15_bool != 0) {
				if(!var_2_object) { //@nz
					func_713(var_4_bool);
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
	func_595(var_27_bool, var_28_object, 70.0);
	if(!var_27_bool) { //@nz
		var_16_int = -2;
		return 8;
	}
	object var_23_object;
	@CreateDialog(var_23_object);
	int var_75_int;
	func_778(var_75_int);
	var_23_object->SetNPCName(var_75_int);
	int var_76_int;
	func_776(var_76_int);
	var_23_object->SetNPCDescription(var_76_int);
	string var_77_string;
	func_780(var_77_string);
	var_23_object->SetPhoto(var_77_string);
	string var_78_string;
	func_782(var_78_string);
	var_23_object->SetPhoto2(var_78_string);
	int var_79_int;
	func_863(var_79_int);
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
		var_154_bool = !var_26_bool; //@nz
		if(var_154_bool == 0) goto Label_63;
		@sync();
		var_23_object->IsDialogEnd(var_26_bool);
	}
	
Label_63:
	object var_155_object;
	var_17_object = var_155_object;
	func_664();
	@StopDialog(var_23_object);
	var_23_object->GetReturnValue(-1);
	int var_25_int = var_16_int;
}
EMIT "Stack[-4] = 0";


void func_776(int var_76_int)
{
	var_76_int = 515559;
}


void func_778(int var_75_int)
{
	var_75_int = 503344;
}


void func_780(string var_77_string)
{
	var_77_string = "ui/NPC_Citizen1.png";
}


void func_782(string var_78_string)
{
	var_78_string = "ui/NPC_Citizen1_b.png";
}


void func_784(bool var_70_bool)
{
	var_70_bool = false;
}


// @pe
void func_786(void)
{
	@SetVariable("oob9Girl1", 1);
}


void func_664(void)
{
	bool var_157_bool;
	@CameraSwitchToNormal(true);
	bool var_159_bool;
	func_784(var_159_bool);
	if(var_159_bool != 0) {
	} else {
		@HasAnimationTrack(var_157_bool, "head");
		if(var_157_bool == 0) goto Label_681;
		@UnlookAsync("head");
	}
Label_681:
	
}


// @pe
void func_792(void)
{
	func_809();
}


// @pe
void func_797(bool var_95_bool)
{
	int var_97_int;
	func_747(var_97_int, "oob9Girl1");
	if(var_97_int == 0) {
		var_95_bool = true;
		return 0;
	}
	var_95_bool = false;
}


// @pe
void func_157(object var_2_object, string var_107_string)
{
	bool var_108_bool;
	func_784(var_108_bool);
	if(!var_108_bool) //@nz
		return 0;
	if(var_107_string == var_2_object)
		return 0;
	string var_111_string; bool var_112_bool;
	var_107_string = var_111_string;
	if(var_107_string == "")
		var_112_bool = false;
	else
		var_112_bool = true;
	func_698(var_111_string, var_112_bool);
	var_2_object = var_107_string;
	
}


void func_415(bool var_18_bool)
{
	var_18_bool = true;
}


// @pe
void func_417(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_21_float, float var_22_float)
{
	bool var_23_bool;
	func_590(var_23_bool);
	if(!var_23_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_21_float;
	var_1_object = var_22_float;
	@SetTimer(10, 1.0);
	func_496();
	if(!false) //@nz
		@KillTimer(10);
}


void func_809(void)
{
	object var_21_object;
	@CreateDiaryEntry(var_21_object, 540, 2, 530352);
	bool var_25_bool; object var_26_object;
	var_21_object = var_26_object;
	func_835(var_25_bool, var_26_object, 532);
}
EMIT "Stack[-1] = 0";


void func_682(string var_133_string)
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


void func_822(object var_34_object)
{
	object var_36_object;
	@GetDiaryRoot(var_36_object);
	if(!var_36_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_34_object = false;
	}
	var_36_object = var_34_object;
}
EMIT "Stack[-1] = 0";


void func_698(string var_111_string, bool var_112_bool)
{
	bool var_118_bool; float var_119_float; float var_120_float;
	@lshHasAnimation(var_118_bool, var_111_string);
	if(var_118_bool != 0) {
		@lshGetAnimTimes(var_111_string, var_119_float, var_120_float);
		@lshPlayAnimation(var_119_float, var_120_float, var_112_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_111_string);
	}
	
}


void func_444(object var_0_object, object var_1_object, bool var_4_bool, bool var_15_bool)
{
	if(var_4_bool == null)
		var_15_bool = false;
	float var_19_float;
	func_582(var_19_float, var_4_bool);
	float var_17_float = sqrt(var_19_float);
	if(var_2_object != 0)
		var_17_float -= var_1_object;
	var_15_bool = var_17_float < var_0_object;
}


void func_575(bool var_71_bool)
{
	var_71_bool = true;
}


void func_577(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_835(bool var_25_bool, object var_26_object, int var_27_int)
{
	object var_34_object;
	func_822(var_34_object);
	object var_31_object;
	var_34_object = var_31_object;
	object var_32_object;
	var_31_object->Find(var_27_int, var_32_object);
	if(!var_32_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_27_int);
		var_25_bool = false;
	}
	var_32_object->AddChild(var_26_object);
	@SendWorldWndMessage(7);
	int var_33_int;
	var_26_object->GetCategory(var_33_int);
	@SetDiarySection(var_33_int);
	var_25_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_582(float var_19_float, object var_20_object)
{
	cvector var_24_cvector;
	@GetPosition(var_24_cvector);
	cvector var_25_cvector;
	var_20_object->GetPosition(var_25_cvector);
	var_19_float = (var_25_cvector - var_24_cvector) | (var_25_cvector - var_24_cvector);
}


void func_713(object var_29_object)
{
	float var_32_float;
	var_29_object->GetEyesHeight(var_32_float);
	cvector var_33_cvector = [0.0, 0.0, 0.0];
	var_34_float = GetByIndex(var_33_cvector, 1);
	var_32_float = var_34_float;
	SetByIndex(var_33_cvector, 1) = var_34_float;
	@LookAsync(var_29_object, "head", var_33_cvector);
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_88_object, object var_89_object)
{
	var_0_object = var_89_object;
	var_1_object = var_88_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_95_bool;
		func_797(var_1_object);
		if(var_95_bool != 0) {
			object var_103_object; object var_104_object;
			var_103_object = var_1_object;
			var_104_object = var_0_object;
			func_786();
			func_157(var_89_object, "Neutral");
			var_0_object->SetMessage(530329); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(531028, 32359, 32357); //@t
			var_0_object->AddReply(531029, 32365, 32358); //@t
		} else {
					func_157(var_89_object, "Neutral");
					var_0_object->SetMessage(530331); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(531033, -1, 32362); //@t
		}
	}
	for(;;) {
		bool var_131_bool;
		func_784(var_131_bool);
		if(var_131_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_682(var_2_object);
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


void func_590(bool var_23_bool)
{
	bool var_25_bool;
	@IsLoaded(var_25_bool);
	var_25_bool = var_23_bool;
}


void func_595(bool var_27_bool, object var_28_object, float var_29_float)
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
	func_737(var_54_cvector, (var_43_cvector ^ [0.0, 1.0, 0.0]));
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
	func_784(var_70_bool);
	if(var_70_bool != 0) {
	} else {
		@HasAnimationTrack(var_47_bool, "head");
		if(var_47_bool == 0) goto Label_658;
		@LookAsyncCamera("head");
	}
Label_658:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_27_bool = true;
	
}


void func_724(void)
{
	bool var_15_bool;
	func_784(var_15_bool);
	if(var_15_bool != 0)
		@lshStopSpeech();
}


void func_731(object var_19_object)
{
	object var_21_object;
	@self(var_21_object);
	var_21_object = var_19_object;
}
EMIT "Stack[-1] = 0";


void func_348(int var_6_int, float var_12_float, float var_13_float)
{
	float var_14_float; bool var_15_bool; float var_16_float; bool var_17_bool;
	var_6_int = false;
	
	for(;;) {
		@rand(var_16_float, 3);
		@Sleep((var_16_float + 3), var_17_bool);
		var_6_int = true;
		float var_21_float; float var_22_float;
		var_12_float = var_21_float;
		func_417(var_22_float, var_14_float, var_15_bool, var_16_float, var_17_bool, var_21_float, var_22_float);
		var_6_int = false;
	}
}
EMIT "Return(); Pop(4)";


void func_863(int var_79_int)
{
	int var_81_int;
	@GetVariable("branch", var_81_int);
	if(var_81_int == 0) {
		var_79_int = 1;
		return 2;
	EMIT "GOTO 0x36e";
	}
	if(var_81_int == 1) {
		var_79_int = 2;
		return 2;
	}
	var_79_int = 3;
}


void func_737(cvector var_54_cvector, cvector var_55_cvector)
{
	float var_58_float = sqrt(var_55_cvector | var_55_cvector);
	if(var_58_float < 0.000001)
		var_54_cvector = [0.0, 0.0, 0.0];
	var_54_cvector = var_55_cvector / var_58_float;
}


// @pe
void func_482(object var_2_object, string var_3_string)
{
	func_577();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
}


void func_747(int var_97_int, string var_98_string)
{
	int var_100_int;
	@GetVariable(var_98_string, var_100_int);
	var_100_int = var_97_int;
}


void func_366(int var_5_int)
{
	var_5_int = true;
	bool var_15_bool = false;
	bool var_16_bool;
	func_590(var_16_bool);
	if(!var_16_bool) { //@nz
		bool var_20_bool;
		func_415(var_20_bool);
		if(var_20_bool != 0)
			var_15_bool = true;
	}
	if(var_15_bool != 0) {
		object var_21_object;
		func_731(var_21_object);
		@RemoveActor(var_21_object);
	}
}


void func_496(void)
{
	int var_39_int; int var_40_int; bool var_41_bool; float var_42_float; bool var_43_bool;
	@WaitForAnimEnd();
	bool var_44_bool;
	func_590(var_44_bool);
	if(!var_44_bool) //@nz
		return 14;
	int var_46_int;
	func_759(var_46_int);
	int var_37_int;
	var_46_int = var_37_int;
	int var_38_int = 0;
	
	for(;;) {
		bool var_59_bool = false;
		if(var_38_int < 5) {
			bool var_62_bool;
			func_590(var_62_bool);
			if(var_62_bool != 0)
				var_59_bool = true;
		}
		if(var_59_bool != 0) {
			@irand(var_39_int, 3);
			if(var_39_int == 0) {
				if(var_37_int == 0) goto Label_543;
				@irand(var_40_int, var_37_int);
				string var_68_string; int var_69_int;
				var_40_int = var_69_int;
				func_752(var_68_string, var_69_int);
				@PlayAnimation("all", var_68_string);
				@WaitForAnimEnd(var_41_bool);
				if(!var_41_bool) { //@nz
				} else {
			} else {
			if(var_39_int == 1) {
				@rand(var_42_float, 4);
				@Sleep((var_42_float + 1), var_43_bool);
				if(!var_43_bool) { //@nz
					goto Label_572;
				}
			} else if(var_38_int != 0) {
				goto Label_572;
			}
			}
					bool var_71_bool;
					func_575(var_71_bool);
					var_72_bool = !var_71_bool; //@nz
					if(var_72_bool == 0) goto Label_567;
			}
		}
	Label_572:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_567:
		@ResetAAS();
		var_38_int += 1;
	}
	
}


void func_752(string var_52_string, int var_53_int)
{
	string var_55_string = "idle";
	if(var_53_int != 0)
		var_55_string += var_53_int;
	var_55_string = var_52_string;
}


void func_759(int var_46_int)
{
	int var_49_int; bool var_50_bool;
	var_49_int = 0;
	
	for(;;) {
		string var_52_string; int var_53_int;
		var_49_int = var_53_int;
		func_752(var_52_string, var_53_int);
		@HasAnimation(var_50_bool, "all", var_52_string);
		if(!var_50_bool) //@nz
			break;
		var_49_int += 1;
	}
	var_49_int = var_46_int;
}


