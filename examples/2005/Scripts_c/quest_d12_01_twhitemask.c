// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, int var_7_int, int var_8_int, bool var_9_bool, bool var_10_bool, object var_11_object, bool var_12_bool)
	{
		if(1 != 0) {
			func_889();
			if(var_12_bool == 16338) {
				object var_17_object; object var_18_object;
				var_17_object = var_1_object;
				var_18_object = var_0_object;
				func_971();
			}
			if(var_12_bool == 16349) {
				object var_23_object; object var_24_object;
				var_23_object = var_1_object;
				var_24_object = var_0_object;
				func_971();
			}
			if(var_12_bool == 16351) {
				object var_27_object; object var_28_object;
				var_27_object = var_1_object;
				var_28_object = var_0_object;
				func_971();
			}
			if(var_11_object == 16322) {
				bool var_31_bool;
				func_977(var_1_object);
				if(var_31_bool != 0) {
					object var_39_object; object var_40_object;
					var_39_object = var_1_object;
					var_40_object = var_0_object;
					func_965();
					object var_43_object; object var_44_object;
					var_43_object = var_1_object;
					var_44_object = var_0_object;
					func_958();
					func_192(var_12_bool, "Neutral");
					var_0_object->SetMessage(515058); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(515059, 16324, 16323); //@t
					var_0_object->AddReply(515072, -1, 16336); //@t
					return 0;
				}
				func_192(var_12_bool, "Neutral");
				var_0_object->SetMessage(515073); //@t
				var_0_object->ClearReplies(); //@t
				bool var_76_bool;
				func_989(var_1_object);
				if(var_76_bool != 0)
					var_0_object->AddReply(515074, 16339, 16338); //@t
				bool var_85_bool;
				func_989(var_1_object);
				if(var_85_bool != 0)
					var_0_object->AddReply(515085, 16341, 16349); //@t
				bool var_90_bool;
				func_989(var_1_object);
				if(var_90_bool != 0)
					var_0_object->AddReply(515086, 16341, 16351); //@t
				var_0_object->AddReply(515087, -1, 16353); //@t
				return 0;
			}
			if(var_11_object == 16339) {
				func_192(var_12_bool, "Neutral");
				var_0_object->SetMessage(515075); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(515076, 16341, 16340); //@t
				var_0_object->AddReply(515081, -1, 16345); //@t
				var_0_object->AddReply(515082, 16347, 16346); //@t
				return 0;
			}
			if(var_11_object == 16347) {
				func_192(var_12_bool, "Neutral");
				var_0_object->SetMessage(515083); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(515084, 16341, 16348); //@t
				return 0;
			}
			if(var_11_object == 16341) {
				func_192(var_12_bool, "Neutral");
				var_0_object->SetMessage(515077); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(515078, -1, 16342); //@t
				var_0_object->AddReply(515079, -1, 16343); //@t
				var_0_object->AddReply(515080, -1, 16344); //@t
				return 0;
			}
			if(var_11_object == 16324) {
				func_192(var_12_bool, "Neutral");
				var_0_object->SetMessage(515060); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(515071, -1, 16335); //@t
				var_0_object->AddReply(515061, 16326, 16325); //@t
				return 0;
			}
			if(var_11_object == 16326) {
				func_192(var_12_bool, "Neutral");
				var_0_object->SetMessage(515062); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(515063, 16328, 16327); //@t
				var_0_object->AddReply(515067, 16332, 16331); //@t
				return 0;
			}
			if(var_11_object == 16332) {
				func_192(var_12_bool, "Neutral");
				var_0_object->SetMessage(515068); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(515069, -1, 16333); //@t
				var_0_object->AddReply(515070, -1, 16334); //@t
				return 0;
			}
			if(var_11_object == 16328) {
				func_192(var_12_bool, "Neutral");
				var_0_object->SetMessage(515064); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(515065, -1, 16329); //@t
				var_0_object->AddReply(515066, -1, 16330); //@t
				return 0;
			}
			var_3_string = true;
			bool var_171_bool;
			func_1026(var_171_bool);
			if(var_171_bool != 0)
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
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool)
	{
		func_523((float)300, (float)100);
	}

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object)
	{
		func_667(var_10_bool, var_11_object);
		int var_15_int; object var_16_object;
		var_11_object = var_16_object;
		TaskCall(0);
		func_0(var_17_object, var_15_int, var_16_object);
		TaskReturn();
	}

	// @pe
	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, string var_11_string)
	{
		if(var_11_string == "cleanup")
			func_548(var_11_string);
	}

	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool)
	{
		@StopGroup0();
		@sync();
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool)
	{
		func_667(var_9_object, var_10_bool);
		bool var_14_bool = false;
		if(var_5_int != 0) {
			bool var_16_bool;
			func_600(var_16_bool);
			if(var_16_bool != 0)
				var_14_bool = true;
		}
		if(var_14_bool != 0) {
			object var_17_object;
			func_896(var_17_object);
			@RemoveActor(var_17_object);
		}
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, int var_11_int)
	{
		if(var_11_int == 10) {
			bool var_14_bool;
			func_629(var_9_object, var_10_bool, var_11_int, var_14_bool);
			if(var_14_bool != 0) {
				if(!var_2_object) { //@nz
					func_878(var_4_bool);
					var_2_object = true;
				}
			} else if(var_2_object != 0) {
				@UnlookAsync("head");
				var_2_object = false;
			}
		}
	
	}

}


void func_1024(string var_76_string)
{
	var_76_string = "ui/NPC_wmask_b.png";
}


void func_0(object var_0_object, int var_15_int, object var_16_object)
{
	var_0_object = var_16_object;
	bool var_26_bool; object var_27_object;
	var_16_object = var_27_object;
	func_780(var_26_bool, var_27_object, 70.0);
	if(!var_26_bool) { //@nz
		var_15_int = -2;
		return 8;
	}
	object var_22_object;
	@CreateDialog(var_22_object);
	int var_73_int;
	func_1020(var_73_int);
	var_22_object->SetNPCName(var_73_int);
	int var_74_int;
	func_1018(var_74_int);
	var_22_object->SetNPCDescription(var_74_int);
	string var_75_string;
	func_1022(var_75_string);
	var_22_object->SetPhoto(var_75_string);
	string var_76_string;
	func_1024(var_76_string);
	var_22_object->SetPhoto2(var_76_string);
	int var_77_int;
	func_1001(var_77_int);
	var_22_object->SetPlayerName(var_77_int);
	bool var_23_bool;
	@IsOverrideActive(var_23_bool);
	if(var_23_bool != 0) {
		var_15_int = -2;
		return 8;
	}
	@DoDialog(var_22_object);
	object var_86_object; object var_87_object;
	var_16_object = var_86_object;
	var_22_object = var_87_object;
	TaskCall(1);
	func_74(var_88_object, var_89_object, var_90_string, var_91_bool, var_86_object, var_87_object);
	TaskReturn();
	bool var_25_bool;
	var_22_object->IsDialogEnd(var_25_bool);
	
	for(;;) {
		var_173_bool = !var_25_bool; //@nz
		if(var_173_bool == 0) goto Label_63;
		@sync();
		var_22_object->IsDialogEnd(var_25_bool);
	}
	
Label_63:
	object var_174_object;
	var_16_object = var_174_object;
	func_848();
	@StopDialog(var_22_object);
	var_22_object->GetReturnValue(-1);
	int var_24_int = var_15_int;
}
EMIT "Stack[-4] = 0";


void func_1026(bool var_68_bool)
{
	var_68_bool = false;
}


void func_896(object var_17_object)
{
	object var_19_object;
	@self(var_19_object);
	var_19_object = var_17_object;
}
EMIT "Stack[-1] = 0";


void func_1018(int var_74_int)
{
	var_74_int = 515569;
}


void func_902(cvector var_53_cvector, cvector var_54_cvector)
{
	float var_57_float = sqrt(var_54_cvector | var_54_cvector);
	if(var_57_float < 0.000001)
		var_53_cvector = [0.0, 0.0, 0.0];
	var_53_cvector = var_54_cvector / var_57_float;
}


void func_775(bool var_15_bool)
{
	bool var_17_bool;
	@IsLoaded(var_17_bool);
	var_17_bool = var_15_bool;
}


void func_523(float var_11_float, float var_12_float)
{
	
Label_524:
	for(;;) {
		bool var_15_bool;
		func_775(var_15_bool);
		var_18_bool = !var_15_bool; //@nz
		if(var_18_bool == 0) goto Label_532;
		@Hold();
	}
	
Label_532:
	float var_14_float;
	@rand(var_14_float, 3);
	@Sleep(var_14_float + 3);
	float var_22_float; float var_23_float;
	float var_13_float;
	func_602(var_10_bool, var_22_float, var_23_float, var_13_float, var_14_float, var_22_float, var_23_float);
	@sync();
	goto Label_524;
}
EMIT "Return(); Pop(2)";


void func_780(bool var_26_bool, object var_27_object, float var_28_float)
{
	cvector var_39_cvector; bool var_46_bool;
	var_27_object->GetPosition(var_39_cvector);
	float var_38_float;
	var_27_object->GetEyesHeight(var_38_float);
	var_47_float = GetByIndex(var_39_cvector, 1);
	SetByIndex(var_39_cvector, 1) = (var_47_float + var_38_float);
	cvector var_40_cvector;
	@GetPosition(var_40_cvector);
	@GetEyesHeight(var_38_float);
	var_48_float = GetByIndex(var_40_cvector, 1);
	SetByIndex(var_40_cvector, 1) = (var_48_float + var_38_float);
	cvector var_41_cvector = var_39_cvector - var_40_cvector;
	var_49_float = GetByIndex(var_41_cvector, 1);
	SetByIndex(var_41_cvector, 1) = (float)0;
	var_51_float = sqrt(var_41_cvector | var_41_cvector);
	var_41_cvector /= var_51_float;
	cvector var_42_cvector = -var_41_cvector;
	cvector var_53_cvector;
	func_902(var_53_cvector, (var_42_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_43_cvector = ((var_41_cvector * var_28_float) + (var_53_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_45_bool;
	@IsOverrideActive(var_45_bool);
	if(var_45_bool != 0)
		var_26_bool = false;
	@StopWorld();
	@CameraTransit((var_40_cvector + var_43_cvector), var_42_cvector);
	var_66_float = GetByIndex(var_43_cvector, 0);
	var_67_float = GetByIndex(var_43_cvector, 2);
	@Rotate(var_66_float, var_67_float);
	bool var_68_bool;
	func_1026(var_68_bool);
	if(var_68_bool != 0) {
	} else {
		@HasAnimationTrack(var_46_bool, "head");
		if(var_46_bool == 0) goto Label_842;
		@LookAsyncCamera("head");
	}
Label_842:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_26_bool = true;
	
}


void func_912(int var_95_int, string var_96_string)
{
	int var_98_int;
	@GetVariable(var_96_string, var_98_int);
	var_98_int = var_95_int;
}


void func_917(string var_107_string, bool var_108_bool)
{
	object var_110_object;
	@FindActor(var_110_object, var_107_string);
	if(!var_110_object) //@nz
		@Trace(("Door " + var_107_string) + " not found");
	else
		var_110_object->SetProperty("locked", var_108_bool);
	
}
EMIT "Stack[-1] = 0";


// @pe
void func_667(object var_2_object, string var_3_string)
{
	func_762();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
}


void func_548(int var_5_int)
{
	var_5_int = true;
	bool var_15_bool;
	@IsLoaded(var_15_bool);
	bool var_16_bool = false;
	if(!var_15_bool) { //@nz
		bool var_18_bool;
		func_600(var_18_bool);
		if(var_18_bool != 0)
			var_16_bool = true;
	}
	if(var_16_bool != 0) {
		object var_19_object;
		func_896(var_19_object);
		@RemoveActor(var_19_object);
	}
}


void func_934(string var_51_string, int var_52_int)
{
	string var_54_string = "idle";
	if(var_52_int != 0)
		var_54_string += var_52_int;
	var_54_string = var_51_string;
}


void func_681(void)
{
	int var_38_int; int var_39_int; bool var_40_bool; float var_41_float; bool var_42_bool;
	@WaitForAnimEnd();
	bool var_43_bool;
	func_775(var_43_bool);
	if(!var_43_bool) //@nz
		return 14;
	int var_45_int;
	func_941(var_45_int);
	int var_36_int;
	var_45_int = var_36_int;
	int var_37_int = 0;
	
	for(;;) {
		bool var_58_bool = false;
		if(var_37_int < 5) {
			bool var_61_bool;
			func_775(var_61_bool);
			if(var_61_bool != 0)
				var_58_bool = true;
		}
		if(var_58_bool != 0) {
			@irand(var_38_int, 3);
			if(var_38_int == 0) {
				if(var_36_int == 0) goto Label_728;
				@irand(var_39_int, var_36_int);
				string var_67_string; int var_68_int;
				var_39_int = var_68_int;
				func_934(var_67_string, var_68_int);
				@PlayAnimation("all", var_67_string);
				@WaitForAnimEnd(var_40_bool);
				if(!var_40_bool) { //@nz
				} else {
			} else {
			if(var_38_int == 1) {
				@rand(var_41_float, 4);
				@Sleep((var_41_float + 1), var_42_bool);
				if(!var_42_bool) { //@nz
					goto Label_757;
				}
			} else if(var_37_int != 0) {
				goto Label_757;
			}
			}
					bool var_70_bool;
					func_760(var_70_bool);
					var_71_bool = !var_70_bool; //@nz
					if(var_71_bool == 0) goto Label_752;
			}
		}
	Label_757:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_752:
		@ResetAAS();
		var_37_int += 1;
	}
	
}


void func_941(int var_45_int)
{
	int var_48_int; bool var_49_bool;
	var_48_int = 0;
	
	for(;;) {
		string var_51_string; int var_52_int;
		var_48_int = var_52_int;
		func_934(var_51_string, var_52_int);
		@HasAnimation(var_49_bool, "all", var_51_string);
		if(!var_49_bool) //@nz
			break;
		var_48_int += 1;
	}
	var_48_int = var_45_int;
}


// @pe
void func_958(void)
{
	func_917("itheater@door1", false);
}


// @pe
void func_192(object var_2_object, string var_117_string)
{
	bool var_118_bool;
	func_1026(var_118_bool);
	if(!var_118_bool) //@nz
		return 0;
	if(var_117_string == var_2_object)
		return 0;
	string var_121_string; bool var_122_bool;
	var_117_string = var_121_string;
	if(var_117_string == "")
		var_122_bool = false;
	else
		var_122_bool = true;
	func_872(var_121_string, var_122_bool);
	var_2_object = var_117_string;
	
}


// @pe
void func_965(void)
{
	@SetVariable("ood12Whitemask1", 1);
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_86_object, object var_87_object)
{
	var_0_object = var_87_object;
	var_1_object = var_86_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_93_bool;
		func_977(var_1_object);
		if(var_93_bool != 0) {
			object var_101_object; object var_102_object;
			var_101_object = var_1_object;
			var_102_object = var_0_object;
			func_965();
			object var_105_object; object var_106_object;
			var_105_object = var_1_object;
			var_106_object = var_0_object;
			func_958();
			func_192(var_87_object, "Neutral");
			var_0_object->SetMessage(515058); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(515059, 16324, 16323); //@t
			var_0_object->AddReply(515072, -1, 16336); //@t
		} else {
					func_192(var_87_object, "Neutral");
					var_0_object->SetMessage(515073); //@t
					var_0_object->ClearReplies(); //@t
					bool var_151_bool;
					func_989(var_1_object);
					if(var_151_bool != 0)
						var_0_object->AddReply(515074, 16339, 16338); //@t
					bool var_160_bool;
					func_989(var_1_object);
					if(var_160_bool != 0)
						var_0_object->AddReply(515085, 16341, 16349); //@t
					bool var_165_bool;
					func_989(var_1_object);
					if(var_165_bool != 0)
						var_0_object->AddReply(515086, 16341, 16351); //@t
					var_0_object->AddReply(515087, -1, 16353); //@t
		}
	}
	for(;;) {
		bool var_136_bool;
		func_1026(var_136_bool);
		if(var_136_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_865(var_2_object);
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


// @pe
void func_971(void)
{
	@SetVariable("ood12Whitemask2", 1);
}


void func_848(void)
{
	bool var_176_bool;
	@CameraSwitchToNormal();
	bool var_177_bool;
	func_1026(var_177_bool);
	if(var_177_bool != 0) {
	} else {
		@HasAnimationTrack(var_176_bool, "head");
		if(var_176_bool == 0) goto Label_864;
		@UnlookAsync("head");
	}
Label_864:
	
}


// @pe
void func_977(bool var_93_bool)
{
	int var_95_int;
	func_912(var_95_int, "ood12Whitemask1");
	if(var_95_int == 0) {
		var_93_bool = true;
		return 0;
	}
	var_93_bool = false;
}


void func_600(bool var_16_bool)
{
	var_16_bool = true;
}


// @pe
void func_602(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_22_float, float var_23_float)
{
	bool var_24_bool;
	func_775(var_24_bool);
	if(!var_24_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_22_float;
	var_1_object = var_23_float;
	@SetTimer(10, 1.0);
	func_681();
	if(!false) //@nz
		@KillTimer(10);
}


// @pe
void func_989(bool var_151_bool)
{
	int var_153_int;
	func_912(var_153_int, "ood12Whitemask2");
	if(var_153_int == 0) {
		var_151_bool = true;
		return 0;
	}
	var_151_bool = false;
}


void func_865(string var_138_string)
{
	float var_141_float; float var_142_float;
	@lshGetAnimTimes(var_138_string, var_141_float, var_142_float);
	@lshPlayAnimation(var_141_float, var_142_float, false);
}


void func_872(string var_121_string, bool var_122_bool)
{
	float var_127_float; float var_128_float;
	@lshGetAnimTimes(var_121_string, var_127_float, var_128_float);
	@lshPlayAnimation(var_127_float, var_128_float, var_122_bool);
}


void func_1001(int var_77_int)
{
	int var_79_int;
	@GetVariable("branch", var_79_int);
	if(var_79_int == 0) {
		var_77_int = 1;
		return 2;
	EMIT "GOTO 0x3f8";
	}
	if(var_79_int == 1) {
		var_77_int = 2;
		return 2;
	}
	var_77_int = 3;
}


void func_878(object var_28_object)
{
	float var_31_float;
	var_28_object->GetEyesHeight(var_31_float);
	cvector var_32_cvector = [0.0, 0.0, 0.0];
	var_33_float = GetByIndex(var_32_cvector, 1);
	var_31_float = var_33_float;
	SetByIndex(var_32_cvector, 1) = var_33_float;
	@LookAsync(var_28_object, "head", var_32_cvector);
}


void func_629(object var_0_object, object var_1_object, bool var_4_bool, bool var_14_bool)
{
	if(var_4_bool == null)
		var_14_bool = false;
	float var_18_float;
	func_767(var_18_float, var_4_bool);
	float var_16_float = sqrt(var_18_float);
	if(var_2_object != 0)
		var_16_float -= var_1_object;
	var_14_bool = var_16_float < var_0_object;
}


void func_760(bool var_70_bool)
{
	var_70_bool = true;
}


void func_889(void)
{
	bool var_14_bool;
	func_1026(var_14_bool);
	if(var_14_bool != 0)
		@lshStopSpeech();
}


void func_762(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_1020(int var_73_int)
{
	var_73_int = 503354;
}


void func_1022(string var_75_string)
{
	var_75_string = "ui/NPC_wmask.png";
}


void func_767(float var_18_float, object var_19_object)
{
	cvector var_23_cvector;
	@GetPosition(var_23_cvector);
	cvector var_24_cvector;
	var_19_object->GetPosition(var_24_cvector);
	var_18_float = (var_24_cvector - var_23_cvector) | (var_24_cvector - var_23_cvector);
}


