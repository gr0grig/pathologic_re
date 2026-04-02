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
			func_773();
			if(var_12_bool == 16264) {
				object var_17_object; object var_18_object;
				var_17_object = var_1_object;
				var_18_object = var_0_object;
				func_839();
			}
			if(var_12_bool == 16277) {
				object var_23_object; object var_24_object;
				var_23_object = var_1_object;
				var_24_object = var_0_object;
				func_801();
			}
			if(var_11_object == 16263) {
				object var_29_object; object var_30_object;
				var_29_object = var_1_object;
				var_30_object = var_0_object;
				func_807();
				func_152(var_12_bool, "Neutral");
				var_0_object->SetMessage(515005); //@t
				var_0_object->ClearReplies(); //@t
				bool var_89_bool;
				func_857(var_1_object);
				if(var_89_bool != 0)
					var_0_object->AddReply(515006, 42522, 16264); //@t
				bool var_98_bool;
				func_845(var_1_object);
				if(var_98_bool != 0)
					var_0_object->AddReply(515018, 16278, 16277); //@t
				var_0_object->AddReply(515017, -1, 16276); //@t
				return 0;
			}
			if(var_11_object == 16278) {
				func_152(var_12_bool, "Neutral");
				var_0_object->SetMessage(515019); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(515020, -1, 16279); //@t
				var_0_object->AddReply(515021, -1, 16280); //@t
				return 0;
			}
			if(var_11_object == 42522) {
				func_152(var_12_bool, "Neutral");
				var_0_object->SetMessage(540515); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540516, 16265, 42523); //@t
				var_0_object->AddReply(540517, 42525, 42524); //@t
				return 0;
			}
			if(var_11_object == 42525) {
				func_152(var_12_bool, "Neutral");
				var_0_object->SetMessage(540518); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540519, -1, 42526); //@t
				return 0;
			}
			if(var_11_object == 16265) {
				func_152(var_12_bool, "Neutral");
				var_0_object->SetMessage(515007); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(515008, 16267, 16266); //@t
				return 0;
			}
			if(var_11_object == 16267) {
				func_152(var_12_bool, "Neutral");
				var_0_object->SetMessage(515009); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(515010, -1, 16268); //@t
				var_0_object->AddReply(515011, -1, 16269); //@t
				var_0_object->AddReply(515012, 16271, 16270); //@t
				var_0_object->AddReply(515016, 16271, 16274); //@t
				return 0;
			}
			if(var_11_object == 16271) {
				func_152(var_12_bool, "Neutral");
				var_0_object->SetMessage(515013); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(515014, -1, 16272); //@t
				var_0_object->AddReply(515015, -1, 16273); //@t
				return 0;
			}
			var_3_string = true;
			bool var_170_bool;
			func_965(var_170_bool);
			if(var_170_bool != 0)
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
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool)
	{
		func_407((float)300, (float)100);
	}

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object)
	{
		func_551(var_10_bool, var_11_object);
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
			func_432(var_11_string);
	}

	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool)
	{
		@StopGroup0();
		@sync();
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool)
	{
		func_551(var_9_object, var_10_bool);
		bool var_14_bool = false;
		if(var_5_int != 0) {
			bool var_16_bool;
			func_484(var_16_bool);
			if(var_16_bool != 0)
				var_14_bool = true;
		}
		if(var_14_bool != 0) {
			object var_17_object;
			func_780(var_17_object);
			@RemoveActor(var_17_object);
		}
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, int var_11_int)
	{
		if(var_11_int == 10) {
			bool var_14_bool;
			func_513(var_9_object, var_10_bool, var_11_int, var_14_bool);
			if(var_14_bool != 0) {
				if(!var_2_object) { //@nz
					func_762(var_4_bool);
					var_2_object = true;
				}
			} else if(var_2_object != 0) {
				@UnlookAsync("head");
				var_2_object = false;
			}
		}
	
	}

}


void func_0(object var_0_object, int var_15_int, object var_16_object)
{
	var_0_object = var_16_object;
	bool var_26_bool; object var_27_object;
	var_16_object = var_27_object;
	func_664(var_26_bool, var_27_object, 70.0);
	if(!var_26_bool) { //@nz
		var_15_int = -2;
		return 8;
	}
	object var_22_object;
	@CreateDialog(var_22_object);
	int var_73_int;
	func_959(var_73_int);
	var_22_object->SetNPCName(var_73_int);
	int var_74_int;
	func_957(var_74_int);
	var_22_object->SetNPCDescription(var_74_int);
	string var_75_string;
	func_961(var_75_string);
	var_22_object->SetPhoto(var_75_string);
	string var_76_string;
	func_963(var_76_string);
	var_22_object->SetPhoto2(var_76_string);
	int var_77_int;
	func_940(var_77_int);
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
		var_187_bool = !var_25_bool; //@nz
		if(var_187_bool == 0) goto Label_63;
		@sync();
		var_22_object->IsDialogEnd(var_25_bool);
	}
	
Label_63:
	object var_188_object;
	var_16_object = var_188_object;
	func_732();
	@StopDialog(var_22_object);
	var_22_object->GetReturnValue(-1);
	int var_24_int = var_15_int;
}
EMIT "Stack[-4] = 0";


void func_513(object var_0_object, object var_1_object, bool var_4_bool, bool var_14_bool)
{
	if(var_4_bool == null)
		var_14_bool = false;
	float var_18_float;
	func_651(var_18_float, var_4_bool);
	float var_16_float = sqrt(var_18_float);
	if(var_2_object != 0)
		var_16_float -= var_1_object;
	var_14_bool = var_16_float < var_0_object;
}


void func_644(bool var_70_bool)
{
	var_70_bool = true;
}


void func_773(void)
{
	bool var_14_bool;
	func_965(var_14_bool);
	if(var_14_bool != 0)
		@lshStopSpeech();
}


void func_646(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_651(float var_18_float, object var_19_object)
{
	cvector var_23_cvector;
	@GetPosition(var_23_cvector);
	cvector var_24_cvector;
	var_19_object->GetPosition(var_24_cvector);
	var_18_float = (var_24_cvector - var_23_cvector) | (var_24_cvector - var_23_cvector);
}


void func_780(object var_17_object)
{
	object var_19_object;
	@self(var_19_object);
	var_19_object = var_17_object;
}
EMIT "Stack[-1] = 0";


void func_786(cvector var_53_cvector, cvector var_54_cvector)
{
	float var_57_float = sqrt(var_54_cvector | var_54_cvector);
	if(var_57_float < 0.000001)
		var_53_cvector = [0.0, 0.0, 0.0];
	var_53_cvector = var_54_cvector / var_57_float;
}


void func_659(bool var_15_bool)
{
	bool var_17_bool;
	@IsLoaded(var_17_bool);
	var_17_bool = var_15_bool;
}


void func_407(float var_11_float, float var_12_float)
{
	
Label_408:
	for(;;) {
		bool var_15_bool;
		func_659(var_15_bool);
		var_18_bool = !var_15_bool; //@nz
		if(var_18_bool == 0) goto Label_416;
		@Hold();
	}
	
Label_416:
	float var_14_float;
	@rand(var_14_float, 3);
	@Sleep(var_14_float + 3);
	float var_22_float; float var_23_float;
	float var_13_float;
	func_486(var_10_bool, var_22_float, var_23_float, var_13_float, var_14_float, var_22_float, var_23_float);
	@sync();
	goto Label_408;
}
EMIT "Return(); Pop(2)";


void func_664(bool var_26_bool, object var_27_object, float var_28_float)
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
	func_786(var_53_cvector, (var_42_cvector ^ [0.0, 1.0, 0.0]));
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
	func_965(var_68_bool);
	if(var_68_bool != 0) {
	} else {
		@HasAnimationTrack(var_46_bool, "head");
		if(var_46_bool == 0) goto Label_726;
		@LookAsyncCamera("head");
	}
Label_726:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_26_bool = true;
	
}


// @pe
void func_152(object var_2_object, string var_140_string)
{
	bool var_141_bool;
	func_965(var_141_bool);
	if(!var_141_bool) //@nz
		return 0;
	if(var_140_string == var_2_object)
		return 0;
	string var_144_string; bool var_145_bool;
	var_140_string = var_144_string;
	if(var_140_string == "")
		var_145_bool = false;
	else
		var_145_bool = true;
	func_756(var_144_string, var_145_bool);
	var_2_object = var_140_string;
	
}


void func_923(bool var_126_bool, int var_127_int)
{
	object var_132_object;
	func_882(var_132_object);
	object var_130_object;
	var_132_object = var_130_object;
	object var_131_object;
	var_130_object->Find(var_127_int, var_131_object);
	if(!var_131_object) //@nz
		var_126_bool = false;
	var_131_object->Remove();
	var_126_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_796(int var_95_int, string var_96_string)
{
	int var_98_int;
	@GetVariable(var_96_string, var_98_int);
	var_98_int = var_95_int;
}


// @pe
void func_801(void)
{
	@SetVariable("ood12Littlegirl2", 1);
}


// @pe
void func_807(void)
{
	int var_95_int;
	func_796(var_95_int, "D_Mission5");
	if(var_95_int == 0) {
		@SetVariable("D_Mission5", 1);
		func_869();
		bool var_126_bool;
		func_923(var_126_bool, 30);
		bool var_134_bool;
		func_923(var_134_bool, 3);
		bool var_136_bool;
		func_923(var_136_bool, 4);
		bool var_138_bool;
		func_923(var_138_bool, 5);
	}
}


// @pe
void func_551(object var_2_object, string var_3_string)
{
	func_646();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
}


void func_940(int var_77_int)
{
	int var_79_int;
	@GetVariable("branch", var_79_int);
	if(var_79_int == 0) {
		var_77_int = 1;
		return 2;
	EMIT "GOTO 0x3bb";
	}
	if(var_79_int == 1) {
		var_77_int = 2;
		return 2;
	}
	var_77_int = 3;
}


void func_432(int var_5_int)
{
	var_5_int = true;
	bool var_15_bool;
	@IsLoaded(var_15_bool);
	bool var_16_bool = false;
	if(!var_15_bool) { //@nz
		bool var_18_bool;
		func_484(var_18_bool);
		if(var_18_bool != 0)
			var_16_bool = true;
	}
	if(var_16_bool != 0) {
		object var_19_object;
		func_780(var_19_object);
		@RemoveActor(var_19_object);
	}
}


void func_565(void)
{
	int var_38_int; int var_39_int; bool var_40_bool; float var_41_float; bool var_42_bool;
	@WaitForAnimEnd();
	bool var_43_bool;
	func_659(var_43_bool);
	if(!var_43_bool) //@nz
		return 14;
	int var_45_int;
	func_974(var_45_int);
	int var_36_int;
	var_45_int = var_36_int;
	int var_37_int = 0;
	
	for(;;) {
		bool var_58_bool = false;
		if(var_37_int < 5) {
			bool var_61_bool;
			func_659(var_61_bool);
			if(var_61_bool != 0)
				var_58_bool = true;
		}
		if(var_58_bool != 0) {
			@irand(var_38_int, 3);
			if(var_38_int == 0) {
				if(var_36_int == 0) goto Label_612;
				@irand(var_39_int, var_36_int);
				string var_67_string; int var_68_int;
				var_39_int = var_68_int;
				func_967(var_67_string, var_68_int);
				@PlayAnimation("all", var_67_string);
				@WaitForAnimEnd(var_40_bool);
				if(!var_40_bool) { //@nz
				} else {
			} else {
			if(var_38_int == 1) {
				@rand(var_41_float, 4);
				@Sleep((var_41_float + 1), var_42_bool);
				if(!var_42_bool) { //@nz
					goto Label_641;
				}
			} else if(var_37_int != 0) {
				goto Label_641;
			}
			}
					bool var_70_bool;
					func_644(var_70_bool);
					var_71_bool = !var_70_bool; //@nz
					if(var_71_bool == 0) goto Label_636;
			}
		}
	Label_641:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_636:
		@ResetAAS();
		var_37_int += 1;
	}
	
}


void func_957(int var_74_int)
{
	var_74_int = 515561;
}


void func_959(int var_73_int)
{
	var_73_int = 503346;
}


void func_961(string var_75_string)
{
	var_75_string = "ui/NPC_Citizen1.png";
}


void func_963(string var_76_string)
{
	var_76_string = "ui/NPC_Citizen1_b.png";
}


void func_965(bool var_68_bool)
{
	var_68_bool = false;
}


// @pe
void func_839(void)
{
	@SetVariable("ood12Littlegirl1", 1);
}


void func_967(string var_51_string, int var_52_int)
{
	string var_54_string = "idle";
	if(var_52_int != 0)
		var_54_string += var_52_int;
	var_54_string = var_51_string;
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_86_object, object var_87_object)
{
	var_0_object = var_87_object;
	var_1_object = var_86_object;
	var_3_string = false;
	if(1 != 0) {
		object var_93_object; object var_94_object;
		var_93_object = var_1_object;
		var_94_object = var_0_object;
		func_807();
		func_152(var_87_object, "Neutral");
		var_0_object->SetMessage(515005); //@t
		var_0_object->ClearReplies(); //@t
		bool var_153_bool;
		func_857(var_1_object);
		if(var_153_bool != 0)
			var_0_object->AddReply(515006, 42522, 16264); //@t
		bool var_162_bool;
		func_845(var_1_object);
		if(var_162_bool != 0)
			var_0_object->AddReply(515018, 16278, 16277); //@t
		var_0_object->AddReply(515017, -1, 16276); //@t
		goto Label_122;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_122:
	bool var_174_bool;
	func_965(var_174_bool);
	if(var_174_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_749(var_2_object);
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


// @pe
void func_845(bool var_162_bool)
{
	int var_164_int;
	func_796(var_164_int, "ood12Littlegirl2");
	if(var_164_int == 0) {
		var_162_bool = true;
		return 0;
	}
	var_162_bool = false;
}


void func_974(int var_45_int)
{
	int var_48_int; bool var_49_bool;
	var_48_int = 0;
	
	for(;;) {
		string var_51_string; int var_52_int;
		var_48_int = var_52_int;
		func_967(var_51_string, var_52_int);
		@HasAnimation(var_49_bool, "all", var_51_string);
		if(!var_49_bool) //@nz
			break;
		var_48_int += 1;
	}
	var_48_int = var_45_int;
}


// @pe
void func_857(bool var_153_bool)
{
	int var_155_int;
	func_796(var_155_int, "ood12Littlegirl1");
	if(var_155_int == 0) {
		var_153_bool = true;
		return 0;
	}
	var_153_bool = false;
}


void func_732(void)
{
	bool var_190_bool;
	@CameraSwitchToNormal();
	bool var_191_bool;
	func_965(var_191_bool);
	if(var_191_bool != 0) {
	} else {
		@HasAnimationTrack(var_190_bool, "head");
		if(var_190_bool == 0) goto Label_748;
		@UnlookAsync("head");
	}
Label_748:
	
}


void func_484(bool var_16_bool)
{
	var_16_bool = true;
}


void func_869(void)
{
	object var_104_object;
	@CreateDiaryEntry(var_104_object, 561, 0, 530575);
	bool var_108_bool; object var_109_object;
	var_104_object = var_109_object;
	func_895(var_108_bool, var_109_object, -1);
}
EMIT "Stack[-1] = 0";


// @pe
void func_486(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_22_float, float var_23_float)
{
	bool var_24_bool;
	func_659(var_24_bool);
	if(!var_24_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_22_float;
	var_1_object = var_23_float;
	@SetTimer(10, 1.0);
	func_565();
	if(!false) //@nz
		@KillTimer(10);
}


void func_749(string var_176_string)
{
	float var_179_float; float var_180_float;
	@lshGetAnimTimes(var_176_string, var_179_float, var_180_float);
	@lshPlayAnimation(var_179_float, var_180_float, false);
}


void func_882(object var_117_object)
{
	object var_119_object;
	@GetDiaryRoot(var_119_object);
	if(!var_119_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_117_object = false;
	}
	var_119_object = var_117_object;
}
EMIT "Stack[-1] = 0";


void func_756(string var_144_string, bool var_145_bool)
{
	float var_150_float; float var_151_float;
	@lshGetAnimTimes(var_144_string, var_150_float, var_151_float);
	@lshPlayAnimation(var_150_float, var_151_float, var_145_bool);
}


void func_762(object var_28_object)
{
	float var_31_float;
	var_28_object->GetEyesHeight(var_31_float);
	cvector var_32_cvector = [0.0, 0.0, 0.0];
	var_33_float = GetByIndex(var_32_cvector, 1);
	var_31_float = var_33_float;
	SetByIndex(var_32_cvector, 1) = var_33_float;
	@LookAsync(var_28_object, "head", var_32_cvector);
}


void func_895(bool var_108_bool, object var_109_object, int var_110_int)
{
	object var_117_object;
	func_882(var_117_object);
	object var_114_object;
	var_117_object = var_114_object;
	object var_115_object;
	var_114_object->Find(var_110_int, var_115_object);
	if(!var_115_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_110_int);
		var_108_bool = false;
	}
	var_115_object->AddChild(var_109_object);
	@SendWorldWndMessage(7);
	int var_116_int;
	var_109_object->GetCategory(var_116_int);
	@SetDiarySection(var_116_int);
	var_108_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


