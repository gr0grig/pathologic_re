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
			func_899();
			if(var_13_bool == 16338) {
				object var_18_object; object var_19_object;
				var_18_object = var_1_object;
				var_19_object = var_0_object;
				func_981();
			}
			if(var_13_bool == 16349) {
				object var_24_object; object var_25_object;
				var_24_object = var_1_object;
				var_25_object = var_0_object;
				func_981();
			}
			if(var_13_bool == 16351) {
				object var_28_object; object var_29_object;
				var_28_object = var_1_object;
				var_29_object = var_0_object;
				func_981();
			}
			if(var_12_bool == 16322) {
				bool var_32_bool;
				func_987(var_1_object);
				if(var_32_bool != 0) {
					object var_40_object; object var_41_object;
					var_40_object = var_1_object;
					var_41_object = var_0_object;
					func_975();
					object var_44_object; object var_45_object;
					var_44_object = var_1_object;
					var_45_object = var_0_object;
					func_968();
					func_192(var_13_bool, "Neutral");
					var_0_object->SetMessage(515058); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(515059, 16324, 16323); //@t
					var_0_object->AddReply(515072, -1, 16336); //@t
					return 0;
				}
				func_192(var_13_bool, "Neutral");
				var_0_object->SetMessage(515073); //@t
				var_0_object->ClearReplies(); //@t
				bool var_82_bool;
				func_999(var_1_object);
				if(var_82_bool != 0)
					var_0_object->AddReply(515074, 16339, 16338); //@t
				bool var_91_bool;
				func_999(var_1_object);
				if(var_91_bool != 0)
					var_0_object->AddReply(515085, 16341, 16349); //@t
				bool var_96_bool;
				func_999(var_1_object);
				if(var_96_bool != 0)
					var_0_object->AddReply(515086, 16341, 16351); //@t
				var_0_object->AddReply(515087, -1, 16353); //@t
				return 0;
			}
			if(var_12_bool == 16339) {
				func_192(var_13_bool, "Neutral");
				var_0_object->SetMessage(515075); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(515076, 16341, 16340); //@t
				var_0_object->AddReply(515081, -1, 16345); //@t
				var_0_object->AddReply(515082, 16347, 16346); //@t
				return 0;
			}
			if(var_12_bool == 16347) {
				func_192(var_13_bool, "Neutral");
				var_0_object->SetMessage(515083); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(515084, 16341, 16348); //@t
				return 0;
			}
			if(var_12_bool == 16341) {
				func_192(var_13_bool, "Neutral");
				var_0_object->SetMessage(515077); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(515078, -1, 16342); //@t
				var_0_object->AddReply(515079, -1, 16343); //@t
				var_0_object->AddReply(515080, -1, 16344); //@t
				return 0;
			}
			if(var_12_bool == 16324) {
				func_192(var_13_bool, "Neutral");
				var_0_object->SetMessage(515060); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(515071, -1, 16335); //@t
				var_0_object->AddReply(515061, 16326, 16325); //@t
				return 0;
			}
			if(var_12_bool == 16326) {
				func_192(var_13_bool, "Neutral");
				var_0_object->SetMessage(515062); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(515063, 16328, 16327); //@t
				var_0_object->AddReply(515067, 16332, 16331); //@t
				return 0;
			}
			if(var_12_bool == 16332) {
				func_192(var_13_bool, "Neutral");
				var_0_object->SetMessage(515068); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(515069, -1, 16333); //@t
				var_0_object->AddReply(515070, -1, 16334); //@t
				return 0;
			}
			if(var_12_bool == 16328) {
				func_192(var_13_bool, "Neutral");
				var_0_object->SetMessage(515064); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(515065, -1, 16329); //@t
				var_0_object->AddReply(515066, -1, 16330); //@t
				return 0;
			}
			var_3_string = true;
			bool var_177_bool;
			func_1036(var_177_bool);
			if(var_177_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xd7";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool)
	{
		func_523(var_11_bool, (float)300, (float)100);
	}

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool, object var_12_object)
	{
		func_657(var_11_bool, var_12_object);
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
			func_541(var_12_string);
	}

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool)
	{
		if(var_6_int != 0)
			func_657(var_10_bool, var_11_bool);
		bool var_16_bool = false;
		if(var_5_int != 0) {
			bool var_18_bool;
			func_590(var_18_bool);
			if(var_18_bool != 0)
				var_16_bool = true;
		}
		if(var_16_bool != 0) {
			object var_19_object;
			func_906(var_19_object);
			@RemoveActor(var_19_object);
		}
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool, int var_12_int)
	{
		if(var_12_int == 10) {
			bool var_15_bool;
			func_619(var_10_bool, var_11_bool, var_12_int, var_15_bool);
			if(var_15_bool != 0) {
				if(!var_2_object) { //@nz
					func_888(var_4_bool);
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
	func_770(var_27_bool, var_28_object, 70.0);
	if(!var_27_bool) { //@nz
		var_16_int = -2;
		return 8;
	}
	object var_23_object;
	@CreateDialog(var_23_object);
	int var_75_int;
	func_1030(var_75_int);
	var_23_object->SetNPCName(var_75_int);
	int var_76_int;
	func_1028(var_76_int);
	var_23_object->SetNPCDescription(var_76_int);
	string var_77_string;
	func_1032(var_77_string);
	var_23_object->SetPhoto(var_77_string);
	string var_78_string;
	func_1034(var_78_string);
	var_23_object->SetPhoto2(var_78_string);
	int var_79_int;
	func_1011(var_79_int);
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
		var_185_bool = !var_26_bool; //@nz
		if(var_185_bool == 0) goto Label_63;
		@sync();
		var_23_object->IsDialogEnd(var_26_bool);
	}
	
Label_63:
	object var_186_object;
	var_17_object = var_186_object;
	func_839();
	@StopDialog(var_23_object);
	var_23_object->GetReturnValue(-1);
	int var_25_int = var_16_int;
}
EMIT "Stack[-4] = 0";


void func_770(bool var_27_bool, object var_28_object, float var_29_float)
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
	func_912(var_54_cvector, (var_43_cvector ^ [0.0, 1.0, 0.0]));
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
	func_1036(var_70_bool);
	if(var_70_bool != 0) {
	} else {
		@HasAnimationTrack(var_47_bool, "head");
		if(var_47_bool == 0) goto Label_833;
		@LookAsyncCamera("head");
	}
Label_833:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_27_bool = true;
	
}


void func_899(void)
{
	bool var_15_bool;
	func_1036(var_15_bool);
	if(var_15_bool != 0)
		@lshStopSpeech();
}


void func_1028(int var_76_int)
{
	var_76_int = 515569;
}


void func_1030(int var_75_int)
{
	var_75_int = 503354;
}


void func_1032(string var_77_string)
{
	var_77_string = "ui/NPC_wmask.png";
}


void func_1034(string var_78_string)
{
	var_78_string = "ui/NPC_wmask_b.png";
}


void func_523(int var_6_int, float var_12_float, float var_13_float)
{
	float var_14_float; bool var_15_bool; float var_16_float; bool var_17_bool;
	var_6_int = false;
	
	for(;;) {
		@rand(var_16_float, 3);
		@Sleep((var_16_float + 3), var_17_bool);
		var_6_int = true;
		float var_21_float; float var_22_float;
		var_12_float = var_21_float;
		func_592(var_22_float, var_14_float, var_15_bool, var_16_float, var_17_bool, var_21_float, var_22_float);
		var_6_int = false;
	}
}
EMIT "Return(); Pop(4)";


void func_1036(bool var_70_bool)
{
	var_70_bool = false;
}


void func_906(object var_19_object)
{
	object var_21_object;
	@self(var_21_object);
	var_21_object = var_19_object;
}
EMIT "Stack[-1] = 0";


void func_912(cvector var_54_cvector, cvector var_55_cvector)
{
	float var_58_float = sqrt(var_55_cvector | var_55_cvector);
	if(var_58_float < 0.000001)
		var_54_cvector = [0.0, 0.0, 0.0];
	var_54_cvector = var_55_cvector / var_58_float;
}


// @pe
void func_657(object var_2_object, string var_3_string)
{
	func_752();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
}


void func_922(int var_97_int, string var_98_string)
{
	int var_100_int;
	@GetVariable(var_98_string, var_100_int);
	var_100_int = var_97_int;
}


void func_541(int var_5_int)
{
	var_5_int = true;
	bool var_15_bool = false;
	bool var_16_bool;
	func_765(var_16_bool);
	if(!var_16_bool) { //@nz
		bool var_20_bool;
		func_590(var_20_bool);
		if(var_20_bool != 0)
			var_15_bool = true;
	}
	if(var_15_bool != 0) {
		object var_21_object;
		func_906(var_21_object);
		@RemoveActor(var_21_object);
	}
}


void func_927(string var_109_string, bool var_110_bool)
{
	object var_112_object;
	@FindActor(var_112_object, var_109_string);
	if(!var_112_object) //@nz
		@Trace(("Door " + var_109_string) + " not found");
	else
		var_112_object->SetProperty("locked", var_110_bool);
	
}
EMIT "Stack[-1] = 0";


void func_671(void)
{
	int var_39_int; int var_40_int; bool var_41_bool; float var_42_float; bool var_43_bool;
	@WaitForAnimEnd();
	bool var_44_bool;
	func_765(var_44_bool);
	if(!var_44_bool) //@nz
		return 14;
	int var_46_int;
	func_951(var_46_int);
	int var_37_int;
	var_46_int = var_37_int;
	int var_38_int = 0;
	
	for(;;) {
		bool var_59_bool = false;
		if(var_38_int < 5) {
			bool var_62_bool;
			func_765(var_62_bool);
			if(var_62_bool != 0)
				var_59_bool = true;
		}
		if(var_59_bool != 0) {
			@irand(var_39_int, 3);
			if(var_39_int == 0) {
				if(var_37_int == 0) goto Label_718;
				@irand(var_40_int, var_37_int);
				string var_68_string; int var_69_int;
				var_40_int = var_69_int;
				func_944(var_68_string, var_69_int);
				@PlayAnimation("all", var_68_string);
				@WaitForAnimEnd(var_41_bool);
				if(!var_41_bool) { //@nz
				} else {
			} else {
			if(var_39_int == 1) {
				@rand(var_42_float, 4);
				@Sleep((var_42_float + 1), var_43_bool);
				if(!var_43_bool) { //@nz
					goto Label_747;
				}
			} else if(var_38_int != 0) {
				goto Label_747;
			}
			}
					bool var_71_bool;
					func_750(var_71_bool);
					var_72_bool = !var_71_bool; //@nz
					if(var_72_bool == 0) goto Label_742;
			}
		}
	Label_747:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_742:
		@ResetAAS();
		var_38_int += 1;
	}
	
}


void func_944(string var_52_string, int var_53_int)
{
	string var_55_string = "idle";
	if(var_53_int != 0)
		var_55_string += var_53_int;
	var_55_string = var_52_string;
}


void func_951(int var_46_int)
{
	int var_49_int; bool var_50_bool;
	var_49_int = 0;
	
	for(;;) {
		string var_52_string; int var_53_int;
		var_49_int = var_53_int;
		func_944(var_52_string, var_53_int);
		@HasAnimation(var_50_bool, "all", var_52_string);
		if(!var_50_bool) //@nz
			break;
		var_49_int += 1;
	}
	var_49_int = var_46_int;
}


// @pe
void func_192(object var_2_object, string var_119_string)
{
	bool var_120_bool;
	func_1036(var_120_bool);
	if(!var_120_bool) //@nz
		return 0;
	if(var_119_string == var_2_object)
		return 0;
	string var_123_string; bool var_124_bool;
	var_119_string = var_123_string;
	if(var_119_string == "")
		var_124_bool = false;
	else
		var_124_bool = true;
	func_873(var_123_string, var_124_bool);
	var_2_object = var_119_string;
	
}


void func_839(void)
{
	bool var_188_bool;
	@CameraSwitchToNormal(true);
	bool var_190_bool;
	func_1036(var_190_bool);
	if(var_190_bool != 0) {
	} else {
		@HasAnimationTrack(var_188_bool, "head");
		if(var_188_bool == 0) goto Label_856;
		@UnlookAsync("head");
	}
Label_856:
	
}


// @pe
void func_968(void)
{
	func_927("itheater@door1", false);
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_88_object, object var_89_object)
{
	var_0_object = var_89_object;
	var_1_object = var_88_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_95_bool;
		func_987(var_1_object);
		if(var_95_bool != 0) {
			object var_103_object; object var_104_object;
			var_103_object = var_1_object;
			var_104_object = var_0_object;
			func_975();
			object var_107_object; object var_108_object;
			var_107_object = var_1_object;
			var_108_object = var_0_object;
			func_968();
			func_192(var_89_object, "Neutral");
			var_0_object->SetMessage(515058); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(515059, 16324, 16323); //@t
			var_0_object->AddReply(515072, -1, 16336); //@t
		} else {
					func_192(var_89_object, "Neutral");
					var_0_object->SetMessage(515073); //@t
					var_0_object->ClearReplies(); //@t
					bool var_163_bool;
					func_999(var_1_object);
					if(var_163_bool != 0)
						var_0_object->AddReply(515074, 16339, 16338); //@t
					bool var_172_bool;
					func_999(var_1_object);
					if(var_172_bool != 0)
						var_0_object->AddReply(515085, 16341, 16349); //@t
					bool var_177_bool;
					func_999(var_1_object);
					if(var_177_bool != 0)
						var_0_object->AddReply(515086, 16341, 16351); //@t
					var_0_object->AddReply(515087, -1, 16353); //@t
		}
	}
	for(;;) {
		bool var_143_bool;
		func_1036(var_143_bool);
		if(var_143_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_857(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_191;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_191:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4e";


void func_590(bool var_18_bool)
{
	var_18_bool = true;
}


// @pe
void func_975(void)
{
	@SetVariable("ood12Whitemask1", 1);
}


// @pe
void func_592(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_21_float, float var_22_float)
{
	bool var_23_bool;
	func_765(var_23_bool);
	if(!var_23_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_21_float;
	var_1_object = var_22_float;
	@SetTimer(10, 1.0);
	func_671();
	if(!false) //@nz
		@KillTimer(10);
}


// @pe
void func_981(void)
{
	@SetVariable("ood12Whitemask2", 1);
}


void func_857(string var_145_string)
{
	bool var_149_bool; float var_150_float; float var_151_float;
	@lshHasAnimation(var_149_bool, var_145_string);
	if(var_149_bool != 0) {
		@lshGetAnimTimes(var_145_string, var_150_float, var_151_float);
		@lshPlayAnimation(var_150_float, var_151_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_145_string);
	}
	
}


// @pe
void func_987(bool var_95_bool)
{
	int var_97_int;
	func_922(var_97_int, "ood12Whitemask1");
	if(var_97_int == 0) {
		var_95_bool = true;
		return 0;
	}
	var_95_bool = false;
}


// @pe
void func_999(bool var_163_bool)
{
	int var_165_int;
	func_922(var_165_int, "ood12Whitemask2");
	if(var_165_int == 0) {
		var_163_bool = true;
		return 0;
	}
	var_163_bool = false;
}


void func_873(string var_123_string, bool var_124_bool)
{
	bool var_130_bool; float var_131_float; float var_132_float;
	@lshHasAnimation(var_130_bool, var_123_string);
	if(var_130_bool != 0) {
		@lshGetAnimTimes(var_123_string, var_131_float, var_132_float);
		@lshPlayAnimation(var_131_float, var_132_float, var_124_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_123_string);
	}
	
}


void func_619(object var_0_object, object var_1_object, bool var_4_bool, bool var_15_bool)
{
	if(var_4_bool == null)
		var_15_bool = false;
	float var_19_float;
	func_757(var_19_float, var_4_bool);
	float var_17_float = sqrt(var_19_float);
	if(var_2_object != 0)
		var_17_float -= var_1_object;
	var_15_bool = var_17_float < var_0_object;
}


void func_750(bool var_71_bool)
{
	var_71_bool = true;
}


void func_752(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_1011(int var_79_int)
{
	int var_81_int;
	@GetVariable("branch", var_81_int);
	if(var_81_int == 0) {
		var_79_int = 1;
		return 2;
	EMIT "GOTO 0x402";
	}
	if(var_81_int == 1) {
		var_79_int = 2;
		return 2;
	}
	var_79_int = 3;
}


void func_757(float var_19_float, object var_20_object)
{
	cvector var_24_cvector;
	@GetPosition(var_24_cvector);
	cvector var_25_cvector;
	var_20_object->GetPosition(var_25_cvector);
	var_19_float = (var_25_cvector - var_24_cvector) | (var_25_cvector - var_24_cvector);
}


void func_888(object var_29_object)
{
	float var_32_float;
	var_29_object->GetEyesHeight(var_32_float);
	cvector var_33_cvector = [0.0, 0.0, 0.0];
	var_34_float = GetByIndex(var_33_cvector, 1);
	var_32_float = var_34_float;
	SetByIndex(var_33_cvector, 1) = var_34_float;
	@LookAsync(var_29_object, "head", var_33_cvector);
}


void func_765(bool var_23_bool)
{
	bool var_25_bool;
	@IsLoaded(var_25_bool);
	var_25_bool = var_23_bool;
}


